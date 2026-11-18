// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 53

// StaticStruct @ 1443e3b90

UScriptStruct * __cdecl FDataflowInput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowInput.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowInput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowInput,(UObject *)pUVar1,L"DataflowInput"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FDataflowInput.OuterSingleton;
}

// operator()<TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>_> @ 1444068c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_144406965;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_144406965:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(double *)(pFVar3 + lVar10 * 8) = (double)(int)(char)(pTVar8->AllocatorInstance).Data[lVar10]
      ;
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_> @ 144406d00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_144406da5;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_144406da5:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(double *)(pFVar3 + lVar10 * 8) = (double)(byte)(pTVar8->AllocatorInstance).Data[lVar10];
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>_> @ 144407140

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<short,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<short,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<short,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_1444071e5;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_1444071e5:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(double *)(pFVar3 + lVar10 * 8) =
           (double)(int)*(short *)((pTVar8->AllocatorInstance).Data + lVar10 * 2);
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>_> @ 144407580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_144407625;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_144407625:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(double *)(pFVar3 + lVar10 * 8) =
           (double)*(ushort *)((pTVar8->AllocatorInstance).Data + lVar10 * 2);
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 144407940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<int,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_1444079e5;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_1444079e5:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(double *)(pFVar3 + lVar10 * 8) =
           (double)*(int *)((pTVar8->AllocatorInstance).Data + lVar10 * 4);
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_> @ 144407cd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_144407d75;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_144407d75:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(double *)(pFVar3 + lVar10 * 8) =
           (double)*(uint *)((pTVar8->AllocatorInstance).Data + lVar10 * 4);
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 144408120

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<float,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<float,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_1444081c5;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_1444081c5:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(double *)(pFVar3 + lVar10 * 8) =
           (double)*(float *)((pTVar8->AllocatorInstance).Data + lVar10 * 4);
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>_> @ 144408560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_> param_1
          )

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<double,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<double,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<double,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_144408605;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_144408605:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(undefined8 *)(pFVar3 + lVar10 * 8) =
           *(undefined8 *)((pTVar8->AllocatorInstance).Data + lVar10 * 8);
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_> @ 144409170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  IContextCacheStore *pIVar5;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  lVar14 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar4 = *(int *)(lVar14 + 8);
  if (iVar4 == 0) {
    pTVar12 = (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(lVar14 + 0x38);
  }
  else {
    if (iVar4 == 1) {
      pIVar5 = *(IContextCacheStore **)((longlong)this + 8);
      puVar11 = (undefined8 *)(**(code **)*pIVar5)(pIVar5,*(undefined4 *)(lVar14 + 0x38));
      if (puVar11 != (undefined8 *)0x0) {
        pTVar12 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar11,pIVar5,(FProperty *)0x0,&local_38)
        ;
        goto LAB_144409212;
      }
    }
    else if ((iVar4 != 2) &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar12 = &local_38;
  }
LAB_144409212:
  this_00 = *(TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> **)
             ((longlong)this + 0x18);
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,pTVar12->ArrayNum,Default);
  uVar13 = 0;
  if (0 < pTVar12->ArrayNum) {
    lVar15 = 0;
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < this_00->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this_00->AllocatorInstance).Data;
      uVar10 = 0;
      if ((int)uVar13 < pTVar12->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (pTVar12->AllocatorInstance).Data;
      uVar13 = uVar13 + 1;
      pFVar1 = pFVar7 + lVar15;
      uVar3 = *(undefined8 *)(pFVar7 + lVar15 + 4);
      fVar2 = *(float *)(pFVar7 + lVar15 + 0xc);
      lVar15 = lVar15 + 0x10;
      *(double *)(pFVar6 + lVar14) = (double)*(float *)pFVar1;
      *(double *)(pFVar6 + lVar14 + 8) = (double)(float)uVar3;
      *(double *)(pFVar6 + lVar14 + 8 + 8) = (double)(float)((ulonglong)uVar3 >> 0x20);
      *(double *)(pFVar6 + lVar14 + 0x18) = (double)fVar2;
      lVar14 = lVar14 + 0x20;
    } while ((int)uVar13 < pTVar12->ArrayNum);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>_> @ 144409ca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  IContextCacheStore *pIVar4;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_38;
  
  uVar13 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  lVar3 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 == 0) {
    pTVar11 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x38);
  }
  else {
    if (iVar2 == 1) {
      pIVar4 = *(IContextCacheStore **)((longlong)this + 8);
      puVar10 = (undefined8 *)(**(code **)*pIVar4)(pIVar4,*(undefined4 *)(lVar3 + 0x38));
      if (puVar10 != (undefined8 *)0x0) {
        pTVar11 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar10,pIVar4,(FProperty *)0x0,&local_38)
        ;
        goto LAB_144409d41;
      }
    }
    else if ((iVar2 != 2) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar11 = &local_38;
  }
LAB_144409d41:
  this_00 = *(TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> **)
             ((longlong)this + 0x18);
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,pTVar11->ArrayNum,Default);
  uVar14 = uVar13;
  uVar15 = uVar13;
  if (0 < pTVar11->ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar12 < this_00->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this_00->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar12 < pTVar11->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (pTVar11->AllocatorInstance).Data;
      uVar13 = (ulonglong)(uVar12 + 1);
      fVar1 = *(float *)(pFVar6 + uVar15 * 8 + 4);
      *(double *)(pFVar5 + uVar14) = (double)*(float *)(pFVar6 + uVar15 * 8);
      *(double *)(pFVar5 + uVar14 + 8) = (double)fVar1;
      *(undefined8 *)(pFVar5 + uVar14 + 0x10) = 0;
      *(undefined8 *)(pFVar5 + uVar14 + 0x18) = 0;
      uVar14 = uVar14 + 0x20;
      uVar15 = uVar15 + 1;
    } while ((int)(uVar12 + 1) < pTVar11->ArrayNum);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_> @ 14440a370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  IContextCacheStore *pIVar5;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  lVar14 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar4 = *(int *)(lVar14 + 8);
  if (iVar4 == 0) {
    pTVar12 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(lVar14 + 0x38);
  }
  else {
    if (iVar4 == 1) {
      pIVar5 = *(IContextCacheStore **)((longlong)this + 8);
      puVar11 = (undefined8 *)(**(code **)*pIVar5)(pIVar5,*(undefined4 *)(lVar14 + 0x38));
      if (puVar11 != (undefined8 *)0x0) {
        pTVar12 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar11,pIVar5,(FProperty *)0x0,&local_38)
        ;
        goto LAB_14440a412;
      }
    }
    else if ((iVar4 != 2) &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar12 = &local_38;
  }
LAB_14440a412:
  this_00 = *(TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> **)
             ((longlong)this + 0x18);
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,pTVar12->ArrayNum,Default);
  uVar13 = 0;
  if (0 < pTVar12->ArrayNum) {
    lVar15 = 0;
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < this_00->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this_00->AllocatorInstance).Data;
      uVar10 = 0;
      if ((int)uVar13 < pTVar12->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (pTVar12->AllocatorInstance).Data;
      uVar13 = uVar13 + 1;
      pFVar1 = pFVar7 + lVar15;
      uVar3 = *(undefined8 *)(pFVar7 + lVar15 + 4);
      fVar2 = *(float *)(pFVar7 + lVar15 + 0xc);
      lVar15 = lVar15 + 0x10;
      *(double *)(pFVar6 + lVar14) = (double)*(float *)pFVar1;
      *(double *)(pFVar6 + lVar14 + 8) = (double)(float)uVar3;
      *(double *)(pFVar6 + lVar14 + 8 + 8) = (double)(float)((ulonglong)uVar3 >> 0x20);
      *(double *)(pFVar6 + lVar14 + 0x18) = (double)fVar2;
      lVar14 = lVar14 + 0x20;
    } while ((int)uVar13 < pTVar12->ArrayNum);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_> @ 14440aaf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  IContextCacheStore *pIVar4;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  lVar13 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar3 = *(int *)(lVar13 + 8);
  if (iVar3 == 0) {
    pTVar11 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(lVar13 + 0x38);
  }
  else {
    if (iVar3 == 1) {
      pIVar4 = *(IContextCacheStore **)((longlong)this + 8);
      puVar10 = (undefined8 *)(**(code **)*pIVar4)(pIVar4,*(undefined4 *)(lVar13 + 0x38));
      if (puVar10 != (undefined8 *)0x0) {
        pTVar11 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar10,pIVar4,(FProperty *)0x0,&local_38)
        ;
        goto LAB_14440ab92;
      }
    }
    else if ((iVar3 != 2) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar11 = &local_38;
  }
LAB_14440ab92:
  this_00 = *(TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> **)
             ((longlong)this + 0x18);
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,pTVar11->ArrayNum,Default);
  uVar12 = 0;
  if (0 < pTVar11->ArrayNum) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < this_00->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this_00->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar12 < pTVar11->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (pTVar11->AllocatorInstance).Data;
      uVar12 = uVar12 + 1;
      pFVar1 = pFVar6 + lVar13;
      uVar2 = *(undefined8 *)(pFVar6 + lVar13 + 4);
      lVar13 = lVar13 + 0xc;
      *(double *)(pFVar5 + lVar14) = (double)*(float *)pFVar1;
      *(double *)(pFVar5 + lVar14 + 8) = (double)(float)uVar2;
      *(double *)(pFVar5 + lVar14 + 8 + 8) = (double)(float)((ulonglong)uVar2 >> 0x20);
      *(undefined8 *)(pFVar5 + lVar14 + 0x18) = 0;
      lVar14 = lVar14 + 0x20;
    } while ((int)uVar12 < pTVar11->ArrayNum);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>_> @ 14440b580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowStringArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  longlong lVar2;
  IContextCacheStore *pIVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  uVar10 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  lVar2 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar2 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar3 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar3)(pIVar3,*(undefined4 *)(lVar2 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<FName,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar3,(FProperty *)0x0,&local_48);
        goto LAB_14440b621;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_48;
  }
LAB_14440b621:
  this_00 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar12 = uVar10;
  uVar14 = uVar10;
  if (0 < pTVar8->ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar11 < this_00->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (this_00->AllocatorInstance).Data + uVar14;
      uVar6 = 0;
      if ((int)uVar11 < pTVar8->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (FScriptContainerElement *)
               ::FName::ToString((FName *)((pTVar8->AllocatorInstance).Data + uVar10 * 8),&local_38)
      ;
      if (pFVar13 != pFVar9) {
        if (*(void **)&pFVar13->field_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar13->field_0x0);
        }
        *(undefined8 *)&pFVar13->field_0x0 = *(undefined8 *)&pFVar9->field_0x0;
        *(undefined8 *)&pFVar9->field_0x0 = 0;
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(pFVar9 + 8);
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
        *(undefined8 *)(pFVar9 + 8) = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      uVar10 = uVar10 + 1;
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar11 + 1) < pTVar8->ArrayNum);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14440ba10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowStringArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  longlong lVar2;
  IContextCacheStore *pIVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar2 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar2 + 8);
  if (iVar1 == 0) {
    pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar3 = *(IContextCacheStore **)((longlong)this + 8);
      puVar8 = (undefined8 *)(**(code **)*pIVar3)(pIVar3,*(undefined4 *)(lVar2 + 0x38));
      if (puVar8 != (undefined8 *)0x0) {
        pTVar9 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<FString,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar8,pIVar3,(FProperty *)0x0,&local_28);
        goto LAB_14440bab5;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar9 = &local_28;
  }
