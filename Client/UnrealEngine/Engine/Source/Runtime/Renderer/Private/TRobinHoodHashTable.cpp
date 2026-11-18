// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 76

// FindOrUpdateIdByHashInternal<0,unsigned___int64_const_&,PSOCollectorStats::FShaderStateUsage> @ 14471cd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
::FindOrUpdateIdByHashInternal<0,unsigned___int64_const_&,PSOCollectorStats::FShaderStateUsage>
          (TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,ulong64 *param_2,FShaderStateUsage *param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FHashType FVar4;
  ForElementType<Experimental::FHashType> FVar5;
  ForElementType<unsigned_int> FVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<unsigned_int> FVar17;
  undefined4 in_register_00000014;
  uint uVar18;
  uint uVar19;
  FHashType FVar20;
  uint uVar21;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_d8 [32];
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FVar20.Hash = (uint)param_2;
  uVar18 = this->SizePow2Minus1 & FVar20.Hash;
  uVar15 = this->MaximumDistance;
  uVar21 = this->SizePow2Minus1;
  uVar19 = 0;
  do {
    uVar10 = 0;
    if ((int)uVar18 < (this->HashData).ArrayNum) {
      uVar10 = ~uVar18 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      iVar11 = (*pcVar8)();
      return (FHashElementId)iVar11;
    }
    FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar16 = FVar5;
    }
    uVar10 = 0;
    if (FVar20.Hash == *(uint *)((longlong)(int)uVar18 * 4 + (longlong)FVar16)) {
      uVar12 = 0;
      if ((int)uVar18 < (this->IndexData).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        iVar11 = (*pcVar8)();
        return (FHashElementId)iVar11;
      }
      FVar6 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar6;
      }
      uVar12 = *(uint *)((longlong)(int)uVar18 * 4 + (longlong)FVar17);
      uVar13 = uVar10;
      if ((int)uVar12 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        iVar11 = (*pcVar8)();
        return (FHashElementId)iVar11;
      }
      lVar7._0_1_ = param_3->bPrecached;
      lVar7._1_1_ = param_3->bUsed;
      lVar7._2_6_ = *(undefined6 *)&param_3->field_0x2;
      if (lVar7 == *(longlong *)
                    ((this->KeyValueData).KeyVals.AllocatorInstance.Data +
                    (longlong)(int)uVar12 * 0x30)) {
        *in_stack_00000030 = 1;
        if ((int)uVar18 < (this->IndexData).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          iVar11 = (*pcVar8)();
          return (FHashElementId)iVar11;
        }
        FVar6 = (this->IndexData).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<unsigned_int>)&this->IndexData;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar17 = FVar6;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(uint *)((longlong)FVar17 + (longlong)(int)uVar18 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar18 = uVar18 + 1 & this->SizePow2Minus1;
    if (uVar18 == (uVar15 + 1 + FVar20.Hash & uVar21)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        FVar6 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<unsigned_int>)0x0) {
          local_58[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar11 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar15 = this->SizePow2Minus1;
        iVar14 = uVar15 * 2;
        this->MaximumDistance = 0;
        uVar21 = iVar14 + 2;
        this->SizePow2Minus1 = iVar14 + 1;
        local_68 = FVar5;
        local_60 = iVar11;
        local_50 = FVar6;
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        if (*piVar2 < (int)uVar21) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar21,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,piVar1,piVar2);
        uVar21 = this->SizePow2Minus1 + 1;
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        if (*piVar3 < (int)uVar21) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar21,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar3
                    );
        }
        uVar21 = this->SizePow2Minus1;
        iVar14 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar21 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,&(this->HashData).ArrayMax);
        FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar16 = (ForElementType<Experimental::FHashType>)&this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar16 + (longlong)iVar14 * 4),uVar21 + 1);
        do {
          uVar21 = uVar10;
          if ((int)uVar19 < iVar11) {
            uVar21 = ~uVar19 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return (FHashElementId)iVar11;
          }
          FVar16 = (ForElementType<Experimental::FHashType>)local_70;
          if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar16 = FVar5;
          }
          if (*(int *)((longlong)(int)uVar19 * 4 + (longlong)FVar16) != -0x80000000) {
            uVar21 = uVar10;
            if ((int)uVar19 < iVar11) {
              uVar21 = ~uVar19 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              iVar11 = (*pcVar8)();
              return (FHashElementId)iVar11;
            }
            FVar16 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar16 = FVar5;
            }
            FVar4.Hash = *(uint *)((longlong)(int)uVar19 * 4 + (longlong)FVar16);
            uVar21 = uVar10;
            if ((int)uVar19 < local_48) {
              uVar21 = ~uVar19 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              iVar11 = (*pcVar8)();
              return (FHashElementId)iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)local_58;
            if (FVar6 != (ForElementType<unsigned_int>)0x0) {
              FVar17 = FVar6;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar17 + (longlong)(int)uVar19 * 4),FVar4);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 <= uVar15);
        if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar5);
        }
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar6);
        }
      }
      uVar15 = FData::Allocate<unsigned___int64_const_&,PSOCollectorStats::FShaderStateUsage>
                         (&this->KeyValueData,(ulong64 *)param_3,(FShaderStateUsage *)param_4,FVar20
                         );
      InsertIntoTable(this,uVar15,FVar20);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar15;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_> @ 14472cf80

TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 14477c890

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
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

// FindOrUpdateIdByHashInternal<0,FPrimitiveSceneProxy_const_*_const_&,FVolumetricMeshBatch> @ 144a56510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
::FindOrUpdateIdByHashInternal<0,FPrimitiveSceneProxy_const_*_const_&,FVolumetricMeshBatch>
          (TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FPrimitiveSceneProxy **param_2,FVolumetricMeshBatch *param_3,
          bool *param_4)

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
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
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
      if (param_3->Mesh ==
          *(FMeshBatch **)
           ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18)) {
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
          local_58[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar20 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = FVar5;
        local_60 = iVar10;
        local_50 = FVar6;
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
          FVar15 = (ForElementType<Experimental::FHashType>)local_70;
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
            FVar15 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar5;
            }
            FVar4.Hash = *(uint *)((longlong)(int)uVar18 * 4 + (longlong)FVar15);
            uVar20 = uVar9;
            if ((int)uVar18 < local_48) {
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
            FVar16 = (ForElementType<unsigned_int>)local_58;
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
      uVar14 = FData::Allocate<FPrimitiveSceneProxy_const_*_const_&,FVolumetricMeshBatch>
                         (&this->KeyValueData,(FPrimitiveSceneProxy **)param_3,
                          (FVolumetricMeshBatch *)param_4,FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_> @ 144a59600

TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 144a9aa50

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
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

// FindIdByHash @ 144b20220

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FindIdByHash(TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
               *this,FHashType param_1,FRHITexture **param_2)

{
  uint uVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar8;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar9;
  undefined4 in_register_00000014;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar10;
  uint uVar11;
  uint uVar12;
  longlong *in_R9;
  uint uVar13;
  
  uVar13 = this->MaximumDistance;
  uVar12 = (uint)param_2;
  uVar1 = this->SizePow2Minus1;
  uVar11 = this->SizePow2Minus1 & uVar12;
  do {
    uVar5 = 0;
    if ((int)uVar11 < (this->HashData).ArrayNum) {
      uVar5 = ~uVar11 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FHashElementId)iVar6;
    }
    pTVar2 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar8 = &this->HashData;
    if (pTVar2 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)0x0) {
      pTVar8 = pTVar2;
    }
    if (uVar12 == *(uint *)((longlong)(pTVar8->AllocatorInstance).InlineData +
                           (longlong)(int)uVar11 * 4)) {
      uVar5 = 0;
      if ((int)uVar11 < (this->IndexData).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      pTVar9 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar10 = &this->IndexData;
      if (pTVar9 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar10 = pTVar9;
      }
      uVar5 = *(uint *)((pTVar10->AllocatorInstance).InlineData + (longlong)(int)uVar11 * 4);
      uVar7 = 0;
      if ((int)uVar5 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      if (*in_R9 == *(longlong *)
                     &(this->KeyValueData).KeyVals.AllocatorInstance.Data[(int)uVar5].Pair) {
        uVar13 = 0;
        if ((int)uVar11 < (this->IndexData).ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return (FHashElementId)iVar6;
        }
        pTVar9 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                 (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (pTVar9 == (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                      0x0) {
          pTVar9 = &this->IndexData;
        }
        *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(undefined4 *)((pTVar9->AllocatorInstance).InlineData + (longlong)(int)uVar11 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar11 = uVar11 + 1 & this->SizePow2Minus1;
    if (uVar11 == (uVar13 + 1 + uVar12 & uVar1)) {
      *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) = 0xffffffff;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,int,int> @ 144d39770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
FindOrUpdateIdByHashInternal<0,int,int>
          (TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,int *param_2,int *param_3,bool *param_4)

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
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
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
      if (*param_3 ==
          *(int *)((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar11 * 8))
      {
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
          local_58[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar20 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = FVar5;
        local_60 = iVar10;
        local_50 = FVar6;
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
          FVar15 = (ForElementType<Experimental::FHashType>)local_70;
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
            FVar15 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar5;
            }
            FVar4.Hash = *(uint *)((longlong)(int)uVar18 * 4 + (longlong)FVar15);
            uVar20 = uVar9;
            if ((int)uVar18 < local_48) {
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
            FVar16 = (ForElementType<unsigned_int>)local_58;
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
      uVar14 = FData::Allocate<int,int>(&this->KeyValueData,param_3,(int *)param_4,FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// operator= @ 144d43d00

TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_> *
__thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
operator=(TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
          *this,TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
                *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  ForElementType<unsigned_int> FVar4;
  ForElementType<Experimental::FHashType> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<Experimental::FHashType> FVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  if (this != param_1) {
    this->SizePow2Minus1 = param_1->SizePow2Minus1;
    this->MaximumDistance = param_1->MaximumDistance;
    FData::operator=(&this->KeyValueData,&param_1->KeyValueData);
    uVar13 = this->SizePow2Minus1 + 1;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar1 = &(this->IndexData).ArrayMax;
    piVar2 = &(this->IndexData).ArrayNum;
    if (*piVar1 < (int)uVar13) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,uVar13,&(this->IndexData).AllocatorInstance,*piVar2,piVar1);
    }
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,piVar2,piVar1);
    uVar13 = this->SizePow2Minus1 + 1;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar1 = &(this->HashData).ArrayMax;
    piVar2 = &(this->HashData).ArrayNum;
    if (*piVar1 < (int)uVar13) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                (4,4,uVar13,&(this->HashData).AllocatorInstance,*piVar2,piVar1);
    }
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,this->SizePow2Minus1 + 1,&(this->HashData).AllocatorInstance,piVar2,piVar1);
    uVar13 = 0;
    do {
      uVar12 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < (param_1->IndexData).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar6)();
        return pTVar9;
      }
      FVar4 = (param_1->IndexData).AllocatorInstance.SecondaryData;
      lVar14 = (longlong)(int)uVar13;
      FVar10 = (ForElementType<unsigned_int>)&param_1->IndexData;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar4;
      }
      uVar3 = *(undefined4 *)((longlong)FVar10 + lVar14 * 4);
      uVar8 = 0;
      if ((int)uVar13 < (this->IndexData).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar6)();
        return pTVar9;
      }
      FVar4 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar4;
      }
      *(undefined4 *)((longlong)FVar10 + lVar14 * 4) = uVar3;
      uVar8 = 0;
      if ((int)uVar13 < (param_1->HashData).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar6)();
        return pTVar9;
      }
      FVar5 = (param_1->HashData).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<Experimental::FHashType>)&param_1->HashData;
      if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar11 = FVar5;
      }
      uVar8 = 0;
      if ((int)uVar13 < (this->HashData).ArrayNum) {
        uVar8 = uVar12;
      }
      uVar3 = *(undefined4 *)((longlong)FVar11 + lVar14 * 4);
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar6)();
        return pTVar9;
      }
      FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<Experimental::FHashType>)&this->HashData;
      if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar11 = FVar5;
      }
      uVar13 = uVar13 + 1;
      *(undefined4 *)((longlong)FVar11 + lVar14 * 4) = uVar3;
    } while (uVar13 <= this->SizePow2Minus1);
  }
  return this;
}

// RemoveByElementId @ 144d93e50

bool __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
RemoveByElementId(TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
                  *this,FHashElementId param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FHashType FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<Experimental::FHashType> FVar17;
  ForElementType<unsigned_int> FVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 local_60 [2];
  ForElementType<Experimental::FHashType> local_58;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  ForElementType<unsigned_int> local_40;
  int local_38;
  int local_34;
  
  uVar13 = 0;
  if (param_1.Index < (this->KeyValueData).Hashes.ArrayNum) {
    uVar13 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar8 = (this->KeyValueData).Hashes.AllocatorInstance.Data;
  pTVar1 = &this->IndexData;
  uVar13 = this->MaximumDistance;
  uVar22 = *(uint *)(pFVar8 + (longlong)param_1.Index * 4) & this->SizePow2Minus1;
  iVar6 = *(int *)(pFVar8 + (longlong)param_1.Index * 4);
  uVar12 = this->SizePow2Minus1;
  while( true ) {
    uVar20 = ~uVar22 >> 0x1f;
    uVar21 = 0;
    if ((int)uVar22 < (this->IndexData).ArrayNum) {
      uVar21 = uVar20;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
    lVar19 = (longlong)(int)uVar22;
    FVar18 = (ForElementType<unsigned_int>)pTVar1;
    if (FVar15 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar15;
    }
    if (param_1.Index == *(int *)((longlong)FVar18 + lVar19 * 4)) break;
    uVar22 = uVar22 + 1 & this->SizePow2Minus1;
    if (uVar22 == (uVar13 + 1 + iVar6 & uVar12)) {
      return false;
    }
  }
  uVar13 = 0;
  if ((int)uVar22 < (this->IndexData).ArrayNum) {
    uVar13 = uVar20;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)pTVar1;
  }
  uVar13 = *(uint *)((longlong)FVar15 + lVar19 * 4);
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
            (&(this->KeyValueData).FreeList,uVar13);
  uVar12 = 0;
  if ((int)uVar13 < (this->KeyValueData).Hashes.ArrayNum) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  *(undefined4 *)((this->KeyValueData).Hashes.AllocatorInstance.Data + (longlong)(int)uVar13 * 4) =
       0x80000000;
  uVar12 = 0;
  if ((int)uVar13 < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pTVar2 = &this->HashData;
  uVar13 = 0;
  if ((int)uVar22 < (this->HashData).ArrayNum) {
    uVar13 = uVar20;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar16 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar16 + lVar19 * 4) = 0x80000000;
  if ((ulonglong)
      (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
       (longlong)(this->KeyValueData).FreeList.NumElements) * 0x14) <
      (ulonglong)(this->SizePow2Minus1 * 3)) {
    FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<unsigned_int>)0x0) {
      local_48[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
    }
    (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    piVar3 = &(this->IndexData).ArrayNum;
    local_38 = *piVar3;
    piVar4 = &(this->IndexData).ArrayMax;
    local_34 = *piVar4;
    *piVar4 = 1;
    *piVar3 = 0;
    FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
      local_60[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
    }
    (this->HashData).AllocatorInstance.SecondaryData = (ForElementType<Experimental::FHashType>)0x0;
    piVar5 = &(this->HashData).ArrayMax;
    local_4c = *piVar5;
    iVar6 = (this->HashData).ArrayNum;
    *piVar5 = 1;
    (this->HashData).ArrayNum = 0;
    uVar12 = this->SizePow2Minus1;
    uVar13 = uVar12 >> 1;
    this->SizePow2Minus1 = uVar13;
    uVar13 = uVar13 + 1;
    this->MaximumDistance = 0;
    local_58 = FVar16;
    local_50 = iVar6;
    local_40 = FVar15;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (*piVar4 < (int)uVar13) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,uVar13,&(this->IndexData).AllocatorInstance,*piVar3,piVar4);
    }
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
               &(this->IndexData).ArrayNum,piVar4);
    uVar13 = this->SizePow2Minus1 + 1;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar3 = &(this->HashData).ArrayNum;
    if (*piVar5 < (int)uVar13) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                (4,4,uVar13,&pTVar2->AllocatorInstance,*piVar3,piVar5);
    }
    uVar13 = this->SizePow2Minus1;
    iVar14 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                       (4,4,uVar13 + 1,&pTVar2->AllocatorInstance,piVar3,piVar5);
    FVar17 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar17 == (ForElementType<Experimental::FHashType>)0x0) {
      FVar17 = (ForElementType<Experimental::FHashType>)pTVar2;
    }
    DefaultConstructItems<Experimental::FHashType,int>
              ((void *)((longlong)FVar17 + (longlong)iVar14 * 4),uVar13 + 1);
    uVar13 = 0;
    while( true ) {
      uVar21 = ~uVar13 >> 0x1f;
      uVar22 = 0;
      if ((int)uVar13 < iVar6) {
        uVar22 = uVar21;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) break;
      lVar19 = (longlong)(int)uVar13;
      FVar17 = (ForElementType<Experimental::FHashType>)local_60;
      if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar17 = FVar16;
      }
      if (*(int *)((longlong)FVar17 + lVar19 * 4) != -0x80000000) {
        uVar22 = 0;
        if ((int)uVar13 < iVar6) {
          uVar22 = uVar21;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar17 = (ForElementType<Experimental::FHashType>)local_60;
        if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
          FVar17 = FVar16;
        }
        uVar22 = 0;
        if ((int)uVar13 < local_38) {
          uVar22 = uVar21;
        }
        FVar7.Hash = *(uint *)((longlong)FVar17 + lVar19 * 4);
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar18 = (ForElementType<unsigned_int>)local_48;
        if (FVar15 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar15;
        }
        InsertIntoTable(this,*(uint *)((longlong)FVar18 + lVar19 * 4),FVar7);
      }
      uVar13 = uVar13 + 1;
      if (uVar12 < uVar13) {
        if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar16);
        }
        if (FVar15 == (ForElementType<unsigned_int>)0x0) {
          return true;
        }
        FMemory::Free((void *)FVar15);
        return true;
      }
    }
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  return true;
}

