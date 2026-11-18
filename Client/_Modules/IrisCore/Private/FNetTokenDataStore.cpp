// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// FNetTokenDataStore @ 144266f80

FNetTokenDataStore * __thiscall
UE::Net::FNetTokenDataStore::FNetTokenDataStore(FNetTokenDataStore *this,FNetTokenStore *param_1)

{
  int *piVar1;
  int iVar2;
  
  this->TokenStore = param_1;
  (this->StoredTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StoredTokens).ArrayMax;
  (this->StoredTokens).ArrayNum = 0;
  this->TypeId = 0xffffffff;
  this->_padding_ = (longlong)&___7FNetTokenDataStore_Net_UE__6B_;
  *piVar1 = 0;
  iVar2 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&(this->StoredTokens).AllocatorInstance,piVar1);
  (this->StoredTokens).ArrayNum = iVar2 + 1;
  *(undefined4 *)((this->StoredTokens).AllocatorInstance.Data + (longlong)iVar2 * 4) = 0;
  return this;
}

// ~FNetTokenDataStore @ 1442692d0

void __thiscall UE::Net::FNetTokenDataStore::~FNetTokenDataStore(FNetTokenDataStore *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FNetTokenDataStore_Net_UE__6B_;
  pFVar1 = (this->StoredTokens).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CreateAndStoreTokenForKey @ 1442719e0

FNetToken __thiscall
UE::Net::FNetTokenDataStore::CreateAndStoreTokenForKey
          (FNetTokenDataStore *this,FNetTokenStoreKey param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNetToken_u_0 FVar4;
  int iVar5;
  undefined4 in_register_00000014;
  uint uVar6;
  TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint in_R8D;
  uint local_res18 [4];
  
  uVar8 = this->TypeId;
  pTVar7 = ((this->TokenStore->LocalNetTokenStoreState).Ptr)->TokenInfoArray + uVar8;
  if ((uint)pTVar7->ArrayNum < 0x100000) {
    uVar6 = 0;
    if (uVar8 < 8) {
      if ((this->TokenStore->Params).Authority == Authority) {
        uVar6 = 8;
      }
      uVar6 = (uVar6 | uVar8 & 7) << 0x14 | pTVar7->ArrayNum & 0xfffffU;
    }
    pFVar1 = (pTVar7->AllocatorInstance).Data;
    local_res18[0] = in_R8D;
    if ((pFVar1 <= (FScriptContainerElement *)local_res18) &&
       ((FScriptContainerElement *)local_res18 < pFVar1 + (longlong)pTVar7->ArrayMax * 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4.Value = (*pcVar2)();
        return (FNetToken_u_0)(FNetToken_u_0)FVar4._s_0;
      }
    }
    iVar5 = pTVar7->ArrayNum;
    if (iVar5 == pTVar7->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    pTVar7->ArrayNum = iVar5 + 1;
    *(uint *)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_res18[0];
    uVar8 = 0;
    if ((int)local_res18[0] < (this->StoredTokens).ArrayNum) {
      uVar8 = ~local_res18[0] >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4.Value = (*pcVar2)();
        return (FNetToken_u_0)(FNetToken_u_0)FVar4._s_0;
      }
    }
    pFVar1 = (this->StoredTokens).AllocatorInstance.Data;
    *(uint *)CONCAT44(in_register_00000014,param_1.KeyIndex) = uVar6;
    *(uint *)(pFVar1 + (longlong)(int)local_res18[0] * 4) = uVar6;
    return (FNetToken)(FNetToken_u_0)param_1.KeyIndex;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1928611023674146910>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                     ,0x5e,"NextTokenIndex < FNetToken::MaxNetTokenCount");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar4.Value = (*pcVar2)();
    return (FNetToken_u_0)(FNetToken_u_0)FVar4._s_0;
  }
  *(uint *)CONCAT44(in_register_00000014,param_1.KeyIndex) = 0;
  return (FNetToken)(FNetToken_u_0)param_1.KeyIndex;
}

// GetNetTokenFromKey @ 14427ac50

FNetToken __thiscall
UE::Net::FNetTokenDataStore::GetNetTokenFromKey(FNetTokenDataStore *this,FNetTokenStoreKey param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNetToken_u_0 FVar4;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < (this->StoredTokens).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.Value = (*pcVar1)();
      return (FNetToken_u_0)(FNetToken_u_0)FVar4._s_0;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1.KeyIndex) =
       *(undefined4 *)((this->StoredTokens).AllocatorInstance.Data + (longlong)(int)in_R8D * 4);
  return (FNetToken)(FNetToken_u_0)param_1.KeyIndex;
}

// GetTokenKey @ 14427ce40

/* WARNING: Enum "Type": Some values do not have unique names */

