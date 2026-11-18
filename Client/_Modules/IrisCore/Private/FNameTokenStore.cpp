// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 9

// FNameTokenStore @ 144229040

FNameTokenStore * __thiscall
UE::Net::FNameTokenStore::FNameTokenStore(FNameTokenStore *this,FNetTokenStore *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  FNetTokenDataStore::FNetTokenDataStore((FNetTokenDataStore *)this,param_1);
  this->_padding_ = (longlong)&___7FNameTokenStore_Net_UE__6B_;
  piVar1 = &(this->StoredFNames).ArrayMax;
  *(undefined8 *)&this->FNameToKey = 0;
  piVar2 = &(this->StoredFNames).ArrayNum;
  *(undefined8 *)&(this->FNameToKey).field_0x8 = 0;
  *(undefined8 *)&(this->FNameToKey).field_0x20 = 0;
  *(undefined4 *)&(this->FNameToKey).field_0x28 = 0;
  *(undefined4 *)&(this->FNameToKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->FNameToKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FNameToKey).field_0x34 = 0;
  *(undefined8 *)&(this->FNameToKey).field_0x40 = 0;
  *(undefined4 *)&(this->FNameToKey).field_0x48 = 0;
  uVar3 = (uint)this->_padding_;
  (this->StoredFNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  else {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar3,&(this->StoredFNames).AllocatorInstance,piVar2,piVar1);
    memset((this->StoredFNames).AllocatorInstance.Data + (longlong)iVar4 * 8,0,
           (longlong)(int)uVar3 << 3);
  }
  return this;
}

// GetOrCreateToken @ 14423d450

/* WARNING: Enum "Type": Some values do not have unique names */

FNetToken __thiscall UE::Net::FNameTokenStore::GetOrCreateToken(FNameTokenStore *this,FName param_1)

{
  FName local_res18;
  uint local_res20 [2];
  uint local_38 [2];
  FString local_30;
  FString local_20;
  
  GetOrCreateTokenStoreKey(this,(FName)local_res20);
  if (local_res20[0] != 0) {
    FNetTokenDataStore::GetNetTokenFromKey
              ((FNetTokenDataStore *)this,(FNetTokenStoreKey)(uint)local_38);
    if (((local_38[0] & 0xfffff) == 0) &&
       (FNetTokenDataStore::CreateAndStoreTokenForKey
                  ((FNetTokenDataStore *)this,(FNetTokenStoreKey)(uint)local_res20),
       local_38[0] = local_res20[0], 5 < (byte)LogNetToken._0_1_)) {
      ::FName::ToString(&local_res18,&local_20);
      ::FString::PrintfImpl(&local_30,L"NetToken (Auth:%u TypeId=%u Index=%u)");
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      local_38[0] = local_res20[0];
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
        local_38[0] = local_res20[0];
      }
    }
    *(uint *)param_1 = local_38[0];
    return (FNetToken)param_1.ComparisonIndex.Value.Value;
  }
  *(undefined4 *)param_1 = 0;
  return (FNetToken)param_1.ComparisonIndex.Value.Value;
}

// GetOrCreateTokenStoreKey @ 14423d5a0

