// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 28

// FNetTokenStore @ 144266ff0

FNetTokenStore * __thiscall UE::Net::FNetTokenStore::FNetTokenStore(FNetTokenStore *this)

{
  FNetTokenStoreState *this_00;
  FNetTokenStoreState *pFVar1;
  
  this_00 = ::operator_new(0x80);
  pFVar1 = (FNetTokenStoreState *)0x0;
  if (this_00 != (FNetTokenStoreState *)0x0) {
    this_00->TokenInfoArray[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->TokenInfoArray[0].ArrayNum = 0;
    this_00->TokenInfoArray[0].ArrayMax = 0;
    this_00->TokenInfoArray[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->TokenInfoArray[1].ArrayNum = 0;
    this_00->TokenInfoArray[1].ArrayMax = 0;
    this_00->TokenInfoArray[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->TokenInfoArray[2].ArrayNum = 0;
    this_00->TokenInfoArray[2].ArrayMax = 0;
    this_00->TokenInfoArray[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->TokenInfoArray[3].ArrayNum = 0;
    this_00->TokenInfoArray[3].ArrayMax = 0;
    this_00->TokenInfoArray[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->TokenInfoArray[4].ArrayNum = 0;
    this_00->TokenInfoArray[4].ArrayMax = 0;
    this_00->TokenInfoArray[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->TokenInfoArray[5].ArrayNum = 0;
    this_00->TokenInfoArray[5].ArrayMax = 0;
    this_00->TokenInfoArray[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->TokenInfoArray[6].ArrayNum = 0;
    this_00->TokenInfoArray[6].ArrayMax = 0;
    this_00->TokenInfoArray[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->TokenInfoArray[7].ArrayNum = 0;
    this_00->TokenInfoArray[7].ArrayMax = 0;
    FNetTokenStoreState::Reset(this_00);
    pFVar1 = this_00;
  }
  (this->LocalNetTokenStoreState).Ptr = pFVar1;
  (this->RemoteNetTokenStoreStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenDataStores).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteNetTokenStoreStates).ArrayNum = 0;
  (this->RemoteNetTokenStoreStates).ArrayMax = 0;
  (this->TokenDataStores).ArrayNum = 0;
  (this->TokenDataStores).ArrayMax = 0;
  (this->Params).MaxConnections = 0x100;
  return this;
}

// ~FNetTokenStore @ 1442692f0

void __thiscall UE::Net::FNetTokenStore::~FNetTokenStore(FNetTokenStore *this)

{
  FScriptContainerElement *pFVar1;
  FNetTokenStoreState *pFVar2;
  longlong lVar3;
  TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> *pTVar4;
  
  DestructItems<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,int>
            ((TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>
              *)(this->TokenDataStores).AllocatorInstance.Data,(this->TokenDataStores).ArrayNum);
  pFVar1 = (this->TokenDataStores).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>,int>
            ((TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>
              *)(this->RemoteNetTokenStoreStates).AllocatorInstance.Data,
             (this->RemoteNetTokenStoreStates).ArrayNum);
  pFVar1 = (this->RemoteNetTokenStoreStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->LocalNetTokenStoreState).Ptr;
  if (pFVar2 != (FNetTokenStoreState *)0x0) {
    lVar3 = 8;
    pTVar4 = pFVar2[1].TokenInfoArray;
    do {
      pFVar1 = pTVar4[-1].AllocatorInstance.Data;
      pTVar4 = pTVar4 + -1;
      lVar3 = lVar3 + -1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    } while (lVar3 != 0);
    ::operator_delete(pFVar2,0x80);
  }
  return;
}

// AppendExport @ 14426d7c0

void __cdecl
UE::Net::FNetTokenStore::AppendExport(FNetSerializationContext *param_1,FNetToken param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetToken_u_0 local_res8 [8];
  
  if (param_1->ExportContext == (FNetExportContext *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1928611023674147358>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                       ,0x21e,"ExportContext");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_res8[0] = param_2.field0_0x0;
    TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
    AddUniqueImpl<UE::Net::FNetToken_const_&>
              (&param_1->ExportContext->BatchExports->NetTokensPendingExportInCurrentBatch,
               (FNetToken *)&local_res8[0]._s_0);
  }
  return;
}

// ConditionalReadNetTokenData @ 1442711f0

void __thiscall
UE::Net::FNetTokenStore::ConditionalReadNetTokenData
          (FNetTokenStore *this,FNetSerializationContext *param_1,FNetToken param_2)

{
  FNetBitStreamReader *this_00;
  uint uVar1;
  
  this_00 = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this_00,1);
  if (((uVar1 & 1) != 0) && (this_00->OverflowBitCount == 0)) {
    ReadTokenData(this,param_1,param_2,
                  (param_1->InternalContext->ResolveContext).RemoteNetTokenStoreState);
  }
  return;
}

// ConditionalWriteNetTokenData @ 144271260

void __thiscall
UE::Net::FNetTokenStore::ConditionalWriteNetTokenData
          (FNetTokenStore *this,FNetSerializationContext *param_1,FNetExportContext *param_2,
          FNetToken param_3)

{
  FNetBitStreamWriter *this_00;
  bool bVar1;
  
  this_00 = param_1->BitStreamWriter;
  if (((this->Params).Authority == Authority) ==
      (bool)((byte)((uint)param_3.field0_0x0 >> 0x17) & 1)) {
    if (param_2 == (FNetExportContext *)0x0) {
      FNetBitStreamWriter::WriteBits(this_00,1,1);
      WriteTokenData(this,param_1,param_3);
    }
    else {
      bVar1 = Net::Private::FNetExportContext::IsExported(param_2,param_3);
      FNetBitStreamWriter::WriteBits(this_00,(uint)!bVar1,1);
      if (!bVar1) {
        WriteTokenData(this,param_1,param_3);
        Net::Private::FNetExportContext::AddExported(param_2,param_3);
      }
    }
  }
  else {
    FNetBitStreamWriter::WriteBits(this_00,0,1);
  }
  return;
}

// GetAllNetTokens @ 144279650

TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> * __thiscall
UE::Net::FNetTokenStore::GetAllNetTokens
          (FNetTokenStore *this,
          TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FNetTokenStoreState *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *local_res10;
  ForAnyElementType local_48;
  int local_40 [2];
  
  iVar2 = (this->TokenDataStores).ArrayNum;
  pFVar10 = (this->TokenDataStores).AllocatorInstance.Data;
  pFVar4 = (this->LocalNetTokenStoreState).Ptr;
  pFVar11 = pFVar10 + (longlong)iVar2 * 0x10;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_res10 = __return_storage_ptr__;
  do {
    if ((this->TokenDataStores).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) {
      (local_res10->AllocatorInstance).Data = local_48.Data;
      local_res10->ArrayNum = local_40[0];
      local_res10->ArrayMax = local_40[1];
      return local_res10;
    }
    lVar5 = *(longlong *)(pFVar10 + 8);
    uVar3 = pFVar4->TokenInfoArray[*(uint *)(lVar5 + 0x20)].ArrayNum;
    if (1 < uVar3) {
      if (*(int *)(lVar5 + 0x10) < 2) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 8);
      iVar1 = uVar3 - 1;
      if (iVar1 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9a9,L"Invalid range size: %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
      }
      else if (iVar1 == 0) goto LAB_1442797b3;
      iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar1,&local_48,local_40,local_40 + 1);
      memcpy(local_48.Data + (longlong)iVar8 * 4,(void *)(lVar5 + 4),(longlong)iVar1 << 2);
    }
LAB_1442797b3:
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// GetDataStore @ 14427a080

FNetTokenDataStore * __thiscall
UE::Net::FNetTokenStore::GetDataStore(FNetTokenStore *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->TokenDataStores).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->TokenDataStores).ArrayNum * 2;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FNetTokenDataStore *)0x0;
    }
    if (param_1 == *pFVar1) break;
    pFVar1 = pFVar1 + 2;
  }
  return (FNetTokenDataStore *)pFVar1[1];
}

// GetDataStore @ 14427a0b0

FNetTokenDataStore * __thiscall
UE::Net::FNetTokenStore::GetDataStore(FNetTokenStore *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->TokenDataStores).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->TokenDataStores).ArrayNum * 2;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FNetTokenDataStore *)0x0;
    }
    if (param_1 == *pFVar1) break;
    pFVar1 = pFVar1 + 2;
  }
  return (FNetTokenDataStore *)pFVar1[1];
}