LAB_14440bab5:
  this_00 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar9->ArrayNum,Default);
  uVar10 = 0;
  if (0 < pTVar9->ArrayNum) {
    do {
      uVar7 = 0;
      if ((int)uVar10 < this_00->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this_00->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar10 < pTVar9->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::FString::operator=
                ((FString *)(pFVar4 + (longlong)(int)uVar10 * 0x10),
                 (FString *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10));
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < pTVar9->ArrayNum);
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>_> @ 14440bdb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<__int64,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_14440be55;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_14440be55:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(double *)(pFVar3 + lVar10 * 8) =
           (double)*(longlong *)((pTVar8->AllocatorInstance).Data + lVar10 * 8);
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_> @ 14440c140

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_14440c1e5;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_14440c1e5:
  this_00 = *(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(double *)(pFVar3 + lVar10 * 8) =
           (double)*(ulonglong *)((pTVar8->AllocatorInstance).Data + lVar10 * 8);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14440c5a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowInput::GetValueFromAnyType<FDataflowBoolArrayTypes>'::__l17::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_> param_1)

{
  int iVar1;
  IContextCacheStore *pIVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TArray<bool,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar10 = *(longlong *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 == 0) {
    pTVar8 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x38);
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = *(IContextCacheStore **)((longlong)this + 8);
      puVar7 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,*(undefined4 *)(lVar10 + 0x38));
      if (puVar7 != (undefined8 *)0x0) {
        pTVar8 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<bool,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar7,pIVar2,(FProperty *)0x0,&local_28);
        goto LAB_14440c645;
      }
    }
    else if ((iVar1 != 2) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &local_28;
  }
LAB_14440c645:
  this_00 = *(TArray<bool,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(this_00,pTVar8->ArrayNum,Default);
  uVar9 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < this_00->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < pTVar8->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      pFVar3[lVar10] = (pTVar8->AllocatorInstance).Data[lVar10];
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < pTVar8->ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetValue<int> @ 1444186c0

int * __thiscall FDataflowInput::GetValue<int>(FDataflowInput *this,FContext *param_1,int *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  FDataflowNode *this_01;
  FProperty *pFVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FPropertyBagPropertyDesc *pFVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *local_res8;
  FTimestamp local_res20;
  FGuid local_58 [2];
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 == 0) || (*(char *)(lVar1 + 0x200) == '\0')) ||
       (UE::Dataflow::Private::bDisableFreezingState)) {
      bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
      if (!bVar4) {
        this_01 = (FDataflowNode *)this->_padding_;
        if (this_01 == (FDataflowNode *)0x0) {
          uVar6 = 0;
          local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
          uVar10 = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          uVar10 = (this_01->LastModifiedTimestamp).Value;
          local_res20.Value = uVar10;
          uVar6 = FDataflowNode::GetValueHash(this_01);
        }
        lVar1 = this->_padding_;
        if (lVar1 == 0) {
          local_58[0].A = 0;
          local_58[0].B = 0;
          local_58[0].C = 0;
          local_58[0].D = 0;
          uVar12 = local_58[0].A;
          uVar13 = local_58[0].B;
          uVar14 = local_58[0].C;
          uVar15 = local_58[0].D;
        }
        else {
          uVar12 = *(uint *)(lVar1 + 0x7c);
          uVar13 = *(uint *)(lVar1 + 0x80);
          uVar14 = *(uint *)(lVar1 + 0x84);
          uVar15 = *(uint *)(lVar1 + 0x88);
        }
        pFVar2 = (FProperty *)this->_padding_;
        local_58[0].B = uVar13;
        local_58[0].A = uVar12;
        local_58[0].D = uVar15;
        local_58[0].C = uVar14;
        uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
        local_res8 = (undefined8 *)0x0;
        puVar9 = ::operator_new(0x40);
        puVar11 = local_res8;
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar9 + 1) = 0;
          *puVar9 = &___7__TContextCacheElement_AEBH_Dataflow_UE__6B_;
          *(uint *)((longlong)puVar9 + 0xc) = uVar12;
          *(uint *)(puVar9 + 2) = uVar13;
          *(uint *)((longlong)puVar9 + 0x14) = uVar14;
          *(uint *)(puVar9 + 3) = uVar15;
          puVar9[4] = pFVar2;
          *(uint *)(puVar9 + 5) = uVar6;
          puVar9[6] = uVar10;
          *(int *)(puVar9 + 7) = *param_2;
        }
        if (local_res8 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*local_res8;
          local_res8 = puVar9;
          (*(code *)*puVar3)(puVar11,1);
          puVar9 = local_res8;
        }
        local_res8 = puVar9;
        if (local_res8 == (undefined8 *)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (param_1,(uint)uVar8,pFVar2,local_58,uVar6,&local_res20);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar8 & 0xffffffff,&local_res8);
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      uVar10 = UE::Dataflow::FTimestamp::Invalid;
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      cVar5 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar8 & 0xffffffff,uVar10);
      if (cVar5 != '\0') {
        pFVar2 = (FProperty *)this->_padding_;
        uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar11 = (undefined8 *)
                  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar10 & 0xffffffff);
        if (puVar11 != (undefined8 *)0x0) {
          param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<int>
                              ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)param_1,
                               pFVar2,param_2);
        }
      }
    }
    else {
      pFVar7 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar7 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar1 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        return (int *)((longlong)pFVar7->CachedProperty->Offset_Internal +
                      *(longlong *)(lVar1 + 0x1f8));
      }
    }
  }
  return param_2;
}

// GetValue<FDataflowImage> @ 144418930

FDataflowImage * __thiscall
FDataflowInput::GetValue<FDataflowImage>
          (FDataflowInput *this,FContext *param_1,FDataflowImage *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  FDataflowNode *this_01;
  FProperty *pFVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FPropertyBagPropertyDesc *pFVar9;
  ulong64 uVar10;
  FContextCacheElementUStruct *pFVar11;
  FContextCacheElementUStruct *pFVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  FTimestamp FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FContextCacheElementUStruct *local_res8;
  FTimestamp local_78 [2];
  FGuid local_68;
  FGuid local_58 [2];
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 == 0) || (*(char *)(lVar1 + 0x200) == '\0')) ||
       (UE::Dataflow::Private::bDisableFreezingState)) {
      bVar6 = FDataflowOutput::Evaluate(this_00,param_1);
      if (!bVar6) {
        this_01 = (FDataflowNode *)this->_padding_;
        pFVar12 = (FContextCacheElementUStruct *)0x0;
        if (this_01 == (FDataflowNode *)0x0) {
          uVar8 = 0;
          local_78[0].Value = UE::Dataflow::FTimestamp::Invalid;
          FVar15.Value = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          FVar15.Value = (this_01->LastModifiedTimestamp).Value;
          local_78[0].Value = FVar15.Value;
          uVar8 = FDataflowNode::GetValueHash(this_01);
        }
        lVar1 = this->_padding_;
        if (lVar1 == 0) {
          local_68.A = 0;
          local_68.B = 0;
          uVar4 = local_68._0_8_;
          local_68.C = 0;
          local_68.D = 0;
          uVar5 = local_68._8_8_;
          local_68.A = 0;
          local_68.B = 0;
          local_68.C = 0;
          local_68.D = 0;
          uVar16 = local_68.A;
          uVar17 = local_68.B;
          uVar18 = local_68.C;
          uVar19 = local_68.D;
          local_68._0_8_ = uVar4;
          local_68._8_8_ = uVar5;
        }
        else {
          uVar16 = *(uint *)(lVar1 + 0x7c);
          uVar17 = *(uint *)(lVar1 + 0x80);
          uVar18 = *(uint *)(lVar1 + 0x84);
          uVar19 = *(uint *)(lVar1 + 0x88);
        }
        pFVar2 = (FProperty *)this->_padding_;
        local_58[0].A = uVar16;
        local_58[0].B = uVar17;
        local_58[0].C = uVar18;
        local_58[0].D = uVar19;
        uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
        local_res8 = (FContextCacheElementUStruct *)0x0;
        pFVar11 = ::operator_new(0x58);
        if (pFVar11 != (FContextCacheElementUStruct *)0x0) {
          local_68.B = uVar17;
          local_68.A = uVar16;
          local_68.D = uVar19;
          local_68.C = uVar18;
          pFVar12 = UE::Dataflow::FContextCacheElementUStruct::
                    FContextCacheElementUStruct<FDataflowImage_const_&>
                              (pFVar11,&local_68,pFVar2,param_2,uVar8,FVar15);
        }
        pFVar11 = local_res8;
        if (local_res8 != (FContextCacheElementUStruct *)0x0) {
          plVar3 = &local_res8->_padding_;
          local_res8 = pFVar12;
          (**(code **)*plVar3)(pFVar11,1);
          pFVar12 = local_res8;
        }
        local_res8 = pFVar12;
        if (local_res8 == (FContextCacheElementUStruct *)0x0) {
          UE::Dataflow::FContext::SetNullData(param_1,(uint)uVar10,pFVar2,local_58,uVar8,local_78);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res8);
        }
        if (local_res8 != (FContextCacheElementUStruct *)0x0) {
          (**(code **)local_res8->_padding_)(local_res8,1);
        }
      }
      uVar10 = UE::Dataflow::FTimestamp::Invalid;
      uVar13 = CityHash64((char *)&this_00->_padding_,0x10);
      cVar7 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar13 & 0xffffffff,uVar10);
      if (cVar7 != '\0') {
        pFVar2 = (FProperty *)this->_padding_;
        uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar14 = (undefined8 *)
                  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar10 & 0xffffffff);
        if (puVar14 != (undefined8 *)0x0) {
          param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowImage>
                              ((FContextCacheElementBase *)*puVar14,(IContextCacheStore *)param_1,
                               pFVar2,param_2);
        }
      }
    }
    else {
      pFVar9 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar9 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar1 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (FDataflowImage *)
                  ((longlong)pFVar9->CachedProperty->Offset_Internal + *(longlong *)(lVar1 + 0x1f8))
        ;
      }
    }
  }
  return param_2;
}

// GetValue<FLinearColor> @ 144418e70

FLinearColor * __thiscall
FDataflowInput::GetValue<FLinearColor>(FDataflowInput *this,FContext *param_1,FLinearColor *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  FDataflowNode *this_01;
  FProperty *pFVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FPropertyBagPropertyDesc *pFVar9;
  ulong64 uVar10;
  FContextCacheElementUStruct *pFVar11;
  FContextCacheElementUStruct *pFVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  FTimestamp FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FContextCacheElementUStruct *local_res8;
  FTimestamp local_78 [2];
  FGuid local_68;
  FGuid local_58 [2];
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 == 0) || (*(char *)(lVar1 + 0x200) == '\0')) ||
       (UE::Dataflow::Private::bDisableFreezingState)) {
      bVar6 = FDataflowOutput::Evaluate(this_00,param_1);
      if (!bVar6) {
        this_01 = (FDataflowNode *)this->_padding_;
        pFVar12 = (FContextCacheElementUStruct *)0x0;
        if (this_01 == (FDataflowNode *)0x0) {
          uVar8 = 0;
          local_78[0].Value = UE::Dataflow::FTimestamp::Invalid;
          FVar15.Value = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          FVar15.Value = (this_01->LastModifiedTimestamp).Value;
          local_78[0].Value = FVar15.Value;
          uVar8 = FDataflowNode::GetValueHash(this_01);
        }
        lVar1 = this->_padding_;
        if (lVar1 == 0) {
          local_68.A = 0;
          local_68.B = 0;
          uVar4 = local_68._0_8_;
          local_68.C = 0;
          local_68.D = 0;
          uVar5 = local_68._8_8_;
          local_68.A = 0;
          local_68.B = 0;
          local_68.C = 0;
          local_68.D = 0;
          uVar16 = local_68.A;
          uVar17 = local_68.B;
          uVar18 = local_68.C;
          uVar19 = local_68.D;
          local_68._0_8_ = uVar4;
          local_68._8_8_ = uVar5;
        }
        else {
          uVar16 = *(uint *)(lVar1 + 0x7c);
          uVar17 = *(uint *)(lVar1 + 0x80);
          uVar18 = *(uint *)(lVar1 + 0x84);
          uVar19 = *(uint *)(lVar1 + 0x88);
        }
        pFVar2 = (FProperty *)this->_padding_;
        local_58[0].A = uVar16;
        local_58[0].B = uVar17;
        local_58[0].C = uVar18;
        local_58[0].D = uVar19;
        uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
        local_res8 = (FContextCacheElementUStruct *)0x0;
        pFVar11 = ::operator_new(0x58);
        if (pFVar11 != (FContextCacheElementUStruct *)0x0) {
          local_68.B = uVar17;
          local_68.A = uVar16;
          local_68.D = uVar19;
          local_68.C = uVar18;
          pFVar12 = UE::Dataflow::FContextCacheElementUStruct::
                    FContextCacheElementUStruct<FLinearColor_const_&>
                              (pFVar11,&local_68,pFVar2,param_2,uVar8,FVar15);
        }
        pFVar11 = local_res8;
        if (local_res8 != (FContextCacheElementUStruct *)0x0) {
          plVar3 = &local_res8->_padding_;
          local_res8 = pFVar12;
          (**(code **)*plVar3)(pFVar11,1);
          pFVar12 = local_res8;
        }
        local_res8 = pFVar12;
        if (local_res8 == (FContextCacheElementUStruct *)0x0) {
          UE::Dataflow::FContext::SetNullData(param_1,(uint)uVar10,pFVar2,local_58,uVar8,local_78);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res8);
        }
        if (local_res8 != (FContextCacheElementUStruct *)0x0) {
          (**(code **)local_res8->_padding_)(local_res8,1);
        }
      }
      uVar10 = UE::Dataflow::FTimestamp::Invalid;
      uVar13 = CityHash64((char *)&this_00->_padding_,0x10);
      cVar7 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar13 & 0xffffffff,uVar10);
      if (cVar7 != '\0') {
        pFVar2 = (FProperty *)this->_padding_;
        uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar14 = (undefined8 *)
                  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar10 & 0xffffffff);
        if (puVar14 != (undefined8 *)0x0) {
          param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FLinearColor>
                              ((FContextCacheElementBase *)*puVar14,(IContextCacheStore *)param_1,
                               pFVar2,param_2);
        }
      }
    }
    else {
      pFVar9 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar9 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar1 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (FLinearColor *)
                  ((longlong)pFVar9->CachedProperty->Offset_Internal + *(longlong *)(lVar1 + 0x1f8))
        ;
      }
    }
  }
  return param_2;
}

