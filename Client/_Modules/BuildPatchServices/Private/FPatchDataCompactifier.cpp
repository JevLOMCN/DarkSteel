// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 8

// FPatchDataCompactifier @ 143224bf0

FPatchDataCompactifier * __thiscall
BuildPatchServices::FPatchDataCompactifier::FPatchDataCompactifier
          (FPatchDataCompactifier *this,FCompactifyConfiguration *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  int iVar6;
  FNumberFormattingOptions *pFVar7;
  IFileSystem *pIVar8;
  IFileSystem IVar9;
  FNumberFormattingOptions local_28;
  
  this->_padding_ = (longlong)&___7FPatchDataCompactifier_BuildPatchServices__6B_;
  ::FString::FString(&(this->Configuration).CloudDirectory,&param_1->CloudDirectory);
  (this->Configuration).DataAgeThreshold = param_1->DataAgeThreshold;
  ::FString::FString(&(this->Configuration).DeletedChunkLogFile,&param_1->DeletedChunkLogFile);
  (this->Configuration).bRunPreview = param_1->bRunPreview;
  pFVar7 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar7->MaximumFractionalDigits = 3;
  pFVar7->MinimumFractionalDigits = 3;
  bVar1 = pFVar7->UseGrouping;
  bVar2 = pFVar7->IndicateNearlyInteger;
  uVar3 = pFVar7->field_0x3;
  EVar4 = pFVar7->RoundingMode;
  iVar5 = pFVar7->MinimumIntegralDigits;
  iVar6 = pFVar7->MaximumIntegralDigits;
  (this->SizeFormattingOptions).AlwaysSign = pFVar7->AlwaysSign;
  (this->SizeFormattingOptions).UseGrouping = bVar1;
  (this->SizeFormattingOptions).IndicateNearlyInteger = bVar2;
  (this->SizeFormattingOptions).field_0x3 = uVar3;
  (this->SizeFormattingOptions).RoundingMode = EVar4;
  (this->SizeFormattingOptions).MinimumIntegralDigits = iVar5;
  (this->SizeFormattingOptions).MaximumIntegralDigits = iVar6;
  iVar5 = pFVar7->MaximumFractionalDigits;
  (this->SizeFormattingOptions).MinimumFractionalDigits = pFVar7->MinimumFractionalDigits;
  (this->SizeFormattingOptions).MaximumFractionalDigits = iVar5;
  pIVar8 = ::operator_new(0x18);
  if (pIVar8 != (IFileSystem *)0x0) {
    *pIVar8 = (IFileSystem)&___7FFileSystem_BuildPatchServices__6B_;
    IVar9 = (IFileSystem)IFileManager::Get();
    pIVar8[1] = IVar9;
    IVar9 = (IFileSystem)IPlatformFile::GetPlatformPhysical();
    pIVar8[2] = IVar9;
    (this->FileSystem).Ptr = pIVar8;
    return this;
  }
  (this->FileSystem).Ptr = (IFileSystem *)0x0;
  return this;
}

// ~FPatchDataCompactifier @ 143228c20

void __thiscall
BuildPatchServices::FPatchDataCompactifier::~FPatchDataCompactifier(FPatchDataCompactifier *this)

{
  IFileSystem *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FPatchDataCompactifier_BuildPatchServices__6B_;
  pIVar1 = (this->FileSystem).Ptr;
  if (pIVar1 != (IFileSystem *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->Configuration).DeletedChunkLogFile.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Configuration).CloudDirectory.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IPatchDataCompactifier_BuildPatchServices__6B_;
  return;
}