// FindOrUpdateIdByHashInternal<0,FGraphicsMinimalPipelineStateInitializer_const_&,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState> @ 144ee4470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
::
FindOrUpdateIdByHashInternal<0,FGraphicsMinimalPipelineStateInitializer_const_&,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
          (TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FGraphicsMinimalPipelineStateInitializer *param_2,
          FRefCountedGraphicsMinimalPipelineState *param_3,bool *param_4)

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
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
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
      bVar8 = FGraphicsMinimalPipelineStateInitializer::operator==
                        ((FGraphicsMinimalPipelineStateInitializer *)param_3,
                         (FGraphicsMinimalPipelineStateInitializer *)
                         ((this->KeyValueData).KeyVals.AllocatorInstance.Data +
                         (longlong)(int)uVar11 * 0xa8));
      if (bVar8) {
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
          local_58[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar20 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = FVar5;
        local_60 = iVar10;
        local_50 = FVar6;
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
          FVar15 = (ForElementType<Experimental::FHashType>)local_70;
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
            FVar15 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar5;
            }
            FVar4.Hash = *(uint *)((longlong)(int)uVar18 * 4 + (longlong)FVar15);
            uVar20 = uVar9;
            if ((int)uVar18 < local_48) {
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
            FVar16 = (ForElementType<unsigned_int>)local_58;
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
               Allocate<FGraphicsMinimalPipelineStateInitializer_const_&,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
                         (&this->KeyValueData,(FGraphicsMinimalPipelineStateInitializer *)param_3,
                          (FRefCountedGraphicsMinimalPipelineState *)param_4,FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FGraphicsMinimalPipelineStateInitializer_const_&,Experimental::RobinHoodHashTable_Private::FUnitType> @ 144ee4a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
::
FindOrUpdateIdByHashInternal<0,FGraphicsMinimalPipelineStateInitializer_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
          (TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FGraphicsMinimalPipelineStateInitializer *param_2,
          FUnitType *param_3,bool *param_4)

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
      bVar8 = FGraphicsMinimalPipelineStateInitializer::operator==
                        ((FGraphicsMinimalPipelineStateInitializer *)param_3,
                         (FGraphicsMinimalPipelineStateInitializer *)
                         ((this->KeyValueData).KeyVals.AllocatorInstance.Data +
                         (longlong)(int)uVar11 * 0xa0));
      if (bVar8) {
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
               Allocate<FGraphicsMinimalPipelineStateInitializer_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
                         (&this->KeyValueData,(FGraphicsMinimalPipelineStateInitializer *)param_3,
                          (FUnitType *)param_4,FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FMeshDrawCommand_const_&,FMeshDrawCommandCount> @ 144ee4fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::FindOrUpdateIdByHashInternal<0,FMeshDrawCommand_const_&,FMeshDrawCommandCount>
          (TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FMeshDrawCommand *param_2,FMeshDrawCommandCount *param_3,
          bool *param_4)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  FMeshDrawCommandCount FVar5;
  FHashType FVar6;
  ForElementType<Experimental::FHashType> FVar7;
  ForElementType<unsigned_int> FVar8;
  FMeshDrawShaderBindings *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ForElementType<Experimental::FHashType> FVar18;
  ForElementType<unsigned_int> FVar19;
  FVertexInputStream *pFVar20;
  undefined4 in_register_00000014;
  FMeshDrawShaderBindings *pFVar21;
  FMeshDrawShaderBindings *pFVar22;
  uint uVar23;
  uint uVar24;
  FHashType FVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_e8 [32];
  undefined4 local_78 [2];
  ForElementType<Experimental::FHashType> local_70;
  int local_68;
  int local_64;
  undefined4 local_60 [2];
  ForElementType<unsigned_int> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FVar25.Hash = (uint)param_2;
  uVar23 = this->SizePow2Minus1 & FVar25.Hash;
  uVar17 = this->MaximumDistance;
  uVar26 = this->SizePow2Minus1;
  uVar24 = 0;
  do {
    uVar27 = ~uVar23 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar23 < (this->HashData).ArrayNum) {
      uVar12 = uVar27;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      iVar13 = (*pcVar10)();
      return (FHashElementId)iVar13;
    }
    FVar7 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar7 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar18 = FVar7;
    }
    lVar4 = (longlong)(int)uVar23 * 4;
    if (FVar25.Hash == *(uint *)(lVar4 + (longlong)FVar18)) {
      uVar14 = 0;
      uVar12 = uVar14;
      if ((int)uVar23 < (this->IndexData).ArrayNum) {
        uVar12 = uVar27;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        iVar13 = (*pcVar10)();
        return (FHashElementId)iVar13;
      }
      FVar8 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar8 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = FVar8;
      }
      uVar12 = *(uint *)(lVar4 + (longlong)FVar19);
      uVar15 = uVar14;
      if ((int)uVar12 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        iVar13 = (*pcVar10)();
        return (FHashElementId)iVar13;
      }
      pFVar22 = (FMeshDrawShaderBindings *)
                ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x1a0
                );
      if (((param_3[0x3a].Num == *(atomic<unsigned_int> *)&pFVar22[1].ShaderFrequencyBits) &&
          (param_3[0x44].Num.field_0x1 == *(char *)((longlong)pFVar22[2].Data.InlineStorage + 1)))
         && (bVar11 = FMeshDrawShaderBindings::MatchesForDynamicInstancing
                                ((FMeshDrawShaderBindings *)param_3,pFVar22), bVar11)) {
        if (param_3[0x36].Num == *(atomic<unsigned_int> *)(pFVar22[1].Data.InlineStorage + 8)) {
          pFVar9 = (FMeshDrawShaderBindings *)pFVar22[1].Data.InlineStorage[7];
          pFVar21 = pFVar22 + 1;
          if (pFVar9 != (FMeshDrawShaderBindings *)0x0) {
            pFVar21 = pFVar9;
          }
          pFVar20 = (FVertexInputStream *)(param_3 + 0x1e);
          if (*(FVertexInputStream **)(param_3 + 0x34) != (FVertexInputStream *)0x0) {
            pFVar20 = *(FVertexInputStream **)(param_3 + 0x34);
          }
          bVar11 = CompareItems<FVertexInputStream,int>
                             (pFVar20,(FVertexInputStream *)pFVar21,(int)param_3[0x36].Num);
          if ((((bVar11) && (*(char *)&param_3[0x44].Num == *(char *)pFVar22[2].Data.InlineStorage))
              && ((*(uchar **)(param_3 + 0x38) == pFVar22[1].Data.InlineStorage[9] &&
                  ((param_3[0x3c].Num ==
                    *(atomic<unsigned_int> *)pFVar22[2].ShaderLayouts.AllocatorInstance.InlineData
                   && (FVar5.Num = param_3[0x3d].Num,
                      FVar5.Num ==
                      *(atomic<unsigned_int> *)
                       (pFVar22[2].ShaderLayouts.AllocatorInstance.InlineData + 4))))))) &&
             (param_3[0x3e].Num ==
              *(atomic<unsigned_int> *)(pFVar22[2].ShaderLayouts.AllocatorInstance.InlineData + 8)))
          {
            if (FVar5.Num == (atomic<unsigned_int>)0x0) {
LAB_144ee5271:
              if ((*(ForElementType<FMeshDrawShaderBindingsLayout> *)(param_3 + 0x40) ==
                   pFVar22[2].ShaderLayouts.AllocatorInstance.SecondaryData) &&
                 (param_3[0x42].Num == (atomic<unsigned_int>)pFVar22[2].ShaderLayouts.ArrayNum)) {
LAB_144ee5649:
                *in_stack_00000030 = 1;
                if ((int)uVar23 < (this->IndexData).ArrayNum) {
                  uVar14 = uVar27;
                }
                if ((uVar14 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar10 = (code *)swi(3);
                  iVar13 = (*pcVar10)();
                  return (FHashElementId)iVar13;
                }
                FVar8 = (this->IndexData).AllocatorInstance.SecondaryData;
                FVar19 = (ForElementType<unsigned_int>)&this->IndexData;
                if (FVar8 != (ForElementType<unsigned_int>)0x0) {
                  FVar19 = FVar8;
                }
                *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
                     *(uint *)(lVar4 + (longlong)FVar19);
                return (FHashElementId)param_1.Hash;
              }
            }
            else if (param_3[0x40].Num ==
                     *(atomic<unsigned_int> *)
                      &pFVar22[2].ShaderLayouts.AllocatorInstance.SecondaryData) {
              if (param_3[0x41].Num ==
                  *(atomic<unsigned_int> *)
                   &pFVar22[2].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x4)
              goto LAB_144ee5649;
              if (FVar5.Num == (atomic<unsigned_int>)0x0) goto LAB_144ee5271;
            }
          }
        }
      }
    }
    uVar23 = uVar23 + 1 & this->SizePow2Minus1;
    if (uVar23 == (uVar17 + 1 + FVar25.Hash & uVar26)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        FVar8 = (this->IndexData).AllocatorInstance.SecondaryData;
        pTVar1 = &this->IndexData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          local_60[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar2 = &(this->IndexData).ArrayNum;
        local_50 = *piVar2;
        piVar3 = &(this->IndexData).ArrayMax;
        local_4c = *piVar3;
        *piVar3 = 1;
        *piVar2 = 0;
        FVar7 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<Experimental::FHashType>)0x0) {
          local_78[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        local_64 = (this->HashData).ArrayMax;
        iVar13 = (this->HashData).ArrayNum;
        (this->HashData).ArrayNum = 0;
        (this->HashData).ArrayMax = 1;
        uVar17 = this->SizePow2Minus1;
        iVar16 = uVar17 * 2;
        this->MaximumDistance = 0;
        uVar26 = iVar16 + 2;
        this->SizePow2Minus1 = iVar16 + 1;
        local_70 = FVar7;
        local_68 = iVar13;
        local_58 = FVar8;
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        if (*piVar3 < (int)uVar26) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar26,&pTVar1->AllocatorInstance,*piVar2,piVar3);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&pTVar1->AllocatorInstance,
                   &(this->IndexData).ArrayNum,&(this->IndexData).ArrayMax);
        uVar26 = this->SizePow2Minus1 + 1;
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        if ((this->HashData).ArrayMax < (int)uVar26) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar26,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,
                     &(this->HashData).ArrayMax);
        }
        uVar26 = this->SizePow2Minus1;
        iVar16 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar26 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,&(this->HashData).ArrayMax);
        FVar18 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar18 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar18 = (ForElementType<Experimental::FHashType>)&this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar18 + (longlong)iVar16 * 4),uVar26 + 1);
        do {
          uVar23 = ~uVar24 >> 0x1f;
          uVar26 = 0;
          if ((int)uVar24 < iVar13) {
            uVar26 = uVar23;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            iVar13 = (*pcVar10)();
            return (FHashElementId)iVar13;
          }
          FVar18 = (ForElementType<Experimental::FHashType>)local_78;
          if (FVar7 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar18 = FVar7;
          }
          if (*(int *)((longlong)(int)uVar24 * 4 + (longlong)FVar18) != -0x80000000) {
            uVar26 = 0;
            if ((int)uVar24 < iVar13) {
              uVar26 = uVar23;
            }
            if ((uVar26 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              iVar13 = (*pcVar10)();
              return (FHashElementId)iVar13;
            }
            FVar18 = (ForElementType<Experimental::FHashType>)local_78;
            if (FVar7 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar18 = FVar7;
            }
            uVar26 = 0;
            if ((int)uVar24 < local_50) {
              uVar26 = uVar23;
            }
            FVar6.Hash = *(uint *)((longlong)FVar18 + (longlong)(int)uVar24 * 4);
            if ((uVar26 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              iVar13 = (*pcVar10)();
              return (FHashElementId)iVar13;
            }
            FVar19 = (ForElementType<unsigned_int>)local_60;
            if (FVar8 != (ForElementType<unsigned_int>)0x0) {
              FVar19 = FVar8;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar19 + (longlong)(int)uVar24 * 4),FVar6);
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 <= uVar17);
        if (FVar7 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar7);
        }
        if (FVar8 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar8);
        }
      }
      uVar17 = FData::Allocate<FMeshDrawCommand_const_&,FMeshDrawCommandCount>
                         (&this->KeyValueData,(FMeshDrawCommand *)param_3,
                          (FMeshDrawCommandCount *)param_4,FVar25);
      InsertIntoTable(this,uVar17,FVar25);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar17;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FMeshDrawCommand,FMeshDrawCommandCount> @ 144ee56d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::FindOrUpdateIdByHashInternal<0,FMeshDrawCommand,FMeshDrawCommandCount>
          (TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FMeshDrawCommand *param_2,FMeshDrawCommandCount *param_3,
          bool *param_4)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  FMeshDrawCommandCount FVar5;
  FHashType FVar6;
  ForElementType<Experimental::FHashType> FVar7;
  ForElementType<unsigned_int> FVar8;
  FMeshDrawShaderBindings *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ForElementType<Experimental::FHashType> FVar18;
  ForElementType<unsigned_int> FVar19;
  FVertexInputStream *pFVar20;
  undefined4 in_register_00000014;
  FMeshDrawShaderBindings *pFVar21;
  FMeshDrawShaderBindings *pFVar22;
  uint uVar23;
  uint uVar24;
  FHashType FVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_e8 [32];
  undefined4 local_78 [2];
  ForElementType<Experimental::FHashType> local_70;
  int local_68;
  int local_64;
  undefined4 local_60 [2];
  ForElementType<unsigned_int> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FVar25.Hash = (uint)param_2;
  uVar23 = this->SizePow2Minus1 & FVar25.Hash;
  uVar17 = this->MaximumDistance;
  uVar26 = this->SizePow2Minus1;
  uVar24 = 0;
  do {
    uVar27 = ~uVar23 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar23 < (this->HashData).ArrayNum) {
      uVar12 = uVar27;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      iVar13 = (*pcVar10)();
      return (FHashElementId)iVar13;
    }
    FVar7 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar7 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar18 = FVar7;
    }
    lVar4 = (longlong)(int)uVar23 * 4;
    if (FVar25.Hash == *(uint *)(lVar4 + (longlong)FVar18)) {
      uVar14 = 0;
      uVar12 = uVar14;
      if ((int)uVar23 < (this->IndexData).ArrayNum) {
        uVar12 = uVar27;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        iVar13 = (*pcVar10)();
        return (FHashElementId)iVar13;
      }
      FVar8 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar8 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = FVar8;
      }
      uVar12 = *(uint *)(lVar4 + (longlong)FVar19);
      uVar15 = uVar14;
      if ((int)uVar12 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        iVar13 = (*pcVar10)();
        return (FHashElementId)iVar13;
      }
      pFVar22 = (FMeshDrawShaderBindings *)
                ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x1a0
                );
      if (((param_3[0x3a].Num == *(atomic<unsigned_int> *)&pFVar22[1].ShaderFrequencyBits) &&
          (param_3[0x44].Num.field_0x1 == *(char *)((longlong)pFVar22[2].Data.InlineStorage + 1)))
         && (bVar11 = FMeshDrawShaderBindings::MatchesForDynamicInstancing
                                ((FMeshDrawShaderBindings *)param_3,pFVar22), bVar11)) {
        if (param_3[0x36].Num == *(atomic<unsigned_int> *)(pFVar22[1].Data.InlineStorage + 8)) {
          pFVar9 = (FMeshDrawShaderBindings *)pFVar22[1].Data.InlineStorage[7];
          pFVar21 = pFVar22 + 1;
          if (pFVar9 != (FMeshDrawShaderBindings *)0x0) {
            pFVar21 = pFVar9;
          }
          pFVar20 = (FVertexInputStream *)(param_3 + 0x1e);
          if (*(FVertexInputStream **)(param_3 + 0x34) != (FVertexInputStream *)0x0) {
            pFVar20 = *(FVertexInputStream **)(param_3 + 0x34);
          }
          bVar11 = CompareItems<FVertexInputStream,int>
                             (pFVar20,(FVertexInputStream *)pFVar21,(int)param_3[0x36].Num);
          if ((((bVar11) && (*(char *)&param_3[0x44].Num == *(char *)pFVar22[2].Data.InlineStorage))
              && ((*(uchar **)(param_3 + 0x38) == pFVar22[1].Data.InlineStorage[9] &&
                  ((param_3[0x3c].Num ==
                    *(atomic<unsigned_int> *)pFVar22[2].ShaderLayouts.AllocatorInstance.InlineData
                   && (FVar5.Num = param_3[0x3d].Num,
                      FVar5.Num ==
                      *(atomic<unsigned_int> *)
                       (pFVar22[2].ShaderLayouts.AllocatorInstance.InlineData + 4))))))) &&
             (param_3[0x3e].Num ==
              *(atomic<unsigned_int> *)(pFVar22[2].ShaderLayouts.AllocatorInstance.InlineData + 8)))
          {
            if (FVar5.Num == (atomic<unsigned_int>)0x0) {
LAB_144ee5961:
              if ((*(ForElementType<FMeshDrawShaderBindingsLayout> *)(param_3 + 0x40) ==
                   pFVar22[2].ShaderLayouts.AllocatorInstance.SecondaryData) &&
                 (param_3[0x42].Num == (atomic<unsigned_int>)pFVar22[2].ShaderLayouts.ArrayNum)) {
LAB_144ee5d39:
                *in_stack_00000030 = 1;
                if ((int)uVar23 < (this->IndexData).ArrayNum) {
                  uVar14 = uVar27;
                }
                if ((uVar14 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar10 = (code *)swi(3);
                  iVar13 = (*pcVar10)();
                  return (FHashElementId)iVar13;
                }
                FVar8 = (this->IndexData).AllocatorInstance.SecondaryData;
                FVar19 = (ForElementType<unsigned_int>)&this->IndexData;
                if (FVar8 != (ForElementType<unsigned_int>)0x0) {
                  FVar19 = FVar8;
                }
                *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
                     *(uint *)(lVar4 + (longlong)FVar19);
                return (FHashElementId)param_1.Hash;
              }
            }
            else if (param_3[0x40].Num ==
                     *(atomic<unsigned_int> *)
                      &pFVar22[2].ShaderLayouts.AllocatorInstance.SecondaryData) {
              if (param_3[0x41].Num ==
                  *(atomic<unsigned_int> *)
                   &pFVar22[2].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x4)
              goto LAB_144ee5d39;
              if (FVar5.Num == (atomic<unsigned_int>)0x0) goto LAB_144ee5961;
            }
          }
        }
      }
    }
    uVar23 = uVar23 + 1 & this->SizePow2Minus1;
    if (uVar23 == (uVar17 + 1 + FVar25.Hash & uVar26)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        FVar8 = (this->IndexData).AllocatorInstance.SecondaryData;
        pTVar1 = &this->IndexData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          local_60[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar2 = &(this->IndexData).ArrayNum;
        local_50 = *piVar2;
        piVar3 = &(this->IndexData).ArrayMax;
        local_4c = *piVar3;
        *piVar3 = 1;
        *piVar2 = 0;
        FVar7 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<Experimental::FHashType>)0x0) {
          local_78[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        local_64 = (this->HashData).ArrayMax;
        iVar13 = (this->HashData).ArrayNum;
        (this->HashData).ArrayNum = 0;
        (this->HashData).ArrayMax = 1;
        uVar17 = this->SizePow2Minus1;
        iVar16 = uVar17 * 2;
        this->MaximumDistance = 0;
        uVar26 = iVar16 + 2;
        this->SizePow2Minus1 = iVar16 + 1;
        local_70 = FVar7;
        local_68 = iVar13;
        local_58 = FVar8;
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        if (*piVar3 < (int)uVar26) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar26,&pTVar1->AllocatorInstance,*piVar2,piVar3);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&pTVar1->AllocatorInstance,
                   &(this->IndexData).ArrayNum,&(this->IndexData).ArrayMax);
        uVar26 = this->SizePow2Minus1 + 1;
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        if ((this->HashData).ArrayMax < (int)uVar26) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar26,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,
                     &(this->HashData).ArrayMax);
        }
        uVar26 = this->SizePow2Minus1;
        iVar16 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar26 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,&(this->HashData).ArrayMax);
        FVar18 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar18 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar18 = (ForElementType<Experimental::FHashType>)&this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar18 + (longlong)iVar16 * 4),uVar26 + 1);
        do {
          uVar23 = ~uVar24 >> 0x1f;
          uVar26 = 0;
          if ((int)uVar24 < iVar13) {
            uVar26 = uVar23;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            iVar13 = (*pcVar10)();
            return (FHashElementId)iVar13;
          }
          FVar18 = (ForElementType<Experimental::FHashType>)local_78;
          if (FVar7 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar18 = FVar7;
          }
          if (*(int *)((longlong)(int)uVar24 * 4 + (longlong)FVar18) != -0x80000000) {
            uVar26 = 0;
            if ((int)uVar24 < iVar13) {
              uVar26 = uVar23;
            }
            if ((uVar26 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              iVar13 = (*pcVar10)();
              return (FHashElementId)iVar13;
            }
            FVar18 = (ForElementType<Experimental::FHashType>)local_78;
            if (FVar7 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar18 = FVar7;
            }
            uVar26 = 0;
            if ((int)uVar24 < local_50) {
              uVar26 = uVar23;
            }
            FVar6.Hash = *(uint *)((longlong)FVar18 + (longlong)(int)uVar24 * 4);
            if ((uVar26 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              iVar13 = (*pcVar10)();
              return (FHashElementId)iVar13;
            }
            FVar19 = (ForElementType<unsigned_int>)local_60;
            if (FVar8 != (ForElementType<unsigned_int>)0x0) {
              FVar19 = FVar8;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar19 + (longlong)(int)uVar24 * 4),FVar6);
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 <= uVar17);
        if (FVar7 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar7);
        }
        if (FVar8 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar8);
        }
      }
      uVar17 = FData::Allocate<FMeshDrawCommand,FMeshDrawCommandCount>
                         (&this->KeyValueData,(FMeshDrawCommand *)param_3,
                          (FMeshDrawCommandCount *)param_4,FVar25);
      InsertIntoTable(this,uVar17,FVar25);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar17;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_> @ 144eec510

TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
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

// ~TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_> @ 144eefb70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
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
  DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>,int>
            ((TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>
              *)(this->KeyValueData).KeyVals.AllocatorInstance.Data,
             (this->KeyValueData).KeyVals.ArrayNum);
  pFVar4 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// FindIdByHash @ 144f0cb10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
::FindIdByHash(TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
               *this,FHashType param_1,FGraphicsMinimalPipelineStateInitializer *param_2)

{
  uint uVar1;
  ForElementType<Experimental::FHashType> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<Experimental::FHashType> FVar8;
  ForElementType<unsigned_int> FVar9;
  undefined4 in_register_00000014;
  uint uVar10;
  uint uVar11;
  FGraphicsMinimalPipelineStateInitializer *in_R9;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  
  uVar13 = this->MaximumDistance;
  uVar11 = (uint)param_2;
  uVar1 = this->SizePow2Minus1;
  uVar10 = this->SizePow2Minus1 & uVar11;
  do {
    uVar5 = 0;
    if ((int)uVar10 < (this->HashData).ArrayNum) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FHashElementId)iVar6;
    }
    FVar2 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar2 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar8 = FVar2;
    }
    if (uVar11 == *(uint *)((longlong)(int)uVar10 * 4 + (longlong)FVar8)) {
      uVar5 = 0;
      if ((int)uVar10 < (this->IndexData).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = FVar9;
      }
      uVar5 = *(uint *)((longlong)(int)uVar10 * 4 + (longlong)FVar12);
      uVar7 = 0;
      if ((int)uVar5 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      bVar4 = FGraphicsMinimalPipelineStateInitializer::operator==
                        (in_R9,(FGraphicsMinimalPipelineStateInitializer *)
                               ((this->KeyValueData).KeyVals.AllocatorInstance.Data +
                               (longlong)(int)uVar5 * 0xa8));
      if (bVar4) {
        uVar13 = 0;
        if ((int)uVar10 < (this->IndexData).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return (FHashElementId)iVar6;
        }
        FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(undefined4 *)((longlong)FVar9 + (longlong)(int)uVar10 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar10 = uVar10 + 1 & this->SizePow2Minus1;
    if (uVar10 == (uVar13 + 1 + uVar11 & uVar1)) {
      *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) = 0xffffffff;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// InsertIntoTable @ 144f1b920

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 144f1bc80

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 144f1bfe0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
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

// RemoveByElementId @ 144f22cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
::RemoveByElementId(TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
                    *this,FHashElementId param_1)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FHashType FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<Experimental::FHashType> FVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<unsigned_int> FVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined4 local_60 [2];
  ForElementType<Experimental::FHashType> local_58;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  ForElementType<unsigned_int> local_40;
  int local_38;
  int local_34;
  
  uVar22 = 0;
  if (param_1.Index < (this->KeyValueData).Hashes.ArrayNum) {
    uVar22 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar8 = (this->KeyValueData).Hashes.AllocatorInstance.Data;
  uVar22 = this->MaximumDistance;
  uVar21 = *(uint *)(pFVar8 + (longlong)param_1.Index * 4) & this->SizePow2Minus1;
  iVar6 = *(int *)(pFVar8 + (longlong)param_1.Index * 4);
  uVar12 = this->SizePow2Minus1;
  while( true ) {
    uVar19 = ~uVar21 >> 0x1f;
    uVar20 = 0;
    if ((int)uVar21 < (this->IndexData).ArrayNum) {
      uVar20 = uVar19;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
    lVar23 = (longlong)(int)uVar21;
    FVar17 = (ForElementType<unsigned_int>)&this->IndexData;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar14;
    }
    if (param_1.Index == *(int *)((longlong)FVar17 + lVar23 * 4)) break;
    uVar21 = uVar21 + 1 & this->SizePow2Minus1;
    if (uVar21 == (uVar22 + 1 + iVar6 & uVar12)) {
      return false;
    }
  }
  uVar22 = 0;
  if ((int)uVar21 < (this->IndexData).ArrayNum) {
    uVar22 = uVar19;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)&this->IndexData;
  }
  uVar22 = *(uint *)((longlong)FVar14 + lVar23 * 4);
  lVar18 = (longlong)(int)uVar22;
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
            (&(this->KeyValueData).FreeList,uVar22);
  uVar12 = 0;
  if ((int)uVar22 < (this->KeyValueData).Hashes.ArrayNum) {
    uVar12 = ~uVar22 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  *(undefined4 *)((this->KeyValueData).Hashes.AllocatorInstance.Data + lVar18 * 4) = 0x80000000;
  uVar12 = 0;
  if ((int)uVar22 < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar12 = ~uVar22 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar8 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  if (*(FShaderMapResource **)(pFVar8 + lVar18 * 0xa8 + 0x48) != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(*(FShaderMapResource **)(pFVar8 + lVar18 * 0xa8 + 0x48));
  }
  if (*(FShaderMapResource **)(pFVar8 + lVar18 * 0xa8 + 0x40) != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(*(FShaderMapResource **)(pFVar8 + lVar18 * 0xa8 + 0x40));
  }
  if (*(FShaderMapResource **)(pFVar8 + lVar18 * 0xa8 + 0x38) != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(*(FShaderMapResource **)(pFVar8 + lVar18 * 0xa8 + 0x38));
  }
  if (*(FShaderMapResource **)(pFVar8 + lVar18 * 0xa8 + 0x30) != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(*(FShaderMapResource **)(pFVar8 + lVar18 * 0xa8 + 0x30));
  }
  pTVar1 = &this->HashData;
  uVar22 = 0;
  if ((int)uVar21 < (this->HashData).ArrayNum) {
    uVar22 = uVar19;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar15 = (ForElementType<Experimental::FHashType>)pTVar1;
  }
  *(undefined4 *)((longlong)FVar15 + lVar23 * 4) = 0x80000000;
  if ((ulonglong)(this->SizePow2Minus1 * 3) <=
      (ulonglong)
      (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
       (longlong)(this->KeyValueData).FreeList.NumElements) * 0x14)) {
    return true;
  }
  FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
  pTVar2 = &this->IndexData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    local_48[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
  }
  (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  piVar3 = &(this->IndexData).ArrayNum;
  local_38 = *piVar3;
  piVar4 = &(this->IndexData).ArrayMax;
  local_34 = *piVar4;
  *piVar4 = 1;
  *piVar3 = 0;
  FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
    local_60[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
  }
  (this->HashData).AllocatorInstance.SecondaryData = (ForElementType<Experimental::FHashType>)0x0;
  piVar5 = &(this->HashData).ArrayMax;
  local_4c = *piVar5;
  iVar6 = (this->HashData).ArrayNum;
  (this->HashData).ArrayNum = 0;
  *piVar5 = 1;
  uVar12 = this->SizePow2Minus1;
  uVar21 = uVar12 >> 1;
  this->MaximumDistance = 0;
  uVar22 = uVar21 + 1;
  this->SizePow2Minus1 = uVar21;
  local_58 = FVar15;
  local_50 = iVar6;
  local_40 = FVar14;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if (*piVar4 < (int)uVar22) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,uVar22,&pTVar2->AllocatorInstance,*piVar3,piVar4);
  }
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
            (4,4,this->SizePow2Minus1 + 1,&pTVar2->AllocatorInstance,&(this->IndexData).ArrayNum,
             piVar4);
  uVar22 = this->SizePow2Minus1 + 1;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar3 = &(this->HashData).ArrayNum;
  if (*piVar5 < (int)uVar22) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,uVar22,&pTVar1->AllocatorInstance,*piVar3,piVar5);
  }
  uVar22 = this->SizePow2Minus1;
  iVar13 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                     (4,4,uVar22 + 1,&pTVar1->AllocatorInstance,piVar3,piVar5);
  FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar16 = (ForElementType<Experimental::FHashType>)pTVar1;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((void *)((longlong)FVar16 + (longlong)iVar13 * 4),uVar22 + 1);
  uVar22 = 0;
  do {
    uVar20 = ~uVar22 >> 0x1f;
    uVar21 = 0;
    if ((int)uVar22 < iVar6) {
      uVar21 = uVar20;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    lVar23 = (longlong)(int)uVar22;
    FVar16 = (ForElementType<Experimental::FHashType>)local_60;
    if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar16 = FVar15;
    }
    if (*(int *)((longlong)FVar16 + lVar23 * 4) != -0x80000000) {
      uVar21 = 0;
      if ((int)uVar22 < iVar6) {
        uVar21 = uVar20;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar16 = (ForElementType<Experimental::FHashType>)local_60;
      if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar16 = FVar15;
      }
      uVar21 = 0;
      if ((int)uVar22 < local_38) {
        uVar21 = uVar20;
      }
      FVar7.Hash = *(uint *)((longlong)FVar16 + lVar23 * 4);
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar17 = (ForElementType<unsigned_int>)local_48;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar14;
      }
      InsertIntoTable(this,*(uint *)((longlong)FVar17 + lVar23 * 4),FVar7);
    }
    uVar22 = uVar22 + 1;
    if (uVar12 < uVar22) {
      if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
        FMemory::Free((void *)FVar15);
      }
      if (FVar14 == (ForElementType<unsigned_int>)0x0) {
        return true;
      }
      FMemory::Free((void *)FVar14);
      return true;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FPrimitiveSceneInfo_const_*_const_&,FNaniteVisibility::FPrimitiveReferences> @ 14502ff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
::
FindOrUpdateIdByHashInternal<0,FPrimitiveSceneInfo_const_*_const_&,FNaniteVisibility::FPrimitiveReferences>
          (TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FPrimitiveSceneInfo **param_2,FPrimitiveReferences *param_3,
          bool *param_4)

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
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
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
      if (param_3->SceneInfo ==
          *(FPrimitiveSceneInfo **)
           ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x48)) {
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
          local_58[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar20 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = FVar5;
        local_60 = iVar10;
        local_50 = FVar6;
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
          FVar15 = (ForElementType<Experimental::FHashType>)local_70;
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
            FVar15 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar5;
            }
            FVar4.Hash = *(uint *)((longlong)(int)uVar18 * 4 + (longlong)FVar15);
            uVar20 = uVar9;
            if ((int)uVar18 < local_48) {
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
            FVar16 = (ForElementType<unsigned_int>)local_58;
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
               Allocate<FPrimitiveSceneInfo_const_*_const_&,FNaniteVisibility::FPrimitiveReferences>
                         (&this->KeyValueData,&param_3->SceneInfo,(FPrimitiveReferences *)param_4,
                          FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FNaniteRasterPipeline_const_&,FNaniteRasterEntry> @ 145030550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FindOrUpdateIdByHashInternal<0,FNaniteRasterPipeline_const_&,FNaniteRasterEntry>
          (TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FNaniteRasterPipeline *param_2,FNaniteRasterEntry *param_3,
          bool *param_4)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  FHashType FVar5;
  ForElementType<Experimental::FHashType> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FNaniteRasterPipeline *this_00;
  ForElementType<Experimental::FHashType> FVar15;
  ForElementType<unsigned_int> FVar16;
  ForElementType<unsigned_int> FVar17;
  undefined4 in_register_00000014;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  FHashType FVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_f8 [32];
  undefined4 local_78 [2];
  ForElementType<Experimental::FHashType> local_70;
  int local_68;
  int local_64;
  undefined4 local_60 [2];
  ForElementType<unsigned_int> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar1 = &this->HashData;
  FVar21.Hash = (uint)param_2;
  uVar19 = this->SizePow2Minus1 & FVar21.Hash;
  uVar14 = this->MaximumDistance;
  uVar22 = this->SizePow2Minus1;
  uVar20 = 0;
  do {
    uVar18 = ~uVar19 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar19 < (this->HashData).ArrayNum) {
      uVar11 = uVar18;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return (FHashElementId)iVar9;
    }
    FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<Experimental::FHashType>)pTVar1;
    if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar15 = FVar6;
    }
    lVar23 = (longlong)(int)uVar19 * 4;
    if (FVar21.Hash == *(uint *)(lVar23 + (longlong)FVar15)) {
      uVar10 = 0;
      uVar11 = uVar10;
      if ((int)uVar19 < (this->IndexData).ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return (FHashElementId)iVar9;
      }
      FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar17 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar17;
      }
      uVar11 = *(uint *)((longlong)FVar16 + lVar23);
      uVar12 = uVar10;
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
        iVar9 = (*pcVar7)();
        return (FHashElementId)iVar9;
      }
      this_00 = (FNaniteRasterPipeline *)
                ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x98)
      ;
      uVar11 = FNaniteRasterPipeline::GetPipelineHash((FNaniteRasterPipeline *)param_3);
      uVar12 = FNaniteRasterPipeline::GetPipelineHash(this_00);
      if ((uVar11 == uVar12) &&
         (*(FMaterialRenderProxy **)&param_3->CacheMap == this_00->RasterMaterial)) {
        *in_stack_00000030 = 1;
        if ((int)uVar19 < (this->IndexData).ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar9 = (*pcVar7)();
          return (FHashElementId)iVar9;
        }
        FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar17 == (ForElementType<unsigned_int>)0x0) {
          FVar17 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = *(uint *)((longlong)FVar17 + lVar23);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar19 = uVar19 + 1 & this->SizePow2Minus1;
    if (uVar19 == (uVar14 + 1 + FVar21.Hash & uVar22)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
        pTVar2 = &this->IndexData;
        if (FVar17 == (ForElementType<unsigned_int>)0x0) {
          local_60[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar3 = &(this->IndexData).ArrayNum;
        local_50 = *piVar3;
        piVar4 = &(this->IndexData).ArrayMax;
        local_4c = *piVar4;
        *piVar4 = 1;
        *piVar3 = 0;
        FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<Experimental::FHashType>)0x0) {
          local_78[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        iVar9 = (this->HashData).ArrayNum;
        local_64 = (this->HashData).ArrayMax;
        (this->HashData).ArrayMax = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar22 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_70 = FVar6;
        local_68 = iVar9;
        local_58 = FVar17;
        if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
        }
        if (*piVar4 < (int)uVar22) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar22,&pTVar2->AllocatorInstance,*piVar3,piVar4);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&pTVar2->AllocatorInstance,
                   &(this->IndexData).ArrayNum,&(this->IndexData).ArrayMax);
        uVar22 = this->SizePow2Minus1 + 1;
        if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
        }
        if ((this->HashData).ArrayMax < (int)uVar22) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar22,&pTVar1->AllocatorInstance,(this->HashData).ArrayNum,
                     &(this->HashData).ArrayMax);
        }
        uVar22 = this->SizePow2Minus1;
        iVar13 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar22 + 1,&pTVar1->AllocatorInstance,&(this->HashData).ArrayNum,
                            &(this->HashData).ArrayMax);
        FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar15 = (ForElementType<Experimental::FHashType>)pTVar1;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar15 + (longlong)iVar13 * 4),uVar22 + 1);
        do {
          uVar19 = ~uVar20 >> 0x1f;
          uVar22 = 0;
          if ((int)uVar20 < iVar9) {
            uVar22 = uVar19;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar9 = (*pcVar7)();
            return (FHashElementId)iVar9;
          }
          lVar23 = (longlong)(int)uVar20;
          FVar15 = (ForElementType<Experimental::FHashType>)local_78;
          if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar15 = FVar6;
          }
          if (*(int *)((longlong)FVar15 + lVar23 * 4) != -0x80000000) {
            uVar22 = 0;
            if ((int)uVar20 < iVar9) {
              uVar22 = uVar19;
            }
            if ((uVar22 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              iVar9 = (*pcVar7)();
              return (FHashElementId)iVar9;
            }
            FVar15 = (ForElementType<Experimental::FHashType>)local_78;
            if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar6;
            }
            uVar22 = 0;
            if ((int)uVar20 < local_50) {
              uVar22 = uVar19;
            }
            FVar5.Hash = *(uint *)((longlong)FVar15 + lVar23 * 4);
            if ((uVar22 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              iVar9 = (*pcVar7)();
              return (FHashElementId)iVar9;
            }
            FVar16 = (ForElementType<unsigned_int>)local_60;
            if (FVar17 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar17;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar16 + lVar23 * 4),FVar5);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 <= uVar14);
        if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar6);
        }
        if (FVar17 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar17);
        }
      }
      uVar14 = FData::Allocate<FNaniteRasterPipeline_const_&,FNaniteRasterEntry>
                         (&this->KeyValueData,(FNaniteRasterPipeline *)param_3,
                          (FNaniteRasterEntry *)param_4,FVar21);
      InsertIntoTable(this,uVar14,FVar21);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FNaniteShadingPipeline_const_&,FNaniteShadingEntry> @ 145030b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FindOrUpdateIdByHashInternal<0,FNaniteShadingPipeline_const_&,FNaniteShadingEntry>
          (TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FNaniteShadingPipeline *param_2,FNaniteShadingEntry *param_3,
          bool *param_4)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  FHashType FVar5;
  ForElementType<Experimental::FHashType> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ForElementType<Experimental::FHashType> FVar15;
  ForElementType<unsigned_int> FVar16;
  ForElementType<unsigned_int> FVar17;
  undefined4 in_register_00000014;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  FHashType FVar21;
  uint uVar22;
  FNaniteShadingPipeline *this_00;
  longlong lVar23;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_e8 [32];
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar1 = &this->HashData;
  FVar21.Hash = (uint)param_2;
  uVar19 = this->SizePow2Minus1 & FVar21.Hash;
  uVar14 = this->MaximumDistance;
  uVar22 = this->SizePow2Minus1;
  uVar20 = 0;
  do {
    uVar18 = ~uVar19 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar19 < (this->HashData).ArrayNum) {
      uVar11 = uVar18;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return (FHashElementId)iVar9;
    }
    FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar15 = FVar6;
    }
    lVar23 = (longlong)(int)uVar19 * 4;
    if (FVar21.Hash == *(uint *)(lVar23 + (longlong)FVar15)) {
      uVar10 = 0;
      uVar11 = uVar10;
      if ((int)uVar19 < (this->IndexData).ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return (FHashElementId)iVar9;
      }
      FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar17 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar17;
      }
      uVar11 = *(uint *)((longlong)FVar16 + lVar23);
      uVar12 = uVar10;
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
        iVar9 = (*pcVar7)();
        return (FHashElementId)iVar9;
      }
      this_00 = (FNaniteShadingPipeline *)
                ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x70)
      ;
      uVar11 = FNaniteShadingPipeline::GetPipelineHash((FNaniteShadingPipeline *)param_3);
      uVar12 = FNaniteShadingPipeline::GetPipelineHash(this_00);
      if ((uVar11 == uVar12) &&
         ((FMaterialRenderProxy *)
          param_3[1].ShadingPipeline.SharedReferenceCount.ReferenceController ==
          this_00->MaterialProxy)) {
        *in_stack_00000030 = 1;
        if ((int)uVar19 < (this->IndexData).ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar9 = (*pcVar7)();
          return (FHashElementId)iVar9;
        }
        FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar17 == (ForElementType<unsigned_int>)0x0) {
          FVar17 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = *(uint *)((longlong)FVar17 + lVar23);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar19 = uVar19 + 1 & this->SizePow2Minus1;
    if (uVar19 == (uVar14 + 1 + FVar21.Hash & uVar22)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
        pTVar2 = &this->IndexData;
        if (FVar17 == (ForElementType<unsigned_int>)0x0) {
          local_58[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar3 = &(this->IndexData).ArrayNum;
        local_48 = *piVar3;
        piVar4 = &(this->IndexData).ArrayMax;
        local_44 = *piVar4;
        *piVar4 = 1;
        *piVar3 = 0;
        FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        iVar9 = (this->HashData).ArrayNum;
        local_5c = (this->HashData).ArrayMax;
        (this->HashData).ArrayMax = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar22 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = FVar6;
        local_60 = iVar9;
        local_50 = FVar17;
        if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
        }
        if (*piVar4 < (int)uVar22) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar22,&pTVar2->AllocatorInstance,*piVar3,piVar4);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&pTVar2->AllocatorInstance,
                   &(this->IndexData).ArrayNum,&(this->IndexData).ArrayMax);
        uVar22 = this->SizePow2Minus1 + 1;
        if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
        }
        if ((this->HashData).ArrayMax < (int)uVar22) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar22,&pTVar1->AllocatorInstance,(this->HashData).ArrayNum,
                     &(this->HashData).ArrayMax);
        }
        uVar22 = this->SizePow2Minus1;
        iVar13 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar22 + 1,&pTVar1->AllocatorInstance,&(this->HashData).ArrayNum,
                            &(this->HashData).ArrayMax);
        FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar15 = (ForElementType<Experimental::FHashType>)pTVar1;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar15 + (longlong)iVar13 * 4),uVar22 + 1);
        do {
          uVar19 = ~uVar20 >> 0x1f;
          uVar22 = 0;
          if ((int)uVar20 < iVar9) {
            uVar22 = uVar19;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar9 = (*pcVar7)();
            return (FHashElementId)iVar9;
          }
          lVar23 = (longlong)(int)uVar20;
          FVar15 = (ForElementType<Experimental::FHashType>)local_70;
          if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar15 = FVar6;
          }
          if (*(int *)((longlong)FVar15 + lVar23 * 4) != -0x80000000) {
            uVar22 = 0;
            if ((int)uVar20 < iVar9) {
              uVar22 = uVar19;
            }
            if ((uVar22 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              iVar9 = (*pcVar7)();
              return (FHashElementId)iVar9;
            }
            FVar15 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar6;
            }
            uVar22 = 0;
            if ((int)uVar20 < local_48) {
              uVar22 = uVar19;
            }
            FVar5.Hash = *(uint *)((longlong)FVar15 + lVar23 * 4);
            if ((uVar22 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              iVar9 = (*pcVar7)();
              return (FHashElementId)iVar9;
            }
            FVar16 = (ForElementType<unsigned_int>)local_58;
            if (FVar17 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar17;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar16 + lVar23 * 4),FVar5);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 <= uVar14);
        if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar6);
        }
        if (FVar17 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar17);
        }
      }
      uVar14 = FData::Allocate<FNaniteShadingPipeline_const_&,FNaniteShadingEntry>
                         (&this->KeyValueData,(FNaniteShadingPipeline *)param_3,
                          (FNaniteShadingEntry *)param_4,FVar21);
      InsertIntoTable(this,uVar14,FVar21);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType> @ 145031140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
