// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_> @ 1459a74a0

TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int iVar3;
  ForElementType<Experimental::FHashType> FVar4;
  int *piVar5;
  
  (this->KeyValueData).KeyVals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyValueData).KeyVals.ArrayNum = 0;
  (this->KeyValueData).KeyVals.ArrayMax = 0;
  (this->KeyValueData).Hashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyValueData).Hashes.ArrayNum = 0;
  (this->KeyValueData).Hashes.ArrayMax = 0;
  (this->KeyValueData).FreeList.FreeList.AllocatorInstance.SecondaryData =
       (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
        )0x0;
  (this->KeyValueData).FreeList.FreeList.ArrayNum = 0;
  *(undefined8 *)&(this->KeyValueData).FreeList.FreeList.ArrayMax = 1;
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty
            (&(this->KeyValueData).FreeList);
  (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  piVar5 = &(this->IndexData).ArrayMax;
  *piVar5 = 1;
  (this->IndexData).ArrayNum = 0;
  (this->HashData).AllocatorInstance.SecondaryData = (ForElementType<Experimental::FHashType>)0x0;
  piVar1 = &(this->HashData).ArrayMax;
  (this->HashData).ArrayNum = 0;
  *piVar1 = 1;
  this->SizePow2Minus1 = 0;
  this->MaximumDistance = 0;
  if ((this->IndexData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,1,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,piVar5);
  }
  iVar3 = (this->IndexData).ArrayNum;
  piVar5 = &(this->IndexData).ArrayMax;
  if (iVar3 == *piVar5) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,&(this->IndexData).AllocatorInstance,piVar5);
    (this->IndexData).ArrayNum = iVar3;
  }
  pTVar2 = &this->HashData;
  (this->IndexData).ArrayNum = iVar3 + 1;
  if ((this->HashData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,&pTVar2->AllocatorInstance,(this->HashData).ArrayNum,piVar1);
  }
  piVar5 = &(this->HashData).ArrayNum;
  iVar3 = *piVar5;
  if (iVar3 == (this->HashData).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
    *piVar5 = iVar3;
  }
  *piVar5 = iVar3 + 1;
  FVar4 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar4 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((void *)((longlong)FVar4 + (longlong)iVar3 * 4),1);
  return this;
}

// ~TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_> @ 1459ab0f0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
           *this)

{
  ForElementType<Experimental::FHashType> FVar1;
  ForElementType<unsigned_int> FVar2;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar3;
  FScriptContainerElement *pFVar4;
  
  FVar1 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<Experimental::FHashType>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FData::Empty(&this->KeyValueData);
  FVar3 = (this->KeyValueData).FreeList.FreeList.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                )0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar4 = (this->KeyValueData).Hashes.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// FindOrUpdateIdByHashInternal<0,unsigned___int64_const_&,Experimental::RobinHoodHashTable_Private::FUnitType> @ 1459e5f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