// GetRemoteNetTokenStoreState @ 14427c6f0

FNetTokenStoreState * __thiscall
UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState(FNetTokenStore *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FNetTokenStoreState *pFVar5;
  uint local_res10 [2];
  uint *local_res18 [2];
  
  local_res10[0] = param_1;
  if ((param_1 == 0) || ((uint)(this->RemoteNetTokenStoreStates).ArrayNum <= param_1)) {
    local_res18[0] = local_res10;
    bVar3 = `UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState'::__l3::<lambda_1>::operator()
                      (local_res18);
    if (!bVar3) {
      return (FNetTokenStoreState *)0x0;
    }
  }
  uVar2 = local_res10[0];
  uVar4 = 0;
  if ((int)local_res10[0] < (this->RemoteNetTokenStoreStates).ArrayNum) {
    uVar4 = ~local_res10[0] >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FNetTokenStoreState *)(*pcVar1)();
    return pFVar5;
  }
  return *(FNetTokenStoreState **)
          ((this->RemoteNetTokenStoreStates).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
}

// GetRemoteNetTokenStoreState @ 14427c7a0

FNetTokenStoreState * __thiscall
UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState(FNetTokenStore *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FNetTokenStoreState *pFVar5;
  uint local_res10 [2];
  uint *local_res18 [2];
  
  local_res10[0] = param_1;
  if ((param_1 == 0) || ((uint)(this->RemoteNetTokenStoreStates).ArrayNum <= param_1)) {
    local_res18[0] = local_res10;
    bVar3 = `UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState'::__l3::<lambda_1>::operator()
                      (local_res18);
    if (!bVar3) {
      return (FNetTokenStoreState *)0x0;
    }
  }
  uVar2 = local_res10[0];
  uVar4 = 0;
  if ((int)local_res10[0] < (this->RemoteNetTokenStoreStates).ArrayNum) {
    uVar4 = ~local_res10[0] >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FNetTokenStoreState *)(*pcVar1)();
    return pFVar5;
  }
  return *(FNetTokenStoreState **)
          ((this->RemoteNetTokenStoreStates).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
}

// Init @ 14427dee0

void __thiscall UE::Net::FNetTokenStore::Init(FNetTokenStore *this,FInitParams *param_1)

