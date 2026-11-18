// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 5

// StaticStruct @ 146d39220

UScriptStruct * __cdecl FGameplayDebuggerNetPack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerNetPack.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayDebugger();
    Z_Registration_Info_UScriptStruct_FGameplayDebuggerNetPack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack,(UObject *)pUVar1,
                         L"GameplayDebuggerNetPack");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayDebuggerNetPack.OuterSingleton;
}

// ApplyToOwner @ 146d42fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGameplayDebuggerNetPack::ApplyToOwner(FGameplayDebuggerNetPack *this)

{
  byte bVar1;
  int iVar2;
  AGameplayDebuggerCategoryReplicator *pAVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FName *pFVar10;
  FName *pFVar11;
  FName *pFVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_48;
  
  if ((this->Owner).field0_0x0.DebugPtr == (AGameplayDebuggerCategoryReplicator *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2013542369864974164>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerCategoryReplicator.cpp"
                       ,0xac,"Owner");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iVar2 = (this->SavedData).ArrayNum;
    bVar6 = false;
    pFVar12 = (FName *)(this->SavedData).AllocatorInstance.Data;
    pFVar11 = pFVar12 + (longlong)iVar2 * 8;
    pFVar10 = pFVar12 + 4;
    while( true ) {
      if ((this->SavedData).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FGameplayDebuggerCategoryData,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar12 == pFVar11) break;
      pAVar3 = (this->Owner).field0_0x0.DebugPtr;
      uVar8 = TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_>::
              FindLastByPredicate<_FGameplayDebuggerNetPack::ApplyToOwner_::__l9::<lambda_1>_>
                        (&pAVar3->Categories,(<lambda_1>)*pFVar12,(pAVar3->Categories).ArrayNum);
      if (uVar8 != 0xffffffff) {
        pAVar3 = (this->Owner).field0_0x0.DebugPtr;
        uVar9 = 0;
        if ((int)uVar8 < (pAVar3->Categories).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)
                 ((pAVar3->Categories).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10);
        if (5 < (byte)LogGameplayDebugReplication._0_1_) {
          local_res10 = *(FName *)(lVar4 + 0x48);
          ::FName::ToString(&local_res10,&local_48);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        uVar8 = *(uint *)(lVar4 + 0x34);
        bVar1 = (byte)pFVar10[3].ComparisonIndex.Value;
        if ((uVar8 >> 7 & 1) != (uint)bVar1) {
          bVar6 = true;
          *(uint *)(lVar4 + 0x34) = ((uint)bVar1 << 7 ^ uVar8) & 0x80 ^ uVar8;
        }
        uVar8 = pFVar10[-2].ComparisonIndex.Value;
        if ((uVar8 != *(uint *)(lVar4 + 0x58)) ||
           (bVar7 = CompareItems<FString,int>
                              ((FString *)pFVar10[-3],*(FString **)(lVar4 + 0x50),uVar8), !bVar7)) {
          if (5 < (byte)LogGameplayDebugReplication._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
          }
          TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x50),
                     (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar10 + -3));
        }
        uVar8 = (pFVar10->ComparisonIndex).Value;
        if ((uVar8 != *(uint *)(lVar4 + 0x68)) ||
           (bVar7 = CompareItems<FGameplayDebuggerShape,int>
                              ((FGameplayDebuggerShape *)pFVar10[-1],
                               *(FGameplayDebuggerShape **)(lVar4 + 0x60),uVar8), !bVar7)) {
          if (5 < (byte)LogGameplayDebugReplication._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
          }
          TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x60),
                     (TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *)(pFVar10 + -1));
        }
      }
      pFVar12 = pFVar12 + 8;
      pFVar10 = pFVar10 + 8;
    }
    if (bVar6) {
      AActor::MarkComponentsRenderStateDirty((AActor *)(this->Owner).field0_0x0.DebugPtr);
      return;
    }
  }
  return;
}