// operator() @ 14322d6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FManifestResult * __thiscall
`BuildPatchServices::FPatchDataCompactifier::Run'::__l70::<lambda_2>::operator()
          (void *this,FManifestResult *__return_storage_ptr__)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  uint *puVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  ForElementType<FSetElementId> FVar6;
  FString *pFVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  IFileManager *pIVar17;
  IPlatformFile *pIVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  ulonglong uVar24;
  wchar_t *pwVar25;
  FString *pFVar26;
  longlong lVar27;
  uint uVar28;
  ForElementType<unsigned_int> FVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined1 auStackY_1c8 [32];
  undefined1 local_187 [7];
  long64 local_180;
  FString *local_178;
  undefined8 local_170;
  uint local_168;
  FString local_160;
  ForAnyElementType local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  undefined1 local_130;
  uint local_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined4 local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  FString *local_108;
  longlong local_100;
  longlong *local_f8;
  FManifestResult *local_f0;
  FString *local_e0;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  FSparseArrayAllocationInfo local_b0;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  undefined4 local_60 [2];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  cVar10 = true;
  local_98.FirstFreeIndex = -1;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.AllocationFlags.NumBits = 0;
  local_98.AllocationFlags.MaxBits = 0x80;
  local_98.NumFreeIndices = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_180 = 0;
  if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
    pwVar25 = L"";
  }
  else {
    pwVar25 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
  }
  local_f0 = __return_storage_ptr__;
  cVar8 = (**(code **)(**(longlong **)(*(longlong *)this + 0x50) + 0x18))
                    (*(longlong **)(*(longlong *)this + 0x50),pwVar25);
  cVar9 = (**(code **)(**(longlong **)(*(longlong *)this + 0x50) + 0x80))();
  if (cVar8 == '\0') {
    if (cVar9 == '\0') {
      if (4 < (byte)LogDataCompactifier._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
      }
    }
    else if (2 < (byte)LogDataCompactifier._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
    }
    local_180 = 0;
  }
  else {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148 = 0;
    local_140 = (void *)0x0;
    local_138 = 0;
    local_130 = 0;
    if (&local_150 != pFVar2) {
      uVar13 = *(uint *)&pFVar2[1].Data;
      pFVar3 = pFVar2->Data;
      local_148 = (ulonglong)uVar13;
      if (uVar13 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar13,0,&local_150,uVar13,(int *)((longlong)&local_148 + 4));
        memcpy(local_150.Data,pFVar3,(longlong)(int)uVar13 * 2);
      }
    }
    plVar15 = ::operator_new(0x48);
    FVar22.Data = local_150.Data;
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
      local_f8 = (longlong *)0x0;
    }
    else {
      pFVar26 = (FString *)(plVar15 + 1);
      (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *plVar15 = (longlong)&___7FPatchDataEnumeration_BuildPatchServices__6B_;
      lVar27 = (longlong)(int)local_148;
      *(int *)(plVar15 + 2) = (int)local_148;
      local_f8 = plVar15;
      if ((int)local_148 == 0) {
        *(int *)((longlong)plVar15 + 0x14) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_148,0,(ForAnyElementType *)pFVar26,(int)local_148,
                   (int *)((longlong)plVar15 + 0x14));
        memcpy((pFVar26->Data).AllocatorInstance.Data,FVar22.Data,lVar27 * 2);
      }
      pvVar5 = local_140;
      pFVar2 = (ForAnyElementType *)(plVar15 + 3);
      pFVar2->Data = (FScriptContainerElement *)0x0;
      lVar27 = (longlong)(int)local_138;
      *(int *)(plVar15 + 4) = (int)local_138;
      if ((int)local_138 == 0) {
        *(int *)((longlong)plVar15 + 0x24) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_138,0,pFVar2,(int)local_138,(int *)((longlong)plVar15 + 0x24));
        memcpy(pFVar2->Data,pvVar5,lVar27 * 2);
      }
      *(undefined1 *)(plVar15 + 5) = local_130;
      FPaths::GetPath((FString *)(plVar15 + 6),pFVar26);
      puVar16 = ::operator_new(0x18);
      if (puVar16 == (undefined8 *)0x0) {
        plVar15[8] = 0;
        __return_storage_ptr__ = local_f0;
      }
      else {
        *puVar16 = &___7FFileSystem_BuildPatchServices__6B_;
        pIVar17 = IFileManager::Get();
        puVar16[1] = pIVar17;
        pIVar18 = IPlatformFile::GetPlatformPhysical();
        puVar16[2] = pIVar18;
        plVar15[8] = (longlong)puVar16;
        __return_storage_ptr__ = local_f0;
      }
    }
    local_178 = (FString *)0x0;
    local_170 = 0;
    cVar10 = (**(code **)(*plVar15 + 8))(plVar15,&local_178);
    if (cVar10 != '\0') {
      local_100 = *(longlong *)this;
      uVar19 = (ulonglong)(int)(uint)local_170;
      local_e0 = local_178 + uVar19;
      local_168 = (uint)local_170;
      pFVar26 = local_178;
      while( true ) {
        pFVar7 = local_e0;
        puVar16 = (undefined8 *)0x0;
        local_108 = pFVar26;
        if ((uint)local_170 != (int)uVar19) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_187);
        }
        plVar15 = local_f8;
        __return_storage_ptr__ = local_f0;
        if (pFVar26 == pFVar7) break;
        ::operator/(&local_160,(FString *)(local_100 + 8),pFVar26);
        if (local_98.NumFreeIndices == 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,1,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
                              &local_98.Data.ArrayMax);
          iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             (&local_98.AllocationFlags,1);
          FVar29 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
          if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar29 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar21 = (byte)iVar12 & 0x1f;
          if (iVar12 < 0) {
            iVar12 = iVar12 + 0x1f;
            bVar21 = bVar21 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar29 + (longlong)(iVar12 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar21 & 0x1f));
          iVar12 = local_98.FirstFreeIndex;
        }
        else {
          local_98.NumFreeIndices = local_98.NumFreeIndices + -1;
          iVar12 = *(int *)(local_98.Data.AllocatorInstance.Data +
                           (longlong)local_98.FirstFreeIndex * 0x18 + 4);
          iVar11 = local_98.FirstFreeIndex;
          if (local_98.NumFreeIndices != 0) {
            *(undefined4 *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar12 * 0x18) =
                 0xffffffff;
          }
        }
        local_98.FirstFreeIndex = iVar12;
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_98,&local_b0,iVar11);
        iVar11 = local_b0.Index;
        if (local_b0.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_b0.Pointer = 0;
          *(FScriptContainerElement **)local_b0.Pointer = local_160.Data.AllocatorInstance.Data;
          local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)((longlong)local_b0.Pointer + 8) = local_160.Data.ArrayNum;
          *(int *)((longlong)local_b0.Pointer + 0xc) = local_160.Data.ArrayMax;
          local_160.Data.ArrayNum = 0;
          local_160.Data.ArrayMax = 0;
          *(undefined4 *)((longlong)local_b0.Pointer + 0x10) = 0xffffffff;
          puVar16 = local_b0.Pointer;
        }
        iVar12 = *(int *)(puVar16 + 1) + -1;
        if (*(int *)(puVar16 + 1) == 0) {
          pwVar25 = L"";
          iVar12 = 0;
        }
        else {
          pwVar25 = (wchar_t *)*puVar16;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar25);
        if ((local_98.Data.ArrayNum - local_98.NumFreeIndices != 1) &&
           (local_98.Data.ArrayNum != local_98.NumFreeIndices)) {
          FVar22.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar22.Data = local_58.Data;
          }
          iVar12 = *(int *)((longlong)FVar22.Data + (ulonglong)(local_50 - 1 & uVar13) * 4);
          FVar22.Data = local_98.Data.AllocatorInstance.Data;
          while (iVar12 != -1) {
            lVar27 = (longlong)iVar12 * 0x18;
            iVar14 = *(int *)(FVar22.Data + lVar27 + 8);
            if (iVar14 == *(int *)(puVar16 + 1)) {
              if (1 < iVar14) {
                iVar14 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(FVar22.Data + lVar27),(wchar_t *)*puVar16);
                bVar31 = iVar14 == 0;
                FVar22.Data = local_98.Data.AllocatorInstance.Data;
                goto LAB_14322db7b;
              }
LAB_14322db8d:
              if (iVar12 != -1) {
                if (*(void **)(FVar22.Data + (longlong)iVar12 * 0x18) != (void *)0x0) {
                  FMemory::Free(*(void **)(FVar22.Data + (longlong)iVar12 * 0x18));
                }
                memmove(FVar22.Data + (longlong)iVar12 * 0x18,puVar16,0x10);
                TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized(&local_98,iVar11,1);
                iVar11 = iVar12;
              }
              if (iVar12 != -1) goto LAB_14322de29;
              break;
            }
            bVar31 = iVar14 + *(int *)(puVar16 + 1) == 1;
LAB_14322db7b:
            if (bVar31) goto LAB_14322db8d;
            iVar12 = *(int *)(FVar22.Data + lVar27 + 0x10);
          }
        }
        uVar19 = 0;
        uVar28 = 1;
        uVar23 = local_98.Data.ArrayNum - local_98.NumFreeIndices;
        if (3 < uVar23) {
          uVar24 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
          lVar27 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          uVar28 = 1 << ((byte)lVar27 & 0x1f);
        }
        if (((int)uVar23 < 1) || ((int)uVar28 <= (int)local_50)) {
          uVar13 = local_50 - 1 & uVar13;
          *(uint *)((longlong)puVar16 + 0x14) = uVar13;
          FVar22.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar22.Data = local_58.Data;
          }
          uVar19 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
          *(undefined4 *)(puVar16 + 2) = *(undefined4 *)((longlong)FVar22.Data + uVar19 * 4);
          *(int *)((longlong)FVar22.Data + uVar19 * 4) = iVar11;
        }
        else {
          local_50 = uVar28;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
          }
          if (uVar28 != 0) {
            uVar13 = uVar28;
            if (uVar28 < 2) {
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar13 = 0;
                goto LAB_14322dc4c;
              }
            }
            else {
LAB_14322dc4c:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_58,0,uVar13,4);
            }
            if (0 < (int)uVar28) {
              uVar30 = (ulonglong)uVar28;
              uVar24 = uVar19;
              do {
                FVar22.Data = (FScriptContainerElement *)local_60;
                if ((ForElementType<FSetElementId>)local_58.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar22.Data = local_58.Data;
                }
                uVar20 = uVar24 & (longlong)(int)uVar28 - 1U;
                uVar24 = uVar24 + 1;
                *(undefined4 *)((longlong)FVar22.Data + uVar20 * 4) = 0xffffffff;
                uVar30 = uVar30 - 1;
              } while (uVar30 != 0);
            }
          }
          if (local_50 != 0) {
            pTStack_120 = &local_98.AllocationFlags;
            local_128 = 0;
            uStack_124 = 1;
            uStack_114 = 0;
            uStack_110 = 0;
            if (local_98.AllocationFlags.NumBits != 0) {
              FVar29 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
              if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar29 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar13 = *(uint *)FVar29;
              uVar24 = uVar19;
              while (uVar13 == 0) {
                uStack_110 = (int)uVar24 + 0x20;
                uVar24 = (ulonglong)uStack_110;
                iVar11 = (int)uVar19;
                local_128 = iVar11 + 1;
                uVar19 = (ulonglong)local_128;
                if ((int)(((int)(local_98.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU) +
                         (local_98.AllocationFlags.NumBits - 1U)) >> 5 < (int)local_128)
                goto LAB_14322dd49;
                uVar13 = *(uint *)((uchar *)((longlong)FVar29 + 4) + (longlong)iVar11 * 4);
              }
              uStack_124 = -uVar13 & uVar13;
              uVar19 = (ulonglong)uStack_124 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              uStack_114 = (int)uVar24 + -1 + (int)lVar27;
              uVar19 = (ulonglong)uStack_114;
              if (local_98.AllocationFlags.NumBits < (int)uStack_114) {
LAB_14322dd49:
                uVar19 = local_98.AllocationFlags._24_8_ & 0xffffffff;
                uStack_114 = local_98.AllocationFlags.NumBits;
              }
            }
            local_118 = 0xffffffff;
            local_d8 = &local_98;
            local_d0._padding_ = CONCAT44(uStack_124,local_128);
            local_d0.CurrentBitIndex = uStack_114;
            local_d0.UnvisitedBitMask = 0xffffffff;
            local_d0._28_4_ = uStack_10c;
            local_d0.BaseBitIndex = uStack_110;
            local_d0.Array = pTStack_120;
            if ((int)uVar19 < local_98.AllocationFlags.NumBits) {
              do {
                iVar12 = (int)uVar19;
                pFVar4 = (local_d8->Data).AllocatorInstance.Data;
                pFVar3 = pFVar4 + (longlong)iVar12 * 0x18;
                iVar11 = *(int *)(pFVar4 + (longlong)iVar12 * 0x18 + 8);
                if (iVar11 == 0) {
                  pwVar25 = L"";
                  iVar11 = 0;
                }
                else {
                  pwVar25 = *(wchar_t **)pFVar3;
                  iVar11 = iVar11 + -1;
                }
                uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar25);
                uVar13 = local_50 - 1 & uVar13;
                *(uint *)(pFVar3 + 0x14) = uVar13;
                FVar22.Data = (FScriptContainerElement *)local_60;
                if ((ForElementType<FSetElementId>)local_58.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar22.Data = local_58.Data;
                }
                uVar19 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
                *(undefined4 *)(pFVar3 + 0x10) = *(undefined4 *)((longlong)FVar22.Data + uVar19 * 4)
                ;
                *(int *)((longlong)FVar22.Data + uVar19 * 4) = iVar12;
                local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
                uVar19 = (ulonglong)(uint)local_d0.CurrentBitIndex;
              } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
            }
          }
        }
LAB_14322de29:
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        pFVar26 = local_108 + 1;
        uVar19 = (ulonglong)local_168;
      }
    }
    DestructItems<FString,int>(local_178,(uint)local_170);
    if (local_178 != (FString *)0x0) {
      FMemory::Free(local_178);
    }
    (**(code **)*plVar15)(plVar15);
    if (local_140 != (void *)0x0) {
      FMemory::Free(local_140);
    }
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
  }
  this_00 = &__return_storage_ptr__->References;
  __return_storage_ptr__->FileSize = local_180;
  __return_storage_ptr__->bSuccess = (bool)cVar10;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->References).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->References).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->References).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->References).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->References).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->References).Elements.field_0x34 = 0;
  (__return_storage_ptr__->References).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->References).HashSize = 0;
  if (this_00 != (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&local_98) {
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_00->Elements,0,0);
    if (*(void **)&this_00->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->Elements);
    }
    *(FScriptContainerElement **)&this_00->Elements = local_98.Data.AllocatorInstance.Data;
    *(int *)&(__return_storage_ptr__->References).Elements.field_0x8 = local_98.Data.ArrayNum;
    *(int *)&(__return_storage_ptr__->References).Elements.field_0xc = local_98.Data.ArrayMax;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    if ((TBitArray<FDefaultBitArrayAllocator> *)
        &(__return_storage_ptr__->References).Elements.field_0x10 != &local_98.AllocationFlags) {
      if (local_98.AllocationFlags.AllocatorInstance.SecondaryData ==
          (ForElementType<unsigned_int>)0x0) {
        (__return_storage_ptr__->References).Elements.field_0x10 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[0];
        (__return_storage_ptr__->References).Elements.field_0x11 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[1];
        (__return_storage_ptr__->References).Elements.field_0x12 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[2];
        (__return_storage_ptr__->References).Elements.field_0x13 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[3];
        (__return_storage_ptr__->References).Elements.field_0x14 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[4];
        (__return_storage_ptr__->References).Elements.field_0x15 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[5];
        (__return_storage_ptr__->References).Elements.field_0x16 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[6];
        (__return_storage_ptr__->References).Elements.field_0x17 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[7];
        (__return_storage_ptr__->References).Elements.field_0x18 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[8];
        (__return_storage_ptr__->References).Elements.field_0x19 =
             local_98.AllocationFlags.AllocatorInstance.InlineData[9];
        (__return_storage_ptr__->References).Elements.field_0x1a =
             local_98.AllocationFlags.AllocatorInstance.InlineData[10];
        (__return_storage_ptr__->References).Elements.field_0x1b =
             local_98.AllocationFlags.AllocatorInstance.InlineData[0xb];
        (__return_storage_ptr__->References).Elements.field_0x1c =
             local_98.AllocationFlags.AllocatorInstance.InlineData[0xc];
        (__return_storage_ptr__->References).Elements.field_0x1d =
             local_98.AllocationFlags.AllocatorInstance.InlineData[0xd];
        (__return_storage_ptr__->References).Elements.field_0x1e =
             local_98.AllocationFlags.AllocatorInstance.InlineData[0xe];
        (__return_storage_ptr__->References).Elements.field_0x1f =
             local_98.AllocationFlags.AllocatorInstance.InlineData[0xf];
      }
      pvVar5 = *(void **)&(__return_storage_ptr__->References).Elements.field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(ForElementType<unsigned_int> *)&(__return_storage_ptr__->References).Elements.field_0x20 =
           local_98.AllocationFlags.AllocatorInstance.SecondaryData;
      *(int *)&(__return_storage_ptr__->References).Elements.field_0x28 =
           local_98.AllocationFlags.NumBits;
      *(int *)&(__return_storage_ptr__->References).Elements.field_0x2c =
           local_98.AllocationFlags.MaxBits;
      local_98.AllocationFlags.NumBits = 0;
      local_98.AllocationFlags.MaxBits = 0;
      local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    }
    *(int *)&(__return_storage_ptr__->References).Elements.field_0x30 = local_98.FirstFreeIndex;
    *(int *)&(__return_storage_ptr__->References).Elements.field_0x34 = local_98.NumFreeIndices;
    local_98.NumFreeIndices = 0;
    local_98.FirstFreeIndex = -1;
  }
  if ((ForElementType<FSetElementId>)local_58.Data == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(__return_storage_ptr__->References).Hash.InlineData = local_60[0];
  }
  FVar6 = (__return_storage_ptr__->References).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  (__return_storage_ptr__->References).Hash.SecondaryData =
       (ForElementType<FSetElementId>)local_58.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->References).HashSize = local_50;
  local_50 = 0;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&local_98,0,local_98.Data.ArrayNum);
  bVar31 = local_98.Data.ArrayMax != 0;
  local_98.Data._8_8_ = (ulonglong)(uint)local_98.Data.ArrayMax << 0x20;
  if (bVar31) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&local_98,0,&local_98.Data.ArrayMax);
  }
  iVar11 = local_98.AllocationFlags.MaxBits;
  local_98.NumFreeIndices = 0;
  local_98.AllocationFlags._24_8_ = (ulonglong)(uint)local_98.AllocationFlags.MaxBits << 0x20;
  local_98.FirstFreeIndex = -1;
  if (0x80 < (uint)iVar11) {
    local_98.AllocationFlags.NumBits = 0;
    local_98.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98.AllocationFlags,0);
  }
  if (local_98.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_98.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14322e1b0

/* WARNING: Enum "Type": Some values do not have unique names */

FDataFileResult * __thiscall
`BuildPatchServices::FPatchDataCompactifier::Run'::__l120::<lambda_3>::operator()
          (void *this,FDataFileResult *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  bool bVar10;
  wchar_t *pwVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  long64 local_res8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res10;
  
  pwVar11 = L"";
  local_res8 = 0;
  bVar12 = false;
  bVar10 = false;
  bVar13 = false;
  if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
  }
  cVar4 = (**(code **)(**(longlong **)(*(longlong *)this + 0x50) + 0x18))
                    (*(longlong **)(*(longlong *)this + 0x50),pwVar9,&local_res8);
  if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
  }
  cVar5 = (**(code **)(**(longlong **)(*(longlong *)this + 0x50) + 0x80))
                    (*(longlong **)(*(longlong *)this + 0x50),pwVar9);
  if (cVar4 == '\0') {
    if (cVar5 == '\0') {
      if (4 < (byte)LogDataCompactifier._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
      }
    }
    else if (2 < (byte)LogDataCompactifier._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
    }
    bVar14 = false;
    local_res8 = 0;
    bVar13 = false;
  }
  else {
    local_res10 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                   ((longlong)this + 0x10);
    pFVar2 = *(FString **)((longlong)this + 8);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar9 = L"";
      iVar8 = 0;
    }
    else {
      pwVar9 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
    iVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (local_res10,uVar7,pFVar2);
    bVar14 = iVar8 != -1;
    if (!bVar14) {
      local_res10 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
      if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
      }
      cVar4 = (**(code **)(**(longlong **)(*(longlong *)this + 0x50) + 0x28))
                        (*(longlong **)(*(longlong *)this + 0x50),pwVar9,&local_res10);
      if ((cVar4 != '\0') && ((longlong)local_res10 < **(longlong **)((longlong)this + 0x18))) {
        bVar12 = true;
      }
      pFVar2 = *(FString **)((longlong)this + 8);
      bVar6 = ::FString::EndsWith(pFVar2,L".chunk",6,IgnoreCase);
      if (((bVar6) || (bVar6 = ::FString::EndsWith(pFVar2,L".delta",6,IgnoreCase), bVar6)) ||
         (bVar6 = ::FString::EndsWith(pFVar2,L".file",5,IgnoreCase), bVar6)) {
        bVar10 = true;
      }
      if ((bVar12 != false) && (bVar10 != false)) {
        bVar13 = true;
        if (*(char *)(*(longlong *)this + 0x30) == '\0') {
          plVar3 = *(longlong **)(*(longlong *)this + 0x50);
          if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) != 0) {
            pwVar11 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
          }
          (**(code **)(*plVar3 + 0x68))(plVar3,pwVar11);
        }
      }
    }
  }
  __return_storage_ptr__->bIsReferenced = bVar14;
  __return_storage_ptr__->bIsOldEnough = bVar12;
  __return_storage_ptr__->bIsRecognisedFileType = bVar10;
  __return_storage_ptr__->bShouldDelete = bVar13;
  __return_storage_ptr__->FileSize = local_res8;
  return __return_storage_ptr__;
}

