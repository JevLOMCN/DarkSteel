// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// ~FDS_ChatRoomManager @ 14b9d9500

void __thiscall FDS_ChatRoomManager::~FDS_ChatRoomManager(FDS_ChatRoomManager *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->IndexByConversationID).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndexByConversationID).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndexByConversationID);
  *(undefined4 *)&(this->IndexByGroupID).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndexByGroupID).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndexByGroupID);
  *(undefined4 *)&(this->IndexByWhisper).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndexByWhisper).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndexByWhisper);
  *(undefined4 *)&(this->ChatRoomDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChatRoomDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChatRoomDataMap);
  *(undefined4 *)&(this->ChatConversationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChatConversationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddGroupChatRoom @ 14b9df300

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
FDS_ChatRoomManager::AddGroupChatRoom
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ChatConversation,1> *param_1,TSharedPtr<FDS_ChatUserInfo,1> *param_2,
          FDS_ChatGroupInfo *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDS_ChatConversation *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  atomic<int> aVar8;
  int iVar9;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar10;
  TSharedPtr<FDS_ChatRoomData,1> *pTVar11;
  FSharedReferencer<1> FVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  FDS_ChatRoomData *pFVar15;
  FDS_ChatRoomData *this_00;
  FSharedReferencer<1> FVar16;
  uint uVar17;
  TMap<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
  *this_01;
  bool bVar18;
  int local_res18 [4];
  longlong local_88;
  longlong *local_80;
  TMap<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
  *local_78;
  TSharedPtr<FDS_ChatRoomData,1> local_70;
  TSharedPtr<FDS_ChatRoomData,1> local_60;
  FDS_ChatConversation *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  
  if ((param_1->Object == (FDS_ChatConversation *)0x0) ||
     ((param_1->Object->ConversationID).Data.ArrayNum < 2)) {
    __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  local_78 = &this->IndexByGroupID;
  pTVar10 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                    *)local_78,&param_1->Object->GroupID);
  local_60.Object = (FDS_ChatRoomData *)0x0;
  if (pTVar10 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
LAB_14b9df394:
    local_60.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14b9df39b:
    FVar12.ReferenceController = local_60.SharedReferenceCount.ReferenceController;
    pFVar15 = local_60.Object;
    iVar9 = GetEmptySlotIndex(this,Group);
    if (iVar9 == -1) {
      __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14b9df3b4;
    }
    pTVar11 = FindChatRoom(this,&local_70,Group,iVar9);
    if (&local_60 != pTVar11) {
      local_60.Object = pTVar11->Object;
      pTVar11->Object = (FDS_ChatRoomData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_60.SharedReferenceCount,&pTVar11->SharedReferenceCount);
      pFVar15 = local_60.Object;
      FVar12.ReferenceController = local_60.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    bVar18 = pFVar15 == (FDS_ChatRoomData *)0x0;
  }
  else {
    FVar12.ReferenceController = (pTVar10->WeakReferenceCount).ReferenceController;
    local_60.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
    if (FVar12.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14b9df39b;
    aVar3 = (FVar12.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) goto LAB_14b9df394;
      LOCK();
      aVar8 = (FVar12.ReferenceController)->SharedReferenceCount;
      bVar18 = aVar3 == aVar8;
      if (bVar18) {
        (FVar12.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar18);
    if (FVar12.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14b9df39b;
    pFVar15 = pTVar10->Object;
    bVar18 = false;
    local_60.Object = pFVar15;
    if (pFVar15 == (FDS_ChatRoomData *)0x0) goto LAB_14b9df39b;
  }
  this_00 = (FDS_ChatRoomData *)0x0;
  FVar16.ReferenceController = FVar12.ReferenceController;
  if (pFVar15 != (FDS_ChatRoomData *)0x0) {
    if ((bVar18) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FDS_ChatRoomData,1> *)(*pcVar7)();
      return pTVar11;
    }
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar5 = param_1->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50 = (pFVar15->ChatConversation).Object;
    pTStack_48 = (pFVar15->ChatConversation).SharedReferenceCount.ReferenceController;
    (pFVar15->ChatConversation).Object = pFVar5;
    (pFVar15->ChatConversation).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
    this_00 = local_60.Object;
    if ((local_60.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FDS_ChatRoomData,1> *)(*pcVar7)();
      return pTVar11;
    }
    FDS_ChatRoomData::SetGroupOwner(this_00,param_2);
    if ((this_00 == (FDS_ChatRoomData *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FDS_ChatRoomData,1> *)(*pcVar7)();
      return pTVar11;
    }
    this_00->GroupIconID = param_3->GroupIconID;
    this_00->bIsInviteGranted = param_3->bIsInviteGranted;
    if ((this_00 == (FDS_ChatRoomData *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FDS_ChatRoomData,1> *)(*pcVar7)();
      return pTVar11;
    }
    FVar16.ReferenceController = local_60.SharedReferenceCount.ReferenceController;
    if ((this_00->ChattingTabType != None) &&
       (pFVar5 = (this_00->ChatConversation).Object, pFVar5 != (FDS_ChatConversation *)0x0)) {
      local_70.Object =
           (FDS_ChatRoomData *)(this_00->ChatConversation).SharedReferenceCount.ReferenceController;
      if (local_70.Object != (FDS_ChatRoomData *)0x0) {
        LOCK();
        *(int *)&((local_70.Object)->ChatConversation).Object =
             *(int *)&((local_70.Object)->ChatConversation).Object + 1;
        UNLOCK();
      }
      if (1 < (pFVar5->ConversationID).Data.ArrayNum) {
        local_88 = pFVar5->WhisperPlayerUID;
        if (0 < local_88) {
          this_01 = &this->IndexByWhisper;
          uVar17 = (int)((ulonglong)local_88 >> 0x20) * 0x17 + (int)local_88;
          if (*(int *)&(this->IndexByWhisper).field_0x8 !=
              *(int *)&(this->IndexByWhisper).field_0x34) {
            puVar13 = *(undefined1 **)&(this->IndexByWhisper).field_0x40;
            if (puVar13 == (undefined1 *)0x0) {
              puVar13 = &(this->IndexByWhisper).field_0x38;
            }
            iVar9 = *(int *)(puVar13 +
                            (ulonglong)(*(int *)&(this->IndexByWhisper).field_0x48 - 1U & uVar17) *
                            4);
            if (iVar9 != -1) {
              do {
                plVar14 = (longlong *)((longlong)iVar9 * 0x20 + *(longlong *)&this_01->field_0x0);
                if (*plVar14 == local_88) {
                  if (plVar14 != (longlong *)0x0) goto LAB_14b9df63a;
                  break;
                }
                iVar9 = (int)plVar14[3];
              } while (iVar9 != -1);
            }
          }
          local_80 = &local_88;
          TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
                    ((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                      *)this_01,(uint)local_res18,
                     (TKeyInitializer<__int64_const_&> *)(ulonglong)uVar17,(bool *)&local_80);
          plVar14 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)&this_01->field_0x0)
          ;
LAB_14b9df63a:
          plVar14[1] = (longlong)this_00;
          if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)plVar14[2]) {
            if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar16.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)((int)(FVar16.ReferenceController)->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar6 = (longlong *)plVar14[2];
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
            plVar14[2] = (longlong)FVar16.ReferenceController;
          }
        }
        iVar9 = (pFVar5->GroupID).Data.ArrayNum;
        if (1 < iVar9) {
          uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>
                             (iVar9 + -1,(wchar_t *)(pFVar5->GroupID).Data.AllocatorInstance.Data);
          pTVar10 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                    ::FindOrAddImpl<FString_const_&>
                              ((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                                *)local_78,uVar17,&pFVar5->GroupID);
          pTVar10->Object = this_00;
          if (FVar16.ReferenceController != (pTVar10->WeakReferenceCount).ReferenceController) {
            if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar16.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)((int)(FVar16.ReferenceController)->WeakReferenceCount + 1);
              UNLOCK();
            }
            pTVar4 = (pTVar10->WeakReferenceCount).ReferenceController;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &pTVar4->WeakReferenceCount;
              aVar3 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
              }
            }
            (pTVar10->WeakReferenceCount).ReferenceController = FVar16.ReferenceController;
          }
        }
        iVar9 = (pFVar5->ConversationID).Data.ArrayNum;
        if (1 < iVar9) {
          uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>
                             (iVar9 + -1,
                              (wchar_t *)(pFVar5->ConversationID).Data.AllocatorInstance.Data);
          pTVar10 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                    ::FindOrAddImpl<FString_const_&>
                              ((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                                *)&this->IndexByConversationID,uVar17,&pFVar5->ConversationID);
          pTVar10->Object = this_00;
          if (FVar16.ReferenceController != (pTVar10->WeakReferenceCount).ReferenceController) {
            if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar16.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)((int)(FVar16.ReferenceController)->WeakReferenceCount + 1);
              UNLOCK();
            }
            pTVar4 = (pTVar10->WeakReferenceCount).ReferenceController;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &pTVar4->WeakReferenceCount;
              aVar3 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
              }
            }
            (pTVar10->WeakReferenceCount).ReferenceController = FVar16.ReferenceController;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_70.Object);
      FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Object = this_00;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           FVar16.ReferenceController;
      goto LAB_14b9df3b4;
    }
  }
  __return_storage_ptr__->Object = this_00;
  FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar16.ReferenceController;
