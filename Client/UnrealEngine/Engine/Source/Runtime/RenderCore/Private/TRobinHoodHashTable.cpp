// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 23

// FindOrUpdateIdByHashInternal<0,FRDGPooledBuffer_*_const_&,FRDGBuffer_*> @ 145d822c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FindOrUpdateIdByHashInternal<0,FRDGPooledBuffer_*_const_&,FRDGBuffer_*>
          (TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *this,FHashType param_1,FRDGPooledBuffer **param_2,FRDGBuffer **param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FHashType FVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar5;
  uint *puVar6;
  FHashType *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FHashType *pFVar16;
  uint *puVar17;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar18;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar19;
  undefined4 in_register_00000014;
  uint uVar20;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar21;
  uint uVar22;
  FHashType FVar23;
  uint uVar24;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_d8 [32];
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FVar23.Hash = (uint)param_2;
  uVar20 = this->SizePow2Minus1 & FVar23.Hash;
  uVar15 = this->MaximumDistance;
  uVar24 = this->SizePow2Minus1;
  uVar22 = 0;
  do {
    uVar10 = 0;
    if ((int)uVar20 < (this->HashData).ArrayNum) {
      uVar10 = ~uVar20 >> 0x1f;
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
    pTVar19 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)(this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar18 = &this->HashData;
    if (pTVar19 !=
        (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar18 = pTVar19;
    }
    uVar10 = 0;
    if (FVar23.Hash ==
        *(uint *)((longlong)(pTVar18->AllocatorInstance).InlineData + (longlong)(int)uVar20 * 4)) {
      uVar12 = 0;
      if ((int)uVar20 < (this->IndexData).ArrayNum) {
        uVar12 = ~uVar20 >> 0x1f;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar21 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar21 = pTVar5;
      }
      uVar12 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)(int)uVar20 * 4);
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
      if (*param_3 ==
          *(FRDGBuffer **)&(this->KeyValueData).KeyVals.AllocatorInstance.Data[(int)uVar12].Pair) {
        *in_stack_00000030 = 1;
        if ((int)uVar20 < (this->IndexData).ArrayNum) {
          uVar10 = ~uVar20 >> 0x1f;
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
        pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                  *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
        pTVar21 = &this->IndexData;
        if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar21 = pTVar5;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)(int)uVar20 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar20 = uVar20 + 1 & this->SizePow2Minus1;
    if (uVar20 == (uVar15 + 1 + FVar23.Hash & uVar24)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        puVar6 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (puVar6 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        pFVar7 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar7 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar11 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar15 = this->SizePow2Minus1;
        iVar14 = uVar15 * 2;
        this->MaximumDistance = 0;
        uVar24 = iVar14 + 2;
        this->SizePow2Minus1 = iVar14 + 1;
        local_68 = pFVar7;
        local_60 = iVar11;
        local_50 = puVar6;
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
        }
        if (*piVar2 < (int)uVar24) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar24,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,piVar1,piVar2);
        uVar24 = this->SizePow2Minus1 + 1;
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
        }
        if (*piVar3 < (int)uVar24) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar24,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar3
                    );
        }
        uVar24 = this->SizePow2Minus1;
        iVar14 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar24 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,&(this->HashData).ArrayMax);
        pTVar19 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar19 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar19 = &this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar19->AllocatorInstance).InlineData + (longlong)iVar14 * 4,uVar24 + 1);
        do {
          uVar24 = uVar10;
          if ((int)uVar22 < iVar11) {
            uVar24 = ~uVar22 >> 0x1f;
          }
          if ((uVar24 == 0) &&
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
          pFVar16 = local_70;
          if (pFVar7 != (FHashType *)0x0) {
            pFVar16 = pFVar7;
          }
          if (pFVar16[(int)uVar22].Hash != 0x80000000) {
            uVar24 = uVar10;
            if ((int)uVar22 < iVar11) {
              uVar24 = ~uVar22 >> 0x1f;
            }
            if ((uVar24 == 0) &&
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
            pFVar16 = local_70;
            if (pFVar7 != (FHashType *)0x0) {
              pFVar16 = pFVar7;
            }
            FVar4.Hash = pFVar16[(int)uVar22].Hash;
            uVar24 = uVar10;
            if ((int)uVar22 < local_48) {
              uVar24 = ~uVar22 >> 0x1f;
            }
            if ((uVar24 == 0) &&
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
            puVar17 = local_58;
            if (puVar6 != (uint *)0x0) {
              puVar17 = puVar6;
            }
            InsertIntoTable(this,puVar17[(int)uVar22],FVar4);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 <= uVar15);
        if (pFVar7 != (FHashType *)0x0) {
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar7);
        }
        if (puVar6 != (uint *)0x0) {
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(puVar6);
        }
      }
      uVar15 = FData::Allocate<FRDGPooledBuffer_*_const_&,FRDGBuffer_*>
                         (&this->KeyValueData,(FRDGPooledBuffer **)param_3,(FRDGBuffer **)param_4,
                          FVar23);
      InsertIntoTable(this,uVar15,FVar23);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar15;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FRDGPooledTexture_*_const_&,FRDGTexture_*> @ 145d828b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FindOrUpdateIdByHashInternal<0,FRDGPooledTexture_*_const_&,FRDGTexture_*>
          (TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *this,FHashType param_1,FRDGPooledTexture **param_2,FRDGTexture **param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FHashType FVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar5;
  uint *puVar6;
  FHashType *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FHashType *pFVar16;
  uint *puVar17;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar18;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar19;
  undefined4 in_register_00000014;
  uint uVar20;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar21;
  uint uVar22;
  FHashType FVar23;
  uint uVar24;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_d8 [32];
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FVar23.Hash = (uint)param_2;
  uVar20 = this->SizePow2Minus1 & FVar23.Hash;
  uVar15 = this->MaximumDistance;
  uVar24 = this->SizePow2Minus1;
  uVar22 = 0;
  do {
    uVar10 = 0;
    if ((int)uVar20 < (this->HashData).ArrayNum) {
      uVar10 = ~uVar20 >> 0x1f;
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
    pTVar19 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)(this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar18 = &this->HashData;
    if (pTVar19 !=
        (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar18 = pTVar19;
    }
    uVar10 = 0;
    if (FVar23.Hash ==
        *(uint *)((longlong)(pTVar18->AllocatorInstance).InlineData + (longlong)(int)uVar20 * 4)) {
      uVar12 = 0;
      if ((int)uVar20 < (this->IndexData).ArrayNum) {
        uVar12 = ~uVar20 >> 0x1f;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar21 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar21 = pTVar5;
      }
      uVar12 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)(int)uVar20 * 4);
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
      if (*param_3 ==
          *(FRDGTexture **)&(this->KeyValueData).KeyVals.AllocatorInstance.Data[(int)uVar12].Pair) {
        *in_stack_00000030 = 1;
        if ((int)uVar20 < (this->IndexData).ArrayNum) {
          uVar10 = ~uVar20 >> 0x1f;
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
        pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                  *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
        pTVar21 = &this->IndexData;
        if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar21 = pTVar5;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)(int)uVar20 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar20 = uVar20 + 1 & this->SizePow2Minus1;
    if (uVar20 == (uVar15 + 1 + FVar23.Hash & uVar24)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        puVar6 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (puVar6 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        pFVar7 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar7 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar11 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar15 = this->SizePow2Minus1;
        iVar14 = uVar15 * 2;
        this->MaximumDistance = 0;
        uVar24 = iVar14 + 2;
        this->SizePow2Minus1 = iVar14 + 1;
        local_68 = pFVar7;
        local_60 = iVar11;
        local_50 = puVar6;
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
        }
        if (*piVar2 < (int)uVar24) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar24,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,piVar1,piVar2);
        uVar24 = this->SizePow2Minus1 + 1;
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
        }
        if (*piVar3 < (int)uVar24) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar24,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar3
                    );
        }
        uVar24 = this->SizePow2Minus1;
        iVar14 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar24 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,&(this->HashData).ArrayMax);
        pTVar19 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar19 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar19 = &this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar19->AllocatorInstance).InlineData + (longlong)iVar14 * 4,uVar24 + 1);
        do {
          uVar24 = uVar10;
          if ((int)uVar22 < iVar11) {
            uVar24 = ~uVar22 >> 0x1f;
          }
          if ((uVar24 == 0) &&
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
          pFVar16 = local_70;
          if (pFVar7 != (FHashType *)0x0) {
            pFVar16 = pFVar7;
          }
          if (pFVar16[(int)uVar22].Hash != 0x80000000) {
            uVar24 = uVar10;
            if ((int)uVar22 < iVar11) {
              uVar24 = ~uVar22 >> 0x1f;
            }
            if ((uVar24 == 0) &&
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
            pFVar16 = local_70;
            if (pFVar7 != (FHashType *)0x0) {
              pFVar16 = pFVar7;
            }
            FVar4.Hash = pFVar16[(int)uVar22].Hash;
            uVar24 = uVar10;
            if ((int)uVar22 < local_48) {
              uVar24 = ~uVar22 >> 0x1f;
            }
            if ((uVar24 == 0) &&
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
            puVar17 = local_58;
            if (puVar6 != (uint *)0x0) {
              puVar17 = puVar6;
            }
            InsertIntoTable(this,puVar17[(int)uVar22],FVar4);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 <= uVar15);
        if (pFVar7 != (FHashType *)0x0) {
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar7);
        }
        if (puVar6 != (uint *)0x0) {
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(puVar6);
        }
      }
      uVar15 = FData::Allocate<FRDGPooledTexture_*_const_&,FRDGTexture_*>
                         (&this->KeyValueData,(FRDGPooledTexture **)param_3,(FRDGTexture **)param_4,
                          FVar23);
      InsertIntoTable(this,uVar15,FVar23);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar15;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FRHIBuffer_*_const_&,FRHIGPUMask_const_&> @ 145d82ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FindOrUpdateIdByHashInternal<0,FRHIBuffer_*_const_&,FRHIGPUMask_const_&>
          (TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
           *this,FHashType param_1,FRHIBuffer **param_2,FRHIGPUMask *param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FHashType FVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar5;
  FHashType *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FHashType *pFVar15;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar16;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar17;
  uint *puVar18;
  undefined4 in_register_00000014;
  uint uVar19;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar20;
  uint uVar21;
  FHashType FVar22;
  uint uVar23;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_c8 [32];
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FVar22.Hash = (uint)param_2;
  uVar19 = this->SizePow2Minus1 & FVar22.Hash;
  uVar14 = this->MaximumDistance;
  uVar23 = this->SizePow2Minus1;
  uVar21 = 0;
  do {
    uVar9 = 0;
    if ((int)uVar19 < (this->HashData).ArrayNum) {
      uVar9 = ~uVar19 >> 0x1f;
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
    pTVar17 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *
              )(this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar16 = &this->HashData;
    if (pTVar17 !=
        (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
    {
      pTVar16 = pTVar17;
    }
    uVar9 = 0;
    if (FVar22.Hash ==
        *(uint *)((longlong)(pTVar16->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4)) {
      uVar11 = 0;
      if ((int)uVar19 < (this->IndexData).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar20 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar20 = pTVar5;
      }
      uVar11 = *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4);
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
          *(longlong *)&(this->KeyValueData).KeyVals.AllocatorInstance.Data[(int)uVar11].Pair) {
        *in_stack_00000030 = 1;
        if ((int)uVar19 < (this->IndexData).ArrayNum) {
          uVar9 = ~uVar19 >> 0x1f;
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
        pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                 (this->IndexData).AllocatorInstance.SecondaryData.Data;
        pTVar20 = &this->IndexData;
        if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                      0x0) {
          pTVar20 = pTVar5;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar19 = uVar19 + 1 & this->SizePow2Minus1;
    if (uVar19 == (uVar14 + 1 + FVar22.Hash & uVar23)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        local_50 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (local_50 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        pFVar6 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar6 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar23 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = pFVar6;
        local_60 = iVar10;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar2 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar23,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,piVar1,piVar2);
        uVar23 = this->SizePow2Minus1 + 1;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar3 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar23,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar3
                    );
        }
        uVar23 = this->SizePow2Minus1;
        iVar13 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar23 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,piVar3);
        pTVar17 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar17 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
            0x0) {
          pTVar17 = &this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar17->AllocatorInstance).InlineData + (longlong)iVar13 * 4,uVar23 + 1);
        do {
          uVar23 = uVar9;
          if ((int)uVar21 < iVar10) {
            uVar23 = ~uVar21 >> 0x1f;
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
          pFVar15 = local_70;
          if (pFVar6 != (FHashType *)0x0) {
            pFVar15 = pFVar6;
          }
          if (pFVar15[(int)uVar21].Hash != 0x80000000) {
            uVar23 = uVar9;
            if ((int)uVar21 < iVar10) {
              uVar23 = ~uVar21 >> 0x1f;
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
            pFVar15 = local_70;
            if (pFVar6 != (FHashType *)0x0) {
              pFVar15 = pFVar6;
            }
            uVar23 = uVar9;
            if ((int)uVar21 < local_48) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            FVar4.Hash = pFVar15[(int)uVar21].Hash;
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
            puVar18 = local_58;
            if (local_50 != (uint *)0x0) {
              puVar18 = local_50;
            }
            InsertIntoTable(this,puVar18[(int)uVar21],FVar4);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 <= uVar14);
      }
      uVar14 = FData::Allocate<FRHIBuffer_*_const_&,FRHIGPUMask_const_&>
                         (&this->KeyValueData,(FRHIBuffer **)param_3,(FRHIGPUMask *)param_4,FVar22);
      InsertIntoTable(this,uVar14,FVar22);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FRHITexture_*_const_&,FRHIGPUMask_const_&> @ 145d83420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FindOrUpdateIdByHashInternal<0,FRHITexture_*_const_&,FRHIGPUMask_const_&>
          (TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
           *this,FHashType param_1,FRHITexture **param_2,FRHIGPUMask *param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FHashType FVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar5;
  FHashType *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FHashType *pFVar15;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar16;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar17;
  uint *puVar18;
  undefined4 in_register_00000014;
  uint uVar19;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar20;
  uint uVar21;
  FHashType FVar22;
  uint uVar23;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_c8 [32];
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FVar22.Hash = (uint)param_2;
  uVar19 = this->SizePow2Minus1 & FVar22.Hash;
  uVar14 = this->MaximumDistance;
  uVar23 = this->SizePow2Minus1;
  uVar21 = 0;
  do {
    uVar9 = 0;
    if ((int)uVar19 < (this->HashData).ArrayNum) {
      uVar9 = ~uVar19 >> 0x1f;
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
    pTVar17 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *
              )(this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar16 = &this->HashData;
    if (pTVar17 !=
        (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
    {
      pTVar16 = pTVar17;
    }
    uVar9 = 0;
    if (FVar22.Hash ==
        *(uint *)((longlong)(pTVar16->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4)) {
      uVar11 = 0;
      if ((int)uVar19 < (this->IndexData).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar20 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar20 = pTVar5;
      }
      uVar11 = *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4);
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
          *(longlong *)&(this->KeyValueData).KeyVals.AllocatorInstance.Data[(int)uVar11].Pair) {
        *in_stack_00000030 = 1;
        if ((int)uVar19 < (this->IndexData).ArrayNum) {
          uVar9 = ~uVar19 >> 0x1f;
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
        pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                 (this->IndexData).AllocatorInstance.SecondaryData.Data;
        pTVar20 = &this->IndexData;
        if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                      0x0) {
          pTVar20 = pTVar5;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar19 = uVar19 + 1 & this->SizePow2Minus1;
    if (uVar19 == (uVar14 + 1 + FVar22.Hash & uVar23)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        local_50 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (local_50 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        pFVar6 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar6 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar23 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = pFVar6;
        local_60 = iVar10;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar2 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar23,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,piVar1,piVar2);
        uVar23 = this->SizePow2Minus1 + 1;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar3 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar23,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar3
                    );
        }
        uVar23 = this->SizePow2Minus1;
        iVar13 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar23 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,piVar3);
        pTVar17 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar17 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
            0x0) {
          pTVar17 = &this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar17->AllocatorInstance).InlineData + (longlong)iVar13 * 4,uVar23 + 1);
        do {
          uVar23 = uVar9;
          if ((int)uVar21 < iVar10) {
            uVar23 = ~uVar21 >> 0x1f;
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
          pFVar15 = local_70;
          if (pFVar6 != (FHashType *)0x0) {
            pFVar15 = pFVar6;
          }
          if (pFVar15[(int)uVar21].Hash != 0x80000000) {
            uVar23 = uVar9;
            if ((int)uVar21 < iVar10) {
              uVar23 = ~uVar21 >> 0x1f;
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
            pFVar15 = local_70;
            if (pFVar6 != (FHashType *)0x0) {
              pFVar15 = pFVar6;
            }
            uVar23 = uVar9;
            if ((int)uVar21 < local_48) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            FVar4.Hash = pFVar15[(int)uVar21].Hash;
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
            puVar18 = local_58;
            if (local_50 != (uint *)0x0) {
              puVar18 = local_50;
            }
            InsertIntoTable(this,puVar18[(int)uVar21],FVar4);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 <= uVar14);
      }
      uVar14 = FData::Allocate<FRHITexture_*_const_&,FRHIGPUMask_const_&>
                         (&this->KeyValueData,(FRHITexture **)param_3,(FRHIGPUMask *)param_4,FVar22)
      ;
      InsertIntoTable(this,uVar14,FVar22);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FRHIBuffer_*,FRDGBuffer_*_const_&> @ 145d839a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FindOrUpdateIdByHashInternal<0,FRHIBuffer_*,FRDGBuffer_*_const_&>
          (TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
           *this,FHashType param_1,FRHIBuffer **param_2,FRDGBuffer **param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FHashType FVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar5;
  FHashType *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FHashType *pFVar15;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar16;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar17;
  uint *puVar18;
  undefined4 in_register_00000014;
  uint uVar19;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar20;
  uint uVar21;
  FHashType FVar22;
  uint uVar23;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_c8 [32];
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FVar22.Hash = (uint)param_2;
  uVar19 = this->SizePow2Minus1 & FVar22.Hash;
  uVar14 = this->MaximumDistance;
  uVar23 = this->SizePow2Minus1;
  uVar21 = 0;
  do {
    uVar9 = 0;
    if ((int)uVar19 < (this->HashData).ArrayNum) {
      uVar9 = ~uVar19 >> 0x1f;
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
    pTVar17 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *
              )(this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar16 = &this->HashData;
    if (pTVar17 !=
        (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
    {
      pTVar16 = pTVar17;
    }
    uVar9 = 0;
    if (FVar22.Hash ==
        *(uint *)((longlong)(pTVar16->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4)) {
      uVar11 = 0;
      if ((int)uVar19 < (this->IndexData).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar20 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar20 = pTVar5;
      }
      uVar11 = *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4);
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
          *(FRDGBuffer **)&(this->KeyValueData).KeyVals.AllocatorInstance.Data[(int)uVar11].Pair) {
        *in_stack_00000030 = 1;
        if ((int)uVar19 < (this->IndexData).ArrayNum) {
          uVar9 = ~uVar19 >> 0x1f;
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
        pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                 (this->IndexData).AllocatorInstance.SecondaryData.Data;
        pTVar20 = &this->IndexData;
        if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                      0x0) {
          pTVar20 = pTVar5;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar19 = uVar19 + 1 & this->SizePow2Minus1;
    if (uVar19 == (uVar14 + 1 + FVar22.Hash & uVar23)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        local_50 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (local_50 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        pFVar6 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar6 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar23 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = pFVar6;
        local_60 = iVar10;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar2 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar23,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,piVar1,piVar2);
        uVar23 = this->SizePow2Minus1 + 1;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar3 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar23,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar3
                    );
        }
        uVar23 = this->SizePow2Minus1;
        iVar13 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar23 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,piVar3);
        pTVar17 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar17 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
            0x0) {
          pTVar17 = &this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar17->AllocatorInstance).InlineData + (longlong)iVar13 * 4,uVar23 + 1);
        do {
          uVar23 = uVar9;
          if ((int)uVar21 < iVar10) {
            uVar23 = ~uVar21 >> 0x1f;
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
          pFVar15 = local_70;
          if (pFVar6 != (FHashType *)0x0) {
            pFVar15 = pFVar6;
          }
          if (pFVar15[(int)uVar21].Hash != 0x80000000) {
            uVar23 = uVar9;
            if ((int)uVar21 < iVar10) {
              uVar23 = ~uVar21 >> 0x1f;
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
            pFVar15 = local_70;
            if (pFVar6 != (FHashType *)0x0) {
              pFVar15 = pFVar6;
            }
            uVar23 = uVar9;
            if ((int)uVar21 < local_48) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            FVar4.Hash = pFVar15[(int)uVar21].Hash;
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
            puVar18 = local_58;
            if (local_50 != (uint *)0x0) {
              puVar18 = local_50;
            }
            InsertIntoTable(this,puVar18[(int)uVar21],FVar4);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 <= uVar14);
      }
      uVar14 = FData::Allocate<FRHIBuffer_*,FRDGBuffer_*_const_&>
                         (&this->KeyValueData,(FRHIBuffer **)param_3,(FRDGBuffer **)param_4,FVar22);
      InsertIntoTable(this,uVar14,FVar22);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// FindOrUpdateIdByHashInternal<0,FRHITexture_*,FRDGTexture_*_const_&> @ 145d83f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FindOrUpdateIdByHashInternal<0,FRHITexture_*,FRDGTexture_*_const_&>
          (TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
           *this,FHashType param_1,FRHITexture **param_2,FRDGTexture **param_3,bool *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FHashType FVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar5;
  FHashType *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FHashType *pFVar15;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar16;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar17;
  uint *puVar18;
  undefined4 in_register_00000014;
  uint uVar19;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar20;
  uint uVar21;
  FHashType FVar22;
  uint uVar23;
  undefined1 *in_stack_00000030;
  undefined1 auStackY_c8 [32];
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FVar22.Hash = (uint)param_2;
  uVar19 = this->SizePow2Minus1 & FVar22.Hash;
  uVar14 = this->MaximumDistance;
  uVar23 = this->SizePow2Minus1;
  uVar21 = 0;
  do {
    uVar9 = 0;
    if ((int)uVar19 < (this->HashData).ArrayNum) {
      uVar9 = ~uVar19 >> 0x1f;
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
    pTVar17 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *
              )(this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar16 = &this->HashData;
    if (pTVar17 !=
        (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
    {
      pTVar16 = pTVar17;
    }
    uVar9 = 0;
    if (FVar22.Hash ==
        *(uint *)((longlong)(pTVar16->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4)) {
      uVar11 = 0;
      if ((int)uVar19 < (this->IndexData).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar20 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar20 = pTVar5;
      }
      uVar11 = *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4);
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
          *(FRDGTexture **)&(this->KeyValueData).KeyVals.AllocatorInstance.Data[(int)uVar11].Pair) {
        *in_stack_00000030 = 1;
        if ((int)uVar19 < (this->IndexData).ArrayNum) {
          uVar9 = ~uVar19 >> 0x1f;
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
        pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                 (this->IndexData).AllocatorInstance.SecondaryData.Data;
        pTVar20 = &this->IndexData;
        if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                      0x0) {
          pTVar20 = pTVar5;
        }
        *(uint *)CONCAT44(in_register_00000014,param_1.Hash) =
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)(int)uVar19 * 4);
        return (FHashElementId)param_1.Hash;
      }
    }
    uVar19 = uVar19 + 1 & this->SizePow2Minus1;
    if (uVar19 == (uVar14 + 1 + FVar22.Hash & uVar23)) {
      if ((ulonglong)(this->SizePow2Minus1 * 3) <=
          (ulonglong)
          (((longlong)(this->KeyValueData).KeyVals.ArrayNum -
           (longlong)(this->KeyValueData).FreeList.NumElements) * 5)) {
        local_50 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (local_50 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayNum;
        local_48 = *piVar1;
        piVar2 = &(this->IndexData).ArrayMax;
        local_44 = *piVar2;
        *piVar2 = 1;
        *piVar1 = 0;
        pFVar6 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar6 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(this->HashData).AllocatorInstance.InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        iVar10 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar14 = this->SizePow2Minus1;
        iVar13 = uVar14 * 2;
        this->MaximumDistance = 0;
        uVar23 = iVar13 + 2;
        this->SizePow2Minus1 = iVar13 + 1;
        local_68 = pFVar6;
        local_60 = iVar10;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar2 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar23,&(this->IndexData).AllocatorInstance,*piVar1,piVar2);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,piVar1,piVar2);
        uVar23 = this->SizePow2Minus1 + 1;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar3 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar23,&(this->HashData).AllocatorInstance,(this->HashData).ArrayNum,piVar3
                    );
        }
        uVar23 = this->SizePow2Minus1;
        iVar13 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar23 + 1,&(this->HashData).AllocatorInstance,
                            &(this->HashData).ArrayNum,piVar3);
        pTVar17 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar17 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
            0x0) {
          pTVar17 = &this->HashData;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar17->AllocatorInstance).InlineData + (longlong)iVar13 * 4,uVar23 + 1);
        do {
          uVar23 = uVar9;
          if ((int)uVar21 < iVar10) {
            uVar23 = ~uVar21 >> 0x1f;
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
          pFVar15 = local_70;
          if (pFVar6 != (FHashType *)0x0) {
            pFVar15 = pFVar6;
          }
          if (pFVar15[(int)uVar21].Hash != 0x80000000) {
            uVar23 = uVar9;
            if ((int)uVar21 < iVar10) {
              uVar23 = ~uVar21 >> 0x1f;
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
            pFVar15 = local_70;
            if (pFVar6 != (FHashType *)0x0) {
              pFVar15 = pFVar6;
            }
            uVar23 = uVar9;
            if ((int)uVar21 < local_48) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            FVar4.Hash = pFVar15[(int)uVar21].Hash;
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
            puVar18 = local_58;
            if (local_50 != (uint *)0x0) {
              puVar18 = local_50;
            }
            InsertIntoTable(this,puVar18[(int)uVar21],FVar4);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 <= uVar14);
      }
      uVar14 = FData::Allocate<FRHITexture_*,FRDGTexture_*_const_&>
                         (&this->KeyValueData,(FRHITexture **)param_3,(FRDGTexture **)param_4,FVar22
                         );
      InsertIntoTable(this,uVar14,FVar22);
      *in_stack_00000030 = 0;
      *(uint *)CONCAT44(in_register_00000014,param_1.Hash) = uVar14;
      return (FHashElementId)param_1.Hash;
    }
  } while( true );
}

// TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> @ 145d8b050

TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::
TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          (TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *this)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar2;
  int iVar3;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar4;
  int *piVar5;
  
  (this->KeyValueData).KeyVals.AllocatorInstance.Data =
       (TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*> *)0x0;
  (this->KeyValueData).KeyVals.ArrayNum = 0;
  (this->KeyValueData).KeyVals.ArrayMax = 0;
  (this->KeyValueData).Hashes.AllocatorInstance.Data = (FHashType *)0x0;
  (this->KeyValueData).Hashes.ArrayNum = 0;
  (this->KeyValueData).Hashes.ArrayMax = 0;
  (this->KeyValueData).FreeList.FreeList.AllocatorInstance.SecondaryData.Data = (FSpan *)0x0;
  (this->KeyValueData).FreeList.FreeList.ArrayNum = 0;
  *(undefined8 *)&(this->KeyValueData).FreeList.FreeList.ArrayMax = 1;
  TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::
  Empty(&(this->KeyValueData).FreeList);
  (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  piVar5 = &(this->IndexData).ArrayMax;
  *piVar5 = 1;
  (this->IndexData).ArrayNum = 0;
  (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
  piVar1 = &(this->HashData).ArrayMax;
  (this->HashData).ArrayNum = 0;
  *piVar1 = 1;
  this->SizePow2Minus1 = 0;
  this->MaximumDistance = 0;
  if ((this->IndexData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
              (4,4,1,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,piVar5);
  }
  iVar3 = (this->IndexData).ArrayNum;
  piVar5 = &(this->IndexData).ArrayMax;
  if (iVar3 == *piVar5) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                      (0x404,&(this->IndexData).AllocatorInstance,piVar5);
    (this->IndexData).ArrayNum = iVar3;
  }
  pTVar2 = &this->HashData;
  (this->IndexData).ArrayNum = iVar3 + 1;
  if ((this->HashData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,&pTVar2->AllocatorInstance,(this->HashData).ArrayNum,piVar1);
  }
  piVar5 = &(this->HashData).ArrayNum;
  iVar3 = *piVar5;
  if (iVar3 == (this->HashData).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
    *piVar5 = iVar3;
  }
  *piVar5 = iVar3 + 1;
  pTVar4 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar4 = pTVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((uint *)((longlong)(pTVar4->AllocatorInstance).InlineData + (longlong)iVar3 * 4),1);
  return this;
}

// TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> @ 145d8b1e0

TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::
TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          (TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *this)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar2;
  int iVar3;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar4;
  int *piVar5;
  
  (this->KeyValueData).KeyVals.AllocatorInstance.Data =
       (TKeyValue<FRDGPooledTexture_*,FRDGTexture_*> *)0x0;
  (this->KeyValueData).KeyVals.ArrayNum = 0;
  (this->KeyValueData).KeyVals.ArrayMax = 0;
  (this->KeyValueData).Hashes.AllocatorInstance.Data = (FHashType *)0x0;
  (this->KeyValueData).Hashes.ArrayNum = 0;
  (this->KeyValueData).Hashes.ArrayMax = 0;
  (this->KeyValueData).FreeList.FreeList.AllocatorInstance.SecondaryData.Data = (FSpan *)0x0;
  (this->KeyValueData).FreeList.FreeList.ArrayNum = 0;
  *(undefined8 *)&(this->KeyValueData).FreeList.FreeList.ArrayMax = 1;
  TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::
  Empty(&(this->KeyValueData).FreeList);
  (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  piVar5 = &(this->IndexData).ArrayMax;
  *piVar5 = 1;
  (this->IndexData).ArrayNum = 0;
  (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
  piVar1 = &(this->HashData).ArrayMax;
  (this->HashData).ArrayNum = 0;
  *piVar1 = 1;
  this->SizePow2Minus1 = 0;
  this->MaximumDistance = 0;
  if ((this->IndexData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
              (4,4,1,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,piVar5);
  }
  iVar3 = (this->IndexData).ArrayNum;
  piVar5 = &(this->IndexData).ArrayMax;
  if (iVar3 == *piVar5) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                      (0x404,&(this->IndexData).AllocatorInstance,piVar5);
    (this->IndexData).ArrayNum = iVar3;
  }
  pTVar2 = &this->HashData;
  (this->IndexData).ArrayNum = iVar3 + 1;
  if ((this->HashData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,&pTVar2->AllocatorInstance,(this->HashData).ArrayNum,piVar1);
  }
  piVar5 = &(this->HashData).ArrayNum;
  iVar3 = *piVar5;
  if (iVar3 == (this->HashData).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
    *piVar5 = iVar3;
  }
  *piVar5 = iVar3 + 1;
  pTVar4 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar4 = pTVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((uint *)((longlong)(pTVar4->AllocatorInstance).InlineData + (longlong)iVar3 * 4),1);
  return this;
}

// TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_> @ 145d8b370

TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
          (TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
           *this)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  int iVar3;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar4;
  int *piVar5;
  
  (this->KeyValueData).KeyVals.AllocatorInstance.Data = (TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *)0x0;
  (this->KeyValueData).KeyVals.ArrayNum = 0;
  (this->KeyValueData).KeyVals.ArrayMax = 0;
  (this->KeyValueData).Hashes.AllocatorInstance.Data = (FHashType *)0x0;
  (this->KeyValueData).Hashes.ArrayNum = 0;
  (this->KeyValueData).Hashes.ArrayMax = 0;
  (this->KeyValueData).FreeList.FreeList.AllocatorInstance.SecondaryData.Data = (FSpan *)0x0;
  (this->KeyValueData).FreeList.FreeList.ArrayNum = 0;
  *(undefined8 *)&(this->KeyValueData).FreeList.FreeList.ArrayMax = 1;
  TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Empty
            (&(this->KeyValueData).FreeList);
  (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  piVar5 = &(this->IndexData).ArrayMax;
  *piVar5 = 1;
  (this->IndexData).ArrayNum = 0;
  (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
  piVar1 = &(this->HashData).ArrayMax;
  (this->HashData).ArrayNum = 0;
  *piVar1 = 1;
  this->SizePow2Minus1 = 0;
  this->MaximumDistance = 0;
  if ((this->IndexData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
              (4,4,1,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,piVar5);
  }
  iVar3 = (this->IndexData).ArrayNum;
  piVar5 = &(this->IndexData).ArrayMax;
  if (iVar3 == *piVar5) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                      (0x404,&(this->IndexData).AllocatorInstance,piVar5);
    (this->IndexData).ArrayNum = iVar3;
  }
  pTVar2 = &this->HashData;
  (this->IndexData).ArrayNum = iVar3 + 1;
  if ((this->HashData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,&pTVar2->AllocatorInstance,(this->HashData).ArrayNum,piVar1);
  }
  piVar5 = &(this->HashData).ArrayNum;
  iVar3 = *piVar5;
  if (iVar3 == (this->HashData).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
    *piVar5 = iVar3;
  }
  *piVar5 = iVar3 + 1;
  pTVar4 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                 *)0x0) {
    pTVar4 = pTVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((uint *)((longlong)(pTVar4->AllocatorInstance).InlineData + (longlong)iVar3 * 4),1);
  return this;
}

// TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_> @ 145d8b500

TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::
TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
          (TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
           *this)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  int iVar3;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar4;
  int *piVar5;
  
  (this->KeyValueData).KeyVals.AllocatorInstance.Data = (TKeyValue<FRHIBuffer_*,FRHIGPUMask> *)0x0;
  (this->KeyValueData).KeyVals.ArrayNum = 0;
  (this->KeyValueData).KeyVals.ArrayMax = 0;
  (this->KeyValueData).Hashes.AllocatorInstance.Data = (FHashType *)0x0;
  (this->KeyValueData).Hashes.ArrayNum = 0;
  (this->KeyValueData).Hashes.ArrayMax = 0;
  (this->KeyValueData).FreeList.FreeList.AllocatorInstance.SecondaryData.Data = (FSpan *)0x0;
  (this->KeyValueData).FreeList.FreeList.ArrayNum = 0;
  *(undefined8 *)&(this->KeyValueData).FreeList.FreeList.ArrayMax = 1;
  TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Empty
            (&(this->KeyValueData).FreeList);
  (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  piVar5 = &(this->IndexData).ArrayMax;
  *piVar5 = 1;
  (this->IndexData).ArrayNum = 0;
  (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
  piVar1 = &(this->HashData).ArrayMax;
  (this->HashData).ArrayNum = 0;
  *piVar1 = 1;
  this->SizePow2Minus1 = 0;
  this->MaximumDistance = 0;
  if ((this->IndexData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
              (4,4,1,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,piVar5);
  }
  iVar3 = (this->IndexData).ArrayNum;
  piVar5 = &(this->IndexData).ArrayMax;
  if (iVar3 == *piVar5) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                      (0x404,&(this->IndexData).AllocatorInstance,piVar5);
    (this->IndexData).ArrayNum = iVar3;
  }
  pTVar2 = &this->HashData;
  (this->IndexData).ArrayNum = iVar3 + 1;
  if ((this->HashData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,&pTVar2->AllocatorInstance,(this->HashData).ArrayNum,piVar1);
  }
  piVar5 = &(this->HashData).ArrayNum;
  iVar3 = *piVar5;
  if (iVar3 == (this->HashData).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
    *piVar5 = iVar3;
  }
  *piVar5 = iVar3 + 1;
  pTVar4 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                 *)0x0) {
    pTVar4 = pTVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((uint *)((longlong)(pTVar4->AllocatorInstance).InlineData + (longlong)iVar3 * 4),1);
  return this;
}

// TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_> @ 145d8b690

TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
          (TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
           *this)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  int iVar3;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar4;
  int *piVar5;
  
  (this->KeyValueData).KeyVals.AllocatorInstance.Data =
       (TKeyValue<FRHITexture_*,FRDGTexture_*> *)0x0;
  (this->KeyValueData).KeyVals.ArrayNum = 0;
  (this->KeyValueData).KeyVals.ArrayMax = 0;
  (this->KeyValueData).Hashes.AllocatorInstance.Data = (FHashType *)0x0;
  (this->KeyValueData).Hashes.ArrayNum = 0;
  (this->KeyValueData).Hashes.ArrayMax = 0;
  (this->KeyValueData).FreeList.FreeList.AllocatorInstance.SecondaryData.Data = (FSpan *)0x0;
  (this->KeyValueData).FreeList.FreeList.ArrayNum = 0;
  *(undefined8 *)&(this->KeyValueData).FreeList.FreeList.ArrayMax = 1;
  TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Empty
            (&(this->KeyValueData).FreeList);
  (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  piVar5 = &(this->IndexData).ArrayMax;
  *piVar5 = 1;
  (this->IndexData).ArrayNum = 0;
  (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
  piVar1 = &(this->HashData).ArrayMax;
  (this->HashData).ArrayNum = 0;
  *piVar1 = 1;
  this->SizePow2Minus1 = 0;
  this->MaximumDistance = 0;
  if ((this->IndexData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
              (4,4,1,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,piVar5);
  }
  iVar3 = (this->IndexData).ArrayNum;
  piVar5 = &(this->IndexData).ArrayMax;
  if (iVar3 == *piVar5) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                      (0x404,&(this->IndexData).AllocatorInstance,piVar5);
    (this->IndexData).ArrayNum = iVar3;
  }
  pTVar2 = &this->HashData;
  (this->IndexData).ArrayNum = iVar3 + 1;
  if ((this->HashData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,&pTVar2->AllocatorInstance,(this->HashData).ArrayNum,piVar1);
  }
  piVar5 = &(this->HashData).ArrayNum;
  iVar3 = *piVar5;
  if (iVar3 == (this->HashData).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
    *piVar5 = iVar3;
  }
  *piVar5 = iVar3 + 1;
  pTVar4 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                 *)0x0) {
    pTVar4 = pTVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((uint *)((longlong)(pTVar4->AllocatorInstance).InlineData + (longlong)iVar3 * 4),1);
  return this;
}

// TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_> @ 145d8b820

TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::
TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
          (TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
           *this)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  int iVar3;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar4;
  int *piVar5;
  
  (this->KeyValueData).KeyVals.AllocatorInstance.Data = (TKeyValue<FRHITexture_*,FRHIGPUMask> *)0x0;
  (this->KeyValueData).KeyVals.ArrayNum = 0;
  (this->KeyValueData).KeyVals.ArrayMax = 0;
  (this->KeyValueData).Hashes.AllocatorInstance.Data = (FHashType *)0x0;
  (this->KeyValueData).Hashes.ArrayNum = 0;
  (this->KeyValueData).Hashes.ArrayMax = 0;
  (this->KeyValueData).FreeList.FreeList.AllocatorInstance.SecondaryData.Data = (FSpan *)0x0;
  (this->KeyValueData).FreeList.FreeList.ArrayNum = 0;
  *(undefined8 *)&(this->KeyValueData).FreeList.FreeList.ArrayMax = 1;
  TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Empty
            (&(this->KeyValueData).FreeList);
  (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  piVar5 = &(this->IndexData).ArrayMax;
  *piVar5 = 1;
  (this->IndexData).ArrayNum = 0;
  (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
  piVar1 = &(this->HashData).ArrayMax;
  (this->HashData).ArrayNum = 0;
  *piVar1 = 1;
  this->SizePow2Minus1 = 0;
  this->MaximumDistance = 0;
  if ((this->IndexData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
              (4,4,1,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,piVar5);
  }
  iVar3 = (this->IndexData).ArrayNum;
  piVar5 = &(this->IndexData).ArrayMax;
  if (iVar3 == *piVar5) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                      (0x404,&(this->IndexData).AllocatorInstance,piVar5);
    (this->IndexData).ArrayNum = iVar3;
  }
  pTVar2 = &this->HashData;
  (this->IndexData).ArrayNum = iVar3 + 1;
  if ((this->HashData).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,&pTVar2->AllocatorInstance,(this->HashData).ArrayNum,piVar1);
  }
  piVar5 = &(this->HashData).ArrayNum;
  iVar3 = *piVar5;
  if (iVar3 == (this->HashData).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
    *piVar5 = iVar3;
  }
  *piVar5 = iVar3 + 1;
  pTVar4 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                 *)0x0) {
    pTVar4 = pTVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>
            ((uint *)((longlong)(pTVar4->AllocatorInstance).InlineData + (longlong)iVar3 * 4),1);
  return this;
}

// FindIdByHash @ 145db6130

FHashElementId __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FindIdByHash(TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
               *this,FHashType param_1,FRHIBuffer **param_2)

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

// InsertIntoTable @ 145dbf530

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::InsertIntoTable(TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                  *this,uint param_1,FHashType param_2)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar5;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar6;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar7;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar8;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(this->HashData).AllocatorInstance.SecondaryData.Data;
    lVar13 = (longlong)(int)uVar12;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    uVar9 = uVar12 - *(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) &
            this->SizePow2Minus1;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    if (*(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) == -0x80000000) break;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar7 = pTVar5;
      }
      uVar4 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      uVar11 = 0;
      if ((int)uVar12 < (this->IndexData).ArrayNum) {
        uVar11 = uVar14;
      }
      uVar10 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar7 = pTVar5;
      }
      *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
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
  pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar5 = &this->IndexData;
  }
  *(uint *)((pTVar5->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
  pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar6 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar6 = pTVar1;
  }
  *(uint *)((pTVar6->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
  return;
}

// InsertIntoTable @ 145dbf890

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::InsertIntoTable(TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                  *this,uint param_1,FHashType param_2)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar5;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar6;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar7;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar8;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(this->HashData).AllocatorInstance.SecondaryData.Data;
    lVar13 = (longlong)(int)uVar12;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    uVar9 = uVar12 - *(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) &
            this->SizePow2Minus1;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    if (*(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) == -0x80000000) break;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar7 = pTVar5;
      }
      uVar4 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      uVar11 = 0;
      if ((int)uVar12 < (this->IndexData).ArrayNum) {
        uVar11 = uVar14;
      }
      uVar10 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar7 = pTVar5;
      }
      *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
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
  pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->IndexData).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TArray<unsigned_int,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar5 = &this->IndexData;
  }
  *(uint *)((pTVar5->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
  pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar6 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar6 = pTVar1;
  }
  *(uint *)((pTVar6->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
  return;
}

// InsertIntoTable @ 145dbfbf0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::InsertIntoTable(TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
                  *this,uint param_1,FHashType param_2)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar5;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar6;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar7;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar8;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->HashData).AllocatorInstance.SecondaryData.Data;
    lVar13 = (longlong)(int)uVar12;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    uVar9 = uVar12 - *(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) &
            this->SizePow2Minus1;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    if (*(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) == -0x80000000) break;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar7 = pTVar5;
      }
      uVar4 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      uVar11 = 0;
      if ((int)uVar12 < (this->IndexData).ArrayNum) {
        uVar11 = uVar14;
      }
      uVar10 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar7 = pTVar5;
      }
      *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
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
  pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->IndexData).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    pTVar5 = &this->IndexData;
  }
  *(uint *)((pTVar5->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
  pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar6 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                 *)0x0) {
    pTVar6 = pTVar1;
  }
  *(uint *)((pTVar6->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
  return;
}

// InsertIntoTable @ 145dbff50

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::InsertIntoTable(TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
                  *this,uint param_1,FHashType param_2)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar5;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar6;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar7;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar8;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->HashData).AllocatorInstance.SecondaryData.Data;
    lVar13 = (longlong)(int)uVar12;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    uVar9 = uVar12 - *(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) &
            this->SizePow2Minus1;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    if (*(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) == -0x80000000) break;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar7 = pTVar5;
      }
      uVar4 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      uVar11 = 0;
      if ((int)uVar12 < (this->IndexData).ArrayNum) {
        uVar11 = uVar14;
      }
      uVar10 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar7 = pTVar5;
      }
      *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
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
  pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->IndexData).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    pTVar5 = &this->IndexData;
  }
  *(uint *)((pTVar5->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
  pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar6 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                 *)0x0) {
    pTVar6 = pTVar1;
  }
  *(uint *)((pTVar6->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
  return;
}

// InsertIntoTable @ 145dc02b0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::InsertIntoTable(TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
                  *this,uint param_1,FHashType param_2)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar5;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar6;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar7;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar8;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->HashData).AllocatorInstance.SecondaryData.Data;
    lVar13 = (longlong)(int)uVar12;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    uVar9 = uVar12 - *(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) &
            this->SizePow2Minus1;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    if (*(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) == -0x80000000) break;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar7 = pTVar5;
      }
      uVar4 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      uVar11 = 0;
      if ((int)uVar12 < (this->IndexData).ArrayNum) {
        uVar11 = uVar14;
      }
      uVar10 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar7 = pTVar5;
      }
      *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
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
  pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->IndexData).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    pTVar5 = &this->IndexData;
  }
  *(uint *)((pTVar5->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
  pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar6 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                 *)0x0) {
    pTVar6 = pTVar1;
  }
  *(uint *)((pTVar6->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
  return;
}

// InsertIntoTable @ 145dc0610

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::InsertIntoTable(TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
                  *this,uint param_1,FHashType param_2)

{
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar5;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar6;
  TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar7;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar8;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->HashData).AllocatorInstance.SecondaryData.Data;
    lVar13 = (longlong)(int)uVar12;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    uVar9 = uVar12 - *(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) &
            this->SizePow2Minus1;
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
    pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->HashData).AllocatorInstance.SecondaryData.Data;
    pTVar8 = pTVar1;
    if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)0x0) {
      pTVar8 = pTVar6;
    }
    if (*(int *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) == -0x80000000) break;
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar7 = pTVar5;
      }
      uVar4 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      uVar11 = 0;
      if ((int)uVar12 < (this->IndexData).ArrayNum) {
        uVar11 = uVar14;
      }
      uVar10 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4);
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
      pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
               (this->IndexData).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->IndexData;
      if (pTVar5 != (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0)
      {
        pTVar7 = pTVar5;
      }
      *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
      pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                *)(this->HashData).AllocatorInstance.SecondaryData.Data;
      pTVar8 = pTVar1;
      if (pTVar6 != (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                     *)0x0) {
        pTVar8 = pTVar6;
      }
      *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
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
  pTVar5 = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->IndexData).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TArray<unsigned_int,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    pTVar5 = &this->IndexData;
  }
  *(uint *)((pTVar5->AllocatorInstance).InlineData + lVar13 * 4) = local_res10;
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
  pTVar6 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->HashData).AllocatorInstance.SecondaryData.Data;
  if (pTVar6 == (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                 *)0x0) {
    pTVar6 = pTVar1;
  }
  *(uint *)((pTVar6->AllocatorInstance).InlineData + lVar13 * 4) = param_2.Hash;
  return;
}