{
  TArray<TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  this_00 = &this->RemoteNetTokenStoreStates;
  this->Params = *param_1;
  piVar1 = &(this->RemoteNetTokenStoreStates).ArrayNum;
  iVar2 = *piVar1;
  uVar3 = param_1->MaxConnections;
  if (iVar2 < (int)uVar3) {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar3 - iVar2,&this_00->AllocatorInstance,piVar1,
                       &(this->RemoteNetTokenStoreStates).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar6 * 8,0,
           (longlong)(int)(uVar3 - iVar2) << 3);
    return;
  }
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if ((int)uVar3 < iVar2) {
    uVar7 = iVar2 - uVar3;
    if (((int)(uVar7 | uVar3) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar7 != 0) {
      TArray<TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(this_00,uVar3,uVar7);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this_00->AllocatorInstance,*piVar1,&(this->RemoteNetTokenStoreStates).ArrayMax
                );
    }
  }
  return;
}

// InitRemoteNetTokenStoreState @ 14427e840

void __thiscall
UE::Net::FNetTokenStore::InitRemoteNetTokenStoreState(FNetTokenStore *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNetTokenStoreState *pFVar4;
  uint uVar5;
  FNetTokenStoreState *pFVar6;
  TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  uint uVar9;
  uint local_res10 [2];
  uint *local_res18 [2];
  FScriptContainerElement local_28 [16];
  
  local_res10[0] = param_1;
  if ((param_1 == 0) || ((uint)(this->RemoteNetTokenStoreStates).ArrayNum <= param_1)) {
    local_res18[0] = local_res10;
    bVar3 = `UE::Net::FNetTokenStore::InitRemoteNetTokenStoreState'::__l3::<lambda_1>::operator()
                      (local_res18);
    if (!bVar3) {
      return;
    }
  }
  uVar9 = local_res10[0];
  pFVar6 = (FNetTokenStoreState *)0x0;
  uVar5 = 0;
  if ((int)local_res10[0] < (this->RemoteNetTokenStoreStates).ArrayNum) {
    uVar5 = ~local_res10[0] >> 0x1f;
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
  pFVar4 = *(FNetTokenStoreState **)
            ((this->RemoteNetTokenStoreStates).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
  if (pFVar4 != (FNetTokenStoreState *)0x0) {
    FNetTokenStoreState::Reset(pFVar4);
    return;
  }
  pFVar4 = ::operator_new(0x80);
  if (pFVar4 != (FNetTokenStoreState *)0x0) {
    pFVar4->TokenInfoArray[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->TokenInfoArray[0].ArrayNum = 0;
    pFVar4->TokenInfoArray[0].ArrayMax = 0;
    pFVar4->TokenInfoArray[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->TokenInfoArray[1].ArrayNum = 0;
    pFVar4->TokenInfoArray[1].ArrayMax = 0;
    pFVar4->TokenInfoArray[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->TokenInfoArray[2].ArrayNum = 0;
    pFVar4->TokenInfoArray[2].ArrayMax = 0;
    pFVar4->TokenInfoArray[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->TokenInfoArray[3].ArrayNum = 0;
    pFVar4->TokenInfoArray[3].ArrayMax = 0;
    pFVar4->TokenInfoArray[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->TokenInfoArray[4].ArrayNum = 0;
    pFVar4->TokenInfoArray[4].ArrayMax = 0;
    pFVar4->TokenInfoArray[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->TokenInfoArray[5].ArrayNum = 0;
    pFVar4->TokenInfoArray[5].ArrayMax = 0;
    pFVar4->TokenInfoArray[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->TokenInfoArray[6].ArrayNum = 0;
    pFVar4->TokenInfoArray[6].ArrayMax = 0;
    pFVar4->TokenInfoArray[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->TokenInfoArray[7].ArrayNum = 0;
    pFVar4->TokenInfoArray[7].ArrayMax = 0;
    FNetTokenStoreState::Reset(pFVar4);
    pFVar6 = pFVar4;
  }
  lVar8 = (longlong)(int)local_res10[0];
  uVar9 = 0;
  if ((int)local_res10[0] < (this->RemoteNetTokenStoreStates).ArrayNum) {
    uVar9 = ~local_res10[0] >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->RemoteNetTokenStoreStates).AllocatorInstance.Data + lVar8 * 8;
  if (pFVar1 == local_28) {
    if (pFVar6 == (FNetTokenStoreState *)0x0) {
      return;
    }
    pTVar7 = pFVar6[1].TokenInfoArray;
    lVar8 = 8;
    do {
      pFVar1 = pTVar7[-1].AllocatorInstance.Data;
      pTVar7 = pTVar7 + -1;
      lVar8 = lVar8 + -1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar4 = pFVar6;
    } while (lVar8 != 0);
  }
  else {
    pFVar4 = *(FNetTokenStoreState **)pFVar1;
    *(FNetTokenStoreState **)pFVar1 = pFVar6;
    if (pFVar4 == (FNetTokenStoreState *)0x0) {
      return;
    }
    pTVar7 = pFVar4[1].TokenInfoArray;
    lVar8 = 8;
    do {
      pFVar1 = pTVar7[-1].AllocatorInstance.Data;
      pTVar7 = pTVar7 + -1;
      lVar8 = lVar8 + -1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    } while (lVar8 != 0);
  }
  ::operator_delete(pFVar4,0x80);
  return;
}

// InternalReadNetToken @ 144280960

FNetToken __cdecl UE::Net::FNetTokenStore::InternalReadNetToken(FArchive *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 in_register_00000014;
  longlong *plVar2;
  uint uVar3;
  uint in_R8D;
  char local_res8 [8];
  uint local_res10 [2];
  uint local_res20 [2];
  
  plVar2 = (longlong *)CONCAT44(in_register_00000014,param_2);
  lVar1 = *plVar2;
  *(undefined4 *)param_1 = 0;
  local_res10[0] = 0;
  (**(code **)(lVar1 + 0x1a0))(plVar2,local_res10);
  if (local_res10[0] != 0) {
    local_res8[0] = '\0';
    (**(code **)(*plVar2 + 400))(plVar2,local_res8,1);
    if (in_R8D == 0xffffffff) {
      local_res20[0] = 0;
      (**(code **)(*plVar2 + 400))(plVar2,local_res20,3);
      in_R8D = local_res20[0];
    }
    if ((*(byte *)((longlong)plVar2 + 0x29) & 2) == 0) {
      uVar3 = 0;
      if ((in_R8D < 8) && (uVar3 = 0, local_res10[0] < 0x100000)) {
        uVar3 = (-(uint)(local_res8[0] != '\0') & 8 | in_R8D & 7) << 0x14 | local_res10[0] & 0xfffff
        ;
      }
      *(uint *)param_1 = uVar3;
    }
  }
  return (FNetToken)SUB84(param_1,0);
}

// InternalReadNetToken @ 144280a20

/* WARNING: Enum "Type": Some values do not have unique names */

FNetToken __cdecl
UE::Net::FNetTokenStore::InternalReadNetToken(FNetSerializationContext *param_1,uint param_2)

{
  FNetBitStreamReader *this;
  code *pcVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FNetToken_u_0 FVar7;
  ForAnyElementType FVar8;
  undefined4 in_register_00000014;
  FNetSerializationContext *this_00;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  FNetTraceCollector *pFVar10;
  uint in_R8D;
  bool bVar11;
  FString local_38;
  
  this_00 = (FNetSerializationContext *)CONCAT44(in_register_00000014,param_2);
  this = this_00->BitStreamReader;
  bVar11 = 2 < GNetTraceRuntimeVerbosity;
  *(undefined4 *)&(param_1->ErrorContext).ObjectHandle.field0_0x0 = 0;
  pFVar10 = (FNetTraceCollector *)0x0;
  if (bVar11) {
    pFVar10 = this_00->TraceCollector;
  }
  uVar4 = 0xffffffff;
  if (pFVar10 != (FNetTraceCollector *)0x0) {
    uVar4 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,this->BufferBitPosition);
    uVar5 = FNetTrace::TraceName((FName)0x0);
    FVar9 = (pFVar10->Events).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
    }
    *(uint *)((longlong)FVar9 + (ulonglong)uVar4 * 0x10) = uVar5;
  }
  uVar5 = ReadPackedUint32(this);
  if (uVar5 != 0) {
    uVar6 = FNetBitStreamReader::ReadBits(this,1);
    if (in_R8D == 0xffffffff) {
      in_R8D = FNetBitStreamReader::ReadBits(this,3);
    }
    if ((this_00->ErrorContext).Error == (FName)0x0) {
      bVar11 = FNetSerializationContext::IsBitStreamOverflown(this_00);
      if (!bVar11) {
        if ((in_R8D < 8) && (uVar5 < 0x100000)) {
          uVar5 = ((uVar6 & 1) * 8 | in_R8D & 7) << 0x14 | uVar5 & 0xfffff;
        }
        else {
          uVar5 = 0;
        }
        *(uint *)&(param_1->ErrorContext).ObjectHandle.field0_0x0 = uVar5;
        if (uVar4 != 0xffffffff) {
          ::FString::PrintfImpl(&local_38,L"NetToken (Auth:%u TypeId=%u Index=%u)");
          FVar3.Data = local_38.Data.AllocatorInstance.Data;
          bVar11 = local_38.Data.ArrayNum != 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          FVar8.Data = (FScriptContainerElement *)L"";
          if (bVar11) {
            FVar8.Data = FVar3.Data;
          }
          uVar5 = FNetTrace::TraceName((wchar_t *)FVar8.Data);
          FVar9 = (pFVar10->Events).AllocatorInstance.SecondaryData;
          if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
          }
          *(uint *)((longlong)FVar9 + (ulonglong)uVar4 * 0x10) = uVar5;
          if (FVar3.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar3.Data);
          }
        }
        FVar2 = GNetError_InvalidValue;
        if ((*(uint *)&(param_1->ErrorContext).ObjectHandle.field0_0x0 & 0xfffff) == 0) {
          FNetSerializationContext::SetBitStreamOverflow(this_00);
          FNetErrorContext::SetError((FNetErrorContext *)this_00,FVar2);
          if (1 < (byte)LogNetToken._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
          }
          bVar11 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1928611023674146963>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                              ,0x93,"false");
          if (bVar11) {
            pcVar1 = (code *)swi(3);
            FVar7.Value = (*pcVar1)();
            return (FNetToken_u_0)(FNetToken_u_0)FVar7._s_0;
          }
        }
      }
    }
  }
  if (uVar4 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar10,uVar4,this->BufferBitPosition);
  }
  return (FNetToken)SUB84(param_1,0);
}

// InternalWriteNetToken @ 1442824f0

void __cdecl
UE::Net::FNetTokenStore::InternalWriteNetToken(FArchive *param_1,FNetToken param_2,bool param_3)

{
  char cVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FNetTraceCollector *pFVar5;
  uint local_res8 [2];
  uint local_res10 [2];
  char local_res18;
  uint local_res20 [2];
  FString local_58;
  
  pFVar5 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar5 = *(FNetTraceCollector **)&param_1[1].field_0x30;
  }
  uVar2 = 0xffffffff;
  local_res18 = param_3;
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,*(uint *)&param_1[1].field_0x10);
    ::FString::PrintfImpl(&local_58,L"NetToken (Auth:%u TypeId=%u Index=%u)");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar3.Data = local_58.Data.AllocatorInstance.Data;
    }
    local_res10[0] = FNetTrace::TraceName((wchar_t *)FVar3.Data);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar4 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = local_res10[0];
  }
  cVar1 = local_res18;
  local_res8[0] = (uint)param_2.field0_0x0 & 0xfffff;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res8);
  if (local_res8[0] != 0) {
    local_res10[0] =
         CONCAT31(local_res10[0]._1_3_,(char)((uint)param_2.field0_0x0 >> 0x17)) & 0xffffff01;
    (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
    if (cVar1 != '\0') {
      local_res20[0] = (uint)param_2.field0_0x0 >> 0x14 & 7;
      (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res20,3);
    }
  }
  if (uVar2 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar5,uVar2,*(uint *)&param_1[1].field_0x10);
  }
  return;
}

// InternalWriteNetToken @ 144282680

void __cdecl
UE::Net::FNetTokenStore::InternalWriteNetToken
          (FNetSerializationContext *param_1,FNetToken param_2,bool param_3)

{
  uint *puVar1;
  uint *puVar2;
  FNetBitStreamWriter *this;
  ForAnyElementType FVar3;
  uint uVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  ForElementType<FNetTracePacketContentEvent> FVar7;
  FNetTraceCollector *pFVar8;
  bool bVar9;
  FString local_48;
  
  pFVar8 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar8 = param_1->TraceCollector;
  }
  puVar1 = &param_1->BitStreamWriter->OverflowBitCount;
  puVar2 = &param_1->BitStreamWriter->BufferBitPosition;
  uVar4 = 0xffffffff;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uVar4 = *puVar2;
    if (*puVar1 != 0) {
      uVar4 = 0;
    }
    uVar4 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,uVar4);
    ::FString::PrintfImpl(&local_48,L"NetToken (Auth:%u TypeId=%u Index=%u)");
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
    bVar9 = local_48.Data.ArrayNum != 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    FVar6.Data = (FScriptContainerElement *)L"";
    if (bVar9) {
      FVar6.Data = FVar3.Data;
    }
    uVar5 = FNetTrace::TraceName((wchar_t *)FVar6.Data);
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
    FVar7 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar7 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar7 + (ulonglong)uVar4 * 0x10) = uVar5;
  }
  this = param_1->BitStreamWriter;
  WritePackedUint32(this,(uint)param_2.field0_0x0 & 0xfffff);
  if ((((uint)param_2.field0_0x0 & 0xfffff) != 0) &&
     (FNetBitStreamWriter::WriteBits(this,(uint)(((uint)param_2.field0_0x0 >> 0x17 & 1) != 0),1),
     param_3)) {
    FNetBitStreamWriter::WriteBits(this,(uint)param_2.field0_0x0 >> 0x14 & 7,3);
  }
  if (uVar4 != 0xffffffff) {
    uVar5 = *puVar2;
    if (*puVar1 != 0) {
      uVar5 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar8,uVar4,uVar5);
  }
  return;
}

// ReadTokenData @ 14428a580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FNetTokenStore::ReadTokenData
          (FNetTokenStore *this,FArchive *param_1,FNetToken param_2,FNetTokenStoreState *param_3,
          UPackageMap *param_4)

{
  uint uVar1;
  FNetTokenDataStore *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNetToken_u_0 local_res18 [2];
  FNetTokenStoreKey local_38 [2];
  FString local_30;
  FString local_20;
  
  if (((uint)param_2.field0_0x0 & 0xfffff) != 0) {
    uVar5 = (uint)param_2.field0_0x0 >> 0x14 & 7;
    local_res18[0] = param_2.field0_0x0;
    if (((param_1->field_0x29 & 2) == 0) &&
       (uVar1 = (this->TokenDataStores).ArrayNum, uVar5 < uVar1)) {
      if (((int)uVar1 <= (int)uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FNetTokenDataStore **)
                ((this->TokenDataStores).AllocatorInstance.Data + (ulonglong)uVar5 * 0x10 + 8);
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,local_38,param_1,local_res18,param_4);
      bVar4 = ValidateAndStoreNetTokenData
                        (this,pFVar2,param_3,(FNetToken)local_res18[0]._s_0,local_38[0]);
      if (!bVar4) {
        FArchiveState::SetError((FArchiveState *)param_1);
        if (1 < (byte)LogNetToken._0_1_) {
          FNetToken::ToString((FNetToken *)&local_res18[0]._s_0,&local_20);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
          if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_20.Data.AllocatorInstance.Data);
          }
        }
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1928611023674147303>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                           ,0x1e7,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else {
      FArchiveState::SetError((FArchiveState *)param_1);
      if (1 < (byte)LogNetToken._0_1_) {
        ::FString::PrintfImpl(&local_30,L"NetToken (Auth:%u TypeId=%u Index=%u)");
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// ReadTokenData @ 14428a790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FNetTokenStore::ReadTokenData
          (FNetTokenStore *this,FNetSerializationContext *param_1,FNetToken param_2,
          FNetTokenStoreState *param_3)

{
  uint uVar1;
  FNetTokenDataStore *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  FNetToken_u_0 local_res18 [2];
  FNetTokenStoreKey local_38 [2];
  FString local_30;
  FString local_20;
  
  FVar4 = GNetError_InvalidValue;
  if (((uint)param_2.field0_0x0 & 0xfffff) != 0) {
    uVar1 = (this->TokenDataStores).ArrayNum;
    uVar6 = (uint)param_2.field0_0x0 >> 0x14 & 7;
    local_res18[0] = param_2.field0_0x0;
    if (uVar6 < uVar1) {
      if (((int)uVar1 <= (int)uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FNetTokenDataStore **)
                ((this->TokenDataStores).AllocatorInstance.Data + (ulonglong)uVar6 * 0x10 + 8);
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,local_38,param_1,local_res18);
      bVar5 = ValidateAndStoreNetTokenData
                        (this,pFVar2,param_3,(FNetToken)local_res18[0]._s_0,local_38[0]);
      FVar4 = GNetError_InvalidValue;
      if (!bVar5) {
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
        if (1 < (byte)LogNetToken._0_1_) {
          FNetToken::ToString((FNetToken *)&local_res18[0]._s_0,&local_20);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
          if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_20.Data.AllocatorInstance.Data);
          }
        }
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1928611023674147275>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                           ,0x1cb,"false");
        if (bVar5) goto code_r0x00014428a987;
      }
    }
    else {
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
      if (1 < (byte)LogNetToken._0_1_) {
        FNetToken::ToString((FNetToken *)&local_res18[0]._s_0,&local_30);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
      }
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1928611023674147264>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                         ,0x1c0,"false");
      if (bVar5) {
code_r0x00014428a987:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// RegisterDataStore @ 14428ade0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::FNetTokenStore::RegisterDataStore
          (FNetTokenStore *this,
          TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>
          param_1,FName param_2)

{
  int iVar1;
  UNetTokenTypeIdConfig *this_00;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *this_01;
  FString *pFVar9;
  uint uVar10;
  FName *pFVar11;
  FName *pFVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FName local_res18;
  undefined1 local_res20 [8];
  FName local_a8;
  FName *local_a0;
  FName *local_98;
  FName *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar13 = (this->TokenDataStores).ArrayNum;
  local_res18 = param_2;
  if (7 < uVar13) goto LAB_14428b320;
  if ((param_1.Ptr)->_padding_ == 0) {
    return false;
  }
  pFVar12 = (FName *)(this->TokenDataStores).AllocatorInstance.Data;
  pFVar11 = pFVar12 + (longlong)(int)uVar13 * 2;
  for (; pFVar12 != pFVar11; pFVar12 = pFVar12 + 2) {
    if (param_2 == *pFVar12) {
      if (pFVar12[1] != (FName)0x0) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1928611023674147128>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                           ,0x138,"GetDataStore(TokenStoreName) == nullptr");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        goto LAB_14428b320;
      }
      break;
    }
  }
  this_01 = UNetTokenTypeIdConfig::StaticClass();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  this_00 = (UNetTokenTypeIdConfig *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  pFVar9 = ::FName::ToString(&local_res18,&local_88);
  bVar6 = UNetTokenTypeIdConfig::ReservedTypeIdsAppearValid(this_00);
  if ((bVar6) ||
     (local_res8[0] = bVar6,
     bVar6 = `UNetTokenTypeIdConfig::GetTypeID'::__l3::<lambda_1>::operator()(local_res8), bVar6)) {
    pFVar12 = (FName *)(this_00->ReservedTypeIds).AllocatorInstance.Data;
    iVar1 = (this_00->ReservedTypeIds).ArrayNum;
    local_a0 = pFVar12 + (longlong)iVar1 * 3;
    do {
      if ((this_00->ReservedTypeIds).ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FNetTokenStoreTypeIdPair_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar12 == local_a0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                           ,0x247,
                           L"Unknown Token Store Type %s. StoreType MUST be declared in Engine.ini."
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        uVar13 = 0xffffffff;
        goto LAB_14428af9d;
      }
      uVar13 = pFVar12[1].ComparisonIndex.Value;
      uVar14 = (pFVar9->Data).ArrayNum;
      if (uVar13 == uVar14) {
        if ((int)uVar13 < 2) goto LAB_14428af51;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*pFVar12,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
        bVar6 = iVar8 == 0;
      }
      else {
        bVar6 = uVar13 + uVar14 == 1;
      }
      if (bVar6) goto LAB_14428af51;
      pFVar12 = pFVar12 + 3;
    } while( true );
  }
  uVar13 = 0xffffffff;
  goto LAB_14428af9d;
LAB_14428af51:
  uVar13 = pFVar12[2].ComparisonIndex.Value;
LAB_14428af9d:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  *(uint *)((param_1.Ptr)->_padding_ + 0x20) = uVar13;
  if (*(int *)((param_1.Ptr)->_padding_ + 0x20) == -1) {
    local_a0 = &local_res18;
    bVar6 = `UE::Net::FNetTokenStore::RegisterDataStore'::__l12::<lambda_1>::operator()(&local_a0);
    if (bVar6) goto LAB_14428b019;
    if ((byte)LogNetToken._0_1_ < 2) goto LAB_14428b320;
    ::FName::ToString(&local_res18,&local_78);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
  }
  else {
LAB_14428b019:
    if (uVar13 < 8) {
      uVar13 = (this->TokenDataStores).ArrayNum;
      uVar14 = *(uint *)((param_1.Ptr)->_padding_ + 0x20);
      if (uVar13 <= uVar14) {
        iVar1 = (this->TokenDataStores).ArrayNum;
        local_a8.ComparisonIndex.Value = 0;
        local_a8.Number = 0;
        uVar13 = *(int *)((param_1.Ptr)->_padding_ + 0x20) + 1;
        if (iVar1 < (int)uVar13) {
          iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar13 - iVar1,&(this->TokenDataStores).AllocatorInstance,
                             &(this->TokenDataStores).ArrayNum,&(this->TokenDataStores).ArrayMax);
          DefaultConstructItems<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,int>
                    ((this->TokenDataStores).AllocatorInstance.Data + (longlong)iVar8 * 0x10,
                     uVar13 - iVar1);
        }
        else {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          if ((int)uVar13 < iVar1) {
            uVar14 = iVar1 - uVar13;
            if (((int)(uVar13 | uVar14) < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (uVar14 != 0) {
              TArray<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,TSizedDefaultAllocator<32>_>
              ::RemoveAtImpl(&this->TokenDataStores,uVar13,uVar14);
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&(this->TokenDataStores).AllocatorInstance,
                         (this->TokenDataStores).ArrayNum,&(this->TokenDataStores).ArrayMax);
            }
          }
        }
LAB_14428b266:
        iVar1 = *(int *)((param_1.Ptr)->_padding_ + 0x20);
        TArray<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,TSizedDefaultAllocator<32>_>
        ::InsertUninitializedImpl(&this->TokenDataStores,iVar1,1);
        pFVar12 = (FName *)((this->TokenDataStores).AllocatorInstance.Data + (longlong)iVar1 * 0x10)
        ;
        *pFVar12 = local_res18;
        uVar5 = *(undefined4 *)((longlong)&(param_1.Ptr)->_padding_ + 4);
        pFVar12[1].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(param_1.Ptr)->_padding_;
        pFVar12[1].Number = uVar5;
        (param_1.Ptr)->_padding_ = 0;
        return true;
      }
      uVar10 = 0;
      if ((int)uVar14 < (int)uVar13) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      lVar2 = *(longlong *)
               ((this->TokenDataStores).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10 + 8);
      uVar13 = *(uint *)((param_1.Ptr)->_padding_ + 0x20);
      uVar14 = 0;
      if ((int)uVar13 < (this->TokenDataStores).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_a8 = *(FName *)((this->TokenDataStores).AllocatorInstance.Data +
                           (longlong)(int)uVar13 * 0x10);
      if (lVar2 == 0) goto LAB_14428b266;
      local_98 = &local_a8;
      local_90 = &local_res18;
      bVar6 = `UE::Net::FNetTokenStore::RegisterDataStore'::__l54::<lambda_2>::operator()(&local_98)
      ;
      if (bVar6) goto LAB_14428b266;
      if ((byte)LogNetToken._0_1_ < 2) goto LAB_14428b320;
      ::FName::ToString(&local_res18,&local_58);
      ::FName::ToString(&local_a8,&local_68);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      }
    }
    else {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1928611023674147143>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                         ,0x147,
                         "TypeId != FNetToken::InvalidTokenTypeId && TypeId < FNetToken::MaxTypeIdCount"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if ((byte)LogNetToken._0_1_ < 2) goto LAB_14428b320;
      ::FName::ToString(&local_res18,&local_48);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      local_78.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_14428b320:
  puVar3 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return false;
}