FNetTokenStoreKey __thiscall
UE::Net::FNameTokenStore::GetOrCreateTokenStoreKey(FNameTokenStore *this,FName param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNetTokenStoreKey FVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  longlong in_R8;
  uint local_res8 [2];
  longlong local_res18 [2];
  undefined4 local_48 [2];
  longlong *local_40;
  uint *local_38;
  
  local_res18[0] = in_R8;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)in_R8);
  FVar7.KeyIndex = (uint)param_1.ComparisonIndex.Value;
  if (*(int *)&(this->FNameToKey).field_0x8 != *(int *)&(this->FNameToKey).field_0x34) {
    puVar10 = *(undefined1 **)&(this->FNameToKey).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->FNameToKey).field_0x38;
    }
    iVar8 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->FNameToKey).field_0x48 - 1U &
                    (int)((ulonglong)in_R8 >> 0x20) + uVar6) * 4);
    if (iVar8 != -1) {
      do {
        lVar2 = *(longlong *)&this->FNameToKey + (longlong)iVar8 * 0x14;
        if (*(longlong *)(*(longlong *)&this->FNameToKey + (longlong)iVar8 * 0x14) == in_R8) {
          puVar9 = (undefined4 *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar9 = (undefined4 *)0x0;
          }
          if (puVar9 != (undefined4 *)0x0) {
            *(undefined4 *)param_1 = *puVar9;
            return (FNetTokenStoreKey)FVar7.KeyIndex;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0xc);
      } while (iVar8 != -1);
    }
  }
  uVar6 = (uint)this->_padding_;
  if (uVar6 < 0x100000) {
    local_48[0] = 0;
    if ((((undefined4 *)this->_padding_ <= local_48) &&
        (local_48 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (FNetTokenStoreKey)uVar6;
    }
    iVar8 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar8 + 1;
    *(undefined4 *)(this->_padding_ + (longlong)iVar8 * 4) = local_48[0];
    if (uVar6 != 0) {
      pFVar3 = (this->StoredFNames).AllocatorInstance.Data;
      local_res8[0] = uVar6;
      if (((pFVar3 <= (FScriptContainerElement *)local_res18) &&
          ((FScriptContainerElement *)local_res18 <
           pFVar3 + (longlong)(this->StoredFNames).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (FNetTokenStoreKey)uVar6;
      }
      iVar8 = (this->StoredFNames).ArrayNum;
      piVar1 = &(this->StoredFNames).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->StoredFNames).AllocatorInstance,piVar1);
      }
      (this->StoredFNames).ArrayNum = iVar8 + 1;
      *(longlong *)((this->StoredFNames).AllocatorInstance.Data + (longlong)iVar8 * 8) =
           local_res18[0];
      local_40 = local_res18;
      local_38 = local_res8;
      TSet<TTuple<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FName_const_&,UE::Net::FNetTokenDataStore::FNetTokenStoreKey_const_&>_>
                ((TSet<TTuple<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey,0>,FDefaultSetAllocator>
                  *)&this->FNameToKey,
                 (TPairInitializer<FName_const_&,UE::Net::FNetTokenDataStore::FNetTokenStoreKey_const_&>
                  *)(local_res18 + 1),(bool *)&local_40);
      *(uint *)param_1 = local_res8[0];
      return (FNetTokenStoreKey)FVar7.KeyIndex;
    }
  }
  else {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_543918596850450021>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetTokenStore.h"
                       ,0x19b,"NextTokenStoreKeyIndex < FNetToken::MaxNetTokenCount");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (FNetTokenStoreKey)uVar6;
    }
  }
  *(undefined4 *)param_1 = 0;
  return (FNetTokenStoreKey)FVar7.KeyIndex;
}

// ReadTokenData @ 14424a3a0

FNetTokenStoreKey __thiscall
UE::Net::FNameTokenStore::ReadTokenData
          (FNameTokenStore *this,FArchive *param_1,FNetToken *param_2,UPackageMap *param_3)

{
  FName local_res18 [2];
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  UPackageMap::StaticSerializeName((FArchive *)param_2,local_res18);
  if ((*(byte *)((longlong)&param_2[10].field0_0x0 + 1) & 2) == 0) {
    GetOrCreateTokenStoreKey(this,(FName)param_1);
    return (FNetTokenStoreKey)(uint)param_1;
  }
  *(undefined4 *)param_1 = 0;
  return (FNetTokenStoreKey)(uint)param_1;
}

// ReadTokenData @ 14424a420

FNetTokenStoreKey __thiscall
UE::Net::FNameTokenStore::ReadTokenData
          (FNameTokenStore *this,FNetSerializationContext *param_1,FNetToken *param_2)