::
FindOrUpdateIdByHashInternal<0,unsigned___int64_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
          (TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,ulong64 *param_2,FUnitType *param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FHashType FVar4;
  ForElementType<Experimental::FHashType> FVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ForElementType<Experimental::FHashType> FVar15;
  ForElementType<unsigned_int> FVar16;
  undefined4 in_register_00000014;
  uint uVar17;
  uint uVar18;
  FHashType FVar19;
  uint uVar20;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_d8 [32];
  undefined4 local_78 [2];
  ForElementType<Experimental::FHashType> local_70;
  int local_68;
  int local_64;
  undefined4 local_60 [2];
  ForElementType<unsigned_int> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FVar19.Hash = (uint)param_2;
  uVar17 = this->SizePow2Minus1 & FVar19.Hash;
  uVar14 = this->MaximumDistance;
  uVar20 = this->SizePow2Minus1;
  uVar18 = 0;
  do {
    uVar9 = 0;
    if ((int)uVar17 < (this->HashData).ArrayNum) {
      uVar9 = ~uVar17 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar10 = (*pcVar7)();
      return (FHashElementId)iVar10;
    }
    FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar15 = FVar5;
    }
    uVar9 = 0;
    if (FVar19.Hash == *(uint *)((longlong)(int)uVar17 * 4 + (longlong)FVar15)) {
      uVar11 = 0;
      if ((int)uVar17 < (this->IndexData).ArrayNum) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return (FHashElementId)iVar10;
      }
      FVar6 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar6;
      }
      uVar11 = *(uint *)((longlong)(int)uVar17 * 4 + (longlong)FVar16);
      uVar12 = uVar9;
      if ((int)uVar11 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return (FHashElementId)iVar10;
      }
      if (*(longlong *)param_3 ==
          *(longlong *)
           ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar11 * 8)) {
        *in_stack_00000030 = 1;
        if ((int)uVar17 < (this->IndexData).ArrayNum) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return (FHashElementId)iVar10;
        }
        FVar6 = (this->IndexData).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)&this->IndexData;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar6;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(uint *)((longlong)FVar16 + (longlong)(int)uVar17 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar17 = uVar17 + 1 & this->SizePow2Minus1;
    if (uVar17 == (uVar14 + 1 + FVar19.Hash & uVar20)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        FVar6 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<unsigned_int>)0x0) {
          local_60[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_50 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_4c = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<Experimental::FHashType>)0x0) {
          local_78[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_64 = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar20 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_70 = FVar5;
        local_68 = iVar10;
        local_58 = FVar6;
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        if (*piVar2 < (int)uVar20) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar20,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,piVar1,piVar2);
        uVar20 = this->SizePow2Minus1 + 1;
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        if (*piVar3 < (int)uVar20) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar20,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar3
                    );
        }
        uVar20 = this->SizePow2Minus1;
        iVar13 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar20 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,&(this->HashData).ArrayMax);
        FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar15 = (ForElementType<Experimental::FHashType>)&this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar15 + (longlong)iVar13 * 4),uVar20 + 1);
        do {
          uVar20 = uVar9;
          if ((int)uVar18 < iVar10) {
            uVar20 = ~uVar18 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar10 = (*pcVar7)();
            return (FHashElementId)iVar10;
          }
          FVar15 = (ForElementType<Experimental::FHashType>)local_78;
          if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar15 = FVar5;
          }
          if (*(int *)((longlong)(int)uVar18 * 4 + (longlong)FVar15) != -0x80000000) {
            uVar20 = uVar9;
            if ((int)uVar18 < iVar10) {
              uVar20 = ~uVar18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              iVar10 = (*pcVar7)();
              return (FHashElementId)iVar10;
            }
            FVar15 = (ForElementType<Experimental::FHashType>)local_78;
            if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar5;
            }
            FVar4.Hash = *(uint *)((longlong)(int)uVar18 * 4 + (longlong)FVar15);
            uVar20 = uVar9;
            if ((int)uVar18 < local_50) {
              uVar20 = ~uVar18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              iVar10 = (*pcVar7)();
              return (FHashElementId)iVar10;
            }
            FVar16 = (ForElementType<unsigned_int>)local_60;
            if (FVar6 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar6;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar16 + (longlong)(int)uVar18 * 4),FVar4);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 <= uVar14);
        if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar5);
        }
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar6);
        }
      }
      uVar14 = FData::
               Allocate<unsigned___int64_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
                         (&this->KeyValueData,(ulong64 *)param_3,(FUnitType *)param_4,FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// InsertIntoTable @ 145a1f380

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
                  *this,uint param_1,FHashType param_2)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  ForElementType<Experimental::FHashType> FVar6;
  ForElementType<unsigned_int> FVar7;
  ForElementType<Experimental::FHashType> FVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint local_res10;
  
  pTVar1 = &this->HashData;
  uVar12 = param_2.Hash & this->SizePow2Minus1;
  uVar11 = 0;
  local_res10 = param_1;
  while( true ) {
    uVar10 = 0;
    uVar14 = ~uVar12 >> 0x1f;
    uVar4 = uVar10;
    if ((int)uVar12 < (this->HashData).ArrayNum) {
      uVar4 = uVar14;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
    lVar13 = (longlong)(int)uVar12;
    FVar8 = (ForElementType<Experimental::FHashType>)pTVar1;
    if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar8 = FVar6;
    }
    uVar9 = uVar12 - *(int *)((longlong)FVar8 + lVar13 * 4) & this->SizePow2Minus1;
    uVar4 = uVar10;
    if ((int)uVar12 < (this->HashData).ArrayNum) {
      uVar4 = uVar14;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<Experimental::FHashType>)pTVar1;
    if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar8 = FVar6;
    }
    if (*(int *)((longlong)FVar8 + lVar13 * 4) == -0x80000000) break;
    if (uVar9 < uVar11) {
      if (this->MaximumDistance < uVar11) {
        this->MaximumDistance = uVar11;
      }
      uVar11 = uVar10;
      if ((int)uVar12 < (this->IndexData).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar5 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar5;
      }
      uVar4 = *(uint *)((longlong)FVar7 + lVar13 * 4);
      if ((int)uVar12 < (this->HashData).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<Experimental::FHashType>)pTVar1;
      if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar8 = FVar6;
      }
      uVar11 = 0;
      if ((int)uVar12 < (this->IndexData).ArrayNum) {
        uVar11 = uVar14;
      }
      uVar10 = *(uint *)((longlong)FVar8 + lVar13 * 4);
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar5 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar5;
      }
      *(uint *)((longlong)FVar7 + lVar13 * 4) = local_res10;
      uVar11 = 0;
      if ((int)uVar12 < (this->HashData).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<Experimental::FHashType>)pTVar1;
      if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar8 = FVar6;
      }
      *(uint *)((longlong)FVar8 + lVar13 * 4) = param_2.Hash;
      param_2.Hash = uVar10;
      uVar11 = uVar9;
      local_res10 = uVar4;
    }
    uVar11 = uVar11 + 1;
    uVar12 = uVar12 + 1 & this->SizePow2Minus1;
  }
  if (this->MaximumDistance < uVar11) {
    this->MaximumDistance = uVar11;
  }
  uVar11 = uVar10;
  if ((int)uVar12 < (this->IndexData).ArrayNum) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar5 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->IndexData;
  }
  *(uint *)((longlong)FVar5 + lVar13 * 4) = local_res10;
  if ((int)uVar12 < (this->HashData).ArrayNum) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar6 = (ForElementType<Experimental::FHashType>)pTVar1;
  }
  *(uint *)((longlong)FVar6 + lVar13 * 4) = param_2.Hash;
  return;
}

