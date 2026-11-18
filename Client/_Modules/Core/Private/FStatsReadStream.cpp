// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~FStatsReadStream @ 1419d2eb0

void __thiscall FStatsReadStream::~FStatsReadStream(FStatsReadStream *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FStatsFrameInfo,int>
            ((FStatsFrameInfo *)(this->FramesInfo).AllocatorInstance.Data,
             (this->FramesInfo).ArrayNum);
  pFVar1 = (this->FramesInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FNamesIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FNamesIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FNamesIndexMap);
  pFVar1 = (this->Header).PlatformName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ReadFName @ 141a12e00

/* WARNING: Enum "Type": Some values do not have unique names */

FStatNameAndInfo __thiscall
FStatsReadStream::ReadFName(FStatsReadStream *this,FArchive *param_1,bool param_2)

{
  longlong *plVar1;
  int iVar2;
  FName *pFVar3;
  FNameEntryId *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  undefined1 *puVar6;
  FNameEntryId FVar7;
  undefined7 in_register_00000081;
  FArchive *this_00;
  char in_R9B;
  uint local_res10 [2];
  FName local_res18;
  uint local_res20 [2];
  undefined1 local_58 [16];
  undefined8 local_48;
  uint *local_40;
  FName *local_38;
  
  this_00 = (FArchive *)CONCAT71(in_register_00000081,param_2);
  plVar1 = *(longlong **)&this_00->field_0x8;
  local_res10[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_res20[0] = 0;
  plVar1 = *(longlong **)&this_00->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (in_R9B == '\0') {
    if ((local_res20[0] & 0x400000) != 0) {
      local_58._8_8_ = (FNameEntryId *)0x0;
      local_48 = 0;
      ::operator<<(this_00,(FString *)(local_58 + 8));
      pFVar4 = (FNameEntryId *)L"";
      if ((int)local_48 != 0) {
        pFVar4 = (FNameEntryId *)local_58._8_8_;
      }
      pFVar3 = ::FName::FName(&local_res18,(wchar_t *)pFVar4);
      FVar7 = (*pFVar3).ComparisonIndex;
      local_40 = local_res10;
      local_38 = &local_res18;
      local_res18.ComparisonIndex.Value = FVar7.Value;
      TSet<TTuple<int,FNameEntryId>,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,FNameEntryId_&&>_>
                ((TSet<TTuple<int,FNameEntryId>,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>,FDefaultSetAllocator>
                  *)&this->FNamesIndexMap,(TPairInitializer<int_const_&,FNameEntryId_&&> *)local_58,
                 (bool *)&local_40);
      local_res20[0] = local_res20[0] & 0xffbfffff;
      if ((FNameEntryId *)local_58._8_8_ != (FNameEntryId *)0x0) {
        FMemory::Free((void *)local_58._8_8_);
      }
      goto LAB_141a1308e;
    }
    if (*(int *)&(this->FNamesIndexMap).field_0x8 != *(int *)&(this->FNamesIndexMap).field_0x34) {
      puVar6 = *(undefined1 **)&(this->FNamesIndexMap).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->FNamesIndexMap).field_0x38;
      }
      iVar2 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->FNamesIndexMap).field_0x48 - 1U & local_res10[0]) *
                                4);
      if (iVar2 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->FNamesIndexMap + (longlong)iVar2 * 0x10) ==
              local_res10[0]) {
            pFVar4 = TMapBase<int,FNameEntryId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>_>
                     ::FindChecked((TMapBase<int,FNameEntryId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>_>
                                    *)&this->FNamesIndexMap,local_res10[0]);
            FVar7.Value = pFVar4->Value;
            goto LAB_141a1308e;
          }
          iVar2 = *(int *)(*(longlong *)&this->FNamesIndexMap + 8 + (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
    pFVar3 = ::FName::FName(&local_res18,L"Unknown FName");
    FVar7 = (*pFVar3).ComparisonIndex;
    local_res20[0] = 0;
    if ((byte)LogTemp._0_1_ < 3) goto LAB_141a1308e;
    pFVar5 = &`public:_class_FStatNameAndInfo___cdecl_FStatsReadStream::ReadFName(FArchive&___ptr64,bool)___ptr64'
              ::__l16::LOG_Static;
  }
  else {
    if ((local_res20[0] & 0x400000) != 0) {
      local_58._8_8_ = (FNameEntryId *)0x0;
      local_48 = 0;
      ::operator<<(this_00,(FString *)(local_58 + 8));
      local_res20[0] = local_res20[0] & 0xffbfffff;
      if ((FNameEntryId *)local_58._8_8_ != (FNameEntryId *)0x0) {
        FMemory::Free((void *)local_58._8_8_);
      }
    }
    if (*(int *)&(this->FNamesIndexMap).field_0x8 != *(int *)&(this->FNamesIndexMap).field_0x34) {
      puVar6 = *(undefined1 **)&(this->FNamesIndexMap).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->FNamesIndexMap).field_0x38;
      }
      iVar2 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->FNamesIndexMap).field_0x48 - 1U & local_res10[0]) *
                                4);
      if (iVar2 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->FNamesIndexMap + (longlong)iVar2 * 0x10) ==
              local_res10[0]) {
            pFVar4 = TMapBase<int,FNameEntryId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>_>
                     ::FindChecked((TMapBase<int,FNameEntryId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>_>
                                    *)&this->FNamesIndexMap,local_res10[0]);
            FVar7.Value = pFVar4->Value;
            goto LAB_141a1308e;
          }
          iVar2 = *(int *)(*(longlong *)&this->FNamesIndexMap + 8 + (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
    pFVar3 = ::FName::FName(&local_res18,L"Unknown FName");
    FVar7 = (*pFVar3).ComparisonIndex;
    local_res20[0] = 0;
    if ((byte)LogTemp._0_1_ < 3) goto LAB_141a1308e;
    pFVar5 = &`public:_class_FStatNameAndInfo___cdecl_FStatsReadStream::ReadFName(FArchive&___ptr64,bool)___ptr64'
              ::__l44::LOG_Static;
  }
  local_res20[0] = 0;
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogTemp);
LAB_141a1308e:
  *(uint *)param_1 = FVar7.Value;
  *(uint *)&param_1->field_0x4 = local_res20[0];
  return (FStatNameAndInfo)param_1;
}