::
FindOrUpdateIdByHashInternal<0,FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType>
          (TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FLumenShadingBinEntry *param_2,FUnitType *param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  int *piVar4;
  FHashType FVar5;
  ForElementType<Experimental::FHashType> FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<unsigned_int> FVar17;
  ForElementType<unsigned_int> FVar18;
  undefined4 in_register_00000014;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FHashType FVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_d8 [32];
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FVar22.Hash = (uint)param_2;
  uVar19 = this->SizePow2Minus1 & FVar22.Hash;
  uVar15 = this->MaximumDistance;
  uVar23 = this->SizePow2Minus1;
  uVar21 = 0;
  do {
    uVar20 = ~uVar19 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar19 < (this->HashData).ArrayNum) {
      uVar10 = uVar20;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      iVar11 = (*pcVar8)();
      return (FHashElementId)iVar11;
    }
    FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar16 = FVar6;
    }
    lVar24 = (longlong)(int)uVar19 * 4;
    if (FVar22.Hash == *(uint *)(lVar24 + (longlong)FVar16)) {
      uVar12 = 0;
      uVar10 = uVar12;
      if ((int)uVar19 < (this->IndexData).ArrayNum) {
        uVar10 = uVar20;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        iVar11 = (*pcVar8)();
        return (FHashElementId)iVar11;
      }
      FVar18 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar18 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar18;
      }
      uVar10 = *(uint *)((longlong)FVar17 + lVar24);
      uVar13 = uVar12;
      if ((int)uVar10 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        iVar11 = (*pcVar8)();
        return (FHashElementId)iVar11;
      }
      pFVar7 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
      if ((*(int *)(pFVar7 + (longlong)(int)uVar10 * 0xc + 4) == *(int *)(param_3 + 4)) &&
         (*(short *)(pFVar7 + (longlong)(int)uVar10 * 0xc + 8) == *(short *)(param_3 + 8))) {
        *in_stack_00000030 = 1;
        if ((int)uVar19 < (this->IndexData).ArrayNum) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          iVar11 = (*pcVar8)();
          return (FHashElementId)iVar11;
        }
        FVar18 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar18 == (ForElementType<unsigned_int>)0x0) {
          FVar18 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = *(uint *)((longlong)FVar18 + lVar24);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar19 = uVar19 + 1 & this->SizePow2Minus1;
    if (uVar19 == (uVar15 + 1 + FVar22.Hash & uVar23)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        FVar18 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar18 == (ForElementType<unsigned_int>)0x0) {
          local_58[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        pTVar3 = &this->HashData;
        local_5c = (this->HashData).ArrayMax;
        piVar4 = &(this->HashData).ArrayMax;
        iVar11 = (this->HashData).ArrayNum;
        *piVar4 = 1;
        (this->HashData).ArrayNum = 0;
        uVar15 = this->SizePow2Minus1;
        iVar14 = uVar15 * 2;
        uVar23 = iVar14 + 2;
        this->MaximumDistance = 0;
        this->SizePow2Minus1 = iVar14 + 1;
        local_68 = FVar6;
        local_60 = iVar11;
        local_50 = FVar18;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar2 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar23,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
                   &(this->IndexData).ArrayNum,&(this->IndexData).ArrayMax);
        uVar23 = this->SizePow2Minus1 + 1;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar4 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar23,&pTVar3->AllocatorInstance,(this->HashData).ArrayNum,piVar4);
        }
        uVar23 = this->SizePow2Minus1;
        iVar14 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar23 + 1,&pTVar3->AllocatorInstance,&(this->HashData).ArrayNum,
                            piVar4);
        FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar16 = (ForElementType<Experimental::FHashType>)pTVar3;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar16 + (longlong)iVar14 * 4),uVar23 + 1);
        do {
          uVar19 = ~uVar21 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar21 < iVar11) {
            uVar23 = uVar19;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return (FHashElementId)iVar11;
          }
          lVar24 = (longlong)(int)uVar21;
          FVar16 = (ForElementType<Experimental::FHashType>)local_70;
          if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar16 = FVar6;
          }
          if (*(int *)((longlong)FVar16 + lVar24 * 4) != -0x80000000) {
            uVar23 = 0;
            if ((int)uVar21 < iVar11) {
              uVar23 = uVar19;
            }
            if ((uVar23 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              iVar11 = (*pcVar8)();
              return (FHashElementId)iVar11;
            }
            FVar16 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar16 = FVar6;
            }
            uVar23 = 0;
            if ((int)uVar21 < local_48) {
              uVar23 = uVar19;
            }
            FVar5.Hash = *(uint *)((longlong)FVar16 + lVar24 * 4);
            if ((uVar23 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              iVar11 = (*pcVar8)();
              return (FHashElementId)iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)local_58;
            if (FVar18 != (ForElementType<unsigned_int>)0x0) {
              FVar17 = FVar18;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar17 + lVar24 * 4),FVar5);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 <= uVar15);
        if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar6);
        }
        if (FVar18 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar18);
        }
      }
      uVar15 = FData::
               Allocate<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType>
                         (&this->KeyValueData,(FLumenShadingBinEntry *)param_3,(FUnitType *)param_4,
                          FVar22);
      InsertIntoTable(this,uVar15,FVar22);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar15;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_> @ 145035ee0

TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
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

// TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_> @ 145036070

TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
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

// TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_> @ 145036200

TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
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

// TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_> @ 145036390

TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
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

// ~TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_> @ 145037b90

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
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
  DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry>,int>
            ((TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry> *)
             (this->KeyValueData).KeyVals.AllocatorInstance.Data,
             (this->KeyValueData).KeyVals.ArrayNum);
  pFVar4 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// ~TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_> @ 145037c10

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
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
  DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry>,int>
            ((TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *)
             (this->KeyValueData).KeyVals.AllocatorInstance.Data,
             (this->KeyValueData).KeyVals.ArrayNum);
  pFVar4 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// FindIdByHash @ 145060b90

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FindIdByHash(TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
               *this,FHashType param_1,FNaniteRasterPipeline *param_2)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<Experimental::FHashType> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<Experimental::FHashType> FVar10;
  ForElementType<unsigned_int> FVar11;
  undefined4 in_register_00000014;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FNaniteRasterPipeline *in_R9;
  uint uVar15;
  FNaniteRasterPipeline *this_00;
  
  uVar15 = this->MaximumDistance;
  uVar14 = (uint)param_2;
  uVar2 = this->SizePow2Minus1;
  uVar13 = this->SizePow2Minus1 & uVar14;
  do {
    uVar12 = ~uVar13 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar13 < (this->HashData).ArrayNum) {
      uVar7 = uVar12;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return (FHashElementId)iVar6;
    }
    FVar3 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar3 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar10 = FVar3;
    }
    lVar1 = (longlong)(int)uVar13 * 4;
    if (uVar14 == *(uint *)(lVar1 + (longlong)FVar10)) {
      uVar7 = 0;
      if ((int)uVar13 < (this->IndexData).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return (FHashElementId)iVar6;
      }
      FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = FVar9;
      }
      uVar7 = *(uint *)(lVar1 + (longlong)FVar11);
      uVar8 = 0;
      if ((int)uVar7 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return (FHashElementId)iVar6;
      }
      this_00 = (FNaniteRasterPipeline *)
                ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x98);
      uVar7 = FNaniteRasterPipeline::GetPipelineHash(this_00);
      uVar8 = FNaniteRasterPipeline::GetPipelineHash(in_R9);
      if ((uVar8 == uVar7) && (in_R9->RasterMaterial == this_00->RasterMaterial)) {
        uVar15 = 0;
        if ((int)uVar13 < (this->IndexData).ArrayNum) {
          uVar15 = uVar12;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return (FHashElementId)iVar6;
        }
        FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(undefined4 *)((longlong)FVar9 + lVar1);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar13 = uVar13 + 1 & this->SizePow2Minus1;
    if (uVar13 == (uVar15 + 1 + uVar14 & uVar2)) {
      *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) = 0xffffffff;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// InsertIntoTable @ 14506ad70

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 14506b0d0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 14506b430

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 14506b790

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
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

// RemoveByElementId @ 145073730

bool __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::RemoveByElementId(TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                    *this,FHashElementId param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FHashType FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<Experimental::FHashType> FVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<unsigned_int> FVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined4 local_60 [2];
  ForElementType<Experimental::FHashType> local_58;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  ForElementType<unsigned_int> local_40;
  int local_38;
  int local_34;
  
  uVar22 = 0;
  if (param_1.Index < (this->KeyValueData).Hashes.ArrayNum) {
    uVar22 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar8 = (this->KeyValueData).Hashes.AllocatorInstance.Data;
  pTVar1 = &this->IndexData;
  uVar22 = this->MaximumDistance;
  uVar21 = *(uint *)(pFVar8 + (longlong)param_1.Index * 4) & this->SizePow2Minus1;
  iVar6 = *(int *)(pFVar8 + (longlong)param_1.Index * 4);
  uVar12 = this->SizePow2Minus1;
  while( true ) {
    uVar19 = ~uVar21 >> 0x1f;
    uVar20 = 0;
    if ((int)uVar21 < (this->IndexData).ArrayNum) {
      uVar20 = uVar19;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
    lVar18 = (longlong)(int)uVar21;
    FVar17 = (ForElementType<unsigned_int>)pTVar1;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar14;
    }
    if (param_1.Index == *(int *)((longlong)FVar17 + lVar18 * 4)) break;
    uVar21 = uVar21 + 1 & this->SizePow2Minus1;
    if (uVar21 == (uVar22 + 1 + iVar6 & uVar12)) {
      return false;
    }
  }
  uVar22 = 0;
  if ((int)uVar21 < (this->IndexData).ArrayNum) {
    uVar22 = uVar19;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  uVar22 = *(uint *)((longlong)FVar14 + lVar18 * 4);
  lVar23 = (longlong)(int)uVar22;
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
            (&(this->KeyValueData).FreeList,uVar22);
  uVar12 = 0;
  if ((int)uVar22 < (this->KeyValueData).Hashes.ArrayNum) {
    uVar12 = ~uVar22 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  *(undefined4 *)((this->KeyValueData).Hashes.AllocatorInstance.Data + lVar23 * 4) = 0x80000000;
  uVar12 = 0;
  if ((int)uVar22 < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar12 = ~uVar22 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar8 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  *(undefined4 *)(pFVar8 + lVar23 * 0x98 + 0x68) = 0;
  if (*(void **)(pFVar8 + lVar23 * 0x98 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar8 + lVar23 * 0x98 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(pFVar8 + lVar23 * 0x98 + 0x20));
  pTVar2 = &this->HashData;
  uVar22 = 0;
  if ((int)uVar21 < (this->HashData).ArrayNum) {
    uVar22 = uVar19;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar15 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar15 + lVar18 * 4) = 0x80000000;
  if ((ulonglong)
      (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
       (longlong)(this->KeyValueData).FreeList.NumElements) * 0x14) <
      (ulonglong)(this->SizePow2Minus1 * 3)) {
    FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      local_48[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
    }
    (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    piVar3 = &(this->IndexData).ArrayNum;
    local_38 = *piVar3;
    piVar4 = &(this->IndexData).ArrayMax;
    local_34 = *piVar4;
    *piVar4 = 1;
    *piVar3 = 0;
    FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
      local_60[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
    }
    (this->HashData).AllocatorInstance.SecondaryData = (ForElementType<Experimental::FHashType>)0x0;
    piVar5 = &(this->HashData).ArrayMax;
    local_4c = *piVar5;
    iVar6 = (this->HashData).ArrayNum;
    (this->HashData).ArrayNum = 0;
    *piVar5 = 1;
    uVar12 = this->SizePow2Minus1;
    uVar21 = uVar12 >> 1;
    this->MaximumDistance = 0;
    uVar22 = uVar21 + 1;
    this->SizePow2Minus1 = uVar21;
    local_58 = FVar15;
    local_50 = iVar6;
    local_40 = FVar14;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if (*piVar4 < (int)uVar22) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,uVar22,&(this->IndexData).AllocatorInstance,*piVar3,piVar4);
    }
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
               &(this->IndexData).ArrayNum,piVar4);
    uVar22 = this->SizePow2Minus1 + 1;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    piVar3 = &(this->HashData).ArrayNum;
    if (*piVar5 < (int)uVar22) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                (4,4,uVar22,&pTVar2->AllocatorInstance,*piVar3,piVar5);
    }
    uVar22 = this->SizePow2Minus1;
    iVar13 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                       (4,4,uVar22 + 1,&pTVar2->AllocatorInstance,piVar3,piVar5);
    FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
      FVar16 = (ForElementType<Experimental::FHashType>)pTVar2;
    }
    DefaultConstructItems<Experimental::FHashType,int>
              ((void *)((longlong)FVar16 + (longlong)iVar13 * 4),uVar22 + 1);
    uVar22 = 0;
    while( true ) {
      uVar20 = ~uVar22 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar22 < iVar6) {
        uVar21 = uVar20;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) break;
      lVar18 = (longlong)(int)uVar22;
      FVar16 = (ForElementType<Experimental::FHashType>)local_60;
      if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar16 = FVar15;
      }
      if (*(int *)((longlong)FVar16 + lVar18 * 4) != -0x80000000) {
        uVar21 = 0;
        if ((int)uVar22 < iVar6) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar16 = (ForElementType<Experimental::FHashType>)local_60;
        if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
          FVar16 = FVar15;
        }
        uVar21 = 0;
        if ((int)uVar22 < local_38) {
          uVar21 = uVar20;
        }
        FVar7.Hash = *(uint *)((longlong)FVar16 + lVar18 * 4);
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar17 = (ForElementType<unsigned_int>)local_48;
        if (FVar14 != (ForElementType<unsigned_int>)0x0) {
          FVar17 = FVar14;
        }
        InsertIntoTable(this,*(uint *)((longlong)FVar17 + lVar18 * 4),FVar7);
      }
      uVar22 = uVar22 + 1;
      if (uVar12 < uVar22) {
        if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar15);
        }
        if (FVar14 == (ForElementType<unsigned_int>)0x0) {
          return true;
        }
        FMemory::Free((void *)FVar14);
        return true;
      }
    }
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  return true;
}

