// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 7

// Dequantize @ 14432a780

void __cdecl
UE::Net::FNameAsNetTokenNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  UReplicationSystem *this;
  FNameEntryId FVar3;
  uint uVar4;
  FNetTokenStore *this_00;
  FNameTokenStore *this_01;
  undefined4 extraout_var;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  puVar1 = (uint *)param_2->Source;
  puVar2 = (ulonglong *)param_2->Target;
  if ((puVar1[2] & 1) != 0) {
    uVar4 = *puVar1;
    if ((param_1->InternalContext == (FInternalNetSerializationContext *)0x0) ||
       (this = param_1->InternalContext->ReplicationSystem, this == (UReplicationSystem *)0x0)) {
      this_00 = (FNetTokenStore *)0x0;
    }
    else {
      this_00 = UReplicationSystem::GetNetTokenStore(this);
    }
    this_01 = (FNameTokenStore *)
              FNetTokenStore::GetDataStore(this_00,FNameTokenStore::NameTokenStoreName);
    FNameTokenStore::ResolveToken
              (this_01,(FNetToken)SUB84(&local_res10,0),(FNetTokenStoreState *)(ulonglong)uVar4);
    *puVar2 = CONCAT44(uStackX_14,local_res10);
    return;
  }
  if (puVar1[1] == 0) {
    uVar4 = 0;
  }
  else {
    FVar3 = FNameEntryId::FromValidEName((EName)&local_res10);
    uVar4 = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  }
  *puVar2 = (ulonglong)uVar4;
  return;
}

// Deserialize @ 14432cdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FNameAsNetTokenNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  undefined4 *puVar1;
  UReplicationSystem *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNetToken FVar5;
  EName EVar6;
  FNameEntryId FVar7;
  FNetTokenStore *this_01;
  FNetTokenDataStore *this_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar8;
  undefined1 local_res18 [8];
  FNetRefHandle_u_0 local_res20;
  FName local_38;
  FString local_30;
  
  if (param_1->bIsInitializingDefaultState == 0) {
    this = param_1->BitStreamReader;
    puVar1 = (undefined4 *)param_2->Target;
    uVar4 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar4 & 1) == 0) {
      EVar6 = FNetBitStreamReader::ReadBits(this,BitCountNeededForEName);
      local_res20.Value._0_4_ = 0;
      uVar8 = 0;
      if (EVar6 != None) {
        FVar7 = FNameEntryId::FromValidEName((EName)local_res18);
        local_res20.Value._0_4_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar7.Value);
      }
      local_res20.Value._4_4_ = 0;
      bVar3 = ShouldReplicateAsInteger(EVar6,(FName *)&local_res20._s_0);
      if (!bVar3) {
        FNetSerializationContext::SetError(param_1,GNetError_BitStreamError,true);
        return;
      }
      puVar1[2] = puVar1[2] & 0xfffffffc;
      puVar1[1] = EVar6;
    }
    else {
      puVar1[2] = puVar1[2] | 1;
      this_01 = (FNetTokenStore *)0x0;
      uVar8 = 0;
      if ((param_1->InternalContext != (FInternalNetSerializationContext *)0x0) &&
         (this_00 = param_1->InternalContext->ReplicationSystem,
         this_00 != (UReplicationSystem *)0x0)) {
        this_01 = UReplicationSystem::GetNetTokenStore(this_00);
      }
      this_02 = FNetTokenStore::GetDataStore(this_01,FNameTokenStore::NameTokenStoreName);
      if (this_02 == (FNetTokenDataStore *)0x0) {
        if (1 < (byte)LogNetToken._0_1_) {
          local_38 = FNameTokenStore::NameTokenStoreName;
          ::FName::ToString(&local_38,&local_30);
          Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_UE::Net::FNetToken___cdecl_UE::Net::FNetTokenStore::ReadNetTokenWithKnownType<UE::Net::FNameTokenStore>(UE::Net::FNetSerializationContext&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogNetToken);
          if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_30.Data.AllocatorInstance.Data);
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
        FVar5 = FNetTokenDataStore::ReadNetToken
                          (this_02,(FNetSerializationContext *)&stack0x00000008);
        uVar8 = *(undefined4 *)CONCAT44(extraout_var,FVar5.field0_0x0);
      }
      if (this->OverflowBitCount != 0) {
        return;
      }
    }
    *puVar1 = uVar8;
  }
  return;
}