// GetValue<FManagedArrayCollection> @ 1444190f0

FManagedArrayCollection * __thiscall
FDataflowInput::GetValue<FManagedArrayCollection>
          (FDataflowInput *this,FContext *param_1,FManagedArrayCollection *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  FDataflowNode *this_01;
  FProperty *pFVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  FPropertyBagPropertyDesc *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTimestamp local_res8;
  FGuid local_28;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 == 0) || (*(char *)(lVar1 + 0x200) == '\0')) ||
       (UE::Dataflow::Private::bDisableFreezingState)) {
      bVar3 = FDataflowOutput::Evaluate(this_00,param_1);
      if (!bVar3) {
        this_01 = (FDataflowNode *)this->_padding_;
        if (this_01 == (FDataflowNode *)0x0) {
          uVar5 = 0;
          local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          local_res8.Value = (this_01->LastModifiedTimestamp).Value;
          uVar5 = FDataflowNode::GetValueHash(this_01);
        }
        lVar1 = this->_padding_;
        if (lVar1 == 0) {
          local_28.A = 0;
          local_28.B = 0;
          local_28.C = 0;
          local_28.D = 0;
        }
        else {
          local_28.A = *(uint *)(lVar1 + 0x7c);
          local_28.B = *(uint *)(lVar1 + 0x80);
          local_28.C = *(uint *)(lVar1 + 0x84);
          local_28.D = *(uint *)(lVar1 + 0x88);
        }
        pFVar2 = (FProperty *)this->_padding_;
        uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
        UE::Dataflow::FContext::SetData<FManagedArrayCollection_const_&>
                  (param_1,(uint)uVar7,pFVar2,param_2,&local_28,uVar5,&local_res8);
      }
      uVar7 = UE::Dataflow::FTimestamp::Invalid;
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      cVar4 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar8 & 0xffffffff,uVar7);
      if (cVar4 != '\0') {
        pFVar2 = (FProperty *)this->_padding_;
        uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
        if (puVar9 != (undefined8 *)0x0) {
          param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FManagedArrayCollection>
                              ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                               pFVar2,param_2);
        }
      }
    }
    else {
      pFVar6 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar6 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         (*(longlong *)(lVar1 + 0x1f0) != 0)) {
        param_2 = (FManagedArrayCollection *)
                  ((longlong)pFVar6->CachedProperty->Offset_Internal + *(longlong *)(lVar1 + 0x1f8))
        ;
      }
    }
  }
  return param_2;
}

// GetValue<TArray<int,TSizedDefaultAllocator<32>_>_> @ 1444192b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FDataflowOutput *this_00;
  longlong lVar3;
  FDataflowNode *this_01;
  FProperty *pFVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FPropertyBagPropertyDesc *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  undefined8 *local_res8;
  FTimestamp local_res20;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  FGuid local_58 [2];
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar3 = this_00->_padding_;
    if (((lVar3 == 0) || (*(char *)(lVar3 + 0x200) == '\0')) ||
       (UE::Dataflow::Private::bDisableFreezingState)) {
      bVar7 = FDataflowOutput::Evaluate(this_00,param_1);
      if (!bVar7) {
        this_01 = (FDataflowNode *)this->_padding_;
        if (this_01 == (FDataflowNode *)0x0) {
          uVar9 = 0;
          local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
          uVar13 = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          uVar13 = (this_01->LastModifiedTimestamp).Value;
          local_res20.Value = uVar13;
          uVar9 = FDataflowNode::GetValueHash(this_01);
        }
        lVar3 = this->_padding_;
        if (lVar3 == 0) {
          local_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
        }
        else {
          local_68 = *(uint *)(lVar3 + 0x7c);
          uStack_64 = *(uint *)(lVar3 + 0x80);
          uStack_60 = *(uint *)(lVar3 + 0x84);
          uStack_5c = *(uint *)(lVar3 + 0x88);
        }
        pFVar4 = (FProperty *)this->_padding_;
        local_58[0].A = local_68;
        local_58[0].B = uStack_64;
        local_58[0].C = uStack_60;
        local_58[0].D = uStack_5c;
        uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
        local_res8 = (undefined8 *)0x0;
        puVar12 = ::operator_new(0x48);
        if (puVar12 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)0x0;
        }
        else {
          *(undefined4 *)(puVar12 + 1) = 0;
          *(uint *)((longlong)puVar12 + 0xc) = local_68;
          *(uint *)(puVar12 + 2) = uStack_64;
          *(uint *)((longlong)puVar12 + 0x14) = uStack_60;
          *(uint *)(puVar12 + 3) = uStack_5c;
          puVar12[4] = pFVar4;
          puVar12[6] = uVar13;
          pFVar1 = (ForAnyElementType *)(puVar12 + 7);
          *puVar12 = &
                     ___7__TContextCacheElement_AEBV__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
          ;
          *(uint *)(puVar12 + 5) = uVar9;
          pFVar1->Data = (FScriptContainerElement *)0x0;
          _Src = (param_2->AllocatorInstance).Data;
          iVar2 = param_2->ArrayNum;
          *(int *)(puVar12 + 8) = iVar2;
          if (iVar2 == 0) {
            *(int *)((longlong)puVar12 + 0x44) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar12 + 0x44));
            memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
          }
        }
        puVar6 = local_res8;
        if (local_res8 != (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*local_res8;
          local_res8 = puVar12;
          (*(code *)*puVar5)(puVar6,1);
          puVar12 = local_res8;
        }
        local_res8 = puVar12;
        if (local_res8 == (undefined8 *)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (param_1,(uint)uVar11,pFVar4,local_58,uVar9,&local_res20);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar11 & 0xffffffff,&local_res8);
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      uVar13 = UE::Dataflow::FTimestamp::Invalid;
      uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
      cVar8 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar11 & 0xffffffff,uVar13);
      if (cVar8 != '\0') {
        pFVar4 = (FProperty *)this->_padding_;
        uVar13 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar12 = (undefined8 *)
                  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar13 & 0xffffffff);
        if (puVar12 != (undefined8 *)0x0) {
          param_2 = UE::Dataflow::FContextCacheElementBase::
                    GetTypedData<TArray<int,TSizedDefaultAllocator<32>_>_>
                              ((FContextCacheElementBase *)*puVar12,(IContextCacheStore *)param_1,
                               pFVar4,param_2);
        }
      }
    }
    else {
      pFVar10 = FInstancedPropertyBag::FindPropertyDescByName
                          ((FInstancedPropertyBag *)(lVar3 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar10 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar3 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar3 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pFVar10->CachedProperty->Offset_Internal + *(longlong *)(lVar3 + 0x1f8)
                  );
      }
    }
  }
  return param_2;
}

// GetValue<FName> @ 1444195a0

FName * __thiscall
FDataflowInput::GetValue<FName>(FDataflowInput *this,FContext *param_1,FName *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  FDataflowNode *this_01;
  FProperty *pFVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FPropertyBagPropertyDesc *pFVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *local_res8;
  FTimestamp local_res20;
  FGuid local_58 [2];
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 == 0) || (*(char *)(lVar1 + 0x200) == '\0')) ||
       (UE::Dataflow::Private::bDisableFreezingState)) {
      bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
      if (!bVar4) {
        this_01 = (FDataflowNode *)this->_padding_;
        if (this_01 == (FDataflowNode *)0x0) {
          uVar6 = 0;
          local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
          uVar10 = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          uVar10 = (this_01->LastModifiedTimestamp).Value;
          local_res20.Value = uVar10;
          uVar6 = FDataflowNode::GetValueHash(this_01);
        }
        lVar1 = this->_padding_;
        if (lVar1 == 0) {
          local_58[0].A = 0;
          local_58[0].B = 0;
          local_58[0].C = 0;
          local_58[0].D = 0;
          uVar12 = local_58[0].A;
          uVar13 = local_58[0].B;
          uVar14 = local_58[0].C;
          uVar15 = local_58[0].D;
        }
        else {
          uVar12 = *(uint *)(lVar1 + 0x7c);
          uVar13 = *(uint *)(lVar1 + 0x80);
          uVar14 = *(uint *)(lVar1 + 0x84);
          uVar15 = *(uint *)(lVar1 + 0x88);
        }
        pFVar2 = (FProperty *)this->_padding_;
        local_58[0].B = uVar13;
        local_58[0].A = uVar12;
        local_58[0].D = uVar15;
        local_58[0].C = uVar14;
        uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
        local_res8 = (undefined8 *)0x0;
        puVar9 = ::operator_new(0x40);
        puVar11 = local_res8;
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar9 + 1) = 0;
          *puVar9 = &___7__TContextCacheElement_AEBVFName___Dataflow_UE__6B_;
          *(uint *)((longlong)puVar9 + 0xc) = uVar12;
          *(uint *)(puVar9 + 2) = uVar13;
          *(uint *)((longlong)puVar9 + 0x14) = uVar14;
          *(uint *)(puVar9 + 3) = uVar15;
          puVar9[4] = pFVar2;
          *(uint *)(puVar9 + 5) = uVar6;
          puVar9[6] = uVar10;
          *(FName *)(puVar9 + 7) = *param_2;
        }
        if (local_res8 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*local_res8;
          local_res8 = puVar9;
          (*(code *)*puVar3)(puVar11,1);
          puVar9 = local_res8;
        }
        local_res8 = puVar9;
        if (local_res8 == (undefined8 *)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (param_1,(uint)uVar8,pFVar2,local_58,uVar6,&local_res20);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar8 & 0xffffffff,&local_res8);
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      uVar10 = UE::Dataflow::FTimestamp::Invalid;
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      cVar5 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar8 & 0xffffffff,uVar10);
      if (cVar5 != '\0') {
        pFVar2 = (FProperty *)this->_padding_;
        uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar11 = (undefined8 *)
                  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar10 & 0xffffffff);
        if (puVar11 != (undefined8 *)0x0) {
          param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FName>
                              ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)param_1,
                               pFVar2,param_2);
        }
      }
    }
    else {
      pFVar7 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar7 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar1 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        return (FName *)((longlong)pFVar7->CachedProperty->Offset_Internal +
                        *(longlong *)(lVar1 + 0x1f8));
      }
    }
  }
  return param_2;
}

// GetValue<FString> @ 144419820

FString * __thiscall
FDataflowInput::GetValue<FString>(FDataflowInput *this,FContext *param_1,FString *param_2)