// RemoveByElementId @ 145073cd0

bool __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::RemoveByElementId(TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                    *this,FHashElementId param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FHashType FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<Experimental::FHashType> FVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<unsigned_int> FVar17;
  FNaniteShadingPipeline *this_00;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 local_60 [2];
  ForElementType<Experimental::FHashType> local_58;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  ForElementType<unsigned_int> local_40;
  int local_38;
  int local_34;
  
  uVar22 = 0;
  if (param_1.Index < (this->KeyValueData).Hashes.ArrayNum) {
    uVar22 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar8 = (this->KeyValueData).Hashes.AllocatorInstance.Data;
  pTVar1 = &this->IndexData;
  uVar22 = this->MaximumDistance;
  uVar21 = *(uint *)(pFVar8 + (longlong)param_1.Index * 4) & this->SizePow2Minus1;
  iVar6 = *(int *)(pFVar8 + (longlong)param_1.Index * 4);
  uVar12 = this->SizePow2Minus1;
  while( true ) {
    uVar19 = ~uVar21 >> 0x1f;
    uVar20 = 0;
    if ((int)uVar21 < (this->IndexData).ArrayNum) {
      uVar20 = uVar19;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
    lVar18 = (longlong)(int)uVar21;
    FVar17 = (ForElementType<unsigned_int>)pTVar1;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar14;
    }
    if (param_1.Index == *(int *)((longlong)FVar17 + lVar18 * 4)) break;
    uVar21 = uVar21 + 1 & this->SizePow2Minus1;
    if (uVar21 == (uVar22 + 1 + iVar6 & uVar12)) {
      return false;
    }
  }
  uVar22 = 0;
  if ((int)uVar21 < (this->IndexData).ArrayNum) {
    uVar22 = uVar19;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  uVar22 = *(uint *)((longlong)FVar14 + lVar18 * 4);
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
            (&(this->KeyValueData).FreeList,uVar22);
  uVar12 = 0;
  if ((int)uVar22 < (this->KeyValueData).Hashes.ArrayNum) {
    uVar12 = ~uVar22 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  *(undefined4 *)((this->KeyValueData).Hashes.AllocatorInstance.Data + (longlong)(int)uVar22 * 4) =
       0x80000000;
  uVar12 = 0;
  if ((int)uVar22 < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar12 = ~uVar22 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  this_00 = (FNaniteShadingPipeline *)
            ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this_00[1].LumenCardData);
  FNaniteShadingPipeline::~FNaniteShadingPipeline(this_00);
  pTVar2 = &this->HashData;
  uVar22 = 0;
  if ((int)uVar21 < (this->HashData).ArrayNum) {
    uVar22 = uVar19;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar15 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar15 + lVar18 * 4) = 0x80000000;
  if ((ulonglong)
      (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
       (longlong)(this->KeyValueData).FreeList.NumElements) * 0x14) <
      (ulonglong)(this->SizePow2Minus1 * 3)) {
    FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      local_48[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
    }
    (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    piVar3 = &(this->IndexData).ArrayNum;
    local_38 = *piVar3;
    piVar4 = &(this->IndexData).ArrayMax;
    local_34 = *piVar4;
    *piVar4 = 1;
    *piVar3 = 0;
    FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
      local_60[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
    }
    (this->HashData).AllocatorInstance.SecondaryData = (ForElementType<Experimental::FHashType>)0x0;
    piVar5 = &(this->HashData).ArrayMax;
    local_4c = *piVar5;
    iVar6 = (this->HashData).ArrayNum;
    (this->HashData).ArrayNum = 0;
    *piVar5 = 1;
    uVar12 = this->SizePow2Minus1;
    uVar21 = uVar12 >> 1;
    this->MaximumDistance = 0;
    uVar22 = uVar21 + 1;
    this->SizePow2Minus1 = uVar21;
    local_58 = FVar15;
    local_50 = iVar6;
    local_40 = FVar14;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if (*piVar4 < (int)uVar22) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,uVar22,&(this->IndexData).AllocatorInstance,*piVar3,piVar4);
    }
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
               &(this->IndexData).ArrayNum,piVar4);
    uVar22 = this->SizePow2Minus1 + 1;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    piVar3 = &(this->HashData).ArrayNum;
    if (*piVar5 < (int)uVar22) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                (4,4,uVar22,&pTVar2->AllocatorInstance,*piVar3,piVar5);
    }
    uVar22 = this->SizePow2Minus1;
    iVar13 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                       (4,4,uVar22 + 1,&pTVar2->AllocatorInstance,piVar3,piVar5);
    FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
      FVar16 = (ForElementType<Experimental::FHashType>)pTVar2;
    }
    DefaultConstructItems<Experimental::FHashType,int>
              ((void *)((longlong)FVar16 + (longlong)iVar13 * 4),uVar22 + 1);
    uVar22 = 0;
    while( true ) {
      uVar20 = ~uVar22 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar22 < iVar6) {
        uVar21 = uVar20;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) break;
      lVar18 = (longlong)(int)uVar22;
      FVar16 = (ForElementType<Experimental::FHashType>)local_60;
      if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar16 = FVar15;
      }
      if (*(int *)((longlong)FVar16 + lVar18 * 4) != -0x80000000) {
        uVar21 = 0;
        if ((int)uVar22 < iVar6) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar16 = (ForElementType<Experimental::FHashType>)local_60;
        if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
          FVar16 = FVar15;
        }
        uVar21 = 0;
        if ((int)uVar22 < local_38) {
          uVar21 = uVar20;
        }
        FVar7.Hash = *(uint *)((longlong)FVar16 + lVar18 * 4);
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar17 = (ForElementType<unsigned_int>)local_48;
        if (FVar14 != (ForElementType<unsigned_int>)0x0) {
          FVar17 = FVar14;
        }
        InsertIntoTable(this,*(uint *)((longlong)FVar17 + lVar18 * 4),FVar7);
      }
      uVar22 = uVar22 + 1;
      if (uVar12 < uVar22) {
        if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar15);
        }
        if (FVar14 == (ForElementType<unsigned_int>)0x0) {
          return true;
        }
        FMemory::Free((void *)FVar14);
        return true;
      }
    }
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  return true;
}

// RemoveByHash @ 145074250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
::RemoveByHash(TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
               *this,FHashType param_1,FPrimitiveSceneInfo **param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FHashType FVar4;
  ForElementType<Experimental::FHashType> FVar5;
  ForElementType<unsigned_int> FVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ForElementType<Experimental::FHashType> FVar17;
  ForElementType<unsigned_int> FVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_a8 [32];
  undefined4 local_68 [2];
  ForElementType<Experimental::FHashType> local_60;
  int local_58;
  int local_54;
  undefined4 local_50 [2];
  ForElementType<unsigned_int> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar15 = this->MaximumDistance;
  uVar20 = this->SizePow2Minus1 & param_1.Hash;
  uVar14 = this->SizePow2Minus1;
  do {
    uVar12 = 0;
    if ((int)uVar20 < (this->HashData).ArrayNum) {
      uVar12 = ~uVar20 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar17 = FVar5;
    }
    if (param_1.Hash == *(uint *)((longlong)FVar17 + (longlong)(int)uVar20 * 4)) {
      uVar12 = 0;
      if ((int)uVar20 < (this->IndexData).ArrayNum) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar6 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar6;
      }
      uVar12 = *(uint *)((longlong)FVar18 + (longlong)(int)uVar20 * 4);
      uVar13 = 0;
      if ((int)uVar12 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      if (*param_2 ==
          *(FPrimitiveSceneInfo **)
           ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x48)) {
        uVar15 = 0;
        if ((int)uVar20 < (this->IndexData).ArrayNum) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar6 = (this->IndexData).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&this->IndexData;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar6;
        }
        uVar15 = *(uint *)((longlong)FVar18 + (longlong)(int)uVar20 * 4);
        lVar19 = (longlong)(int)uVar15;
        TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                  (&(this->KeyValueData).FreeList,uVar15);
        uVar14 = 0;
        if ((int)uVar15 < (this->KeyValueData).Hashes.ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        *(undefined4 *)((this->KeyValueData).Hashes.AllocatorInstance.Data + lVar19 * 4) =
             0x80000000;
        uVar14 = 0;
        if ((int)uVar15 < (this->KeyValueData).KeyVals.ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        pFVar7 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
        pvVar8 = *(void **)(pFVar7 + lVar19 * 0x48 + 0x30);
        if (pvVar8 != (void *)0x0) {
          FMemory::Free(pvVar8);
        }
        pvVar8 = *(void **)(pFVar7 + lVar19 * 0x48 + 0x18);
        if (pvVar8 != (void *)0x0) {
          FMemory::Free(pvVar8);
        }
        uVar15 = 0;
        if ((int)uVar20 < (this->HashData).ArrayNum) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<Experimental::FHashType>)&this->HashData;
        if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
          FVar17 = FVar5;
        }
        *(undefined4 *)((longlong)FVar17 + (longlong)(int)uVar20 * 4) = 0x80000000;
        if ((ulonglong)(this->SizePow2Minus1 * 3) <=
            (ulonglong)
            (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
             (longlong)(this->KeyValueData).FreeList.NumElements) * 0x14)) {
          return true;
        }
        FVar6 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<unsigned_int>)0x0) {
          local_50[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayMax;
        local_40 = (this->IndexData).ArrayNum;
        local_3c = *piVar1;
        *piVar1 = 1;
        (this->IndexData).ArrayNum = 0;
        FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<Experimental::FHashType>)0x0) {
          local_68[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar2 = &(this->HashData).ArrayMax;
        local_54 = *piVar2;
        iVar3 = (this->HashData).ArrayNum;
        *piVar2 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        uVar15 = uVar14 >> 1;
        this->SizePow2Minus1 = uVar15;
        uVar15 = uVar15 + 1;
        this->MaximumDistance = 0;
        local_60 = FVar5;
        local_58 = iVar3;
        local_48 = FVar6;
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
        }
        if (*piVar1 < (int)uVar15) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar15,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,
                     piVar1);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
                   &(this->IndexData).ArrayNum,piVar1);
        uVar15 = this->SizePow2Minus1 + 1;
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
        }
        if (*piVar2 < (int)uVar15) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar15,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar2
                    );
        }
        uVar15 = this->SizePow2Minus1;
        iVar16 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar15 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,piVar2);
        FVar17 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar17 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar17 = (ForElementType<Experimental::FHashType>)&this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar17 + (longlong)iVar16 * 4),uVar15 + 1);
        uVar15 = 0;
        do {
          uVar20 = 0;
          if ((int)uVar15 < iVar3) {
            uVar20 = ~uVar15 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          FVar17 = (ForElementType<Experimental::FHashType>)local_68;
          if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar17 = FVar5;
          }
          if (*(int *)((longlong)(int)uVar15 * 4 + (longlong)FVar17) != -0x80000000) {
            uVar20 = 0;
            if ((int)uVar15 < iVar3) {
              uVar20 = ~uVar15 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            FVar17 = (ForElementType<Experimental::FHashType>)local_68;
            if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar17 = FVar5;
            }
            FVar4.Hash = *(uint *)((longlong)(int)uVar15 * 4 + (longlong)FVar17);
            uVar20 = 0;
            if ((int)uVar15 < local_40) {
              uVar20 = ~uVar15 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            FVar18 = (ForElementType<unsigned_int>)local_50;
            if (FVar6 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar6;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar18 + (longlong)(int)uVar15 * 4),FVar4);
          }
          uVar15 = uVar15 + 1;
          if (uVar14 < uVar15) {
            if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
              FMemory::Free((void *)FVar5);
            }
            if (FVar6 == (ForElementType<unsigned_int>)0x0) {
              return true;
            }
            FMemory::Free((void *)FVar6);
            return true;
          }
        } while( true );
      }
    }
    uVar20 = uVar20 + 1 & this->SizePow2Minus1;
    if (uVar20 == (param_1.Hash + 1 + uVar15 & uVar14)) {
      return false;
    }
  } while( true );
}

// Reserve @ 1450758e0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::Reserve(TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
          *this,ulong64 param_1)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  FHashType FVar6;
  ForElementType<unsigned_int> FVar7;
  ForElementType<Experimental::FHashType> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ForElementType<Experimental::FHashType> FVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  
  iVar4 = (this->KeyValueData).KeyVals.ArrayNum;
  if ((ulonglong)((longlong)iVar4 - (longlong)(this->KeyValueData).FreeList.NumElements) < param_1)
  {
    iVar11 = (int)param_1;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1 & 0xffffffff);
    }
    if ((this->KeyValueData).KeyVals.ArrayMax < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x98,8,iVar11,(ForAnyElementType *)this,iVar4,
                 &(this->KeyValueData).KeyVals.ArrayMax);
    }
    uVar12 = this->SizePow2Minus1;
    uVar16 = uVar12;
    if ((ulonglong)(uVar12 * 3) <= param_1 * 5) {
      do {
        iVar4 = uVar16 * 2;
        uVar16 = iVar4 + 1;
      } while ((ulonglong)(uVar16 * 3) <= param_1 * 5);
      if (uVar12 < uVar16) {
        FVar7 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<unsigned_int>)0x0) {
          local_58[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayMax;
        local_48 = (this->IndexData).ArrayNum;
        pTVar2 = &this->HashData;
        local_44 = *piVar1;
        *piVar1 = 1;
        (this->IndexData).ArrayNum = 0;
        FVar8 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        uVar12 = iVar4 + 2;
        iVar4 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar5 = this->SizePow2Minus1;
        this->SizePow2Minus1 = uVar16;
        this->MaximumDistance = 0;
        local_68 = FVar8;
        local_60 = iVar4;
        local_50 = FVar7;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if ((this->IndexData).ArrayMax < (int)uVar12) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar12,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,
                     piVar1);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
                   &(this->IndexData).ArrayNum,piVar1);
        uVar16 = this->SizePow2Minus1 + 1;
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        piVar1 = &(this->HashData).ArrayNum;
        if (*piVar3 < (int)uVar16) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar16,&pTVar2->AllocatorInstance,*piVar1,piVar3);
        }
        uVar16 = this->SizePow2Minus1;
        iVar11 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar16 + 1,&pTVar2->AllocatorInstance,piVar1,piVar3);
        FVar13 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar13 = (ForElementType<Experimental::FHashType>)pTVar2;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar13 + (longlong)iVar11 * 4),uVar16 + 1);
        uVar16 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar16 < iVar4) {
            uVar12 = uVar15;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar17 = (longlong)(int)uVar16;
          FVar13 = (ForElementType<Experimental::FHashType>)local_70;
          if (FVar8 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar13 = FVar8;
          }
          if (*(int *)((longlong)FVar13 + lVar17 * 4) != -0x80000000) {
            uVar12 = 0;
            if ((int)uVar16 < iVar4) {
              uVar12 = uVar15;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar13 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar8 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar13 = FVar8;
            }
            uVar12 = 0;
            if ((int)uVar16 < local_48) {
              uVar12 = uVar15;
            }
            FVar6.Hash = *(uint *)((longlong)FVar13 + lVar17 * 4);
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar14 = (ForElementType<unsigned_int>)local_58;
            if (FVar7 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar7;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar14 + lVar17 * 4),FVar6);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 <= uVar5);
        if (FVar8 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar8);
        }
        if (FVar7 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar7);
        }
      }
    }
  }
  return;
}

