// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// DefaultDataFromActor @ 1499dd7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

int __thiscall
FPCGGetDataFunctionRegistry::DefaultDataFromActor
          (FPCGGetDataFunctionRegistry *this,FPCGContext *param_1,
          FPCGGetDataFunctionRegistryParams *param_2,AActor *param_3,
          FPCGGetDataFunctionRegistryOutput *param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  FName FVar4;
  code *pcVar5;
  FPCGContext *pFVar6;
  UPCGComponent *pUVar7;
  FPCGGetDataFunctionRegistry *pFVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  UClass *pUVar17;
  UPCGLandscapeData *this_00;
  UPCGVolumeData *this_01;
  TBox<double> *pTVar18;
  UPCGComponent *pUVar19;
  UPCGData *pUVar20;
  UObject *pUVar21;
  UPCGGraph *pUVar22;
  undefined8 uVar23;
  byte bVar24;
  ForAnyElementType FVar25;
  FPCGDataPtrWrapper *pFVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  ForElementType<unsigned_int> FVar29;
  FScriptContainerElement *pFVar30;
  ulonglong uVar31;
  longlong lVar32;
  wchar_t *pwVar33;
  APCGPartitionActor *_Src;
  APCGPartitionActor *pAVar34;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_02;
  ForElementType<UActorComponent_*> FVar35;
  EPCGDataType EVar36;
  APCGPartitionActor *this_03;
  uint uVar37;
  APCGPartitionActor *pAVar38;
  FScriptContainerElement *pFVar39;
  ulonglong uVar40;
  ForElementType<UActorComponent_*> FVar41;
  FPCGGetDataFunctionRegistryOutput *pFVar42;
  FPCGGetDataFunctionRegistryOutput *pFVar43;
  undefined1 auStackY_358 [32];
  undefined1 local_318;
  char local_317;
  FGCScopeGuard local_316;
  undefined1 local_315;
  undefined1 local_314 [4];
  EPCGDataType local_310;
  FPCGLandscapeDataProps local_30c;
  FPCGContext *local_300;
  uint local_2f8;
  UPCGComponent *local_2f0;
  ForElementType<UActorComponent_*> local_2e8;
  FString local_2e0;
  FWeakObjectPtr local_2d0;
  FPCGGetDataFunctionRegistryOutput *local_2c8;
  FPCGGetDataFunctionRegistryParams *local_2c0;
  TArray<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_2b8;
  int local_2a8;
  uint uStack_2a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a0;
  undefined4 local_298;
  undefined8 uStack_294;
  undefined4 uStack_28c;
  ForElementType<UActorComponent_*> local_288;
  FPCGGetDataFunctionRegistry *local_280;
  longlong *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_270;
  UPCGLandscapeData *local_250;
  APCGPartitionActor *local_248;
  FName local_240;
  FPCGContext *local_238;
  int local_230;
  undefined4 local_22c;
  FSparseArrayAllocationInfo local_228;
  TObjectPtr<UObject> local_218 [2];
  undefined1 local_208 [32];
  ForElementType<unsigned_int> local_1e8;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  FScriptContainerElement local_1d0 [8];
  ForAnyElementType local_1c8;
  uint local_1c0;
  TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_1b8;
  TBox<double> local_e8;
  TBox<double> local_b0;
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_2c8 = param_4;
  local_300 = param_1;
  local_2c0 = param_2;
  local_280 = this;
  if ((param_3 == (AActor *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Actor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                         ,100,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  if ((param_2->ComponentSelector != (FPCGComponentSelectorSettings *)0x0) &&
     (bVar9 = FPCGComponentSelectorSettings::FilterActor(param_2->ComponentSelector,param_3), !bVar9
     )) {
    return 0;
  }
  local_317 = param_2->bParseActor;
  iVar11 = (param_3->Tags).ArrayNum;
  local_310 = param_2->DataTypeFilter;
  FVar41 = (ForElementType<UActorComponent_*>)(param_3->Tags).AllocatorInstance.Data;
  local_2f0 = param_2->SourceComponent;
  local_2e8 = (ForElementType<UActorComponent_*>)((longlong)FVar41 + (longlong)iVar11 * 8);
  local_208._0_8_ = (FScriptContainerElement *)0x0;
  local_208._8_8_ = 0;
  local_1e8 = (ForElementType<unsigned_int>)0x0;
  local_1e0 = 0;
  local_1dc = 0x80;
  local_1d8 = -1;
  local_1d4 = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  while( true ) {
    FVar35 = local_2e8;
    _Src = (APCGPartitionActor *)0x0;
    if ((param_3->Tags).ArrayNum != iVar11) {
      local_318 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_318);
    }
    pFVar42 = local_2c8;
    EVar36 = local_310;
    iVar15 = 0;
    if (FVar41 == FVar35) break;
    ::FName::ToString((FName *)FVar41,&local_2e0);
    if (local_1d4 == 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,1,(ForAnyElementType *)local_208,(int *)(local_208 + 8),
                          (int *)(local_208 + 0xc));
      iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10),1);
      FVar29 = (ForElementType<unsigned_int>)((longlong)local_208 + 0x10);
      if (local_1e8 != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_1e8;
      }
      bVar24 = (byte)iVar12 & 0x1f;
      if (iVar12 < 0) {
        iVar12 = iVar12 + 0x1f;
        bVar24 = bVar24 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar29 + (longlong)(iVar12 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar24 & 0x1f));
      iVar12 = local_1d8;
    }
    else {
      local_1d4 = local_1d4 + -1;
      iVar12 = *(int *)(local_208._0_8_ + (longlong)local_1d8 * 0x18 + 4);
      iVar14 = local_1d8;
      if (local_1d4 != 0) {
        *(undefined4 *)(local_208._0_8_ + (longlong)iVar12 * 0x18) = 0xffffffff;
      }
    }
    local_1d8 = iVar12;
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_208,&local_228,iVar14);
    if (local_228.Pointer != (APCGPartitionActor *)0x0) {
      *(longlong *)local_228.Pointer = 0;
      *(FScriptContainerElement **)local_228.Pointer = local_2e0.Data.AllocatorInstance.Data;
      local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)local_228.Pointer + 8) = local_2e0.Data.ArrayNum;
      *(int *)((longlong)((longlong)local_228.Pointer + 8) + 4) = local_2e0.Data.ArrayMax;
      local_2e0.Data.ArrayNum = 0;
      local_2e0.Data.ArrayMax = 0;
      *(undefined4 *)((longlong)local_228.Pointer + 0x10) = 0xffffffff;
      _Src = local_228.Pointer;
    }
    iVar14 = (int)_Src->_padding_;
    if (iVar14 == 0) {
      pwVar33 = L"";
    }
    else {
      pwVar33 = (wchar_t *)_Src->_padding_;
      iVar15 = iVar14 + -1;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar33);
    if ((local_208._8_4_ - local_1d4 != 1) && (local_208._8_4_ != local_1d4)) {
      FVar25.Data = local_1d0;
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FVar25.Data = local_1c8.Data;
      }
      iVar15 = *(int *)(FVar25.Data + (ulonglong)(local_1c0 - 1 & uVar13) * 4);
      pFVar30 = (FScriptContainerElement *)local_208._0_8_;
      while (iVar15 != -1) {
        lVar32 = (longlong)iVar15 * 0x18;
        iVar14 = (int)_Src->_padding_;
        iVar12 = *(int *)(pFVar30 + lVar32 + 8);
        if (iVar12 == iVar14) {
          if (1 < iVar12) {
            iVar14 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(pFVar30 + lVar32),(wchar_t *)_Src->_padding_);
            bVar9 = iVar14 == 0;
            pFVar30 = (FScriptContainerElement *)local_208._0_8_;
            goto LAB_1499ddabf;
          }
LAB_1499ddb57:
          if (iVar15 != -1) {
            if (*(void **)(pFVar30 + (longlong)iVar15 * 0x18) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar30 + (longlong)iVar15 * 0x18));
            }
            memmove(pFVar30 + (longlong)iVar15 * 0x18,_Src,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_208,local_228.Index,1);
            goto LAB_1499dddbb;
          }
          break;
        }
        bVar9 = iVar12 + iVar14 == 1;