// Reserve @ 145dc7a00

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::Reserve(TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          *this,ulong64 param_1)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  FHashType FVar6;
  uint *puVar7;
  FHashType *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FHashType *pFVar13;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
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
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>_>
                (0x10,8,iVar11,
                 (ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>
                  *)this,iVar4,&(this->KeyValueData).KeyVals.ArrayMax);
    }
    uVar12 = this->SizePow2Minus1;
    uVar17 = uVar12;
    if ((ulonglong)(uVar12 * 3) <= param_1 * 5) {
      do {
        iVar4 = uVar17 * 2;
        uVar17 = iVar4 + 1;
      } while ((ulonglong)(uVar17 * 3) <= param_1 * 5);
      if (uVar12 < uVar17) {
        puVar7 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (puVar7 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayMax;
        local_48 = (this->IndexData).ArrayNum;
        pTVar2 = &this->HashData;
        local_44 = *piVar1;
        *piVar1 = 1;
        (this->IndexData).ArrayNum = 0;
        pFVar8 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar8 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(pTVar2->AllocatorInstance).InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        uVar12 = iVar4 + 2;
        iVar4 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar5 = this->SizePow2Minus1;
        this->SizePow2Minus1 = uVar17;
        this->MaximumDistance = 0;
        local_68 = pFVar8;
        local_60 = iVar4;
        local_50 = puVar7;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if ((this->IndexData).ArrayMax < (int)uVar12) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar12,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,
                     piVar1);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
                   &(this->IndexData).ArrayNum,piVar1);
        uVar17 = this->SizePow2Minus1 + 1;
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        piVar1 = &(this->HashData).ArrayNum;
        if (*piVar3 < (int)uVar17) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar17,&pTVar2->AllocatorInstance,*piVar1,piVar3);
        }
        uVar17 = this->SizePow2Minus1;
        iVar11 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar17 + 1,&pTVar2->AllocatorInstance,piVar1,piVar3);
        pTVar14 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar14 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar14 = pTVar2;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar14->AllocatorInstance).InlineData + (longlong)iVar11 * 4,uVar17 + 1);
        uVar17 = 0;
        do {
          uVar16 = ~uVar17 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar17 < iVar4) {
            uVar12 = uVar16;
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
          pFVar13 = local_70;
          if (pFVar8 != (FHashType *)0x0) {
            pFVar13 = pFVar8;
          }
          if (pFVar13[(int)uVar17].Hash != 0x80000000) {
            uVar12 = 0;
            if ((int)uVar17 < iVar4) {
              uVar12 = uVar16;
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
            pFVar13 = local_70;
            if (pFVar8 != (FHashType *)0x0) {
              pFVar13 = pFVar8;
            }
            uVar12 = 0;
            if ((int)uVar17 < local_48) {
              uVar12 = uVar16;
            }
            FVar6.Hash = pFVar13[(int)uVar17].Hash;
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
            puVar15 = local_58;
            if (puVar7 != (uint *)0x0) {
              puVar15 = puVar7;
            }
            InsertIntoTable(this,puVar15[(int)uVar17],FVar6);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 <= uVar5);
        if (pFVar8 != (FHashType *)0x0) {
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar8);
        }
        if (puVar7 != (uint *)0x0) {
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(puVar7);
        }
      }
    }
  }
  return;
}