// ReadFNamesAndMetadataMessages @ 141a130d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStatsReadStream::ReadFNamesAndMetadataMessages
          (FStatsReadStream *this,FArchive *param_1,
          TArray<FStatMessage,TSizedDefaultAllocator<64>_> *param_2)

{
  long64 *plVar1;
  ulong64 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FStatNameAndInfo FVar10;
  longlong lVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  long64 *plVar17;
  uint local_res8;
  uint local_res10;
  FNameEntryId local_res20;
  ulong64 local_d8;
  ulong64 local_d0;
  ulong64 local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  FString local_b0;
  undefined4 local_a0;
  uint uStack_9c;
  uint uStack_94;
  undefined4 local_90;
  uint uStack_8c;
  TPairInitializer<int_const_&,FNameEntryId_&&> local_88;
  undefined4 *local_78;
  undefined1 *local_70;
  FName local_68;
  FName local_60;
  
  (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,(this->Header).FNameTableOffset);
  uVar2 = (this->Header).NumFNames;
  if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar2);
  }
  plVar1 = &param_2->ArrayMax;
  if (*plVar1 < (longlong)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&param_2->AllocatorInstance,param_2->ArrayNum,plVar1);
  }
  uVar16 = 0;
  uVar15 = uVar16;
  if ((this->Header).NumFNames != 0) {
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      local_res10 = 0;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&stack0x00000010,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&stack0x00000010);
        }
      }
      else {
        local_res10 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      local_res8 = 0;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&stack0x00000008,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&stack0x00000008);
        }
      }
      else {
        local_res8 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      if ((local_res8 & 0x400000) == 0) {
        if (*(int *)&(this->FNamesIndexMap).field_0x8 != *(int *)&(this->FNamesIndexMap).field_0x34)
        {
          puVar4 = *(undefined1 **)&(this->FNamesIndexMap).field_0x40;
          puVar14 = &(this->FNamesIndexMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar14 = puVar4;
          }
          iVar8 = *(int *)(puVar14 +
                          (ulonglong)(*(int *)&(this->FNamesIndexMap).field_0x48 - 1U & local_res10)
                          * 4);
          if (iVar8 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this->FNamesIndexMap + (longlong)iVar8 * 0x10) ==
                  local_res10) {
                TMapBase<int,FNameEntryId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>_>
                ::FindChecked((TMapBase<int,FNameEntryId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>_>
                               *)&this->FNamesIndexMap,local_res10);
                goto LAB_141a1330f;
              }
              iVar8 = *(int *)(*(longlong *)&this->FNamesIndexMap + 8 + (longlong)iVar8 * 0x10);
            } while (iVar8 != -1);
          }
        }
        ::FName::FName(&local_60,L"Unknown FName");
        local_res8 = 0;
        if (2 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_class_FStatNameAndInfo___cdecl_FStatsReadStream::ReadFName(FArchive&___ptr64,bool)___ptr64'
                      ::__l16::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
      }
      else {
        local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.Data.ArrayNum = 0;
        local_b0.Data.ArrayMax = 0;
        ::operator<<(param_1,&local_b0);
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_b0.Data.ArrayNum != 0) {
          FVar13.Data = local_b0.Data.AllocatorInstance.Data;
        }
        pFVar9 = ::FName::FName(&local_68,(wchar_t *)FVar13.Data);
        local_res20 = (*pFVar9).ComparisonIndex;
        local_78 = &stack0x00000010;
        local_70 = (undefined1 *)&stack0x00000020;
        TSet<TTuple<int,FNameEntryId>,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,FNameEntryId_&&>_>
                  ((TSet<TTuple<int,FNameEntryId>,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>,FDefaultSetAllocator>
                    *)&this->FNamesIndexMap,&local_88,(bool *)&local_78);
        local_res8 = local_res8 & 0xffbfffff;
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
LAB_141a1330f:
      uVar15 = uVar15 + 1;
    } while (uVar15 < (this->Header).NumFNames);
  }
  plVar17 = &param_2->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,(this->Header).MetadataMessagesOffset);
  uVar2 = (this->Header).NumMetadataMessages;
  if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar2);
  }
  if (*plVar1 < (longlong)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&param_2->AllocatorInstance,*plVar17,plVar1);
  }
  if ((this->Header).NumMetadataMessages != 0) {
    do {
      FVar10 = ReadFName(this,(FArchive *)&stack0xffffffffffffffa8,SUB81(param_1,0));
      uStack_b8 = *(ulonglong *)FVar10;
      uVar12 = (uint)((longlong)uStack_b8 >> 0x29) & 7;
      local_c0 = 0;
      if (uVar12 == 2) {
        plVar3 = *(longlong **)&param_1->field_0x8;
        local_c8 = 0;
        if ((ulonglong *)plVar3[1] < (ulonglong *)*plVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c8,8);
            local_c0 = local_c8;
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_c8);
            local_c0 = local_c8;
          }
        }
        else {
          local_c8 = *(ulonglong *)*plVar3;
          *plVar3 = *plVar3 + 8;
          local_c0 = local_c8;
        }
      }
      else if (uVar12 == 3) {
        plVar3 = *(longlong **)&param_1->field_0x8;
        local_d0 = 0;
        if ((ulonglong *)plVar3[1] < (ulonglong *)*plVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_d0,8);
            local_c0 = local_d0;
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_d0);
            local_c0 = local_d0;
          }
        }
        else {
          local_d0 = *(ulonglong *)*plVar3;
          *plVar3 = *plVar3 + 8;
          local_c0 = local_d0;
        }
      }
      else if (uVar12 == 4) {
        ReadFName(this,(FArchive *)&stack0xffffffffffffff60,SUB81(param_1,0));
        uStack_94 = uStack_9c & 0x1ff;
        local_90 = local_a0;
        uStack_8c = uStack_9c & 0x1ff;
        local_c0 = CONCAT44(uStack_9c,local_a0) & 0x1ffffffffff;
      }
      else if (uVar12 == 5) {
        plVar3 = *(longlong **)&param_1->field_0x8;
        local_d8 = 0;
        if ((ulonglong *)plVar3[1] < (ulonglong *)*plVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_d8,8);
            local_c0 = local_d8;
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_d8);
            local_c0 = local_d8;
          }
        }
        else {
          local_d8 = *(ulonglong *)*plVar3;
          *plVar3 = *plVar3 + 8;
          local_c0 = local_d8;
        }
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 < pFVar5 + param_2->ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar11 = *plVar17;
      if (lVar11 == param_2->ArrayMax) {
        lVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,plVar1);
        *plVar17 = lVar11;
      }
      uVar16 = uVar16 + 1;
      *plVar17 = lVar11 + 1;
      pFVar5 = (param_2->AllocatorInstance).Data + lVar11 * 0x10;
      *(ulonglong *)pFVar5 = local_c0;
      *(ulonglong *)(pFVar5 + 8) = uStack_b8;
    } while (uVar16 < (this->Header).NumMetadataMessages);
  }
  return;
}

