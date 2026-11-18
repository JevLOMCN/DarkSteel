// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 31

// FReplicationConditionals @ 1442299c0

FReplicationConditionals * __thiscall
UE::Net::Private::FReplicationConditionals::FReplicationConditionals(FReplicationConditionals *this)

{
  (this->PerObjectInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerObjectInfos).ArrayNum = 0;
  (this->PerObjectInfos).ArrayMax = 0;
  (this->ConnectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectionInfos).ArrayNum = 0;
  (this->ConnectionInfos).ArrayMax = 0;
  *(undefined8 *)&this->DynamicConditions = 0;
  *(undefined8 *)&(this->DynamicConditions).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicConditions).field_0x20 = 0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  this->ReplicationFiltering = (FReplicationFiltering *)0x0;
  this->ReplicationConnections = (FReplicationConnections *)0x0;
  this->BaselineInvalidationTracker = (FDeltaCompressionBaselineInvalidationTracker *)0x0;
  this->NetObjectGroups = (FNetObjectGroups *)0x0;
  *(undefined4 *)&(this->DynamicConditions).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicConditions).field_0x34 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DynamicConditions).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x48 = 0;
  (this->ObjectsWithDirtyLifetimeConditionals).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsWithDirtyLifetimeConditionals).Storage.ArrayNum = 0;
  (this->ObjectsWithDirtyLifetimeConditionals).Storage.ArrayMax = 0;
  (this->ObjectsWithDirtyLifetimeConditionals).BitCount = 0;
  this->MaxInternalNetRefIndex = 0;
  this->MaxConnectionCount = 0;
  this->CachedRemoteRoleRepIndex = 0xffff;
  return this;
}

// AddConnection @ 14422dc70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::AddConnection
          (FReplicationConditionals *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1 < (this->ConnectionInfos).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UE::Net::Private::FReplicationConditionals::FConditionalsMask,TSizedDefaultAllocator<32>_>
  ::SetNumZeroed((TArray<UE::Net::Private::FReplicationConditionals::FConditionalsMask,TSizedDefaultAllocator<32>_>
                  *)((this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10)
                 ,this->MaxInternalNetRefIndex,Default);
  return;
}

// ApplyConditionalsToChangeMask @ 144230670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationConditionals::ApplyConditionalsToChangeMask
          (FReplicationConditionals *this,uint param_1,bool param_2,uint param_3,uint param_4,
          uint *param_5,uint *param_6,FReplicationProtocol *param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  FScriptContainerElement *pFVar6;
  FReplicationStateMemberChangeMaskDescriptor *pFVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FReplicationProtocol *pFVar15;
  bool bVar16;
  undefined1 uVar17;
  ELifetimeCondition EVar18;
  uint uVar19;
  UEnum *pUVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  byte bVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  FReplicationStateDescriptor **ppFVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  FReplicationStateDescriptor *pFVar34;
  longlong lVar35;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar36;
  uint uVar37;
  uint uVar38;
  bool local_128;
  uint local_124;
  int local_118;
  uint local_114;
  uint local_110;
  FNetBitArrayView local_108;
  FReplicationStateMemberLifetimeConditionDescriptor *local_f8;
  uint local_f0;
  FReplicationStateDescriptor *local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FReplicationStateMemberLifetimeConditionDescriptor *local_c0;
  FReplicationStateDescriptor **local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar15 = param_7;
  lVar35 = (longlong)(int)param_1;
  local_128 = false;
  FNetBitArrayView::FNetBitArrayView(&local_108,param_5,param_7->ChangeMaskBitCount);
  bVar16 = false;
  if ((pFVar15->ProtocolTraits & HasLifetimeConditionals) != None) {
    GetLifetimeConditionals(this,(uint)&param_7,param_1,SUB41(param_3,0));
    uVar31 = 0;
    if ((int)param_1 < (this->ConnectionInfos).ArrayNum) {
      uVar31 = ~param_1 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    pFVar6 = (this->ConnectionInfos).AllocatorInstance.Data;
    uVar31 = 0;
    if ((int)param_4 < *(int *)(pFVar6 + lVar35 * 0x10 + 8)) {
      uVar31 = ~param_4 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    uVar4 = (ushort)param_7;
    uVar25 = *(ushort *)(*(longlong *)(pFVar6 + lVar35 * 0x10) + (longlong)(int)param_4 * 2);
    if (uVar25 == 0) {
      uVar25 = (ushort)param_7;
    }
    uVar31 = 0;
    if ((int)param_1 < (this->ConnectionInfos).ArrayNum) {
      uVar31 = ~param_1 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    pFVar6 = (this->ConnectionInfos).AllocatorInstance.Data;
    uVar31 = 0;
    if ((int)param_4 < *(int *)(pFVar6 + lVar35 * 0x10 + 8)) {
      uVar31 = ~param_4 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    uVar21 = 0;
    *(ushort *)(*(longlong *)(pFVar6 + lVar35 * 0x10) + (longlong)(int)param_4 * 2) = uVar4;
    local_f0 = (uint)pFVar15->LifetimeConditionalsStateCount;
    if (local_f0 == 1) {
      uVar31 = pFVar15->FirstLifetimeConditionalsChangeMaskOffset;
      pFVar34 = pFVar15->ReplicationStateDescriptors[pFVar15->FirstLifetimeConditionalsStateIndex];
      local_124 = 0;
      uVar4 = pFVar34->MemberCount;
      pFVar7 = pFVar34->MemberChangeMaskDescriptors;
      local_f8 = pFVar34->MemberLifetimeConditionDescriptors;
      if (uVar4 != 0) {
        do {
          bVar24 = local_f8[uVar21].Condition;
          uVar28 = (uint)uVar21;
          if (bVar24 == 0xe) {
            if (pFVar34->MemberProperties[uVar21] == (FProperty *)0x0) {
              bVar16 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6979544305241162413>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
                                  ,0x2ad,"Property != nullptr");
              uVar28 = local_124;
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                uVar17 = (*pcVar8)();
                return (bool)uVar17;
              }
            }
            else {
              EVar18 = GetDynamicCondition(this,param_4,pFVar34->MemberProperties[uVar21]->RepIndex)
              ;
              bVar24 = (byte)EVar18;
              uVar28 = local_124;
            }
          }
          uVar22 = 1 << (bVar24 & 0x1f);
          if ((uVar22 & (ushort)param_7) == 0) {
            bVar16 = FNetBitArrayView::IsAnyBitSet
                               (&local_108,pFVar7[uVar21].BitOffset + uVar31,
                                (uint)pFVar7[uVar21].BitCount);
            uVar28 = local_124;
            if (bVar16) {
              if (6 < (byte)LogIrisConditionals._0_1_) {
                pUVar20 = StaticEnum<enum_ELifetimeCondition>();
                if ((pUVar20 == (UEnum *)0x0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("EnumClass != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                        ,0xca4,L""), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  uVar17 = (*pcVar8)();
                  return (bool)uVar17;
                }
                UEnum::GetNameByValue(pUVar20,(long64)&local_d8);
                ::FName::ToString(&local_d8,&local_a0);
                FNetRefHandleManager::PrintObjectFromIndex
                          (this->NetRefHandleManager,&local_60,param_4);
                Logging::Private::BasicLog<7>
                          (&::LOG_Static,(FLogCategoryBase *)&LogIrisConditionals);
                if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60.Data.AllocatorInstance.Data);
                }
                if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                }
              }
              FNetBitArrayView::ClearBits
                        (&local_108,pFVar7[uVar21].BitOffset + uVar31,(uint)pFVar7[uVar21].BitCount)
              ;
              local_128 = true;
            }
          }
          else if ((uVar22 & uVar25) == 0) {
            if (5 < (byte)LogIrisConditionals._0_1_) {
              pUVar20 = StaticEnum<enum_ELifetimeCondition>();
              if ((pUVar20 == (UEnum *)0x0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("EnumClass != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                      ,0xca4,L""), bVar16)) {
                pcVar8 = (code *)swi(3);
                uVar17 = (*pcVar8)();
                return (bool)uVar17;
              }
              UEnum::GetNameByValue(pUVar20,(long64)&local_e0);
              ::FName::ToString(&local_e0,&local_b0);
              FNetRefHandleManager::PrintObjectFromIndex
                        (this->NetRefHandleManager,&local_70,param_4);
              Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisConditionals);
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
            }
            uVar22 = pFVar7[uVar21].BitOffset + uVar31;
            uVar33 = pFVar7[uVar21].BitCount + uVar22;
            puVar1 = local_108.Storage;
            for (; uVar28 = local_124, local_108.Storage = puVar1, uVar22 != uVar33;
                uVar22 = uVar22 + 1) {
              if ((local_108.BitCount <= uVar22) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2c1,L""), bVar16)) {
                pcVar8 = (code *)swi(3);
                uVar17 = (*pcVar8)();
                return (bool)uVar17;
              }
              puVar2 = local_108.Storage;
              uVar28 = uVar22 >> 5;
              local_128 = (bool)(local_128 | (puVar1[uVar28] >> (uVar22 & 0x1f) & 1) == 0);
              if ((local_108.BitCount <= uVar22) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2a2,L""), bVar16)) {
                pcVar8 = (code *)swi(3);
                uVar17 = (*pcVar8)();
                return (bool)uVar17;
              }
              puVar2[uVar28] = puVar2[uVar28] | 1 << (uVar22 & 0x1f);
              puVar1 = local_108.Storage;
            }
          }
          local_124 = uVar28 + 1;
          uVar21 = (ulonglong)local_124;
          bVar16 = local_128;
        } while (local_124 != uVar4);
        goto LAB_1442312c4;
      }
    }
    else {
      uVar31 = pFVar15->ReplicationStateCount;
      pFVar36 = (FReplicationStateMemberLifetimeConditionDescriptor *)
                pFVar15->ReplicationStateDescriptors;
      local_118 = 0;
      local_110 = 0;
      local_f8 = pFVar36;
      if (((int)uVar31 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        uVar17 = (*pcVar8)();
        return (bool)uVar17;
      }
      ppFVar29 = (FReplicationStateDescriptor **)((longlong)pFVar36 + (longlong)(int)uVar31 * 8);
      local_b8 = ppFVar29;
      if (pFVar36 != (FReplicationStateMemberLifetimeConditionDescriptor *)ppFVar29) {
        do {
          uVar21 = 0;
          pFVar34 = *(FReplicationStateDescriptor **)pFVar36;
          if ((pFVar34->Traits & HasLifetimeConditionals) != None) {
            uVar4 = pFVar34->MemberCount;
            pFVar7 = pFVar34->MemberChangeMaskDescriptors;
            local_c0 = pFVar34->MemberLifetimeConditionDescriptors;
            local_114 = 0;
            local_e8 = pFVar34;
            if (uVar4 != 0) {
              do {
                uVar31 = (uint)uVar21;
                bVar24 = local_c0[uVar21].Condition;
                if (bVar24 == 0xe) {
                  if (pFVar34->MemberProperties[uVar21] == (FProperty *)0x0) {
                    bVar16 = Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<6979544305241162464>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
                                        ,0x2e0,"Property != nullptr");
                    if (bVar16) {
                      pcVar8 = (code *)swi(3);
                      uVar17 = (*pcVar8)();
                      return (bool)uVar17;
                    }
                  }
                  else {
                    EVar18 = GetDynamicCondition(this,param_4,
                                                 pFVar34->MemberProperties[uVar21]->RepIndex);
                    bVar24 = (byte)EVar18;
                  }
                }
                puVar1 = local_108.Storage;
                uVar28 = 1 << (bVar24 & 0x1f);
                if ((uVar28 & (ushort)param_7) == 0) {
                  uVar28 = (uint)pFVar7[uVar21].BitOffset + local_118;
                  uVar5 = pFVar7[uVar21].BitCount;
                  if (uVar5 == 1) {
                    if ((local_108.BitCount <= uVar28) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index < BitCount",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                            ,0x2c1,L""), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      uVar17 = (*pcVar8)();
                      return (bool)uVar17;
                    }
                    bVar16 = (puVar1[uVar28 >> 5] >> (uVar28 & 0x1f) & 1) != 0;
                  }
                  else {
                    if (uVar28 < local_108.BitCount && uVar5 != 0) {
                      uVar22 = local_108.BitCount;
                      if ((ulonglong)uVar28 + ((ulonglong)uVar5 - 1) <
                          (ulonglong)local_108.BitCount - 1) {
                        uVar22 = uVar28 + uVar5;
                      }
                      uVar33 = -1 << ((byte)uVar28 & 0x1f);
                      uVar26 = uVar22 - 1 >> 5;
                      for (uVar28 = uVar28 >> 5; uVar28 <= uVar26; uVar28 = uVar28 + 1) {
                        uVar23 = 0xffffffff;
                        if (uVar28 == uVar26) {
                          uVar23 = 0xffffffff >> (~(byte)(uVar22 - 1) & 0x1f);
                        }
                        uVar23 = uVar23 & uVar33;
                        uVar33 = 0xffffffff;
                        if ((local_108.Storage[uVar28] & uVar23) != 0) {
                          bVar16 = true;
                          goto LAB_144231161;
                        }
                      }
                    }
                    bVar16 = false;
                  }
LAB_144231161:
                  if (bVar16) {
                    if (6 < (byte)LogIrisConditionals._0_1_) {
                      pUVar20 = StaticEnum<enum_ELifetimeCondition>();
                      if ((pUVar20 == (UEnum *)0x0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("EnumClass != nullptr",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                              ,0xca4,L""), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        uVar17 = (*pcVar8)();
                        return (bool)uVar17;
                      }
                      UEnum::GetNameByValue(pUVar20,(long64)&local_c8);
                      ::FName::ToString(&local_c8,&local_80);
                      FNetRefHandleManager::PrintObjectFromIndex
                                (this->NetRefHandleManager,&local_40,param_4);
                      Logging::Private::BasicLog<7>
                                (&::LOG_Static,(FLogCategoryBase *)&LogIrisConditionals);
                      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_40.Data.AllocatorInstance.Data);
                      }
                      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_80.Data.AllocatorInstance.Data);
                      }
                    }
                    FNetBitArrayView::ClearBits
                              (&local_108,(uint)pFVar7[uVar21].BitOffset + local_118,
                               (uint)pFVar7[uVar21].BitCount);
                    local_128 = true;
                  }
                }
                else if ((uVar28 & uVar25) == 0) {
                  if (5 < (byte)LogIrisConditionals._0_1_) {
                    pUVar20 = StaticEnum<enum_ELifetimeCondition>();
                    if ((pUVar20 == (UEnum *)0x0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("EnumClass != nullptr",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                            ,0xca4,L""), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      uVar17 = (*pcVar8)();
                      return (bool)uVar17;
                    }
                    UEnum::GetNameByValue(pUVar20,(long64)&local_d0);
                    ::FName::ToString(&local_d0,&local_90);
                    FNetRefHandleManager::PrintObjectFromIndex
                              (this->NetRefHandleManager,&local_50,param_4);
                    Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogIrisConditionals);
                    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_50.Data.AllocatorInstance.Data);
                    }
                    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_90.Data.AllocatorInstance.Data);
                    }
                  }
                  uVar28 = (uint)pFVar7[uVar21].BitOffset + local_118;
                  uVar22 = pFVar7[uVar21].BitCount + uVar28;
                  puVar1 = local_108.Storage;
                  pFVar34 = local_e8;
                  for (; local_108.Storage = puVar1, local_e8 = pFVar34, uVar28 != uVar22;
                      uVar28 = uVar28 + 1) {
                    if ((local_108.BitCount <= uVar28) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index < BitCount",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                            ,0x2c1,L""), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      uVar17 = (*pcVar8)();
                      return (bool)uVar17;
                    }
                    puVar2 = local_108.Storage;
                    uVar31 = uVar28 >> 5;
                    local_128 = (bool)(local_128 | (puVar1[uVar31] >> (uVar28 & 0x1f) & 1) == 0);
                    if ((local_108.BitCount <= uVar28) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index < BitCount",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                            ,0x2a2,L""), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      uVar17 = (*pcVar8)();
                      return (bool)uVar17;
                    }
                    puVar2[uVar31] = puVar2[uVar31] | 1 << (uVar28 & 0x1f);
                    uVar31 = local_114;
                    puVar1 = local_108.Storage;
                    pFVar34 = local_e8;
                  }
                }
                local_114 = uVar31 + 1;
                uVar21 = (ulonglong)local_114;
                ppFVar29 = local_b8;
                pFVar36 = local_f8;
              } while (local_114 != uVar4);
            }
            local_110 = local_110 + 1;
            bVar16 = local_128;
            if (local_110 == local_f0) break;
          }
          pFVar36 = (FReplicationStateMemberLifetimeConditionDescriptor *)((longlong)pFVar36 + 8);
          local_118 = local_118 + (uint)pFVar34->ChangeMaskBitCount;
          bVar16 = local_128;
          local_f8 = pFVar36;
        } while (pFVar36 != (FReplicationStateMemberLifetimeConditionDescriptor *)ppFVar29);
        goto LAB_1442312c4;
      }
    }
    bVar16 = false;
  }