// Reserve @ 145dc7dd0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::Reserve(TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          *this,ulong64 param_1)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  FHashType FVar6;
  uint *puVar7;
  FHashType *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FHashType *pFVar13;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
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
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>_>
                (0x10,8,iVar11,
                 (ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>
                  *)this,iVar4,&(this->KeyValueData).KeyVals.ArrayMax);
    }
    uVar12 = this->SizePow2Minus1;
    uVar17 = uVar12;
    if ((ulonglong)(uVar12 * 3) <= param_1 * 5) {
      do {
        iVar4 = uVar17 * 2;
        uVar17 = iVar4 + 1;
      } while ((ulonglong)(uVar17 * 3) <= param_1 * 5);
      if (uVar12 < uVar17) {
        puVar7 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (puVar7 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayMax;
        local_48 = (this->IndexData).ArrayNum;
        pTVar2 = &this->HashData;
        local_44 = *piVar1;
        *piVar1 = 1;
        (this->IndexData).ArrayNum = 0;
        pFVar8 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar8 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(pTVar2->AllocatorInstance).InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayMax;
        local_5c = *piVar3;
        uVar12 = iVar4 + 2;
        iVar4 = (this->HashData).ArrayNum;
        *piVar3 = 1;
        (this->HashData).ArrayNum = 0;
        uVar5 = this->SizePow2Minus1;
        this->SizePow2Minus1 = uVar17;
        this->MaximumDistance = 0;
        local_68 = pFVar8;
        local_60 = iVar4;
        local_50 = puVar7;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if ((this->IndexData).ArrayMax < (int)uVar12) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar12,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,
                     piVar1);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
                   &(this->IndexData).ArrayNum,piVar1);
        uVar17 = this->SizePow2Minus1 + 1;
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        piVar1 = &(this->HashData).ArrayNum;
        if (*piVar3 < (int)uVar17) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar17,&pTVar2->AllocatorInstance,*piVar1,piVar3);
        }
        uVar17 = this->SizePow2Minus1;
        iVar11 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar17 + 1,&pTVar2->AllocatorInstance,piVar1,piVar3);
        pTVar14 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar14 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar14 = pTVar2;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar14->AllocatorInstance).InlineData + (longlong)iVar11 * 4,uVar17 + 1);
        uVar17 = 0;
        do {
          uVar16 = ~uVar17 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar17 < iVar4) {
            uVar12 = uVar16;
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
          pFVar13 = local_70;
          if (pFVar8 != (FHashType *)0x0) {
            pFVar13 = pFVar8;
          }
          if (pFVar13[(int)uVar17].Hash != 0x80000000) {
            uVar12 = 0;
            if ((int)uVar17 < iVar4) {
              uVar12 = uVar16;
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
            pFVar13 = local_70;
            if (pFVar8 != (FHashType *)0x0) {
              pFVar13 = pFVar8;
            }
            uVar12 = 0;
            if ((int)uVar17 < local_48) {
              uVar12 = uVar16;
            }
            FVar6.Hash = pFVar13[(int)uVar17].Hash;
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
            puVar15 = local_58;
            if (puVar7 != (uint *)0x0) {
              puVar15 = puVar7;
            }
            InsertIntoTable(this,puVar15[(int)uVar17],FVar6);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 <= uVar5);
        if (pFVar8 != (FHashType *)0x0) {
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar8);
        }
        if (puVar7 != (uint *)0x0) {
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(puVar7);
        }
      }
    }
  }
  return;
}