LAB_14b9df3b4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  return __return_storage_ptr__;
}

// AddOrUpdateChatConversation @ 14b9e0290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FDS_ChatConversation,1> * __thiscall
FDS_ChatRoomManager::AddOrUpdateChatConversation
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatConversation,1> *__return_storage_ptr__,
          FDS_ChatConversation *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FDS_ChatConversation,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDS_ChatConversation *pFVar8;
  TSharedPtr<FDS_ChatConversation,1> local_18;
  
  iVar1 = (param_1->ConversationID).Data.ArrayNum;
  if (iVar1 < 2) {
    __return_storage_ptr__->Object = (FDS_ChatConversation *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>
                    (iVar1 + -1,(wchar_t *)(param_1->ConversationID).Data.AllocatorInstance.Data);
  pTVar6 = TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
                       *)this,uVar5,&param_1->ConversationID);
  if (pTVar6->Object == (FDS_ChatConversation *)0x0) {
    pTVar7 = ::operator_new(0x68);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_18.Object = ___xmm_00000000000000000000000000000010;
      pFVar8 = (FDS_ChatConversation *)&DAT_00000010;
      local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFDS_ChatConversation___00_SharedPointerInternals__6B_
      ;
      ::FString::FString((FString *)(pTVar7 + 1),&param_1->ConversationID);
      ::FString::FString((FString *)(pTVar7 + 2),&param_1->GroupID);
      ::FString::FString((FString *)(pTVar7 + 3),&param_1->WhisperUserID);
      pTVar7[4]._padding_ = param_1->WhisperPlayerUID;
      ::FString::FString((FString *)&pTVar7[4].SharedReferenceCount,&param_1->ShowName);
      uVar3 = *(undefined4 *)((longlong)&param_1->OrderKey + 4);
      pTVar7[5].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_1->OrderKey;
      pTVar7[5].WeakReferenceCount = (atomic<int>)uVar3;
      *(int *)&pTVar7[6]._padding_ = param_1->UnreadCount;
      pFVar8 = (FDS_ChatConversation *)(pTVar7 + 1);
      *(bool *)((longlong)&pTVar7[6]._padding_ + 4) = param_1->bIsBookmark;
      if (pFVar8 == (FDS_ChatConversation *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<FDS_ChatConversation,1> *)(*pcVar2)();
          return pTVar6;
        }
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      local_18.SharedReferenceCount.ReferenceController = pTVar7;
      local_18.Object = pFVar8;
    }
    if (pTVar6 != &local_18) {
      pTVar6->Object = pFVar8;
      local_18.Object = (FDS_ChatConversation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&pTVar6->SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  else {
    FDS_ChatConversation::operator=(pTVar6->Object,param_1);
  }
  __return_storage_ptr__->Object = pTVar6->Object;
  pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// AddWhisperChatRoom @ 14b9e0f20

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
FDS_ChatRoomManager::AddWhisperChatRoom
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ChatConversation,1> *param_1,TSharedPtr<FDS_ChatUserInfo,1> *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDS_ChatConversation *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  atomic<int> aVar8;
  int iVar9;
  FDS_ChatUserInfo *pFVar10;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar11;
  TSharedPtr<FDS_ChatRoomData,1> *pTVar12;
  FSharedReferencer<1> FVar13;
  undefined1 *puVar14;
  FDS_ChatRoomData *pFVar15;
  FDS_ChatRoomData *pFVar16;
  FSharedReferencer<1> FVar17;
  uint uVar18;
  longlong *plVar19;
  bool bVar20;
  int local_res18 [4];
  longlong local_88;
  longlong *local_80;
  TSharedPtr<FDS_ChatRoomData,1> local_78;
  TSharedPtr<FDS_ChatRoomData,1> local_68;
  FDS_ChatConversation *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FDS_ChatUserInfo *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  if (((param_1->Object == (FDS_ChatConversation *)0x0) ||
      ((param_1->Object->ConversationID).Data.ArrayNum < 2)) ||
     (param_2->Object == (FDS_ChatUserInfo *)0x0)) {
    __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pFVar10 = TSharedPtr<FDS_ChatUserInfo,1>::operator->(param_2);
  pTVar11 = TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Find((TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                    *)&this->IndexByWhisper,pFVar10->PlayerUID);
  local_68.Object = (FDS_ChatRoomData *)0x0;
  if (pTVar11 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
LAB_14b9e0fc3:
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14b9e0fca:
    FVar13.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    pFVar15 = local_68.Object;
    iVar9 = GetEmptySlotIndex(this,Whisper);
    if ((iVar9 == -1) && (iVar9 = FindOldestUnbookmarkedRoom(this,Whisper), iVar9 == -1)) {
      __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14b9e135a;
    }
    pTVar12 = FindChatRoom(this,&local_78,Whisper,iVar9);
    if (&local_68 != pTVar12) {
      local_68.Object = pTVar12->Object;
      pTVar12->Object = (FDS_ChatRoomData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_68.SharedReferenceCount,&pTVar12->SharedReferenceCount);
      pFVar15 = local_68.Object;
      FVar13.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    bVar20 = pFVar15 == (FDS_ChatRoomData *)0x0;
  }
  else {
    FVar13.ReferenceController = (pTVar11->WeakReferenceCount).ReferenceController;
    local_68.SharedReferenceCount.ReferenceController = FVar13.ReferenceController;
    if (FVar13.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14b9e0fca;
    aVar3 = (FVar13.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) goto LAB_14b9e0fc3;
      LOCK();
      aVar8 = (FVar13.ReferenceController)->SharedReferenceCount;
      bVar20 = aVar3 == aVar8;
      if (bVar20) {
        (FVar13.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar20);
    if (FVar13.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14b9e0fca;
    pFVar15 = pTVar11->Object;
    bVar20 = false;
    local_68.Object = pFVar15;
    if (pFVar15 == (FDS_ChatRoomData *)0x0) goto LAB_14b9e0fca;
  }
  pFVar16 = (FDS_ChatRoomData *)0x0;
  FVar17.ReferenceController = FVar13.ReferenceController;
  if (pFVar15 != (FDS_ChatRoomData *)0x0) {
    if ((bVar20) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FDS_ChatRoomData,1> *)(*pcVar7)();
      return pTVar12;
    }
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar5 = param_1->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = (pFVar15->ChatConversation).Object;
    pTStack_50 = (pFVar15->ChatConversation).SharedReferenceCount.ReferenceController;
    (pFVar15->ChatConversation).Object = pFVar5;
    (pFVar15->ChatConversation).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
    pFVar15 = local_68.Object;
    if ((local_68.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FDS_ChatRoomData,1> *)(*pcVar7)();
      return pTVar12;
    }
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar10 = param_2->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = (pFVar15->Whisper).Object;
    pTStack_40 = (pFVar15->Whisper).SharedReferenceCount.ReferenceController;
    (pFVar15->Whisper).Object = pFVar10;
    (pFVar15->Whisper).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
    pFVar16 = local_68.Object;
    FVar17.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_68.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FDS_ChatRoomData,1> *)(*pcVar7)();
        return pTVar12;
      }
      FVar17.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
      if ((pFVar16->ChattingTabType != None) &&
         (pFVar5 = (pFVar16->ChatConversation).Object, pFVar5 != (FDS_ChatConversation *)0x0)) {
        local_78.Object =
             (FDS_ChatRoomData *)
             (pFVar16->ChatConversation).SharedReferenceCount.ReferenceController;
        if (local_78.Object != (FDS_ChatRoomData *)0x0) {
          LOCK();
          *(int *)&((local_78.Object)->ChatConversation).Object =
               *(int *)&((local_78.Object)->ChatConversation).Object + 1;
          UNLOCK();
        }
        if (1 < (pFVar5->ConversationID).Data.ArrayNum) {
          local_88 = pFVar5->WhisperPlayerUID;
          if (0 < local_88) {
            uVar18 = (int)((ulonglong)local_88 >> 0x20) * 0x17 + (int)local_88;
            if (*(int *)&(this->IndexByWhisper).field_0x8 !=
                *(int *)&(this->IndexByWhisper).field_0x34) {
              puVar14 = *(undefined1 **)&(this->IndexByWhisper).field_0x40;
              if (puVar14 == (undefined1 *)0x0) {
                puVar14 = &(this->IndexByWhisper).field_0x38;
              }
              iVar9 = *(int *)(puVar14 +
                              (ulonglong)(*(int *)&(this->IndexByWhisper).field_0x48 - 1U & uVar18)
                              * 4);
              if (iVar9 != -1) {
                do {
                  plVar19 = (longlong *)
                            ((longlong)iVar9 * 0x20 + *(longlong *)&(this->IndexByWhisper).field_0x0
                            );
                  if (*plVar19 == local_88) {
                    if (plVar19 != (longlong *)0x0) goto LAB_14b9e1242;
                    break;
                  }
                  iVar9 = (int)plVar19[3];
                } while (iVar9 != -1);
              }
            }
            local_80 = &local_88;
            TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
                      ((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                        *)&this->IndexByWhisper,(uint)local_res18,
                       (TKeyInitializer<__int64_const_&> *)(ulonglong)uVar18,(bool *)&local_80);
            plVar19 = (longlong *)
                      ((longlong)local_res18[0] * 0x20 + *(longlong *)&this->IndexByWhisper);
LAB_14b9e1242:
            plVar19[1] = (longlong)pFVar16;
            if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)plVar19[2]) {
              if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar17.ReferenceController)->WeakReferenceCount =
                     (atomic<int>)((int)(FVar17.ReferenceController)->WeakReferenceCount + 1);
                UNLOCK();
              }
              plVar6 = (longlong *)plVar19[2];
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
              plVar19[2] = (longlong)FVar17.ReferenceController;
            }
          }
          iVar9 = (pFVar5->GroupID).Data.ArrayNum;
          if (1 < iVar9) {
            uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>
                               (iVar9 + -1,(wchar_t *)(pFVar5->GroupID).Data.AllocatorInstance.Data)
            ;
            pTVar11 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      ::FindOrAddImpl<FString_const_&>
                                ((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                                  *)&this->IndexByGroupID,uVar18,&pFVar5->GroupID);
            pTVar11->Object = pFVar16;
            if (FVar17.ReferenceController != (pTVar11->WeakReferenceCount).ReferenceController) {
              if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar17.ReferenceController)->WeakReferenceCount =
                     (atomic<int>)((int)(FVar17.ReferenceController)->WeakReferenceCount + 1);
                UNLOCK();
              }
              pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar2 = &pTVar4->WeakReferenceCount;
                aVar3 = *paVar2;
                *paVar2 = (atomic<int>)((int)*paVar2 + -1);
                UNLOCK();
                if (aVar3 == (atomic<int>)0x1) {
                  (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
                }
              }
              (pTVar11->WeakReferenceCount).ReferenceController = FVar17.ReferenceController;
            }
          }
          iVar9 = (pFVar5->ConversationID).Data.ArrayNum;
          if (1 < iVar9) {
            uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>
                               (iVar9 + -1,
                                (wchar_t *)(pFVar5->ConversationID).Data.AllocatorInstance.Data);
            pTVar11 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      ::FindOrAddImpl<FString_const_&>
                                ((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                                  *)&this->IndexByConversationID,uVar18,&pFVar5->ConversationID);
            pTVar11->Object = pFVar16;
            if (FVar17.ReferenceController != (pTVar11->WeakReferenceCount).ReferenceController) {
              if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar17.ReferenceController)->WeakReferenceCount =
                     (atomic<int>)((int)(FVar17.ReferenceController)->WeakReferenceCount + 1);
                UNLOCK();
              }
              pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar2 = &pTVar4->WeakReferenceCount;
                aVar3 = *paVar2;
                *paVar2 = (atomic<int>)((int)*paVar2 + -1);
                UNLOCK();
                if (aVar3 == (atomic<int>)0x1) {
                  (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
                }
              }
              (pTVar11->WeakReferenceCount).ReferenceController = FVar17.ReferenceController;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_78.Object);
      }
    }
  }
  __return_storage_ptr__->Object = pFVar16;
  FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar17.ReferenceController;