LAB_1499ddabf:
        if (bVar9) goto LAB_1499ddb57;
        iVar15 = *(int *)(pFVar30 + lVar32 + 0x10);
      }
    }
    uVar37 = 1;
    uVar28 = local_208._8_4_ - local_1d4;
    if (3 < uVar28) {
      uVar31 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
      lVar32 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      local_22c = (undefined4)lVar32;
      uVar37 = 1 << ((byte)lVar32 & 0x1f);
    }
    if (((int)uVar28 < 1) || ((int)uVar37 <= (int)local_1c0)) {
      uVar13 = local_1c0 - 1 & uVar13;
      *(uint *)((longlong)&_Src->_padding_ + 4) = uVar13;
      FVar25.Data = local_1d0;
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FVar25.Data = local_1c8.Data;
      }
      lVar32 = (longlong)(int)(local_1c0 - 1 & uVar13);
      *(undefined4 *)&_Src->_padding_ = *(undefined4 *)(FVar25.Data + lVar32 * 4);
      *(int *)(FVar25.Data + lVar32 * 4) = local_228.Index;
    }
    else {
      local_1c0 = uVar37;
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1c8,0,0,4);
      }
      if (uVar37 != 0) {
        uVar13 = uVar37;
        if (uVar37 < 2) {
          if (local_1c8.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_1499ddba6;
          }
        }
        else {
LAB_1499ddba6:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_1c8,0,uVar13,4);
        }
        if (0 < (int)uVar37) {
          uVar31 = 0;
          uVar40 = (ulonglong)uVar37;
          do {
            FVar25.Data = local_1d0;
            if (local_1c8.Data != (FScriptContainerElement *)0x0) {
              FVar25.Data = local_1c8.Data;
            }
            uVar16 = (longlong)(int)uVar37 - 1U & uVar31;
            uVar31 = uVar31 + 1;
            *(undefined4 *)(FVar25.Data + uVar16 * 4) = 0xffffffff;
            uVar40 = uVar40 - 1;
          } while (uVar40 != 0);
        }
      }
      if (local_1c0 != 0) {
        pTStack_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10);
        uStack_2a4 = 1;
        uVar13 = 0;
        local_2a8 = 0;
        uStack_294 = 0;
        if (local_1e0 != 0) {
          FVar29 = (ForElementType<unsigned_int>)((longlong)local_208 + 0x10);
          if (local_1e8 != (ForElementType<unsigned_int>)0x0) {
            FVar29 = local_1e8;
          }
          uVar28 = *(uint *)FVar29;
          local_2a8 = 0;
          while (uVar28 == 0) {
            uVar13 = uVar13 + 0x20;
            lVar32 = (longlong)local_2a8;
            local_2a8 = local_2a8 + 1;
            uStack_294 = (ulonglong)uVar13 << 0x20;
            if ((int)(local_1e0 + -1 + (local_1e0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2a8) {
              uStack_294 = CONCAT44(uVar13,local_1e0);
              goto LAB_1499ddcb0;
            }
            uVar28 = ((uint *)((longlong)FVar29 + 4))[lVar32];
          }
          uStack_2a4 = -uVar28 & uVar28;
          uVar31 = (ulonglong)uStack_2a4 * 2 + 1;
          lVar32 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          local_230 = (int)lVar32;
          iVar15 = (uVar13 - 1) + local_230;
          if (local_1e0 < iVar15) {
            iVar15 = local_1e0;
          }
          uStack_294._4_4_ = (int)((ulonglong)uStack_294 >> 0x20);
          uStack_294 = CONCAT44(uStack_294._4_4_,iVar15);
        }
LAB_1499ddcb0:
        local_298 = 0xffffffff;
        local_278 = (longlong *)local_208;
        local_270._padding_ = CONCAT44(uStack_2a4,local_2a8);
        local_270.UnvisitedBitMask = 0xffffffff;
        local_270.CurrentBitIndex = (int)uStack_294;
        local_270.BaseBitIndex = uStack_294._4_4_;
        local_270._28_4_ = uStack_28c;
        local_270.Array = pTStack_2a0;
        if ((int)uStack_294 < local_1e0) {
          do {
            iVar14 = local_270.CurrentBitIndex;
            puVar3 = (undefined8 *)(*local_278 + (longlong)local_270.CurrentBitIndex * 0x18);
            iVar15 = *(int *)(*local_278 + 8 + (longlong)local_270.CurrentBitIndex * 0x18);
            if (iVar15 == 0) {
              pwVar33 = L"";
              iVar15 = 0;
            }
            else {
              pwVar33 = (wchar_t *)*puVar3;
              iVar15 = iVar15 + -1;
            }
            uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar33);
            uVar13 = local_1c0 - 1 & uVar13;
            *(uint *)((longlong)puVar3 + 0x14) = uVar13;
            FVar25.Data = local_1d0;
            if (local_1c8.Data != (FScriptContainerElement *)0x0) {
              FVar25.Data = local_1c8.Data;
            }
            lVar32 = (longlong)(int)(local_1c0 - 1 & uVar13);
            *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(FVar25.Data + lVar32 * 4);
            *(int *)(FVar25.Data + lVar32 * 4) = iVar14;
            local_270.UnvisitedBitMask = local_270.UnvisitedBitMask & ~local_270._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_270);
          } while (local_270.CurrentBitIndex < (local_270.Array)->NumBits);
        }
      }
    }
LAB_1499dddbb:
    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    }
    FVar41 = (ForElementType<UActorComponent_*>)((longlong)FVar41 + 8);
  }
  if ((((local_310 & Spatial) == None) && ((~(byte)(local_310 >> 7) & 1) != 0)) ||
     (param_3 == (AActor *)0x0)) {
LAB_1499dde21:
    this_03 = _Src;
  }
  else {
    pUVar17 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar11 = (int)pUVar17->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar11) ||
       (this_03 = (APCGPartitionActor *)param_3,
       (longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar11 * 8)
       != &pUVar17->_padding_)) goto LAB_1499dde21;
  }
  if (((~(byte)(EVar36 >> 4) & 1) == 0) && (param_3 != (AActor *)0x0)) {
    pUVar17 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
    iVar11 = (int)pUVar17->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar11) ||
       (pAVar34 = (APCGPartitionActor *)param_3,
       (longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar11 * 8)
       != &pUVar17->_padding_)) goto LAB_1499dde5a;
  }
  else {
LAB_1499dde5a:
    pAVar34 = _Src;
  }
  if (((~(byte)(EVar36 >> 7) & 1) == 0) && (param_3 != (AActor *)0x0)) {
    pUVar17 = Z_Construct_UClass_AVolume_NoRegister();
    iVar11 = (int)pUVar17->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar11) ||
       (pAVar38 = (APCGPartitionActor *)param_3,
       (longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar11 * 8)
       != &pUVar17->_padding_)) goto LAB_1499dde93;
  }
  else {
LAB_1499dde93:
    pAVar38 = _Src;
  }
  pUVar7 = local_2f0;
  pFVar6 = local_300;
  EVar36 = local_310;
  if ((local_317 == '\0') && ((~(byte)(local_310 >> 1) & 1) == 0)) {
    this_00 = (UPCGLandscapeData *)FPCGContext::NewPointData_AnyThread(local_300);
    UPCGBasePointData::InitializeFromActor
              ((UPCGBasePointData *)this_00,param_3,&pFVar42->bSanitizedTagAttributeNames);
    iVar11 = (pFVar42->Collection).TaggedData.ArrayNum;
    piVar1 = &(pFVar42->Collection).TaggedData.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)pFVar42,piVar1);
    }