// Reserve @ 145075cb0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::Reserve(TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
          *this,ulong64 param_1)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  FHashType FVar6;
  ForElementType<unsigned_int> FVar7;
  ForElementType<Experimental::FHashType> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ForElementType<Experimental::FHashType> FVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  
  iVar4 = (this->KeyValueData).KeyVals.ArrayNum;
  if ((ulonglong)((longlong)iVar4 - (longlong)(this->KeyValueData).FreeList.NumElements) < param_1)
  {
    iVar11 = (int)param_1;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1 & 0xffffffff);
    }
    if ((this->KeyValueData).KeyVals.ArrayMax < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar11,(ForAnyElementType *)this,iVar4,
                 &(this->KeyValueData).KeyVals.ArrayMax);
    }
    uVar12 = this->SizePow2Minus1;
    uVar16 = uVar12;
    if ((ulonglong)(uVar12 * 3) <= param_1 * 5) {
      do {
        iVar4 = uVar16 * 2;
        uVar16 = iVar4 + 1;
      } while ((ulonglong)(uVar16 * 3) <= param_1 * 5);
      if (uVar12 < uVar16) {
        FVar7 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<unsigned_int>)0x0) {
          local_58[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayMax;
        local_48 = (this->IndexData).ArrayNum;
        pTVar2 = &this->HashData;
        local_44 = *piVar1;
        *piVar1 = 1;
        (this->IndexData).ArrayNum = 0;
        FVar8 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        uVar12 = iVar4 + 2;
        iVar4 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar5 = this->SizePow2Minus1;
        this->SizePow2Minus1 = uVar16;
        this->MaximumDistance = 0;
        local_68 = FVar8;
        local_60 = iVar4;
        local_50 = FVar7;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if ((this->IndexData).ArrayMax < (int)uVar12) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar12,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,
                     piVar1);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
                   &(this->IndexData).ArrayNum,piVar1);
        uVar16 = this->SizePow2Minus1 + 1;
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        piVar1 = &(this->HashData).ArrayNum;
        if (*piVar3 < (int)uVar16) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar16,&pTVar2->AllocatorInstance,*piVar1,piVar3);
        }
        uVar16 = this->SizePow2Minus1;
        iVar11 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar16 + 1,&pTVar2->AllocatorInstance,piVar1,piVar3);
        FVar13 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar13 = (ForElementType<Experimental::FHashType>)pTVar2;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar13 + (longlong)iVar11 * 4),uVar16 + 1);
        uVar16 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar16 < iVar4) {
            uVar12 = uVar15;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar17 = (longlong)(int)uVar16;
          FVar13 = (ForElementType<Experimental::FHashType>)local_70;
          if (FVar8 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar13 = FVar8;
          }
          if (*(int *)((longlong)FVar13 + lVar17 * 4) != -0x80000000) {
            uVar12 = 0;
            if ((int)uVar16 < iVar4) {
              uVar12 = uVar15;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar13 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar8 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar13 = FVar8;
            }
            uVar12 = 0;
            if ((int)uVar16 < local_48) {
              uVar12 = uVar15;
            }
            FVar6.Hash = *(uint *)((longlong)FVar13 + lVar17 * 4);
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar14 = (ForElementType<unsigned_int>)local_58;
            if (FVar7 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar7;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar14 + lVar17 * 4),FVar6);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 <= uVar5);
        if (FVar8 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar8);
        }
        if (FVar7 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar7);
        }
      }
    }
  }
  return;
}

// FindIdByHash @ 1452c2dd0

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::FindIdByHash(TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
               *this,FHashType param_1,int *param_2)