LAB_14b9e135a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  return __return_storage_ptr__;
}

// Clear @ 14b9e2d60

void __thiscall FDS_ChatRoomManager::Clear(FDS_ChatRoomManager *this)

{
  undefined1 *puVar1;
  TMap<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  TMap<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
  *pTVar4;
  
  bVar3 = 1 < *(int *)&(this->ChatConversationMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->ChatConversationMap).field_0x8);
  puVar1 = &(this->ChatConversationMap).field_0xc;
  *(undefined4 *)&(this->ChatConversationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ChatConversationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChatConversationMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ChatConversationMap).field_0x2c;
  *(undefined4 *)&(this->ChatConversationMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ChatConversationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChatConversationMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ChatConversationMap).field_0x48 = 1;
    TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
              *)this);
  }
  bVar3 = 1 < *(int *)&(this->ChatRoomDataMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->ChatRoomDataMap);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->ChatRoomDataMap,0,*(int *)&(this->ChatRoomDataMap).field_0x8);
  puVar1 = &(this->ChatRoomDataMap).field_0xc;
  *(undefined4 *)&(this->ChatRoomDataMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->ChatRoomDataMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ChatRoomDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChatRoomDataMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ChatRoomDataMap).field_0x2c;
  *(undefined4 *)&(this->ChatRoomDataMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ChatRoomDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChatRoomDataMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ChatRoomDataMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(&this->ChatRoomDataMap);
  }
  this_00 = &this->IndexByWhisper;
  bVar3 = 1 < *(int *)&(this->IndexByWhisper).field_0x48;
  if (!bVar3) {
    TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->IndexByWhisper).field_0x8);
  puVar1 = &(this->IndexByWhisper).field_0xc;
  *(undefined4 *)&(this->IndexByWhisper).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->IndexByWhisper).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndexByWhisper).field_0x34 = 0;
  iVar2 = *(int *)&(this->IndexByWhisper).field_0x2c;
  *(undefined4 *)&(this->IndexByWhisper).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->IndexByWhisper).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->IndexByWhisper).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->IndexByWhisper).field_0x48 = 1;
    TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  pTVar4 = &this->IndexByGroupID;
  bVar3 = 1 < *(int *)&(this->IndexByGroupID).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                      *)pTVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar4,0,*(int *)&(this->IndexByGroupID).field_0x8);
  puVar1 = &(this->IndexByGroupID).field_0xc;
  *(undefined4 *)&(this->IndexByGroupID).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)pTVar4,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->IndexByGroupID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndexByGroupID).field_0x34 = 0;
  iVar2 = *(int *)&(this->IndexByGroupID).field_0x2c;
  *(undefined4 *)&(this->IndexByGroupID).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->IndexByGroupID).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->IndexByGroupID).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->IndexByGroupID).field_0x48 = 1;
    TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
              *)pTVar4);
  }
  pTVar4 = &this->IndexByConversationID;
  bVar3 = 1 < *(int *)&(this->IndexByConversationID).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                      *)pTVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar4,0,*(int *)&(this->IndexByConversationID).field_0x8);
  puVar1 = &(this->IndexByConversationID).field_0xc;
  *(undefined4 *)&(this->IndexByConversationID).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)pTVar4,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->IndexByConversationID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndexByConversationID).field_0x34 = 0;
  iVar2 = *(int *)&(this->IndexByConversationID).field_0x2c;
  *(undefined4 *)&(this->IndexByConversationID).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->IndexByConversationID).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->IndexByConversationID).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->IndexByConversationID).field_0x48 = 1;
    TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
              *)pTVar4);
  }
  return;
}

// FindChatConversation @ 14b9ea420