LAB_1442312c4:
  uVar21 = 0;
  uVar31 = 0;
  if (param_6 != (uint *)0x0) {
    if (local_108.WordCount != 0) {
      uVar30 = uVar21;
      uVar32 = uVar21;
      if ((7 < local_108.WordCount) &&
         ((param_6 + (local_108.WordCount - 1) < param_5 ||
          (uVar30 = 0, param_5 + (local_108.WordCount - 1) < param_6)))) {
        uVar26 = 0;
        uVar23 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar31 = 0;
        uVar28 = 0;
        uVar22 = 0;
        uVar33 = 0;
        do {
          puVar2 = param_5 + uVar21;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          puVar1 = param_6 + uVar21;
          uVar12 = puVar1[1];
          uVar13 = puVar1[2];
          uVar14 = puVar1[3];
          uVar26 = uVar26 | ~*puVar1 & *puVar2;
          uVar23 = uVar23 | ~uVar12 & uVar9;
          uVar37 = uVar37 | ~uVar13 & uVar10;
          uVar38 = uVar38 | ~uVar14 & uVar11;
          puVar3 = param_5 + uVar21;
          *puVar3 = *puVar1 & *puVar2;
          puVar3[1] = uVar12 & uVar9;
          puVar3[2] = uVar13 & uVar10;
          puVar3[3] = uVar14 & uVar11;
          uVar19 = (int)uVar21 + 4;
          uVar27 = (int)uVar21 + 8;
          uVar21 = (ulonglong)uVar27;
          puVar2 = param_5 + uVar19;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          puVar1 = param_6 + uVar19;
          uVar12 = puVar1[1];
          uVar13 = puVar1[2];
          uVar14 = puVar1[3];
          uVar31 = uVar31 | ~*puVar1 & *puVar2;
          uVar28 = uVar28 | ~uVar12 & uVar9;
          uVar22 = uVar22 | ~uVar13 & uVar10;
          uVar33 = uVar33 | ~uVar14 & uVar11;
          puVar3 = param_5 + uVar19;
          *puVar3 = *puVar1 & *puVar2;
          puVar3[1] = uVar12 & uVar9;
          puVar3[2] = uVar13 & uVar10;
          puVar3[3] = uVar14 & uVar11;
        } while (uVar27 != (local_108.WordCount & 0xfffffff8));
        uVar32 = (ulonglong)(uVar31 | uVar26 | uVar22 | uVar37 | uVar28 | uVar23 | uVar33 | uVar38);
        uVar30 = uVar21;
      }
      uVar31 = (uint)uVar32;
      uVar28 = (uint)uVar30;
      while (uVar28 != local_108.WordCount) {
        uVar28 = (int)uVar30 + 1;
        uVar31 = param_6[uVar30];
        uVar22 = param_5[uVar30];
        param_5[uVar30] = uVar22 & uVar31;
        uVar31 = (uint)uVar32 | ~uVar31 & uVar22;
        uVar32 = (ulonglong)uVar31;
        uVar30 = (ulonglong)uVar28;
      }
    }
    bVar16 = (bool)(uVar31 != 0 | bVar16);
  }
  return bVar16;
}

// ClearConnectionInfosForObject @ 144233100

void __thiscall
UE::Net::Private::FReplicationConditionals::ClearConnectionInfosForObject
          (FReplicationConditionals *this,FNetBitArray *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  FNetBitArrayRangedForConstIterator local_58;
  FNetBitArrayRangedForConstIterator local_40;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId873,"FReplicationConditionals_ClearConnectionInfosForObject"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
               ,0x369);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId873);
  }
  FNetBitArray::begin(param_1,&local_58);
  FNetBitArray::end(param_1,&local_40);
  uVar7 = local_58.CurrentWord;
LAB_1442331a2:
  do {
    uVar8 = local_58.CurrentBitIndex;
    if ((local_58.Data != local_40.Data) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->Data == It.Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x6cb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 == local_40.CurrentBitIndex) {
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar4 = 0;
    if ((int)uVar8 < (this->ConnectionInfos).ArrayNum) {
      uVar4 = ~uVar8 >> 0x1f;
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
    pFVar9 = (this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    uVar4 = 0;
    if ((int)param_2 < *(int *)(pFVar9 + 8)) {
      uVar4 = ~param_2 >> 0x1f;
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
    *(undefined2 *)(*(longlong *)pFVar9 + (longlong)(int)param_2 * 2) = 0;
    uVar5 = (ulonglong)(uVar8 >> 5);
    while (uVar7 == 0) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (local_58.WordCount <= uVar4) {
        local_58.CurrentBitIndex = local_58.BitCount;
        goto LAB_1442331a2;
      }
      uVar8 = uVar8 + 0x20;
      uVar7 = local_58.Data[uVar5];
      local_58.CurrentWord = uVar7;
    }
    iVar1 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    iVar6 = 0x20;
    if (uVar7 != 0) {
      iVar6 = iVar1;
    }
    uVar8 = iVar6 + (uVar8 & 0xffffffe0);
    local_58.CurrentBitIndex = local_58.BitCount;
    if (uVar8 < local_58.BitCount) {
      local_58.CurrentBitIndex = uVar8;
    }
    uVar7 = uVar7 & uVar7 - 1;
    local_58.CurrentWord = uVar7;
  } while( true );
}

// ClearPerObjectInfo @ 144233d10

void __thiscall
UE::Net::Private::FReplicationConditionals::ClearPerObjectInfo
          (FReplicationConditionals *this,uint param_1)

{
  uint local_res10 [6];
  
  *(undefined2 *)((this->PerObjectInfos).AllocatorInstance.Data + (ulonglong)param_1 * 2) = 0;
  if (*(int *)&(this->DynamicConditions).field_0x8 != *(int *)&(this->DynamicConditions).field_0x34)
  {
    local_res10[0] = param_1;
    TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>,FDefaultSetAllocator>
                *)&this->DynamicConditions,param_1,local_res10);
  }
  return;
}

// DynamicConditionChangeRequiresBaselineInvalidation @ 144237c40

bool __thiscall
UE::Net::Private::FReplicationConditionals::DynamicConditionChangeRequiresBaselineInvalidation
          (FReplicationConditionals *this,ELifetimeCondition param_1,ELifetimeCondition param_2)

{
  if (((param_1 != COND_None) && (param_1 != COND_Dynamic)) && (param_2 != COND_Never)) {
    return true;
  }
  return false;
}

// GetChildSubObjectsToReplicate @ 14423b4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::GetChildSubObjectsToReplicate
          (FReplicationConditionals *this,uint param_1,FConditionalsMask *param_2,uint param_3,
          TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_4)