// IsEqual @ 144333c70

bool __cdecl
UE::Net::FNameAsNetTokenNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  UReplicationSystem *pUVar4;
  FNetTokenStore *this;
  FNameTokenStore *pFVar5;
  FNetTokenStore *this_00;
  longlong local_res10;
  longlong local_res18;
  
  if (param_2->bStateIsQuantized == false) {
    return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
  }
  puVar2 = (uint *)param_2->Source0;
  puVar3 = (uint *)param_2->Source1;
  if (puVar3[1] != puVar2[1] || ((puVar2[2] ^ puVar3[2]) & 1) != 0) {
    return false;
  }
  if ((puVar2[2] & 1) != 0) {
    uVar1 = *puVar2;
    if ((((byte)(*puVar3 >> 0x17) ^ (byte)(uVar1 >> 0x17)) & 1) == 0) {
      return uVar1 == *puVar3;
    }
    this_00 = (FNetTokenStore *)0x0;
    this = this_00;
    if ((param_1->InternalContext != (FInternalNetSerializationContext *)0x0) &&
       (pUVar4 = param_1->InternalContext->ReplicationSystem, pUVar4 != (UReplicationSystem *)0x0))
    {
      this = UReplicationSystem::GetNetTokenStore(pUVar4);
    }
    pFVar5 = (FNameTokenStore *)
             FNetTokenStore::GetDataStore(this,FNameTokenStore::NameTokenStoreName);
    FNameTokenStore::ResolveToken
              (pFVar5,(FNetToken)SUB84(&local_res18,0),(FNetTokenStoreState *)(ulonglong)uVar1);
    uVar1 = *puVar3;
    if ((param_1->InternalContext != (FInternalNetSerializationContext *)0x0) &&
       (pUVar4 = param_1->InternalContext->ReplicationSystem, pUVar4 != (UReplicationSystem *)0x0))
    {
      this_00 = UReplicationSystem::GetNetTokenStore(pUVar4);
    }
    pFVar5 = (FNameTokenStore *)
             FNetTokenStore::GetDataStore(this_00,FNameTokenStore::NameTokenStoreName);
    FNameTokenStore::ResolveToken
              (pFVar5,(FNetToken)SUB84(&local_res10,0),(FNetTokenStoreState *)(ulonglong)uVar1);
    if (local_res18 != local_res10) {
      return false;
    }
  }
  return true;
}

// Quantize @ 144336650

void __cdecl
UE::Net::FNameAsNetTokenNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  undefined4 *puVar1;
  UReplicationSystem *this;
  bool bVar2;
  FNetToken FVar3;
  EName *pEVar4;
  FNetTokenStore *this_00;
  FNameTokenStore *this_01;
  undefined4 extraout_var;
  undefined1 local_res10 [8];
  FName local_res18;
  
  puVar1 = (undefined4 *)param_2->Target;
  local_res18 = *(FName *)param_2->Source;
  if (local_res18.Number == 0) {
    pEVar4 = ::FName::ToEName(&local_res18);
    if (pEVar4 != (EName *)0x0) {
      bVar2 = ShouldReplicateAsInteger(*pEVar4,&local_res18);
      if (bVar2) {
        puVar1[2] = puVar1[2] & 0xfffffffc;
        puVar1[1] = *pEVar4;
        *puVar1 = 0;
        return;
      }
    }
  }
  puVar1[2] = puVar1[2] | 1;
  this_00 = (FNetTokenStore *)0x0;
  puVar1[2] = puVar1[2] & 0xfffffffd;
  puVar1[1] = 0;
  if ((param_1->InternalContext != (FInternalNetSerializationContext *)0x0) &&
     (this = param_1->InternalContext->ReplicationSystem, this != (UReplicationSystem *)0x0)) {
    this_00 = UReplicationSystem::GetNetTokenStore(this);
  }
  this_01 = (FNameTokenStore *)
            FNetTokenStore::GetDataStore(this_00,FNameTokenStore::NameTokenStoreName);
  FVar3 = FNameTokenStore::GetOrCreateToken(this_01,(FName)local_res10);
  *puVar1 = *(undefined4 *)CONCAT44(extraout_var,FVar3.field0_0x0);
  return;
}