// UnRegisterDataStore @ 144298a60

bool __thiscall UE::Net::FNetTokenStore::UnRegisterDataStore(FNetTokenStore *this,FName param_1)

{
  uint uVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FName *pFVar9;
  uint uVar10;
  FName *pFVar11;
  
  uVar1 = (this->TokenDataStores).ArrayNum;
  if (uVar1 < 8) {
    pFVar9 = (FName *)(this->TokenDataStores).AllocatorInstance.Data;
    pFVar11 = pFVar9 + (longlong)(int)uVar1 * 2;
    for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 2) {
      if (param_1 == *pFVar9) {
        FVar2 = pFVar9[1];
        if (FVar2 == (FName)0x0) {
          return false;
        }
        uVar8 = *(uint *)((longlong)FVar2 + 0x20);
        uVar10 = 0;
        if ((int)uVar8 < (int)uVar1) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar3 = (this->TokenDataStores).AllocatorInstance.Data;
        puVar4 = *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 0x10 + 8);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(pFVar3 + (longlong)(int)uVar8 * 0x10 + 8) = 0;
          (**(code **)*puVar4)(puVar4,1);
        }
        uVar1 = *(uint *)((longlong)FVar2 + 0x20);
        uVar8 = 0;
        if ((int)uVar1 < (this->TokenDataStores).ArrayNum) {
          uVar8 = ~uVar1 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        *(undefined8 *)
         ((this->TokenDataStores).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10) = 0;
        return true;
      }
    }
  }
  return false;
}

