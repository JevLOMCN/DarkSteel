// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b7a390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGDeleteTagsElement::ExecuteInternal(FPCGDeleteTagsElement *this,FPCGContext *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  undefined8 *puVar1;
  <lambda_1> <Var2;
  UPCGNode *this_01;
  FPCGTaggedData *pFVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar13;
  ulonglong uVar14;
  FPCGTaggedData *pFVar15;
  byte bVar16;
  ForAnyElementType FVar17;
  TObjectPtr<UPCGSettings>_u_0 TVar18;
  longlong lVar19;
  TObjectPtr<UPCGSettings>_u_0 TVar20;
  wchar_t *pwVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  TObjectPtr<UPCGSettings>_u_0 TVar27;
  FScriptContainerElement *pFVar28;
  ForElementType<unsigned_int> FVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  int *piVar33;
  bool bVar34;
  undefined1 auStackY_278 [32];
  <lambda_1> local_226 [2];
  uint local_224;
  undefined1 local_220 [8];
  TObjectPtr<UPCGSettings>_u_0 local_218;
  FPCGDataCollection *local_210;
  uint local_208;
  TObjectPtr<UPCGSettings>_u_0 local_200;
  FScriptContainerElement *local_1f8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1f0;
  uint local_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d8;
  undefined4 local_1d0;
  undefined8 uStack_1cc;
  undefined4 uStack_1c4;
  FPCGTaggedData *local_1c0;
  FScriptContainerElement *local_1b8;
  int *local_1b0;
  int *local_1a8;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  undefined4 local_178;
  int local_174;
  FString local_170;
  int *local_160;
  FPCGTaggedData *local_150;
  int *local_148;
  undefined1 local_140 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  int local_118;
  FScriptContainerElement *local_110;
  int iStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  FScriptContainerElement *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  TVar18.DebugPtr = (UPCGSettings *)0x0;
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId82,"FPCGManageTagsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDeleteTags.cpp"
               ,0x52);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId82);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDeleteTags.cpp"
                         ,0x53,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_01 = param_1->Node;
    if ((this_01 == (UPCGNode *)0x0) ||
       (pUVar11 = UPCGNode::GetSettings(this_01), pUVar11 == (UPCGSettings *)0x0)) {
      pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDeleteTagsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_226[0]);
      if (pFVar15 != (FPCGTaggedData *)0x0) {
        local_200.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar15->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_200.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b7a4ca;
          UE::GC::MarkAsReachable((UObject *)local_200.DebugPtr);
        }
        if (local_200.DebugPtr != (UPCGSettings *)0x0) {
          pUVar10 = UPCGDeleteTagsSettings::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_200.ObjectPtr,pUVar10);
          if (bVar6) {
            local_218.DebugPtr = local_200.DebugPtr;
            TVar12 = local_200;
            goto LAB_149b7a4d2;
          }
        }
      }
    }
    else {
      pUVar11 = UPCGNode::GetSettings(this_01);
      TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
      if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
        local_218.DebugPtr = TVar12.DebugPtr;
        pUVar10 = UPCGDeleteTagsSettings::StaticClass();
        iVar9 = (int)pUVar10->_padding_;
        if ((iVar9 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar10->_padding_)) goto LAB_149b7a4d2;
      }
    }
LAB_149b7a4ca:
    local_218.DebugPtr = (UPCGSettings *)0x0;
    TVar12.DebugPtr = TVar18.DebugPtr;
  }
  else {
    pUVar10 = UPCGDeleteTagsSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (!bVar6) goto LAB_149b7a4ca;
    local_218 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    TVar12 = local_218;
  }