{
  longlong lVar1;
  FNetBitStreamReader *pFVar2;
  uint uVar3;
  uint uVar4;
  FName *pFVar5;
  int iVar6;
  ForElementType<FNetTracePacketContentEvent> FVar7;
  FNetTraceCollector *pFVar8;
  FName local_res18;
  FString local_38;
  
  lVar1 = *(longlong *)(param_2 + 0xc6);
  pFVar8 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar8 = *(FNetTraceCollector **)(param_2 + 0xca);
  }
  uVar3 = 0xffffffff;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uVar3 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,*(uint *)(lVar1 + 0x10));
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    uVar4 = FNetTrace::TraceName((FName)0x0);
    FVar7 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar7 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar7 + (ulonglong)uVar3 * 0x10) = uVar4;
  }
  pFVar2 = *(FNetBitStreamReader **)(param_2 + 0xc6);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ReadString(pFVar2,&local_38);
  if (pFVar2->OverflowBitCount == 0) {
    iVar6 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar6,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                            FNAME_Add);
    if (uVar3 != 0xffffffff) {
      uVar4 = FNetTrace::TraceName(*pFVar5);
      FVar7 = (pFVar8->Events).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar7 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
      }
      *(uint *)((longlong)FVar7 + (ulonglong)uVar3 * 0x10) = uVar4;
    }
    GetOrCreateTokenStoreKey(this,(FName)param_1);
  }
  else {
    *(undefined4 *)&(param_1->ErrorContext).ObjectHandle.field0_0x0 = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (uVar3 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar8,uVar3,*(uint *)(lVar1 + 0x10));
  }
  return (FNetTokenStoreKey)(uint)param_1;
}

