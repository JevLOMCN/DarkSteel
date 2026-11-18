// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 5

// Dequantize @ 146ad5b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FGameplayTagNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  UGameplayTagsManager *pUVar5;
  FName FVar6;
  FNetTokenStore *this;
  FNameTokenStore *this_00;
  FGameplayTag FVar7;
  longlong local_res20;
  undefined1 local_30 [8];
  undefined1 local_28 [16];
  
  puVar1 = (uint *)param_2->Source;
  puVar2 = (undefined8 *)param_2->Target;
  if ((char)puVar1[1] != '\0') {
    if ((short)*puVar1 != -1) {
      pUVar5 = UGameplayTagsManager::Get();
      FVar6 = UGameplayTagsManager::GetTagNameFromNetIndex(pUVar5,(ushort)local_30);
      *puVar2 = *(undefined8 *)FVar6;
      return;
    }
    *puVar2 = 0;
    return;
  }
  this = FNetSerializationContext::GetNetTokenStore(param_1);
  this_00 = (FNameTokenStore *)
            FNetTokenStore::GetDataStore(this,FGameplayTagTokenStore::GameplayTokenStoreName);
  if (this_00 != (FNameTokenStore *)0x0) {
    FNetSerializationContext::GetRemoteNetTokenStoreState(param_1);
    FNameTokenStore::ResolveToken
              (this_00,(FNetToken)SUB84(&local_res20,0),(FNetTokenStoreState *)(ulonglong)*puVar1);
    if (local_res20 == 0) {
      *puVar2 = 0;
      return;
    }
    pUVar5 = UGameplayTagsManager::Get();
    FVar7 = UGameplayTagsManager::RequestGameplayTag(pUVar5,(FName)local_28,SUB81(local_res20,0));
    *puVar2 = *(undefined8 *)FVar7.TagName;
    return;
  }
  if (1 < (byte)LogGameplayTags._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5333413211905457968>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagNetSerializer.cpp"
                     ,0xd0,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *puVar2 = 0;
  return;
}

// Deserialize @ 146ad5cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FGameplayTagNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  ushort *puVar1;
  FNetBitStreamReader *this;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  FNetToken FVar6;
  FNetTokenStore *this_00;
  FNetTokenDataStore *this_01;
  undefined4 extraout_var;
  undefined4 uVar7;
  FName local_res10;
  FName local_res18;
  FString local_28;
  
  puVar1 = (ushort *)param_2->Target;
  this = param_1->BitStreamReader;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  uVar7 = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar5 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar5 & 1) != 0) {
    uVar4 = ReadPackedUint16(this);
    *puVar1 = uVar4;
    *(undefined1 *)(puVar1 + 2) = 1;
    return;
  }
  this_00 = FNetSerializationContext::GetNetTokenStore(param_1);
  this_01 = FNetTokenStore::GetDataStore(this_00,FGameplayTagTokenStore::GameplayTokenStoreName);
  if (this_01 == (FNetTokenDataStore *)0x0) {
    if (1 < (byte)LogNetToken._0_1_) {
      local_res18 = FGameplayTagTokenStore::GameplayTokenStoreName;
      ::FName::ToString(&local_res18,&local_28);
      Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:_class_UE::Net::FNetToken___cdecl_UE::Net::FNetTokenStore::ReadNetTokenWithKnownType<UE::Net::FGameplayTagTokenStore>(UE::Net::FNetSerializationContext&___ptr64)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_543918596850450091>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetTokenStore.h"
                       ,0x155,"DataStore");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    FVar6 = FNetTokenDataStore::ReadNetToken(this_01,(FNetSerializationContext *)&stack0x00000008);
    uVar7 = *(undefined4 *)CONCAT44(extraout_var,FVar6.field0_0x0);
  }
  if (this->OverflowBitCount == 0) {
    *(undefined4 *)puVar1 = uVar7;
  }
  return;
}

// IsEqual @ 146ae2ad0

bool __cdecl
UE::Net::FGameplayTagNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  FNetTokenStore *this;
  FNameTokenStore *this_00;
  UGameplayTagsManager *pUVar4;
  FName FVar5;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2->bStateIsQuantized == false) {
    return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
  }
  puVar1 = (uint *)param_2->Source0;
  puVar2 = (uint *)param_2->Source1;
  if ((char)puVar1[1] == (char)puVar2[1]) {
    if ((char)puVar1[1] != '\0') {
      return (short)*puVar1 == (short)*puVar2;
    }
    if ((((byte)(*puVar2 >> 0x17) ^ (byte)(*puVar1 >> 0x17)) & 1) == 0) {
      return *puVar1 == *puVar2;
    }
    this = FNetSerializationContext::GetNetTokenStore(param_1);
    this_00 = (FNameTokenStore *)
              FNetTokenStore::GetDataStore(this,FGameplayTagTokenStore::GameplayTokenStoreName);
    FNetSerializationContext::GetRemoteNetTokenStoreState(param_1);
    FNameTokenStore::ResolveToken
              (this_00,(FNetToken)SUB84(&local_res10,0),(FNetTokenStoreState *)(ulonglong)*puVar1);
    if (local_res10 == 0) {
      local_28 = 0;
      FVar5 = (FName)&local_28;
    }
    else {
      pUVar4 = UGameplayTagsManager::Get();
      FVar5 = (FName)UGameplayTagsManager::RequestGameplayTag
                               (pUVar4,(FName)local_res18,SUB81(local_res10,0));
    }
    lVar3 = *(longlong *)FVar5;
    FNameTokenStore::ResolveToken
              (this_00,(FNetToken)SUB84(&local_res10,0),(FNetTokenStoreState *)(ulonglong)*puVar2);
    if (local_res10 == 0) {
      local_20 = 0;
      FVar5 = (FName)&local_20;
    }
    else {
      pUVar4 = UGameplayTagsManager::Get();
      FVar5 = (FName)UGameplayTagsManager::RequestGameplayTag
                               (pUVar4,(FName)local_res18,SUB81(local_res10,0));
    }
    if (lVar3 == *(longlong *)FVar5) {
      return true;
    }
  }
  return false;
}