FNetTokenStoreKey __thiscall
UE::Net::FNetTokenDataStore::GetTokenKey
          (FNetTokenDataStore *this,FNetToken param_1,FNetTokenStoreState *param_2)

{
  uint uVar1;
  undefined4 in_register_00000014;
  uint uVar2;
  longlong in_R9;
  FString local_18;
  
  uVar1 = this->TypeId;
  if (((uint)((ulonglong)param_2 >> 0x14) & 7) == uVar1) {
    uVar2 = (uint)param_2 & 0xfffff;
    if ((int)uVar2 < *(int *)(in_R9 + 8 + (ulonglong)uVar1 * 0x10)) {
      *(undefined4 *)CONCAT44(in_register_00000014,param_1.field0_0x0) =
           *(undefined4 *)(*(longlong *)(in_R9 + (ulonglong)uVar1 * 0x10) + (ulonglong)uVar2 * 4);
      return (FNetTokenStoreKey)(uint)param_1.field0_0x0;
    }
  }
  else if (1 < (byte)LogNetToken._0_1_) {
    ::FString::PrintfImpl(&local_18,L"NetToken (Auth:%u TypeId=%u Index=%u)");
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1.field0_0x0) = 0;
  return (FNetTokenStoreKey)(uint)param_1.field0_0x0;
}

// ReadNetToken @ 14428a090

/* WARNING: Removing unreachable block (ram,0x00014428a0c4) */
/* WARNING: Removing unreachable block (ram,0x00014428a0e4) */
/* WARNING: Removing unreachable block (ram,0x00014428a103) */
/* WARNING: Removing unreachable block (ram,0x00014428a109) */
/* WARNING: Removing unreachable block (ram,0x00014428a10e) */
/* WARNING: Removing unreachable block (ram,0x00014428a11a) */
/* WARNING: Removing unreachable block (ram,0x00014428a136) */

FNetToken __thiscall
UE::Net::FNetTokenDataStore::ReadNetToken(FNetTokenDataStore *this,FArchive *param_1)

{
  longlong lVar1;
  longlong *in_R8;
  
  lVar1 = *in_R8;
  *(undefined4 *)param_1 = 0;
  (**(code **)(lVar1 + 0x1a0))();
  return (FNetToken)SUB84(param_1,0);
}

// ReadNetToken @ 14428a150

FNetToken __thiscall
UE::Net::FNetTokenDataStore::ReadNetToken
          (FNetTokenDataStore *this,FNetSerializationContext *param_1)

{
  uint in_R8D;
  
  FNetTokenStore::InternalReadNetToken(param_1,in_R8D);
  return (FNetToken)SUB84(param_1,0);
}

// StoreTokenForKey @ 144297f00

void __thiscall
UE::Net::FNetTokenDataStore::StoreTokenForKey
          (FNetTokenDataStore *this,FNetTokenStoreKey param_1,FNetToken param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1.KeyIndex < (this->StoredTokens).ArrayNum) {
    uVar3 = ~param_1.KeyIndex >> 0x1f;
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
  ((FNetToken_u_0 *)
  ((this->StoredTokens).AllocatorInstance.Data + (longlong)(int)param_1.KeyIndex * 4))->_s_0 =
       (FNetToken_u_0_s_0)param_2.field0_0x0;
  return;
}

// WriteNetToken @ 14429cbb0

void __thiscall
UE::Net::FNetTokenDataStore::WriteNetToken
          (FNetTokenDataStore *this,FArchive *param_1,FNetToken param_2)

{
  uint uVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FNetTraceCollector *pFVar5;
  uint local_res10 [2];
  byte local_res18 [8];
  FString local_38;
  
  pFVar5 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar5 = *(FNetTraceCollector **)&param_1[1].field_0x30;
  }
  uVar1 = 0xffffffff;
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,*(uint *)&param_1[1].field_0x10);
    ::FString::PrintfImpl(&local_38,L"NetToken (Auth:%u TypeId=%u Index=%u)");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    uVar2 = FNetTrace::TraceName((wchar_t *)FVar3.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar4 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  local_res10[0] = (uint)param_2.field0_0x0 & 0xfffff;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
  if (local_res10[0] != 0) {
    local_res18[0] = (byte)((uint)param_2.field0_0x0 >> 0x17) & 1;
    (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res18,1);
  }
  if (uVar1 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar5,uVar1,*(uint *)&param_1[1].field_0x10);
  }
  return;
}

// WriteNetToken @ 14429cd10

void __thiscall
UE::Net::FNetTokenDataStore::WriteNetToken
          (FNetTokenDataStore *this,FNetSerializationContext *param_1,FNetToken param_2)

{
  FNetTokenStore::InternalWriteNetToken(param_1,param_2,false);
  return;
}