// ResolveToken @ 144250420

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
UE::Net::FNameTokenStore::ResolveToken
          (FNameTokenStore *this,FNetToken param_1,FNetTokenStoreState *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  uint uVar5;
  undefined8 uVar6;
  uint in_register_00000014;
  longlong in_R9;
  uint local_res8 [2];
  uint local_res18 [2];
  uint *local_38;
  FName local_30;
  FString local_28;
  FString local_18;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = (uint)param_1.field0_0x0;
  local_res18[0] = (uint)param_2;
  if (((((ulonglong)param_2 & 0xfffff) != 0) &&
      ((*(int *)(this->_padding_ + 0x28) == 1) != (bool)((byte)((ulonglong)param_2 >> 0x17) & 1)))
     || (in_R9 = *(longlong *)this->_padding_, ((ulonglong)param_2 & 0xfffff) != 0)) {
    if (in_R9 == 0) {
      local_38 = local_res18;
      bVar3 = `UE::Net::FNameTokenStore::ResolveToken'::__l3::<lambda_1>::operator()(&local_38);
      if (!bVar3) goto LAB_1442505c9;
      param_2 = (FNetTokenStoreState *)(ulonglong)local_res18[0];
    }
    FNetTokenDataStore::GetTokenKey
              ((FNetTokenDataStore *)this,(FNetToken)SUB84(local_res8,0),param_2);
    if ((local_res8[0] != 0) && (uVar1 = (this->StoredFNames).ArrayNum, local_res8[0] < uVar1)) {
      uVar5 = 0;
      if ((int)local_res8[0] < (int)uVar1) {
        uVar5 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FName)(*pcVar2)();
        return FVar4;
      }
      uVar6 = *(undefined8 *)
               ((this->StoredFNames).AllocatorInstance.Data + (longlong)(int)local_res8[0] * 8);
      goto LAB_1442505cb;
    }
    if (1 < (byte)LogNetToken._0_1_) {
      local_30 = NameTokenStoreName;
      ::FName::ToString(&local_30,&local_18);
      ::FString::PrintfImpl(&local_28,L"NetToken (Auth:%u TypeId=%u Index=%u)");
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_1442505c9:
  uVar6 = 0;
LAB_1442505cb:
  *(undefined8 *)FVar4 = uVar6;
  return FVar4;
}

// WriteTokenData @ 14425c8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FNameTokenStore::WriteTokenData
          (FNameTokenStore *this,FArchive *param_1,FNetTokenStoreKey param_2,UPackageMap *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  longlong lVar6;
  uint uVar7;
  FNetTraceCollector *pFVar8;
  uint local_res8;
  FName local_68;
  FString local_60;
  FString local_50;
  
  lVar6 = (longlong)(int)param_2.KeyIndex;
  pFVar8 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar8 = *(FNetTraceCollector **)&param_1[1].field_0x30;
  }
  local_res8 = 0xffffffff;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    local_res8 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,*(uint *)&param_1[1].field_0x10);
    uVar3 = 0;
    if ((int)param_2.KeyIndex < (this->StoredFNames).ArrayNum) {
      uVar3 = ~param_2.KeyIndex >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = FNetTrace::TraceName
                      (*(FName *)((this->StoredFNames).AllocatorInstance.Data + lVar6 * 8));
    FVar5 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar5 + (ulonglong)local_res8 * 0x10) = uVar3;
  }
  uVar7 = ~param_2.KeyIndex >> 0x1f;
  uVar3 = 0;
  if (5 < (byte)LogNetToken._0_1_) {
    uVar4 = uVar3;
    if ((int)param_2.KeyIndex < (this->StoredFNames).ArrayNum) {
      uVar4 = uVar7;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ::FName::ToString((FName *)((this->StoredFNames).AllocatorInstance.Data + lVar6 * 8),&local_50);
    uVar4 = uVar3;
    if ((int)param_2.KeyIndex < (int)this->_padding_) {
      uVar4 = uVar7;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FNetToken::ToString((FNetToken *)(this->_padding_ + lVar6 * 4),&local_60);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if ((int)param_2.KeyIndex < (this->StoredFNames).ArrayNum) {
    uVar3 = uVar7;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_68 = *(FName *)((this->StoredFNames).AllocatorInstance.Data + lVar6 * 8);
  UPackageMap::StaticSerializeName(param_1,&local_68);
  if (local_res8 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar8,local_res8,*(uint *)&param_1[1].field_0x10);
  }
  return;
}

// WriteTokenData @ 14425cb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FNameTokenStore::WriteTokenData
          (FNameTokenStore *this,FNetSerializationContext *param_1,FNetTokenStoreKey param_2)

{
  FNetBitStreamWriter *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FString *pFVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  longlong lVar9;
  FNetTraceCollector *pFVar10;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar1 = param_1->BitStreamWriter;
  lVar9 = (longlong)(int)param_2.KeyIndex;
  pFVar10 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar10 = param_1->TraceCollector;
  }
  uVar4 = 0xffffffff;
  if (pFVar10 != (FNetTraceCollector *)0x0) {
    uVar4 = pFVar1->BufferBitPosition;
    if (pFVar1->OverflowBitCount != 0) {
      uVar4 = 0;
    }
    uVar4 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,uVar4);
    uVar5 = 0;
    if ((int)param_2.KeyIndex < (this->StoredFNames).ArrayNum) {
      uVar5 = ~param_2.KeyIndex >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = FNetTrace::TraceName
                      (*(FName *)((this->StoredFNames).AllocatorInstance.Data + lVar9 * 8));
    FVar8 = (pFVar10->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
    }
    *(uint *)((longlong)FVar8 + (ulonglong)uVar4 * 0x10) = uVar5;
  }
  uVar5 = ~param_2.KeyIndex >> 0x1f;
  if (5 < (byte)LogNetToken._0_1_) {
    uVar6 = 0;
    if ((int)param_2.KeyIndex < (this->StoredFNames).ArrayNum) {
      uVar6 = uVar5;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FName::ToString((FName *)((this->StoredFNames).AllocatorInstance.Data + lVar9 * 8),&local_58);
    uVar6 = 0;
    if ((int)param_2.KeyIndex < (int)this->_padding_) {
      uVar6 = uVar5;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FNetToken::ToString((FNetToken *)(this->_padding_ + lVar9 * 4),&local_68);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = 0;
  if ((int)param_2.KeyIndex < (this->StoredFNames).ArrayNum) {
    uVar6 = uVar5;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = ::FName::ToString((FName *)((this->StoredFNames).AllocatorInstance.Data + lVar9 * 8),
                             &local_48);
  WriteString(param_1->BitStreamWriter,pFVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (uVar4 != 0xffffffff) {
    uVar5 = pFVar1->BufferBitPosition;
    if (pFVar1->OverflowBitCount != 0) {
      uVar5 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar10,uVar4,uVar5);
  }
  return;
}

// operator() @ 1504b37c0

bool __thiscall `UE::Net::FNameTokenStore::ResolveToken'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6831492088148787279>);
  if (bVar2) {
    UE::Net::FNetToken::ToString(*(FNetToken **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6831492088148787279>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b3827;
    }
  }
  bVar2 = false;
LAB_1504b3827:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