// Reserve @ 145dc81a0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::Reserve(TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
          *this,ulong64 param_1)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  FHashType FVar6;
  FHashType *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FHashType *pFVar12;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
  int local_48;
  int local_44;
  
  iVar10 = (this->KeyValueData).KeyVals.ArrayNum;
  if ((ulonglong)((longlong)iVar10 - (longlong)(this->KeyValueData).FreeList.NumElements) < param_1)
  {
    iVar15 = (int)param_1;
    if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1 & 0xffffffff);
    }
    if ((this->KeyValueData).KeyVals.ArrayMax < iVar15) {
      UE::Core::Private::
      ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>_>
                (0x10,8,iVar15,
                 (ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>
                  *)this,iVar10,&(this->KeyValueData).KeyVals.ArrayMax);
    }
    uVar11 = this->SizePow2Minus1;
    uVar17 = uVar11;
    if ((ulonglong)(uVar11 * 3) <= param_1 * 5) {
      do {
        iVar10 = uVar17 * 2;
        uVar17 = iVar10 + 1;
      } while ((ulonglong)(uVar17 * 3) <= param_1 * 5);
      if (uVar11 < uVar17) {
        local_50 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (local_50 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayMax;
        local_48 = (this->IndexData).ArrayNum;
        pTVar2 = &this->HashData;
        local_44 = *piVar1;
        *piVar1 = 1;
        (this->IndexData).ArrayNum = 0;
        pFVar7 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar7 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(pTVar2->AllocatorInstance).InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayNum;
        local_5c = (this->HashData).ArrayMax;
        piVar4 = &(this->HashData).ArrayMax;
        iVar15 = *piVar3;
        uVar11 = iVar10 + 2;
        *piVar3 = 0;
        *piVar4 = 1;
        uVar5 = this->SizePow2Minus1;
        this->SizePow2Minus1 = uVar17;
        this->MaximumDistance = 0;
        local_68 = pFVar7;
        local_60 = iVar15;
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        if ((this->IndexData).ArrayMax < (int)uVar11) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar11,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,
                     piVar1);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
                   &(this->IndexData).ArrayNum,piVar1);
        uVar17 = this->SizePow2Minus1 + 1;
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        if (*piVar4 < (int)uVar17) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar17,&pTVar2->AllocatorInstance,*piVar3,piVar4);
        }
        uVar17 = this->SizePow2Minus1;
        iVar10 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar17 + 1,&pTVar2->AllocatorInstance,piVar3,piVar4);
        pTVar13 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar13 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
            0x0) {
          pTVar13 = pTVar2;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar13->AllocatorInstance).InlineData + (longlong)iVar10 * 4,uVar17 + 1);
        uVar17 = 0;
        do {
          uVar16 = ~uVar17 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar17 < iVar15) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar12 = local_70;
          if (pFVar7 != (FHashType *)0x0) {
            pFVar12 = pFVar7;
          }
          if (pFVar12[(int)uVar17].Hash != 0x80000000) {
            uVar11 = 0;
            if ((int)uVar17 < iVar15) {
              uVar11 = uVar16;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar12 = local_70;
            if (pFVar7 != (FHashType *)0x0) {
              pFVar12 = pFVar7;
            }
            uVar11 = 0;
            if ((int)uVar17 < local_48) {
              uVar11 = uVar16;
            }
            FVar6.Hash = pFVar12[(int)uVar17].Hash;
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar14 = local_58;
            if (local_50 != (uint *)0x0) {
              puVar14 = local_50;
            }
            InsertIntoTable(this,puVar14[(int)uVar17],FVar6);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 <= uVar5);
      }
    }
  }
  return;
}