{
  FDataflowOutput *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  FProperty *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FString *pFVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  undefined8 *local_res8;
  FTimestamp local_res20;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  FGuid local_58 [2];
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    if (((this_00->_padding_ != 0) && (*(char *)(this_00->_padding_ + 0x200) != '\0')) &&
       (!UE::Dataflow::Private::bDisableFreezingState)) {
      pFVar8 = FDataflowOutput::GetFrozenValue<FString>(this_00,param_2);
      return pFVar8;
    }
    bVar5 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar5) {
      this_01 = (FDataflowNode *)this->_padding_;
      if (this_01 == (FDataflowNode *)0x0) {
        uVar7 = 0;
        local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
        uVar11 = UE::Dataflow::FTimestamp::Invalid;
      }
      else {
        uVar11 = (this_01->LastModifiedTimestamp).Value;
        local_res20.Value = uVar11;
        uVar7 = FDataflowNode::GetValueHash(this_01);
      }
      lVar1 = this->_padding_;
      if (lVar1 == 0) {
        local_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
      }
      else {
        local_68 = *(uint *)(lVar1 + 0x7c);
        uStack_64 = *(uint *)(lVar1 + 0x80);
        uStack_60 = *(uint *)(lVar1 + 0x84);
        uStack_5c = *(uint *)(lVar1 + 0x88);
      }
      pFVar2 = (FProperty *)this->_padding_;
      local_58[0].A = local_68;
      local_58[0].B = uStack_64;
      local_58[0].C = uStack_60;
      local_58[0].D = uStack_5c;
      uVar9 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (undefined8 *)0x0;
      puVar10 = ::operator_new(0x48);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar10 + 1) = 0;
        *(uint *)((longlong)puVar10 + 0xc) = local_68;
        *(uint *)(puVar10 + 2) = uStack_64;
        *(uint *)((longlong)puVar10 + 0x14) = uStack_60;
        *(uint *)(puVar10 + 3) = uStack_5c;
        puVar10[4] = pFVar2;
        *puVar10 = &___7__TContextCacheElement_AEBVFString___Dataflow_UE__6B_;
        *(uint *)(puVar10 + 5) = uVar7;
        puVar10[6] = uVar11;
        ::FString::FString((FString *)(puVar10 + 7),param_2);
      }
      puVar4 = local_res8;
      if (local_res8 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*local_res8;
        local_res8 = puVar10;
        (*(code *)*puVar3)(puVar4,1);
        puVar10 = local_res8;
      }
      local_res8 = puVar10;
      if (local_res8 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData(param_1,(uint)uVar9,pFVar2,local_58,uVar7,&local_res20);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar9 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    uVar11 = UE::Dataflow::FTimestamp::Invalid;
    uVar9 = CityHash64((char *)&this_00->_padding_,0x10);
    cVar6 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar9 & 0xffffffff,uVar11);
    if (cVar6 != '\0') {
      pFVar2 = (FProperty *)this->_padding_;
      uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar10 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar11 & 0xffffffff);
      if (puVar10 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FString>
                            ((FContextCacheElementBase *)*puVar10,(IContextCacheStore *)param_1,
                             pFVar2,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<enum_EDataflowImageResolution> @ 144419a70

EDataflowImageResolution * __thiscall
FDataflowInput::GetValue<enum_EDataflowImageResolution>
          (FDataflowInput *this,FContext *param_1,EDataflowImageResolution *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  FDataflowNode *this_01;
  FProperty *pFVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FPropertyBagPropertyDesc *pFVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *local_res8;
  FTimestamp local_res20;
  FGuid local_58 [2];
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 == 0) || (*(char *)(lVar1 + 0x200) == '\0')) ||
       (UE::Dataflow::Private::bDisableFreezingState)) {
      bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
      if (!bVar4) {
        this_01 = (FDataflowNode *)this->_padding_;
        if (this_01 == (FDataflowNode *)0x0) {
          uVar6 = 0;
          local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
          uVar10 = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          uVar10 = (this_01->LastModifiedTimestamp).Value;
          local_res20.Value = uVar10;
          uVar6 = FDataflowNode::GetValueHash(this_01);
        }
        lVar1 = this->_padding_;
        if (lVar1 == 0) {
          local_58[0].A = 0;
          local_58[0].B = 0;
          local_58[0].C = 0;
          local_58[0].D = 0;
          uVar12 = local_58[0].A;
          uVar13 = local_58[0].B;
          uVar14 = local_58[0].C;
          uVar15 = local_58[0].D;
        }
        else {
          uVar12 = *(uint *)(lVar1 + 0x7c);
          uVar13 = *(uint *)(lVar1 + 0x80);
          uVar14 = *(uint *)(lVar1 + 0x84);
          uVar15 = *(uint *)(lVar1 + 0x88);
        }
        pFVar2 = (FProperty *)this->_padding_;
        local_58[0].B = uVar13;
        local_58[0].A = uVar12;
        local_58[0].D = uVar15;
        local_58[0].C = uVar14;
        uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
        local_res8 = (undefined8 *)0x0;
        puVar9 = ::operator_new(0x40);
        puVar11 = local_res8;
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar9 + 1) = 0;
          *puVar9 = &___7__TContextCacheElement_AEBW4EDataflowImageResolution___Dataflow_UE__6B_;
          *(uint *)((longlong)puVar9 + 0xc) = uVar12;
          *(uint *)(puVar9 + 2) = uVar13;
          *(uint *)((longlong)puVar9 + 0x14) = uVar14;
          *(uint *)(puVar9 + 3) = uVar15;
          puVar9[4] = pFVar2;
          *(uint *)(puVar9 + 5) = uVar6;
          puVar9[6] = uVar10;
          *(EDataflowImageResolution *)(puVar9 + 7) = *param_2;
        }
        if (local_res8 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*local_res8;
          local_res8 = puVar9;
          (*(code *)*puVar3)(puVar11,1);
          puVar9 = local_res8;
        }
        local_res8 = puVar9;
        if (local_res8 == (undefined8 *)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (param_1,(uint)uVar8,pFVar2,local_58,uVar6,&local_res20);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar8 & 0xffffffff,&local_res8);
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      uVar10 = UE::Dataflow::FTimestamp::Invalid;
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      cVar5 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar8 & 0xffffffff,uVar10);
      if (cVar5 != '\0') {
        pFVar2 = (FProperty *)this->_padding_;
        uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar11 = (undefined8 *)
                  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar10 & 0xffffffff);
        if (puVar11 != (undefined8 *)0x0) {
          param_2 = UE::Dataflow::FContextCacheElementBase::
                    GetTypedData<enum_EDataflowImageResolution>
                              ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)param_1,
                               pFVar2,param_2);
        }
      }
    }
    else {
      pFVar7 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar7 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar1 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        return (EDataflowImageResolution *)
               ((longlong)pFVar7->CachedProperty->Offset_Internal + *(longlong *)(lVar1 + 0x1f8));
      }
    }
  }
  return param_2;
}

// GetValue<bool> @ 144419ce0

bool * __thiscall
FDataflowInput::GetValue<bool>(FDataflowInput *this,FContext *param_1,bool *param_2)

{
  FDataflowOutput *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  FProperty *pFVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  bool *pbVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *local_res8;
  FTimestamp local_res20;
  FGuid local_58 [2];
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    if (((this_00->_padding_ != 0) && (*(char *)(this_00->_padding_ + 0x200) != '\0')) &&
       (!UE::Dataflow::Private::bDisableFreezingState)) {
      pbVar7 = FDataflowOutput::GetFrozenValue<bool>(this_00,param_2);
      return pbVar7;
    }
    bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar4) {
      this_01 = (FDataflowNode *)this->_padding_;
      if (this_01 == (FDataflowNode *)0x0) {
        uVar6 = 0;
        local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
        uVar10 = UE::Dataflow::FTimestamp::Invalid;
      }
      else {
        uVar10 = (this_01->LastModifiedTimestamp).Value;
        local_res20.Value = uVar10;
        uVar6 = FDataflowNode::GetValueHash(this_01);
      }
      lVar1 = this->_padding_;
      if (lVar1 == 0) {
        local_58[0].A = 0;
        local_58[0].B = 0;
        local_58[0].C = 0;
        local_58[0].D = 0;
        uVar12 = local_58[0].A;
        uVar13 = local_58[0].B;
        uVar14 = local_58[0].C;
        uVar15 = local_58[0].D;
      }
      else {
        uVar12 = *(uint *)(lVar1 + 0x7c);
        uVar13 = *(uint *)(lVar1 + 0x80);
        uVar14 = *(uint *)(lVar1 + 0x84);
        uVar15 = *(uint *)(lVar1 + 0x88);
      }
      pFVar2 = (FProperty *)this->_padding_;
      local_58[0].B = uVar13;
      local_58[0].A = uVar12;
      local_58[0].D = uVar15;
      local_58[0].C = uVar14;
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (undefined8 *)0x0;
      puVar9 = ::operator_new(0x40);
      puVar11 = local_res8;
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar9 + 1) = 0;
        *puVar9 = &___7__TContextCacheElement_AEB_N_Dataflow_UE__6B_;
        *(uint *)((longlong)puVar9 + 0xc) = uVar12;
        *(uint *)(puVar9 + 2) = uVar13;
        *(uint *)((longlong)puVar9 + 0x14) = uVar14;
        *(uint *)(puVar9 + 3) = uVar15;
        puVar9[4] = pFVar2;
        *(uint *)(puVar9 + 5) = uVar6;
        puVar9[6] = uVar10;
        *(bool *)(puVar9 + 7) = *param_2;
      }
      if (local_res8 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*local_res8;
        local_res8 = puVar9;
        (*(code *)*puVar3)(puVar11,1);
        puVar9 = local_res8;
      }
      local_res8 = puVar9;
      if (local_res8 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData(param_1,(uint)uVar8,pFVar2,local_58,uVar6,&local_res20);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar8 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    uVar10 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    cVar5 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar8 & 0xffffffff,uVar10);
    if (cVar5 != '\0') {
      pFVar2 = (FProperty *)this->_padding_;
      uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar11 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar10 & 0xffffffff);
      if (puVar11 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<bool>
                            ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)param_1,
                             pFVar2,param_2);
      }
    }
  }
  return param_2;
}