{
  uint uVar1;
  ForElementType<Experimental::FHashType> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<Experimental::FHashType> FVar8;
  ForElementType<unsigned_int> FVar9;
  undefined4 in_register_00000014;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  uint uVar12;
  int *in_R9;
  uint uVar13;
  
  uVar13 = this->MaximumDistance;
  uVar12 = (uint)param_2;
  uVar1 = this->SizePow2Minus1;
  uVar11 = this->SizePow2Minus1 & uVar12;
  do {
    uVar5 = 0;
    if ((int)uVar11 < (this->HashData).ArrayNum) {
      uVar5 = ~uVar11 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FHashElementId)iVar6;
    }
    FVar2 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar2 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar8 = FVar2;
    }
    if (uVar12 == *(uint *)((longlong)(int)uVar11 * 4 + (longlong)FVar8)) {
      uVar5 = 0;
      if ((int)uVar11 < (this->IndexData).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar9;
      }
      uVar5 = *(uint *)((longlong)(int)uVar11 * 4 + (longlong)FVar10);
      uVar7 = 0;
      if ((int)uVar5 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      if (*in_R9 == *(int *)((this->KeyValueData).KeyVals.AllocatorInstance.Data +
                            (longlong)(int)uVar5 * 0x58)) {
        uVar13 = 0;
        if ((int)uVar11 < (this->IndexData).ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return (FHashElementId)iVar6;
        }
        FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(undefined4 *)((longlong)FVar9 + (longlong)(int)uVar11 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar11 = uVar11 + 1 & this->SizePow2Minus1;
    if (uVar11 == (uVar13 + 1 + uVar12 & uVar1)) {
      *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) = 0xffffffff;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// RemoveByElementId @ 1452d0010

bool __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::RemoveByElementId(TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
                    *this,FHashElementId param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FHashType FVar7;
  FScriptContainerElement *pFVar8;
  uchar *puVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<Experimental::FHashType> FVar17;
  ForElementType<unsigned_int> FVar18;
  FMeshDrawShaderBindings *this_00;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 local_60 [2];
  ForElementType<Experimental::FHashType> local_58;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  ForElementType<unsigned_int> local_40;
  int local_38;
  int local_34;
  
  uVar23 = 0;
  if (param_1.Index < (this->KeyValueData).Hashes.ArrayNum) {
    uVar23 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pFVar8 = (this->KeyValueData).Hashes.AllocatorInstance.Data;
  pTVar1 = &this->IndexData;
  uVar23 = this->MaximumDistance;
  uVar22 = *(uint *)(pFVar8 + (longlong)param_1.Index * 4) & this->SizePow2Minus1;
  iVar6 = *(int *)(pFVar8 + (longlong)param_1.Index * 4);
  uVar13 = this->SizePow2Minus1;
  while( true ) {
    uVar20 = ~uVar22 >> 0x1f;
    uVar21 = 0;
    if ((int)uVar22 < (this->IndexData).ArrayNum) {
      uVar21 = uVar20;
    }
    if ((uVar21 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
    lVar19 = (longlong)(int)uVar22;
    FVar18 = (ForElementType<unsigned_int>)pTVar1;
    if (FVar15 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar15;
    }
    if (param_1.Index == *(int *)((longlong)FVar18 + lVar19 * 4)) break;
    uVar22 = uVar22 + 1 & this->SizePow2Minus1;
    if (uVar22 == (uVar23 + 1 + iVar6 & uVar13)) {
      return false;
    }
  }
  uVar23 = 0;
  if ((int)uVar22 < (this->IndexData).ArrayNum) {
    uVar23 = uVar20;
  }
  if ((uVar23 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)pTVar1;
  }
  uVar23 = *(uint *)((longlong)FVar15 + lVar19 * 4);
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
            (&(this->KeyValueData).FreeList,uVar23);
  uVar13 = 0;
  if ((int)uVar23 < (this->KeyValueData).Hashes.ArrayNum) {
    uVar13 = ~uVar23 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  *(undefined4 *)((this->KeyValueData).Hashes.AllocatorInstance.Data + (longlong)(int)uVar23 * 4) =
       0x80000000;
  uVar13 = 0;
  if ((int)uVar23 < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar13 = ~uVar23 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  this_00 = (FMeshDrawShaderBindings *)
            ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x1a0);
  puVar9 = this_00[2].Data.InlineStorage[7];
  if (puVar9 != (uchar *)0x0) {
    FMemory::Free(puVar9);
  }
  puVar9 = this_00[1].Data.InlineStorage[7];
  if (puVar9 != (uchar *)0x0) {
    FMemory::Free(puVar9);
  }
  FMeshDrawShaderBindings::~FMeshDrawShaderBindings(this_00);
  pTVar2 = &this->HashData;
  uVar23 = 0;
  if ((int)uVar22 < (this->HashData).ArrayNum) {
    uVar23 = uVar20;
  }
  if ((uVar23 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar16 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar16 + lVar19 * 4) = 0x80000000;
  if ((ulonglong)(this->SizePow2Minus1 * 3) <=
      (ulonglong)
      (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
       (longlong)(this->KeyValueData).FreeList.NumElements) * 0x14)) {
    return true;
  }
  FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    local_48[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
  }
  (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  piVar3 = &(this->IndexData).ArrayNum;
  local_38 = *piVar3;
  piVar4 = &(this->IndexData).ArrayMax;
  local_34 = *piVar4;
  *piVar4 = 1;
  *piVar3 = 0;
  FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
    local_60[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
  }
  (this->HashData).AllocatorInstance.SecondaryData = (ForElementType<Experimental::FHashType>)0x0;
  piVar5 = &(this->HashData).ArrayMax;
  local_4c = *piVar5;
  iVar6 = (this->HashData).ArrayNum;
  (this->HashData).ArrayNum = 0;
  *piVar5 = 1;
  uVar13 = this->SizePow2Minus1;
  uVar22 = uVar13 >> 1;
  this->MaximumDistance = 0;
  uVar23 = uVar22 + 1;
  this->SizePow2Minus1 = uVar22;
  local_58 = FVar16;
  local_50 = iVar6;
  local_40 = FVar15;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (*piVar4 < (int)uVar23) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,uVar23,&(this->IndexData).AllocatorInstance,*piVar3,piVar4);
  }
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
            (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
             &(this->IndexData).ArrayNum,piVar4);
  uVar23 = this->SizePow2Minus1 + 1;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  piVar3 = &(this->HashData).ArrayNum;
  if (*piVar5 < (int)uVar23) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,uVar23,&pTVar2->AllocatorInstance,*piVar3,piVar5);
  }
  uVar23 = this->SizePow2Minus1;
  iVar14 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                     (4,4,uVar23 + 1,&pTVar2->AllocatorInstance,piVar3,piVar5);
  FVar17 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar17 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar17 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((void *)((longlong)FVar17 + (longlong)iVar14 * 4),uVar23 + 1);
  uVar23 = 0;
  do {
    uVar21 = ~uVar23 >> 0x1f;
    uVar22 = 0;
    if ((int)uVar23 < iVar6) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    lVar19 = (longlong)(int)uVar23;
    FVar17 = (ForElementType<Experimental::FHashType>)local_60;
    if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar17 = FVar16;
    }
    if (*(int *)((longlong)FVar17 + lVar19 * 4) != -0x80000000) {
      uVar22 = 0;
      if ((int)uVar23 < iVar6) {
        uVar22 = uVar21;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      FVar17 = (ForElementType<Experimental::FHashType>)local_60;
      if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar17 = FVar16;
      }
      uVar22 = 0;
      if ((int)uVar23 < local_38) {
        uVar22 = uVar21;
      }
      FVar7.Hash = *(uint *)((longlong)FVar17 + lVar19 * 4);
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      FVar18 = (ForElementType<unsigned_int>)local_48;
      if (FVar15 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar15;
      }
      InsertIntoTable(this,*(uint *)((longlong)FVar18 + lVar19 * 4),FVar7);
    }
    uVar23 = uVar23 + 1;
    if (uVar13 < uVar23) {
      if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
        FMemory::Free((void *)FVar16);
      }
      if (FVar15 == (ForElementType<unsigned_int>)0x0) {
        return true;
      }
      FMemory::Free((void *)FVar15);
      return true;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,int_const_&,FScene::FRayTracingCullingGroup_const_&> @ 1453ee4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::FindOrUpdateIdByHashInternal<0,int_const_&,FScene::FRayTracingCullingGroup_const_&>
          (TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,int *param_2,FRayTracingCullingGroup *param_3,bool *param_4)

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
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
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
      if (*(int *)&(param_3->Bounds).Origin.field0_0x0 ==
          *(int *)((this->KeyValueData).KeyVals.AllocatorInstance.Data +
                  (longlong)(int)uVar11 * 0x58)) {
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
          local_58[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        FVar5 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar20 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = FVar5;
        local_60 = iVar10;
        local_50 = FVar6;
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
          FVar15 = (ForElementType<Experimental::FHashType>)local_70;
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
            FVar15 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar5 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar5;
            }
            FVar4.Hash = *(uint *)((longlong)(int)uVar18 * 4 + (longlong)FVar15);
            uVar20 = uVar9;
            if ((int)uVar18 < local_48) {
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
            FVar16 = (ForElementType<unsigned_int>)local_58;
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
      uVar14 = FData::Allocate<int_const_&,FScene::FRayTracingCullingGroup_const_&>
                         (&this->KeyValueData,(int *)param_3,(FRayTracingCullingGroup *)param_4,
                          FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FLightSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType> @ 1453eea90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::
FindOrUpdateIdByHashInternal<0,FLightSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
          (TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FLightSceneInfo **param_2,FUnitType *param_3,bool *param_4)

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
               Allocate<FLightSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
                         (&this->KeyValueData,(FLightSceneInfo **)param_3,(FUnitType *)param_4,
                          FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FPrimitiveSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType> @ 1453ef060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::
FindOrUpdateIdByHashInternal<0,FPrimitiveSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
          (TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FPrimitiveSceneInfo **param_2,FUnitType *param_3,bool *param_4)

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
               Allocate<FPrimitiveSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
                         (&this->KeyValueData,(FPrimitiveSceneInfo **)param_3,(FUnitType *)param_4,
                          FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType> @ 1453ef630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
::
FindOrUpdateIdByHashInternal<0,FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType>
          (TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FRayTracingCullingGroup **param_2,FUnitType *param_3,
          bool *param_4)

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
               Allocate<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType>
                         (&this->KeyValueData,(FRayTracingCullingGroup **)param_3,
                          (FUnitType *)param_4,FVar19);
      InsertIntoTable(this,uVar14,FVar19);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_> @ 1453f8350

TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
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

// TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_> @ 1453f84e0

TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
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

// TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_> @ 1453f8670

TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
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

// TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_> @ 1453f8800

TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
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

// TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_> @ 1453f8990

TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
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

// ~TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_> @ 145403580

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
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
  DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<int,FScene::FRayTracingCullingGroup>,int>
            ((TKeyValue<int,FScene::FRayTracingCullingGroup> *)
             (this->KeyValueData).KeyVals.AllocatorInstance.Data,
             (this->KeyValueData).KeyVals.ArrayNum);
  pFVar4 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// ~TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_> @ 145403600

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
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

// ~TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_> @ 145403670

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
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

// ~TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_> @ 1454036e0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
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
  DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount>,int>
            ((TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount> *)
             (this->KeyValueData).KeyVals.AllocatorInstance.Data,
             (this->KeyValueData).KeyVals.ArrayNum);
  pFVar4 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// FindIdByHash @ 145433ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FindIdByHash(TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
               *this,FHashType param_1,FLightSceneInfo **param_2)

{
  uint uVar1;
  ForElementType<Experimental::FHashType> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<Experimental::FHashType> FVar8;
  ForElementType<unsigned_int> FVar9;
  undefined4 in_register_00000014;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  uint uVar12;
  longlong *in_R9;
  uint uVar13;
  
  uVar13 = this->MaximumDistance;
  uVar12 = (uint)param_2;
  uVar1 = this->SizePow2Minus1;
  uVar11 = this->SizePow2Minus1 & uVar12;
  do {
    uVar5 = 0;
    if ((int)uVar11 < (this->HashData).ArrayNum) {
      uVar5 = ~uVar11 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FHashElementId)iVar6;
    }
    FVar2 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar2 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar8 = FVar2;
    }
    if (uVar12 == *(uint *)((longlong)(int)uVar11 * 4 + (longlong)FVar8)) {
      uVar5 = 0;
      if ((int)uVar11 < (this->IndexData).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar9;
      }
      uVar5 = *(uint *)((longlong)(int)uVar11 * 4 + (longlong)FVar10);
      uVar7 = 0;
      if ((int)uVar5 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      if (*in_R9 == *(longlong *)
                     ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar5 * 8
                     )) {
        uVar13 = 0;
        if ((int)uVar11 < (this->IndexData).ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return (FHashElementId)iVar6;
        }
        FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(undefined4 *)((longlong)FVar9 + (longlong)(int)uVar11 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar11 = uVar11 + 1 & this->SizePow2Minus1;
    if (uVar11 == (uVar13 + 1 + uVar12 & uVar1)) {
      *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) = 0xffffffff;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindIdByHash @ 1454340b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FindIdByHash(TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
               *this,FHashType param_1,FPrimitiveSceneInfo **param_2)

{
  uint uVar1;
  ForElementType<Experimental::FHashType> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<Experimental::FHashType> FVar8;
  ForElementType<unsigned_int> FVar9;
  undefined4 in_register_00000014;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  uint uVar12;
  longlong *in_R9;
  uint uVar13;
  
  uVar13 = this->MaximumDistance;
  uVar12 = (uint)param_2;
  uVar1 = this->SizePow2Minus1;
  uVar11 = this->SizePow2Minus1 & uVar12;
  do {
    uVar5 = 0;
    if ((int)uVar11 < (this->HashData).ArrayNum) {
      uVar5 = ~uVar11 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FHashElementId)iVar6;
    }
    FVar2 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar2 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar8 = FVar2;
    }
    if (uVar12 == *(uint *)((longlong)(int)uVar11 * 4 + (longlong)FVar8)) {
      uVar5 = 0;
      if ((int)uVar11 < (this->IndexData).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar9;
      }
      uVar5 = *(uint *)((longlong)(int)uVar11 * 4 + (longlong)FVar10);
      uVar7 = 0;
      if ((int)uVar5 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FHashElementId)iVar6;
      }
      if (*in_R9 == *(longlong *)
                     ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar5 * 8
                     )) {
        uVar13 = 0;
        if ((int)uVar11 < (this->IndexData).ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return (FHashElementId)iVar6;
        }
        FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(undefined4 *)((longlong)FVar9 + (longlong)(int)uVar11 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar11 = uVar11 + 1 & this->SizePow2Minus1;
    if (uVar11 == (uVar13 + 1 + uVar12 & uVar1)) {
      *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) = 0xffffffff;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// InsertIntoTable @ 145443780

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 145443ae0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 145443e40

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
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

// InsertIntoTable @ 1454441a0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
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

// RemoveByElementId @ 145449ac0

bool __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::RemoveByElementId(TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
                    *this,FHashElementId param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FHashType FVar7;
  FScriptContainerElement *pFVar8;
  void *pvVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<Experimental::FHashType> FVar17;
  ForElementType<unsigned_int> FVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 local_60 [2];
  ForElementType<Experimental::FHashType> local_58;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  ForElementType<unsigned_int> local_40;
  int local_38;
  int local_34;
  
  uVar23 = 0;
  if (param_1.Index < (this->KeyValueData).Hashes.ArrayNum) {
    uVar23 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pFVar8 = (this->KeyValueData).Hashes.AllocatorInstance.Data;
  pTVar1 = &this->IndexData;
  uVar23 = this->MaximumDistance;
  uVar22 = *(uint *)(pFVar8 + (longlong)param_1.Index * 4) & this->SizePow2Minus1;
  iVar6 = *(int *)(pFVar8 + (longlong)param_1.Index * 4);
  uVar13 = this->SizePow2Minus1;
  while( true ) {
    uVar20 = ~uVar22 >> 0x1f;
    uVar21 = 0;
    if ((int)uVar22 < (this->IndexData).ArrayNum) {
      uVar21 = uVar20;
    }
    if ((uVar21 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
    lVar19 = (longlong)(int)uVar22;
    FVar18 = (ForElementType<unsigned_int>)pTVar1;
    if (FVar15 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar15;
    }
    if (param_1.Index == *(int *)((longlong)FVar18 + lVar19 * 4)) break;
    uVar22 = uVar22 + 1 & this->SizePow2Minus1;
    if (uVar22 == (uVar23 + 1 + iVar6 & uVar13)) {
      return false;
    }
  }
  uVar23 = 0;
  if ((int)uVar22 < (this->IndexData).ArrayNum) {
    uVar23 = uVar20;
  }
  if ((uVar23 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)pTVar1;
  }
  uVar23 = *(uint *)((longlong)FVar15 + lVar19 * 4);
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
            (&(this->KeyValueData).FreeList,uVar23);
  uVar13 = 0;
  if ((int)uVar23 < (this->KeyValueData).Hashes.ArrayNum) {
    uVar13 = ~uVar23 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  *(undefined4 *)((this->KeyValueData).Hashes.AllocatorInstance.Data + (longlong)(int)uVar23 * 4) =
       0x80000000;
  uVar13 = 0;
  if ((int)uVar23 < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar13 = ~uVar23 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pvVar9 = *(void **)((this->KeyValueData).KeyVals.AllocatorInstance.Data +
                     (longlong)(int)uVar23 * 0x58 + 0x48);
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  pTVar2 = &this->HashData;
  uVar23 = 0;
  if ((int)uVar22 < (this->HashData).ArrayNum) {
    uVar23 = uVar20;
  }
  if ((uVar23 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar16 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar16 + lVar19 * 4) = 0x80000000;
  if ((ulonglong)
      (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
       (longlong)(this->KeyValueData).FreeList.NumElements) * 0x14) <
      (ulonglong)(this->SizePow2Minus1 * 3)) {
    FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<unsigned_int>)0x0) {
      local_48[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
    }
    (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    piVar3 = &(this->IndexData).ArrayNum;
    local_38 = *piVar3;
    piVar4 = &(this->IndexData).ArrayMax;
    local_34 = *piVar4;
    *piVar4 = 1;
    *piVar3 = 0;
    FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
      local_60[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
    }
    (this->HashData).AllocatorInstance.SecondaryData = (ForElementType<Experimental::FHashType>)0x0;
    piVar5 = &(this->HashData).ArrayMax;
    local_4c = *piVar5;
    iVar6 = (this->HashData).ArrayNum;
    (this->HashData).ArrayNum = 0;
    *piVar5 = 1;
    uVar13 = this->SizePow2Minus1;
    uVar22 = uVar13 >> 1;
    this->MaximumDistance = 0;
    uVar23 = uVar22 + 1;
    this->SizePow2Minus1 = uVar22;
    local_58 = FVar16;
    local_50 = iVar6;
    local_40 = FVar15;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if (*piVar4 < (int)uVar23) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,uVar23,&(this->IndexData).AllocatorInstance,*piVar3,piVar4);
    }
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
               &(this->IndexData).ArrayNum,piVar4);
    uVar23 = this->SizePow2Minus1 + 1;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    piVar3 = &(this->HashData).ArrayNum;
    if (*piVar5 < (int)uVar23) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                (4,4,uVar23,&pTVar2->AllocatorInstance,*piVar3,piVar5);
    }
    uVar23 = this->SizePow2Minus1;
    iVar14 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                       (4,4,uVar23 + 1,&pTVar2->AllocatorInstance,piVar3,piVar5);
    FVar17 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar17 == (ForElementType<Experimental::FHashType>)0x0) {
      FVar17 = (ForElementType<Experimental::FHashType>)pTVar2;
    }
    DefaultConstructItems<Experimental::FHashType,int>
              ((void *)((longlong)FVar17 + (longlong)iVar14 * 4),uVar23 + 1);
    uVar23 = 0;
    while( true ) {
      uVar21 = ~uVar23 >> 0x1f;
      uVar22 = 0;
      if ((int)uVar23 < iVar6) {
        uVar22 = uVar21;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) break;
      lVar19 = (longlong)(int)uVar23;
      FVar17 = (ForElementType<Experimental::FHashType>)local_60;
      if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar17 = FVar16;
      }
      if (*(int *)((longlong)FVar17 + lVar19 * 4) != -0x80000000) {
        uVar22 = 0;
        if ((int)uVar23 < iVar6) {
          uVar22 = uVar21;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        FVar17 = (ForElementType<Experimental::FHashType>)local_60;
        if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
          FVar17 = FVar16;
        }
        uVar22 = 0;
        if ((int)uVar23 < local_38) {
          uVar22 = uVar21;
        }
        FVar7.Hash = *(uint *)((longlong)FVar17 + lVar19 * 4);
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        FVar18 = (ForElementType<unsigned_int>)local_48;
        if (FVar15 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar15;
        }
        InsertIntoTable(this,*(uint *)((longlong)FVar18 + lVar19 * 4),FVar7);
      }
      uVar23 = uVar23 + 1;
      if (uVar13 < uVar23) {
        if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar16);
        }
        if (FVar15 == (ForElementType<unsigned_int>)0x0) {
          return true;
        }
        FMemory::Free((void *)FVar15);
        return true;
      }
    }
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  return true;
}

// FindOrUpdateIdByHashInternal<0,FSceneCulling::FBlockLocAligned_const_&,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock> @ 145473770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::
FindOrUpdateIdByHashInternal<0,FSceneCulling::FBlockLocAligned_const_&,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
          (TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FBlockLocAligned *param_2,FCellBlock *param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  int *piVar4;
  FHashType FVar5;
  ForElementType<Experimental::FHashType> FVar6;
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
  ForElementType<unsigned_int> FVar17;
  undefined4 in_register_00000014;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FHashType FVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_e8 [32];
  undefined4 local_78 [2];
  ForElementType<Experimental::FHashType> local_70;
  int local_68;
  int local_64;
  undefined4 local_60 [2];
  ForElementType<unsigned_int> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FVar22.Hash = (uint)param_2;
  uVar19 = this->SizePow2Minus1 & FVar22.Hash;
  uVar14 = this->MaximumDistance;
  uVar23 = this->SizePow2Minus1;
  uVar21 = 0;
  do {
    uVar20 = ~uVar19 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar19 < (this->HashData).ArrayNum) {
      uVar9 = uVar20;
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
    FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar15 = FVar6;
    }
    lVar24 = (longlong)(int)uVar19 * 4;
    if (FVar22.Hash == *(uint *)(lVar24 + (longlong)FVar15)) {
      uVar11 = 0;
      uVar9 = uVar11;
      if ((int)uVar19 < (this->IndexData).ArrayNum) {
        uVar9 = uVar20;
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
      FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar17 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar17;
      }
      uVar9 = *(uint *)((longlong)FVar16 + lVar24);
      uVar12 = uVar11;
      if ((int)uVar9 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
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
      pFVar18 = (this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20;
      if (((((int)param_3->CoarseCellMask == *(int *)pFVar18) &&
           (*(int *)((longlong)&param_3->CoarseCellMask + 4) == *(int *)(pFVar18 + 4))) &&
          (param_3->GridOffset == *(int *)(pFVar18 + 8))) &&
         (param_3->NumItemChunks == *(int *)(pFVar18 + 0xc))) {
        *in_stack_00000030 = 1;
        if ((int)uVar19 < (this->IndexData).ArrayNum) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return (FHashElementId)iVar10;
        }
        FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar17 == (ForElementType<unsigned_int>)0x0) {
          FVar17 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = *(uint *)((longlong)FVar17 + lVar24);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar19 = uVar19 + 1 & this->SizePow2Minus1;
    if (uVar19 == (uVar14 + 1 + FVar22.Hash & uVar23)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar17 == (ForElementType<unsigned_int>)0x0) {
          local_60[0] = *(undefined4 *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_50 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_4c = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<Experimental::FHashType>)0x0) {
          local_78[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        pTVar3 = &this->HashData;
        local_64 = (this->HashData).ArrayMax;
        piVar4 = &(this->HashData).ArrayMax;
        iVar10 = (this->HashData).ArrayNum;
        *piVar4 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        uVar23 = iVar13 + 2;
        this->MaximumDistance = 0;
        this->SizePow2Minus1 = iVar13 + 1;
        local_70 = FVar6;
        local_68 = iVar10;
        local_58 = FVar17;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar2 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar23,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
                   &(this->IndexData).ArrayNum,&(this->IndexData).ArrayMax);
        uVar23 = this->SizePow2Minus1 + 1;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar4 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar23,&pTVar3->AllocatorInstance,(this->HashData).ArrayNum,piVar4);
        }
        uVar23 = this->SizePow2Minus1;
        iVar13 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar23 + 1,&pTVar3->AllocatorInstance,&(this->HashData).ArrayNum,
                            piVar4);
        FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar15 = (ForElementType<Experimental::FHashType>)pTVar3;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar15 + (longlong)iVar13 * 4),uVar23 + 1);
        do {
          uVar19 = ~uVar21 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar21 < iVar10) {
            uVar23 = uVar19;
          }
          if ((uVar23 == 0) &&
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
          lVar24 = (longlong)(int)uVar21;
          FVar15 = (ForElementType<Experimental::FHashType>)local_78;
          if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar15 = FVar6;
          }
          if (*(int *)((longlong)FVar15 + lVar24 * 4) != -0x80000000) {
            uVar23 = 0;
            if ((int)uVar21 < iVar10) {
              uVar23 = uVar19;
            }
            if ((uVar23 == 0) &&
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
            if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar6;
            }
            uVar23 = 0;
            if ((int)uVar21 < local_50) {
              uVar23 = uVar19;
            }
            FVar5.Hash = *(uint *)((longlong)FVar15 + lVar24 * 4);
            if ((uVar23 == 0) &&
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
            if (FVar17 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar17;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar16 + lVar24 * 4),FVar5);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 <= uVar14);
        if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar6);
        }
        if (FVar17 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar17);
        }
      }
      uVar14 = FData::
               Allocate<FSceneCulling::FBlockLocAligned_const_&,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
                         (&this->KeyValueData,(FBlockLocAligned *)param_3,(FCellBlock *)param_4,
                          FVar22);
      InsertIntoTable(this,uVar14,FVar22);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_> @ 145476bf0

TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
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

// ~TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_> @ 145478c40

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
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

// FindIdByHash @ 1454a5bd0

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::FindIdByHash(TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
               *this,FHashType param_1,FBlockLocAligned *param_2)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<Experimental::FHashType> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<Experimental::FHashType> FVar10;
  ForElementType<unsigned_int> FVar11;
  undefined4 in_register_00000014;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *in_R9;
  uint uVar16;
  
  uVar16 = this->MaximumDistance;
  uVar15 = (uint)param_2;
  uVar2 = this->SizePow2Minus1;
  uVar14 = this->SizePow2Minus1 & uVar15;
  do {
    uVar13 = ~uVar14 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar14 < (this->HashData).ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return (FHashElementId)iVar7;
    }
    FVar3 = (this->HashData).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar3 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar10 = FVar3;
    }
    lVar1 = (longlong)(int)uVar14 * 4;
    if (uVar15 == *(uint *)(lVar1 + (longlong)FVar10)) {
      uVar6 = 0;
      if ((int)uVar14 < (this->IndexData).ArrayNum) {
        uVar6 = uVar13;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return (FHashElementId)iVar7;
      }
      FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = FVar9;
      }
      uVar6 = *(uint *)(lVar1 + (longlong)FVar11);
      uVar8 = 0;
      if ((int)uVar6 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return (FHashElementId)iVar7;
      }
      pFVar12 = (this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
      if ((((*in_R9 == *(int *)pFVar12) && (in_R9[1] == *(int *)(pFVar12 + 4))) &&
          (in_R9[2] == *(int *)(pFVar12 + 8))) && (in_R9[3] == *(int *)(pFVar12 + 0xc))) {
        uVar16 = 0;
        if ((int)uVar14 < (this->IndexData).ArrayNum) {
          uVar16 = uVar13;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return (FHashElementId)iVar7;
        }
        FVar9 = (this->IndexData).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)&this->IndexData;
        }
        *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(undefined4 *)((longlong)FVar9 + lVar1);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar14 = uVar14 + 1 & this->SizePow2Minus1;
    if (uVar14 == (uVar16 + 1 + uVar15 & uVar2)) {
      *(undefined4 *)CONCAT44(in_register_00000014,param_1.Hash) = 0xffffffff;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// InsertIntoTable @ 1454ab860

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
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

// RemoveByElementId @ 1454b5360

bool __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::RemoveByElementId(TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
                    *this,FHashElementId param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FHashType FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<Experimental::FHashType> FVar17;
  ForElementType<unsigned_int> FVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 local_60 [2];
  ForElementType<Experimental::FHashType> local_58;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  ForElementType<unsigned_int> local_40;
  int local_38;
  int local_34;
  
  uVar13 = 0;
  if (param_1.Index < (this->KeyValueData).Hashes.ArrayNum) {
    uVar13 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar8 = (this->KeyValueData).Hashes.AllocatorInstance.Data;
  pTVar1 = &this->IndexData;
  uVar13 = this->MaximumDistance;
  uVar22 = *(uint *)(pFVar8 + (longlong)param_1.Index * 4) & this->SizePow2Minus1;
  iVar6 = *(int *)(pFVar8 + (longlong)param_1.Index * 4);
  uVar12 = this->SizePow2Minus1;
  while( true ) {
    uVar20 = ~uVar22 >> 0x1f;
    uVar21 = 0;
    if ((int)uVar22 < (this->IndexData).ArrayNum) {
      uVar21 = uVar20;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
    lVar19 = (longlong)(int)uVar22;
    FVar18 = (ForElementType<unsigned_int>)pTVar1;
    if (FVar15 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar15;
    }
    if (param_1.Index == *(int *)((longlong)FVar18 + lVar19 * 4)) break;
    uVar22 = uVar22 + 1 & this->SizePow2Minus1;
    if (uVar22 == (uVar13 + 1 + iVar6 & uVar12)) {
      return false;
    }
  }
  uVar13 = 0;
  if ((int)uVar22 < (this->IndexData).ArrayNum) {
    uVar13 = uVar20;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)pTVar1;
  }
  uVar13 = *(uint *)((longlong)FVar15 + lVar19 * 4);
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
            (&(this->KeyValueData).FreeList,uVar13);
  uVar12 = 0;
  if ((int)uVar13 < (this->KeyValueData).Hashes.ArrayNum) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  *(undefined4 *)((this->KeyValueData).Hashes.AllocatorInstance.Data + (longlong)(int)uVar13 * 4) =
       0x80000000;
  uVar12 = 0;
  if ((int)uVar13 < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pTVar2 = &this->HashData;
  uVar13 = 0;
  if ((int)uVar22 < (this->HashData).ArrayNum) {
    uVar13 = uVar20;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar16 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar16 + lVar19 * 4) = 0x80000000;
  if ((ulonglong)
      (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
       (longlong)(this->KeyValueData).FreeList.NumElements) * 0x14) <
      (ulonglong)(this->SizePow2Minus1 * 3)) {
    FVar15 = (this->IndexData).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<unsigned_int>)0x0) {
      local_48[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
    }
    (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    piVar3 = &(this->IndexData).ArrayNum;
    local_38 = *piVar3;
    piVar4 = &(this->IndexData).ArrayMax;
    local_34 = *piVar4;
    *piVar4 = 1;
    *piVar3 = 0;
    FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
      local_60[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
    }
    (this->HashData).AllocatorInstance.SecondaryData = (ForElementType<Experimental::FHashType>)0x0;
    piVar5 = &(this->HashData).ArrayMax;
    local_4c = *piVar5;
    iVar6 = (this->HashData).ArrayNum;
    *piVar5 = 1;
    (this->HashData).ArrayNum = 0;
    uVar12 = this->SizePow2Minus1;
    uVar13 = uVar12 >> 1;
    this->SizePow2Minus1 = uVar13;
    uVar13 = uVar13 + 1;
    this->MaximumDistance = 0;
    local_58 = FVar16;
    local_50 = iVar6;
    local_40 = FVar15;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (*piVar4 < (int)uVar13) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,uVar13,&(this->IndexData).AllocatorInstance,*piVar3,piVar4);
    }
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
               &(this->IndexData).ArrayNum,piVar4);
    uVar13 = this->SizePow2Minus1 + 1;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar3 = &(this->HashData).ArrayNum;
    if (*piVar5 < (int)uVar13) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                (4,4,uVar13,&pTVar2->AllocatorInstance,*piVar3,piVar5);
    }
    uVar13 = this->SizePow2Minus1;
    iVar14 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                       (4,4,uVar13 + 1,&pTVar2->AllocatorInstance,piVar3,piVar5);
    FVar17 = (this->HashData).AllocatorInstance.SecondaryData;
    if (FVar17 == (ForElementType<Experimental::FHashType>)0x0) {
      FVar17 = (ForElementType<Experimental::FHashType>)pTVar2;
    }
    DefaultConstructItems<Experimental::FHashType,int>
              ((void *)((longlong)FVar17 + (longlong)iVar14 * 4),uVar13 + 1);
    uVar13 = 0;
    while( true ) {
      uVar21 = ~uVar13 >> 0x1f;
      uVar22 = 0;
      if ((int)uVar13 < iVar6) {
        uVar22 = uVar21;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) break;
      lVar19 = (longlong)(int)uVar13;
      FVar17 = (ForElementType<Experimental::FHashType>)local_60;
      if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar17 = FVar16;
      }
      if (*(int *)((longlong)FVar17 + lVar19 * 4) != -0x80000000) {
        uVar22 = 0;
        if ((int)uVar13 < iVar6) {
          uVar22 = uVar21;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar17 = (ForElementType<Experimental::FHashType>)local_60;
        if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
          FVar17 = FVar16;
        }
        uVar22 = 0;
        if ((int)uVar13 < local_38) {
          uVar22 = uVar21;
        }
        FVar7.Hash = *(uint *)((longlong)FVar17 + lVar19 * 4);
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar18 = (ForElementType<unsigned_int>)local_48;
        if (FVar15 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar15;
        }
        InsertIntoTable(this,*(uint *)((longlong)FVar18 + lVar19 * 4),FVar7);
      }
      uVar13 = uVar13 + 1;
      if (uVar12 < uVar13) {
        if (FVar16 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar16);
        }
        if (FVar15 == (ForElementType<unsigned_int>)0x0) {
          return true;
        }
        FMemory::Free((void *)FVar15);
        return true;
      }
    }
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  return true;
}

// GetByElementId @ 145543710

TTuple<int_const_,FScene::FRayTracingCullingGroup> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::GetByElementId(TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
                 *this,FHashElementId param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTuple<int_const_,FScene::FRayTracingCullingGroup> *pTVar4;
  
  uVar3 = 0;
  if (param_1.Index < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar3 = (uint)~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTuple<int_const_,FScene::FRayTracingCullingGroup> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTuple<int_const_,FScene::FRayTracingCullingGroup> *)
         ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)param_1.Index * 0x58);
}

// GetByElementId @ 145635d30

TTuple<FMeshDrawCommand_const_,FMeshDrawCommandCount> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::GetByElementId(TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
                 *this,FHashElementId param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTuple<FMeshDrawCommand_const_,FMeshDrawCommandCount> *pTVar4;
  
  uVar3 = 0;
  if (param_1.Index < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar3 = (uint)~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTuple<FMeshDrawCommand_const_,FMeshDrawCommandCount> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTuple<FMeshDrawCommand_const_,FMeshDrawCommandCount> *)
         ((this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)param_1.Index * 0x1a0);
}

// FindOrUpdateIdByHashInternal<0,FAnimBankDesc_const_&,FAnimBankRecord> @ 1456628c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
::FindOrUpdateIdByHashInternal<0,FAnimBankDesc_const_&,FAnimBankRecord>
          (TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
           *this,FHashType param_1,FAnimBankDesc *param_2,FAnimBankRecord *param_3,bool *param_4)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  FHashType FVar5;
  ForElementType<Experimental::FHashType> FVar6;
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
  ForElementType<unsigned_int> FVar17;
  undefined4 in_register_00000014;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FHashType FVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_d8 [32];
  undefined4 local_70 [2];
  ForElementType<Experimental::FHashType> local_68;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FVar22.Hash = (uint)param_2;
  uVar18 = this->SizePow2Minus1 & FVar22.Hash;
  uVar14 = this->MaximumDistance;
  uVar23 = this->SizePow2Minus1;
  uVar20 = 0;
  do {
    uVar19 = ~uVar18 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar18 < (this->HashData).ArrayNum) {
      uVar9 = uVar19;
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
    FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
    lVar24 = (longlong)(int)uVar18;
    FVar15 = (ForElementType<Experimental::FHashType>)&this->HashData;
    if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar15 = FVar6;
    }
    if (FVar22.Hash == *(uint *)((longlong)FVar15 + lVar24 * 4)) {
      uVar11 = 0;
      uVar9 = uVar11;
      if ((int)uVar18 < (this->IndexData).ArrayNum) {
        uVar9 = uVar19;
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
      FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)&this->IndexData;
      if (FVar17 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar17;
      }
      uVar9 = *(uint *)((longlong)FVar16 + lVar24 * 4);
      uVar12 = uVar11;
      if ((int)uVar9 < (this->KeyValueData).KeyVals.ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
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
      pFVar21 = (this->KeyValueData).KeyVals.AllocatorInstance.Data + (longlong)(int)uVar9 * 0xf0;
      bVar8 = TWeakObjectPtr<UAnimBank_const_,FWeakObjectPtr>::UEOpEquals<UAnimBank_const_,bool>
                        ((TWeakObjectPtr<UAnimBank_const_,FWeakObjectPtr> *)param_3,
                         (TWeakObjectPtr<UAnimBank_const_,FWeakObjectPtr> *)pFVar21);
      if ((((bVar8) && ((param_3->Desc).SequenceIndex == *(uint *)&pFVar21[0x10].field_0x0)) &&
          (bVar8 = TWeakObjectPtr<USkinnedAsset_const_,FWeakObjectPtr>::
                   UEOpEquals<USkinnedAsset_const_,bool>
                             (&(param_3->Desc).Asset,
                              (TWeakObjectPtr<USkinnedAsset_const_,FWeakObjectPtr> *)(pFVar21 + 8)),
          bVar8)) &&
         ((*(float *)(pFVar21 + 0x14) == (param_3->Desc).Position &&
          (*(float *)&pFVar21[0x18].field_0x0 == (param_3->Desc).PlayRate)))) {
        uVar4 = (param_3->Desc).field_0x1c;
        if (((((param_3->Desc).bLooping ^ (byte)pFVar21[0x1c]) & 1) == 0) &&
           (((uVar4 ^ (byte)pFVar21[0x1c]) & 2) == 0)) {
          *in_stack_00000030 = 1;
          if ((int)uVar18 < (this->IndexData).ArrayNum) {
            uVar11 = uVar19;
          }
          if ((uVar11 == 0) &&
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
          FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
          if (FVar17 == (ForElementType<unsigned_int>)0x0) {
            FVar17 = (ForElementType<unsigned_int>)&this->IndexData;
          }
          *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
               *(uint *)((longlong)FVar17 + lVar24 * 4);
          return (FHashElementId)param_1.Hash;
        }
      }
    }
    uVar18 = uVar18 + 1 & this->SizePow2Minus1;
    if (uVar18 == (uVar14 + 1 + FVar22.Hash & uVar23)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        FVar17 = (this->IndexData).AllocatorInstance.SecondaryData;
        pTVar1 = &this->IndexData;
        if (FVar17 == (ForElementType<unsigned_int>)0x0) {
          local_58[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        piVar2 = &(this->IndexData).ArrayNum;
        local_48 = *piVar2;
        piVar3 = &(this->IndexData).ArrayMax;
        local_44 = *piVar3;
        *piVar3 = 1;
        *piVar2 = 0;
        FVar6 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<Experimental::FHashType>)0x0) {
          local_70[0] = *(undefined4 *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData =
             (ForElementType<Experimental::FHashType>)0x0;
        local_5c = (this->HashData).ArrayMax;
        iVar10 = (this->HashData).ArrayNum;
        (this->HashData).ArrayNum = 0;
        (this->HashData).ArrayMax = 1;
        uVar14 = this->SizePow2Minus1;
        this->MaximumDistance = 0;
        iVar13 = uVar14 * 2;
        uVar23 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = FVar6;
        local_60 = iVar10;
        local_50 = FVar17;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar3 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar23,&pTVar1->AllocatorInstance,*piVar2,piVar3);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&pTVar1->AllocatorInstance,
                   &(this->IndexData).ArrayNum,piVar3);
        uVar23 = this->SizePow2Minus1 + 1;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        piVar2 = &(this->HashData).ArrayMax;
        if ((this->HashData).ArrayMax < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar23,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar2
                    );
        }
        uVar23 = this->SizePow2Minus1;
        iVar13 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar23 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,piVar2);
        FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
          FVar15 = (ForElementType<Experimental::FHashType>)&this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((void *)((longlong)FVar15 + (longlong)iVar13 * 4),uVar23 + 1);
        do {
          uVar18 = ~uVar20 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar20 < iVar10) {
            uVar23 = uVar18;
          }
          if ((uVar23 == 0) &&
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
          lVar24 = (longlong)(int)uVar20;
          FVar15 = (ForElementType<Experimental::FHashType>)local_70;
          if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
            FVar15 = FVar6;
          }
          if (*(int *)((longlong)FVar15 + lVar24 * 4) != -0x80000000) {
            uVar23 = 0;
            if ((int)uVar20 < iVar10) {
              uVar23 = uVar18;
            }
            if ((uVar23 == 0) &&
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
            FVar15 = (ForElementType<Experimental::FHashType>)local_70;
            if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
              FVar15 = FVar6;
            }
            uVar23 = 0;
            if ((int)uVar20 < local_48) {
              uVar23 = uVar18;
            }
            FVar5.Hash = *(uint *)((longlong)FVar15 + lVar24 * 4);
            if ((uVar23 == 0) &&
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
            FVar16 = (ForElementType<unsigned_int>)local_58;
            if (FVar17 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar17;
            }
            InsertIntoTable(this,*(uint *)((longlong)FVar16 + lVar24 * 4),FVar5);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 <= uVar14);
        if (FVar6 != (ForElementType<Experimental::FHashType>)0x0) {
          FMemory::Free((void *)FVar6);
        }
        if (FVar17 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar17);
        }
      }
      uVar14 = FData::Allocate<FAnimBankDesc_const_&,FAnimBankRecord>
                         (&this->KeyValueData,&param_3->Desc,(FAnimBankRecord *)param_4,FVar22);
      InsertIntoTable(this,uVar14,FVar22);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_> @ 1456647a0

TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
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

// ~TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_> @ 145666ca0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
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
  DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FAnimBankDesc,FAnimBankRecord>,int>
            ((TKeyValue<FAnimBankDesc,FAnimBankRecord> *)
             (this->KeyValueData).KeyVals.AllocatorInstance.Data,
             (this->KeyValueData).KeyVals.ArrayNum);
  pFVar4 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// InsertIntoTable @ 14568c4b0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
::InsertIntoTable(TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
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

// RemoveByElementId @ 145691b60

bool __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
::RemoveByElementId(TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
                    *this,FHashElementId param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FHashType FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<Experimental::FHashType> FVar15;
  ForElementType<Experimental::FHashType> FVar16;
  ForElementType<unsigned_int> FVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined4 local_60 [2];
  ForElementType<Experimental::FHashType> local_58;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  ForElementType<unsigned_int> local_40;
  int local_38;
  int local_34;
  
  uVar22 = 0;
  if (param_1.Index < (this->KeyValueData).Hashes.ArrayNum) {
    uVar22 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar8 = (this->KeyValueData).Hashes.AllocatorInstance.Data;
  pTVar1 = &this->IndexData;
  uVar22 = this->MaximumDistance;
  uVar21 = *(uint *)(pFVar8 + (longlong)param_1.Index * 4) & this->SizePow2Minus1;
  iVar6 = *(int *)(pFVar8 + (longlong)param_1.Index * 4);
  uVar12 = this->SizePow2Minus1;
  while( true ) {
    uVar19 = ~uVar21 >> 0x1f;
    uVar20 = 0;
    if ((int)uVar21 < (this->IndexData).ArrayNum) {
      uVar20 = uVar19;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
    lVar18 = (longlong)(int)uVar21;
    FVar17 = (ForElementType<unsigned_int>)pTVar1;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar14;
    }
    if (param_1.Index == *(int *)((longlong)FVar17 + lVar18 * 4)) break;
    uVar21 = uVar21 + 1 & this->SizePow2Minus1;
    if (uVar21 == (uVar22 + 1 + iVar6 & uVar12)) {
      return false;
    }
  }
  uVar22 = 0;
  if ((int)uVar21 < (this->IndexData).ArrayNum) {
    uVar22 = uVar19;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  uVar22 = *(uint *)((longlong)FVar14 + lVar18 * 4);
  lVar23 = (longlong)(int)uVar22;
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
            (&(this->KeyValueData).FreeList,uVar22);
  uVar12 = 0;
  if ((int)uVar22 < (this->KeyValueData).Hashes.ArrayNum) {
    uVar12 = ~uVar22 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  *(undefined4 *)((this->KeyValueData).Hashes.AllocatorInstance.Data + lVar23 * 4) = 0x80000000;
  uVar12 = 0;
  if ((int)uVar22 < (this->KeyValueData).KeyVals.ArrayNum) {
    uVar12 = ~uVar22 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar8 = (this->KeyValueData).KeyVals.AllocatorInstance.Data;
  if (*(void **)(pFVar8 + lVar23 * 0xf0 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar8 + lVar23 * 0xf0 + 0xd0));
  }
  if (*(void **)(pFVar8 + lVar23 * 0xf0 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar8 + lVar23 * 0xf0 + 0xc0));
  }
  FSkinnedAssetMapping::~FSkinnedAssetMapping
            ((FSkinnedAssetMapping *)(pFVar8 + lVar23 * 0xf0 + 0x58));
  pTVar2 = &this->HashData;
  uVar22 = 0;
  if ((int)uVar21 < (this->HashData).ArrayNum) {
    uVar22 = uVar19;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar15 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar15 + lVar18 * 4) = 0x80000000;
  if ((ulonglong)(this->SizePow2Minus1 * 3) <=
      (ulonglong)
      (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
       (longlong)(this->KeyValueData).FreeList.NumElements) * 0x14)) {
    return true;
  }
  FVar14 = (this->IndexData).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    local_48[0] = *(undefined4 *)(pTVar1->AllocatorInstance).InlineData;
  }
  (this->IndexData).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  piVar3 = &(this->IndexData).ArrayNum;
  local_38 = *piVar3;
  piVar4 = &(this->IndexData).ArrayMax;
  local_34 = *piVar4;
  *piVar4 = 1;
  *piVar3 = 0;
  FVar15 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<Experimental::FHashType>)0x0) {
    local_60[0] = *(undefined4 *)(pTVar2->AllocatorInstance).InlineData;
  }
  (this->HashData).AllocatorInstance.SecondaryData = (ForElementType<Experimental::FHashType>)0x0;
  piVar5 = &(this->HashData).ArrayMax;
  local_4c = *piVar5;
  iVar6 = (this->HashData).ArrayNum;
  (this->HashData).ArrayNum = 0;
  *piVar5 = 1;
  uVar12 = this->SizePow2Minus1;
  uVar21 = uVar12 >> 1;
  this->MaximumDistance = 0;
  uVar22 = uVar21 + 1;
  this->SizePow2Minus1 = uVar21;
  local_58 = FVar15;
  local_50 = iVar6;
  local_40 = FVar14;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if (*piVar4 < (int)uVar22) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,uVar22,&(this->IndexData).AllocatorInstance,*piVar3,piVar4);
  }
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
            (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
             &(this->IndexData).ArrayNum,piVar4);
  uVar22 = this->SizePow2Minus1 + 1;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar3 = &(this->HashData).ArrayNum;
  if (*piVar5 < (int)uVar22) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,uVar22,&pTVar2->AllocatorInstance,*piVar3,piVar5);
  }
  uVar22 = this->SizePow2Minus1;
  iVar13 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                     (4,4,uVar22 + 1,&pTVar2->AllocatorInstance,piVar3,piVar5);
  FVar16 = (this->HashData).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<Experimental::FHashType>)0x0) {
    FVar16 = (ForElementType<Experimental::FHashType>)pTVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((void *)((longlong)FVar16 + (longlong)iVar13 * 4),uVar22 + 1);
  uVar22 = 0;
  do {
    uVar20 = ~uVar22 >> 0x1f;
    uVar21 = 0;
    if ((int)uVar22 < iVar6) {
      uVar21 = uVar20;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    lVar18 = (longlong)(int)uVar22;
    FVar16 = (ForElementType<Experimental::FHashType>)local_60;
    if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
      FVar16 = FVar15;
    }
    if (*(int *)((longlong)FVar16 + lVar18 * 4) != -0x80000000) {
      uVar21 = 0;
      if ((int)uVar22 < iVar6) {
        uVar21 = uVar20;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar16 = (ForElementType<Experimental::FHashType>)local_60;
      if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
        FVar16 = FVar15;
      }
      uVar21 = 0;
      if ((int)uVar22 < local_38) {
        uVar21 = uVar20;
      }
      FVar7.Hash = *(uint *)((longlong)FVar16 + lVar18 * 4);
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar17 = (ForElementType<unsigned_int>)local_48;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar14;
      }
      InsertIntoTable(this,*(uint *)((longlong)FVar17 + lVar18 * 4),FVar7);
    }
    uVar22 = uVar22 + 1;
    if (uVar12 < uVar22) {
      if (FVar15 != (ForElementType<Experimental::FHashType>)0x0) {
        FMemory::Free((void *)FVar15);
      }
      if (FVar14 == (ForElementType<unsigned_int>)0x0) {
        return true;
      }
      FMemory::Free((void *)FVar14);
      return true;
    }
  } while( true );
}