LAB_149b7a4d2:
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDeleteTags.cpp"
                         ,0x56,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if ((char)TVar12.DebugPtr[1]._padding_ == '\0') {
    pTVar13 = PCGHelpers::GetStringArrayFromCommaSeparatedList
                        (&local_128,(FString *)&TVar12.DebugPtr[1]._padding_);
    pFVar32 = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    uVar31 = pTVar13->ArrayNum;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
    local_138.AllocatorInstance.Data = local_128.AllocatorInstance.Data;
  }
  else {
    pTVar13 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                        (&local_138,(FString *)&TVar12.DebugPtr[1]._padding_,param_1);
    pFVar32 = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    uVar31 = pTVar13->ArrayNum;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (((int)uVar31 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  TVar27._0_4_ = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar31 == 0) goto LAB_149b7a8e8;
  if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar31);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar31);
  uVar24 = 1;
  if (3 < uVar31) {
    uVar26 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_178 = (undefined4)lVar19;
    uVar24 = 1 << ((byte)lVar19 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar24 <= (int)local_40)) goto LAB_149b7a8e8;
  local_40 = uVar24;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar24 != 0) {
    uVar22 = uVar24;
    if (uVar24 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar22 = 0;
        goto LAB_149b7a6fd;
      }
    }
    else {
LAB_149b7a6fd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar22,4);
    }
    if (0 < (int)uVar24) {
      uVar26 = (ulonglong)uVar24;
      TVar20.DebugPtr = TVar18.DebugPtr;
      do {
        FVar17.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_48.Data;
        }
        uVar14 = (longlong)(int)uVar24 - 1U & (ulonglong)TVar20.DebugPtr;
        TVar20.DebugPtr = (UPCGSettings *)((longlong)&(TVar20.DebugPtr)->_padding_ + 1);
        *(undefined4 *)(FVar17.Data + uVar14 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_1d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_1e0 = 0;
    uStack_1dc = 1;
    uStack_1cc = 0;
    if (local_60 != 0) {
      FVar29 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_68;
      }
      uVar24 = *(uint *)FVar29;
      TVar20.DebugPtr = TVar18.DebugPtr;
      while (uVar24 == 0) {
        TVar27._0_4_ = TVar20._0_4_ + 0x20;
        TVar27._4_4_ = 0;
        iVar9 = TVar18._0_4_;
        TVar18._0_4_ = iVar9 + 1;
        TVar18._4_4_ = 0;
        uStack_1cc = (ulonglong)TVar27._0_4_ << 0x20;
        local_1e0 = TVar18._0_4_;
        if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)TVar18._0_4_) {
          uStack_1cc = CONCAT44(TVar27._0_4_,local_60);
          goto LAB_149b7a820;
        }
        TVar20 = TVar27;
        uVar24 = ((uint *)((longlong)FVar29 + 4))[iVar9];
      }
      uStack_1dc = -uVar24 & uVar24;
      uVar26 = (ulonglong)uStack_1dc * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_174 = (int)lVar19;
      iVar9 = (TVar27._0_4_ - 1) + local_174;
      if (local_60 < iVar9) {
        iVar9 = local_60;
      }
      uStack_1cc._4_4_ = (int)((ulonglong)uStack_1cc >> 0x20);
      uStack_1cc = CONCAT44(uStack_1cc._4_4_,iVar9);
    }
LAB_149b7a820:
    local_1d0 = 0xffffffff;
    local_1a0 = (longlong *)local_88;
    local_198._padding_ = CONCAT44(uStack_1dc,local_1e0);
    local_198.UnvisitedBitMask = 0xffffffff;
    local_198.CurrentBitIndex = (int)uStack_1cc;
    local_198.BaseBitIndex = uStack_1cc._4_4_;
    local_198._28_4_ = uStack_1c4;
    local_198.Array = pTStack_1d8;
    if ((int)uStack_1cc < local_60) {
      do {
        iVar25 = local_198.CurrentBitIndex;
        puVar1 = (undefined8 *)(*local_1a0 + (longlong)local_198.CurrentBitIndex * 0x18);
        iVar9 = *(int *)(*local_1a0 + 8 + (longlong)local_198.CurrentBitIndex * 0x18);
        if (iVar9 == 0) {
          pwVar21 = L"";
          iVar9 = 0;
        }
        else {
          pwVar21 = (wchar_t *)*puVar1;
          iVar9 = iVar9 + -1;
        }
        TVar27._0_4_ = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar21);
        TVar27._0_4_ = local_40 - 1 & TVar27._0_4_;
        *(uint *)((longlong)puVar1 + 0x14) = TVar27._0_4_;
        FVar17.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_48.Data;
        }
        lVar19 = (longlong)(int)(local_40 - 1 & TVar27._0_4_);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar17.Data + lVar19 * 4);
        *(int *)(FVar17.Data + lVar19 * 4) = iVar25;
        local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
      } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
    }
  }
LAB_149b7a8e8:
  for (pFVar28 = pFVar32; pFVar28 != pFVar32 + (longlong)(int)uVar31 * 0x10;
      pFVar28 = pFVar28 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88,&local_170,
               (bool *)pFVar28);
  }
  bVar6 = (int)TVar12.DebugPtr[1]._padding_ == 0;
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_1f0,&PCGPinConstants::DefaultInputLabel);
  local_210 = &param_1->OutputData;
  uVar26 = (ulonglong)local_1f0.ArrayNum;
  local_1b0 = &(param_1->OutputData).TaggedData.ArrayMax;
  pFVar28 = local_1f0.AllocatorInstance.Data + 0x10;
  local_208 = local_1f0.ArrayNum;
  local_1c0 = (FPCGTaggedData *)(local_1f0.AllocatorInstance.Data + uVar26 * 0x78);
  local_1a8 = &(param_1->OutputData).TaggedData.ArrayNum;
  local_160 = local_1a8;
  local_148 = local_1b0;