// ReadStatPacket @ 141a14270

void __thiscall
FStatsReadStream::ReadStatPacket(FStatsReadStream *this,FArchive *param_1,FStatPacket *param_2)

{
  uint *puVar1;
  long64 *plVar2;
  uint *puVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong *puVar6;
  FStatNameAndInfo FVar7;
  ulonglong uVar8;
  int iVar9;
  uint local_res10;
  Type local_res18;
  ulonglong local_res20;
  undefined1 local_68 [20];
  uint uStack_54;
  
  plVar2 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    param_2->Frame = *plVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->ThreadId;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  iVar9 = 0;
  local_res18 = Invalid;
  if ((Type *)plVar4[1] < (Type *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&stack0x00000018,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&stack0x00000018);
    }
  }
  else {
    local_res18 = *(Type *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  param_2->ThreadType = local_res18;
  ::operator<<(param_1,&param_2->bBrokenCallstacks);
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res10 = 0;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&stack0x00000010,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&stack0x00000010);
    }
  }
  else {
    local_res10 = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  uVar5 = (int)(local_res10 + 0xfff + ((int)(local_res10 + 0xfff) >> 0x1f & 0xfffU)) >> 0xc;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if ((param_2->StatMessages).Chunks.Array.ArrayMax < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)&param_2->StatMessages,
               (param_2->StatMessages).Chunks.Array.ArrayNum,
               &(param_2->StatMessages).Chunks.Array.ArrayMax);
  }
  if (0 < (int)local_res10) {
    do {
      puVar6 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                         (0x10,&param_2->StatMessages);
      if (puVar6 != (ulonglong *)0x0) {
        FVar7 = ReadFName(this,(FArchive *)&stack0xffffffffffffffb0,SUB81(param_1,0));
        uVar8 = *(ulonglong *)FVar7;
        puVar6[1] = uVar8;
        uVar5 = (uint)((longlong)uVar8 >> 0x29) & 7;
        *puVar6 = 0;
        if (uVar5 == 2) {
LAB_141a14479:
          plVar4 = *(longlong **)&param_1->field_0x8;
          local_res20 = 0;
          if ((ulonglong *)plVar4[1] < (ulonglong *)*plVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&stack0x00000020,8);
              uVar8 = local_res20;
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&stack0x00000020);
              uVar8 = local_res20;
            }
          }
          else {
            local_res20 = *(ulonglong *)*plVar4;
            *plVar4 = *plVar4 + 8;
            uVar8 = local_res20;
          }
LAB_141a1456a:
          *puVar6 = uVar8;
        }
        else if (uVar5 == 3) {
          plVar4 = *(longlong **)&param_1->field_0x8;
          local_res20 = 0;
          if ((ulonglong *)plVar4[1] < (ulonglong *)*plVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&stack0x00000020,8);
              *puVar6 = local_res20;
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&stack0x00000020);
              *puVar6 = local_res20;
            }
          }
          else {
            local_res20 = *(ulonglong *)*plVar4;
            *plVar4 = *plVar4 + 8;
            *puVar6 = local_res20;
          }
        }
        else {
          if (uVar5 == 4) {
            ReadFName(this,(FArchive *)local_68,SUB81(param_1,0));
            local_68._12_4_ = local_68._4_4_ & 0x1ff;
            local_68._16_4_ = local_68._0_4_;
            uStack_54 = local_68._4_4_ & 0x1ff;
            uVar8 = CONCAT44(local_68._4_4_,local_68._0_4_) & 0x1ffffffffff;
            goto LAB_141a1456a;
          }
          if (uVar5 == 5) goto LAB_141a14479;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)local_res10);
  }
  return;
}