{
  longlong lVar1;
  uint uVar2;
  FNetRefHandleManager *pFVar3;
  FNetObjectGroups *this_00;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  FNetObjectGroup *pFVar10;
  ForElementType<unsigned_int> FVar11;
  UEnum *this_01;
  ForAnyElementType FVar12;
  longlong lVar13;
  bool bVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  FNetObjectGroupHandle_u_0 local_res8;
  uint local_res10;
  ENetFilterStatus local_res20 [2];
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  char *local_98;
  ulonglong local_90;
  FNetObjectGroupHandle_u_0 *local_88;
  FName local_80;
  FString local_78;
  TArrayView<unsigned_int_const_,int> local_68;
  FString local_58;
  FString local_48;
  
  pFVar3 = this->NetRefHandleManager;
  if (*(int *)&(pFVar3->SubObjects).DependencyInfos.field_0x8 !=
      *(int *)&(pFVar3->SubObjects).DependencyInfos.field_0x34) {
    puVar18 = *(undefined1 **)&(pFVar3->SubObjects).DependencyInfos.field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(pFVar3->SubObjects).DependencyInfos.field_0x38;
    }
    iVar9 = *(int *)(puVar18 +
                    (ulonglong)
                    (*(int *)&(pFVar3->SubObjects).DependencyInfos.field_0x48 - 1U & param_3) * 4);
    if (iVar9 != -1) {
      lVar13 = *(longlong *)&(pFVar3->SubObjects).DependencyInfos;
      while (lVar1 = lVar13 + (longlong)iVar9 * 0x28,
            *(uint *)(lVar13 + (longlong)iVar9 * 0x28) != param_3) {
        iVar9 = *(int *)(lVar1 + 0x20);
        if (iVar9 == -1) {
          return;
        }
      }
      lVar13 = lVar1 + 4;
      if (lVar1 == 0) {
        lVar13 = 0;
      }
      if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -1)) {
        iVar9 = *(int *)(lVar13 + 0x10);
        puVar17 = (uint *)((longlong)*(int *)(lVar13 + 4) * 0x30 +
                          *(longlong *)&(pFVar3->SubObjects).DependentObjectsStorage);
        local_a0 = *(uint **)(puVar17 + 8);
        if (*(uint **)(puVar17 + 8) == (uint *)0x0) {
          local_a0 = puVar17;
        }
        local_res10 = param_1;
        if (iVar9 == -1) {
          uVar16 = (ulonglong)puVar17[10];
        }
        else {
          lVar13 = *(longlong *)&(pFVar3->SubObjects).SubObjectConditionalsStorage;
          local_98 = *(char **)(lVar13 + 8 + (longlong)iVar9 * 0x18);
          uVar16 = (ulonglong)puVar17[10];
          if (local_98 == (char *)0x0) {
            local_98 = (char *)(lVar13 + (longlong)iVar9 * 0x18);
          }
          if (local_98 != (char *)0x0) {
            local_90 = uVar16;
            if (puVar17[10] == 0) {
              return;
            }
            do {
              local_a8 = *local_a0;
              if ((int)*local_98 == 0x10) {
                bVar14 = false;
                FNetObjectGroups::GetGroupIndexesOfNetObject
                          (this->NetObjectGroups,&local_68,local_a8);
                puVar17 = local_68.DataPtr + local_68.ArrayNum;
                for (puVar15 = local_68.DataPtr; puVar15 != puVar17; puVar15 = puVar15 + 1) {
                  this_00 = this->NetObjectGroups;
                  uVar2 = *puVar15;
                  pFVar10 = FNetObjectGroups::GetGroupFromIndex(this_00,uVar2);
                  uVar6 = local_res10;
                  if (pFVar10 == (FNetObjectGroup *)0x0) {
LAB_14423b658:
                    local_res8.Value = 0;
                    local_res8.Value._0_4_ = 0;
                    uVar8 = local_res8.Value._0_4_;
                  }
                  else {
                    if (uVar2 == 0) goto LAB_14423b658;
                    local_res8.Value._0_4_ = this_00->CurrentEpoch << 0x18 | uVar2 & 0xffffff;
                    local_res8._s_1.UniqueId = pFVar10->GroupId;
                    uVar8 = local_res8.Value._0_4_;
                  }
                  if ((uVar8 & 0xffffff) == 2) {
                    bVar14 = (bool)((byte)param_2->ConditionalsMask >> 2 & 1);
                  }
                  else if ((uVar8 & 0xffffff) == 3) {
                    bVar14 = (bool)((byte)(param_2->ConditionalsMask >> 10) & 1);
                  }
                  else {
                    local_res20[0] = Disallow;
                    bVar14 = FReplicationFiltering::GetSubObjectFilterStatus
                                       (this->ReplicationFiltering,
                                        (FNetObjectGroupHandle)local_res8._s_1,local_res10,
                                        local_res20);
                    if (!bVar14) {
                      local_88 = &local_res8;
                      `UE::Net::Private::FReplicationConditionals::GetChildSubObjectsToReplicate'::
                      __l30::<lambda_1>::operator()(&local_88);
                    }
                    bVar14 = local_res20[0] != Disallow;
                  }
                  if (bVar14 != false) {
                    GetChildSubObjectsToReplicate(this,uVar6,param_2,local_a8,param_4);
                    FVar4 = (param_4->AllocatorInstance).SecondaryData;
                    FVar11 = (ForElementType<unsigned_int>)param_4;
                    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                      FVar11 = FVar4;
                    }
                    if ((ulonglong)FVar11 <= &local_a8) {
                      FVar11 = (ForElementType<unsigned_int>)param_4;
                      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                        FVar11 = FVar4;
                      }
                      if ((&local_a8 < (uint *)((longlong)FVar11 + (longlong)param_4->ArrayMax * 4))
                         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                    }
                    iVar9 = param_4->ArrayNum;
                    if (iVar9 == param_4->ArrayMax) {
                      iVar9 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                        (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
                    }
                    param_4->ArrayNum = iVar9 + 1;
                    FVar4 = (param_4->AllocatorInstance).SecondaryData;
                    FVar11 = (ForElementType<unsigned_int>)param_4;
                    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                      FVar11 = FVar4;
                    }
                    *(uint *)((longlong)FVar11 + (longlong)iVar9 * 4) = local_a8;
                    break;
                  }
                }
                if ((6 < (byte)LogIrisConditionals._0_1_) && (bVar14 == false)) {
                  FNetRefHandleManager::PrintObjectFromIndex
                            (this->NetRefHandleManager,&local_58,local_a8);
                  Logging::Private::BasicLog<7>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIrisConditionals);
                  FVar12.Data = local_58.Data.AllocatorInstance.Data;
LAB_14423b9c3:
                  if (FVar12.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar12.Data);
                  }
                }
              }
              else if ((param_2->ConditionalsMask >> ((int)*local_98 & 0x1fU) & 1) == 0) {
                if (6 < (byte)LogIrisConditionals._0_1_) {
                  this_01 = StaticEnum<enum_ELifetimeCondition>();
                  if ((this_01 == (UEnum *)0x0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("EnumClass != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                          ,0xca4,L""), bVar14)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  UEnum::GetNameByValue(this_01,(long64)&local_80);
                  ::FName::ToString(&local_80,&local_78);
                  FNetRefHandleManager::PrintObjectFromIndex
                            (this->NetRefHandleManager,&local_48,local_a8);
                  Logging::Private::BasicLog<7>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIrisConditionals);
                  FVar12.Data = local_78.Data.AllocatorInstance.Data;
                  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_48.Data.AllocatorInstance.Data);
                    FVar12.Data = local_78.Data.AllocatorInstance.Data;
                  }
                  goto LAB_14423b9c3;
                }
              }
              else {
                GetChildSubObjectsToReplicate(this,local_res10,param_2,local_a8,param_4);
                FVar4 = (param_4->AllocatorInstance).SecondaryData;
                FVar11 = (ForElementType<unsigned_int>)param_4;
                if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                  FVar11 = FVar4;
                }
                if ((ulonglong)FVar11 <= &local_a8) {
                  FVar11 = (ForElementType<unsigned_int>)param_4;
                  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                    FVar11 = FVar4;
                  }
                  if ((&local_a8 < (uint *)((longlong)FVar11 + (longlong)param_4->ArrayMax * 4)) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                iVar9 = param_4->ArrayNum;
                if (iVar9 == param_4->ArrayMax) {
                  iVar9 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                    (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
                }
                param_4->ArrayNum = iVar9 + 1;
                FVar4 = (param_4->AllocatorInstance).SecondaryData;
                FVar11 = (ForElementType<unsigned_int>)param_4;
                if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                  FVar11 = FVar4;
                }
                *(uint *)((longlong)FVar11 + (longlong)iVar9 * 4) = local_a8;
              }
              local_a0 = local_a0 + 1;
              local_98 = local_98 + 1;
              local_90 = local_90 - 1;
              if (local_90 == 0) {
                return;
              }
            } while( true );
          }
        }
        if ((int)uVar16 != 0) {
          do {
            local_a4 = *local_a0;
            GetChildSubObjectsToReplicate(this,param_1,param_2,local_a4,param_4);
            FVar4 = (param_4->AllocatorInstance).SecondaryData;
            FVar11 = (ForElementType<unsigned_int>)param_4;
            if (FVar4 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = FVar4;
            }
            if ((ulonglong)FVar11 <= &local_a4) {
              FVar11 = (ForElementType<unsigned_int>)param_4;
              if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                FVar11 = FVar4;
              }
              if ((&local_a4 < (uint *)((longlong)FVar11 + (longlong)param_4->ArrayMax * 4)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar9 = param_4->ArrayNum;
            if (iVar9 == param_4->ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar9 + 1;
            FVar4 = (param_4->AllocatorInstance).SecondaryData;
            FVar11 = (ForElementType<unsigned_int>)param_4;
            if (FVar4 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = FVar4;
            }
            local_a0 = local_a0 + 1;
            *(uint *)((longlong)FVar11 + (longlong)iVar9 * 4) = local_a4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
    }
  }
  return;
}

// GetDynamicCondition @ 14423bf90

ELifetimeCondition __thiscall
UE::Net::Private::FReplicationConditionals::GetDynamicCondition
          (FReplicationConditionals *this,uint param_1,ushort param_2)

{
  uint uVar1;
  uint *puVar2;
  short *psVar3;
  TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
  *this_00;
  undefined1 *puVar4;
  
  if (*(int *)&(this->DynamicConditions).field_0x8 != *(int *)&(this->DynamicConditions).field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->DynamicConditions).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DynamicConditions).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->DynamicConditions).field_0x48 - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&this->DynamicConditions);
        if (*puVar2 == param_1) {
          this_00 = (TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                     *)(puVar2 + 2);
          if (puVar2 == (uint *)0x0) {
            this_00 = (TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                       *)0x0;
          }
          if (this_00 ==
              (TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
               *)0x0) {
            return COND_Dynamic;
          }
          psVar3 = TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                   ::Find(this_00,param_2);
          if (psVar3 == (short *)0x0) {
            return COND_Dynamic;
          }
          return (int)*psVar3;
        }
        uVar1 = puVar2[0x16];
      } while (uVar1 != 0xffffffff);
    }
  }
  return COND_Dynamic;
}

// GetLifetimeConditionals @ 14423cde0

FConditionalsMask __thiscall
UE::Net::Private::FReplicationConditionals::GetLifetimeConditionals
          (FReplicationConditionals *this,uint param_1,uint param_2,bool param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 in_register_00000014;
  ushort *puVar8;
  uint uVar9;
  undefined7 in_register_00000089;
  byte in_stack_00000028;
  
  puVar8 = (ushort *)CONCAT44(in_register_00000014,param_1);
  *puVar8 = 0;
  uVar5 = FReplicationFiltering::GetOwningConnection
                    (this->ReplicationFiltering,(uint)CONCAT71(in_register_00000089,param_3));
  uVar7 = *(ushort *)
           ((this->PerObjectInfos).AllocatorInstance.Data +
           (CONCAT71(in_register_00000089,param_3) & 0xffffffff) * 2);
  uVar6 = (ushort)in_stack_00000028;
  uVar9 = uVar7 & 0x7fff;
  uVar7 = uVar7 >> 0xf;
  if (param_2 != uVar9) {
    uVar7 = 1;
  }
  if (param_2 == uVar5) {
    uVar6 = 1;
  }
  uVar1 = 0x2000;
  if (param_2 == uVar5) {
    uVar1 = 0x2200;
  }
  uVar2 = 0x4109;
  if (param_2 == uVar5) {
    uVar2 = 0x4105;
  }
  uVar3 = 0;
  if (param_2 != uVar9) {
    uVar3 = 0x800;
  }
  uVar4 = 0x10;
  if (param_2 == uVar9) {
    uVar4 = 0x20;
  }
  *puVar8 = *puVar8 | (((uVar6 | uVar7 << 5) * 2 | uVar7) << 5 | (ushort)in_stack_00000028) * 2 |
                      uVar1 | uVar2 | uVar3 | uVar4;
  return (FConditionalsMask)(ushort)param_1;
}

// GetRemoteRoleRepIndex @ 14423ed40

ushort __thiscall
UE::Net::Private::FReplicationConditionals::GetRemoteRoleRepIndex
          (FReplicationConditionals *this,FReplicationProtocol *param_1)

{
  FReplicationStateDescriptor **ppFVar1;
  uint uVar2;
  FReplicationStateDescriptor *pFVar3;
  FProperty *pFVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  FNameEntryId FVar8;
  undefined4 extraout_var;
  ulonglong uVar9;
  FReplicationStateMemberSerializerDescriptor *pFVar10;
  FReplicationStateMemberSerializerDescriptor *pFVar11;
  FReplicationStateDescriptor **ppFVar12;
  undefined1 local_res8 [8];
  
  uVar7 = this->CachedRemoteRoleRepIndex;
  if (uVar7 == 0xffff) {
    uVar2 = param_1->ReplicationStateCount;
    ppFVar12 = param_1->ReplicationStateDescriptors;
    if (((int)uVar2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
    ppFVar1 = ppFVar12 + (int)uVar2;
    for (; ppFVar12 != ppFVar1; ppFVar12 = ppFVar12 + 1) {
      pFVar3 = *ppFVar12;
      pFVar11 = pFVar3->MemberSerializerDescriptors;
      pFVar10 = pFVar11 + pFVar3->MemberCount;
      for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 1) {
        if ((pFVar11->Serializer == &FNetRoleNetSerializerNetSerializerInfo::Serializer) &&
           (pFVar4 = pFVar3->MemberProperties
                     [(longlong)pFVar11 - (longlong)pFVar3->MemberSerializerDescriptors >> 4],
           pFVar4 != (FProperty *)0x0)) {
          bVar6 = IsThisNotNull(pFVar4,"FField::GetFName");
          if (bVar6) {
            uVar9 = pFVar4->_padding_;
          }
          else {
            uVar9 = 0;
          }
          FVar8 = FNameEntryId::FromValidEName((EName)local_res8);
          if (uVar9 == *(uint *)CONCAT44(extraout_var,FVar8.Value)) {
            this->CachedRemoteRoleRepIndex = pFVar4->RepIndex;
            return pFVar4->RepIndex;
          }
        }
      }
    }
    uVar7 = 0xffff;
  }
  return uVar7;
}

// GetSubObjectsToReplicate @ 14423f740

void __thiscall
UE::Net::Private::FReplicationConditionals::GetSubObjectsToReplicate
          (FReplicationConditionals *this,uint param_1,uint param_2,
          TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  FConditionalsMask local_18 [8];
  
  GetLifetimeConditionals(this,(uint)local_18,param_1,SUB41(param_2,0));
  GetChildSubObjectsToReplicate(this,param_1,local_18,param_2,param_3);
  return;
}

// Init @ 144240510

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::Init
          (FReplicationConditionals *this,FReplicationConditionalsInitParams *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (((param_1->MaxConnectionCount & 0x7fff) != param_1->MaxConnectionCount) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectInfo.AutonomousConnectionId == Params.MaxConnectionCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
                         ,0x2e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->NetRefHandleManager = param_1->NetRefHandleManager;
  this->ReplicationFiltering = param_1->ReplicationFiltering;
  this->ReplicationConnections = param_1->ReplicationConnections;
  this->BaselineInvalidationTracker = param_1->BaselineInvalidationTracker;
  this->NetObjectGroups = param_1->NetObjectGroups;
  uVar6 = param_1->MaxInternalNetRefIndex;
  this->MaxInternalNetRefIndex = uVar6;
  this->MaxConnectionCount = param_1->MaxConnectionCount;
  TArray<UE::Net::Private::FReplicationConditionals::FPerObjectInfo,TSizedDefaultAllocator<32>_>::
  SetNumZeroed(&this->PerObjectInfos,uVar6,Default);
  piVar1 = &(this->ConnectionInfos).ArrayNum;
  iVar2 = *piVar1;
  uVar6 = this->MaxConnectionCount + 1;
  if (iVar2 < (int)uVar6) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar6 - iVar2,&(this->ConnectionInfos).AllocatorInstance,piVar1,
                       &(this->ConnectionInfos).ArrayMax);
    DefaultConstructItems<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,int>
              ((this->ConnectionInfos).AllocatorInstance.Data + (longlong)iVar5 * 0x10,uVar6 - iVar2
              );
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar2) {
      uVar7 = iVar2 - uVar6;
      if (((int)(uVar7 | uVar6) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        TArray<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->ConnectionInfos,uVar6,uVar7);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->ConnectionInfos).AllocatorInstance,*piVar1,
                   &(this->ConnectionInfos).ArrayMax);
      }
    }
  }
  FNetBitArray::Init(&this->ObjectsWithDirtyLifetimeConditionals,param_1->MaxInternalNetRefIndex);
  return;
}

// InitPropertyCustomConditions @ 144241830

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::InitPropertyCustomConditions
          (FReplicationConditionals *this,uint param_1)

{
  ushort uVar1;
  UObject *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FReplicationStateDescriptor *pFVar4;
  code *pcVar5;
  bool bVar6;
  FReplicatedObjectData *pFVar7;
  uchar **ppuVar8;
  FNetPropertyConditionManager *this_00;
  TSharedPtr<FRepChangedPropertyTracker,1> *pTVar9;
  short *psVar10;
  TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
  *this_01;
  ForElementType<unsigned_int> FVar11;
  longlong lVar12;
  int iVar13;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar14;
  FReplicationStateDescriptor **ppFVar15;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar16;
  FReplicationInstanceProtocol *pFVar17;
  ForElementType<unsigned_int> FVar18;
  FReplicationProtocol *pFVar19;
  bool bVar20;
  ushort local_res20 [4];
  short local_e8 [4];
  uint local_e0 [2];
  FWeakObjectPtr local_d8;
  short **local_d0;
  int local_c8;
  undefined4 local_c4;
  TSharedPtr<FRepChangedPropertyTracker,1> local_c0;
  FNetBitArrayView local_b0;
  TPairInitializer<unsigned_short_&,short_&&> local_a0;
  UObject *local_90;
  FReplicationProtocol *local_88;
  FReplicationInstanceProtocol *local_80;
  FReplicationStateDescriptor **local_78;
  ushort *local_70;
  short *local_68;
  TSharedPtr<FRepChangedPropertyTracker,1> local_60 [2];
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId224,"FReplicationConditionals_InitPropertyCustomConditions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
               ,0xe0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId224);
  }
  pFVar7 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1);
  pFVar19 = pFVar7->Protocol;
  local_88 = pFVar19;
  ppuVar8 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                      ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                       &this->NetRefHandleManager->ReplicatedObjectStateBuffers,param_1);
  if ((*ppuVar8 != (uchar *)0x0) && ((pFVar19->ProtocolTraits & HasLifetimeConditionals) != None)) {
    local_c4 = 1;
    local_d0 = &local_a0.Value;
    local_a0.Value = (short *)0x0;
    local_c8 = 0;
    pFVar17 = pFVar7->InstanceProtocol;
    ppFVar15 = pFVar19->ReplicationStateDescriptors + pFVar19->FirstLifetimeConditionalsStateIndex;
    iVar13 = pFVar19->ReplicationStateCount - (uint)pFVar19->FirstLifetimeConditionalsStateIndex;
    local_80 = pFVar17;
    if ((iVar13 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_78 = ppFVar15 + iVar13;
    if (ppFVar15 != local_78) {
      do {
        if (((*ppFVar15)->Traits & HasLifetimeConditionals) != None) {
          lVar12 = (longlong)ppFVar15 - (longlong)pFVar19->ReplicationStateDescriptors >> 3;
          local_c8 = 0;
          (**(code **)(pFVar17->Fragments[lVar12]->_padding_ + 0x10))
                    (pFVar17->Fragments[lVar12],&local_d0);
          if (local_c8 != 0) {
            local_c0.Object = (FRepChangedPropertyTracker *)0x0;
            local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pUVar2 = (UObject *)*local_d0;
            if (pUVar2 == (UObject *)0x0) {
              FVar18 = (ForElementType<unsigned_int>)0x0;
            }
            else {
              this_00 = FNetPropertyConditionManager::Get();
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar2);
              }
              local_d8.ObjectIndex = 0;
              local_d8.ObjectSerialNumber = 0;
              local_90 = pUVar2;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar2);
              }
              FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_90);
              pTVar9 = FNetPropertyConditionManager::FindOrCreatePropertyTracker
                                 (this_00,local_60,(FObjectKey)local_d8);
              FVar18 = (ForElementType<unsigned_int>)local_c0.Object;
              if (&local_c0 != pTVar9) {
                FVar18 = (ForElementType<unsigned_int>)pTVar9->Object;
                pTVar9->Object = (FRepChangedPropertyTracker *)0x0;
                pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
                if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                  (pTVar9->SharedReferenceCount).ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  local_c0.SharedReferenceCount.ReferenceController = pTVar3;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            (local_60[0].SharedReferenceCount.ReferenceController);
                  goto LAB_144241a59;
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_60[0].SharedReferenceCount.ReferenceController);
            }
LAB_144241a59:
            pFVar4 = *ppFVar15;
            uVar1 = pFVar4->ChangeMaskBitCount;
            local_b0.WordCount = uVar1 + 0x1f >> 5;
            local_b0.BitCount = (uint)uVar1;
            local_b0.Storage = &local_b0.BitCount;
            if (uVar1 != 0) {
              local_b0.Storage =
                   (uint *)(pFVar17->FragmentData[lVar12].ExternalSrcBuffer +
                           (pFVar4->ChangeMasksExternalOffset + local_b0.WordCount * 4));
            }
            pFVar14 = pFVar4->MemberLifetimeConditionDescriptors;
            pFVar16 = pFVar14 + pFVar4->MemberCount;
            for (; pFVar14 != pFVar16; pFVar14 = pFVar14 + 1) {
              lVar12 = (longlong)pFVar14 - (longlong)(*ppFVar15)->MemberLifetimeConditionDescriptors
              ;
              uVar1 = (*ppFVar15)->MemberProperties[lVar12]->RepIndex;
              if ((*(int *)((longlong)FVar18 + 0x18) <= (int)(uint)uVar1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar11 = FVar18;
              if (*(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10) !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar11 = *(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10);
              }
              if ((*(uint *)((longlong)FVar11 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1)
                  == 0) {
                FNetBitArrayView::ClearBits
                          (&local_b0,
                           (uint)(*ppFVar15)->MemberChangeMaskDescriptors[lVar12].BitOffset,
                           (uint)(*ppFVar15)->MemberChangeMaskDescriptors[lVar12].BitCount);
              }
              if (((pFVar14->Condition == '\x0e') &&
                  (psVar10 = TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                             ::Find((TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                                     *)((longlong)FVar18 + 0x20),uVar1), psVar10 != (short *)0x0))
                 && (*psVar10 != 0xe)) {
                local_res20[0] = uVar1;
                local_e8[0] = *psVar10;
                local_e0[0] = param_1;
                this_01 = (TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
                           *)TMapBase<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>_>
                             ::FindOrAddImpl<unsigned_int_const_&>
                                       ((TMapBase<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>_>
                                         *)&this->DynamicConditions,param_1,local_e0);
                local_70 = local_res20;
                local_68 = local_e8;
                TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<unsigned_short_&,short_&&>_>
                          (this_01,&local_a0,(bool *)&local_70);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c0.SharedReferenceCount.ReferenceController);
            pFVar17 = local_80;
            pFVar19 = local_88;
          }
        }
        ppFVar15 = ppFVar15 + 1;
      } while (ppFVar15 != local_78);
    }
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InvalidateBaselinesForObjectHierarchy @ 144243840

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::InvalidateBaselinesForObjectHierarchy
          (FReplicationConditionals *this,uint param_1,TArrayView<unsigned_int_const_,int> *param_2)

{
  uint uVar1;
  FNetRefHandleManager *pFVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  FReplicatedObjectData *pFVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  TArrayView<unsigned_int_const_,int> local_28;
  
  pFVar8 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1);
  if ((pFVar8->Protocol->ProtocolTraits & HasLifetimeConditionals) != None) {
    puVar10 = param_2->DataPtr;
    puVar12 = puVar10 + param_2->ArrayNum;
    for (; puVar10 != puVar12; puVar10 = puVar10 + 1) {
      FDeltaCompressionBaselineInvalidationTracker::InvalidateBaselines
                (this->BaselineInvalidationTracker,param_1,*puVar10);
    }
  }
  FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_28,param_1);
  puVar12 = local_28.DataPtr;
  while( true ) {
    if (puVar12 == local_28.DataPtr + local_28.ArrayNum) {
      return;
    }
    uVar1 = *puVar12;
    pFVar2 = this->NetRefHandleManager;
    uVar5 = (int)uVar1 / 100;
    uVar7 = 0;
    if ((int)uVar5 < (int)(pFVar2->ReplicatedObjectData)._padding_) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    lVar9 = (longlong)((int)uVar1 % 100) * 0x38;
    lVar3 = *(longlong *)((pFVar2->ReplicatedObjectData)._padding_ + (longlong)(int)uVar5 * 8);
    if (((*(int *)(lVar9 + 0x28 + lVar3) != 0) && ((*(byte *)(lVar9 + 0x32 + lVar3) & 4) != 0)) &&
       ((*(byte *)(*(longlong *)(lVar9 + 0x10 + lVar3) + 0x3c) & 2) != 0)) {
      puVar11 = param_2->DataPtr;
      puVar10 = puVar11 + param_2->ArrayNum;
      for (; puVar11 != puVar10; puVar11 = puVar11 + 1) {
        FDeltaCompressionBaselineInvalidationTracker::InvalidateBaselines
                  (this->BaselineInvalidationTracker,uVar1,*puVar11);
      }
    }
    puVar12 = puVar12 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// MarkLifeTimeConditionalsDirtyForObjectsInGroup @ 144244360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::MarkLifeTimeConditionalsDirtyForObjectsInGroup
          (FReplicationConditionals *this,FNetObjectGroupHandle param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  FNetObjectGroups *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint *puVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId101,"MarkLifeTimeConditionalsDirtyForObjectsInGroup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
               ,0x65);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId101);
  }
  if ((param_1.field0_0x0._0_4_ & 0xffffff) - 1 < 3) {
    if (2 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  else {
    this_00 = this->NetObjectGroups;
    bVar6 = FNetObjectGroups::IsValidGroup(this_00,param_1);
    if ((bVar6) &&
       (puVar7 = (undefined8 *)
                 ((ulonglong)(param_1.field0_0x0._0_4_ & 0xffffff) * 0x20 +
                 *(longlong *)&this_00->Groups), puVar7 != (undefined8 *)0x0)) {
      iVar2 = *(int *)(puVar7 + 1);
      puVar8 = (uint *)*puVar7;
      puVar1 = puVar8 + iVar2;
      while( true ) {
        if (*(int *)(puVar7 + 1) != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (puVar8 == puVar1) break;
        uVar3 = *puVar8;
        pFVar4 = (this->ObjectsWithDirtyLifetimeConditionals).Storage.AllocatorInstance.Data;
        if (((this->ObjectsWithDirtyLifetimeConditionals).BitCount <= uVar3) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(pFVar4 + (ulonglong)(uVar3 >> 5) * 4) =
             *(uint *)(pFVar4 + (ulonglong)(uVar3 >> 5) * 4) | 1 << (uVar3 & 0x1f);
        puVar8 = puVar8 + 1;
      }
    }
  }
  if (!bVar9) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// MarkPropertyDirty @ 144244690

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::MarkPropertyDirty
          (FReplicationConditionals *this,uint param_1,ushort param_2)

{
  FReplicationStateDescriptor **ppFVar1;
  ushort uVar2;
  uint uVar3;
  FObjectKey FVar4;
  FReplicationInstanceProtocol *pFVar5;
  FReplicationProtocol *pFVar6;
  FReplicationFragment *pFVar7;
  FReplicationStateDescriptor *pFVar8;
  FFragmentData *pFVar9;
  code *pcVar10;
  bool bVar11;
  FReplicatedObjectData *pFVar12;
  uchar **ppuVar13;
  FNetHandle FVar14;
  FReplicationStateDescriptor **ppFVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  undefined8 local_res8;
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  FNetBitArrayView local_48;
  
  pFVar12 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1);
  FVar4 = (pFVar12->NetHandle).field0_0x0.Value;
  iVar18 = FVar4.ObjectIndex;
  if (((iVar18 != 0) || (FVar4.ObjectSerialNumber != 0)) &&
     (ppuVar13 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                           ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                            &this->NetRefHandleManager->ReplicatedObjectStateBuffers,param_1),
     *ppuVar13 != (uchar *)0x0)) {
    local_58 = &local_res8;
    pFVar5 = pFVar12->InstanceProtocol;
    lVar16 = 0;
    pFVar6 = pFVar12->Protocol;
    local_res8 = 0;
    local_50 = 0;
    local_4c = 1;
    uVar3 = pFVar6->ReplicationStateCount;
    ppFVar15 = pFVar6->ReplicationStateDescriptors;
    if (((int)uVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    ppFVar1 = ppFVar15 + (int)uVar3;
    for (; ppFVar15 != ppFVar1; ppFVar15 = ppFVar15 + 1) {
      lVar17 = (longlong)ppFVar15 - (longlong)pFVar6->ReplicationStateDescriptors >> 3;
      pFVar7 = pFVar5->Fragments[lVar17];
      local_50 = 0;
      (**(code **)(pFVar7->_padding_ + 0x10))(pFVar7,&local_58);
      if (((local_50 != 0) &&
          (FVar14 = FNetHandleManager::GetNetHandle((UObject *)&stack0x00000020),
          *(int *)FVar14.field0_0x0 == iVar18)) &&
         ((pFVar8 = *ppFVar15, param_2 < pFVar8->RepIndexCount &&
          (uVar2 = pFVar8->MemberRepIndexToMemberIndexDescriptors[param_2].MemberIndex,
          uVar2 != 0xffff)))) {
        pFVar9 = pFVar5->FragmentData;
        local_48.BitCount = (uint)pFVar8->ChangeMaskBitCount;
        local_48.WordCount = pFVar8->ChangeMaskBitCount + 0x1f >> 5;
        local_48.Storage = &local_48.BitCount;
        if (local_48.BitCount != 0) {
          local_48.Storage =
               (uint *)(pFVar9[lVar17].ExternalSrcBuffer + pFVar8->ChangeMasksExternalOffset);
        }
        if ((pFVar8->Traits & IsNativeFastArrayReplicationState) != None) {
          lVar16 = (ulonglong)pFVar8->ChangeMasksExternalOffset - 4;
        }
        MarkDirty((FReplicationStateHeader *)(pFVar9[lVar17].ExternalSrcBuffer + lVar16),&local_48,
                  pFVar8->MemberChangeMaskDescriptors + uVar2);
        return;
      }
    }
    if (2 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  return;
}

// MarkRemoteRoleDirty @ 1442449e0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::MarkRemoteRoleDirty
          (FReplicationConditionals *this,uint param_1)

{
  FReplicationStateDescriptor **ppFVar1;
  uint uVar2;
  FReplicationProtocol *pFVar3;
  FReplicationStateDescriptor *pFVar4;
  FProperty *pFVar5;
  code *pcVar6;
  bool bVar7;
  FNameEntryId FVar8;
  FReplicatedObjectData *pFVar9;
  uchar **ppuVar10;
  undefined4 extraout_var;
  ulonglong uVar11;
  FReplicationStateMemberSerializerDescriptor *pFVar12;
  FReplicationStateMemberSerializerDescriptor *pFVar13;
  ushort uVar14;
  FReplicationStateDescriptor **ppFVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  
  local_res10 = param_1;
  pFVar9 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1);
  pFVar3 = pFVar9->Protocol;
  ppuVar10 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                       ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                        &this->NetRefHandleManager->ReplicatedObjectStateBuffers,param_1);
  if ((*ppuVar10 != (uchar *)0x0) &&
     (((pFVar9->NetHandle).field0_0x0.Value.ObjectIndex != 0 ||
      ((pFVar9->NetHandle).field0_0x0.Value.ObjectSerialNumber != 0)))) {
    uVar14 = this->CachedRemoteRoleRepIndex;
    if (uVar14 == 0xffff) {
      uVar2 = pFVar3->ReplicationStateCount;
      ppFVar15 = pFVar3->ReplicationStateDescriptors;
      if (((int)uVar2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      ppFVar1 = ppFVar15 + (int)uVar2;
      for (; ppFVar15 != ppFVar1; ppFVar15 = ppFVar15 + 1) {
        pFVar4 = *ppFVar15;
        pFVar13 = pFVar4->MemberSerializerDescriptors;
        pFVar12 = pFVar13 + pFVar4->MemberCount;
        for (; pFVar13 != pFVar12; pFVar13 = pFVar13 + 1) {
          if ((pFVar13->Serializer == &FNetRoleNetSerializerNetSerializerInfo::Serializer) &&
             (pFVar5 = pFVar4->MemberProperties
                       [(longlong)pFVar13 - (longlong)pFVar4->MemberSerializerDescriptors >> 4],
             pFVar5 != (FProperty *)0x0)) {
            bVar7 = IsThisNotNull(pFVar5,"FField::GetFName");
            if (bVar7) {
              uVar11 = pFVar5->_padding_;
            }
            else {
              uVar11 = 0;
            }
            FVar8 = FNameEntryId::FromValidEName((EName)local_res8);
            if (uVar11 == *(uint *)CONCAT44(extraout_var,FVar8.Value)) {
              this->CachedRemoteRoleRepIndex = pFVar5->RepIndex;
              uVar14 = pFVar5->RepIndex;
              param_1 = local_res10;
              if (uVar14 == 0xffff) {
                return;
              }
              goto LAB_144244b41;
            }
          }
        }
      }
    }
    else {
LAB_144244b41:
      MarkPropertyDirty(this,param_1,uVar14);
    }
  }
  return;
}

// OnInternalNetRefIndicesFreed @ 144246210

void __thiscall
UE::Net::Private::FReplicationConditionals::OnInternalNetRefIndicesFreed
          (FReplicationConditionals *this,TArrayView<unsigned_int_const_,int> *param_1)

{
  uint *puVar1;
  uint uVar2;
  FReplicationConnections *pFVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  bool bVar8;
  uint local_res8 [2];
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId83,"FReplicationConditionals_OnInternalNetRefIndicesFreed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
               ,0x53);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId83);
  }
  puVar7 = param_1->DataPtr;
  puVar1 = puVar7 + param_1->ArrayNum;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    local_res8[0] = *puVar7;
    *(undefined2 *)((this->PerObjectInfos).AllocatorInstance.Data + (ulonglong)local_res8[0] * 2) =
         0;
    if (*(int *)&(this->DynamicConditions).field_0x8 !=
        *(int *)&(this->DynamicConditions).field_0x34) {
      TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>,FDefaultSetAllocator>
                  *)&this->DynamicConditions,local_res8[0],local_res8);
    }
  }
  pFVar3 = this->ReplicationConnections;
  uVar5 = (pFVar3->ValidConnections).Storage.ArrayNum;
  uVar6 = (ulonglong)uVar5;
  do {
    if (uVar5 == 0) goto LAB_144246328;
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
    uVar2 = *(uint *)((pFVar3->ValidConnections).Storage.AllocatorInstance.Data + uVar6 * 4);
  } while (uVar2 == 0);
  uVar6 = (ulonglong)uVar2 * 2 + 1;
  lVar4 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  if (uVar5 * 0x20 + (int)lVar4 != 0) {
    puVar7 = param_1->DataPtr;
    puVar1 = puVar7 + param_1->ArrayNum;
    for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      ClearConnectionInfosForObject(this,&pFVar3->ValidConnections,*puVar7);
    }
  }
LAB_144246328:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 1442465c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::OnMaxInternalNetRefIndexIncreased
          (FReplicationConditionals *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  this->MaxInternalNetRefIndex = param_1;
  TArray<UE::Net::Private::FReplicationConditionals::FPerObjectInfo,TSizedDefaultAllocator<32>_>::
  SetNumZeroed(&this->PerObjectInfos,param_1,Default);
  (this->ObjectsWithDirtyLifetimeConditionals).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->ObjectsWithDirtyLifetimeConditionals).Storage,param_1 + 0x1f >> 5,No);
  uVar8 = (this->ObjectsWithDirtyLifetimeConditionals).BitCount;
  if (uVar8 != 0) {
    pFVar7 = (this->ObjectsWithDirtyLifetimeConditionals).Storage.AllocatorInstance.Data +
             (longlong)(this->ObjectsWithDirtyLifetimeConditionals).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar7 = *(uint *)pFVar7 & 0xffffffffU >> (-(char)uVar8 & 0x1fU);
  }
  iVar2 = (this->ConnectionInfos).ArrayNum;
  pFVar7 = (this->ConnectionInfos).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar2 * 0x10;
LAB_144246642:
  do {
    if ((this->ConnectionInfos).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar9) {
      return;
    }
    iVar6 = *(int *)&pFVar7[8].field_0x0;
    pFVar1 = pFVar7 + 8;
    if (iVar6 != 0) {
      if (iVar6 < (int)param_1) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,param_1 - iVar6,(ForAnyElementType *)pFVar7,(int *)pFVar1,
                           (int *)(pFVar7 + 0xc));
        memset((void *)(*(longlong *)&pFVar7->field_0x0 + (longlong)iVar5 * 2),0,
               (longlong)(int)(param_1 - iVar6) * 2);
        pFVar7 = pFVar7 + 0x10;
        goto LAB_144246642;
      }
      if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)param_1);
      }
      if ((int)param_1 < iVar6) {
        uVar8 = iVar6 - param_1;
        if ((int)(uVar8 | param_1) < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (uVar8 != 0) {
          _Dst = (void *)(*(longlong *)&pFVar7->field_0x0 + (longlong)(int)param_1 * 2);
          iVar6 = (*(int *)&pFVar1->field_0x0 - uVar8) - param_1;
          if (iVar6 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 2),(longlong)iVar6 * 2);
          }
          *(uint *)&pFVar1->field_0x0 = *(int *)&pFVar1->field_0x0 - uVar8;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(ForAnyElementType *)pFVar7,*(int *)&pFVar1->field_0x0,
                     (int *)(pFVar7 + 0xc));
        }
      }
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// RemoveConnection @ 14424dad0

void __thiscall
UE::Net::Private::FReplicationConditionals::RemoveConnection
          (FReplicationConditionals *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  uVar4 = 0;
  if ((int)param_1 < (this->ConnectionInfos).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
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
  pFVar5 = (this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10;
  iVar1 = *(int *)(pFVar5 + 0xc);
  *(undefined4 *)&pFVar5[8].field_0x0 = 0;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)pFVar5,0,(int *)(pFVar5 + 0xc));
  }
  return;
}

// SetCondition @ 144251350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationConditionals::SetCondition
          (FReplicationConditionals *this,uint param_1,EReplicationCondition param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EReplicationCondition local_res18 [2];
  uint local_38 [2];
  EReplicationCondition *local_30;
  TArrayView<unsigned_int_const_,int> local_28;
  FString local_18;
  
  local_res18[0] = param_2;
  if (param_2 == RoleAutonomous) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6979544305241161922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
                       ,0xc2,"Condition != EReplicationCondition::RoleAutonomous");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  else {
    if (param_2 == ReplicatePhysics) {
      pFVar1 = (this->PerObjectInfos).AllocatorInstance.Data + (ulonglong)param_1 * 2;
      if ((param_3) && (-1 < (short)*(ushort *)pFVar1)) {
        if (5 < (byte)LogIrisConditionals._0_1_) {
          FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_18,param_1);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisConditionals);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        local_28.DataPtr = local_38;
        local_38[0] = 0;
        local_28.ArrayNum = 1;
        InvalidateBaselinesForObjectHierarchy(this,param_1,&local_28);
        FNetBitArray::SetBit(&this->ObjectsWithDirtyLifetimeConditionals,param_1);
      }
      *(ushort *)pFVar1 = *(ushort *)pFVar1 & 0x7fff;
      *(ushort *)pFVar1 = *(ushort *)pFVar1 | (ushort)param_3 << 0xf;
      return true;
    }
    local_30 = local_res18;
    `UE::Net::Private::FReplicationConditionals::SetCondition'::__l2::<lambda_1>::operator()
              (&local_30);
  }
  return false;
}

// SetConditionConnectionFilter @ 1442514e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationConditionals::SetConditionConnectionFilter
          (FReplicationConditionals *this,uint param_1,EReplicationCondition param_2,uint param_3,
          bool param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint local_res20 [2];
  TArrayView<unsigned_int_const_,int> local_38;
  FString local_28;
  
  if (param_3 < this->MaxConnectionCount) {
    if (param_2 == RoleAutonomous) {
      if ((param_3 == 0) || (uVar6 = param_3, !param_4)) {
        uVar6 = 0;
      }
      pFVar2 = (this->PerObjectInfos).AllocatorInstance.Data;
      pFVar1 = pFVar2 + (ulonglong)param_1 * 2;
      if ((*(ushort *)(pFVar2 + (ulonglong)param_1 * 2) & 0x7fff) != uVar6) {
        if (5 < (byte)LogIrisConditionals._0_1_) {
          FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_28,param_1);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisConditionals);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        if (!param_4) {
          param_3 = *(ushort *)pFVar1 & 0x7fff;
        }
        *(ushort *)pFVar1 = *(ushort *)pFVar1 ^ (*(ushort *)pFVar1 ^ (ushort)uVar6) & 0x7fff;
        local_res20[0] = param_3;
        MarkRemoteRoleDirty(this,param_1);
        FNetBitArray::SetBit(&this->ObjectsWithDirtyLifetimeConditionals,param_1);
        local_38.DataPtr = local_res20;
        local_38.ArrayNum = 1;
        InvalidateBaselinesForObjectHierarchy(this,param_1,&local_38);
      }
      return true;
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6979544305241161854>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
                       ,0x7e,"Condition == EReplicationCondition::RoleAutonomous");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  return false;
}

// SetDynamicCondition @ 144251720

void __thiscall
UE::Net::Private::FReplicationConditionals::SetDynamicCondition
          (FReplicationConditionals *this,uint param_1,ushort param_2,ELifetimeCondition param_3)

{
  TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
  *this_00;
  TPairInitializer<unsigned_short_&,short_&&> local_res8;
  ushort local_res18 [4];
  undefined2 local_res20 [4];
  ushort *local_18;
  undefined2 *local_10;
  
  local_res20[0] = (undefined2)param_3;
  local_res8.Value._0_4_ = param_1;
  local_res18[0] = param_2;
  this_00 = (TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
             *)TMapBase<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>_>
               ::FindOrAddImpl<unsigned_int_const_&>
                         ((TMapBase<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>_>
                           *)&this->DynamicConditions,param_1,(uint *)&local_res8.Value);
  local_18 = local_res18;
  local_10 = local_res20;
  TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_short_&,short_&&>_>(this_00,&local_res8,(bool *)&local_18);
  return;
}

// SetOwningConnection @ 1442532f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationConditionals::SetOwningConnection
          (FReplicationConditionals *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<unsigned_int_const_,int> *pTVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  undefined1 local_28 [8];
  TArrayView<unsigned_int_const_,int> local_20;
  
  uVar3 = FReplicationFiltering::GetOwningConnection(this->ReplicationFiltering,param_1);
  if ((uVar3 != param_2) &&
     ((param_2 == 0 ||
      ((param_2 < (this->ReplicationConnections->ValidConnections).BitCount &&
       ((*(uint *)((this->ReplicationConnections->ValidConnections).Storage.AllocatorInstance.Data +
                  (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)))))) {
    if (5 < (byte)LogIrisConditionals._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisConditionals);
    }
    FNetBitArray::SetBit(&this->ObjectsWithDirtyLifetimeConditionals,param_1);
    uVar5 = 0;
    local_28._0_4_ = uVar3;
    pTVar4 = (TArrayView<unsigned_int_const_,int> *)local_28;
    local_28._4_4_ = param_2;
    do {
      if (*(uint *)&pTVar4->DataPtr != 0) {
        local_res8[uVar5] = *(uint *)&pTVar4->DataPtr;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      }
      pTVar4 = (TArrayView<unsigned_int_const_,int> *)((longlong)&pTVar4->DataPtr + 4);
    } while (pTVar4 != &local_20);
    local_20.ArrayNum = (int)uVar5;
    local_20.DataPtr = local_res8;
    if (local_20.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    InvalidateBaselinesForObjectHierarchy(this,param_1,&local_20);
  }
  return;
}

// SetPropertyCustomCondition @ 144253800

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationConditionals::SetPropertyCustomCondition
          (FReplicationConditionals *this,uint param_1,void *param_2,ushort param_3,bool param_4)

{
  FReplicationStateMemberChangeMaskDescriptor *pFVar1;
  ushort uVar2;
  ushort uVar3;
  FReplicationProtocol *pFVar4;
  FReplicationStateDescriptor *pFVar5;
  FReplicationStateHeader *pFVar6;
  FReplicationInstanceProtocol *pFVar7;
  FReplicationFragment *pFVar8;
  uchar *puVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  FReplicatedObjectData *pFVar13;
  uchar **ppuVar14;
  FStaticBasicLogRecord *pFVar15;
  FReplicationStateHeader *pFVar16;
  int iVar17;
  longlong lVar18;
  FFragmentData *pFVar19;
  FReplicationStateDescriptor **ppFVar20;
  longlong lVar21;
  bool bVar22;
  longlong local_90;
  FNetBitArrayView local_88;
  longlong *local_78;
  int local_70;
  undefined4 local_6c;
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId299,"FReplicationConditionals_SetPropertyCustomCondition",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
               ,299);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId299);
  }
  pFVar13 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1);
  pFVar4 = pFVar13->Protocol;
  ppuVar14 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                       ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                        &this->NetRefHandleManager->ReplicatedObjectStateBuffers,param_1);
  if ((*ppuVar14 == (uchar *)0x0) || ((pFVar4->ProtocolTraits & HasLifetimeConditionals) == None))
  goto LAB_144253c23;
  uVar2 = pFVar4->FirstLifetimeConditionalsStateIndex;
  if (pFVar4->LifetimeConditionalsStateCount == 1) {
    pFVar19 = pFVar13->InstanceProtocol->FragmentData + uVar2;
    pFVar5 = pFVar4->ReplicationStateDescriptors[uVar2];
    if (param_3 < pFVar5->RepIndexCount) {
      uVar2 = pFVar5->MemberRepIndexToMemberIndexDescriptors[param_3].MemberIndex;
      if (uVar2 != 0xffff) {
        uVar3 = pFVar5->ChangeMaskBitCount;
        pFVar1 = pFVar5->MemberChangeMaskDescriptors + uVar2;
        local_88.WordCount = uVar3 + 0x1f >> 5;
        local_88.BitCount = (uint)uVar3;
        local_88.Storage = &local_88.BitCount;
        if (uVar3 != 0) {
          local_88.Storage =
               (uint *)(pFVar19->ExternalSrcBuffer +
                       (pFVar5->ChangeMasksExternalOffset + local_88.WordCount * 4));
        }
        if (param_4) {
          FNetBitArrayView::SetBits(&local_88,(uint)pFVar1->BitOffset,(uint)pFVar1->BitCount);
          pFVar6 = (FReplicationStateHeader *)pFVar19->ExternalSrcBuffer;
          local_58.BitCount = (uint)pFVar5->ChangeMaskBitCount;
          local_58.WordCount = pFVar5->ChangeMaskBitCount + 0x1f >> 5;
          local_58.Storage = &local_58.BitCount;
          if (local_58.BitCount != 0) {
            local_58.Storage = (uint *)(&pFVar6->field_0x0 + pFVar5->ChangeMasksExternalOffset);
          }
          pFVar16 = (FReplicationStateHeader *)
                    (&pFVar6[-1].field_0x0 + pFVar5->ChangeMasksExternalOffset);
          if ((pFVar5->Traits & IsNativeFastArrayReplicationState) == None) {
            pFVar16 = pFVar6;
          }
          MarkDirty(pFVar16,&local_58,pFVar1);
          FDeltaCompressionBaselineInvalidationTracker::InvalidateBaselines
                    (this->BaselineInvalidationTracker,param_1,0);
        }
        else {
          FNetBitArrayView::ClearBits(&local_88,(uint)pFVar1->BitOffset,(uint)pFVar1->BitCount);
        }
        goto LAB_144253c23;
      }
      if ((byte)LogIris._0_1_ < 3) goto LAB_144253c23;
      pFVar15 = &::LOG_Static;
    }
    else {
      if ((byte)LogIris._0_1_ < 3) goto LAB_144253c23;
      pFVar15 = &::LOG_Static;
    }
  }
  else {
    pFVar7 = pFVar13->InstanceProtocol;
    local_78 = &local_90;
    lVar21 = 0;
    iVar17 = pFVar4->ReplicationStateCount - (uint)uVar2;
    local_90 = 0;
    local_70 = 0;
    local_6c = 1;
    ppFVar20 = pFVar4->ReplicationStateDescriptors + uVar2;
    if ((iVar17 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_88.Storage = (uint *)(ppFVar20 + iVar17);
    if (ppFVar20 != (FReplicationStateDescriptor **)local_88.Storage) {
      do {
        if (((*ppFVar20)->Traits & HasLifetimeConditionals) != None) {
          lVar18 = (longlong)ppFVar20 - (longlong)pFVar4->ReplicationStateDescriptors >> 3;
          pFVar8 = pFVar7->Fragments[lVar18];
          local_70 = 0;
          (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,&local_78);
          if ((((local_70 != 0) && ((void *)*local_78 == param_2)) &&
              (pFVar5 = *ppFVar20, param_3 < pFVar5->RepIndexCount)) &&
             (uVar2 = pFVar5->MemberRepIndexToMemberIndexDescriptors[param_3].MemberIndex,
             uVar2 != 0xffff)) {
            uVar3 = pFVar5->ChangeMaskBitCount;
            pFVar19 = pFVar7->FragmentData + lVar18;
            pFVar1 = pFVar5->MemberChangeMaskDescriptors + uVar2;
            local_68.WordCount = uVar3 + 0x1f >> 5;
            local_68.BitCount = (uint)uVar3;
            local_68.Storage = &local_68.BitCount;
            if (uVar3 != 0) {
              local_68.Storage =
                   (uint *)(pFVar19->ExternalSrcBuffer +
                           (pFVar5->ChangeMasksExternalOffset + local_68.WordCount * 4));
            }
            if (param_4) {
              FNetBitArrayView::SetBits(&local_68,(uint)pFVar1->BitOffset,(uint)pFVar1->BitCount);
              pFVar5 = *ppFVar20;
              puVar9 = pFVar19->ExternalSrcBuffer;
              local_48.BitCount = (uint)pFVar5->ChangeMaskBitCount;
              local_48.WordCount = pFVar5->ChangeMaskBitCount + 0x1f >> 5;
              local_48.Storage = &local_48.BitCount;
              if (local_48.BitCount != 0) {
                local_48.Storage = (uint *)(puVar9 + pFVar5->ChangeMasksExternalOffset);
              }
              if ((pFVar5->Traits & IsNativeFastArrayReplicationState) != None) {
                lVar21 = (ulonglong)pFVar5->ChangeMasksExternalOffset - 4;
              }
              MarkDirty((FReplicationStateHeader *)(puVar9 + lVar21),&local_48,pFVar1);
              FDeltaCompressionBaselineInvalidationTracker::InvalidateBaselines
                        (this->BaselineInvalidationTracker,param_1,0);
              bVar11 = true;
            }
            else {
              FNetBitArrayView::ClearBits(&local_68,(uint)pFVar1->BitOffset,(uint)pFVar1->BitCount);
              bVar11 = true;
            }
            goto LAB_144253c26;
          }
        }
        ppFVar20 = ppFVar20 + 1;
      } while (ppFVar20 != (FReplicationStateDescriptor **)local_88.Storage);
    }
    if ((byte)LogIris._0_1_ < 3) goto LAB_144253c23;
    pFVar15 = &::LOG_Static;
  }
  Logging::Private::BasicLog<3>(pFVar15,(FLogCategoryBase *)&LogIris);
LAB_144253c23:
  bVar11 = false;
LAB_144253c26:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar11;
}

// SetPropertyDynamicCondition @ 144253c80

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationConditionals::SetPropertyDynamicCondition
          (FReplicationConditionals *this,uint param_1,void *param_2,ushort param_3,
          ELifetimeCondition param_4)

{
  FReplicationStateDescriptor **ppFVar1;
  ushort uVar2;
  ushort uVar3;
  FReplicationProtocol *pFVar4;
  FFragmentData *pFVar5;
  FReplicationStateDescriptor *pFVar6;
  FReplicationStateHeader *pFVar7;
  FReplicationInstanceProtocol *pFVar8;
  FReplicationFragment *pFVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  ELifetimeCondition EVar13;
  FReplicatedObjectData *pFVar14;
  uchar **ppuVar15;
  FStaticBasicLogRecord *pFVar16;
  FReplicationStateHeader *pFVar17;
  int iVar18;
  FReplicationStateDescriptor **ppFVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  longlong local_70;
  longlong *local_68;
  int local_60;
  undefined4 local_5c;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId429,"FReplicationConditionals_SetPropertyDynamicCondition",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
               ,0x1ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId429);
  }
  pFVar14 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1);
  pFVar4 = pFVar14->Protocol;
  ppuVar15 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                       ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                        &this->NetRefHandleManager->ReplicatedObjectStateBuffers,param_1);
  if ((*ppuVar15 != (uchar *)0x0) && ((pFVar4->ProtocolTraits & HasLifetimeConditionals) != None)) {
    uVar2 = pFVar4->FirstLifetimeConditionalsStateIndex;
    if (pFVar4->LifetimeConditionalsStateCount == 1) {
      pFVar5 = pFVar14->InstanceProtocol->FragmentData;
      pFVar6 = pFVar4->ReplicationStateDescriptors[uVar2];
      if (param_3 < pFVar6->RepIndexCount) {
        uVar3 = pFVar6->MemberRepIndexToMemberIndexDescriptors[param_3].MemberIndex;
        if (uVar3 == 0xffff) {
          if (2 < (byte)LogIris._0_1_) {
            pFVar16 = &::LOG_Static;
            goto LAB_144253d9b;
          }
        }
        else {
          if (pFVar6->MemberLifetimeConditionDescriptors[uVar3].Condition == '\x0e') {
            EVar13 = GetDynamicCondition(this,param_1,param_3);
            SetDynamicCondition(this,param_1,param_3,param_4);
            if (((EVar13 != COND_None) && (EVar13 != COND_Dynamic)) && (param_4 != COND_Never)) {
              pFVar7 = (FReplicationStateHeader *)pFVar5[uVar2].ExternalSrcBuffer;
              local_58.BitCount = (uint)pFVar6->ChangeMaskBitCount;
              local_58.WordCount = pFVar6->ChangeMaskBitCount + 0x1f >> 5;
              local_58.Storage = &local_58.BitCount;
              if (local_58.BitCount != 0) {
                local_58.Storage = (uint *)(&pFVar7->field_0x0 + pFVar6->ChangeMasksExternalOffset);
              }
              pFVar17 = (FReplicationStateHeader *)
                        (&pFVar7[-1].field_0x0 + pFVar6->ChangeMasksExternalOffset);
              if ((pFVar6->Traits & IsNativeFastArrayReplicationState) == None) {
                pFVar17 = pFVar7;
              }
              MarkDirty(pFVar17,&local_58,pFVar6->MemberChangeMaskDescriptors + uVar3);
              FDeltaCompressionBaselineInvalidationTracker::InvalidateBaselines
                        (this->BaselineInvalidationTracker,param_1,0);
            }
LAB_144253f54:
            bVar11 = true;
            goto LAB_144253da3;
          }
          if (2 < (byte)LogIris._0_1_) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          }
        }
      }
      else if (2 < (byte)LogIris._0_1_) {
        pFVar16 = &::LOG_Static;
LAB_144253d9b:
        Logging::Private::BasicLog<3>(pFVar16,(FLogCategoryBase *)&LogIris);
      }
    }
    else {
      pFVar8 = pFVar14->InstanceProtocol;
      local_68 = &local_70;
      lVar20 = 0;
      iVar18 = pFVar4->ReplicationStateCount - (uint)uVar2;
      local_70 = 0;
      local_60 = 0;
      local_5c = 1;
      ppFVar19 = pFVar4->ReplicationStateDescriptors + uVar2;
      if ((iVar18 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      ppFVar1 = ppFVar19 + iVar18;
      for (; ppFVar19 != ppFVar1; ppFVar19 = ppFVar19 + 1) {
        if (((*ppFVar19)->Traits & HasLifetimeConditionals) != None) {
          lVar21 = (longlong)ppFVar19 - (longlong)pFVar4->ReplicationStateDescriptors >> 3;
          pFVar9 = pFVar8->Fragments[lVar21];
          local_60 = 0;
          (**(code **)(pFVar9->_padding_ + 0x10))(pFVar9,&local_68);
          if ((((local_60 != 0) && ((void *)*local_68 == param_2)) &&
              (pFVar6 = *ppFVar19, param_3 < pFVar6->RepIndexCount)) &&
             (uVar2 = pFVar6->MemberRepIndexToMemberIndexDescriptors[param_3].MemberIndex,
             uVar2 != 0xffff)) {
            if (pFVar6->MemberLifetimeConditionDescriptors[uVar2].Condition == '\x0e') {
              EVar13 = GetDynamicCondition(this,param_1,param_3);
              SetDynamicCondition(this,param_1,param_3,param_4);
              if (((EVar13 == COND_None) || (EVar13 == COND_Dynamic)) || (param_4 == COND_Never))
              goto LAB_144253f54;
              pFVar6 = *ppFVar19;
              pFVar5 = pFVar8->FragmentData;
              local_48.BitCount = (uint)pFVar6->ChangeMaskBitCount;
              local_48.WordCount = pFVar6->ChangeMaskBitCount + 0x1f >> 5;
              local_48.Storage = &local_48.BitCount;
              if (local_48.BitCount != 0) {
                local_48.Storage =
                     (uint *)(pFVar5[lVar21].ExternalSrcBuffer + pFVar6->ChangeMasksExternalOffset);
              }
              if ((pFVar6->Traits & IsNativeFastArrayReplicationState) != None) {
                lVar20 = (ulonglong)pFVar6->ChangeMasksExternalOffset - 4;
              }
              MarkDirty((FReplicationStateHeader *)(pFVar5[lVar21].ExternalSrcBuffer + lVar20),
                        &local_48,pFVar6->MemberChangeMaskDescriptors + uVar2);
              FDeltaCompressionBaselineInvalidationTracker::InvalidateBaselines
                        (this->BaselineInvalidationTracker,param_1,0);
              bVar11 = true;
              goto LAB_144253da3;
            }
            if (2 < (byte)LogIris._0_1_) {
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            }
            break;
          }
        }
      }
    }
  }
  bVar11 = false;
LAB_144253da3:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar11;
}

// Update @ 144256090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Net::Private::FReplicationConditionals::Update(FReplicationConditionals *this)

{
  uint uVar1;
  FReplicationConnections *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FReplicationConnections *pFVar5;
  FReplicationWriter *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStackY_2c8 [32];
  undefined4 uStack_24c;
  TArrayView<unsigned_int,int> TStack_248;
  uint auStack_238 [128];
  ulonglong uStack_38;
  
  if (!bEnableUpdateObjectsWithDirtyConditionals) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId805,
               "FReplicationConditionals_UpdateAndResetObjectsWithDirtyConditionals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
               ,0x325);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId805);
  }
  pFVar2 = this->ReplicationConnections;
  for (uVar8 = FNetBitArrayHelper::GetSetBitIndices
                         ((uint *)(this->ObjectsWithDirtyLifetimeConditionals).Storage.
                                  AllocatorInstance.Data,
                          (this->ObjectsWithDirtyLifetimeConditionals).BitCount,0,0xffffffff,
                          auStack_238,0x80); uVar8 != 0;
      uVar8 = FNetBitArrayHelper::GetSetBitIndices
                        ((uint *)(this->ObjectsWithDirtyLifetimeConditionals).Storage.
                                 AllocatorInstance.Data,uVar1,auStack_238[uVar8 - 1] + 1,0xffffffff,
                         auStack_238,0x80)) {
    uVar1 = (pFVar2->ValidConnections).BitCount;
    iVar17 = 0;
    pFVar3 = (pFVar2->ValidConnections).Storage.AllocatorInstance.Data;
    uVar19 = uVar1 + 0x1f >> 5;
    uVar15 = uVar1;
    if (pFVar3 == (FScriptContainerElement *)0x0) {
      if (uVar1 != 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InData != nullptr || InBitCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x6b9,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_1442562e7;
      }
    }
    else {
LAB_1442562e7:
      if (uVar1 != 0) {
        uVar16 = *(uint *)pFVar3;
        uVar18 = 0;
        iVar17 = 0;
        goto joined_r0x0001442562f4;
      }
    }
    uVar18 = 0;
    do {
      uVar16 = 0;
      uVar10 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar10;
      if (uVar19 <= uVar10) goto LAB_14425633a;
      uVar16 = *(uint *)(pFVar3 + uVar18 * 4);
      iVar17 = iVar17 + 0x20;
joined_r0x0001442562f4:
    } while (uVar16 == 0);
    iVar13 = 0;
    if (uVar16 != 0) {
      for (; (uVar16 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
      }
    }
    iVar11 = 0x20;
    if (uVar16 != 0) {
      iVar11 = iVar13;
    }
    if ((uint)(iVar11 + iVar17) < uVar1) {
      uVar15 = iVar11 + iVar17;
    }
    uVar16 = uVar16 & uVar16 - 1;
LAB_14425633a:
    uVar18 = (ulonglong)uVar15;
    pFVar4 = (pFVar2->ValidConnections).Storage.AllocatorInstance.Data;
    uVar15 = (pFVar2->ValidConnections).BitCount;
    if (((pFVar4 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InData != nullptr || InBitCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x6b9,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = (ulonglong)(uVar15 >> 5);
    uVar10 = uVar15;
    do {
      uVar12 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar12;
      if (uVar15 + 0x1f >> 5 <= uVar12) goto LAB_1442563b6;
      uVar12 = *(uint *)(pFVar4 + uVar9 * 4);
      uVar10 = uVar10 + 0x20;
    } while (uVar12 == 0);
    iVar17 = 0;
    if (uVar12 != 0) {
      for (; (uVar12 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
      }
    }
    iVar13 = 0x20;
    if (uVar12 != 0) {
      iVar13 = iVar17;
    }
    uVar10 = iVar13 + (uVar10 & 0xffffffe0);
    if (uVar10 < uVar15) {
      uVar15 = uVar10;
    }
LAB_1442563b6:
    uVar10 = (uint)uVar18;
    if ((pFVar3 != pFVar4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->Data == It.Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x6cb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar10 != uVar15) {
      pFVar5 = this->ReplicationConnections;
      pFVar14 = (pFVar5->ValidConnections).Storage.AllocatorInstance.Data;
      if (((pFVar5->ValidConnections).BitCount <= uVar10) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(uint *)(pFVar14 + (uVar18 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0) {
        pFVar14 = (FScriptContainerElement *)0x0;
      }
      else {
        uVar12 = 0;
        if ((int)uVar10 < (pFVar5->Connections).ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar14 = (pFVar5->Connections).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x28;
      }
      this_00 = *(FReplicationWriter **)pFVar14;
      if (((int)uVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TStack_248._12_4_ = uStack_24c;
      TStack_248.ArrayNum = uVar8;
      TStack_248.DataPtr = auStack_238;
      FReplicationWriter::UpdateDirtyGlobalLifetimeConditionals(this_00,&TStack_248);
      uVar9 = uVar18 >> 5;
      while (uVar16 == 0) {
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
        if (uVar19 <= uVar10) {
          uVar18 = (ulonglong)uVar1;
          goto LAB_1442563b6;
        }
        uVar10 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uVar10;
        uVar16 = *(uint *)(pFVar3 + uVar9 * 4);
      }
      iVar17 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
        }
      }
      iVar13 = 0x20;
      if (uVar16 != 0) {
        iVar13 = iVar17;
      }
      uVar12 = iVar13 + (uVar10 & 0xffffffe0);
      uVar10 = uVar1;
      if (uVar12 < uVar1) {
        uVar10 = uVar12;
      }
      uVar18 = (ulonglong)uVar10;
      uVar16 = uVar16 & uVar16 - 1;
      goto LAB_1442563b6;
    }
    uVar1 = (this->ObjectsWithDirtyLifetimeConditionals).BitCount;
    if (auStack_238[uVar8 - 1] + 1 == uVar1 || uVar8 < 0x80) break;
  }
  memset((this->ObjectsWithDirtyLifetimeConditionals).Storage.AllocatorInstance.Data,0,
         (longlong)(this->ObjectsWithDirtyLifetimeConditionals).Storage.ArrayNum << 2);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateAndResetObjectsWithDirtyConditionals @ 1442561b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationConditionals::UpdateAndResetObjectsWithDirtyConditionals
          (FReplicationConditionals *this)

{
  uint uVar1;
  FReplicationConnections *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FReplicationConnections *pFVar5;
  FReplicationWriter *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStackY_2c8 [32];
  undefined4 uStack_24c;
  TArrayView<unsigned_int,int> local_248;
  uint local_238 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId805,
               "FReplicationConditionals_UpdateAndResetObjectsWithDirtyConditionals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Conditionals\\ReplicationConditionals.cpp"
               ,0x325);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId805);
  }
  pFVar2 = this->ReplicationConnections;
  for (uVar8 = FNetBitArrayHelper::GetSetBitIndices
                         ((uint *)(this->ObjectsWithDirtyLifetimeConditionals).Storage.
                                  AllocatorInstance.Data,
                          (this->ObjectsWithDirtyLifetimeConditionals).BitCount,0,0xffffffff,
                          local_238,0x80); uVar8 != 0;
      uVar8 = FNetBitArrayHelper::GetSetBitIndices
                        ((uint *)(this->ObjectsWithDirtyLifetimeConditionals).Storage.
                                 AllocatorInstance.Data,uVar1,local_238[uVar8 - 1] + 1,0xffffffff,
                         local_238,0x80)) {
    uVar1 = (pFVar2->ValidConnections).BitCount;
    iVar17 = 0;
    pFVar3 = (pFVar2->ValidConnections).Storage.AllocatorInstance.Data;
    uVar19 = uVar1 + 0x1f >> 5;
    uVar15 = uVar1;
    if (pFVar3 == (FScriptContainerElement *)0x0) {
      if (uVar1 != 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InData != nullptr || InBitCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x6b9,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_1442562e7;
      }
    }
    else {
LAB_1442562e7:
      if (uVar1 != 0) {
        uVar16 = *(uint *)pFVar3;
        uVar18 = 0;
        iVar17 = 0;
        goto joined_r0x0001442562f4;
      }
    }
    uVar18 = 0;
    do {
      uVar16 = 0;
      uVar10 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar10;
      if (uVar19 <= uVar10) goto LAB_14425633a;
      uVar16 = *(uint *)(pFVar3 + uVar18 * 4);
      iVar17 = iVar17 + 0x20;
joined_r0x0001442562f4:
    } while (uVar16 == 0);
    iVar13 = 0;
    if (uVar16 != 0) {
      for (; (uVar16 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
      }
    }
    iVar11 = 0x20;
    if (uVar16 != 0) {
      iVar11 = iVar13;
    }
    if ((uint)(iVar11 + iVar17) < uVar1) {
      uVar15 = iVar11 + iVar17;
    }
    uVar16 = uVar16 & uVar16 - 1;
LAB_14425633a:
    uVar18 = (ulonglong)uVar15;
    pFVar4 = (pFVar2->ValidConnections).Storage.AllocatorInstance.Data;
    uVar15 = (pFVar2->ValidConnections).BitCount;
    if (((pFVar4 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InData != nullptr || InBitCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x6b9,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = (ulonglong)(uVar15 >> 5);
    uVar10 = uVar15;
    do {
      uVar12 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar12;
      if (uVar15 + 0x1f >> 5 <= uVar12) goto LAB_1442563b6;
      uVar12 = *(uint *)(pFVar4 + uVar9 * 4);
      uVar10 = uVar10 + 0x20;
    } while (uVar12 == 0);
    iVar17 = 0;
    if (uVar12 != 0) {
      for (; (uVar12 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
      }
    }
    iVar13 = 0x20;
    if (uVar12 != 0) {
      iVar13 = iVar17;
    }
    uVar10 = iVar13 + (uVar10 & 0xffffffe0);
    if (uVar10 < uVar15) {
      uVar15 = uVar10;
    }
LAB_1442563b6:
    uVar10 = (uint)uVar18;
    if ((pFVar3 != pFVar4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->Data == It.Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x6cb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar10 != uVar15) {
      pFVar5 = this->ReplicationConnections;
      pFVar14 = (pFVar5->ValidConnections).Storage.AllocatorInstance.Data;
      if (((pFVar5->ValidConnections).BitCount <= uVar10) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(uint *)(pFVar14 + (uVar18 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0) {
        pFVar14 = (FScriptContainerElement *)0x0;
      }
      else {
        uVar12 = 0;
        if ((int)uVar10 < (pFVar5->Connections).ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar14 = (pFVar5->Connections).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x28;
      }
      this_00 = *(FReplicationWriter **)pFVar14;
      if (((int)uVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_248._12_4_ = uStack_24c;
      local_248.ArrayNum = uVar8;
      local_248.DataPtr = local_238;
      FReplicationWriter::UpdateDirtyGlobalLifetimeConditionals(this_00,&local_248);
      uVar9 = uVar18 >> 5;
      while (uVar16 == 0) {
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
        if (uVar19 <= uVar10) {
          uVar18 = (ulonglong)uVar1;
          goto LAB_1442563b6;
        }
        uVar10 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uVar10;
        uVar16 = *(uint *)(pFVar3 + uVar9 * 4);
      }
      iVar17 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
        }
      }
      iVar13 = 0x20;
      if (uVar16 != 0) {
        iVar13 = iVar17;
      }
      uVar12 = iVar13 + (uVar10 & 0xffffffe0);
      uVar10 = uVar1;
      if (uVar12 < uVar1) {
        uVar10 = uVar12;
      }
      uVar18 = (ulonglong)uVar10;
      uVar16 = uVar16 & uVar16 - 1;
      goto LAB_1442563b6;
    }
    uVar1 = (this->ObjectsWithDirtyLifetimeConditionals).BitCount;
    if (local_238[uVar8 - 1] + 1 == uVar1 || uVar8 < 0x80) break;
  }
  memset((this->ObjectsWithDirtyLifetimeConditionals).Storage.AllocatorInstance.Data,0,
         (longlong)(this->ObjectsWithDirtyLifetimeConditionals).Storage.ArrayNum << 2);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ~FReplicationConditionals @ 1442f8a90

void __thiscall
UE::Net::Private::FReplicationConditionals::~FReplicationConditionals
          (FReplicationConditionals *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ObjectsWithDirtyLifetimeConditionals).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DynamicConditions).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DynamicConditions).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicConditions);
  DestructItems<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)(this->ConnectionInfos).AllocatorInstance.Data,
             (this->ConnectionInfos).ArrayNum);
  pFVar1 = (this->ConnectionInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerObjectInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 1504b36a0

bool __thiscall
`UE::Net::Private::FReplicationConditionals::SetCondition'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6979544305241161946>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6979544305241161946>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b3ad0

bool __thiscall
`UE::Net::Private::FReplicationConditionals::GetChildSubObjectsToReplicate'::__l30::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6979544305241162337>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6979544305241162337>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