TSharedPtr<FDS_ChatConversation,1> * __thiscall
FDS_ChatRoomManager::FindChatConversation
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatConversation,1> *__return_storage_ptr__,
          FString *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  iVar4 = TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
                      *)this,uVar3,param_1);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&this->ChatConversationMap + (longlong)iVar4 * 0x28;
    puVar6 = (undefined8 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 != (undefined8 *)0x0) {
      __return_storage_ptr__->Object = (FDS_ChatConversation *)*puVar6;
      pTVar2 = (TReferenceControllerBase<1> *)puVar6[1];
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FDS_ChatConversation *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindChatConversationByGroupID @ 14b9ea4d0

/* WARNING: Type propagation algorithm not settling */

TSharedPtr<FDS_ChatConversation,1> * __thiscall
FDS_ChatRoomManager::FindChatConversationByGroupID
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatConversation,1> *__return_storage_ptr__,
          FString *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  FDS_ChatConversation *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FDS_ChatRoomManager *pFVar8;
  bool bVar9;
  int iVar10;
  TSharedPtr<FDS_ChatConversation,1> *pTVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_c0;
  FDS_ChatConversation *local_b0;
  TReferenceControllerBase<1> *local_a8;
  FDS_ChatRoomManager *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  FDS_ChatRoomManager *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if ((param_1->Data).ArrayNum < 2) {
    __return_storage_ptr__->Object = (FDS_ChatConversation *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  iVar10 = *(int *)&(this->ChatConversationMap).field_0x28;
  puVar1 = &(this->ChatConversationMap).field_0x10;
  iStack_98 = 0;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->ChatConversationMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14b9ea5b1;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_94 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_84 = local_80 + -1 + local_res20;
    if (iVar10 < iStack_84) {
      iStack_84 = iVar10;
    }
  }
LAB_14b9ea5b1:
  uVar15 = *(uint *)&(this->ChatConversationMap).field_0x28;
  iStack_78 = *(int *)&(this->ChatConversationMap).field_0x8 -
              *(int *)&(this->ChatConversationMap).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  uStack_88 = 0xffffffff;
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = this;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = this;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FDS_ChatConversation,1> *)(*pcVar7)();
    return pTVar11;
  }
  uVar4 = *(uint *)&(this->ChatConversationMap).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->ChatConversationMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14b9ea6b0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14b9ea6b0:
  do {
    pFVar8 = local_70;
    if (*(int *)&(local_70->ChatConversationMap).field_0x8 -
        *(int *)&(local_70->ChatConversationMap).field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_68.CurrentBitIndex == uVar15) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar8 == this)) {
      __return_storage_ptr__->Object = (FDS_ChatConversation *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pFVar2 = (FString *)
             (*(longlong *)&pFVar8->ChatConversationMap + (longlong)TStack_68.CurrentBitIndex * 0x28
             );
    ::FString::FString(&local_c0,pFVar2);
    pFVar5 = (FDS_ChatConversation *)pFVar2[1].Data.AllocatorInstance.Data;
    pTVar6 = *(TReferenceControllerBase<1> **)&pFVar2[1].Data.ArrayNum;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    local_b0 = pFVar5;
    local_a8 = pTVar6;
    if (pFVar5 != (FDS_ChatConversation *)0x0) {
      iVar10 = (pFVar5->GroupID).Data.ArrayNum;
      iVar13 = (param_1->Data).ArrayNum;
      if (iVar10 == iVar13) {
        if (iVar10 < 2) {
LAB_14b9ea7a1:
          __return_storage_ptr__->Object = pFVar5;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          return __return_storage_ptr__;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar5->GroupID).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar9 = iVar10 == 0;
      }
      else {
        bVar9 = iVar10 + iVar13 == 1;
      }
      if (bVar9) goto LAB_14b9ea7a1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// FindChatRoom @ 14b9ea800

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
FDS_ChatRoomManager::FindChatRoom
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          EDS_ChattingTabType param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatRoomData *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined4 uVar6;
  TSharedPtr<FDS_ChatRoomData,1> *pTVar7;
  EDS_ChattingTabType *pEVar8;
  undefined1 *puVar9;
  EDS_ChattingTabType *pEVar10;
  
  __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (*(int *)&(this->ChatRoomDataMap).field_0x8 != *(int *)&(this->ChatRoomDataMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ChatRoomDataMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ChatRoomDataMap).field_0x38;
    }
    uVar6 = *(undefined4 *)
             (puVar9 + ((ulonglong)(*(int *)&(this->ChatRoomDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar6 != 0xffffffff) {
      while (pEVar8 = (EDS_ChattingTabType *)
                      ((longlong)(int)uVar6 * 0x20 + *(longlong *)&this->ChatRoomDataMap),
            *pEVar8 != param_1) {
        uVar6 = *(undefined4 *)(pEVar8 + 0x18);
        if (uVar6 == 0xffffffff) {
          return __return_storage_ptr__;
        }
      }
      pEVar10 = pEVar8 + 8;
      if (pEVar8 == (EDS_ChattingTabType *)0x0) {
        pEVar10 = (EDS_ChattingTabType *)0x0;
      }
      if (((pEVar10 != (EDS_ChattingTabType *)0x0) && (-1 < param_2)) &&
         (param_2 < (int)*(undefined4 *)(pEVar10 + 8))) {
        if ((param_2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FDS_ChatRoomData,1> *)(*pcVar3)();
          return pTVar7;
        }
        pTVar1 = *(TReferenceControllerBase<1> **)
                  (*(undefined8 *)pEVar10 + Guild + (longlong)param_2 * 0x10);
        pFVar2 = *(FDS_ChatRoomData **)(*(undefined8 *)pEVar10 + (longlong)param_2 * 0x10);
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
        __return_storage_ptr__->Object = pFVar2;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
    }
  }
  return __return_storage_ptr__;
}

// FindChatRoomByConversationID @ 14b9ea930

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
FDS_ChatRoomManager::FindChatRoomByConversationID
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar4;
  bool bVar5;
  
  pTVar4 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
           ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                   *)&this->IndexByConversationID,param_1);
  __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
  if (pTVar4 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1 = (pTVar4->WeakReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar5 = aVar2 == aVar3;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar5);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pTVar4->Object;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// FindChatRoomByGroupID @ 14b9ea9b0

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
FDS_ChatRoomManager::FindChatRoomByGroupID
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar4;
  bool bVar5;
  
  pTVar4 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
           ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                   *)&this->IndexByGroupID,param_1);
  __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
  if (pTVar4 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1 = (pTVar4->WeakReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar5 = aVar2 == aVar3;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar5);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pTVar4->Object;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// FindChatRoomByWhisper @ 14b9eaa30

/* WARNING: Type propagation algorithm not settling */

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
FDS_ChatRoomManager::FindChatRoomByWhisper
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          FString *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatRoomData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDS_ChatUserInfo *pFVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  
  if (*(int *)&(this->ChatRoomDataMap).field_0x8 != *(int *)&(this->ChatRoomDataMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ChatRoomDataMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ChatRoomDataMap).field_0x38;
    }
    iVar7 = *(int *)(puVar10 + (ulonglong)(*(int *)&(this->ChatRoomDataMap).field_0x48 - 1U & 6) * 4
                    );
    if (iVar7 != -1) {
      do {
        pcVar8 = (char *)((longlong)iVar7 * 0x20 + *(longlong *)&this->ChatRoomDataMap);
        if (*pcVar8 == '\x06') {
          plVar12 = (longlong *)(pcVar8 + 8);
          if (pcVar8 == (char *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          if (plVar12 != (longlong *)0x0) {
            lVar6 = plVar12[1];
            plVar9 = (longlong *)*plVar12;
            plVar11 = plVar9 + (longlong)(int)lVar6 * 2;
            goto LAB_14b9eaad2;
          }
          break;
        }
        iVar7 = *(int *)(pcVar8 + 0x18);
      } while (iVar7 != -1);
    }
  }
LAB_14b9eab9a:
  __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
LAB_14b9eaad2:
  if ((int)plVar12[1] != (int)lVar6) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<TSharedPtr<FDS_ChatRoomData,1>_const_,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if (plVar9 == plVar11) goto LAB_14b9eab9a;
  pTVar2 = (TReferenceControllerBase<1> *)plVar9[1];
  pFVar3 = (FDS_ChatRoomData *)*plVar9;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar3 != (FDS_ChatRoomData *)0x0) && (pFVar3->ChattingTabType != None)) &&
     ((pFVar3->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
    pTVar4 = (pFVar3->Whisper).SharedReferenceCount.ReferenceController;
    pFVar5 = (pFVar3->Whisper).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar5 != (FDS_ChatUserInfo *)0x0) {
      iVar7 = (pFVar5->Nickname).Data.ArrayNum;
      iVar1 = (param_1->Data).ArrayNum;
      if (iVar7 == iVar1) {
        if (iVar7 < 2) {
LAB_14b9eab76:
          __return_storage_ptr__->Object = pFVar3;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          return __return_storage_ptr__;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar5->Nickname).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar13 = iVar7 == 0;
      }
      else {
        bVar13 = iVar7 + iVar1 == 1;
      }
      if (bVar13) goto LAB_14b9eab76;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar9 = plVar9 + 2;
  goto LAB_14b9eaad2;
}

// FindChatRoomByWhisper @ 14b9eabc0

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
FDS_ChatRoomManager::FindChatRoomByWhisper
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          long64 param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar4;
  bool bVar5;
  
  pTVar4 = TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
           ::Find((TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                   *)&this->IndexByWhisper,param_1);
  __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
  if (pTVar4 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1 = (pTVar4->WeakReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar5 = aVar2 == aVar3;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar5);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pTVar4->Object;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// FindOldestUnbookmarkedRoom @ 14b9eb540

int __thiscall
FDS_ChatRoomManager::FindOldestUnbookmarkedRoom
          (FDS_ChatRoomManager *this,EDS_ChattingTabType param_1)

{
  char *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  EDS_ChattingTabType *pEVar10;
  uint uVar11;
  EDS_ChattingTabType *pEVar12;
  ulonglong uVar13;
  EDS_ChattingTabType *pEVar14;
  undefined1 *puVar15;
  EDS_ChattingTabType *pEVar16;
  
  if (*(int *)&(this->ChatRoomDataMap).field_0x8 != *(int *)&(this->ChatRoomDataMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->ChatRoomDataMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->ChatRoomDataMap).field_0x38;
    }
    uVar7 = *(undefined4 *)
             (puVar15 +
             ((ulonglong)(*(int *)&(this->ChatRoomDataMap).field_0x48 - 1) & (ulonglong)param_1) * 4
             );
    if (uVar7 != 0xffffffff) {
      do {
        pEVar10 = (EDS_ChattingTabType *)
                  ((longlong)(int)uVar7 * 0x20 + *(longlong *)&this->ChatRoomDataMap);
        if (*pEVar10 == param_1) {
          pEVar12 = (EDS_ChattingTabType *)0x0;
          pEVar14 = pEVar10 + 8;
          if (pEVar10 == (EDS_ChattingTabType *)0x0) {
            pEVar14 = pEVar12;
          }
          if (pEVar14 == (EDS_ChattingTabType *)0x0) {
            return -1;
          }
          uVar7 = *(undefined4 *)(pEVar14 + 8);
          pEVar10 = (EDS_ChattingTabType *)0xffffffffffffffff;
          iVar9 = -1;
          uVar13 = 0xffffffffffffffff;
          pEVar16 = pEVar12;
          if (0 < (int)uVar7) {
            do {
              uVar11 = (uint)pEVar12;
              uVar8 = 0;
              if ((int)uVar11 < (int)uVar7) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                iVar9 = (*pcVar5)();
                return iVar9;
              }
              pcVar1 = *(char **)(pEVar16 + *(undefined8 *)pEVar14);
              if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (*(longlong *)(pcVar1 + 8) != 0)
                 ) {
                pTVar2 = *(TReferenceControllerBase<1> **)(pcVar1 + 0x10);
                lVar3 = *(longlong *)(pcVar1 + 8);
                if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar2->SharedReferenceCount =
                       (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((*(char *)(lVar3 + 0x54) != '\x01') &&
                   (uVar4 = *(ulonglong *)(lVar3 + 0x48), uVar4 < uVar13)) {
                  uVar13 = uVar4;
                  pEVar10 = pEVar12;
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
              }
              iVar9 = (int)pEVar10;
              uVar7 = *(undefined4 *)(pEVar14 + 8);
              pEVar12 = (EDS_ChattingTabType *)(ulonglong)(uVar11 + 1);
              pEVar16 = pEVar16 + 0x10;
            } while ((int)(uVar11 + 1) < (int)uVar7);
          }
          return iVar9;
        }
        uVar7 = *(undefined4 *)(pEVar10 + 0x18);
      } while (uVar7 != 0xffffffff);
    }
  }
  return -1;
}

// GetChatRoomCount @ 14b9ed510

int __thiscall
FDS_ChatRoomManager::GetChatRoomCount(FDS_ChatRoomManager *this,EDS_ChattingTabType param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  EDS_ChattingTabType *pEVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  EDS_ChattingTabType *pEVar6;
  EDS_ChattingTabType *pEVar7;
  undefined1 *puVar8;
  undefined1 local_res10 [8];
  
  if (*(int *)&(this->ChatRoomDataMap).field_0x8 != *(int *)&(this->ChatRoomDataMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ChatRoomDataMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ChatRoomDataMap).field_0x38;
    }
    uVar2 = *(undefined4 *)
             (puVar8 + ((ulonglong)(*(int *)&(this->ChatRoomDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pEVar3 = (EDS_ChattingTabType *)
                 ((longlong)(int)uVar2 * 0x20 + *(longlong *)&this->ChatRoomDataMap);
        if (*pEVar3 == param_1) {
          pEVar7 = (EDS_ChattingTabType *)0x0;
          pEVar6 = pEVar3 + 8;
          if (pEVar3 == (EDS_ChattingTabType *)0x0) {
            pEVar6 = pEVar7;
          }
          if (pEVar6 == (EDS_ChattingTabType *)0x0) {
            return 0;
          }
          puVar4 = *(undefined8 **)pEVar6;
          uVar2 = *(undefined4 *)(pEVar6 + 8);
          puVar5 = puVar4 + (longlong)(int)uVar2 * 2;
          while( true ) {
            if (*(undefined4 *)(pEVar6 + 8) != uVar2) {
              `TCheckedPointerIterator<TSharedPtr<FDS_ChatRoomData,1>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res10);
            }
            if (puVar4 == puVar5) break;
            pcVar1 = (char *)*puVar4;
            if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (*(longlong *)(pcVar1 + 8) != 0))
            {
              pEVar7 = (EDS_ChattingTabType *)(ulonglong)((int)pEVar7 + 1);
            }
            puVar4 = puVar4 + 2;
          }
          return (int)pEVar7;
        }
        uVar2 = *(undefined4 *)(pEVar3 + 0x18);
      } while (uVar2 != 0xffffffff);
    }
  }
  return 0;
}

// GetEmptySlotIndex @ 14b9eff40

int __thiscall
FDS_ChatRoomManager::GetEmptySlotIndex(FDS_ChatRoomManager *this,EDS_ChattingTabType param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  EDS_ChattingTabType *pEVar7;
  uint uVar8;
  EDS_ChattingTabType *pEVar9;
  EDS_ChattingTabType *pEVar10;
  undefined1 *puVar11;
  EDS_ChattingTabType *pEVar12;
  
  if (*(int *)&(this->ChatRoomDataMap).field_0x8 != *(int *)&(this->ChatRoomDataMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ChatRoomDataMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ChatRoomDataMap).field_0x38;
    }
    uVar4 = *(undefined4 *)
             (puVar11 +
             ((ulonglong)(*(int *)&(this->ChatRoomDataMap).field_0x48 - 1) & (ulonglong)param_1) * 4
             );
    if (uVar4 != 0xffffffff) {
      do {
        pEVar7 = (EDS_ChattingTabType *)
                 ((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->ChatRoomDataMap);
        if (*pEVar7 == param_1) {
          pEVar9 = (EDS_ChattingTabType *)0x0;
          pEVar12 = pEVar7 + 8;
          if (pEVar7 == (EDS_ChattingTabType *)0x0) {
            pEVar12 = pEVar9;
          }
          if (pEVar12 == (EDS_ChattingTabType *)0x0) {
            return -1;
          }
          uVar4 = *(undefined4 *)(pEVar12 + 8);
          pEVar7 = pEVar9;
          pEVar10 = pEVar9;
          if ((int)uVar4 < 1) {
            return -1;
          }
          do {
            uVar8 = (uint)pEVar9;
            uVar5 = 0;
            if ((int)uVar8 < (int)*(undefined4 *)(pEVar12 + 8)) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            pcVar1 = *(char **)(pEVar7 + *(undefined8 *)pEVar12);
            if (pcVar1 != (char *)0x0) {
              if (*pcVar1 == '\0') {
                return uVar8;
              }
              if (*(longlong *)(pcVar1 + 8) == 0) {
                return uVar8;
              }
            }
            pEVar9 = (EDS_ChattingTabType *)(ulonglong)(uVar8 + 1);
            pEVar10 = pEVar10 + 1;
            pEVar7 = pEVar7 + 0x10;
            if ((longlong)(int)uVar4 <= (longlong)pEVar10) {
              return -1;
            }
          } while( true );
        }
        uVar4 = *(undefined4 *)(pEVar7 + 0x18);
      } while (uVar4 != 0xffffffff);
    }
  }
  return -1;
}

// GetMaxChatRoomCount @ 14b9f0c00

int __thiscall
FDS_ChatRoomManager::GetMaxChatRoomCount(FDS_ChatRoomManager *this,EDS_ChattingTabType param_1)

{
  undefined4 uVar1;
  EDS_ChattingTabType *pEVar2;
  EDS_ChattingTabType *pEVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ChatRoomDataMap).field_0x8 != *(int *)&(this->ChatRoomDataMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ChatRoomDataMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ChatRoomDataMap).field_0x38;
    }
    uVar1 = *(undefined4 *)
             (puVar4 + ((ulonglong)(*(int *)&(this->ChatRoomDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EDS_ChattingTabType *)
                 ((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->ChatRoomDataMap);
        if (*pEVar3 == param_1) {
          pEVar2 = pEVar3 + 8;
          if (pEVar3 == (EDS_ChattingTabType *)0x0) {
            pEVar2 = (EDS_ChattingTabType *)0x0;
          }
          if (pEVar2 == (EDS_ChattingTabType *)0x0) {
            return 0;
          }
          return *(undefined4 *)(pEVar2 + 8);
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x18);
      } while (uVar1 != 0xffffffff);
    }
  }
  return 0;
}

// HasAvailableSlot @ 14b9f2e40

bool __thiscall
FDS_ChatRoomManager::HasAvailableSlot(FDS_ChatRoomManager *this,EDS_ChattingTabType param_1)

{
  int iVar1;
  
  iVar1 = GetEmptySlotIndex(this,param_1);
  return iVar1 != -1;
}

// Init @ 14b9f3f30

void __thiscall FDS_ChatRoomManager::Init(FDS_ChatRoomManager *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  this->MaxWhisperRooms = param_1;
  this->MaxGroupRooms = param_2;
  if (param_1 < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_166746886881935351>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChatRoomManager.cpp"
                       ,9,"MaxWhisperRooms > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->MaxGroupRooms < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_166746886881935350>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChatRoomManager.cpp"
                       ,10,"MaxGroupRooms > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  InitChatRoomSlots(this,Whisper,this->MaxWhisperRooms);
  InitChatRoomSlots(this,Group,this->MaxGroupRooms);
  InitChatRoomSlots(this,Party,1);
  InitChatRoomSlots(this,RaidParty,1);
  return;
}

// InitChatRoomSlots @ 14b9f7590

void __thiscall
FDS_ChatRoomManager::InitChatRoomSlots
          (FDS_ChatRoomManager *this,EDS_ChattingTabType param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar7;
  EDS_ChattingTabType local_res10 [8];
  TPairInitializer<EDS_ChattingTabType_const_&,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_&>
  local_res18;
  ForAnyElementType local_58;
  undefined8 local_50;
  EDS_ChattingTabType *local_48;
  ForAnyElementType *local_40;
  TReferenceControllerBase<1> *pTVar6;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_res10[0] = param_1;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0 < param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_2,&local_58,0,(int *)((longlong)&local_50 + 4));
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    do {
      pTVar4 = ::operator_new(0xa0);
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar4->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7 = pTVar4 + 1;
        pTVar4->WeakReferenceCount = (atomic<int>)0x1;
        pTVar4->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_UFDS_ChatRoomData___00_SharedPointerInternals__6B_
        ;
        *(undefined2 *)((longlong)&pTVar4[1]._padding_ + 1) = 0;
        *(undefined1 *)((longlong)&pTVar4[1]._padding_ + 3) = 0;
        pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
        pTVar4[6]._padding_ = 0;
        pTVar4[8]._padding_ = 0;
        pTVar4[9]._padding_ = 0;
        *(undefined2 *)&pTVar4[9].WeakReferenceCount.field_0x1 = 0;
        pTVar4[9].WeakReferenceCount.field_0x3 = 0;
        pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar4[2]._padding_ = 0;
        pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar4[3]._padding_ = 0;
        pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar4[4]._padding_ = 0;
        pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar4[5]._padding_ = 0;
        pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined1 *)&pTVar4[1]._padding_ = 0;
        *(undefined4 *)((longlong)&pTVar4[1]._padding_ + 4) = 0xffffffff;
        *(undefined4 *)&pTVar4[7]._padding_ = 0;
        *(undefined4 *)((longlong)&pTVar4[7]._padding_ + 4) = 0x80;
        pTVar4[7].SharedReferenceCount = (atomic<int>)0xffffffff;
        pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
        pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
        pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
        *(undefined1 *)&pTVar4[9].WeakReferenceCount = 0;
        if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(EDS_ChattingTabType *)&pTVar7->_padding_ = local_res10[0];
      *(int *)((longlong)&pTVar7->_padding_ + 4) = (int)pTVar6;
      iVar3 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar3 + 1);
      *(TReferenceControllerBase<1> **)&local_58.Data[(longlong)iVar3 * 0x10].field_0x0 = pTVar7;
      *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)iVar3 * 0x10 + 8) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar5 = (int)pTVar6 + 1;
      pTVar6 = (TReferenceControllerBase<1> *)(ulonglong)uVar5;
    } while ((int)uVar5 < param_2);
  }
  local_48 = local_res10;
  local_40 = &local_58;
  TSet<TTuple<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_ChattingTabType_const_&,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_&>_>
            (&this->ChatRoomDataMap,&local_res18,(bool *)&local_48);
  DestructItems<TSharedPtr<FDS_ChatRoomData,1>,int>
            ((TSharedPtr<FDS_ChatRoomData,1> *)local_58.Data,(int)local_50);
  if ((TSharedPtr<FDS_ChatRoomData,1> *)local_58.Data != (TSharedPtr<FDS_ChatRoomData,1> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// RegisterChatRoomIndex @ 14ba0b520

void __thiscall
FDS_ChatRoomManager::RegisterChatRoomIndex
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatRoomData,1> *param_1)

{
  TMap<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
  *this_00;
  FDS_ChatRoomData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatConversation *pFVar3;
  int iVar4;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  uint uVar8;
  int local_res10 [2];
  FScriptContainerElement *local_res18;
  FScriptContainerElement **local_res20;
  
  pFVar1 = param_1->Object;
  if (((pFVar1 != (FDS_ChatRoomData *)0x0) && (pFVar1->ChattingTabType != None)) &&
     ((pFVar1->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
    pTVar2 = (pFVar1->ChatConversation).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar1->ChatConversation).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (1 < (pFVar3->ConversationID).Data.ArrayNum) {
      local_res18 = (FScriptContainerElement *)pFVar3->WhisperPlayerUID;
      if (0 < (longlong)local_res18) {
        this_00 = &this->IndexByWhisper;
        uVar8 = (int)((ulonglong)local_res18 >> 0x20) * 0x17 + (int)local_res18;
        if (*(int *)&(this->IndexByWhisper).field_0x8 != *(int *)&(this->IndexByWhisper).field_0x34)
        {
          puVar7 = *(undefined1 **)&(this->IndexByWhisper).field_0x40;
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &(this->IndexByWhisper).field_0x38;
          }
          iVar4 = *(int *)(puVar7 + (ulonglong)
                                    (*(int *)&(this->IndexByWhisper).field_0x48 - 1U & uVar8) * 4);
          if (iVar4 != -1) {
            do {
              plVar6 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)&this_00->field_0x0);
              if ((FScriptContainerElement *)*plVar6 == local_res18) {
                if (plVar6 != (longlong *)0x0) goto LAB_14ba0b623;
                break;
              }
              iVar4 = (int)plVar6[3];
            } while (iVar4 != -1);
          }
        }
        local_res20 = &local_res18;
        TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
                  ((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                    *)this_00,(uint)local_res10,(TKeyInitializer<__int64_const_&> *)(ulonglong)uVar8
                   ,(bool *)&local_res20);
        plVar6 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_14ba0b623:
        TWeakPtr<FDS_ChatRoomData,1>::operator=<FDS_ChatRoomData>
                  ((TWeakPtr<FDS_ChatRoomData,1> *)(plVar6 + 1),param_1);
      }
      iVar4 = (pFVar3->GroupID).Data.ArrayNum;
      if (1 < iVar4) {
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>
                          (iVar4 + -1,(wchar_t *)(pFVar3->GroupID).Data.AllocatorInstance.Data);
        pTVar5 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                 ::FindOrAddImpl<FString_const_&>
                           ((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                             *)&this->IndexByGroupID,uVar8,&pFVar3->GroupID);
        TWeakPtr<FDS_ChatRoomData,1>::operator=<FDS_ChatRoomData>(pTVar5,param_1);
      }
      iVar4 = (pFVar3->ConversationID).Data.ArrayNum;
      if (1 < iVar4) {
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>
                          (iVar4 + -1,
                           (wchar_t *)(pFVar3->ConversationID).Data.AllocatorInstance.Data);
        pTVar5 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                 ::FindOrAddImpl<FString_const_&>
                           ((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                             *)&this->IndexByConversationID,uVar8,&pFVar3->ConversationID);
        TWeakPtr<FDS_ChatRoomData,1>::operator=<FDS_ChatRoomData>(pTVar5,param_1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// RemoveChatRoom @ 14ba0e950

FDS_ChatRoomData * __thiscall
FDS_ChatRoomManager::RemoveChatRoom
          (FDS_ChatRoomManager *this,FDS_ChatRoomData *__return_storage_ptr__,
          EDS_ChattingTabType param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FDS_ChatRoomData *pFVar7;
  longlong local_res10;
  TSharedPtr<FDS_ChatRoomData,1> local_28;
  
  __return_storage_ptr__->ChattingTabType = None;
  (__return_storage_ptr__->ChatConversation).Object = (FDS_ChatConversation *)0x0;
  (__return_storage_ptr__->ChatConversation).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Whisper).Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->Whisper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->GroupOwner).Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->GroupOwner).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&__return_storage_ptr__->GroupMembers = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x20 = 0;
  __return_storage_ptr__->SubTabIndex = -1;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x48 = 0;
  __return_storage_ptr__->GroupIconID = 0;
  __return_storage_ptr__->bIsInviteGranted = false;
  FindChatRoom(this,&local_28,param_1,param_2);
  if (local_28.Object != (FDS_ChatRoomData *)0x0) {
    if (local_28.Object == (FDS_ChatRoomData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FDS_ChatRoomData *)(*pcVar5)();
        return pFVar7;
      }
    }
    FDS_ChatRoomData::operator=(__return_storage_ptr__,local_28.Object);
    if (local_28.Object == (FDS_ChatRoomData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FDS_ChatRoomData *)(*pcVar5)();
        return pFVar7;
      }
    }
    pTVar1 = ((local_28.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
    pFVar2 = ((local_28.Object)->ChatConversation).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar2 != (FDS_ChatConversation *)0x0) && (1 < (pFVar2->ConversationID).Data.ArrayNum)) {
      TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
      ::Remove((TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
                *)this,&pFVar2->ConversationID);
    }
    if (local_28.Object == (FDS_ChatRoomData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FDS_ChatRoomData *)(*pcVar5)();
        return pFVar7;
      }
    }
    else {
      if (local_28.Object == (FDS_ChatRoomData *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FDS_ChatRoomData *)(*pcVar5)();
          return pFVar7;
        }
      }
      if (((local_28.Object)->ChattingTabType != None) &&
         (pFVar2 = ((local_28.Object)->ChatConversation).Object,
         pFVar2 != (FDS_ChatConversation *)0x0)) {
        pTVar3 = ((local_28.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (1 < (pFVar2->ConversationID).Data.ArrayNum) {
          lVar4 = pFVar2->WhisperPlayerUID;
          if (0 < lVar4) {
            local_res10 = lVar4;
            if (*(int *)&(this->IndexByWhisper).field_0x8 !=
                *(int *)&(this->IndexByWhisper).field_0x34) {
              TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<__int64>
                        ((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                          *)&this->IndexByWhisper,
                         (int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4,&local_res10);
            }
          }
          if (1 < (pFVar2->GroupID).Data.ArrayNum) {
            TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      *)&this->IndexByGroupID,&pFVar2->GroupID);
          }
          if (1 < (pFVar2->ConversationID).Data.ArrayNum) {
            TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      *)&this->IndexByConversationID,&pFVar2->ConversationID);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
    }
    FDS_ChatRoomData::ClearData(local_28.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RemoveChatRoomByConversationID @ 14ba0ebb0

FDS_ChatRoomData * __thiscall
FDS_ChatRoomManager::RemoveChatRoomByConversationID
          (FDS_ChatRoomManager *this,FDS_ChatRoomData *__return_storage_ptr__,FString *param_1)

{
  FDS_ChatRoomData *pFVar1;
  FDS_ChatConversation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar7;
  FDS_ChatRoomData *this_00;
  FDS_ChatRoomData *pFVar8;
  bool bVar9;
  longlong local_res8;
  
  this_00 = (FDS_ChatRoomData *)0x0;
  __return_storage_ptr__->ChattingTabType = None;
  (__return_storage_ptr__->ChatConversation).Object = (FDS_ChatConversation *)0x0;
  (__return_storage_ptr__->ChatConversation).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Whisper).Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->Whisper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->GroupOwner).Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->GroupOwner).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&__return_storage_ptr__->GroupMembers = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x20 = 0;
  __return_storage_ptr__->SubTabIndex = -1;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x48 = 0;
  __return_storage_ptr__->GroupIconID = 0;
  __return_storage_ptr__->bIsInviteGranted = false;
  pTVar7 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
           ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                   *)&this->IndexByConversationID,param_1);
  if (pTVar7 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
    pFVar8 = (FDS_ChatRoomData *)0x0;
  }
  else {
    pFVar1 = (FDS_ChatRoomData *)(pTVar7->WeakReferenceCount).ReferenceController;
    pFVar8 = pFVar1;
    if (pFVar1 != (FDS_ChatRoomData *)0x0) {
      iVar5 = *(int *)&(pFVar1->ChatConversation).Object;
      do {
        pFVar8 = this_00;
        if (iVar5 == 0) goto LAB_14ba0ec75;
        LOCK();
        iVar6 = *(int *)&(pFVar1->ChatConversation).Object;
        bVar9 = iVar5 == iVar6;
        if (bVar9) {
          *(int *)&(pFVar1->ChatConversation).Object = iVar5 + 1;
          iVar6 = iVar5;
        }
        UNLOCK();
        iVar5 = iVar6;
      } while (!bVar9);
      this_00 = pTVar7->Object;
      pFVar8 = pFVar1;
    }
LAB_14ba0ec75:
    if (this_00 != (FDS_ChatRoomData *)0x0) {
      FDS_ChatRoomData::operator=(__return_storage_ptr__,this_00);
      TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
      ::Remove((TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
                *)this,param_1);
      if ((this_00->ChattingTabType != None) &&
         (pFVar2 = (this_00->ChatConversation).Object, pFVar2 != (FDS_ChatConversation *)0x0)) {
        pTVar3 = (this_00->ChatConversation).SharedReferenceCount.ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (1 < (pFVar2->ConversationID).Data.ArrayNum) {
          lVar4 = pFVar2->WhisperPlayerUID;
          if ((0 < lVar4) &&
             (local_res8 = lVar4,
             *(int *)&(this->IndexByWhisper).field_0x8 != *(int *)&(this->IndexByWhisper).field_0x34
             )) {
            TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<__int64>
                      ((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                        *)&this->IndexByWhisper,(int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4,
                       &local_res8);
          }
          if (1 < (pFVar2->GroupID).Data.ArrayNum) {
            TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      *)&this->IndexByGroupID,&pFVar2->GroupID);
          }
          if (1 < (pFVar2->ConversationID).Data.ArrayNum) {
            TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      *)&this->IndexByConversationID,&pFVar2->ConversationID);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      FDS_ChatRoomData::ClearData(this_00);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return __return_storage_ptr__;
}

// RemoveChatRoomByGroupID @ 14ba0ed70

FDS_ChatRoomData * __thiscall
FDS_ChatRoomManager::RemoveChatRoomByGroupID
          (FDS_ChatRoomManager *this,FDS_ChatRoomData *__return_storage_ptr__,FString *param_1)

{
  FDS_ChatRoomData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatConversation *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar8;
  FDS_ChatRoomData *this_00;
  FDS_ChatRoomData *pFVar9;
  bool bVar10;
  longlong local_res8;
  
  this_00 = (FDS_ChatRoomData *)0x0;
  __return_storage_ptr__->ChattingTabType = None;
  (__return_storage_ptr__->ChatConversation).Object = (FDS_ChatConversation *)0x0;
  (__return_storage_ptr__->ChatConversation).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Whisper).Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->Whisper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->GroupOwner).Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->GroupOwner).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&__return_storage_ptr__->GroupMembers = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x20 = 0;
  __return_storage_ptr__->SubTabIndex = -1;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x48 = 0;
  __return_storage_ptr__->GroupIconID = 0;
  __return_storage_ptr__->bIsInviteGranted = false;
  pTVar8 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
           ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                   *)&this->IndexByGroupID,param_1);
  if (pTVar8 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
    pFVar9 = (FDS_ChatRoomData *)0x0;
  }
  else {
    pFVar1 = (FDS_ChatRoomData *)(pTVar8->WeakReferenceCount).ReferenceController;
    pFVar9 = pFVar1;
    if (pFVar1 != (FDS_ChatRoomData *)0x0) {
      iVar6 = *(int *)&(pFVar1->ChatConversation).Object;
      do {
        pFVar9 = this_00;
        if (iVar6 == 0) goto LAB_14ba0ee25;
        LOCK();
        iVar7 = *(int *)&(pFVar1->ChatConversation).Object;
        bVar10 = iVar6 == iVar7;
        if (bVar10) {
          *(int *)&(pFVar1->ChatConversation).Object = iVar6 + 1;
          iVar7 = iVar6;
        }
        UNLOCK();
        iVar6 = iVar7;
      } while (!bVar10);
      this_00 = pTVar8->Object;
      pFVar9 = pFVar1;
    }
LAB_14ba0ee25:
    if (this_00 != (FDS_ChatRoomData *)0x0) {
      FDS_ChatRoomData::operator=(__return_storage_ptr__,this_00);
      pTVar2 = (this_00->ChatConversation).SharedReferenceCount.ReferenceController;
      pFVar3 = (this_00->ChatConversation).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3 != (FDS_ChatConversation *)0x0) && (1 < (pFVar3->ConversationID).Data.ArrayNum)) {
        TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
        ::Remove((TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
                  *)this,&pFVar3->ConversationID);
      }
      if ((this_00->ChattingTabType != None) &&
         (pFVar3 = (this_00->ChatConversation).Object, pFVar3 != (FDS_ChatConversation *)0x0)) {
        pTVar4 = (this_00->ChatConversation).SharedReferenceCount.ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (1 < (pFVar3->ConversationID).Data.ArrayNum) {
          lVar5 = pFVar3->WhisperPlayerUID;
          if ((0 < lVar5) &&
             (local_res8 = lVar5,
             *(int *)&(this->IndexByWhisper).field_0x8 != *(int *)&(this->IndexByWhisper).field_0x34
             )) {
            TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<__int64>
                      ((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                        *)&this->IndexByWhisper,(int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5,
                       &local_res8);
          }
          if (1 < (pFVar3->GroupID).Data.ArrayNum) {
            TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      *)&this->IndexByGroupID,&pFVar3->GroupID);
          }
          if (1 < (pFVar3->ConversationID).Data.ArrayNum) {
            TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      *)&this->IndexByConversationID,&pFVar3->ConversationID);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      FDS_ChatRoomData::ClearData(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return __return_storage_ptr__;
}

// RemoveChatRoomByWhisper @ 14ba0ef50

FDS_ChatRoomData * __thiscall
FDS_ChatRoomManager::RemoveChatRoomByWhisper
          (FDS_ChatRoomManager *this,FDS_ChatRoomData *__return_storage_ptr__,long64 param_1)

{
  FDS_ChatRoomData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatConversation *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar8;
  FDS_ChatRoomData *this_00;
  FDS_ChatRoomData *pFVar9;
  bool bVar10;
  longlong local_res8;
  
  this_00 = (FDS_ChatRoomData *)0x0;
  __return_storage_ptr__->ChattingTabType = None;
  (__return_storage_ptr__->ChatConversation).Object = (FDS_ChatConversation *)0x0;
  (__return_storage_ptr__->ChatConversation).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Whisper).Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->Whisper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->GroupOwner).Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->GroupOwner).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&__return_storage_ptr__->GroupMembers = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x20 = 0;
  __return_storage_ptr__->SubTabIndex = -1;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x48 = 0;
  __return_storage_ptr__->GroupIconID = 0;
  __return_storage_ptr__->bIsInviteGranted = false;
  pTVar8 = TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
           ::Find((TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                   *)&this->IndexByWhisper,param_1);
  if (pTVar8 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
    pFVar9 = (FDS_ChatRoomData *)0x0;
  }
  else {
    pFVar1 = (FDS_ChatRoomData *)(pTVar8->WeakReferenceCount).ReferenceController;
    pFVar9 = pFVar1;
    if (pFVar1 != (FDS_ChatRoomData *)0x0) {
      iVar6 = *(int *)&(pFVar1->ChatConversation).Object;
      do {
        pFVar9 = this_00;
        if (iVar6 == 0) goto LAB_14ba0f005;
        LOCK();
        iVar7 = *(int *)&(pFVar1->ChatConversation).Object;
        bVar10 = iVar6 == iVar7;
        if (bVar10) {
          *(int *)&(pFVar1->ChatConversation).Object = iVar6 + 1;
          iVar7 = iVar6;
        }
        UNLOCK();
        iVar6 = iVar7;
      } while (!bVar10);
      this_00 = pTVar8->Object;
      pFVar9 = pFVar1;
    }
LAB_14ba0f005:
    if (this_00 != (FDS_ChatRoomData *)0x0) {
      FDS_ChatRoomData::operator=(__return_storage_ptr__,this_00);
      pTVar2 = (this_00->ChatConversation).SharedReferenceCount.ReferenceController;
      pFVar3 = (this_00->ChatConversation).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3 != (FDS_ChatConversation *)0x0) && (1 < (pFVar3->ConversationID).Data.ArrayNum)) {
        TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
        ::Remove((TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
                  *)this,&pFVar3->ConversationID);
      }
      if ((this_00->ChattingTabType != None) &&
         (pFVar3 = (this_00->ChatConversation).Object, pFVar3 != (FDS_ChatConversation *)0x0)) {
        pTVar4 = (this_00->ChatConversation).SharedReferenceCount.ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (1 < (pFVar3->ConversationID).Data.ArrayNum) {
          lVar5 = pFVar3->WhisperPlayerUID;
          if ((0 < lVar5) &&
             (local_res8 = lVar5,
             *(int *)&(this->IndexByWhisper).field_0x8 != *(int *)&(this->IndexByWhisper).field_0x34
             )) {
            TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<__int64>
                      ((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                        *)&this->IndexByWhisper,(int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5,
                       &local_res8);
          }
          if (1 < (pFVar3->GroupID).Data.ArrayNum) {
            TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      *)&this->IndexByGroupID,&pFVar3->GroupID);
          }
          if (1 < (pFVar3->ConversationID).Data.ArrayNum) {
            TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
            ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      *)&this->IndexByConversationID,&pFVar3->ConversationID);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      FDS_ChatRoomData::ClearData(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return __return_storage_ptr__;
}

// UnregisterChatRoomIndex @ 14ba233f0

void __thiscall
FDS_ChatRoomManager::UnregisterChatRoomIndex
          (FDS_ChatRoomManager *this,TSharedPtr<FDS_ChatRoomData,1> *param_1)

{
  FDS_ChatRoomData *pFVar1;
  FDS_ChatConversation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *local_res10;
  
  pFVar1 = param_1->Object;
  if (((pFVar1 != (FDS_ChatRoomData *)0x0) && (pFVar1->ChattingTabType != None)) &&
     ((pFVar1->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
    pFVar2 = (pFVar1->ChatConversation).Object;
    pTVar3 = (pFVar1->ChatConversation).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (1 < (pFVar2->ConversationID).Data.ArrayNum) {
      pFVar4 = (FScriptContainerElement *)pFVar2->WhisperPlayerUID;
      if (0 < (longlong)pFVar4) {
        local_res10 = pFVar4;
        if (*(int *)&(this->IndexByWhisper).field_0x8 != *(int *)&(this->IndexByWhisper).field_0x34)
        {
          TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<__int64>
                    ((TSet<TTuple<__int64,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                      *)&this->IndexByWhisper,(int)((ulonglong)pFVar4 >> 0x20) * 0x17 + (int)pFVar4,
                     (long64 *)&local_res10);
        }
      }
      if (1 < (pFVar2->GroupID).Data.ArrayNum) {
        TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
        ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                  *)&this->IndexByGroupID,&pFVar2->GroupID);
      }
      if (1 < (pFVar2->ConversationID).Data.ArrayNum) {
        TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
        ::Remove((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                  *)&this->IndexByConversationID,&pFVar2->ConversationID);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