// BuildSizeString @ 143242060

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FPatchDataCompactifier::BuildSizeString
          (FPatchDataCompactifier *this,FString *__return_storage_ptr__,ulong64 param_1)

{
  FText *pFVar1;
  TSharedPtr<FCulture,1> local_68;
  TSharedPtr<FCulture,1> local_58;
  TSharedPtr<FCulture,1> local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::AsMemory(&local_18,param_1,&this->SizeFormattingOptions,&local_48,IEC);
  FText::ToString(pFVar1);
  local_58.Object = (FCulture *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::AsMemory(&local_28,param_1,&this->SizeFormattingOptions,&local_58,SI);
  FText::ToString(pFVar1);
  local_68.Object = (FCulture *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::AsNumber(&local_38,param_1,(FNumberFormattingOptions *)0x0,&local_68);
  FText::ToString(pFVar1);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s bytes (%s, %s)");
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// DeleteFile @ 1432491e0

void __thiscall
BuildPatchServices::FPatchDataCompactifier::DeleteFile
          (FPatchDataCompactifier *this,FString *param_1)

{
  IFileSystem *pIVar1;
  
  if ((this->Configuration).bRunPreview != false) {
    return;
  }
  pIVar1 = (this->FileSystem).Ptr;
  if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432491f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,(param_1->Data).AllocatorInstance.Data);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143249201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,L"");
  return;
}

// IsPatchData @ 143258d10

bool __thiscall
BuildPatchServices::FPatchDataCompactifier::IsPatchData
          (FPatchDataCompactifier *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = ::FString::EndsWith(param_1,L".chunk",6,IgnoreCase);
  if (!bVar1) {
    bVar1 = ::FString::EndsWith(param_1,L".delta",6,IgnoreCase);
    if (!bVar1) {
      bVar1 = ::FString::EndsWith(param_1,L".file",5,IgnoreCase);
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// Run @ 143263c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall BuildPatchServices::FPatchDataCompactifier::Run(FPatchDataCompactifier *this)

{
  IFileSystem *pIVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FPatchDataCompactifier *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 *puVar11;
  FDateTime FVar12;
  TFuture<BuildPatchServices::FDataFileResult> *pTVar13;
  ulonglong uVar14;
  size_t sVar15;
  longlong lVar16;
  longlong *plVar17;
  TFuture<BuildPatchServices::FManifestResult> *pTVar18;
  int iVar19;
  uint uVar20;
  FString *this_00;
  TFuture<BuildPatchServices::FDataFileResult> *pTVar21;
  FString *pFVar22;
  FString *this_01;
  wchar_t *pwVar23;
  uint uVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  longlong *plVar28;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auStackY_3f8 [32];
  bool local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6 [2];
  int local_3a4;
  uint local_3a0;
  ForAnyElementType local_398;
  int local_390;
  int local_38c;
  ForAnyElementType local_388;
  undefined8 local_380;
  FString *local_378;
  undefined8 local_370;
  int local_368;
  int local_364;
  int local_360;
  ulong64 local_358;
  TFuture<BuildPatchServices::FDataFileResult> *local_350;
  longlong *local_348;
  FPatchDataCompactifier *local_340;
  ulong64 local_338;
  ulong64 local_330;
  ulong64 local_328;
  undefined8 *local_320;
  LARGE_INTEGER local_318;
  LARGE_INTEGER local_310;
  LARGE_INTEGER local_308;
  FDateTime local_300;
  FString local_2f8;
  <lambda_2> local_2e8;
  <lambda_3> local_2d8;
  undefined8 local_2b8;
  FString local_2b0;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  TUniqueFunction<void___cdecl(void)> local_238;
  TUniqueFunction<void___cdecl(void)> local_208;
  _RTL_CRITICAL_SECTION local_1d8;
  LARGE_INTEGER local_1b0;
  ulonglong local_1a8;
  char local_1a0;
  char cStack_19f;
  char local_198;
  longlong local_190;
  undefined1 local_188 [32];
  void *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  ForElementType<FSetElementId> local_148;
  int local_140;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_138;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  plVar17 = (longlong *)0x0;
  local_3a8 = true;
  local_348 = (longlong *)0x0;
  local_340 = this;
  if (1 < (this->Configuration).DeletedChunkLogFile.Data.ArrayNum) {
    pIVar1 = (this->FileSystem).Ptr;
    if ((this->Configuration).DeletedChunkLogFile.Data.ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(this->Configuration).DeletedChunkLogFile.Data.AllocatorInstance.Data;
    }
    puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,&local_320,pwVar23,0);
    if (&local_2b8 != puVar11) {
      plVar17 = (longlong *)*puVar11;
      *puVar11 = 0;
      local_348 = plVar17;
    }
    if (local_320 != (undefined8 *)0x0) {
      (**(code **)*local_320)(local_320,1);
    }
    if (plVar17 == (longlong *)0x0) {
      if (1 < (byte)LogDataCompactifier._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
      }
      return false;
    }
  }
  local_3a4 = 0;
  local_360 = 0;
  local_368 = 0;
  local_364 = 0;
  local_358 = 0;
  local_328 = 0;
  local_338 = 0;
  local_330 = 0;
  FVar12 = FDateTime::UtcNow();
  local_378 = (FString *)0x0;
  local_370 = 0;
  auVar29._8_8_ = 0;
  auVar29._0_8_ =
       (double)(this->Configuration).DataAgeThreshold * __real_4269254d38000000 +
       __real_3fe0000000000000;
  auVar29 = roundpd(extraout_XMM0,auVar29,1);
  local_300.Ticks = *(longlong *)FVar12.Ticks - (longlong)auVar29._0_8_;
  InitializeCriticalSectionAndSpinCount(&local_1d8,4000);
  local_1b0.QuadPart = 0;
  local_1a8 = 0;
  local_1a0 = '\0';
  cStack_19f = '\0';
  EnterCriticalSection(&local_1d8);
  if ((local_1a0 == '\0') && (local_1a0 = '\x01', cStack_19f == '\0')) {
    QueryPerformanceCounter(&local_318);
    local_1b0 = local_318;
  }
  LeaveCriticalSection(&local_1d8);
  pIVar1 = (this->FileSystem).Ptr;
  if ((this->Configuration).CloudDirectory.Data.ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(this->Configuration).CloudDirectory.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0x98))(pIVar1,&local_378,pwVar23,0);
  EnterCriticalSection(&local_1d8);
  if ((local_1a0 != '\0') && (local_1a0 = '\0', cStack_19f == '\0')) {
    QueryPerformanceCounter(&local_310);
    local_1a8 = local_1a8 + (local_310.QuadPart - (longlong)local_1b0);
  }
  LeaveCriticalSection(&local_1d8);
  if (4 < (byte)LogDataCompactifier._0_1_) {
    EnterCriticalSection(&local_1d8);
    dVar30 = (double)local_1a8 * FGenericPlatformTime::SecondsPerCycle64;
    if ((local_1a0 != '\0') && (cStack_19f == '\0')) {
      QueryPerformanceCounter(&local_308);
      dVar30 = dVar30 + (double)(ulonglong)(local_308.QuadPart - (longlong)local_1b0) *
                        FGenericPlatformTime::SecondsPerCycle64;
    }
    LeaveCriticalSection(&local_1d8);
    FGenericPlatformTime::PrettyTime(&local_2b0,dVar30);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = local_378;
  this_01 = local_378 + (int)local_370;
  this_00 = local_378;
  if (local_378 != this_01) {
    do {
      bVar8 = ::FString::EndsWith(this_00,L".manifest",9,IgnoreCase);
      if (!bVar8) {
        do {
          pFVar22 = this_01;
          this_01 = pFVar22 + -1;
          if (this_00 == this_01) goto LAB_14326401d;
          bVar8 = ::FString::EndsWith(this_01,L".manifest",9,IgnoreCase);
        } while (!bVar8);
        iVar19 = pFVar22[-1].Data.ArrayNum;
        iVar10 = pFVar22[-1].Data.ArrayMax;
        pFVar3 = (this_00->Data).AllocatorInstance.Data;
        iVar4 = (this_00->Data).ArrayNum;
        iVar5 = (this_00->Data).ArrayMax;
        (this_00->Data).AllocatorInstance.Data = (this_01->Data).AllocatorInstance.Data;
        (this_00->Data).ArrayNum = iVar19;
        (this_00->Data).ArrayMax = iVar10;
        (this_01->Data).AllocatorInstance.Data = pFVar3;
        pFVar22[-1].Data.ArrayNum = iVar4;
        pFVar22[-1].Data.ArrayMax = iVar5;
      }
      this_00 = this_00 + 1;
    } while (this_00 != this_01);
  }
LAB_14326401d:
  local_350 = (TFuture<BuildPatchServices::FDataFileResult> *)
              ((longlong)this_00 - (longlong)pFVar6 >> 4);
  iVar19 = (int)local_350;
  if ((iVar19 == 0) && (4 < (byte)LogDataCompactifier._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
    local_398.Data = (FScriptContainerElement *)0x0;
    local_390 = 0;
    local_38c = 0;
  }
  else {
    uVar25 = 0;
    local_398.Data = (FScriptContainerElement *)0x0;
    local_390 = 0;
    local_38c = 0;
    uVar14 = uVar25;
    if (0 < iVar19) {
      do {
        uVar20 = (uint)uVar14;
        uVar27 = 0;
        if ((int)uVar20 < (int)local_370) {
          uVar27 = ~uVar20 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        local_2e8.Filename =
             (FString *)((longlong)&(local_378->Data).AllocatorInstance.Data + uVar25);
        local_238._0_8_ = 0;
        local_238._40_8_ = 0;
        local_2e8.__this = this;
        pTVar18 = Async<_BuildPatchServices::FPatchDataCompactifier::Run_::__l70::<lambda_2>_>
                            ((TFuture<BuildPatchServices::FManifestResult> *)local_2a0,ThreadPool,
                             &local_2e8,&local_238);
        if (((local_398.Data <= pTVar18) &&
            (pTVar18 < (TFuture<BuildPatchServices::FManifestResult> *)
                       (local_398.Data + (longlong)local_38c * 0x10))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        if (local_390 == local_38c) {
          local_390 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_398,&local_38c);
        }
        *(undefined8 *)(local_398.Data + (longlong)local_390 * 0x10) = *(undefined8 *)pTVar18;
        *(undefined8 *)(local_398.Data + (longlong)local_390 * 0x10 + 8) =
             *(undefined8 *)&pTVar18->field_0x8;
        *(undefined8 *)&pTVar18->field_0x8 = 0;
        *(undefined8 *)pTVar18 = 0;
        local_390 = local_390 + 1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_2a0._8_8_);
        uVar25 = uVar25 + 0x10;
        uVar14 = (ulonglong)(uVar20 + 1);
      } while ((int)(uVar20 + 1) < iVar19);
    }
  }
  iVar19 = local_390;
  uVar27 = 0;
  local_138.Elements._0_8_ = 0;
  pTVar18 = (TFuture<BuildPatchServices::FManifestResult> *)
            (local_398.Data + (longlong)local_390 * 0x10);
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  local_3a0 = 0;
  FVar26.Data = local_398.Data;
  while( true ) {
    if (local_390 != iVar19) {
      local_3a7 = 0;
      `TCheckedPointerIterator<TFuture<BuildPatchServices::FManifestResult>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_3a7);
    }
    pFVar7 = local_340;
    plVar17 = local_348;
    pTVar21 = local_350;
    if ((TFuture<BuildPatchServices::FManifestResult> *)FVar26.Data == pTVar18) break;
    if (*(longlong *)FVar26.Data == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x155,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return (bool)uVar9;
      }
      if ((*(longlong *)FVar26.Data == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return (bool)uVar9;
      }
    }
    lVar16 = *(longlong *)FVar26.Data;
    while (*(char *)(lVar16 + 0x68) == '\0') {
      (**(code **)(**(longlong **)(lVar16 + 0x60) + 0x20))
                (*(longlong **)(lVar16 + 0x60),0xffffffff,0);
    }
    local_198 = *(char *)(lVar16 + 0x70);
    local_190 = *(longlong *)(lVar16 + 0x78);
    local_188._0_8_ = (FScriptContainerElement *)0x0;
    local_188._8_8_ = 0;
    local_168 = (void *)0x0;
    local_160 = 0;
    local_154 = 0;
    local_148 = (ForElementType<FSetElementId>)0x0;
    local_140 = 0;
    local_15c = 0x80;
    local_158 = 0xffffffff;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_188,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar16 + 0x80));
    uVar20 = 0;
    if ((int)uVar27 < (int)local_370) {
      uVar20 = ~uVar27 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
    local_358 = local_358 + local_190;
    local_3a4 = local_3a4 + 1;
    if (local_198 == '\0') {
      local_3a8 = false;
      if (1 < (byte)LogDataCompactifier._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
      }
    }
    else {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                (&local_138,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_188);
      uVar27 = local_3a0;
      if (3 < (byte)LogDataCompactifier._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
        uVar27 = local_3a0;
      }
    }
    uVar27 = uVar27 + 1;
    local_140 = 0;
    local_3a0 = uVar27;
    if (local_148 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_188,0,local_188._8_4_);
    iVar10 = SUB84(local_188._8_8_,4);
    local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_188,0,(int *)(local_188 + 0xc));
    }
    local_158 = 0xffffffff;
    local_154 = 0;
    local_160 = 0;
    if (0x80 < local_15c) {
      local_15c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10),0);
    }
    if (local_168 != (void *)0x0) {
      FMemory::Free(local_168);
    }
    if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_188._0_8_);
    }
    FVar26.Data = FVar26.Data + 0x10;
  }
  if (local_3a8 != false) {
    iVar19 = (int)local_350;
    uVar14 = (ulonglong)local_350 & 0xffffffff;
    local_388.Data = (FScriptContainerElement *)0x0;
    local_380 = 0;
    if (iVar19 < (int)local_370) {
      do {
        uVar20 = (uint)uVar14;
        uVar27 = 0;
        if ((int)uVar20 < (int)local_370) {
          uVar27 = ~uVar20 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        local_2d8.Filename = local_378 + (int)uVar20;
        local_2d8.ReferencedFileSet = &local_138;
        local_208._0_8_ = 0;
        local_2d8.Cutoff = &local_300;
        local_208._40_8_ = 0;
        local_2d8.__this = pFVar7;
        pTVar13 = Async<_BuildPatchServices::FPatchDataCompactifier::Run_::__l120::<lambda_3>_>
                            ((TFuture<BuildPatchServices::FDataFileResult> *)local_290,ThreadPool,
                             &local_2d8,&local_208);
        if (((local_388.Data <= pTVar13) &&
            (pTVar13 < (TFuture<BuildPatchServices::FDataFileResult> *)
                       (local_388.Data + (longlong)local_380._4_4_ * 0x10))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        iVar10 = (uint)local_380;
        if ((uint)local_380 == local_380._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_388,(int *)((longlong)&local_380 + 4));
        }
        local_380 = CONCAT44(local_380._4_4_,iVar10 + 1);
        *(undefined8 *)(local_388.Data + (longlong)iVar10 * 0x10) = *(undefined8 *)pTVar13;
        *(undefined8 *)(local_388.Data + (longlong)iVar10 * 0x10 + 8) =
             *(undefined8 *)&pTVar13->field_0x8;
        *(undefined8 *)&pTVar13->field_0x8 = 0;
        *(undefined8 *)pTVar13 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_290._8_8_);
        uVar14 = (ulonglong)(uVar20 + 1);
      } while ((int)(uVar20 + 1) < (int)local_370);
    }
    uVar14 = (ulonglong)(int)(uint)local_380;
    local_350 = (TFuture<BuildPatchServices::FDataFileResult> *)(local_388.Data + uVar14 * 0x10);
    local_3a0 = (uint)local_380;
    plVar28 = (longlong *)((longlong)iVar19 << 4);
    FVar26.Data = local_388.Data;
    while( true ) {
      pTVar13 = local_350;
      local_348 = plVar28;
      if ((uint)local_380 != (int)uVar14) {
        local_3a6[0] = 0;
        `TCheckedPointerIterator<TFuture<BuildPatchServices::FDataFileResult>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_3a6);
      }
      pFVar7 = local_340;
      if ((TFuture<BuildPatchServices::FDataFileResult> *)FVar26.Data == pTVar13) break;
      if (*(longlong *)FVar26.Data == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x155,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        if ((*(longlong *)FVar26.Data == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
      }
      lVar16 = *(longlong *)FVar26.Data;
      while (*(char *)(lVar16 + 0x68) == '\0') {
        (**(code **)(**(longlong **)(lVar16 + 0x60) + 0x20))
                  (*(longlong **)(lVar16 + 0x60),0xffffffff,0);
      }
      auVar29 = *(undefined1 (*) [16])(lVar16 + 0x70);
      uVar20 = (uint)pTVar21;
      uVar27 = 0;
      if ((int)uVar20 < (int)local_370) {
        uVar27 = ~uVar20 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return (bool)uVar9;
      }
      local_3a4 = local_3a4 + 1;
      lVar16 = auVar29._8_8_;
      local_358 = local_358 + lVar16;
      if (auVar29[0] == '\0') {
        if (auVar29[1] == '\0') {
          local_360 = local_360 + 1;
          local_328 = local_328 + lVar16;
        }
        else if (auVar29[2] == '\0') {
          local_368 = local_368 + 1;
          local_338 = local_338 + lVar16;
        }
        else if (auVar29[3] != '\0') {
          local_364 = local_364 + 1;
          local_330 = local_330 + lVar16;
          if (plVar17 != (longlong *)0x0) {
            ::FString::ConcatFC(&local_2f8,
                                (FString *)
                                ((longlong)&(local_378->Data).AllocatorInstance.Data +
                                (longlong)plVar28),L"\r\n");
            local_68.Data = (FScriptContainerElement *)0x0;
            if (local_2f8.Data.ArrayNum == 0) {
              pwVar23 = L"";
LAB_1432648b5:
              sVar15 = wcslen(pwVar23);
              local_58 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar23,(int)sVar15);
              uVar27 = local_58 + 1;
              uVar24 = uVar27;
              if (uVar27 < 0x81) {
                if (local_68.Data != (FScriptContainerElement *)0x0) {
                  uVar24 = 0;
                  goto LAB_1432648f4;
                }
              }
              else {
LAB_1432648f4:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_68,0,uVar24,1);
              }
              local_60 = local_e8;
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                local_60 = local_68.Data;
              }
              UE::Core::Private::Convert((uchar *)local_60,uVar27,pwVar23,(int)sVar15 + 1);
              plVar28 = local_348;
            }
            else {
              pwVar23 = (wchar_t *)local_2f8.Data.AllocatorInstance.Data;
              if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_1432648b5;
              local_60 = (FScriptContainerElement *)0x0;
              local_58 = 0;
            }
            (**(code **)(*plVar17 + 0x188))(plVar17,local_60,(longlong)local_58);
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data);
            }
            if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
            }
          }
          if (4 < (byte)LogDataCompactifier._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Deprecated_data_150a77a00,
                       (FLogCategoryBase *)&LogDataCompactifier);
          }
        }
      }
      pTVar21 = (TFuture<BuildPatchServices::FDataFileResult> *)(ulonglong)(uVar20 + 1);
      uVar14 = (ulonglong)local_3a0;
      plVar28 = plVar28 + 2;
      FVar26.Data = FVar26.Data + 0x10;
    }
    if (3 < (byte)LogDataCompactifier._0_1_) {
      BuildSizeString(local_340,&local_280,local_358);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      if (3 < (byte)LogDataCompactifier._0_1_) {
        BuildSizeString(pFVar7,&local_270,local_338);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (3 < (byte)LogDataCompactifier._0_1_) {
          BuildSizeString(pFVar7,&local_260,local_330);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
          if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogDataCompactifier._0_1_) {
            BuildSizeString(pFVar7,&local_250,local_328);
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogDataCompactifier);
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
    DestructItems<TFuture<BuildPatchServices::FDataFileResult>,int>
              ((TFuture<BuildPatchServices::FDataFileResult> *)local_388.Data,(uint)local_380);
    if ((TFuture<BuildPatchServices::FDataFileResult> *)local_388.Data !=
        (TFuture<BuildPatchServices::FDataFileResult> *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  local_138.HashSize = 0;
  if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138.Elements);
  DestructItems<TFuture<BuildPatchServices::FManifestResult>,int>
            ((TFuture<BuildPatchServices::FManifestResult> *)local_398.Data,local_390);
  if ((TFuture<BuildPatchServices::FManifestResult> *)local_398.Data !=
      (TFuture<BuildPatchServices::FManifestResult> *)0x0) {
    FMemory::Free(local_398.Data);
  }
  DeleteCriticalSection(&local_1d8);
  DestructItems<FString,int>(local_378,(int)local_370);
  if (local_378 != (FString *)0x0) {
    FMemory::Free(local_378);
  }
  if (plVar17 != (longlong *)0x0) {
    (**(code **)*plVar17)(plVar17,1);
  }
  return local_3a8;
}