// ResolveNetToken @ 14433a540

FName __cdecl
UE::Net::FNameAsNetTokenNetSerializer::ResolveNetToken
          (FNetSerializationContext *param_1,FNetToken param_2)

{
  undefined8 *puVar1;
  UReplicationSystem *this;
  FNetTokenStore *this_00;
  FNameTokenStore *this_01;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  puVar1 = *(undefined8 **)(CONCAT44(in_register_00000014,param_2.field0_0x0) + 0x330);
  if ((puVar1 == (undefined8 *)0x0) ||
     (this = (UReplicationSystem *)*puVar1, this == (UReplicationSystem *)0x0)) {
    this_00 = (FNetTokenStore *)0x0;
  }
  else {
    this_00 = UReplicationSystem::GetNetTokenStore(this);
  }
  this_01 = (FNameTokenStore *)
            FNetTokenStore::GetDataStore(this_00,FNameTokenStore::NameTokenStoreName);
  FNameTokenStore::ResolveToken
            (this_01,(FNetToken)SUB84(param_1,0),(FNetTokenStoreState *)(ulonglong)in_R8D);
  return (FName)param_1;
}

// Serialize @ 14433c150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FNameAsNetTokenNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetToken_u_0_s_0 FVar1;
  FNetBitStreamWriter *this;
  FNetToken_u_0 *pFVar2;
  UReplicationSystem *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FNetTokenStore *this_01;
  FNetTokenDataStore *pFVar6;
  uint uVar7;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  if (param_1->bIsInitializingDefaultState == 0) {
    this = param_1->BitStreamWriter;
    pFVar2 = (FNetToken_u_0 *)param_2->Source;
    local_res8 = (FName)(CONCAT71(local_res8._1_7_,*(undefined1 *)(pFVar2 + 2)) & 0xffffffffffffff01
                        );
    FNetBitStreamWriter::WriteBits(this,(uint)((char)local_res8.ComparisonIndex.Value != '\0'),1);
    if ((char)local_res8.ComparisonIndex.Value != '\0') {
      if ((param_1->InternalContext == (FInternalNetSerializationContext *)0x0) ||
         (this_00 = param_1->InternalContext->ReplicationSystem,
         this_00 == (UReplicationSystem *)0x0)) {
        this_01 = (FNetTokenStore *)0x0;
      }
      else {
        this_01 = UReplicationSystem::GetNetTokenStore(this_00);
      }
      FVar1 = pFVar2->_s_0;
      if (pFVar2->Index != 0) {
        pFVar6 = FNetTokenStore::GetDataStore(this_01,FNameTokenStore::NameTokenStoreName);
        uVar7 = pFVar2->TypeId;
        if ((pFVar6 == (FNetTokenDataStore *)0x0) || (pFVar6->TypeId != uVar7)) {
          if (1 < (byte)LogNetToken._0_1_) {
            local_res8 = FNameTokenStore::NameTokenStoreName;
            ::FName::ToString(&local_res8,&local_38);
            ::FString::PrintfImpl(&local_48,L"NetToken (Auth:%u TypeId=%u Index=%u)");
            FVar4.Data = local_48.Data.AllocatorInstance.Data;
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_UE::Net::FNetTokenStore::WriteNetTokenWithKnownType<UE::Net::FNameTokenStore>(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetToken)___ptr64'
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
      return;
    }
    FNetBitStreamWriter::WriteBits(this,pFVar2[1].Value,BitCountNeededForEName);
  }
  return;
}

// Validate @ 14433f5e0

bool __cdecl
UE::Net::FNameAsNetTokenNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  bool bVar1;
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)param_2->Source);
  return bVar1;
}