// GetValueFromAnyType<FDataflowBoolArrayTypes> @ 144419f20

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowBoolArrayTypes>
          (FDataflowInput *this,TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FContext *param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FDataflowOutput *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FPropertyBagPropertyDesc *pFVar6;
  ulong64 uVar7;
  size_t _Size;
  longlong *local_res8;
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FDataflowInput *local_48;
  FContext *local_40;
  longlong **local_38;
  ForAnyElementType *local_30;
  
  local_50 = param_2->ArrayNum;
  _Size = (size_t)local_50;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar2,_Size);
  }
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar3 = this_00->_padding_;
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x200) != '\0')) &&
       (UE::Dataflow::Private::bDisableFreezingState == false)) {
      pFVar6 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar3 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar6 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar3 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar3 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pFVar6->CachedProperty->Offset_Internal + *(longlong *)(lVar3 + 0x1f8))
        ;
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar1 = param_2->ArrayNum;
      pFVar2 = (param_2->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar1;
      if (iVar1 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,(longlong)iVar1);
      }
      if (local_58.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_58.Data);
      return __return_storage_ptr__;
    }
    bVar5 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar5) {
      pcVar4 = *(code **)(param_1->_padding_ + 0x30);
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (longlong *)(*pcVar4)(param_1,uVar7);
      if ((local_res8 != (longlong *)0x0) && (*local_res8 != 0)) {
        local_38 = &local_res8;
        local_30 = &local_58;
        if ((FName)this->_padding_ ==
            TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>::TypeName) {
          local_48 = this;
          local_40 = param_1;
          `FDataflowInput::GetValueFromAnyType<FDataflowBoolArrayTypes>'::__l17::<lambda_1>::
          operator()<TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                    (&local_48,
                     (TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>)
                     local_res20);
        }
      }
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
  __return_storage_ptr__->ArrayNum = local_50;
  __return_storage_ptr__->ArrayMax = local_4c;
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowBoolTypes> @ 14441a120

bool __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowBoolTypes>
          (FDataflowInput *this,FContext *param_1,bool *param_2)

{
  int iVar1;
  FDataflowOutput *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  bool *pbVar6;
  ulong64 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  bool local_res8 [8];
  
  this_00 = this->Connection;
  bVar4 = *param_2;
  local_res8[0] = bVar4;
  if (this_00 != (FDataflowOutput *)0x0) {
    if (((this_00->_padding_ != 0) && (*(char *)(this_00->_padding_ + 0x200) != '\0')) &&
       (!UE::Dataflow::Private::bDisableFreezingState)) {
      pbVar6 = FDataflowOutput::GetFrozenValue<bool>(this_00,param_2);
      return *pbVar6;
    }
    bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar4) {
      pcVar2 = *(code **)(param_1->_padding_ + 0x30);
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      plVar8 = (longlong *)(*pcVar2)(param_1,uVar7);
      if (((plVar8 != (longlong *)0x0) && (lVar3 = *plVar8, lVar3 != 0)) &&
         ((FName)this->_padding_ == TDataflowSingleTypePolicy<bool>::TypeName)) {
        local_res8[0] = false;
        iVar1 = *(int *)(lVar3 + 8);
        if (iVar1 == 0) {
          return (bool)*(undefined1 *)(lVar3 + 0x38);
        }
        if (iVar1 == 1) {
          puVar9 = (undefined8 *)
                   (**(code **)param_1->_padding_)(param_1,*(undefined4 *)(lVar3 + 0x38));
          if (puVar9 == (undefined8 *)0x0) {
            return local_res8[0];
          }
          pbVar6 = UE::Dataflow::FContextCacheElementBase::GetTypedData<bool>
                             ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                              (FProperty *)0x0,local_res8);
          return *pbVar6;
        }
        if (iVar1 == 2) {
          return false;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                           ,0x24a,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
    }
  }
  return local_res8[0];
}

// GetValueFromAnyType<FDataflowNumericArrayTypes> @ 14441a2b0

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>
          (FDataflowInput *this,TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FContext *param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FDataflowOutput *this_00;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  FPropertyBagPropertyDesc *pFVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong *local_res8;
  undefined1 local_res20 [8];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FDataflowInput *local_58;
  FContext *local_50;
  longlong **local_48;
  ForAnyElementType *local_40;
  
  local_60 = param_2->ArrayNum;
  lVar8 = (longlong)local_60;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_60,0,&local_68,local_60,&local_5c);
    memcpy(local_68.Data,pFVar2,lVar8 << 3);
  }
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar8 = this_00->_padding_;
    if (((lVar8 != 0) && (*(char *)(lVar8 + 0x200) != '\0')) &&
       (UE::Dataflow::Private::bDisableFreezingState == false)) {
      pFVar6 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar8 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar6 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar8 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar8 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (TArray<double,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pFVar6->CachedProperty->Offset_Internal + *(longlong *)(lVar8 + 0x1f8))
        ;
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar1 = param_2->ArrayNum;
      pFVar2 = (param_2->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar1;
      if (iVar1 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,(longlong)iVar1 << 3);
      }
      if (local_68.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_68.Data);
      return __return_storage_ptr__;
    }
    bVar5 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar5) {
      pcVar3 = *(code **)(param_1->_padding_ + 0x30);
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (longlong *)(*pcVar3)(param_1,uVar7);
      if ((local_res8 != (longlong *)0x0) && (*local_res8 != 0)) {
        FVar4 = (FName)this->_padding_;
        local_48 = &local_res8;
        local_40 = &local_68;
        local_58 = this;
        local_50 = param_1;
        if (FVar4 == TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::
                     TypeName) {
          `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
          operator()<TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>_>
                    (&local_58,
                     (TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>)
                     local_res20);
        }
        else {
          local_48 = &local_res8;
          local_40 = &local_68;
          if (FVar4 == TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::
                       TypeName) {
            `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
            operator()<TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                      (&local_58,
                       (TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>)
                       local_res20);
          }
          else {
            local_48 = &local_res8;
            local_40 = &local_68;
            if (FVar4 == TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
                         TypeName) {
              `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>::
              operator()<TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>_>
                        (&local_58,
                         (TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>)
                         local_res20);
            }
            else {
              local_48 = &local_res8;
              local_40 = &local_68;
              if (FVar4 == TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                           ::TypeName) {
                `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::<lambda_1>
                ::
                operator()<TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>
                          (&local_58,
                           (TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                            )local_res20);
              }
              else {
                local_48 = &local_res8;
                local_40 = &local_68;
                if (FVar4 == TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::
                             TypeName) {
                  `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::
                  <lambda_1>::
                  operator()<TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                            (&local_58,
                             (TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>)
                             local_res20);
                }
                else {
                  local_48 = &local_res8;
                  local_40 = &local_68;
                  if (FVar4 == TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                               ::TypeName) {
                    `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::
                    <lambda_1>::
                    operator()<TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>
                              (&local_58,
                               (TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                                )local_res20);
                  }
                  else {
                    local_48 = &local_res8;
                    local_40 = &local_68;
                    if (FVar4 == TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>
                                 ::TypeName) {
                      `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::
                      <lambda_1>::
                      operator()<TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>_>
                                (&local_58,
                                 (TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>
                                  )local_res20);
                    }
                    else {
                      local_48 = &local_res8;
                      local_40 = &local_68;
                      if (FVar4 == TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                                   ::TypeName) {
                        `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::
                        <lambda_1>::
                        operator()<TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>_>
                                  (&local_58,
                                   (TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                                    )local_res20);
                      }
                      else {
                        local_48 = &local_res8;
                        local_40 = &local_68;
                        if (FVar4 == TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
                                     ::TypeName) {
                          `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17::
                          <lambda_1>::
                          operator()<TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>_>
                                    (&local_58,
                                     (TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
                                      )local_res20);
                        }
                        else {
                          local_48 = &local_res8;
                          local_40 = &local_68;
                          if (FVar4 == TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                                       ::TypeName) {
                            `FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>'::__l17
                            ::<lambda_1>::
                            operator()<TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
                                      (&local_58,
                                       (TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                                        )local_res20);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_68.Data;
  __return_storage_ptr__->ArrayNum = local_60;
  __return_storage_ptr__->ArrayMax = local_5c;
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowNumericTypes> @ 14441a670

double __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>
          (FDataflowInput *this,FContext *param_1,double *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FPropertyBagPropertyDesc *pFVar4;
  ulong64 uVar5;
  double local_res8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_res18 [2];
  <lambda_1> local_38;
  
  this_00 = this->Connection;
  local_res8 = *param_2;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x200) != '\0')) &&
       (!UE::Dataflow::Private::bDisableFreezingState)) {
      pFVar4 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar4 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar1 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (double *)
                  ((longlong)pFVar4->CachedProperty->Offset_Internal + *(longlong *)(lVar1 + 0x1f8))
        ;
      }
      return *param_2;
    }
    bVar3 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar3) {
      pcVar2 = *(code **)(param_1->_padding_ + 0x30);
      uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res18[0] =
           (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)(*pcVar2)(param_1,uVar5);
      if ((local_res18[0] !=
           (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0) && (local_res18[0]->Ptr != (FContextCacheElementBase *)0x0)) {
        local_38.CacheEntry = local_res18;
        local_38.ReturnValue = (TRotator<double> *)&local_res8;
        local_38.__this = this;
        local_38.Context = param_1;
        TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
        ::
        VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
                  ((FName)this->_padding_,&local_38);
      }
    }
  }
  return local_res8;
}

// GetValueFromAnyType<FDataflowRotationTypes> @ 14441a780

TRotator<double> * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowRotationTypes>
          (FDataflowInput *this,TRotator<double> *__return_storage_ptr__,FContext *param_1,
          TRotator<double> *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  code *pcVar2;
  FContextCacheElementBase *this_01;
  FName FVar3;
  bool bVar4;
  FPropertyBagPropertyDesc *pFVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  TVector<double> *pTVar8;
  TRotator<double> *pTVar9;
  TQuat<double> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  TRotator<double> local_28;
  
  uVar11 = *(undefined4 *)&param_2->Pitch;
  uVar12 = *(undefined4 *)((longlong)&param_2->Pitch + 4);
  uVar13 = *(undefined4 *)&param_2->Yaw;
  uVar14 = *(undefined4 *)((longlong)&param_2->Yaw + 4);
  this_00 = this->Connection;
  dVar15 = param_2->Roll;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 == 0) || (*(char *)(lVar1 + 0x200) == '\0')) ||
       (UE::Dataflow::Private::bDisableFreezingState)) {
      bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
      if (bVar4) {
        pcVar2 = *(code **)(param_1->_padding_ + 0x30);
        uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar7 = (undefined8 *)(*pcVar2)(param_1,uVar6);
        if ((puVar7 != (undefined8 *)0x0) &&
           (this_01 = (FContextCacheElementBase *)*puVar7,
           this_01 != (FContextCacheElementBase *)0x0)) {
          FVar3 = (FName)this->_padding_;
          if (FVar3 == TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName) {
            local_48._s_0.Z = 0.0;
            local_48._s_0.X = 0.0;
            local_48._s_0.Y = 0.0;
            pTVar8 = UE::Dataflow::FContextCacheElementBase::
                     GetTypedData<UE::Math::TVector<double>_>
                               (this_01,(IContextCacheStore *)param_1,(FProperty *)0x0,
                                (TVector<double> *)&local_48._s_0);
            pTVar9 = UE::Math::TRotator<double>::MakeFromEuler(&local_28,pTVar8);
            uVar11 = *(undefined4 *)&pTVar9->Pitch;
            uVar12 = *(undefined4 *)((longlong)&pTVar9->Pitch + 4);
            uVar13 = *(undefined4 *)&pTVar9->Yaw;
            uVar14 = *(undefined4 *)((longlong)&pTVar9->Yaw + 4);
            dVar15 = pTVar9->Roll;
          }
          else if (FVar3 == TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName) {
            local_48._s_0.X = 0.0;
            local_48._s_0.Y = 0.0;
            local_48._s_0.Z = 0.0;
            uStack_30 = 0;
            pTVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TQuat<double>_>
                                (this_01,(IContextCacheStore *)param_1,(FProperty *)0x0,
                                 (TQuat<double> *)&local_48._s_0);
            pTVar9 = UE::Math::TRotator<double>::TRotator<double>(&local_28,pTVar10);
            uVar11 = *(undefined4 *)&pTVar9->Pitch;
            uVar12 = *(undefined4 *)((longlong)&pTVar9->Pitch + 4);
            uVar13 = *(undefined4 *)&pTVar9->Yaw;
            uVar14 = *(undefined4 *)((longlong)&pTVar9->Yaw + 4);
            dVar15 = pTVar9->Roll;
          }
          else if (FVar3 == TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName) {
            local_48._s_0.Z = 0.0;
            local_48._s_0.X = 0.0;
            local_48._s_0.Y = 0.0;
            pTVar9 = UE::Dataflow::FContextCacheElementBase::
                     GetTypedData<UE::Math::TRotator<double>_>
                               (this_01,(IContextCacheStore *)param_1,(FProperty *)0x0,
                                (TRotator<double> *)&local_48._s_0);
            uVar11 = *(undefined4 *)&pTVar9->Pitch;
            uVar12 = *(undefined4 *)((longlong)&pTVar9->Pitch + 4);
            uVar13 = *(undefined4 *)&pTVar9->Yaw;
            uVar14 = *(undefined4 *)((longlong)&pTVar9->Yaw + 4);
            dVar15 = pTVar9->Roll;
          }
        }
      }
    }
    else {
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar5 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar1 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (TRotator<double> *)
                  ((longlong)pFVar5->CachedProperty->Offset_Internal + *(longlong *)(lVar1 + 0x1f8))
        ;
      }
      uVar11 = *(undefined4 *)&param_2->Pitch;
      uVar12 = *(undefined4 *)((longlong)&param_2->Pitch + 4);
      uVar13 = *(undefined4 *)&param_2->Yaw;
      uVar14 = *(undefined4 *)((longlong)&param_2->Yaw + 4);
      dVar15 = param_2->Roll;
    }
  }
  *(undefined4 *)&__return_storage_ptr__->Pitch = uVar11;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Pitch + 4) = uVar12;
  *(undefined4 *)&__return_storage_ptr__->Yaw = uVar13;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Yaw + 4) = uVar14;
  __return_storage_ptr__->Roll = dVar15;
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowSelectionTypes> @ 14441a960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDataflowSelection * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowSelectionTypes>
          (FDataflowInput *this,FDataflowSelection *__return_storage_ptr__,FContext *param_1,
          FDataflowSelection *param_2)

{
  int iVar1;
  FDataflowOutput *this_00;
  longlong lVar2;
  code *pcVar3;
  FContextCacheElementBase *this_01;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  FPropertyBagPropertyDesc *pFVar7;
  ulong64 uVar8;
  FDataflowTransformSelection *pFVar9;
  uint uVar10;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  undefined1 auStack_c8 [32];
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_a8;
  undefined1 local_a0 [16];
  undefined8 uStack_90;
  ForElementType<unsigned_int> local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_68;
  FString *local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a0._0_8_ = param_2->GroupName;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  uVar10 = (param_2->SelectionArray).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar10) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar10) {
      uVar6 = uVar10;
    }
    local_80 = (ulonglong)uVar6 << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 8),0);
  }
  iVar1 = (param_2->SelectionArray).NumBits;
  local_80 = CONCAT44(local_80._4_4_,iVar1);
  if (iVar1 != 0) {
    _Src = (param_2->SelectionArray).AllocatorInstance.SecondaryData;
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      _Src = (ForElementType<unsigned_int>)&param_2->SelectionArray;
    }
    _Dst = (ForElementType<unsigned_int>)((longlong)local_a0 + 8);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      _Dst = local_88;
    }
    memcpy((void *)_Dst,(void *)_Src,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar2 = this_00->_padding_;
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x200) != '\0')) &&
       (UE::Dataflow::Private::bDisableFreezingState == false)) {
      pFVar7 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar2 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar7 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar2 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar2 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (FDataflowSelection *)
                  ((longlong)pFVar7->CachedProperty->Offset_Internal + *(longlong *)(lVar2 + 0x1f8))
        ;
      }
      FDataflowSelection::FDataflowSelection(__return_storage_ptr__,param_2);
      if (local_88 == (ForElementType<unsigned_int>)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free((void *)local_88);
      return __return_storage_ptr__;
    }
    bVar5 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar5) {
      pcVar3 = *(code **)(param_1->_padding_ + 0x30);
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      local_a8 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                  *)(*pcVar3)(param_1,uVar8);
      if ((local_a8 !=
           (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0) && (this_01 = local_a8->Ptr, this_01 != (FContextCacheElementBase *)0x0)) {
        FVar4 = (FName)this->_padding_;
        if (FVar4 == TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName) {
          local_78._0_4_ = FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
          local_78._4_4_ = FDataflowTransformSelection::TransformGroupName.Number;
          local_60 = (FString *)0x0;
          local_58 = 0;
          local_54 = 0x80;
          pFVar9 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowTransformSelection>
                             (this_01,(IContextCacheStore *)param_1,(FProperty *)0x0,
                              (FDataflowTransformSelection *)local_78);
        }
        else {
          if (FVar4 != TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName) {
            local_68 = &local_a8;
            local_60 = (FString *)local_a0;
            local_78._0_8_ = this;
            local_78._8_8_ = param_1;
            TDataflowMultiTypePolicy<FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>
            ::
            VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowSelectionTypes>_::__l17::<lambda_1>_>
                      (FVar4,(<lambda_1> *)local_78);
            goto LAB_14441ab7b;
          }
          local_78._0_4_ = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
          local_78._4_4_ = FDataflowVertexSelection::VerticesGroupName.Number;
          local_60 = (FString *)0x0;
          local_58 = 0;
          local_54 = 0x80;
          pFVar9 = (FDataflowTransformSelection *)
                   UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowVertexSelection>
                             (this_01,(IContextCacheStore *)param_1,(FProperty *)0x0,
                              (FDataflowVertexSelection *)local_78);
        }
        if (local_a0 + 8 != &pFVar9->field_0x8) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 8),
                     (TBitArray<FDefaultBitArrayAllocator> *)&pFVar9->field_0x8);
        }
        if (local_60 != (FString *)0x0) {
          FMemory::Free(local_60);
        }
      }
    }
  }
LAB_14441ab7b:
  (__return_storage_ptr__->GroupName).ComparisonIndex = (FNameEntryId)local_a0._0_4_;
  (__return_storage_ptr__->GroupName).Number = local_a0._4_4_;
  (__return_storage_ptr__->SelectionArray).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  if (local_88 == (ForElementType<unsigned_int>)0x0) {
    *(undefined8 *)(__return_storage_ptr__->SelectionArray).AllocatorInstance.InlineData =
         local_a0._8_8_;
    *(undefined8 *)((__return_storage_ptr__->SelectionArray).AllocatorInstance.InlineData + 8) =
         uStack_90;
  }
  (__return_storage_ptr__->SelectionArray).AllocatorInstance.SecondaryData = local_88;
  (__return_storage_ptr__->SelectionArray).NumBits = (int)local_80;
  (__return_storage_ptr__->SelectionArray).MaxBits = local_80._4_4_;
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowStringArrayTypes> @ 14441abd0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowStringArrayTypes>
          (FDataflowInput *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FContext *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FDataflowOutput *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  longlong *local_res8;
  undefined1 local_res20 [8];
  ForAnyElementType local_68;
  undefined8 local_60;
  FDataflowInput *local_58;
  FContext *local_50;
  longlong **local_48;
  ForAnyElementType *local_40;
  
  iVar6 = param_2->ArrayNum;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = CONCAT44(local_60._4_4_,iVar6);
  if (iVar6 == 0) {
    local_60 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&local_68,iVar6,(int *)((longlong)&local_60 + 4));
    ConstructItems<FString,FString,int>(local_68.Data,(FString *)pFVar1,iVar6);
  }
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar2 = this_00->_padding_;
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x200) != '\0')) &&
       (UE::Dataflow::Private::bDisableFreezingState == false)) {
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar2 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar5 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar2 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar2 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pFVar5->CachedProperty->Offset_Internal + *(longlong *)(lVar2 + 0x1f8))
        ;
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar6 = param_2->ArrayNum;
      pFVar1 = (param_2->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar6;
      if (iVar6 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
        iVar6 = (int)local_60;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar6,0,&__return_storage_ptr__->AllocatorInstance,iVar6,
                   &__return_storage_ptr__->ArrayMax);
        ConstructItems<FString,FString,int>
                  ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)pFVar1,iVar6);
        iVar6 = (int)local_60;
      }
      goto LAB_14441adcc;
    }
    bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar4) {
      pcVar3 = *(code **)(param_1->_padding_ + 0x30);
      CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (longlong *)(*pcVar3)();
      if ((local_res8 != (longlong *)0x0) && (*local_res8 != 0)) {
        local_48 = &local_res8;
        local_40 = &local_68;
        local_58 = this;
        local_50 = param_1;
        if ((FName)this->_padding_ ==
            TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName) {
          `FDataflowInput::GetValueFromAnyType<FDataflowStringArrayTypes>'::__l17::<lambda_1>::
          operator()<TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                    (&local_58,
                     (TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>)
                     local_res20);
        }
        else {
          local_48 = &local_res8;
          local_40 = &local_68;
          if ((FName)this->_padding_ ==
              TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName) {
            `FDataflowInput::GetValueFromAnyType<FDataflowStringArrayTypes>'::__l17::<lambda_1>::
            operator()<TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>_>
                      (&local_58,
                       (TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>)
                       local_res20);
          }
        }
      }
    }
  }
  iVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = local_68.Data;
  __return_storage_ptr__->ArrayNum = (int)local_60;
  __return_storage_ptr__->ArrayMax = local_60._4_4_;
  local_60 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
LAB_14441adcc:
  DestructItems<FString,int>((FString *)local_68.Data,iVar6);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowStringConvertibleTypes> @ 14441ae00

FString * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>
          (FDataflowInput *this,FString *__return_storage_ptr__,FContext *param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  FDataflowOutput *this_00;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  ulong64 uVar4;
  longlong lVar5;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_res8;
  undefined1 local_48 [16];
  <lambda_1> local_38;
  
  local_48._8_4_ = (param_2->Data).ArrayNum;
  lVar5 = (longlong)(int)local_48._8_4_;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  if (local_48._8_4_ == 0) {
    local_48._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48._8_4_,0,(ForAnyElementType *)local_48,local_48._8_4_,
               (int *)(local_48 + 0xc));
    memcpy((void *)local_48._0_8_,_Src,lVar5 * 2);
  }
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    if (((this_00->_padding_ != 0) && (*(char *)(this_00->_padding_ + 0x200) != '\0')) &&
       (UE::Dataflow::Private::bDisableFreezingState == false)) {
      pFVar3 = FDataflowOutput::GetFrozenValue<FString>(this_00,param_2);
      ::FString::FString(__return_storage_ptr__,pFVar3);
      if ((FName)local_48._0_8_ == (FName)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free((void *)local_48._0_8_);
      return __return_storage_ptr__;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar2) {
      pcVar1 = *(code **)(param_1->_padding_ + 0x30);
      uVar4 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                    *)(*pcVar1)(param_1,uVar4);
      if ((local_res8 !=
           (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0) && (local_res8->Ptr != (FContextCacheElementBase *)0x0)) {
        local_38.CacheEntry = &local_res8;
        local_38.ReturnValue = (FDataflowSelection *)local_48;
        local_38.__this = this;
        local_38.Context = param_1;
        FDataflowStringConvertibleTypePolicy::
        VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                  ((FName)this->_padding_,&local_38);
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_48._0_8_;
  (__return_storage_ptr__->Data).ArrayNum = local_48._8_4_;
  (__return_storage_ptr__->Data).ArrayMax = local_48._12_4_;
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowStringTypes> @ 14441af80

FString * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowStringTypes>
          (FDataflowInput *this,FString *__return_storage_ptr__,FContext *param_1,FString *param_2)

{
  EType EVar1;
  FScriptContainerElement *_Src;
  FDataflowOutput *this_00;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  FContextCacheElementBase *pFVar7;
  longlong lVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_res8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  <lambda_1> local_48;
  
  local_68.ArrayNum = (param_2->Data).ArrayNum;
  lVar8 = (longlong)local_68.ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.ArrayNum == 0) {
    local_68.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
               &local_68.ArrayMax);
    memcpy(local_68.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  this_00 = this->Connection;
  if (this_00 == (FDataflowOutput *)0x0) goto LAB_14441b15c;
  if (((this_00->_padding_ != 0) && (*(char *)(this_00->_padding_ + 0x200) != '\0')) &&
     (UE::Dataflow::Private::bDisableFreezingState == false)) {
    pFVar4 = FDataflowOutput::GetFrozenValue<FString>(this_00,param_2);
    ::FString::FString(__return_storage_ptr__,pFVar4);
    if (local_68.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_68.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  bVar3 = FDataflowOutput::Evaluate(this_00,param_1);
  if (!bVar3) goto LAB_14441b15c;
  pcVar2 = *(code **)(param_1->_padding_ + 0x30);
  uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
  local_res8 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                *)(*pcVar2)(param_1,uVar5);
  if ((local_res8 ==
       (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
        *)0x0) || (pFVar7 = local_res8->Ptr, pFVar7 == (FContextCacheElementBase *)0x0))
  goto LAB_14441b15c;
  if ((FName)this->_padding_ != TDataflowSingleTypePolicy<FString>::TypeName) {
    local_48.CacheEntry = &local_res8;
    local_48.ReturnValue = &local_68;
    local_48.__this = this;
    local_48.Context = param_1;
    TDataflowMultiTypePolicy<FName,FText>::
    VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringTypes>_::__l17::<lambda_1>_>
              ((FName)this->_padding_,&local_48);
    goto LAB_14441b15c;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  EVar1 = pFVar7->Type;
  if (EVar1 == CacheElementTyped) {
    pFVar7 = pFVar7 + 1;
  }
  else {
    if (EVar1 == CacheElementReference) {
      puVar6 = (undefined8 *)(**(code **)param_1->_padding_)(param_1,(int)pFVar7[1]._padding_);
      if (puVar6 != (undefined8 *)0x0) {
        pFVar7 = (FContextCacheElementBase *)
                 UE::Dataflow::FContextCacheElementBase::GetTypedData<FString>
                           ((FContextCacheElementBase *)*puVar6,(IContextCacheStore *)param_1,
                            (FProperty *)0x0,&local_58);
        goto LAB_14441b11f;
      }
    }
    else if ((EVar1 != CacheElementNull) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    pFVar7 = (FContextCacheElementBase *)&local_58;
  }
LAB_14441b11f:
  ::FString::operator=((FString *)&local_68,(FString *)pFVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14441b15c:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_68.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_68.ArrayMax;
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowTransformArrayTypes> @ 14441b1a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowTransformArrayTypes>
          (FDataflowInput *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FContext *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FDataflowOutput *this_00;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FPropertyBagPropertyDesc *pFVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_48;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_38;
  
  local_48.ArrayNum = param_2->ArrayNum;
  lVar13 = (longlong)local_48.ArrayNum;
  uVar14 = 0;
  pFVar11 = (param_2->AllocatorInstance).Data;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.ArrayNum == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
               &local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,pFVar11,lVar13 * 0x60);
  }
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar13 = this_00->_padding_;
    if (((lVar13 != 0) && (*(char *)(lVar13 + 0x200) != '\0')) &&
       (UE::Dataflow::Private::bDisableFreezingState == false)) {
      pFVar7 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar13 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar7 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar13 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar13 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pFVar7->CachedProperty->Offset_Internal + *(longlong *)(lVar13 + 0x1f8)
                  );
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar1 = param_2->ArrayNum;
      pFVar11 = (param_2->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar1;
      if (iVar1 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar11,(longlong)iVar1 * 0x60);
      }
      if (local_48.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_48.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    bVar5 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar5) {
      pcVar2 = *(code **)(param_1->_padding_ + 0x30);
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(*pcVar2)(param_1,uVar8);
      if (((puVar9 != (undefined8 *)0x0) &&
          ((FContextCacheElementBase *)*puVar9 != (FContextCacheElementBase *)0x0)) &&
         ((FName)this->_padding_ ==
          TDataflowSingleTypePolicy<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          ::TypeName)) {
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        pTVar10 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             (FProperty *)0x0,&local_38);
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                  (&local_48,pTVar10->ArrayNum,Default);
        uVar15 = uVar14;
        if (0 < pTVar10->ArrayNum) {
          do {
            uVar12 = (uint)uVar14;
            uVar6 = 0;
            if ((int)uVar12 < local_48.ArrayNum) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar2)();
              return pTVar10;
            }
            pFVar11 = local_48.AllocatorInstance.Data + uVar15;
            uVar6 = 0;
            if ((int)uVar12 < pTVar10->ArrayNum) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar2)();
              return pTVar10;
            }
            pFVar3 = (pTVar10->AllocatorInstance).Data;
            uVar14 = (ulonglong)(uVar12 + 1);
            uVar4 = *(undefined8 *)(pFVar3 + uVar15 + 8);
            *(undefined8 *)pFVar11 = *(undefined8 *)(pFVar3 + uVar15);
            *(undefined8 *)(pFVar11 + 8) = uVar4;
            uVar4 = *(undefined8 *)(pFVar3 + uVar15 + 0x10 + 8);
            *(undefined8 *)(pFVar11 + 0x10) = *(undefined8 *)(pFVar3 + uVar15 + 0x10);
            *(undefined8 *)(pFVar11 + 0x18) = uVar4;
            uVar4 = *(undefined8 *)(pFVar3 + uVar15 + 0x20 + 8);
            *(undefined8 *)(pFVar11 + 0x20) = *(undefined8 *)(pFVar3 + uVar15 + 0x20);
            *(undefined8 *)(pFVar11 + 0x28) = uVar4;
            uVar4 = *(undefined8 *)(pFVar3 + uVar15 + 0x30 + 8);
            *(undefined8 *)(pFVar11 + 0x30) = *(undefined8 *)(pFVar3 + uVar15 + 0x30);
            *(undefined8 *)(pFVar11 + 0x38) = uVar4;
            uVar4 = *(undefined8 *)(pFVar3 + uVar15 + 0x40 + 8);
            *(undefined8 *)(pFVar11 + 0x40) = *(undefined8 *)(pFVar3 + uVar15 + 0x40);
            *(undefined8 *)(pFVar11 + 0x48) = uVar4;
            uVar4 = *(undefined8 *)(pFVar3 + uVar15 + 0x50 + 8);
            *(undefined8 *)(pFVar11 + 0x50) = *(undefined8 *)(pFVar3 + uVar15 + 0x50);
            *(undefined8 *)(pFVar11 + 0x58) = uVar4;
            uVar15 = uVar15 + 0x60;
          } while ((int)(uVar12 + 1) < pTVar10->ArrayNum);
        }
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_48.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_48.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_48.ArrayMax;
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowTransformTypes> @ 14441b4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowTransformTypes>
          (FDataflowInput *this,TTransform<double> *__return_storage_ptr__,FContext *param_1,
          TTransform<double> *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FPropertyBagPropertyDesc *pFVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  TTransform<double> *pTVar8;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = this->Connection;
  local_108 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uStack_104 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uStack_100 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uStack_fc = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  local_f8 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
  uStack_f4 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
  uStack_f0 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
  uStack_ec = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
  local_e8 = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
  uStack_e4 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
  uStack_e0 = *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
  uStack_dc = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
  local_d8 = *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
  uStack_d4 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
  uStack_d0 = *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1);
  uStack_cc = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc);
  local_c8 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
  uStack_c4 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
  uStack_c0 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
  uStack_bc = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
  local_b8 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
  uStack_b4 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
  uStack_b0 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
  uStack_ac = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x200) != '\0')) &&
       (!UE::Dataflow::Private::bDisableFreezingState)) {
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar5 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         (*(longlong *)(lVar1 + 0x1f0) != 0)) {
        param_2 = (TTransform<double> *)
                  ((longlong)pFVar5->CachedProperty->Offset_Internal + *(longlong *)(lVar1 + 0x1f8))
        ;
      }
      dVar3 = (param_2->Rotation).XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
      dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
      dVar3 = (param_2->Translation).XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar3;
      dVar3 = (param_2->Translation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
      dVar3 = (param_2->Scale3D).XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar3;
      dVar3 = (param_2->Scale3D).ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
      return __return_storage_ptr__;
    }
    bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar4) {
      pcVar2 = *(code **)(param_1->_padding_ + 0x30);
      uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar7 = (undefined8 *)(*pcVar2)(param_1,uVar6);
      if (((puVar7 != (undefined8 *)0x0) &&
          ((FContextCacheElementBase *)*puVar7 != (FContextCacheElementBase *)0x0)) &&
         ((FName)this->_padding_ ==
          TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName)) {
        local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        pTVar8 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TTransform<double>_>
                           ((FContextCacheElementBase *)*puVar7,(IContextCacheStore *)param_1,
                            (FProperty *)0x0,&local_a8);
        local_108 = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
        uStack_104 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
        uStack_100 = *(undefined4 *)((pTVar8->Rotation).XY.m128d_f64 + 1);
        uStack_fc = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
        local_f8 = *(undefined4 *)(pTVar8->Rotation).ZW.m128d_f64;
        uStack_f4 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 4);
        uStack_f0 = *(undefined4 *)((pTVar8->Rotation).ZW.m128d_f64 + 1);
        uStack_ec = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 0xc);
        local_e8 = *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
        uStack_e4 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
        uStack_e0 = *(undefined4 *)((pTVar8->Translation).XY.m128d_f64 + 1);
        uStack_dc = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
        local_d8 = *(undefined4 *)(pTVar8->Translation).ZW.m128d_f64;
        uStack_d4 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
        uStack_d0 = *(undefined4 *)((pTVar8->Translation).ZW.m128d_f64 + 1);
        uStack_cc = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
        local_c8 = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
        uStack_c4 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
        uStack_c0 = *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
        uStack_bc = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
        local_b8 = *(undefined4 *)(pTVar8->Scale3D).ZW.m128d_f64;
        uStack_b4 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
        uStack_b0 = *(undefined4 *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
        uStack_ac = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
      }
    }
  }
  *(undefined4 *)(__return_storage_ptr__->Rotation).XY.m128d_f64 = local_108;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) = uStack_104;
  *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = uStack_100;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = uStack_fc;
  *(undefined4 *)(__return_storage_ptr__->Rotation).ZW.m128d_f64 = local_f8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 4) = uStack_f4;
  *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) = uStack_f0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) = uStack_ec;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = local_e8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uStack_e4;
  *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uStack_e0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uStack_dc;
  *(undefined4 *)(__return_storage_ptr__->Translation).ZW.m128d_f64 = local_d8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 4) = uStack_d4;
  *(undefined4 *)((__return_storage_ptr__->Translation).ZW.m128d_f64 + 1) = uStack_d0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 0xc) = uStack_cc;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = local_c8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uStack_c4;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uStack_c0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uStack_bc;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = local_b8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uStack_b4;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uStack_b0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uStack_ac;
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowUObjectConvertibleTypes> @ 14441b6f0

TObjectPtr<UObject> __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowUObjectConvertibleTypes>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UObject> *param_2)

{
  int iVar1;
  FDataflowOutput *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FPropertyBagPropertyDesc *pFVar5;
  ulong64 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  TObjectPtr<UObject>_u_0 *pTVar9;
  TObjectPtr<UObject> TVar10;
  UObject *pUVar11;
  undefined8 *in_R9;
  TObjectPtr<UObject>_u_0 local_res8;
  
  pUVar11 = (UObject *)*in_R9;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  this_00 = this->Connection;
  if (this_00 == (FDataflowOutput *)0x0) goto LAB_14441b88f;
  lVar2 = this_00->_padding_;
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x200) != '\0')) &&
     (UE::Dataflow::Private::bDisableFreezingState == false)) {
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(lVar2 + 0x1f0),(FName)this_00->_padding_);
    if (((pFVar5 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar2 + 0x1f8) != 0)) &&
       ((((FInstancedPropertyBag *)(lVar2 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
        (UScriptStruct *)0x0)) {
      in_R9 = (undefined8 *)
              ((longlong)pFVar5->CachedProperty->Offset_Internal + *(longlong *)(lVar2 + 0x1f8));
    }
    pUVar11 = (UObject *)*in_R9;
    param_1->_padding_ = (longlong)pUVar11;
    goto joined_r0x00014441b899;
  }
  bVar4 = FDataflowOutput::Evaluate(this_00,(FContext *)param_2);
  if (bVar4) {
    pcVar3 = *(code **)&(param_2->field0_0x0).DebugPtr[1].field_0x8;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    plVar7 = (longlong *)(*pcVar3)(param_2,uVar6);
    if (((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) &&
       (bVar4 = FDataflowUObjectConvertibleTypePolicy::SupportsTypeStatic((FName)this->_padding_),
       bVar4)) {
      local_res8.DebugPtr = (UObject *)0x0;
      lVar2 = *plVar7;
      iVar1 = *(int *)(lVar2 + 8);
      if (iVar1 == 1) {
        puVar8 = (undefined8 *)
                 (**(code **)(param_2->field0_0x0).DebugPtr)(param_2,*(undefined4 *)(lVar2 + 0x38));
        if (puVar8 == (undefined8 *)0x0) goto LAB_14441b871;
        pTVar9 = &UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UObject>_>
                            ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)param_2,
                             (FProperty *)0x0,(TObjectPtr<UObject> *)&local_res8.ObjectPtr)->
                  field0_0x0;
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 == 3) {
            pTVar9 = (TObjectPtr<UObject>_u_0 *)(lVar2 + 0x48);
            goto LAB_14441b876;
          }
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            TVar10.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar3)();
            return (TObjectPtr<UObject>)TVar10.field0_0x0;
          }
        }
LAB_14441b871:
        pTVar9 = &local_res8;
      }
LAB_14441b876:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pTVar9->DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pTVar9->DebugPtr);
      }
      pUVar11 = pTVar9->DebugPtr;
    }
  }
LAB_14441b88f:
  param_1->_padding_ = (longlong)pUVar11;
joined_r0x00014441b899:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetValueFromAnyType<FDataflowVectorArrayTypes> @ 14441b8d0

TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>
          (FDataflowInput *this,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FContext *param_1,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FDataflowOutput *this_00;
  code *pcVar3;
  bool bVar4;
  FPropertyBagPropertyDesc *pFVar5;
  ulong64 uVar6;
  longlong lVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_res8;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  <lambda_1> local_48;
  
  local_50 = param_2->ArrayNum;
  lVar7 = (longlong)local_50;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar2,lVar7 << 5);
  }
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar7 = this_00->_padding_;
    if (((lVar7 != 0) && (*(char *)(lVar7 + 0x200) != '\0')) &&
       (UE::Dataflow::Private::bDisableFreezingState == false)) {
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar7 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar5 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar7 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar7 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pFVar5->CachedProperty->Offset_Internal + *(longlong *)(lVar7 + 0x1f8))
        ;
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar1 = param_2->ArrayNum;
      pFVar2 = (param_2->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar1;
      if (iVar1 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,(longlong)iVar1 << 5);
      }
      if (local_58.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_58.Data);
      return __return_storage_ptr__;
    }
    bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar4) {
      pcVar3 = *(code **)(param_1->_padding_ + 0x30);
      uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                    *)(*pcVar3)(param_1,uVar6);
      if ((local_res8 !=
           (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0) && (local_res8->Ptr != (FContextCacheElementBase *)0x0)) {
        local_48.CacheEntry = &local_res8;
        local_48.ReturnValue = (bool *)&local_58;
        local_48.__this = this;
        local_48.Context = param_1;
        TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
        ::
        VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
                  ((FName)this->_padding_,&local_48);
      }
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
  __return_storage_ptr__->ArrayNum = local_50;
  __return_storage_ptr__->ArrayMax = local_4c;
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowVectorTypes> @ 14441bad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<double> * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
          (FDataflowInput *this,TVector4<double> *__return_storage_ptr__,FContext *param_1,
          TVector4<double> *param_2)

{
  undefined8 uVar1;
  FDataflowOutput *this_00;
  longlong lVar2;
  code *pcVar3;
  FContextCacheElementBase *this_01;
  FName FVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  FPropertyBagPropertyDesc *pFVar9;
  ulong64 uVar10;
  TVector2<double> *pTVar11;
  TVector<double> *pTVar12;
  TVector4<double> *pTVar13;
  undefined8 *local_res8;
  TVector4<double>_u_0 local_58;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  this_00 = this->Connection;
  local_38 = *(undefined4 *)&param_2->field0_0x0;
  uStack_34 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_30 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_2c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  local_28 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
  uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
  uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x18);
  uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x1c);
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar2 = this_00->_padding_;
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x200) != '\0')) &&
       (!UE::Dataflow::Private::bDisableFreezingState)) {
      pFVar9 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar2 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar9 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar2 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar2 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        param_2 = (TVector4<double> *)
                  ((longlong)pFVar9->CachedProperty->Offset_Internal + *(longlong *)(lVar2 + 0x1f8))
        ;
      }
      dVar5 = (param_2->field0_0x0)._s_0.Y;
      dVar6 = (param_2->field0_0x0)._s_0.Z;
      dVar7 = (param_2->field0_0x0)._s_0.W;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.W = dVar7;
      return __return_storage_ptr__;
    }
    bVar8 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar8) {
      pcVar3 = *(code **)(param_1->_padding_ + 0x30);
      uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (undefined8 *)(*pcVar3)(param_1,uVar10);
      if ((local_res8 != (undefined8 *)0x0) &&
         (this_01 = (FContextCacheElementBase *)*local_res8,
         this_01 != (FContextCacheElementBase *)0x0)) {
        FVar4 = (FName)this->_padding_;
        if (FVar4 == TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName) {
          local_58._s_0.X = 0.0;
          local_58._s_0.Y = 0.0;
          pTVar11 = UE::Dataflow::FContextCacheElementBase::
                    GetTypedData<UE::Math::TVector2<double>_>
                              (this_01,(IContextCacheStore *)param_1,(FProperty *)0x0,
                               (TVector2<double> *)&local_58._s_0);
          local_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          uStack_1c = 0;
          local_38 = *(undefined4 *)&pTVar11->field0_0x0;
          uStack_34 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 4);
          uStack_30 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 8);
          uStack_2c = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 0xc);
        }
        else if (FVar4 == TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName) {
          local_58._s_0.Z = 0.0;
          local_58._s_0.X = 0.0;
          local_58._s_0.Y = 0.0;
          pTVar12 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector<double>_>
                              (this_01,(IContextCacheStore *)param_1,(FProperty *)0x0,
                               (TVector<double> *)&local_58._s_0);
          uVar1 = *(undefined8 *)((longlong)&pTVar12->field0_0x0 + 0x10);
          local_28 = (undefined4)uVar1;
          uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_20 = 0;
          uStack_1c = 0;
          local_38 = *(undefined4 *)&pTVar12->field0_0x0;
          uStack_34 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
          uStack_30 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
          uStack_2c = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
        }
        else if (FVar4 == TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName) {
          local_58._s_0.Z = ___xmm_3ff00000000000000000000000000000;
          local_58._s_0.W = _UNK_15061cbc8;
          local_58._s_0.X = 0.0;
          local_58._s_0.Y = 0.0;
          pTVar13 = UE::Dataflow::FContextCacheElementBase::
                    GetTypedData<UE::Math::TVector4<double>_>
                              (this_01,(IContextCacheStore *)param_1,(FProperty *)0x0,
                               (TVector4<double> *)&local_58._s_0);
          local_38 = *(undefined4 *)&pTVar13->field0_0x0;
          uStack_34 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 4);
          uStack_30 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 8);
          uStack_2c = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0xc);
          local_28 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0x10);
          uStack_24 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0x14);
          uStack_20 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0x18);
          uStack_1c = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0x1c);
        }
        else {
          local_58._s_0.Z = (double)&local_res8;
          local_58._s_0.W = (double)&local_38;
          local_58._s_0.X = (double)this;
          local_58._s_0.Y = (double)param_1;
          TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
          ::
          VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>_::__l17::<lambda_1>_>
                    (FVar4,(<lambda_1> *)&local_58._s_0);
        }
      }
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_38;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uStack_34;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_30;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uStack_2c;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = local_28;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x14) = uStack_24;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x18) = uStack_20;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x1c) = uStack_1c;
  return __return_storage_ptr__;
}

// FDataflowInput @ 14442cbf0

FDataflowInput * __thiscall
FDataflowInput::FDataflowInput(FDataflowInput *this,FInputParameters *param_1)

{
  FDataflowConnection::FDataflowConnection
            ((FDataflowConnection *)this,INPUT,(FConnectionParameters *)param_1);
  this->Connection = (FDataflowOutput *)0x0;
  this->_padding_ = (longlong)&___7FDataflowInput__6B_;
  this->bIsRequired = false;
  return this;
}

// FDataflowInput @ 14442cc30

FDataflowInput * __thiscall
FDataflowInput::FDataflowInput(FDataflowInput *this,FInputParameters *param_1,FGuid *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FDataflowConnection::FDataflowConnection
            ((FDataflowConnection *)this,INPUT,(FConnectionParameters *)param_1);
  lVar1 = *(longlong *)param_2;
  lVar2 = *(longlong *)&param_2->C;
  this->_padding_ = (longlong)&___7FDataflowInput__6B_;
  this->_padding_ = lVar1;
  this->_padding_ = lVar2;
  this->Connection = (FDataflowOutput *)0x0;
  this->bIsRequired = false;
  return this;
}

// operator= @ 144434290

FDataflowInput * __thiscall FDataflowInput::operator=(FDataflowInput *this,FDataflowInput *param_1)

{
  longlong lVar1;
  byte bVar2;
  
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  bVar2 = (*(byte *)((longlong)&this->_padding_ + 5) ^ *(byte *)((longlong)&param_1->_padding_ + 5))
          & 1 ^ *(byte *)((longlong)&this->_padding_ + 5);
  *(byte *)((longlong)&this->_padding_ + 5) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)((longlong)&param_1->_padding_ + 5)) & 2 ^ bVar2;
  *(byte *)((longlong)&this->_padding_ + 5) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)((longlong)&param_1->_padding_ + 5)) & 4 ^ bVar2;
  *(byte *)((longlong)&this->_padding_ + 5) = bVar2;
  lVar1 = this->_padding_;
  *(byte *)((longlong)&this->_padding_ + 5) =
       (bVar2 ^ *(byte *)((longlong)&param_1->_padding_ + 5)) & 8 ^ bVar2;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ ^ ((byte)lVar1 ^ (byte)param_1->_padding_) & 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->Connection = param_1->Connection;
  this->bIsRequired = param_1->bIsRequired;
  return this;
}

// AddConnection @ 144437020

bool __thiscall FDataflowInput::AddConnection(FDataflowInput *this,FDataflowConnection *param_1)

{
  FDataflowNode *this_00;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if ((FName)this->_padding_ == param_1->Type) {
    this->Connection = (FDataflowOutput *)param_1;
    this_00 = (FDataflowNode *)this->_padding_;
    QueryPerformanceCounter(&local_res8);
    local_res10[0] = local_res8;
    FDataflowNode::Invalidate(this_00,(FTimestamp *)&local_res10[0].s);
    return true;
  }
  return false;
}

// FixAndPropagateType @ 144449440

void __thiscall FDataflowInput::FixAndPropagateType(FDataflowInput *this,FName param_1)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  FDataflowOutput *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  FString *this_00;
  FString *pFVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  int iVar13;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  local_res10 = param_1;
  this_00 = ::FName::ToString(&local_res10,&local_38);
  local_res18 = (FName)this->_padding_;
  pFVar9 = ::FName::ToString(&local_res18,&local_48);
  iVar3 = (pFVar9->Data).ArrayNum;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  bVar7 = ::FString::StartsWith(this_00,pwVar10,iVar13,IgnoreCase);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InType.ToString().StartsWith(GetType().ToString())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                         ,0x6a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = FDataflowConnection::IsAnyType(&local_res10);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FDataflowConnection::IsAnyType(InType)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                         ,0x6b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((FName)this->_padding_ != local_res10) {
    FDataflowConnection::SetTypeInternal((FDataflowConnection *)this,local_res10);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 | 2;
    plVar11 = (longlong *)this->_padding_;
    ::FName::FName(&local_res20,"FDataflowReRouteNode");
    cVar8 = (**(code **)(*plVar11 + 0x128))(plVar11,local_res20);
    if (cVar8 == '\0') {
      plVar11 = (longlong *)0x0;
    }
    if (plVar11 != (longlong *)0x0) {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                  *)(plVar11 + 0x29),&local_58);
      iVar13 = local_58.ArrayNum;
      pFVar2 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
      FVar12.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if (local_58.ArrayNum != iVar13) {
          `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar12.Data == pFVar2) break;
        puVar4 = *(undefined8 **)FVar12.Data;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,local_res10);
        }
        FVar12.Data = FVar12.Data + 8;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
    FDataflowNode::NotifyConnectionTypeChanged
              ((FDataflowNode *)this->_padding_,(FDataflowConnection *)this);
    pFVar5 = this->Connection;
    if (pFVar5 != (FDataflowOutput *)0x0) {
      (**(code **)pFVar5->_padding_)(pFVar5,local_res10);
    }
  }
  return;
}

// GetConnectedOutputs @ 14444acb0

TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetConnectedOutputs
          (FDataflowInput *this,
          TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FDataflowOutput *pFVar1;
  int iVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = this->Connection;
  if (pFVar1 != (FDataflowOutput *)0x0) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    *(FDataflowOutput **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 8) =
         pFVar1;
  }
  return __return_storage_ptr__;
}

// GetConnectedOutputs @ 14444ad10

TArray<FDataflowOutput_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetConnectedOutputs
          (FDataflowInput *this,
          TArray<FDataflowOutput_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FDataflowOutput *pFVar1;
  int iVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = this->Connection;
  if (pFVar1 != (FDataflowOutput *)0x0) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    *(FDataflowOutput **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 8) =
         pFVar1;
  }
  return __return_storage_ptr__;
}

// GetConnections @ 14444b0e0

void __thiscall
FDataflowInput::GetConnections
          (FDataflowInput *this,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDataflowOutput *local_18 [2];
  
  local_18[0] = this->Connection;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FDataflowOutput **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// Invalidate @ 144450760

void __thiscall FDataflowInput::Invalidate(FDataflowInput *this,FTimestamp *param_1)

{
  FDataflowNode::Invalidate((FDataflowNode *)this->_padding_,param_1);
  return;
}

// IsConnected @ 144451490

bool __thiscall FDataflowInput::IsConnected(FDataflowInput *this)

{
  return this->Connection != (FDataflowOutput *)0x0;
}

// PullValue @ 1444535a0

void __thiscall FDataflowInput::PullValue(FDataflowInput *this,FContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  void *local_28 [2];
  void *local_18;
  
  lVar4 = (**(code **)(this->_padding_ + 0x50))(this,local_28);
  iVar1 = *(int *)(lVar4 + 8);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (iVar1 != 0) {
    lVar4 = (**(code **)(this->_padding_ + 0x50))(this);
    if (*(int *)(lVar4 + 8) != 1) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5201422304189349984>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                         ,0x60,"GetConnectedOutputs().Num() == 1");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    if (this->Connection != (FDataflowOutput *)0x0) {
      FDataflowOutput::Evaluate(this->Connection,param_1);
    }
  }
  return;
}

// RemoveConnection @ 14445db50

bool __thiscall FDataflowInput::RemoveConnection(FDataflowInput *this,FDataflowConnection *param_1)

{
  FDataflowNode *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if (this->Connection == (FDataflowOutput *)param_1) {
    this->Connection = (FDataflowOutput *)0x0;
    this_00 = (FDataflowNode *)this->_padding_;
    QueryPerformanceCounter(&local_res8);
    local_res10[0] = local_res8;
    FDataflowNode::Invalidate(this_00,(FTimestamp *)&local_res10[0].s);
    return true;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5201422304189349941>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                     ,0x35,"Connection == (FDataflowOutput*)InOutput");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

