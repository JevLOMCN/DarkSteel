// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 3

// GetVoiceChatRoomName @ 14ec055f0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
IOnlineSession::GetVoiceChatRoomName
          (IOnlineSession *this,FString *__return_storage_ptr__,int param_1,FName *param_2)

{
  FString local_18;
  
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl
              (&local_18,
               L"[IOnlineSession::GetVoiceChatRoomName] This functionality is not implemented on this OSS."
              );
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// RemovePlayerFromSession @ 14ec105d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IOnlineSession::RemovePlayerFromSession
          (IOnlineSession *this,int param_1,FName param_2,FUniqueNetId *param_3)

{
  FString local_18;
  
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl
              (&local_18,
               L"[IOnlineSession::RemovePlayerFromSession] This functionality is not implemented by default."
              );
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StartMatchmaking @ 14ec12ce0

bool __thiscall
IOnlineSession::StartMatchmaking
          (IOnlineSession *this,TArray<FSessionMatchmakingUser,TSizedDefaultAllocator<32>_> *param_1
          ,FName param_2,FOnlineSessionSettings *param_3,TSharedRef<FOnlineSessionSearch,1> *param_4
          ,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
           *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  int iVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  ForAnyElementType local_78;
  undefined8 local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_70._0_4_ = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  uVar1 = param_1->ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  iVar2 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar12 = pFVar11 + (longlong)iVar2 * 0x60;
  iVar9 = (int)local_70;
  while( true ) {
    iVar6 = iVar9;
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSessionMatchmakingUser_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
      iVar6 = (int)local_70;
    }
    if (pFVar11 == pFVar12) break;
    if (iVar6 == local_70._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_78,(int *)((longlong)&local_70 + 4));
    }
    iVar9 = iVar6 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar9);
    *(undefined8 *)&local_78.Data[(longlong)iVar6 * 0x10].field_0x0 = *(undefined8 *)pFVar11;
    lVar3 = *(longlong *)(pFVar11 + 8);
    *(longlong *)(local_78.Data + (longlong)iVar6 * 0x10 + 8) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    pFVar11 = pFVar11 + 0x60;
  }
  cVar5 = (**(code **)(this->_padding_ + 0x120))(this,&local_78,param_2,param_3,param_4);
  if (cVar5 != '\0') {
    puVar7 = ::operator_new(8);
    puVar10 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar10 = puVar7;
    }
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    pcVar4 = *(code **)(this->_padding_ + 0x128);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar7 = UE::Core::Private::DelegateAllocate(0x48,&local_60);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy__PEAVIOnlineSession__V1_PEAVFDelegateHandle__V__TDelegate___A6AXVFName__AEBUFOnlineError__AEBUFSessionMatchmakingResults___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar7[1] = this;
      *(FName *)(puVar7 + 2) = param_2;
      puVar7[3] = puVar10;
      TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
      ::
      TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
                  *)(puVar7 + 4),param_5);
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[7] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXVFName___N_ZUFDefaultDelegateUserPolicy__PEAVIOnlineSession__V1_PEAVFDelegateHandle__V__TDelegate___A6AXVFName__AEBUFOnlineError__AEBUFSessionMatchmakingResults___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar7[8] = OnOnlineSessionStartMatchmakingBroadcast;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    puVar7 = (undefined8 *)(*pcVar4)(this,local_res10);
    *puVar10 = *puVar7;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)local_78.Data,(int)local_70);
  if ((TSharedRef<FUniqueNetId_const_,1> *)local_78.Data != (TSharedRef<FUniqueNetId_const_,1> *)0x0
     ) {
    FMemory::Free(local_78.Data);
  }
  return (bool)cVar5;
}