// Quantize @ 146ae95a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FGameplayTagNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ushort *puVar1;
  FGameplayTag *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  UGameplayTagsManager *this;
  FNetTokenStore *this_00;
  FNameTokenStore *this_01;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  puVar1 = (ushort *)param_2->Target;
  pFVar2 = (FGameplayTag *)param_2->Source;
  local_res18 = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  this = UGameplayTagsManager::Get();
  if (this->bUseFastReplication != false) {
    *(undefined1 *)(puVar1 + 2) = 1;
    uVar5 = UGameplayTagsManager::GetNetIndexFromTag(this,pFVar2);
    uVar6 = UGameplayTagsManager::GetInvalidTagNetIndex(this);
    if (uVar5 == uVar6) {
      uVar5 = 0xffff;
    }
    *puVar1 = uVar5;
    return;
  }
  this_00 = FNetSerializationContext::GetNetTokenStore(param_1);
  this_01 = (FNameTokenStore *)
            FNetTokenStore::GetDataStore(this_00,FGameplayTagTokenStore::GameplayTokenStoreName);
  if (this_01 != (FNameTokenStore *)0x0) {
    FNameTokenStore::GetOrCreateToken(this_01,(FName)local_res10);
    *(undefined4 *)puVar1 = local_res10[0];
    return;
  }
  if (1 < (byte)LogGameplayTags._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5333413211905458001>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagNetSerializer.cpp"
                     ,0xaf,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// Serialize @ 146aecec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FGameplayTagNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetToken_u_0_s_0 FVar1;
  FNetToken_u_0 *pFVar2;
  FNetBitStreamWriter *this;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FNetTokenStore *this_00;
  FNetTokenDataStore *pFVar6;
  uint uVar7;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  pFVar2 = (FNetToken_u_0 *)param_2->Source;
  this = param_1->BitStreamWriter;
  local_res8.ComparisonIndex.Value._0_1_ = *(char *)(pFVar2 + 1);
  FNetBitStreamWriter::WriteBits(this,(uint)(*(char *)(pFVar2 + 1) != '\0'),1);
  if ((char)local_res8.ComparisonIndex.Value != '\0') {
    WritePackedUint16(this,*(ushort *)pFVar2);
    return;
  }
  if (param_1->bIsInitializingDefaultState == 0) {
    this_00 = FNetSerializationContext::GetNetTokenStore(param_1);
    FVar1 = pFVar2->_s_0;
    if (pFVar2->Index != 0) {
      pFVar6 = FNetTokenStore::GetDataStore(this_00,FGameplayTagTokenStore::GameplayTokenStoreName);
      uVar7 = pFVar2->TypeId;
      if ((pFVar6 == (FNetTokenDataStore *)0x0) || (pFVar6->TypeId != uVar7)) {
        if (1 < (byte)LogNetToken._0_1_) {
          local_res8 = FGameplayTagTokenStore::GameplayTokenStoreName;
          ::FName::ToString(&local_res8,&local_38);
          ::FString::PrintfImpl(&local_48,L"NetToken (Auth:%u TypeId=%u Index=%u)");
          FVar4.Data = local_48.Data.AllocatorInstance.Data;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_UE::Net::FNetTokenStore::WriteNetTokenWithKnownType<UE::Net::FGameplayTagTokenStore>(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetToken)___ptr64'
                      ::__l9::LOG_Static,(FLogCategoryBase *)&LogNetToken);
          if (FVar4.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar4.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        if (((pFVar6 == (FNetTokenDataStore *)0x0) || (pFVar6->TypeId != uVar7)) &&
           (bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_543918596850450114>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetTokenStore.h"
                               ,0x13e,
                               "DataStore && (DataStore->GetTypeId() == NetToken.GetTypeId())"),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    FNetTokenStore::InternalWriteNetToken(param_1,(FNetToken)FVar1,false);
    FNetTokenStore::AppendExport(param_1,(FNetToken)*(FNetToken_u_0 *)&pFVar2->_s_0);
  }
  return;
}