// Reserve @ 145dc8540

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::Reserve(TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
          *this,ulong64 param_1)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  FHashType FVar6;
  FHashType *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FHashType *pFVar12;
  TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FHashType local_70 [2];
  FHashType *local_68;
  int local_60;
  int local_5c;
  uint local_58 [2];
  uint *local_50;
  int local_48;
  int local_44;
  
  iVar10 = (this->KeyValueData).KeyVals.ArrayNum;
  if ((ulonglong)((longlong)iVar10 - (longlong)(this->KeyValueData).FreeList.NumElements) < param_1)
  {
    iVar15 = (int)param_1;
    if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1 & 0xffffffff);
    }
    if ((this->KeyValueData).KeyVals.ArrayMax < iVar15) {
      UE::Core::Private::
      ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>_>
                (0x10,8,iVar15,
                 (ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>
                  *)this,iVar10,&(this->KeyValueData).KeyVals.ArrayMax);
    }
    uVar11 = this->SizePow2Minus1;
    uVar17 = uVar11;
    if ((ulonglong)(uVar11 * 3) <= param_1 * 5) {
      do {
        iVar10 = uVar17 * 2;
        uVar17 = iVar10 + 1;
      } while ((ulonglong)(uVar17 * 3) <= param_1 * 5);
      if (uVar11 < uVar17) {
        local_50 = (this->IndexData).AllocatorInstance.SecondaryData.Data;
        if (local_50 == (uint *)0x0) {
          local_58[0] = *(uint *)(this->IndexData).AllocatorInstance.InlineData;
        }
        (this->IndexData).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        piVar1 = &(this->IndexData).ArrayMax;
        local_48 = (this->IndexData).ArrayNum;
        pTVar2 = &this->HashData;
        local_44 = *piVar1;
        *piVar1 = 1;
        (this->IndexData).ArrayNum = 0;
        pFVar7 = (this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pFVar7 == (FHashType *)0x0) {
          local_70[0].Hash = *(uint *)(pTVar2->AllocatorInstance).InlineData;
        }
        (this->HashData).AllocatorInstance.SecondaryData.Data = (FHashType *)0x0;
        piVar3 = &(this->HashData).ArrayNum;
        local_5c = (this->HashData).ArrayMax;
        piVar4 = &(this->HashData).ArrayMax;
        iVar15 = *piVar3;
        uVar11 = iVar10 + 2;
        *piVar3 = 0;
        *piVar4 = 1;
        uVar5 = this->SizePow2Minus1;
        this->SizePow2Minus1 = uVar17;
        this->MaximumDistance = 0;
        local_68 = pFVar7;
        local_60 = iVar15;
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        if ((this->IndexData).ArrayMax < (int)uVar11) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar11,&(this->IndexData).AllocatorInstance,(this->IndexData).ArrayNum,
                     piVar1);
        }
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
                  (4,4,this->SizePow2Minus1 + 1,&(this->IndexData).AllocatorInstance,
                   &(this->IndexData).ArrayNum,piVar1);
        uVar17 = this->SizePow2Minus1 + 1;
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        if (*piVar4 < (int)uVar17) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                    (4,4,uVar17,&pTVar2->AllocatorInstance,*piVar3,piVar4);
        }
        uVar17 = this->SizePow2Minus1;
        iVar10 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
                           (4,4,uVar17 + 1,&pTVar2->AllocatorInstance,piVar3,piVar4);
        pTVar13 = (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>
                   *)(this->HashData).AllocatorInstance.SecondaryData.Data;
        if (pTVar13 ==
            (TArray<Experimental::FHashType,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
            0x0) {
          pTVar13 = pTVar2;
        }
        DefaultConstructItems<Experimental::FHashType,int>
                  ((pTVar13->AllocatorInstance).InlineData + (longlong)iVar10 * 4,uVar17 + 1);
        uVar17 = 0;
        do {
          uVar16 = ~uVar17 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar17 < iVar15) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar12 = local_70;
          if (pFVar7 != (FHashType *)0x0) {
            pFVar12 = pFVar7;
          }
          if (pFVar12[(int)uVar17].Hash != 0x80000000) {
            uVar11 = 0;
            if ((int)uVar17 < iVar15) {
              uVar11 = uVar16;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar12 = local_70;
            if (pFVar7 != (FHashType *)0x0) {
              pFVar12 = pFVar7;
            }
            uVar11 = 0;
            if ((int)uVar17 < local_48) {
              uVar11 = uVar16;
            }
            FVar6.Hash = pFVar12[(int)uVar17].Hash;
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar14 = local_58;
            if (local_50 != (uint *)0x0) {
              puVar14 = local_50;
            }
            InsertIntoTable(this,puVar14[(int)uVar17],FVar6);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 <= uVar5);
      }
    }
  }
  return;
}