// ValidateAndStoreNetTokenData @ 14429a6f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::FNetTokenStore::ValidateAndStoreNetTokenData
          (FNetTokenStore *this,FNetTokenDataStore *param_1,FNetTokenStoreState *param_2,
          FNetToken param_3,FNetTokenStoreKey param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> *pTVar6;
  FNetToken_u_0 local_res20 [2];
  FString local_48;
  FString local_38;
  
  if (param_4.KeyIndex != 0) {
    uVar4 = (uint)param_3.field0_0x0 & 0xfffff;
    uVar5 = (uint)param_3.field0_0x0 >> 0x14 & 7;
    local_res20[0] = param_3.field0_0x0;
    bVar2 = FNetTokenStoreState::ReserveTokenCount(param_2,uVar5,uVar4 + 1);
    if (bVar2) {
      pTVar6 = param_2->TokenInfoArray + uVar5;
      if ((pTVar6->ArrayNum <= (int)uVar4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar4 = *(uint *)((pTVar6->AllocatorInstance).Data + (ulonglong)uVar4 * 4);
      if ((uVar4 == 0) || (param_4.KeyIndex == uVar4)) {
        if ((((uint)param_3.field0_0x0 >> 0x17 & 1) != 0) && ((this->Params).Authority != Authority)
           ) {
          if (5 < (byte)LogNetToken._0_1_) {
            FNetToken::ToString((FNetToken *)&local_res20[0]._s_0,&local_38);
            uVar4 = 0;
            if ((int)param_4.KeyIndex < (param_1->StoredTokens).ArrayNum) {
              uVar4 = ~param_4.KeyIndex >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            FNetToken::ToString((FNetToken *)
                                ((param_1->StoredTokens).AllocatorInstance.Data +
                                (longlong)(int)param_4.KeyIndex * 4),&local_48);
            Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          uVar4 = 0;
          if ((int)param_4.KeyIndex < (param_1->StoredTokens).ArrayNum) {
            uVar4 = ~param_4.KeyIndex >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          ((FNetToken_u_0 *)
          ((param_1->StoredTokens).AllocatorInstance.Data + (longlong)(int)param_4.KeyIndex * 4))->
          _s_0 = (FNetToken_u_0_s_0)param_3.field0_0x0;
        }
        if ((pTVar6->ArrayNum <= (int)((uint)param_3.field0_0x0 & 0xfffff)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        *(uint *)((pTVar6->AllocatorInstance).Data +
                 (ulonglong)((uint)param_3.field0_0x0 & 0xfffff) * 4) = param_4.KeyIndex;
        return true;
      }
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1928611023674147232>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                         ,0x1a0,"!ExistingStoreKey.IsValid() || StoreKey == ExistingStoreKey");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return false;
}

// WriteTokenData @ 14429da90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FNetTokenStore::WriteTokenData
          (FNetTokenStore *this,FArchive *param_1,FNetToken param_2,UPackageMap *param_3)

{
  undefined4 uVar1;
  FNetTokenStoreState *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FString local_28;
  
  uVar7 = (uint)param_2.field0_0x0 & 0xfffff;
  if (uVar7 != 0) {
    uVar6 = (uint)param_2.field0_0x0 >> 0x14 & 7;
    pFVar2 = (this->LocalNetTokenStoreState).Ptr;
    if (uVar7 < (uint)pFVar2->TokenInfoArray[uVar6].ArrayNum) {
      uVar8 = (uint)param_2.field0_0x0 >> 0x14 & 7;
      if ((pFVar2->TokenInfoArray[uVar8].ArrayNum <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = *(undefined4 *)
               (pFVar2->TokenInfoArray[uVar8].AllocatorInstance.Data + (ulonglong)uVar7 * 4);
      if (((this->TokenDataStores).ArrayNum <= (int)uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)
                ((this->TokenDataStores).AllocatorInstance.Data + (ulonglong)uVar6 * 0x10 + 8);
      (**(code **)(*plVar3 + 8))(plVar3,param_1,uVar1,param_3);
    }
    else if (1 < (byte)LogNetToken._0_1_) {
      ::FString::PrintfImpl(&local_28,L"NetToken (Auth:%u TypeId=%u Index=%u)");
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WriteTokenData @ 14429dc10

void __thiscall
UE::Net::FNetTokenStore::WriteTokenData
          (FNetTokenStore *this,FNetSerializationContext *param_1,FNetToken param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> *pTVar7;
  
  uVar6 = (uint)param_2.field0_0x0 & 0xfffff;
  if (uVar6 != 0) {
    pTVar7 = ((this->LocalNetTokenStoreState).Ptr)->TokenInfoArray +
             ((uint)param_2.field0_0x0 >> 0x14 & 7);
    if (pTVar7->ArrayNum <= (int)uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (pTVar7->AllocatorInstance).Data;
    uVar5 = (uint)param_2.field0_0x0 >> 0x14 & 7;
    if ((this->TokenDataStores).ArrayNum <= (int)uVar5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)
              ((this->TokenDataStores).AllocatorInstance.Data + (ulonglong)uVar5 * 0x10 + 8);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(undefined4 *)(pFVar1 + (ulonglong)uVar6 * 4));
  }
  return;
}

// operator() @ 1504b4db0

bool __thiscall
`UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1928611023674147097>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1928611023674147097>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b4e00

bool __thiscall
`UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1928611023674147088>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1928611023674147088>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b4e90

bool __thiscall
`UE::Net::FNetTokenStore::InitRemoteNetTokenStoreState'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1928611023674147073>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1928611023674147073>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b6500

bool __thiscall
`UE::Net::FNetTokenStore::RegisterDataStore'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1928611023674147137>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1928611023674147137>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b6567;
    }
  }
  bVar2 = false;
LAB_1504b6567:
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

// operator() @ 1504b71b0

bool __thiscall
`UE::Net::FNetTokenStore::RegisterDataStore'::__l54::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1928611023674147152>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString(*(FName **)this,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1928611023674147152>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b7249;
    }
  }
  bVar4 = false;
LAB_1504b7249:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

