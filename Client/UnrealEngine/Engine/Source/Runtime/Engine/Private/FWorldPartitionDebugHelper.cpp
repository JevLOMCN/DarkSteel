// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// operator() @ 148abbcb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWorldPartitionDebugHelper::<lambda_25>::operator()
          (<lambda_25> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UWorld *this_00;
  UWorldPartitionRuntimeHash *pUVar2;
  bool bVar3;
  char cVar4;
  UWorldPartition *pUVar5;
  FName *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FScriptContainerElement *local_70;
  int *piStack_68;
  undefined8 local_60;
  FScriptContainerElement *local_58;
  int *piStack_50;
  int local_48;
  undefined4 uStack_44;
  
  if (DebugRuntimeHashFilter.Elements._8_4_ != DebugRuntimeHashFilter.Elements._52_4_) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
              (&DebugRuntimeHashFilter);
    DebugRuntimeHashFilter.Elements._8_4_ = 0;
    if ((int)DebugRuntimeHashFilter.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&DebugRuntimeHashFilter,0,
                 (int *)&DebugRuntimeHashFilter.Elements.field_0xc);
    }
    DebugRuntimeHashFilter.Elements._48_4_ = 0xffffffff;
    DebugRuntimeHashFilter.Elements._52_4_ = 0;
    DebugRuntimeHashFilter.Elements._40_4_ = 0;
  }
  pFVar11 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  piStack_68 = &(GEngine->WorldList).Array.ArrayNum;
  iVar10 = *piStack_68;
  pFVar1 = pFVar11 + (longlong)iVar10 * 8;
  local_60 = CONCAT44(uStack_44,iVar10);
  local_70 = pFVar11;
  local_58 = pFVar11;
  piStack_50 = piStack_68;
  local_48 = iVar10;
  while( true ) {
    if (*piStack_68 != iVar10) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (pFVar11 == pFVar1) break;
    this_00 = *(UWorld **)(*(longlong *)pFVar11 + 0x2c0);
    if (this_00 != (UWorld *)0x0) {
      bVar3 = UWorld::IsGameWorld(this_00);
      if (bVar3) {
        pUVar5 = UWorld::GetWorldPartition(this_00);
        if (pUVar5 != (UWorldPartition *)0x0) {
          iVar10 = param_1->ArrayNum;
          pFVar8 = (param_1->AllocatorInstance).Data;
          pFVar9 = pFVar8 + (longlong)iVar10 * 0x10;
          while( true ) {
            if (param_1->ArrayNum != iVar10) {
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_res18);
            }
            if (pFVar8 == pFVar9) break;
            pUVar2 = (pUVar5->RuntimeHash).field0_0x0.DebugPtr;
            if (pUVar2 != (UWorldPartitionRuntimeHash *)0x0) {
              cVar4 = (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,pFVar8);
              if (cVar4 != '\0') {
                iVar7 = *(int *)(pFVar8 + 8) + -1;
                if (*(int *)(pFVar8 + 8) == 0) {
                  iVar7 = 0;
                }
                pFVar6 = ::FName::FName(&local_78,iVar7,*(wchar_t **)pFVar8,FNAME_Add);
                local_res18 = *pFVar6;
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                          (&DebugRuntimeHashFilter,&local_res20,(bool *)&local_res18);
              }
            }
            pFVar8 = pFVar8 + 0x10;
          }
          iVar10 = (int)local_60;
        }
      }
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// operator() @ 148abbeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWorldPartitionDebugHelper::<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  UWorld *this_00;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UWorldPartitionSubsystem *this_01;
  FScriptContainerElement *pFVar8;
  FName local_res18;
  bool local_res20 [8];
  FScriptContainerElement *local_68;
  FName *pFStack_60;
  int local_58;
  undefined4 uStack_54;
  FScriptContainerElement *local_50;
  int *piStack_48;
  undefined8 local_40;
  
  if (DebugDataLayerFilter.Elements._8_4_ != DebugDataLayerFilter.Elements._52_4_) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(&DebugDataLayerFilter)
    ;
    DebugDataLayerFilter.Elements._8_4_ = 0;
    if ((int)DebugDataLayerFilter.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&DebugDataLayerFilter,0,
                 (int *)&DebugDataLayerFilter.Elements.field_0xc);
    }
    DebugDataLayerFilter.Elements._48_4_ = 0xffffffff;
    DebugDataLayerFilter.Elements._52_4_ = 0;
    DebugDataLayerFilter.Elements._40_4_ = 0;
  }
  pFVar8 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  local_40 = CONCAT44(uStack_54,iVar3);
  local_68 = pFVar8;
  pFStack_60 = (FName *)piVar1;
  local_58 = iVar3;
  local_50 = pFVar8;
  piStack_48 = piVar1;
  do {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (pFVar8 == pFVar2) {
      bVar5 = Algo::
              NoneOf<TArray<FString,TSizedDefaultAllocator<32>_>,_FWorldPartitionDebugHelper::<lambda_26>::operator()_::__l2::<lambda_2>_>
                        (param_1,local_res18.ComparisonIndex.Value._0_1_);
      if (!bVar5) {
        local_res20[0] = false;
        local_res20[1] = false;
        local_res20[2] = false;
        local_res20[3] = false;
        local_res20[4] = false;
        local_res20[5] = false;
        local_res20[6] = false;
        local_res20[7] = false;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (&DebugDataLayerFilter,&local_res18,local_res20);
      }
      return;
    }
    this_00 = *(UWorld **)(*(longlong *)pFVar8 + 0x2c0);
    if (this_00 != (UWorld *)0x0) {
      bVar5 = UWorld::IsGameWorld(this_00);
      if (bVar5) {
        pUVar6 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar6 != (UClass *)0x0) goto LAB_148abc007;
LAB_148abc035:
          pUVar6 = (UClass *)0x0;
        }
        else {
          if (pUVar6 == (UClass *)0x0) goto LAB_148abc035;
          UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_148abc007:
          pUVar7 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_148abc035;
          iVar4 = (int)pUVar7->_padding_;
          if (((int)pUVar6->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_148abc035;
        }
        this_01 = (UWorldPartitionSubsystem *)
                  FSubsystemCollectionBase::GetSubsystemInternal
                            ((FSubsystemCollectionBase *)&this_00->SubsystemCollection,pUVar6);
        if (this_01 != (UWorldPartitionSubsystem *)0x0) {
          pFStack_60 = &local_res18;
          local_68 = (FScriptContainerElement *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`FWorldPartitionDebugHelper::<lambda_26>::operator()'::__l12::<lambda_1>,bool,UWorldPartition_*>
                     ::Call;
          local_res18 = (FName)param_1;
          UWorldPartitionSubsystem::ForEachWorldPartition
                    (this_01,(TFunctionRef<bool___cdecl(UWorldPartition_*)> *)&local_68);
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// operator() @ 148abc100

void __thiscall
FWorldPartitionDebugHelper::<lambda_27>::operator()
          (<lambda_27> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  wchar_t *_Str;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  uint local_res10 [2];
  EStreamingStatus local_res18 [4];
  
  if (DebugStreamingStatusFilter.Elements._8_4_ != DebugStreamingStatusFilter.Elements._52_4_) {
    TSet<enum_EStreamingStatus,DefaultKeyFuncs<enum_EStreamingStatus,0>,FDefaultSetAllocator>::
    UnhashElements(&DebugStreamingStatusFilter);
    DebugStreamingStatusFilter.Elements._8_4_ = 0;
    if ((int)DebugStreamingStatusFilter.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&DebugStreamingStatusFilter,0,
                 (int *)&DebugStreamingStatusFilter.Elements.field_0xc);
    }
    DebugStreamingStatusFilter.Elements._48_4_ = 0xffffffff;
    DebugStreamingStatusFilter.Elements._52_4_ = 0;
    DebugStreamingStatusFilter.Elements._40_4_ = 0;
  }
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar4) break;
    if (*(int *)(pFVar3 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar3;
    }
    uVar2 = _wtoi(_Str);
    if (uVar2 < 9) {
      local_res10[0] = uVar2;
      TSet<enum_EStreamingStatus,DefaultKeyFuncs<enum_EStreamingStatus,0>,FDefaultSetAllocator>::
      Emplace<enum_EStreamingStatus>(&DebugStreamingStatusFilter,local_res18,(bool *)local_res10);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

// operator() @ 148abc200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWorldPartitionDebugHelper::<lambda_28>::operator()
          (<lambda_28> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  undefined1 auStackY_108 [32];
  uint local_d8;
  uint uStack_d4;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_b0;
  longlong *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_98;
  undefined1 local_78 [32];
  ForElementType<unsigned_int> local_58;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  FScriptContainerElement local_40 [8];
  ForAnyElementType local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar2 = param_1->ArrayNum;
  uVar10 = 0;
  pFVar12 = (param_1->AllocatorInstance).Data;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (ForElementType<unsigned_int>)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = -1;
  local_44 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = (local_78._8_4_ - local_44) + iVar2;
  if (uVar14 <= (uint)(local_78._8_4_ - local_44)) goto LAB_148abc4d1;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_78,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar17 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_30 != 0) && ((int)uVar14 <= (int)local_30)) goto LAB_148abc4d1;
  local_30 = uVar14;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,4);
  }
  if (uVar14 != 0) {
    uVar16 = uVar14;
    if (uVar14 < 2) {
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        uVar16 = 0;
        goto LAB_148abc31a;
      }
    }
    else {
LAB_148abc31a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,uVar16,4);
    }
    if (0 < (int)uVar14) {
      uVar18 = (ulonglong)uVar14;
      uVar17 = uVar10;
      do {
        FVar9.Data = local_40;
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_38.Data;
        }
        uVar6 = uVar17 & (longlong)(int)uVar14 - 1U;
        uVar17 = uVar17 + 1;
        *(undefined4 *)(FVar9.Data + uVar6 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (local_30 != 0) {
    local_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10);
    local_d8 = 0;
    uStack_d4 = 1;
    uStack_c4 = 0;
    uStack_c0 = 0;
    if (local_50 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_78 + 0x10);
      if (local_58 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_58;
      }
      uVar14 = *(uint *)FVar19;
      uVar17 = uVar10;
      while (uVar14 == 0) {
        uStack_c0 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_c0;
        iVar8 = (int)uVar10;
        local_d8 = iVar8 + 1;
        uVar10 = (ulonglong)local_d8;
        if ((int)((local_50 - 1) + ((int)(local_50 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_d8)
        goto LAB_148abc417;
        uVar14 = ((uint *)((longlong)FVar19 + 4))[iVar8];
      }
      uStack_d4 = -uVar14 & uVar14;
      uVar10 = (ulonglong)uStack_d4 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_c4 = (int)lVar3 + -1 + uStack_c0;
      uVar10 = (ulonglong)uStack_c4;
      if ((int)local_50 < (int)uStack_c4) {
LAB_148abc417:
        uVar10 = (ulonglong)local_50;
        uStack_c4 = local_50;
      }
    }
    local_a0 = (longlong *)local_78;
    local_98._padding_ = CONCAT44(uStack_d4,local_d8);
    local_98.CurrentBitIndex = uStack_c4;
    local_98.UnvisitedBitMask = 0xffffffff;
    local_98._28_4_ = uStack_bc;
    local_98.BaseBitIndex = uStack_c0;
    if ((int)uVar10 < (int)local_50) {
      do {
        iVar13 = (int)uVar10;
        puVar1 = (undefined8 *)(*local_a0 + (longlong)iVar13 * 0x18);
        iVar8 = *(int *)(*local_a0 + 8 + (longlong)iVar13 * 0x18);
        if (iVar8 == 0) {
          pwVar11 = L"";
          iVar8 = 0;
        }
        else {
          pwVar11 = (wchar_t *)*puVar1;
          iVar8 = iVar8 + -1;
        }
        uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
        uVar14 = local_30 - 1 & uVar14;
        *(uint *)((longlong)puVar1 + 0x14) = uVar14;
        FVar9.Data = local_40;
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_38.Data;
        }
        uVar10 = (longlong)(int)local_30 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar9.Data + uVar10 * 4);
        *(int *)(FVar9.Data + uVar10 * 4) = iVar13;
        local_98.UnvisitedBitMask = local_98.UnvisitedBitMask & ~local_98._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_98);
        uVar10 = (ulonglong)(uint)local_98.CurrentBitIndex;
      } while (local_98.CurrentBitIndex < (local_98.Array)->NumBits);
    }
  }
LAB_148abc4d1:
  pFVar15 = pFVar12 + (longlong)iVar2 * 0x10;
  for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_78,
               (FString *)local_b8,(bool *)pFVar12);
  }
  pTVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
                     ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_78,
                      &local_b0);
  if (pTVar7 != &DebugCellNameFilter) {
    DestructItems<FString,int>
              ((FString *)DebugCellNameFilter.AllocatorInstance.Data,DebugCellNameFilter.ArrayNum);
    if (DebugCellNameFilter.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(DebugCellNameFilter.AllocatorInstance.Data);
    }
    DebugCellNameFilter.AllocatorInstance.Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    DebugCellNameFilter.ArrayNum = pTVar7->ArrayNum;
    DebugCellNameFilter.ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  local_30 = 0;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = -1;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// AreDebugDataLayersShown @ 148ac00e0

bool __cdecl
FWorldPartitionDebugHelper::AreDebugDataLayersShown
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  FScriptContainerElement *pFVar8;
  longlong local_res10;
  
  if (DebugDataLayerFilter.Elements._8_4_ == DebugDataLayerFilter.Elements._52_4_) {
LAB_148ac022e:
    bVar5 = true;
  }
  else {
    if (param_1->ArrayNum == 0) {
      local_res10 = 0;
      uVar6 = ::GetTypeHash((FNameEntryId)0x0);
      if (DebugDataLayerFilter.Elements._8_4_ != DebugDataLayerFilter.Elements._52_4_) {
        FVar7 = (ForElementType<FSetElementId>)0x154c708e8;
        if (DebugDataLayerFilter.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar7 = DebugDataLayerFilter.Hash.SecondaryData;
        }
        for (iVar2 = *(int *)((longlong)FVar7 +
                             (ulonglong)
                             (DebugDataLayerFilter.HashSize - 1U &
                             (int)((ulonglong)local_res10 >> 0x20) + uVar6) * 4); iVar2 != -1;
            iVar2 = *(int *)(DebugDataLayerFilter.Elements._0_8_ + 8 + (longlong)iVar2 * 0x10)) {
          if (*(longlong *)(DebugDataLayerFilter.Elements._0_8_ + (longlong)iVar2 * 0x10) ==
              local_res10) {
            bVar5 = false;
            goto LAB_148ac018b;
          }
        }
      }
    }
    bVar5 = true;
LAB_148ac018b:
    pFVar8 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (pFVar8 == pFVar1) break;
      lVar4 = *(longlong *)pFVar8;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
      if (DebugDataLayerFilter.Elements._8_4_ != DebugDataLayerFilter.Elements._52_4_) {
        FVar7 = (ForElementType<FSetElementId>)0x154c708e8;
        if (DebugDataLayerFilter.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar7 = DebugDataLayerFilter.Hash.SecondaryData;
        }
        for (iVar3 = *(int *)((longlong)FVar7 +
                             (ulonglong)
                             (DebugDataLayerFilter.HashSize - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + uVar6) * 4); iVar3 != -1;
            iVar3 = *(int *)(DebugDataLayerFilter.Elements._0_8_ + 8 + (longlong)iVar3 * 0x10)) {
          if (*(longlong *)(DebugDataLayerFilter.Elements._0_8_ + (longlong)iVar3 * 0x10) == lVar4)
          goto LAB_148ac022e;
        }
      }
      pFVar8 = pFVar8 + 8;
    }
    bVar5 = !bVar5;
  }
  return bVar5;
}

// DrawLegendItem @ 148ac7aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FWorldPartitionDebugHelper::DrawLegendItem
          (UCanvas *param_1,FString *param_2,UFont *param_3,FColor *param_4,FColor *param_5,
          TVector2<double> *param_6,float *param_7)

{
  TVector2<double> *pTVar1;
  double dVar2;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  TVector2<double>_u_0 local_198;
  TVector2<double>_u_0 local_188;
  FCanvasTileItem local_178;
  FCanvasTileItem local_c8;
  
  pTVar1 = param_6;
  fStack_1a4 = FLinearColor::sRGBToLinearTable[0];
  local_1a8 = FLinearColor::sRGBToLinearTable[0];
  dVar2 = (param_6->field0_0x0)._s_0.Y - _UNK_150689688;
  fStack_19c = 1.0;
  local_1a0 = FLinearColor::sRGBToLinearTable[0];
  local_188._8_4_ = SUB84(dVar2,0);
  local_188._s_0.X = (param_6->field0_0x0)._s_0.X - ___xmm_3ff00000000000003ff0000000000000;
  local_188._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_198._8_4_ = SUB84(ItemSize.field0_0x0._s_0.Y + _UNK_150689698,0);
  local_198._s_0.X = ItemSize.field0_0x0._s_0.X + ___xmm_40000000000000004000000000000000;
  local_198._12_4_ = (int)((ulonglong)(ItemSize.field0_0x0._s_0.Y + _UNK_150689698) >> 0x20);
  FCanvasTileItem::FCanvasTileItem
            (&local_178,(TVector2<double> *)&local_188._s_0,GWhiteTexture,
             (TVector2<double> *)&local_198._s_0,(FLinearColor *)&local_1a8);
  UCanvas::DrawItem(param_1,(FCanvasItem *)&local_178);
  fStack_1a4 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
  local_1a8 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
  fStack_19c = (float)(param_4->field0_0x0)._s_0.A * __real_3b808081;
  local_1a0 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
  FCanvasTileItem::FCanvasTileItem
            (&local_c8,pTVar1,GWhiteTexture,&ItemSize,(FLinearColor *)&local_1a8);
  UCanvas::DrawItem(param_1,(FCanvasItem *)&local_c8);
  param_6._0_4_ = 0.0;
  _local_1a8 = ItemSize.field0_0x0._s_0.X + (pTVar1->field0_0x0)._s_0.X + __real_4024000000000000;
  _local_1a0 = (pTVar1->field0_0x0)._s_0.Y;
  DrawText(param_1,param_2,param_3,param_5,(TVector2<double> *)&local_1a8,(float *)&param_6);
  if (param_7 == (float *)0x0) {
    (pTVar1->field0_0x0)._s_0.Y = (double)_local_1a0;
  }
  else {
    dVar2 = (double)param_6._0_4_ + ItemSize.field0_0x0._s_0.X + __real_4024000000000000;
    if (dVar2 <= (double)*param_7) {
      dVar2 = (double)*param_7;
    }
    *param_7 = (float)dVar2;
    (pTVar1->field0_0x0)._s_0.Y = (double)_local_1a0;
  }
  return;
}

// DrawText @ 148ac91e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FWorldPartitionDebugHelper::DrawText
          (UCanvas *param_1,FString *param_2,UFont *param_3,FColor *param_4,
          TVector2<double> *param_5,float *param_6)

{
  int iVar1;
  float fVar2;
  float local_res10 [2];
  float local_88 [4];
  TStringView<wchar_t> local_78;
  FFontRenderInfo local_68;
  
  local_68.GlowInfo.bEnableGlow = 0;
  local_68.bEnableShadow = 1;
  local_68.bClipText = 1;
  local_68.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_68.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_68.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_68.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  local_68.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
  local_68.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
  UCanvas::SetDrawColor(param_1,param_4);
  fVar2 = __real_3f800000;
  local_78.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_78.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_78.Size = 0;
  }
  UCanvas::DrawText(param_1,param_3,&local_78,(float)(param_5->field0_0x0)._s_0.X,
                    (float)(param_5->field0_0x0)._s_0.Y,__real_3f800000,__real_3f800000,&local_68);
  local_78.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_78.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_78.Size = 0;
  }
  UCanvas::StrLen(param_1,param_3,&local_78,local_88,local_res10,false);
  (param_5->field0_0x0)._s_0.Y = (double)(local_res10[0] + fVar2) + (param_5->field0_0x0)._s_0.Y;
  if (param_6 != (float *)0x0) {
    fVar2 = *param_6;
    if (*param_6 <= local_88[0]) {
      fVar2 = local_88[0];
    }
    *param_6 = fVar2;
  }
  return;
}

// IsDebugCellNameShown @ 148ad3de0

bool __cdecl FWorldPartitionDebugHelper::IsDebugCellNameShown(FString *param_1)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  wchar_t *_Str;
  undefined1 local_res10 [8];
  
  iVar3 = DebugCellNameFilter.ArrayNum;
  if (iVar3 == 0) {
    return true;
  }
  pFVar5 = DebugCellNameFilter.AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  FVar4.Data = DebugCellNameFilter.AllocatorInstance.Data;
  while( true ) {
    if (DebugCellNameFilter.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar4.Data == pFVar5) {
      return true;
    }
    if (*(int *)(FVar4.Data + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)FVar4.Data;
      if (_Str == (wchar_t *)0x0) {
        return false;
      }
    }
    sVar2 = wcslen(_Str);
    iVar1 = ::FString::Find(param_1,_Str,(int)sVar2,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) break;
    FVar4.Data = FVar4.Data + 0x10;
  }
  return false;
}

// IsDebugDataLayerShown @ 148ad3eb0

bool __cdecl FWorldPartitionDebugHelper::IsDebugDataLayerShown(FName param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (DebugDataLayerFilter.Elements._8_4_ == DebugDataLayerFilter.Elements._52_4_) {
    return true;
  }
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (DebugDataLayerFilter.Elements._8_4_ != DebugDataLayerFilter.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x154c708e8;
    if (DebugDataLayerFilter.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar3 = DebugDataLayerFilter.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar3 +
                         (ulonglong)(DebugDataLayerFilter.HashSize - 1U & param_1.Number + uVar2) *
                         4); iVar1 != -1;
        iVar1 = *(int *)(DebugDataLayerFilter.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
      if (*(FName *)(DebugDataLayerFilter.Elements._0_8_ + (longlong)iVar1 * 0x10) == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsDebugRuntimeHashGridShown @ 148ad3f50

bool __cdecl FWorldPartitionDebugHelper::IsDebugRuntimeHashGridShown(FName param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (DebugRuntimeHashFilter.Elements._8_4_ == DebugRuntimeHashFilter.Elements._52_4_) {
    return true;
  }
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (DebugRuntimeHashFilter.Elements._8_4_ != DebugRuntimeHashFilter.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x154c70938;
    if (DebugRuntimeHashFilter.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar3 = DebugRuntimeHashFilter.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar3 +
                         (ulonglong)(DebugRuntimeHashFilter.HashSize - 1U & param_1.Number + uVar2)
                         * 4); iVar1 != -1;
        iVar1 = *(int *)(DebugRuntimeHashFilter.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
      if (*(FName *)(DebugRuntimeHashFilter.Elements._0_8_ + (longlong)iVar1 * 0x10) == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsDebugStreamingStatusShown @ 148ad4330

bool __cdecl FWorldPartitionDebugHelper::IsDebugStreamingStatusShown(EStreamingStatus param_1)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (DebugStreamingStatusFilter.Elements._8_4_ != DebugStreamingStatusFilter.Elements._52_4_) {
    FVar2 = (ForElementType<FSetElementId>)0x154c70898;
    if (DebugStreamingStatusFilter.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar2 = DebugStreamingStatusFilter.Hash.SecondaryData;
    }
    iVar1 = *(int *)((longlong)FVar2 +
                    (ulonglong)
                    (DebugStreamingStatusFilter.HashSize - LEVEL_UnloadedButStillAround & param_1) *
                    4);
    while( true ) {
      if (iVar1 == -1) {
        return false;
      }
      if (*(EStreamingStatus *)(DebugStreamingStatusFilter.Elements._0_8_ + (longlong)iVar1 * 0xc)
          == param_1) break;
      iVar1 = *(int *)(DebugStreamingStatusFilter.Elements._0_8_ + 4 + (longlong)iVar1 * 0xc);
    }
  }
  return true;
}