// NetDeltaSerialize @ 146d52200

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FGameplayDebuggerNetPack::NetDeltaSerialize
          (FGameplayDebuggerNetPack *this,FNetDeltaSerializeInfo *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement FVar3;
  AGameplayDebuggerCategoryReplicator *pAVar4;
  FNetFastCategoryBaseState *this_00;
  longlong *plVar5;
  TSharedPtr<INetDeltaBaseState,1> *pTVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  FBitReader *this_01;
  code *pcVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  TConsoleVariableData<int> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  FNetFastCategoryBaseState *pFVar25;
  FNetFastCategoryBaseState *pFVar26;
  void *pvVar27;
  uint uVar28;
  ushort *puVar29;
  FScriptContainerElement FVar30;
  uint uVar31;
  int iVar32;
  FSharedReferencer<1> FVar33;
  FGameplayDebuggerDataPack *this_02;
  uint uVar34;
  uint uVar35;
  longlong lVar36;
  FNetFastCategoryBaseState *pFVar37;
  uint uVar38;
  FScriptContainerElement *pFVar39;
  longlong lVar40;
  FNetFastCategoryBaseState *pFVar41;
  FGameplayDebuggerCategory *pFVar42;
  byte bVar43;
  FBitWriter *this_03;
  byte local_res10 [8];
  FScriptContainerElement local_res18;
  byte local_res20 [8];
  longlong local_218;
  longlong local_210;
  ForAnyElementType local_208;
  int local_200 [6];
  FNetFastCategoryBaseState *local_1e8;
  longlong local_1e0;
  FScriptContainerElement *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  FScriptContainerElement *local_1b0;
  FName local_1a8;
  undefined1 local_1a0 [48];
  undefined1 local_170 [8];
  void *pvStack_168;
  undefined4 local_160;
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> local_158;
  longlong local_140;
  TSharedPtr<INetDeltaBaseState,1> local_138;
  FBitWriter *local_128;
  FName local_120;
  FName local_118 [2];
  FGameplayDebuggerCategory local_108;
  FString local_88;
  FString local_78 [3];
  
  if (param_1->bUpdateUnmappedObjects != false) {
    return true;
  }
  pAVar4 = (this->Owner).field0_0x0.DebugPtr;
  if (pAVar4 == (AGameplayDebuggerCategoryReplicator *)0x0) {
    return true;
  }
  this_03 = param_1->Writer;
  local_128 = this_03;
  if (this_03 == (FBitWriter *)0x0) {
    this_01 = param_1->Reader;
    if (this_01 == (FBitReader *)0x0) {
      return true;
    }
    if (5 < (byte)LogGameplayDebugReplication._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
    }
    local_200[2] = 0;
    piVar1 = *(int **)this_01->_padding_;
    if ((int *)((undefined8 *)this_01->_padding_)[1] < piVar1 + 1) {
      if ((this_01->_padding_ & 0x10000) == 0) {
        (**(code **)(this_01->_padding_ + 0x188))(this_01,local_200 + 2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this_01,(uint *)(local_200 + 2));
      }
    }
    else {
      local_200[2] = *piVar1;
      *(longlong *)this_01->_padding_ = *(longlong *)this_01->_padding_ + 4;
    }
    local_108._padding_ = 0;
    local_108._padding_ = (longlong)&___7FGameplayDebuggerCategory__6B_;
    local_108._padding_ = 0;
    local_108._padding_ = 0;
    local_108._52_4_ = local_108._52_4_ & 0xffffffcc | 0xcc;
    local_108.CategoryId = -1;
    local_108.LastCollectDataTime = __real_ffefffffffffffff;
    local_108._padding_._0_4_ = 0;
    local_108._padding_._4_4_ = 0;
    local_108._padding_._0_4_ = 0;
    local_108._padding_._4_4_ = 0;
    local_108.CollectDataInterval = 0.0;
    local_108.CategoryName.ComparisonIndex.Value = 0;
    local_108.CategoryName.Number = 0;
    local_108.ReplicatedLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ReplicatedLines.ArrayNum = 0;
    local_108.ReplicatedLines.ArrayMax = 0;
    local_108.ReplicatedShapes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ReplicatedShapes.ArrayNum = 0;
    local_108.ReplicatedShapes.ArrayMax = 0;
    local_108.ReplicatedDataPacks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ReplicatedDataPacks.ArrayNum = 0;
    local_108.ReplicatedDataPacks.ArrayMax = 0;
    local_res18 = (FScriptContainerElement)0x0;
    iVar32 = 0;
    if (0 < local_200[2]) {
      do {
        local_1a8.ComparisonIndex.Value = 0;
        local_1a8.Number = 0;
        (**(code **)(this_01->_padding_ + 0x178))(this_01,&local_1a8);
        pAVar4 = (this->Owner).field0_0x0.DebugPtr;
        uVar28 = TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_>::
                 FindLastByPredicate<_FGameplayDebuggerNetPack::NetDeltaSerialize_::__l246::<lambda_1>_>
                           (&pAVar4->Categories,(<lambda_1>)local_1a8,(pAVar4->Categories).ArrayNum)
        ;
        if (((int)uVar28 < 0) ||
           (pAVar4 = (this->Owner).field0_0x0.DebugPtr, (pAVar4->Categories).ArrayNum <= (int)uVar28
           )) {
          pFVar42 = &local_108;
        }
        else {
          uVar31 = 0;
          if ((int)uVar28 < (pAVar4->Categories).ArrayNum) {
            uVar31 = ~uVar28 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return (bool)uVar17;
          }
          pFVar42 = *(FGameplayDebuggerCategory **)
                     ((pAVar4->Categories).AllocatorInstance.Data + (longlong)(int)uVar28 * 0x10);
        }
        if (5 < (byte)LogGameplayDebugReplication._0_1_) {
          local_118[0] = pFVar42->CategoryName;
          ::FName::ToString(local_118,local_78);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
          if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
          }
        }
        uVar19 = FBitReader::ReadBit(this_01);
        uVar20 = FBitReader::ReadBit(this_01);
        uVar21 = FBitReader::ReadBit(this_01);
        plVar5 = (longlong *)this_01->_padding_;
        local_res10[0] = 0;
        if ((byte *)plVar5[1] < (byte *)*plVar5 + 1) {
          (**(code **)(this_01->_padding_ + 0x188))(this_01,local_res10,1);
        }
        else {
          local_res10[0] = *(byte *)*plVar5;
          *plVar5 = *plVar5 + 1;
        }
        if ((uVar28 != 0xffffffff) &&
           ((uint)local_res10[0] != (pFVar42->ReplicatedDataPacks).ArrayNum)) {
          if (1 < (byte)LogGameplayDebugReplication._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
          }
          FArchiveState::SetError((FArchiveState *)this_01);
          FGameplayDebuggerCategory::~FGameplayDebuggerCategory(&local_108);
          return false;
        }
        if ((local_res18 != (FScriptContainerElement)0x0) ||
           (local_res18 = (FScriptContainerElement)0x0,
           pFVar42->bIsEnabled != (uint)(uVar19 != '\0'))) {
          local_res18 = (FScriptContainerElement)0x1;
        }
        pFVar42->bIsEnabled = 0;
        *(uint *)&pFVar42->field_0x34 = *(uint *)&pFVar42->field_0x34 | (uint)(uVar19 != '\0') << 7;
        if (uVar20 != '\0') {
          if (5 < (byte)LogGameplayDebugReplication._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
          }
          TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                    ((FArchive *)this_01,&pFVar42->ReplicatedLines);
        }
        if (uVar21 != '\0') {
          if (5 < (byte)LogGameplayDebugReplication._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
          }
          TArrayPrivateFriend::Serialize<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_>
                    ((FArchive *)this_01,&pFVar42->ReplicatedShapes);
        }
        bVar43 = 0;
        if (local_res10[0] != 0) {
          do {
            if ((this_01->_padding_ & 0x200) == 0) {
              lVar40 = this_01->Pos;
              if (lVar40 < this_01->Num) {
                uVar35 = (uint)(lVar40 >> 3);
                uVar31 = 0;
                if ((int)uVar35 < (this_01->Buffer).ArrayNum) {
                  uVar31 = ~uVar35 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar11 = (code *)swi(3);
                  uVar17 = (*pcVar11)();
                  return (bool)uVar17;
                }
                FVar30 = (this_01->Buffer).AllocatorInstance.Data[(int)uVar35];
                this_01->Pos = this_01->Pos + 1;
                if (('\x01' << ((byte)lVar40 & 7) & (byte)FVar30) != 0) {
                  local_1a0._28_4_ = local_1a0._28_4_ & 0xfffffffe;
                  local_1a0._40_4_ = local_1a0._40_4_ & 0xfffffff8;
                  local_1a0._0_8_ = (FScriptContainerElement *)0x0;
                  local_170 = (undefined1  [8])0x0;
                  pvStack_168 = (void *)0x0;
                  local_1a0._8_4_ = 0;
                  local_1a0._12_4_ = 0;
                  local_158._0_4_ = 0;
                  local_158._4_4_ = 0;
                  local_158._8_4_ = 0;
                  local_158._12_4_ = 0;
                  local_1a0._16_2_ = 0;
                  local_1a0._18_2_ = 0;
                  local_1a0._20_4_ = 0;
                  local_1a0._24_4_ = 0;
                  local_1a0._32_4_ = 0;
                  local_1a0._36_4_ = 0;
                  local_1a0[0x2c] = ResetOnTick;
                  local_160 = 0;
                  local_158._16_4_ = 0;
                  uVar19 = FBitReader::ReadBit(this_01);
                  local_1a0._28_4_ = local_1a0._28_4_ & 0xfffffffe | (uint)(uVar19 != '\0');
                  plVar5 = (longlong *)this_01->_padding_;
                  if ((short *)plVar5[1] < (short *)*plVar5 + 1) {
                    if ((this_01->_padding_ & 0x10000) == 0) {
                      (**(code **)(this_01->_padding_ + 0x188))(this_01,local_1a0 + 0x10,2);
                    }
                    else {
                      FArchive::SerializeByteOrderSwapped
                                ((FArchive *)this_01,(ushort *)(local_1a0 + 0x10));
                    }
                  }
                  else {
                    local_1a0._16_2_ = *(short *)*plVar5;
                    *plVar5 = *plVar5 + 2;
                  }
                  plVar5 = (longlong *)this_01->_padding_;
                  if ((short *)plVar5[1] < (short *)*plVar5 + 1) {
                    if ((this_01->_padding_ & 0x10000) == 0) {
                      (**(code **)(this_01->_padding_ + 0x188))(this_01,local_1a0 + 0x12,2);
                    }
                    else {
                      FArchive::SerializeByteOrderSwapped
                                ((FArchive *)this_01,(ushort *)(local_1a0 + 0x12));
                    }
                  }
                  else {
                    local_1a0._18_2_ = *(short *)*plVar5;
                    *plVar5 = *plVar5 + 2;
                  }
                  plVar5 = (longlong *)this_01->_padding_;
                  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
                    if ((this_01->_padding_ & 0x10000) == 0) {
                      (**(code **)(this_01->_padding_ + 0x188))(this_01,local_1a0 + 0x14,4);
                    }
                    else {
                      FArchive::SerializeByteOrderSwapped
                                ((FArchive *)this_01,(uint *)(local_1a0 + 0x14));
                    }
                  }
                  else {
                    local_1a0._20_4_ = *(int *)*plVar5;
                    *plVar5 = *plVar5 + 4;
                  }
                  plVar5 = (longlong *)this_01->_padding_;
                  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
                    if ((this_01->_padding_ & 0x10000) == 0) {
                      (**(code **)(this_01->_padding_ + 0x188))(this_01,local_1a0 + 0x18,4);
                    }
                    else {
                      FArchive::SerializeByteOrderSwapped
                                ((FArchive *)this_01,(uint *)(local_1a0 + 0x18));
                    }
                  }
                  else {
                    local_1a0._24_4_ = *(int *)*plVar5;
                    *plVar5 = *plVar5 + 4;
                  }
                  iVar22 = local_1a0._20_4_ - local_1a0._24_4_;
                  if (FGameplayDebuggerDataPack::PacketSize <
                      (int)(local_1a0._20_4_ - local_1a0._24_4_)) {
                    iVar22 = FGameplayDebuggerDataPack::PacketSize;
                  }
                  if (0 < iVar22) {
                    UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,iVar22,(ForAnyElementType *)local_1a0,(int *)(local_1a0 + 8),
                               (int *)(local_1a0 + 0xc));
                    (**(code **)(this_01->_padding_ + 0x188))
                              (this_01,local_1a0._0_8_,(longlong)iVar22);
                  }
                  AGameplayDebuggerCategoryReplicator::OnReceivedDataPackPacket
                            ((this->Owner).field0_0x0.DebugPtr,uVar28,(uint)bVar43,
                             (FGameplayDebuggerDataPack *)local_1a0);
                  if (5 < (byte)LogGameplayDebugReplication._0_1_) {
                    if (((pFVar42->ReplicatedDataPacks).ArrayNum <= (int)(uint)bVar43) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar11 = (code *)swi(3);
                      uVar17 = (*pcVar11)();
                      return (bool)uVar17;
                    }
                    UE::Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
                  }
                  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_158);
                  if ((void *)CONCAT44(local_158._12_4_,local_158._8_4_) != (void *)0x0) {
                    FMemory::Free((void *)CONCAT44(local_158._12_4_,local_158._8_4_));
                  }
                  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                            ((FMRSWRecursiveAccessDetector *)&local_158);
                  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_170);
                  if (pvStack_168 != (void *)0x0) {
                    FMemory::Free(pvStack_168);
                  }
                  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                            ((FMRSWRecursiveAccessDetector *)local_170);
                  if ((FScriptContainerElement *)local_1a0._0_8_ != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free((void *)local_1a0._0_8_);
                  }
                }
              }
              else {
                FBitReader::SetOverflowed(this_01,1);
              }
            }
            bVar43 = bVar43 + 1;
          } while (bVar43 < local_res10[0]);
        }
        iVar32 = iVar32 + 1;
      } while (iVar32 < local_200[2]);
      if (local_res18 != (FScriptContainerElement)0x0) {
        AActor::MarkComponentsRenderStateDirty((AActor *)(this->Owner).field0_0x0.DebugPtr);
      }
    }
    FGameplayDebuggerCategory::~FGameplayDebuggerCategory(&local_108);
    return true;
  }
  if (pAVar4->bHasAuthority == 0) {
    return false;
  }
  this_00 = (FNetFastCategoryBaseState *)param_1->OldState;
  pFVar41 = (FNetFastCategoryBaseState *)0x0;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200[0] = 0;
  local_200[1] = 0;
  local_200[4] = 0;
  local_1e8 = (FNetFastCategoryBaseState *)0x0;
  pFVar25 = (FNetFastCategoryBaseState *)0x0;
  pFVar37 = pFVar41;
  if ((pAVar4->bIsEnabled != false) && ((pAVar4->Categories).ArrayNum == (this->SavedData).ArrayNum)
     ) {
    local_1e8 = ::operator_new(0x30);
    if (local_1e8 == (FNetFastCategoryBaseState *)0x0) {
      local_1e8 = (FNetFastCategoryBaseState *)0x0;
    }
    else {
      local_1e8->_padding_ = 0;
      local_1e8->_padding_ = 0;
      local_1e8->_padding_ = 0;
      local_1e8->_padding_ = (longlong)&___7FNetFastCategoryBaseState__6B_;
      (local_1e8->CategoryStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_1e8->CategoryStates).ArrayNum = 0;
      (local_1e8->CategoryStates).ArrayMax = 0;
    }
    pFVar37 = local_1e8;
    if ((param_1->NewState == (TSharedPtr<INetDeltaBaseState,1> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeltaParms.NewState",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerCategoryReplicator.cpp"
                            ,0xf7,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return (bool)uVar17;
    }
    local_138.Object = (INetDeltaBaseState *)pFVar37;
    pFVar25 = ::operator_new(0x18);
    FVar33.ReferenceController = (TReferenceControllerBase<1> *)pFVar41;
    if (pFVar25 != (FNetFastCategoryBaseState *)0x0) {
      *(atomic<int> *)&pFVar25->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar25->_padding_)[1] = (atomic<int>)0x1;
      pFVar25->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFNetFastCategoryBaseState__U__DefaultDeleter_VFNetFastCategoryBaseState___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pFVar25->_padding_ = (longlong)pFVar37;
      FVar33.ReferenceController = (TReferenceControllerBase<1> *)pFVar25;
    }
    local_138.SharedReferenceCount.ReferenceController = FVar33.ReferenceController;
    if ((pFVar37 != (FNetFastCategoryBaseState *)0x0) &&
       (((pFVar37->_padding_ == 0 || (pFVar37->_padding_ == 0)) ||
        (*(int *)(pFVar37->_padding_ + 8) < 1)))) {
      if ((FNetFastCategoryBaseState *)FVar33.ReferenceController !=
          (FNetFastCategoryBaseState *)0x0) {
        LOCK();
        *(atomic<int> *)&((FNetFastCategoryBaseState *)FVar33.ReferenceController)->_padding_ =
             (atomic<int>)
             ((int)*(atomic<int> *)
                    &((FNetFastCategoryBaseState *)FVar33.ReferenceController)->_padding_ + 1);
        UNLOCK();
      }
      pFVar37->_padding_ = (longlong)pFVar37;
      if ((FNetFastCategoryBaseState *)FVar33.ReferenceController !=
          (FNetFastCategoryBaseState *)pFVar37->_padding_) {
        if ((FNetFastCategoryBaseState *)FVar33.ReferenceController !=
            (FNetFastCategoryBaseState *)0x0) {
          LOCK();
          ((atomic<int> *)&((FNetFastCategoryBaseState *)FVar33.ReferenceController)->_padding_)[1]
               = (atomic<int>)
                 ((int)((atomic<int> *)
                       &((FNetFastCategoryBaseState *)FVar33.ReferenceController)->_padding_)[1] + 1
                 );
          UNLOCK();
        }
        plVar5 = (longlong *)pFVar37->_padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar32 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar32 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        pFVar37->_padding_ = (longlong)FVar33.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar33.ReferenceController);
    }
    pTVar6 = param_1->NewState;
    if (pTVar6 != &local_138) {
      pTVar6->Object = (INetDeltaBaseState *)pFVar37;
      local_138.Object = (INetDeltaBaseState *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&pTVar6->SharedReferenceCount,&local_138.SharedReferenceCount);
      FVar33.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar33.ReferenceController);
    piVar1 = &(pFVar37->CategoryStates).ArrayNum;
    iVar32 = *piVar1;
    uVar28 = (this->SavedData).ArrayNum;
    if (iVar32 < (int)uVar28) {
      iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,uVar28 - iVar32,&(pFVar37->CategoryStates).AllocatorInstance,piVar1
                          ,&(pFVar37->CategoryStates).ArrayMax);
      DefaultConstructItems<FNetFastCategoryBaseState::FCategoryState,int>
                ((pFVar37->CategoryStates).AllocatorInstance.Data + (longlong)iVar22 * 0x18,
                 uVar28 - iVar32);
    }
    else {
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
      }
      if ((int)uVar28 < iVar32) {
        uVar31 = iVar32 - uVar28;
        if (((int)(uVar28 | uVar31) < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        if (uVar31 != 0) {
          TArray<FNetFastCategoryBaseState::FCategoryState,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl(&pFVar37->CategoryStates,uVar28,uVar31);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&(pFVar37->CategoryStates).AllocatorInstance,
                     (pFVar37->CategoryStates).ArrayNum,&(pFVar37->CategoryStates).ArrayMax);
        }
      }
    }
    iVar32 = (this->SavedData).ArrayNum;
    iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar32,&local_208,local_200,local_200 + 1);
    memset(local_208.Data + iVar22,0,(longlong)iVar32);
    pFVar25 = pFVar41;
    if (0 < (this->SavedData).ArrayNum) {
      local_1b8 = 0;
      pFVar26 = pFVar41;
      do {
        lVar40 = local_1b8;
        pFVar37 = local_1e8;
        uVar35 = (uint)pFVar26;
        uVar31 = ~uVar35 >> 0x1f;
        uVar28 = 0;
        if ((int)uVar35 < (local_1e8->CategoryStates).ArrayNum) {
          uVar28 = uVar31;
        }
        if ((uVar28 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        local_140 = lVar40 * 3;
        local_1d8 = (pFVar37->CategoryStates).AllocatorInstance.Data;
        pAVar4 = (this->Owner).field0_0x0.DebugPtr;
        uVar23 = 0;
        uVar28 = uVar23;
        if ((int)uVar35 < (pAVar4->Categories).ArrayNum) {
          uVar28 = uVar31;
        }
        if ((uVar28 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        lVar7 = *(longlong *)((pAVar4->Categories).AllocatorInstance.Data + lVar40 * 0x10);
        uVar28 = uVar23;
        if ((int)uVar35 < (this->SavedData).ArrayNum) {
          uVar28 = uVar31;
        }
        if ((uVar28 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        pFVar39 = (this->SavedData).AllocatorInstance.Data;
        lVar36 = lVar40 * 0x40;
        if (((this_00 == (FNetFastCategoryBaseState *)0x0) || ((int)uVar35 < 0)) ||
           ((this_00->CategoryStates).ArrayNum <= (int)uVar35)) {
          FVar30 = (FScriptContainerElement)0x1;
        }
        else {
          FVar30 = (FScriptContainerElement)0x0;
        }
        uVar28 = uVar23;
        if ((int)uVar35 < local_200[0]) {
          uVar28 = ~uVar35 >> 0x1f;
        }
        local_res18 = FVar30;
        local_1e0 = lVar36;
        local_1b0 = pFVar39;
        if ((uVar28 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        local_208.Data[lVar40] = FVar30;
        *(undefined8 *)(pFVar39 + lVar36) = *(undefined8 *)(lVar7 + 0x48);
        bVar43 = (byte)(*(uint *)(lVar7 + 0x34) >> 7);
        if (pFVar39[lVar36 + 0x38] != (FScriptContainerElement)(bVar43 & 1)) {
          pFVar39[lVar36 + 0x38] = (FScriptContainerElement)(bVar43 & 1);
          uVar28 = uVar23;
          if ((int)uVar35 < local_200[0]) {
            uVar28 = ~uVar35 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return (bool)uVar17;
          }
          local_208.Data[lVar40] = (FScriptContainerElement)((char)local_208.Data[lVar40] + '\x01');
        }
        if ((*(int *)(pFVar39 + lVar36 + 0x10) == *(int *)(lVar7 + 0x58)) &&
           (bVar16 = CompareItems<FString,int>
                               (*(FString **)(pFVar39 + lVar36 + 8),*(FString **)(lVar7 + 0x50),
                                *(int *)(pFVar39 + lVar36 + 0x10)), bVar16)) {
          iVar32 = 0;
        }
        else {
          iVar32 = 1;
        }
        uVar31 = 0;
        uVar28 = uVar31;
        if (local_res18 == (FScriptContainerElement)0x0) {
          if ((int)uVar35 < (this_00->CategoryStates).ArrayNum) {
            uVar28 = ~uVar35 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return (bool)uVar17;
          }
          uVar28 = *(uint *)((this_00->CategoryStates).AllocatorInstance.Data + lVar40 * 0x18);
        }
        *(uint *)(local_1d8 + lVar40 * 0x18) = iVar32 + uVar28;
        if ((char)iVar32 != '\0') {
          TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar39 + lVar36 + 8),
                     (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar7 + 0x50));
          uVar28 = uVar31;
          if ((int)uVar35 < local_200[0]) {
            uVar28 = ~uVar35 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return (bool)uVar17;
          }
          local_208.Data[lVar40] = (FScriptContainerElement)((char)local_208.Data[lVar40] + '\x01');
        }
        if ((*(int *)(pFVar39 + lVar36 + 0x20) == *(int *)(lVar7 + 0x68)) &&
           (bVar16 = CompareItems<FGameplayDebuggerShape,int>
                               (*(FGameplayDebuggerShape **)(pFVar39 + lVar36 + 0x18),
                                *(FGameplayDebuggerShape **)(lVar7 + 0x60),
                                *(int *)(pFVar39 + lVar36 + 0x20)), bVar16)) {
          iVar32 = 0;
        }
        else {
          iVar32 = 1;
        }
        uVar28 = uVar31;
        if (local_res18 == (FScriptContainerElement)0x0) {
          if ((int)uVar35 < (this_00->CategoryStates).ArrayNum) {
            uVar28 = ~uVar35 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return (bool)uVar17;
          }
          uVar28 = *(uint *)((this_00->CategoryStates).AllocatorInstance.Data + lVar40 * 0x18 + 4);
        }
        *(uint *)(local_1d8 + lVar40 * 0x18 + 4) = iVar32 + uVar28;
        if ((char)iVar32 != '\0') {
          TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *)
                     (pFVar39 + lVar36 + 0x18),
                     (TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *)(lVar7 + 0x60));
          uVar28 = uVar31;
          if ((int)uVar35 < local_200[0]) {
            uVar28 = ~uVar35 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return (bool)uVar17;
          }
          local_208.Data[lVar40] = (FScriptContainerElement)((char)local_208.Data[lVar40] + '\x01');
        }
        pFVar39 = local_1b0;
        uVar28 = uVar23;
        if (((this->Owner).field0_0x0.DebugPtr)->bSendDataPacksUsingRPC == 0) {
          uVar28 = *(uint *)(lVar7 + 0x78);
        }
        iVar32 = *(int *)(local_1b0 + lVar36 + 0x30);
        if (iVar32 < (int)uVar28) {
          iVar22 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,4,uVar28 - iVar32,
                              (ForAnyElementType *)(local_1b0 + lVar36 + 0x28),
                              (int *)(local_1b0 + lVar36 + 0x30),(int *)(local_1b0 + lVar36 + 0x34))
          ;
          DefaultConstructItems<FGameplayDebuggerDataPackHeader,int>
                    ((void *)((longlong)iVar22 * 0x10 + *(longlong *)(pFVar39 + lVar36 + 0x28)),
                     uVar28 - iVar32);
        }
        else {
          if ((int)uVar28 < 0) goto LAB_146d5433f;
          if ((int)uVar28 < iVar32) {
            uVar38 = iVar32 - uVar28;
            if (((int)(uVar38 | uVar28) < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            if (uVar38 != 0) {
              pvVar27 = (void *)((longlong)(int)uVar28 * 0x10 +
                                *(longlong *)(pFVar39 + lVar36 + 0x28));
              iVar32 = (*(int *)(pFVar39 + lVar36 + 0x30) - uVar38) - uVar28;
              if (iVar32 != 0) {
                memmove(pvVar27,(void *)((longlong)(int)uVar38 * 0x10 + (longlong)pvVar27),
                        (longlong)iVar32 << 4);
              }
              iVar32 = *(int *)(pFVar39 + lVar36 + 0x30);
              *(uint *)(pFVar39 + lVar36 + 0x30) = iVar32 - uVar38;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,(ForAnyElementType *)(pFVar39 + lVar36 + 0x28),iVar32 - uVar38,
                         (int *)(pFVar39 + lVar36 + 0x34));
            }
          }
        }
        pFVar39 = local_1d8;
        iVar32 = *(int *)(local_1d8 + lVar40 * 0x18 + 0x10);
        if (iVar32 < (int)uVar28) {
          iVar22 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,4,uVar28 - iVar32,
                              (ForAnyElementType *)(local_1d8 + lVar40 * 0x18 + 8),
                              (int *)(local_1d8 + lVar40 * 0x18 + 0x10),
                              (int *)(local_1d8 + lVar40 * 0x18 + 0x14));
          DefaultConstructItems<FNetFastCategoryBaseState::FDataPackState,int>
                    ((void *)(*(longlong *)(pFVar39 + lVar40 * 0x18 + 8) + (longlong)iVar22 * 8),
                     uVar28 - iVar32);
        }
        else {
          if ((int)uVar28 < 0) {
LAB_146d5433f:
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
          }
          if ((int)uVar28 < iVar32) {
            uVar38 = iVar32 - uVar28;
            if (((int)(uVar38 | uVar28) < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            if (uVar38 != 0) {
              pvVar27 = (void *)(*(longlong *)(pFVar39 + lVar40 * 0x18 + 8) +
                                (longlong)(int)uVar28 * 8);
              iVar32 = (*(int *)(pFVar39 + lVar40 * 0x18 + 0x10) - uVar38) - uVar28;
              if (iVar32 != 0) {
                memmove(pvVar27,(void *)((longlong)pvVar27 + (longlong)(int)uVar38 * 8),
                        (longlong)iVar32 << 3);
              }
              iVar32 = *(int *)(pFVar39 + lVar40 * 0x18 + 0x10);
              *(uint *)(pFVar39 + lVar40 * 0x18 + 0x10) = iVar32 - uVar38;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,(ForAnyElementType *)(pFVar39 + lVar40 * 0x18 + 8),iVar32 - uVar38,
                         (int *)(pFVar39 + lVar40 * 0x18 + 0x14));
            }
          }
        }
        local_200[3] = 0;
        if (0 < (int)uVar28) {
          local_1d0 = lVar40 * 3;
          local_1c0 = 0;
          local_1c8 = 0;
          uVar38 = ~uVar35 >> 0x1f;
          pFVar37 = pFVar41;
          pFVar25 = pFVar41;
          do {
            lVar36 = local_1c8;
            lVar40 = local_1d0;
            uVar34 = (uint)pFVar37;
            uVar24 = uVar23;
            if ((int)uVar34 < *(int *)(lVar7 + 0x78)) {
              uVar24 = ~uVar34 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            this_02 = (FGameplayDebuggerDataPack *)(lVar36 + *(longlong *)(lVar7 + 0x70));
            if (local_res18 == (FScriptContainerElement)0x0) {
              uVar24 = uVar31;
              if ((int)uVar35 < (this_00->CategoryStates).ArrayNum) {
                uVar24 = uVar38;
              }
              if ((uVar24 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar11 = (code *)swi(3);
                uVar17 = (*pcVar11)();
                return (bool)uVar17;
              }
              if (*(int *)((this_00->CategoryStates).AllocatorInstance.Data + lVar40 * 8 + 0x10) <=
                  (int)uVar34) goto LAB_146d52cc8;
              bVar16 = true;
            }
            else {
LAB_146d52cc8:
              bVar16 = false;
            }
            if ((this_02->bNeedsConfirmation == 1 && this_02->bReceived == 0) && (bVar16)) {
              uVar24 = uVar31;
              if ((int)uVar35 < (this_00->CategoryStates).ArrayNum) {
                uVar24 = uVar38;
              }
              if ((uVar24 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar11 = (code *)swi(3);
                uVar17 = (*pcVar11)();
                return (bool)uVar17;
              }
              pFVar39 = (this_00->CategoryStates).AllocatorInstance.Data;
              uVar24 = uVar31;
              if ((int)uVar34 < *(int *)(pFVar39 + local_1d0 * 8 + 0x10)) {
                uVar24 = ~uVar34 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar11 = (code *)swi(3);
                uVar17 = (*pcVar11)();
                return (bool)uVar17;
              }
              lVar40 = *(longlong *)(pFVar39 + local_1d0 * 8 + 8);
              if (5 < (byte)LogGameplayDebugReplication._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
              }
              FGameplayDebuggerDataPack::OnPacketRequest
                        (this_02,*(short *)(lVar40 + (longlong)pFVar25 * 8 + 4),
                         *(int *)(lVar40 + (longlong)pFVar25 * 8));
              uVar34 = local_200[3];
            }
            uVar12._0_2_ = (this_02->Header).DataVersion;
            uVar12._2_2_ = (this_02->Header).SyncCounter;
            iVar32 = (this_02->Header).DataOffset;
            uVar24 = uVar31;
            if ((int)uVar34 < *(int *)(local_1d8 + local_140 * 8 + 0x10)) {
              uVar24 = ~uVar34 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            pFVar39 = local_1b0;
            *(ulonglong *)(*(longlong *)(local_1d8 + local_140 * 8 + 8) + (longlong)pFVar25 * 8) =
                 CONCAT44(uVar12,iVar32);
            uVar24 = uVar23;
            if ((int)uVar34 < *(int *)(local_1b0 + local_1e0 + 0x30)) {
              uVar24 = ~uVar34 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            pFVar8 = local_1b0;
            lVar36 = local_1c0;
            lVar40 = *(longlong *)(pFVar39 + local_1e0 + 0x28);
            if (((*(short *)(lVar40 + local_1c0) == (this_02->Header).DataVersion) &&
                (*(int *)(lVar40 + 4 + local_1c0) == (this_02->Header).DataSize)) &&
               (*(int *)(lVar40 + 8 + local_1c0) == (this_02->Header).DataOffset)) {
              local_1c0 = lVar36;
              if (bVar16) {
                uVar24 = uVar23;
                if ((int)uVar35 < (this_00->CategoryStates).ArrayNum) {
                  uVar24 = uVar38;
                }
                if ((uVar24 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar11 = (code *)swi(3);
                  uVar17 = (*pcVar11)();
                  return (bool)uVar17;
                }
                pFVar39 = (this_00->CategoryStates).AllocatorInstance.Data;
                uVar24 = uVar31;
                if ((int)uVar34 < *(int *)(pFVar39 + local_1d0 * 8 + 0x10)) {
                  uVar24 = ~uVar34 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar11 = (code *)swi(3);
                  uVar17 = (*pcVar11)();
                  return (bool)uVar17;
                }
                lVar40 = *(longlong *)(pFVar39 + local_1d0 * 8 + 8);
                if (((*(int *)(lVar40 + (longlong)pFVar25 * 8) != (this_02->Header).DataOffset) ||
                    (*(short *)(lVar40 + 4 + (longlong)pFVar25 * 8) != (this_02->Header).DataVersion
                    )) || (*(short *)(lVar40 + 6 + (longlong)pFVar25 * 8) !=
                           (this_02->Header).SyncCounter)) {
                  uVar24 = uVar31;
                  if ((int)uVar35 < local_200[0]) {
                    uVar24 = uVar38;
                  }
                  if ((uVar24 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar11 = (code *)swi(3);
                    uVar17 = (*pcVar11)();
                    return (bool)uVar17;
                  }
                  local_208.Data[local_1b8] =
                       (FScriptContainerElement)((char)local_208.Data[local_1b8] + '\x01');
                }
              }
            }
            else {
              uVar13 = *(undefined8 *)&this_02->Header;
              uVar14 = *(undefined8 *)&(this_02->Header).DataOffset;
              uVar24 = uVar31;
              if ((int)uVar34 < *(int *)(local_1b0 + local_1e0 + 0x30)) {
                uVar24 = ~uVar34 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar11 = (code *)swi(3);
                uVar17 = (*pcVar11)();
                return (bool)uVar17;
              }
              lVar40 = *(longlong *)(pFVar8 + local_1e0 + 0x28);
              *(undefined8 *)(lVar36 + lVar40) = uVar13;
              ((undefined8 *)(lVar36 + lVar40))[1] = uVar14;
              uVar24 = uVar31;
              if ((int)uVar35 < local_200[0]) {
                uVar24 = uVar38;
              }
              if ((uVar24 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar11 = (code *)swi(3);
                uVar17 = (*pcVar11)();
                return (bool)uVar17;
              }
              local_208.Data[local_1b8] =
                   (FScriptContainerElement)((char)local_208.Data[local_1b8] + '\x01');
              local_1c0 = lVar36;
            }
            local_1c0 = local_1c0 + 0x10;
            local_1c8 = local_1c8 + 0x60;
            local_200[3] = uVar34 + 1;
            pFVar37 = (FNetFastCategoryBaseState *)(ulonglong)(uint)local_200[3];
            pFVar25 = (FNetFastCategoryBaseState *)((longlong)&pFVar25->_padding_ + 1);
            lVar40 = local_1b8;
            this_03 = local_128;
          } while (local_200[3] < (int)uVar28);
        }
        if ((int)uVar35 < local_200[0]) {
          uVar31 = ~uVar35 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        local_1b8 = lVar40 + 1;
        local_200[4] = local_200[4] + (uint)(local_208.Data[lVar40] != (FScriptContainerElement)0x0)
        ;
        pFVar25 = (FNetFastCategoryBaseState *)(ulonglong)(uint)local_200[4];
        pFVar26 = (FNetFastCategoryBaseState *)(ulonglong)(uVar35 + 1);
        pFVar37 = local_1e8;
      } while ((int)(uVar35 + 1) < (this->SavedData).ArrayNum);
    }
  }
  pTVar15 = CVarGameplayDebuggerRepDetails.Ref;
  bVar16 = IsInParallelGameThread();
  if (!bVar16) {
    bVar16 = IsInGameThread();
    pFVar26 = (FNetFastCategoryBaseState *)&DAT_00000004;
    if (!bVar16) goto LAB_146d531dc;
  }
  pFVar26 = pFVar41;
LAB_146d531dc:
  if (*(int *)((longlong)pTVar15->ShadowedValue + (longlong)&pFVar26->_padding_) != 0) {
    if (this_00 != (FNetFastCategoryBaseState *)0x0) {
      if (5 < (byte)LogGameplayDebugReplication._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
      }
      FNetFastCategoryBaseState::DumpToLog(this_00);
    }
    if (pFVar37 != (FNetFastCategoryBaseState *)0x0) {
      if (5 < (byte)LogGameplayDebugReplication._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
      }
      FNetFastCategoryBaseState::DumpToLog(pFVar37);
    }
  }
  if ((int)pFVar25 == 0) {
    if (local_208.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_208.Data);
    return false;
  }
  local_200[5] = (this->SavedData).ArrayNum;
  piVar1 = *(int **)this_03->_padding_;
  if ((int *)((undefined8 *)this_03->_padding_)[1] < piVar1 + 1) {
    if ((this_03->_padding_ & 0x10000) == 0) {
      (**(code **)(this_03->_padding_ + 0x188))(this_03,local_200 + 5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_03,(uint *)(local_200 + 5));
    }
  }
  else {
    local_200[5] = *piVar1;
    *(longlong *)this_03->_padding_ = *(longlong *)this_03->_padding_ + 4;
  }
  if (5 < (byte)LogGameplayDebugReplication._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
  }
  if (0 < (this->SavedData).ArrayNum) {
    local_210 = 0;
    do {
      uVar31 = 0;
      pAVar4 = (this->Owner).field0_0x0.DebugPtr;
      uVar35 = (uint)pFVar41;
      uVar28 = 0;
      if ((int)uVar35 < (pAVar4->Categories).ArrayNum) {
        uVar28 = ~uVar35 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
      local_1c8 = *(longlong *)((pAVar4->Categories).AllocatorInstance.Data + local_210 * 0x10);
      if (((this_00 == (FNetFastCategoryBaseState *)0x0) || ((int)uVar35 < 0)) ||
         ((this_00->CategoryStates).ArrayNum <= (int)uVar35)) {
        FVar30 = (FScriptContainerElement)0x1;
      }
      else {
        FVar30 = (FScriptContainerElement)0x0;
      }
      uVar28 = 0;
      if ((int)uVar35 < (this->SavedData).ArrayNum) {
        uVar28 = ~uVar35 >> 0x1f;
      }
      local_res18 = FVar30;
      if ((uVar28 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
      pFVar37 = local_1e8;
      pFVar39 = (this->SavedData).AllocatorInstance.Data + local_210 * 0x40;
      FVar3 = pFVar39[0x38];
      uVar28 = 0;
      if (FVar30 == (FScriptContainerElement)0x0) {
        uVar23 = uVar28;
        if ((int)uVar35 < (local_1e8->CategoryStates).ArrayNum) {
          uVar23 = ~uVar35 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        pFVar8 = (pFVar37->CategoryStates).AllocatorInstance.Data;
        uVar23 = uVar28;
        if ((int)uVar35 < (this_00->CategoryStates).ArrayNum) {
          uVar23 = ~uVar35 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        FVar30 = local_res18;
        if (*(int *)((this_00->CategoryStates).AllocatorInstance.Data + local_210 * 0x18) !=
            *(int *)(pFVar8 + local_210 * 0x18)) goto LAB_146d5348d;
        uVar19 = '\0';
LAB_146d53498:
        pFVar37 = local_1e8;
        uVar23 = uVar28;
        if ((int)uVar35 < (local_1e8->CategoryStates).ArrayNum) {
          uVar23 = ~uVar35 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        pFVar8 = (pFVar37->CategoryStates).AllocatorInstance.Data;
        uVar23 = uVar28;
        if ((int)uVar35 < (this_00->CategoryStates).ArrayNum) {
          uVar23 = ~uVar35 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        if (*(int *)((this_00->CategoryStates).AllocatorInstance.Data + local_210 * 0x18 + 4) !=
            *(int *)(pFVar8 + local_210 * 0x18 + 4)) goto LAB_146d5355e;
        uVar20 = '\0';
      }
      else {
LAB_146d5348d:
        uVar19 = '\x01';
        if (FVar30 == (FScriptContainerElement)0x0) goto LAB_146d53498;
LAB_146d5355e:
        uVar20 = '\x01';
      }
      uVar23 = *(uint *)(pFVar39 + 0x30);
      if (((uVar23 != (uVar23 & 0xff)) || ((int)uVar23 < 0)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
      local_res20[0] = (byte)uVar23;
      (**(code **)(this_03->_padding_ + 0x178))(this_03,pFVar39);
      FBitWriter::WriteBit(this_03,(uchar)FVar3);
      FBitWriter::WriteBit(this_03,uVar19);
      FBitWriter::WriteBit(this_03,uVar20);
      plVar5 = (longlong *)this_03->_padding_;
      if ((byte *)plVar5[1] < (byte *)*plVar5 + 1) {
        (**(code **)(this_03->_padding_ + 0x188))(this_03,local_res20,1);
      }
      else {
        local_res20[0] = *(byte *)*plVar5;
        *plVar5 = *plVar5 + 1;
      }
      if ((int)uVar35 < local_200[0]) {
        uVar28 = ~uVar35 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
      if ((local_208.Data[local_210] != (FScriptContainerElement)0x0) &&
         (5 < (byte)LogGameplayDebugReplication._0_1_)) {
        local_120 = *(FName *)(local_1c8 + 0x48);
        ::FName::ToString(&local_120,&local_88);
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u___CATEGORY__d___15146ca38,
                   (FLogCategoryBase *)&LogGameplayDebugReplication);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      if (uVar19 != '\0') {
        if (5 < (byte)LogGameplayDebugReplication._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
        }
        TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                  ((FArchive *)this_03,(TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar39 + 8))
        ;
      }
      if (uVar20 != '\0') {
        if (5 < (byte)LogGameplayDebugReplication._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
        }
        TArrayPrivateFriend::Serialize<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_>
                  ((FArchive *)this_03,
                   (TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *)(pFVar39 + 0x18));
      }
      local_1e0 = 0;
      if (local_res20[0] != 0) {
        local_218 = 0;
        uVar28 = ~uVar35 >> 0x1f;
        do {
          lVar40 = local_1e0;
          if (local_res18 == (FScriptContainerElement)0x0) {
            uVar23 = 0;
            if ((int)uVar35 < (this_00->CategoryStates).ArrayNum) {
              uVar23 = uVar28;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            if (((int)uVar31 < 0) ||
               (*(int *)((this_00->CategoryStates).AllocatorInstance.Data + local_210 * 0x18 + 0x10)
                <= (int)uVar31)) goto LAB_146d53958;
            uVar23 = 0;
            if ((int)uVar35 < (this_00->CategoryStates).ArrayNum) {
              uVar23 = uVar28;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            pFVar39 = (this_00->CategoryStates).AllocatorInstance.Data;
            uVar23 = 0;
            if ((int)uVar31 < *(int *)(pFVar39 + local_210 * 0x18 + 0x10)) {
              uVar23 = ~uVar31 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            pFVar37 = local_1e8;
            lVar7 = *(longlong *)(pFVar39 + local_210 * 0x18 + 8);
            uVar23 = 0;
            if ((int)uVar35 < (local_1e8->CategoryStates).ArrayNum) {
              uVar23 = uVar28;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            pFVar39 = (pFVar37->CategoryStates).AllocatorInstance.Data;
            uVar23 = 0;
            if ((int)uVar31 < *(int *)(pFVar39 + local_210 * 0x18 + 0x10)) {
              uVar23 = ~uVar31 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            lVar40 = local_1e0;
            lVar36 = *(longlong *)(pFVar39 + local_210 * 0x18 + 8);
            if (((*(int *)(lVar7 + local_1e0 * 8) != *(int *)(lVar36 + local_1e0 * 8)) ||
                (*(short *)(lVar7 + 4 + local_1e0 * 8) != *(short *)(lVar36 + 4 + local_1e0 * 8)))
               || (*(short *)(lVar7 + 6 + local_1e0 * 8) != *(short *)(lVar36 + 6 + local_1e0 * 8)))
            goto LAB_146d53958;
            FBitWriter::WriteBit(this_03,'\0');
          }
          else {
LAB_146d53958:
            FBitWriter::WriteBit(this_03,'\x01');
            lVar7 = local_1c8;
            uVar23 = 0;
            if ((int)uVar31 < *(int *)(local_1c8 + 0x78)) {
              uVar23 = ~uVar31 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar17 = (*pcVar11)();
              return (bool)uVar17;
            }
            lVar7 = *(longlong *)(lVar7 + 0x70);
            FBitWriter::WriteBit(this_03,*(byte *)(local_218 + 0x1c + lVar7) & 1);
            puVar29 = (ushort *)(lVar7 + 0x10 + local_218);
            puVar9 = *(ushort **)this_03->_padding_;
            if ((ushort *)((undefined8 *)this_03->_padding_)[1] < puVar9 + 1) {
              if ((this_03->_padding_ & 0x10000) == 0) {
                (**(code **)(this_03->_padding_ + 0x188))(this_03,puVar29,2);
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)this_03,puVar29);
              }
            }
            else {
              *puVar29 = *puVar9;
              *(longlong *)this_03->_padding_ = *(longlong *)this_03->_padding_ + 2;
            }
            puVar29 = (ushort *)(lVar7 + 0x12 + local_218);
            puVar9 = *(ushort **)this_03->_padding_;
            if ((ushort *)((undefined8 *)this_03->_padding_)[1] < puVar9 + 1) {
              if ((this_03->_padding_ & 0x10000) == 0) {
                (**(code **)(this_03->_padding_ + 0x188))(this_03,puVar29,2);
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)this_03,puVar29);
              }
            }
            else {
              *puVar29 = *puVar9;
              *(longlong *)this_03->_padding_ = *(longlong *)this_03->_padding_ + 2;
            }
            lVar36 = local_218 + lVar7;
            puVar10 = *(undefined4 **)this_03->_padding_;
            if ((undefined4 *)((undefined8 *)this_03->_padding_)[1] < puVar10 + 1) {
              if ((this_03->_padding_ & 0x10000) == 0) {
                (**(code **)(this_03->_padding_ + 0x188))(this_03,(uint *)(lVar36 + 0x14),4);
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)this_03,(uint *)(lVar36 + 0x14));
              }
            }
            else {
              *(undefined4 *)(lVar36 + 0x14) = *puVar10;
              *(longlong *)this_03->_padding_ = *(longlong *)this_03->_padding_ + 4;
            }
            puVar10 = *(undefined4 **)this_03->_padding_;
            lVar2 = local_218 + lVar7;
            if ((undefined4 *)((undefined8 *)this_03->_padding_)[1] < puVar10 + 1) {
              if ((this_03->_padding_ & 0x10000) == 0) {
                (**(code **)(this_03->_padding_ + 0x188))(this_03,(uint *)(lVar2 + 0x18),4);
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)this_03,(uint *)(lVar2 + 0x18));
              }
            }
            else {
              *(undefined4 *)(lVar2 + 0x18) = *puVar10;
              *(longlong *)this_03->_padding_ = *(longlong *)this_03->_padding_ + 4;
            }
            iVar32 = *(int *)(lVar36 + 0x14) - *(int *)(lVar2 + 0x18);
            if (FGameplayDebuggerDataPack::PacketSize < iVar32) {
              iVar32 = FGameplayDebuggerDataPack::PacketSize;
            }
            if (0 < iVar32) {
              (**(code **)(this_03->_padding_ + 0x188))
                        (this_03,(longlong)*(int *)(lVar2 + 0x18) + *(longlong *)(local_218 + lVar7)
                         ,(longlong)iVar32);
            }
            if (5 < (byte)LogGameplayDebugReplication._0_1_) {
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
            }
          }
          local_1e0 = lVar40 + 1;
          local_218 = local_218 + 0x60;
          uVar31 = uVar31 + 1;
        } while ((int)uVar31 < (int)(uint)local_res20[0]);
      }
      pFVar41 = (FNetFastCategoryBaseState *)(ulonglong)(uVar35 + 1);
      local_210 = local_210 + 1;
    } while ((int)(uVar35 + 1) < (this->SavedData).ArrayNum);
  }
  if (local_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data);
  }
  return true;
}

// OnCategoriesChanged @ 146d55250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGameplayDebuggerNetPack::OnCategoriesChanged(FGameplayDebuggerNetPack *this)

{
  TArray<FGameplayDebuggerCategoryData,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  FGameplayDebuggerCategoryData *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  
  this_00 = &this->SavedData;
  piVar1 = &(this->SavedData).ArrayMax;
  pFVar5 = (FGameplayDebuggerCategoryData *)(this_00->AllocatorInstance).Data;
  piVar2 = &(this->SavedData).ArrayNum;
  if ((this->SavedData).ArrayMax < 0) {
    DestructItems<FGameplayDebuggerCategoryData,int>(pFVar5,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FGameplayDebuggerCategoryData,int>(pFVar5,*piVar2);
    *piVar2 = 0;
  }
  iVar3 = *piVar2;
  uVar4 = (((this->Owner).field0_0x0.DebugPtr)->Categories).ArrayNum;
  if (iVar3 < (int)uVar4) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,uVar4 - iVar3,&this_00->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<FGameplayDebuggerCategoryData,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x40,uVar4 - iVar3);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar3) {
      uVar9 = iVar3 - uVar4;
      if (((int)(uVar9 | uVar4) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar9 != 0) {
        TArray<FGameplayDebuggerCategoryData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar4,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&this_00->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  return;
}

// PopulateFromOwner @ 146d579a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGameplayDebuggerNetPack::PopulateFromOwner(FGameplayDebuggerNetPack *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  int iVar5;
  AGameplayDebuggerCategoryReplicator *pAVar6;
  longlong lVar7;
  FGameplayDebuggerShape *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FGameplayDebuggerDataPack *pFVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  longlong local_res8;
  
  pAVar6 = (this->Owner).field0_0x0.DebugPtr;
  if ((((pAVar6 != (AGameplayDebuggerCategoryReplicator *)0x0) && (pAVar6->bIsEnabled != false)) &&
      (iVar5 = (this->SavedData).ArrayNum, (pAVar6->Categories).ArrayNum == iVar5)) &&
     (uVar15 = 0, 0 < iVar5)) {
    lVar16 = 0;
    local_res8 = 0;
    do {
      pAVar6 = (this->Owner).field0_0x0.DebugPtr;
      uVar12 = 0;
      if ((int)uVar15 < (pAVar6->Categories).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar7 = *(longlong *)((pAVar6->Categories).AllocatorInstance.Data + lVar16);
      uVar12 = 0;
      if ((int)uVar15 < (this->SavedData).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar17 = (this->SavedData).AllocatorInstance.Data + local_res8;
      *(undefined8 *)pFVar17 = *(undefined8 *)(lVar7 + 0x48);
      pFVar17[0x38] = (FScriptContainerElement)((byte)(*(uint *)(lVar7 + 0x34) >> 7) & 1);
      if ((*(int *)(pFVar17 + 0x10) != *(int *)(lVar7 + 0x58)) ||
         (bVar10 = CompareItems<FString,int>
                             (*(FString **)(pFVar17 + 8),*(FString **)(lVar7 + 0x50),
                              *(int *)(pFVar17 + 0x10)), !bVar10)) {
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar17 + 8),
                   (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar7 + 0x50));
      }
      pFVar1 = pFVar17 + 0x18;
      pFVar2 = (FScriptContainerElement *)(lVar7 + 0x60);
      if (((*(int *)(pFVar17 + 0x20) != *(int *)(lVar7 + 0x68)) ||
          (bVar10 = CompareItems<FGameplayDebuggerShape,int>
                              (*(FGameplayDebuggerShape **)&pFVar1->field_0x0,
                               *(FGameplayDebuggerShape **)&pFVar2->field_0x0,
                               *(int *)(pFVar17 + 0x20)), !bVar10)) && (pFVar1 != pFVar2)) {
        DestructItems<FGameplayDebuggerShape,int>
                  (*(FGameplayDebuggerShape **)&pFVar1->field_0x0,*(int *)(pFVar17 + 0x20));
        iVar5 = *(int *)(lVar7 + 0x68);
        pFVar3 = pFVar17 + 0x24;
        pFVar8 = *(FGameplayDebuggerShape **)&pFVar2->field_0x0;
        *(int *)(pFVar17 + 0x20) = iVar5;
        if ((iVar5 == 0) && (*(int *)pFVar3 == 0)) {
          *(int *)pFVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar5,*(int *)pFVar3,(ForAnyElementType *)pFVar1,iVar5,(int *)pFVar3);
          ConstructItems<FGameplayDebuggerShape,FGameplayDebuggerShape,int>
                    (*(FScriptContainerElement **)&pFVar1->field_0x0,pFVar8,iVar5);
        }
      }
      if ((((this->Owner).field0_0x0.DebugPtr)->bSendDataPacksUsingRPC != 0) &&
         (uVar12 = 0, 0 < *(int *)(lVar7 + 0x78))) {
        lVar13 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar12 < *(int *)(lVar7 + 0x78)) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
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
          if (((*(byte *)(lVar7 + 0x34) & 0x20) == 0) &&
             (pFVar14 = (FGameplayDebuggerDataPack *)(*(longlong *)(lVar7 + 0x70) + lVar13),
             pFVar14->bNeedsConfirmation == 1 && pFVar14->bReceived == 0)) {
            AGameplayDebuggerCategoryReplicator::SendDataPackPacket
                      ((this->Owner).field0_0x0.DebugPtr,*(FName *)(lVar7 + 0x48),uVar12,pFVar14);
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 0x60;
        } while ((int)uVar12 < *(int *)(lVar7 + 0x78));
      }
      local_res8 = local_res8 + 0x40;
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar15 < (this->SavedData).ArrayNum);
  }
  return;
}