LAB_1499de36d:
    (pFVar42->Collection).TaggedData.ArrayNum = iVar11 + 1;
    pFVar26 = (FPCGDataPtrWrapper *)
              ((pFVar42->Collection).TaggedData.AllocatorInstance.Data + (longlong)iVar11 * 0x78);
    pFVar26[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar26[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    pFVar26[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar26 + 1);
    pFVar26[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined2 *)((longlong)&pFVar26[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
    (pFVar26->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (pFVar26->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    *(TObjectPtr<UPCGData_const_>_u_0 *)&this_02->Elements = (TObjectPtr<UPCGData_const_>_u_0)0x0;
    pFVar26[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    pFVar26[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar26[3].WeakData.WeakPtr.ObjectIndex = 0;
    pFVar26[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&pFVar26[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar26[4].Data.field0_0x0 + 4) = 0;
    pFVar26[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar26[5].WeakData.WeakPtr.ObjectIndex = 0;
    pFVar26[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined2 *)&pFVar26[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    *(undefined8 *)&pFVar26[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  }
  else {
    if (this_03 != (APCGPartitionActor *)0x0) {
      if (((local_2f0 != (UPCGComponent *)0x0) && ((AActor *)local_2f0->_padding_ != param_3)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Component || Component->GetOwner() == Actor",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                             ,0x85,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      this_01 = FPCGContext::NewObject_AnyThread<UPCGVolumeData>(local_300);
      if (EVar36 == Volume) {
        pTVar18 = PCGHelpers::GetGridBounds(&local_e8,param_3,pUVar7);
        UPCGVolumeData::Initialize(this_01,pTVar18);
      }
      else {
        pTVar18 = APCGPartitionActor::GetFixedBounds(this_03,&local_b0);
        UPCGVolumeData::Initialize(this_01,pTVar18);
        if (((pUVar7 != (UPCGComponent *)0x0) &&
            (pUVar19 = APCGPartitionActor::GetOriginalComponent(this_03,pUVar7),
            pUVar19 != (UPCGComponent *)0x0)) &&
           (pUVar20 = UPCGComponent::GetOriginalActorPCGData(pUVar7), pUVar20 != (UPCGData *)0x0)) {
          pUVar17 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          iVar11 = (int)pUVar17->_padding_;
          if ((iVar11 <= *(int *)(pUVar20->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
              &pUVar17->_padding_)) {
            this_01 = (UPCGVolumeData *)(**(code **)(this_01->_padding_ + 1000))(this_01,0,pUVar20);
          }
        }
      }
      iVar11 = (pFVar42->Collection).TaggedData.ArrayNum;
      piVar1 = &(pFVar42->Collection).TaggedData.ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar42,piVar1);
      }
      (pFVar42->Collection).TaggedData.ArrayNum = iVar11 + 1;
      pFVar26 = (FPCGDataPtrWrapper *)
                ((pFVar42->Collection).TaggedData.AllocatorInstance.Data + (longlong)iVar11 * 0x78);
      pFVar26[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar26[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar26[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar26[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar26[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (pFVar26->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (pFVar26->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      pFVar26[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar26[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar26[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar26[3].WeakData.WeakPtr.ObjectIndex = 0;
      pFVar26[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&pFVar26[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar26[4].Data.field0_0x0 + 4) = 0;
      pFVar26[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar26[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&pFVar26[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&pFVar26[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(pFVar26,(UPCGData *)this_01);
      EVar36 = 1;
      goto LAB_1499de5c8;
    }
    if (pAVar34 == (APCGPartitionActor *)0x0) {
      if (pAVar38 == (APCGPartitionActor *)0x0) {
        local_310 = None;
        local_1b8.AllocatorInstance.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
        local_1b8.ArrayNum = 0;
        local_1b8.ArrayMax = 0x18;
        AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                  (param_3,&local_1b8,false);
        uVar31 = (ulonglong)local_1b8.ArrayNum;
        local_2f8 = local_1b8.ArrayNum;
        FVar41 = (ForElementType<UActorComponent_*>)&local_1b8;
        if (local_1b8.AllocatorInstance.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
          FVar41 = local_1b8.AllocatorInstance.SecondaryData;
        }
        FVar35 = (ForElementType<UActorComponent_*>)((longlong)FVar41 + uVar31 * 8);
        uVar40 = uVar31;
        local_288 = FVar35;
        while( true ) {
          EVar36 = (EPCGDataType)_Src;
          local_2e8 = FVar41;
          if ((int)uVar31 != (int)uVar40) {
            local_315 = 0;
            `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_315);
          }
          if (FVar41 == FVar35) break;
          FVar4 = *(FName *)FVar41;
          if ((FVar4 == (FName)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InComponent",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                                 ,0xd0,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            iVar11 = (*pcVar5)();
            return iVar11;
          }
          if ((local_2c0->ComponentSelector == (FPCGComponentSelectorSettings *)0x0) ||
             (bVar9 = FPCGComponentSelectorSettings::FilterComponent
                                (local_2c0->ComponentSelector,(UActorComponent *)FVar4), bVar9)) {
            pFVar8 = local_280;
            pFVar43 = local_2c8;
            local_2f0 = (UPCGComponent *)
                        CONCAT44(local_2f0._4_4_,(pFVar42->Collection).TaggedData.ArrayNum);
            iVar11 = (local_280->ComponentParsingFunctions).ArrayNum;
            pFVar30 = (local_280->ComponentParsingFunctions).AllocatorInstance.Data;
            pFVar39 = pFVar30 + (longlong)iVar11 * 0x40;
            while( true ) {
              if ((pFVar8->ComponentParsingFunctions).ArrayNum != iVar11) {
                local_314[0] = 0;
                `TCheckedPointerIterator<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>_const_,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_314);
              }
              if (pFVar30 == pFVar39) break;
              local_238 = local_300;
              local_240 = FVar4;
              UE::Core::Private::Function::CheckCallable(*(void **)pFVar30);
              pFVar27 = *(FScriptContainerElement **)(pFVar30 + 0x28);
              pcVar5 = *(code **)pFVar30;
              if (pFVar27 == (FScriptContainerElement *)0x0) {
                pFVar27 = pFVar30 + 0x10;
              }
              uVar23 = (**(code **)(*(longlong *)pFVar27 + 8))();
              cVar10 = (*pcVar5)(uVar23,&local_238,local_2c0,&local_240);
              if (cVar10 != '\0') break;
              pFVar30 = pFVar30 + 0x40;
            }
            FVar41 = local_2e8;
            iVar11 = (pFVar43->Collection).TaggedData.ArrayNum;
            if (iVar11 == (int)local_2f0) {
              iVar11 = DefaultDataFromComponent
                                 (local_280,local_300,local_2c0,(UActorComponent *)FVar4,pFVar43);
              FVar35 = local_288;
            }
            else {
              iVar11 = iVar11 - (int)local_2f0;
              FVar35 = local_288;
            }
          }
          else {
            iVar11 = 0;
            pFVar43 = pFVar42;
            local_310 = EVar36;
          }
          uVar31 = (ulonglong)(uint)local_1b8.ArrayNum;
          local_310 = local_310 + iVar11;
          _Src = (APCGPartitionActor *)(ulonglong)local_310;
          uVar40 = (ulonglong)local_2f8;
          FVar41 = (ForElementType<UActorComponent_*>)((longlong)FVar41 + 8);
          pFVar42 = pFVar43;
        }
        if (local_1b8.AllocatorInstance.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
          FMemory::Free((void *)local_1b8.AllocatorInstance.SecondaryData);
        }
        goto LAB_1499de5c8;
      }
      this_00 = (UPCGLandscapeData *)FPCGContext::NewObject_AnyThread<UPCGVolumeData>(local_300);
      UPCGVolumeData::Initialize((UPCGVolumeData *)this_00,(AVolume *)pAVar38);
      iVar11 = (pFVar42->Collection).TaggedData.ArrayNum;
      piVar1 = &(pFVar42->Collection).TaggedData.ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar42,piVar1);
      }
      goto LAB_1499de36d;
    }
    bVar9 = IsInGameThread();
    if (pFVar6 == (FPCGContext *)0x0) {
      if ((!bVar9) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749225>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0xa9,"Context != nullptr || IsInGameThread()"), bVar9)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
LAB_1499de0b8:
      pUVar21 = GetTransientPackageAsObject();
      this_00 = NewObject<UPCGLandscapeData>(pUVar21);
    }
    else {
      if (bVar9) goto LAB_1499de0b8;
      if (((pFVar6->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749348>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar9)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      FGCScopeGuard::FGCScopeGuard(&local_316);
      pUVar21 = GetTransientPackageAsObject();
      this_00 = NewObject<UPCGLandscapeData>(pUVar21);
      FGCScopeGuard::~FGCScopeGuard(&local_316);
      if ((this_00 == (UPCGLandscapeData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      local_250 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UPCGLandscapeData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&pFVar6->AsyncObjects,local_218,(bool *)&local_250);
    }
    pUVar7 = local_2f0;
    if (((local_2f0 == (UPCGComponent *)0x0) ||
        (pUVar22 = UPCGComponent::GetGraph(local_2f0), pUVar22 == (UPCGGraph *)0x0)) ||
       (pUVar22->bLandscapeUsesMetadata != false)) {
      local_30c.bGetLayerWeights = true;
    }
    else {
      local_30c.bGetLayerWeights = false;
    }
    local_30c.bSampleVirtualTextureNormals = false;
    local_30c.bGetComponentCoordinates = false;
    local_30c.bGetActorReference = false;
    local_30c.bGetPhysicalMaterial = false;
    local_30c.bGetHeightOnly = false;
    local_30c.bSampleVirtualTextures = false;
    pTVar18 = PCGHelpers::GetGridBounds(&local_78,param_3,pUVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar34);
    }
    local_2d0.ObjectIndex = 0;
    local_2d0.ObjectSerialNumber = 0;
    local_248 = pAVar34;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar34);
    }
    FWeakObjectPtr::operator=(&local_2d0,(FObjectPtr)&local_248);
    local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,0,&local_2b8.AllocatorInstance,1,&local_2b8.ArrayMax);
    *(FWeakObjectPtr *)local_2b8.AllocatorInstance.Data = local_2d0;
    UPCGLandscapeData::Initialize(this_00,&local_2b8,pTVar18,&local_30c);
    if ((FWeakObjectPtr *)local_2b8.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_2b8.AllocatorInstance.Data);
    }
    iVar11 = (pFVar42->Collection).TaggedData.ArrayNum;
    piVar1 = &(pFVar42->Collection).TaggedData.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)pFVar42,piVar1);
    }
    (pFVar42->Collection).TaggedData.ArrayNum = iVar11 + 1;
    pFVar26 = (FPCGDataPtrWrapper *)
              ((pFVar42->Collection).TaggedData.AllocatorInstance.Data + (longlong)iVar11 * 0x78);
    pFVar26[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar26[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    pFVar26[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar26 + 1);
    pFVar26[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined2 *)((longlong)&pFVar26[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
    (pFVar26->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (pFVar26->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    *(TObjectPtr<UPCGData_const_>_u_0 *)&this_02->Elements = (TObjectPtr<UPCGData_const_>_u_0)0x0;
    pFVar26[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    pFVar26[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar26[3].WeakData.WeakPtr.ObjectIndex = 0;
    pFVar26[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&pFVar26[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar26[4].Data.field0_0x0 + 4) = 0;
    pFVar26[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar26[5].WeakData.WeakPtr.ObjectIndex = 0;
    pFVar26[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined2 *)&pFVar26[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    *(undefined8 *)&pFVar26[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  }
  *(undefined4 *)((longlong)&pFVar26[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(pFVar26,(UPCGData *)this_00);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (this_02,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_208);
  EVar36 = 1;
LAB_1499de5c8:
  local_1c0 = 0;
  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_208);
  return EVar36;
}

// DefaultDataFromComponent @ 1499de630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

int __thiscall
FPCGGetDataFunctionRegistry::DefaultDataFromComponent
          (FPCGGetDataFunctionRegistry *this,FPCGContext *param_1,
          FPCGGetDataFunctionRegistryParams *param_2,UActorComponent *param_3,
          FPCGGetDataFunctionRegistryOutput *param_4)

{
  int *piVar1;
  uint *puVar2;
  EPCGDataType EVar3;
  URuntimeVirtualTexture *pUVar4;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar5;
  code *pcVar6;
  FPCGGetDataFunctionRegistryOutput *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  UPCGSplineData *this_00;
  USplineComponent *this_01;
  UPCGCollisionShapeData *this_02;
  UPCGVirtualTextureData *this_03;
  UEnum *this_04;
  FString *pFVar15;
  ulonglong uVar16;
  byte bVar17;
  FName *pFVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  ForElementType<unsigned_int> FVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  wchar_t *pwVar26;
  FPCGDataPtrWrapper *this_05;
  uint uVar27;
  ulonglong uVar28;
  FName *pFVar29;
  undefined1 auStackY_278 [32];
  <lambda_1> local_228;
  FGCScopeGuard local_227;
  FGCScopeGuard local_226;
  FGCScopeGuard local_225;
  uint local_224;
  FString local_220;
  int local_210;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_208;
  undefined4 local_200;
  undefined8 uStack_1fc;
  undefined4 uStack_1f4;
  FString local_1f0;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  FString local_1a8;
  UPCGSplineData *local_198;
  UPCGCollisionShapeData *local_190;
  UPCGVirtualTextureData *local_188;
  FName local_180;
  FName *local_178;
  FPCGGetDataFunctionRegistryParams *local_170;
  FPCGGetDataFunctionRegistryOutput *local_168;
  FSparseArrayAllocationInfo local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  TObjectPtr<UPCGData_const_>_u_0 local_118;
  undefined8 local_110;
  undefined1 local_108 [32];
  ForElementType<unsigned_int> local_e8;
  int local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  TObjectPtr<UPCGData_const_>_u_0 local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_168 = param_4;
  local_170 = param_2;
  if ((param_3 == (UActorComponent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                         ,0xec,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  if (param_2->bIgnorePCGGeneratedComponents != false) {
    pFVar18 = (FName *)(param_3->ComponentTags).AllocatorInstance.Data;
    pFVar29 = pFVar18 + (param_3->ComponentTags).ArrayNum;
    for (; pFVar18 != pFVar29; pFVar18 = pFVar18 + 1) {
      if (*pFVar18 == PCGHelpers::DefaultPCGTag) {
        return 0;
      }
    }
  }
  iVar9 = 0;
  EVar3 = param_2->DataTypeFilter;
  local_118.DebugPtr = (UPCGData *)0x0;
  local_110 = 0;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (ForElementType<unsigned_int>)0x0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = -1;
  local_d4 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_b8.DebugPtr = (UPCGData *)0x0;
  local_b0 = 0x100;
  local_ac = 0;
  local_a4 = 0xffffffff;
  if ((~(byte)(EVar3 >> 2) & 1) == 0) {
    if (param_3 == (UActorComponent *)0x0) {
LAB_1499de8c5:
      this_01 = Cast<USplineComponent,UActorComponent>(param_3);
      if ((this_01 != (USplineComponent *)0x0) &&
         (iVar12 = USplineComponent::GetNumberOfSplinePoints(this_01), 0 < iVar12)) {
        this_00 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(param_1);
        UPCGSplineData::Initialize(this_00,this_01);
        goto LAB_1499de8f7;
      }
    }
    else {
      pUVar13 = Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
      iVar12 = (int)pUVar13->_padding_;
      if ((*(int *)(param_3->_padding_ + 0x38) < iVar12) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
          &pUVar13->_padding_)) goto LAB_1499de8c5;
      bVar8 = IsInGameThread();
      if (param_1 == (FPCGContext *)0x0) {
        if ((!bVar8) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749225>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0xa9,"Context != nullptr || IsInGameThread()"), bVar8)) {
          pcVar6 = (code *)swi(3);
          iVar9 = (*pcVar6)();
          return iVar9;
        }
LAB_1499de7de:
        pUVar14 = GetTransientPackageAsObject();
        this_00 = (UPCGSplineData *)NewObject<UPCGLandscapeSplineData>(pUVar14);
        UPCGLandscapeSplineData::Initialize
                  ((UPCGLandscapeSplineData *)this_00,(ULandscapeSplinesComponent *)param_3);
      }
      else {
        if (bVar8) goto LAB_1499de7de;
        if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749348>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar8)) {
          pcVar6 = (code *)swi(3);
          iVar9 = (*pcVar6)();
          return iVar9;
        }
        FGCScopeGuard::FGCScopeGuard(&local_227);
        pUVar14 = GetTransientPackageAsObject();
        this_00 = (UPCGSplineData *)NewObject<UPCGLandscapeSplineData>(pUVar14);
        FGCScopeGuard::~FGCScopeGuard(&local_227);
        if ((this_00 == (UPCGSplineData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x12a,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          iVar9 = (*pcVar6)();
          return iVar9;
        }
        local_198 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UPCGSplineData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>
                  (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_1b8,(bool *)&local_198);
        UPCGLandscapeSplineData::Initialize
                  ((UPCGLandscapeSplineData *)this_00,(ULandscapeSplinesComponent *)param_3);
      }
LAB_1499de8f7:
      FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)&local_118.ObjectPtr,(UPCGData *)this_00);
    }
    if (local_118.DebugPtr == (UPCGData *)0x0) goto LAB_1499de914;
  }
  else {
LAB_1499de914:
    if ((~(byte)(EVar3 >> 8) & 1) == 0) {
      if (param_3 == (UActorComponent *)0x0) goto LAB_1499dea20;
      pUVar13 = Z_Construct_UClass_UShapeComponent_NoRegister();
      iVar12 = (int)pUVar13->_padding_;
      if (((*(int *)(param_3->_padding_ + 0x38) < iVar12) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
           &pUVar13->_padding_)) ||
         (bVar8 = UPCGCollisionShapeData::IsSupported((UShapeComponent *)param_3), !bVar8)) {
        pUVar13 = Z_Construct_UClass_UBillboardComponent_NoRegister();
        iVar12 = (int)pUVar13->_padding_;
        if ((*(int *)(param_3->_padding_ + 0x38) < iVar12) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar13->_padding_)) {
          pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar12 = (int)pUVar13->_padding_;
          if ((iVar12 <= *(int *)(param_3->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
              &pUVar13->_padding_)) {
            bVar8 = IsInGameThread();
            if (param_1 == (FPCGContext *)0x0) {
              if ((!bVar8) &&
                 (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<4331830188552749225>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                     ,0xa9,"Context != nullptr || IsInGameThread()"), bVar8)) {
                pcVar6 = (code *)swi(3);
                iVar9 = (*pcVar6)();
                return iVar9;
              }
LAB_1499de9f9:
              pUVar14 = GetTransientPackageAsObject();
              this_02 = (UPCGCollisionShapeData *)NewObject<UPCGPrimitiveData>(pUVar14);
            }
            else {
              if (bVar8) goto LAB_1499de9f9;
              if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
                 (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<4331830188552749348>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                     ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar8)) {
                pcVar6 = (code *)swi(3);
                iVar9 = (*pcVar6)();
                return iVar9;
              }
              FGCScopeGuard::FGCScopeGuard(&local_226);
              pUVar14 = GetTransientPackageAsObject();
              this_02 = (UPCGCollisionShapeData *)NewObject<UPCGPrimitiveData>(pUVar14);
              FGCScopeGuard::~FGCScopeGuard(&local_226);
              if ((this_02 == (UPCGCollisionShapeData *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Object",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                     ,0x12a,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                iVar9 = (*pcVar6)();
                return iVar9;
              }
              local_190 = this_02;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this_02 != (UPCGCollisionShapeData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this_02);
              }
              TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              ::Emplace<TObjectPtr<UObject>_>
                        (&param_1->AsyncObjects,(TObjectPtr<UObject> *)(local_1b8 + 4),
                         (bool *)&local_190);
            }
            UPCGPrimitiveData::Initialize
                      ((UPCGPrimitiveData *)this_02,(UPrimitiveComponent *)param_3);
            goto LAB_1499dea14;
          }
        }
      }
      else {
        this_02 = FPCGContext::NewObject_AnyThread<UPCGCollisionShapeData>(param_1);
        UPCGCollisionShapeData::Initialize(this_02,(UShapeComponent *)param_3);
LAB_1499dea14:
        FPCGDataPtrWrapper::operator=
                  ((FPCGDataPtrWrapper *)&local_118.ObjectPtr,(UPCGData *)this_02);
      }
LAB_1499dea20:
      if (local_118.DebugPtr != (UPCGData *)0x0) goto LAB_1499debcc;
    }
    if ((EVar3 >> 0xc & 1) == 0) goto LAB_1499df45b;
    if (param_3 != (UActorComponent *)0x0) {
      pUVar13 = Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
      iVar12 = (int)pUVar13->_padding_;
      if ((iVar12 <= *(int *)(param_3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
          &pUVar13->_padding_)) {
        bVar8 = IsInGameThread();
        if (param_1 == (FPCGContext *)0x0) {
          if ((!bVar8) &&
             (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4331830188552749225>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                 ,0xa9,"Context != nullptr || IsInGameThread()"), bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
LAB_1499deaa1:
          pUVar14 = GetTransientPackageAsObject();
          this_03 = NewObject<UPCGVirtualTextureData>(pUVar14);
        }
        else {
          if (bVar8) goto LAB_1499deaa1;
          if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
             (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4331830188552749348>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                 ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
          FGCScopeGuard::FGCScopeGuard(&local_225);
          pUVar14 = GetTransientPackageAsObject();
          this_03 = NewObject<UPCGVirtualTextureData>(pUVar14);
          FGCScopeGuard::~FGCScopeGuard(&local_225);
          if ((this_03 == (UPCGVirtualTextureData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                 ,0x12a,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
          local_188 = this_03;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_03 != (UPCGVirtualTextureData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_03);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>
                    (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_1b0,(bool *)&local_188);
        }
        UPCGVirtualTextureData::Initialize(this_03,(URuntimeVirtualTextureComponent *)param_3);
        FPCGDataPtrWrapper::operator=
                  ((FPCGDataPtrWrapper *)&local_118.ObjectPtr,(UPCGData *)this_03);
        pUVar4 = (this_03->RuntimeVirtualTexture).field0_0x0.DebugPtr;
        if (pUVar4 != (URuntimeVirtualTexture *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          local_180 = *(FName *)&pUVar4->field_0x18;
          local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f0.Data.ArrayNum = 0;
          local_1f0.Data.ArrayMax = 0;
          ::FName::ToString(&local_180,&local_1f0);
          this_04 = StaticEnum<enum_ERuntimeVirtualTextureMaterialType>();
          if ((this_04 == (UEnum *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("MaterialTypeEnum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                                 ,0x12f,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
          UEnum::GetNameStringByValue(this_04,&local_150,(ulonglong)pUVar4->MaterialType);
          pFVar15 = PCGComputeHelpers::GetPrefixedDataLabel(&local_140,&local_1f0);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_108,
                     (FString *)(local_1b0 + 4),(bool *)pFVar15);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          pFVar15 = PCGComputeHelpers::GetPrefixedDataLabel(&local_130,&local_150);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_108,
                     &local_1a8,(bool *)pFVar15);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    if (local_118.DebugPtr == (UPCGData *)0x0) goto LAB_1499df45b;
  }
LAB_1499debcc:
  local_224 = (param_3->ComponentTags).ArrayNum;
  uVar19 = (ulonglong)(int)local_224;
  iVar9 = 1;
  pFVar29 = (FName *)(param_3->ComponentTags).AllocatorInstance.Data;
  local_178 = pFVar29 + uVar19;
  while( true ) {
    pFVar18 = local_178;
    if ((param_3->ComponentTags).ArrayNum != (int)uVar19) {
      local_228 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_228);
    }
    if (pFVar29 == pFVar18) break;
    ::FName::ToString(pFVar29,&local_220);
    if (local_d4 == 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,1,(ForAnyElementType *)local_108,(int *)(local_108 + 8),
                          (int *)(local_108 + 0xc));
      iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),1);
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
      if (local_e8 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_e8;
      }
      bVar17 = (byte)iVar11 & 0x1f;
      if (iVar11 < 0) {
        iVar11 = iVar11 + 0x1f;
        bVar17 = bVar17 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar23 + (longlong)(iVar11 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar17 & 0x1f));
      iVar11 = local_d8;
    }
    else {
      local_d4 = local_d4 + -1;
      iVar11 = *(int *)(local_108._0_8_ + (longlong)local_d8 * 0x18 + 4);
      iVar12 = local_d8;
      if (local_d4 != 0) {
        *(undefined4 *)(local_108._0_8_ + (longlong)iVar11 * 0x18) = 0xffffffff;
      }
    }
    local_d8 = iVar11;
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_108,&local_160,iVar12);
    puVar20 = (undefined8 *)0x0;
    iVar12 = 0;
    if (local_160.Pointer != (undefined8 *)0x0) {
      *(undefined8 *)local_160.Pointer = 0;
      *(FScriptContainerElement **)local_160.Pointer = local_220.Data.AllocatorInstance.Data;
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)local_160.Pointer + 8) = local_220.Data.ArrayNum;
      *(int *)((longlong)local_160.Pointer + 0xc) = local_220.Data.ArrayMax;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      *(undefined4 *)((longlong)local_160.Pointer + 0x10) = 0xffffffff;
      puVar20 = local_160.Pointer;
    }
    if (*(int *)(puVar20 + 1) == 0) {
      pwVar26 = L"";
    }
    else {
      pwVar26 = (wchar_t *)*puVar20;
      iVar12 = *(int *)(puVar20 + 1) + -1;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar26);
    if ((local_108._8_4_ - local_d4 != 1) && (local_108._8_4_ != local_d4)) {
      FVar21.Data = (FScriptContainerElement *)local_d0;
      if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar21.Data = local_c8.Data;
      }
      iVar12 = *(int *)((longlong)FVar21.Data + (ulonglong)(local_c0 - 1 & uVar10) * 4);
      pFVar24 = (FScriptContainerElement *)local_108._0_8_;
      while (iVar12 != -1) {
        lVar25 = (longlong)iVar12 * 0x18;
        iVar11 = *(int *)(pFVar24 + lVar25 + 8);
        if (iVar11 == *(int *)(puVar20 + 1)) {
          if (1 < iVar11) {
            iVar11 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(pFVar24 + lVar25),(wchar_t *)*puVar20);
            bVar8 = iVar11 == 0;
            pFVar24 = (FScriptContainerElement *)local_108._0_8_;
            goto LAB_1499def3f;
          }
LAB_1499defd3:
          if (iVar12 != -1) {
            if (*(void **)(pFVar24 + (longlong)iVar12 * 0x18) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar24 + (longlong)iVar12 * 0x18));
            }
            memmove(pFVar24 + (longlong)iVar12 * 0x18,puVar20,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_108,local_160.Index,1);
            goto LAB_1499df24c;
          }
          break;
        }
        bVar8 = iVar11 + *(int *)(puVar20 + 1) == 1;
LAB_1499def3f:
        if (bVar8) goto LAB_1499defd3;
        iVar12 = *(int *)(pFVar24 + lVar25 + 0x10);
      }
    }
    uVar27 = 1;
    uVar22 = local_108._8_4_ - local_d4;
    if (3 < uVar22) {
      uVar19 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_1a8.Data.ArrayNum = (int)lVar25;
      uVar27 = 1 << ((byte)lVar25 & 0x1f);
    }
    if (((int)uVar22 < 1) || ((int)uVar27 <= (int)local_c0)) {
      uVar10 = local_c0 - 1 & uVar10;
      *(uint *)((longlong)puVar20 + 0x14) = uVar10;
      FVar21.Data = (FScriptContainerElement *)local_d0;
      if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar21.Data = local_c8.Data;
      }
      lVar25 = (longlong)(int)(local_c0 - 1 & uVar10);
      *(undefined4 *)(puVar20 + 2) = *(undefined4 *)((longlong)FVar21.Data + lVar25 * 4);
      *(int *)((longlong)FVar21.Data + lVar25 * 4) = local_160.Index;
    }
    else {
      local_c0 = uVar27;
      if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
      }
      if (uVar27 != 0) {
        uVar10 = uVar27;
        if (uVar27 < 2) {
          if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
            uVar10 = 0;
            goto LAB_1499df01d;
          }
        }
        else {
LAB_1499df01d:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar10,4)
          ;
        }
        if (0 < (int)uVar27) {
          uVar19 = 0;
          uVar28 = (ulonglong)uVar27;
          do {
            FVar21.Data = (FScriptContainerElement *)local_d0;
            if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar21.Data = local_c8.Data;
            }
            uVar16 = (longlong)(int)uVar27 - 1U & uVar19;
            uVar19 = uVar19 + 1;
            *(undefined4 *)((longlong)FVar21.Data + uVar16 * 4) = 0xffffffff;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
      }
      if (local_c0 != 0) {
        pTStack_208 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
        uStack_20c = 1;
        uVar10 = 0;
        local_210 = 0;
        uStack_1fc = 0;
        if (local_e0 != 0) {
          FVar23 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
          if (local_e8 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = local_e8;
          }
          uVar22 = *(uint *)FVar23;
          local_210 = 0;
          while (uVar22 == 0) {
            uVar10 = uVar10 + 0x20;
            lVar25 = (longlong)local_210;
            local_210 = local_210 + 1;
            uStack_1fc = (ulonglong)uVar10 << 0x20;
            if ((int)(local_e0 + -1 + (local_e0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_210) {
              uStack_1fc = CONCAT44(uVar10,local_e0);
              goto LAB_1499df134;
            }
            uVar22 = ((uint *)((longlong)FVar23 + 4))[lVar25];
          }
          uStack_20c = -uVar22 & uVar22;
          uVar19 = (ulonglong)uStack_20c * 2 + 1;
          lVar25 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_1a8.Data.ArrayMax = (int)lVar25;
          iVar12 = (uVar10 - 1) + local_1a8.Data.ArrayMax;
          if (local_e0 < iVar12) {
            iVar12 = local_e0;
          }
          uStack_1fc._4_4_ = (int)((ulonglong)uStack_1fc >> 0x20);
          uStack_1fc = CONCAT44(uStack_1fc._4_4_,iVar12);
        }
LAB_1499df134:
        local_200 = 0xffffffff;
        local_1e0 = (longlong *)local_108;
        local_1d8._padding_ = CONCAT44(uStack_20c,local_210);
        local_1d8.UnvisitedBitMask = 0xffffffff;
        local_1d8.CurrentBitIndex = (int)uStack_1fc;
        local_1d8.BaseBitIndex = uStack_1fc._4_4_;
        local_1d8._28_4_ = uStack_1f4;
        local_1d8.Array = pTStack_208;
        if ((int)uStack_1fc < local_e0) {
          do {
            iVar11 = local_1d8.CurrentBitIndex;
            puVar20 = (undefined8 *)(*local_1e0 + (longlong)local_1d8.CurrentBitIndex * 0x18);
            iVar12 = *(int *)(*local_1e0 + 8 + (longlong)local_1d8.CurrentBitIndex * 0x18);
            if (iVar12 == 0) {
              pwVar26 = L"";
              iVar12 = 0;
            }
            else {
              pwVar26 = (wchar_t *)*puVar20;
              iVar12 = iVar12 + -1;
            }
            uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar26);
            uVar10 = local_c0 - 1 & uVar10;
            *(uint *)((longlong)puVar20 + 0x14) = uVar10;
            FVar21.Data = (FScriptContainerElement *)local_d0;
            if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar21.Data = local_c8.Data;
            }
            lVar25 = (longlong)(int)(local_c0 - 1 & uVar10);
            *(undefined4 *)(puVar20 + 2) = *(undefined4 *)((longlong)FVar21.Data + lVar25 * 4);
            *(int *)((longlong)FVar21.Data + lVar25 * 4) = iVar11;
            local_1d8.UnvisitedBitMask = local_1d8.UnvisitedBitMask & ~local_1d8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d8);
          } while (local_1d8.CurrentBitIndex < (local_1d8.Array)->NumBits);
        }
      }
    }
LAB_1499df24c:
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    uVar19 = (ulonglong)local_224;
    pFVar29 = pFVar29 + 1;
  }
  if ((local_170->bAddActorTags != false) && (param_3->OwnerPrivate != (AActor *)0x0)) {
    local_98._0_8_ = (void *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    Algo::
    Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,_FPCGGetDataFunctionRegistry::DefaultDataFromComponent_::__l2::<lambda_1>_>
              (&param_3->OwnerPrivate->Tags,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,local_228);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_108,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,0);
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((void *)local_98._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  pFVar7 = local_168;
  pTVar5 = (TObjectPtr<UPCGData_const_>_u_0 *)
           (local_168->Collection).TaggedData.AllocatorInstance.Data;
  if (((pTVar5 <= &local_118) &&
      (&local_118 < pTVar5 + (longlong)(local_168->Collection).TaggedData.ArrayMax * 0xf)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  iVar12 = (pFVar7->Collection).TaggedData.ArrayNum;
  piVar1 = &(pFVar7->Collection).TaggedData.ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)pFVar7,piVar1);
  }
  (pFVar7->Collection).TaggedData.ArrayNum = iVar12 + 1;
  this_05 = (FPCGDataPtrWrapper *)
            ((pFVar7->Collection).TaggedData.AllocatorInstance.Data + (longlong)iVar12 * 0x78);
  FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_05,(FPCGDataPtrWrapper *)&local_118.ObjectPtr);
  *(undefined8 *)
   &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_05 + 1))->Elements = 0;
  this_05[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_05[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_05[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_05[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_05[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_05[4].Data.field0_0x0 + 4) = 0;
  this_05[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_05[5].WeakData.WeakPtr.ObjectIndex = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_05 + 1),
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_108);
  this_05[6].Data.field0_0x0 = local_b8;
  *(undefined1 *)&this_05[6].WeakData.WeakPtr.ObjectIndex = (undefined1)local_b0;
  *(undefined1 *)((longlong)&this_05[6].WeakData.WeakPtr.ObjectIndex + 1) = local_b0._1_1_;
  *(undefined8 *)&this_05[6].WeakData.WeakPtr.ObjectSerialNumber = local_ac;
  *(undefined4 *)((longlong)&this_05[7].Data.field0_0x0 + 4) = local_a4;
LAB_1499df45b:
  local_c0 = 0;
  if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_c8.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_108,0,local_108._8_4_);
  bVar8 = local_108._12_4_ != 0;
  local_108._8_8_ = (ulonglong)(uint)local_108._12_4_ << 0x20;
  if (bVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
  }
  local_d4 = 0;
  local_e0 = 0;
  local_d8 = -1;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
  }
  if (local_e8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_118.ObjectPtr);
  return iVar9;
}

// GetDataFromActor @ 1499f5180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

int __thiscall
FPCGGetDataFunctionRegistry::GetDataFromActor
          (FPCGGetDataFunctionRegistry *this,FPCGContext *param_1,
          FPCGGetDataFunctionRegistryParams *param_2,AActor *param_3,
          FPCGGetDataFunctionRegistryOutput *param_4)

{
  int iVar1;
  code *pcVar2;
  FPCGGetDataFunctionRegistryOutput *pFVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FPCGContext *local_48 [2];
  
  pFVar3 = param_4;
  iVar5 = (this->ActorParsingFunctions).ArrayNum;
  pFVar8 = (this->ActorParsingFunctions).AllocatorInstance.Data;
  iVar1 = (param_4->Collection).TaggedData.ArrayNum;
  pFVar9 = pFVar8 + (longlong)iVar5 * 0x40;
  while( true ) {
    if ((this->ActorParsingFunctions).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (pFVar8 == pFVar9) break;
    param_4 = (FPCGGetDataFunctionRegistryOutput *)param_3;
    local_48[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar8);
    pcVar2 = *(code **)pFVar8;
    pFVar7 = pFVar8 + 0x10;
    if (*(FScriptContainerElement **)(pFVar8 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar7 = *(FScriptContainerElement **)(pFVar8 + 0x28);
    }
    uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
    cVar4 = (*pcVar2)(uVar6,local_48,param_2,&param_4,pFVar3);
    if (cVar4 != '\0') break;
    pFVar8 = pFVar8 + 0x40;
  }
  iVar5 = (pFVar3->Collection).TaggedData.ArrayNum;
  if (iVar5 == iVar1) {
    iVar5 = DefaultDataFromActor(this,param_1,param_2,param_3,pFVar3);
  }
  else {
    iVar5 = iVar5 - iVar1;
  }
  return iVar5;
}

// GetDataFromComponent @ 1499f5290

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FPCGGetDataFunctionRegistry::GetDataFromComponent
          (FPCGGetDataFunctionRegistry *this,FPCGContext *param_1,
          FPCGGetDataFunctionRegistryParams *param_2,UActorComponent *param_3,
          FPCGGetDataFunctionRegistryOutput *param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  int local_res20;
  UActorComponent *local_48;
  FPCGContext *local_40;
  
  if (param_3 == (UActorComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                       ,0xd0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  if (param_2->ComponentSelector != (FPCGComponentSelectorSettings *)0x0) {
    bVar2 = FPCGComponentSelectorSettings::FilterComponent(param_2->ComponentSelector,param_3);
    if (!bVar2) {
      return 0;
    }
  }
  pFVar7 = (this->ComponentParsingFunctions).AllocatorInstance.Data;
  iVar4 = (this->ComponentParsingFunctions).ArrayNum;
  local_res20 = (param_4->Collection).TaggedData.ArrayNum;
  pFVar8 = pFVar7 + (longlong)iVar4 * 0x40;
  while( true ) {
    if ((this->ComponentParsingFunctions).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar8) break;
    local_48 = param_3;
    local_40 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar7);
    pcVar1 = *(code **)pFVar7;
    pFVar6 = pFVar7 + 0x10;
    if (*(FScriptContainerElement **)(pFVar7 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar6 = *(FScriptContainerElement **)(pFVar7 + 0x28);
    }
    uVar5 = (**(code **)(*(longlong *)pFVar6 + 8))();
    cVar3 = (*pcVar1)(uVar5,&local_40,param_2,&local_48,param_4);
    if (cVar3 != '\0') break;
    pFVar7 = pFVar7 + 0x40;
  }
  iVar4 = (param_4->Collection).TaggedData.ArrayNum;
  if (iVar4 != local_res20) {
    return iVar4 - local_res20;
  }
  iVar4 = DefaultDataFromComponent(this,param_1,param_2,param_3,param_4);
  return iVar4;
}

// RegisterDataFromActorFunction @ 149a099a0

ulong64 __thiscall
FPCGGetDataFunctionRegistry::RegisterDataFromActorFunction
          (FPCGGetDataFunctionRegistry *this,
          TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>
          *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                       ,0x2c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  iVar4 = (this->ActorParsingFunctions).ArrayNum;
  piVar1 = &(this->ActorParsingFunctions).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->ActorParsingFunctions).AllocatorInstance,piVar1);
  }
  pFVar7 = (this->ActorParsingFunctions).AllocatorInstance.Data;
  (this->ActorParsingFunctions).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x40;
  *(longlong *)pFVar7 = *(longlong *)param_1;
  *(longlong *)(pFVar7 + 0x28) = 0;
  if (*(longlong *)pFVar7 != 0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  *(ulong64 *)(pFVar7 + 0x30) = this->NextFunctionHandle;
  uVar5 = this->NextFunctionHandle;
  this->NextFunctionHandle = uVar5 + 1;
  return uVar5;
}

// RegisterDataFromComponentFunction @ 149a09a70

ulong64 __thiscall
FPCGGetDataFunctionRegistry::RegisterDataFromComponentFunction
          (FPCGGetDataFunctionRegistry *this,
          TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>
          *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                       ,0x3d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  iVar4 = (this->ComponentParsingFunctions).ArrayNum;
  piVar1 = &(this->ComponentParsingFunctions).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->ComponentParsingFunctions).AllocatorInstance,piVar1);
  }
  pFVar7 = (this->ComponentParsingFunctions).AllocatorInstance.Data;
  (this->ComponentParsingFunctions).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x40;
  *(longlong *)pFVar7 = *(longlong *)param_1;
  *(longlong *)(pFVar7 + 0x28) = 0;
  if (*(longlong *)pFVar7 != 0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  *(ulong64 *)(pFVar7 + 0x30) = this->NextFunctionHandle;
  uVar5 = this->NextFunctionHandle;
  this->NextFunctionHandle = uVar5 + 1;
  return uVar5;
}

// UnregisterDataFromActorFunction @ 149a11620

void __thiscall
FPCGGetDataFunctionRegistry::UnregisterDataFromActorFunction
          (FPCGGetDataFunctionRegistry *this,ulong64 param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                       ,0x33,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar8 = (this->ActorParsingFunctions).AllocatorInstance.Data;
  iVar5 = (this->ActorParsingFunctions).ArrayNum;
  pFVar7 = pFVar8;
  if (pFVar8 != pFVar8 + (longlong)iVar5 * 0x40) {
    while (*(ulong64 *)(pFVar7 + 0x30) != param_1) {
      pFVar7 = pFVar7 + 0x40;
      if (pFVar7 == pFVar8 + (longlong)iVar5 * 0x40) {
        return;
      }
    }
    uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar8 >> 6);
    if (uVar6 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar8 = (this->ActorParsingFunctions).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x40;
      if (*(longlong *)pFVar8 != 0) {
        pFVar7 = pFVar8 + 0x10;
        if (*(FScriptContainerElement **)(pFVar8 + 0x28) != (FScriptContainerElement *)0x0) {
          pFVar7 = *(FScriptContainerElement **)(pFVar8 + 0x28);
        }
        (**(code **)(*(longlong *)pFVar7 + 0x10))();
      }
      iVar5 = (this->ActorParsingFunctions).ArrayNum + ~uVar6;
      if (iVar5 != 0) {
        memmove(pFVar8,pFVar8 + 0x40,(longlong)iVar5 << 6);
      }
      piVar1 = &(this->ActorParsingFunctions).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,&(this->ActorParsingFunctions).AllocatorInstance,
                 (this->ActorParsingFunctions).ArrayNum,&(this->ActorParsingFunctions).ArrayMax);
    }
  }
  return;
}

// UnregisterDataFromComponentFunction @ 149a11780

void __thiscall
FPCGGetDataFunctionRegistry::UnregisterDataFromComponentFunction
          (FPCGGetDataFunctionRegistry *this,ulong64 param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGGetDataFunctionRegistry.cpp"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar8 = (this->ComponentParsingFunctions).AllocatorInstance.Data;
  iVar5 = (this->ComponentParsingFunctions).ArrayNum;
  pFVar7 = pFVar8;
  if (pFVar8 != pFVar8 + (longlong)iVar5 * 0x40) {
    while (*(ulong64 *)(pFVar7 + 0x30) != param_1) {
      pFVar7 = pFVar7 + 0x40;
      if (pFVar7 == pFVar8 + (longlong)iVar5 * 0x40) {
        return;
      }
    }
    uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar8 >> 6);
    if (uVar6 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar8 = (this->ComponentParsingFunctions).AllocatorInstance.Data +
               (longlong)(int)uVar6 * 0x40;
      if (*(longlong *)pFVar8 != 0) {
        pFVar7 = pFVar8 + 0x10;
        if (*(FScriptContainerElement **)(pFVar8 + 0x28) != (FScriptContainerElement *)0x0) {
          pFVar7 = *(FScriptContainerElement **)(pFVar8 + 0x28);
        }
        (**(code **)(*(longlong *)pFVar7 + 0x10))();
      }
      iVar5 = (this->ComponentParsingFunctions).ArrayNum + ~uVar6;
      if (iVar5 != 0) {
        memmove(pFVar8,pFVar8 + 0x40,(longlong)iVar5 << 6);
      }
      piVar1 = &(this->ComponentParsingFunctions).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,&(this->ComponentParsingFunctions).AllocatorInstance,
                 (this->ComponentParsingFunctions).ArrayNum,
                 &(this->ComponentParsingFunctions).ArrayMax);
    }
  }
  return;
}

// ~FPCGGetDataFunctionRegistry @ 149f343d0

void __thiscall
FPCGGetDataFunctionRegistry::~FPCGGetDataFunctionRegistry(FPCGGetDataFunctionRegistry *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int>
            ((TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>
              *)(this->ComponentParsingFunctions).AllocatorInstance.Data,
             (this->ComponentParsingFunctions).ArrayNum);
  pFVar1 = (this->ComponentParsingFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int>
            ((TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>
              *)(this->ActorParsingFunctions).AllocatorInstance.Data,
             (this->ActorParsingFunctions).ArrayNum);
  pFVar1 = (this->ActorParsingFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