LAB_149b7a97b:
  piVar5 = local_148;
  piVar23 = local_1b0;
  piVar33 = local_1a8;
  local_1f8 = pFVar28;
  if (local_1f0.ArrayNum != (uint)uVar26) {
    local_220[0] = 0;
    `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_220);
    piVar23 = piVar5;
    piVar33 = local_160;
  }
  pFVar15 = (FPCGTaggedData *)(pFVar28 + -0x10);
  local_1b0 = piVar23;
  local_1a8 = piVar33;
  if (pFVar15 == local_1c0) {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
    if ((FPCGTaggedData *)local_1f0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
    local_40 = 0;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    DestructItems<FString,int>((FString *)pFVar32,uVar31);
    if (pFVar32 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar32);
    }
    if (bVar34) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return true;
  }
  pFVar3 = (FPCGTaggedData *)(local_210->TaggedData).AllocatorInstance.Data;
  if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + *piVar23)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar9 = *piVar33;
  if (iVar9 == *piVar23) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)local_210,piVar23);
  }
  *piVar33 = iVar9 + 1;
  pFVar15 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       ((local_210->TaggedData).AllocatorInstance.Data + (longlong)iVar9 * 0x78),
                       pFVar15);
  iVar9 = *(int *)&(pFVar15->Tags).Elements.field_0x8;
  iVar25 = *(int *)&(pFVar15->Tags).Elements.field_0x34;
  this_00 = &pFVar15->Tags;
  local_150 = pFVar15;
  if (iVar9 != iVar25) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_00->Elements,0,*(int *)&(pFVar15->Tags).Elements.field_0x8);
    iVar9 = *(int *)&(pFVar15->Tags).Elements.field_0xc;
    iVar25 = 0;
    *(undefined4 *)&(pFVar15->Tags).Elements.field_0x8 = 0;
    if (iVar9 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)&(pFVar15->Tags).Elements.field_0xc)
      ;
      iVar9 = *(int *)&(pFVar15->Tags).Elements.field_0x8;
    }
    else {
      iVar9 = 0;
    }
    *(undefined4 *)&(pFVar15->Tags).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar15->Tags).Elements.field_0x34 = 0;
    *(undefined4 *)&(pFVar15->Tags).Elements.field_0x28 = 0;
  }
  TVar27._0_4_ = *(int *)(pFVar28 + 8) - *(int *)(pFVar28 + 0x34);
  if ((uint)(iVar9 - iVar25) < TVar27._0_4_) {
    if ((int)TVar27._0_4_ < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)TVar27._0_4_);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,TVar27._0_4_);
    if (TVar27._0_4_ < 4) {
      iVar9 = 1;
    }
    else {
      uVar26 = (ulonglong)((TVar27._0_4_ >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_170.Data.AllocatorInstance.Data._4_4_ = (undefined4)lVar19;
      iVar9 = 1 << ((byte)lVar19 & 0x1f);
    }
    iVar25 = (pFVar15->Tags).HashSize;
    if ((iVar25 == 0) || (iVar25 < iVar9)) {
      (pFVar15->Tags).HashSize = iVar9;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  local_224 = *(uint *)(pFVar28 + 0x28);
  iStack_108 = 0;
  uStack_104 = 1;
  local_f0 = 0;
  uStack_f4 = 0;
  if (local_224 != 0) {
    pFVar30 = *(FScriptContainerElement **)(pFVar28 + 0x20);
    if (pFVar30 == (FScriptContainerElement *)0x0) {
      pFVar30 = pFVar28 + 0x10;
    }
    TVar27._0_4_ = *(uint *)pFVar30;
    iStack_108 = 0;
    local_f0 = 0;
    while (TVar27._0_4_ == 0) {
      iStack_108 = iStack_108 + 1;
      local_f0 = local_f0 + 0x20;
      uStack_f4 = local_224;
      if ((int)((local_224 - 1) + ((int)(local_224 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_108)
      goto LAB_149b7abb6;
      TVar27._0_4_ = *(uint *)(pFVar30 + (longlong)iStack_108 * 4);
    }
    uStack_104 = -TVar27._0_4_ & TVar27._0_4_;
    uVar26 = (ulonglong)uStack_104 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_170.Data.ArrayNum = (int)lVar19;
    uStack_f4 = local_170.Data.ArrayNum + -1 + local_f0;
    if ((int)local_224 < (int)uStack_f4) {
      uStack_f4 = local_224;
    }
  }
LAB_149b7abb6:
  local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar28 + 0x10);
  uStack_ec = local_94;
  iStack_e8 = *(int *)(pFVar28 + 8) - *(int *)(pFVar28 + 0x34);
  local_1b8 = pFVar28 + 0x10;
  TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
  uStack_f8 = 0xffffffff;
  TVar27._0_4_ = local_224 & 0xffffffe0;
  TStack_d8.CurrentBitIndex = uStack_f4;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)local_224 >> 5;
  TStack_d8._28_4_ = local_94;
  TStack_d8.BaseBitIndex = local_f0;
  uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
  bVar16 = (byte)local_224;
  local_110 = pFVar28;
  local_e0 = pFVar28;
  TStack_d8.Array = local_100;
  if ((((int)local_224 < 0) || ((int)*(uint *)(pFVar28 + 0x28) < (int)local_224)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar15 = local_150;
  pFVar30 = local_1f8;
  TVar18 = local_218;
  uVar24 = *(uint *)(pFVar28 + 0x28);
  uVar22 = local_224;
  if (local_224 != uVar24) {
    pFVar28 = local_1b8;
    if (*(FScriptContainerElement **)(local_1b8 + 0x10) != (FScriptContainerElement *)0x0) {
      pFVar28 = *(FScriptContainerElement **)(local_1b8 + 0x10);
    }
    uVar22 = -1 << (bVar16 & 0x1f) & *(uint *)(pFVar28 + (longlong)iVar9 * 4);
    while (local_224 = uVar24, uVar22 == 0) {
      iVar9 = iVar9 + 1;
      TVar27._0_4_ = TVar27._0_4_ + 0x20;
      uVar22 = uVar24;
      if ((int)(((int)(uVar24 - 1) >> 0x1f & 0x1fU) + (uVar24 - 1)) >> 5 < iVar9)
      goto LAB_149b7ad00;
      uVar22 = *(uint *)(pFVar28 + (longlong)iVar9 * 4);
    }
    uVar26 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_118 = (int)lVar19;
    uVar22 = local_118 + -1 + TVar27._0_4_;
    if ((int)uVar24 < (int)uVar22) {
      uVar22 = uVar24;
    }
  }
LAB_149b7ad00:
  do {
    pFVar28 = local_e0;
    if (*(int *)(local_e0 + 8) - *(int *)(local_e0 + 0x34) != (int)uStack_b8) {
      local_226[0] = (<lambda_1>)0x0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_226);
    }
    if (((TStack_d8.CurrentBitIndex == uVar22) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar30 + 0x10))) &&
       (pFVar28 == pFVar30)) break;
    <Var2.Tag = (FString *)(*(longlong *)pFVar28 + (longlong)TStack_d8.CurrentBitIndex * 0x18);
    if (*(char *)((longlong)&TVar18.DebugPtr[1]._padding_ + 4) == '\0') {
      iVar9 = ((<Var2.Tag)->Data).ArrayNum;
      if (iVar9 == 0) {
        pwVar21 = L"";
        iVar9 = 0;
      }
      else {
        pwVar21 = (wchar_t *)((<Var2.Tag)->Data).AllocatorInstance.Data;
        iVar9 = iVar9 + -1;
      }
      TVar27._0_4_ = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar21);
      iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88,
                         TVar27._0_4_,<Var2.Tag);
      if ((iVar9 != -1) != bVar6) goto LAB_149b7ad94;
LAB_149b7add6:
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&pFVar15->Tags,(FString *)local_140,(bool *)<Var2.Tag);
    }
    else {
LAB_149b7ad94:
      if (((*(char *)((longlong)&TVar18.DebugPtr[1]._padding_ + 4) == '\x01') &&
          (bVar8 = Algo::
                   NoneOf<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,_FPCGDeleteTagsElement::ExecuteInternal_::__l25::<lambda_1>_>
                             ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                              local_88,<Var2), !bVar8 == bVar6)) ||
         ((*(char *)((longlong)&TVar18.DebugPtr[1]._padding_ + 4) == '\x02' &&
          (bVar8 = Algo::
                   NoneOf<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,_FPCGDeleteTagsElement::ExecuteInternal_::__l25::<lambda_2>_>
                             ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                              local_88,(<lambda_2>)<Var2.Tag), !bVar8 == bVar6))))
      goto LAB_149b7add6;
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  } while( true );
  pFVar28 = pFVar30 + 0x78;
  uVar26 = (ulonglong)local_208;
  goto LAB_149b7a97b;
}

// ExecutionLoopMode @ 149b88b20

EPCGElementExecutionLoopMode __thiscall
FPCGDeleteTagsElement::ExecutionLoopMode(FPCGDeleteTagsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGDeleteTagsElement::SupportsBasePointDataInputs(FPCGDeleteTagsElement *this,FPCGContext *param_1)

{
  return true;
}

