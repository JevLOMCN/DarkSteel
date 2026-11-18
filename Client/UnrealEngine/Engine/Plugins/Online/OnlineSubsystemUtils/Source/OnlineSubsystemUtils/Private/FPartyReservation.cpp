// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 8

// StaticStruct @ 14eca81f0

UScriptStruct * __cdecl FPartyReservation::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPartyReservation.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FPartyReservation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPartyReservation,(UObject *)pUVar1,
                         L"PartyReservation");
  }
  return Z_Registration_Info_UScriptStruct_FPartyReservation.OuterSingleton;
}

// FPartyReservation @ 14ecad040

FPartyReservation * __thiscall
FPartyReservation::FPartyReservation(FPartyReservation *this,FPartyReservation *param_1)

{
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPlayerReservation *pFVar4;
  
  this->TeamNum = param_1->TeamNum;
  (this->PartyLeader)._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(this->PartyLeader)._padding_,
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(param_1->PartyLeader)._padding_);
  pTVar1 = &this->PartyMembers;
  (this->PartyLeader)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  piVar2 = &(this->PartyMembers).ArrayMax;
  (this->PartyLeader).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyLeader).ReplicationBytes.ArrayNum = 0;
  (this->PartyLeader).ReplicationBytes.ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->PartyMembers).ArrayNum;
  pFVar4 = (FPlayerReservation *)(param_1->PartyMembers).AllocatorInstance.Data;
  (this->PartyMembers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FPlayerReservation,FPlayerReservation,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  pTVar1 = &this->RemovedPartyMembers;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RemovedPartyMembers).ArrayMax;
  iVar3 = (param_1->RemovedPartyMembers).ArrayNum;
  pFVar4 = (FPlayerReservation *)(param_1->RemovedPartyMembers).AllocatorInstance.Data;
  (this->RemovedPartyMembers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FPlayerReservation,FPlayerReservation,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// CanPlayerMigrateFromReservation @ 14ecb0940

bool __thiscall
FPartyReservation::CanPlayerMigrateFromReservation
          (FPartyReservation *this,FPartyReservation *param_1)

{
  return this->TeamNum == param_1->TeamNum;
}

// Dump @ 14ecb64a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPartyReservation::Dump(FPartyReservation *this)

{
  int iVar1;
  wchar_t *pwVar2;
  FUniqueNetIdWrapper *this_00;
  FUniqueNetIdWrapper *pFVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  if (((3 < (byte)LogPartyBeacon._0_1_) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon),
      3 < (byte)LogPartyBeacon._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon),
     3 < (byte)LogPartyBeacon._0_1_)) {
    FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&this->PartyLeader,&local_38);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
  }
  iVar1 = (this->PartyMembers).ArrayNum;
  this_00 = (FUniqueNetIdWrapper *)(this->PartyMembers).AllocatorInstance.Data;
  pFVar3 = (FUniqueNetIdWrapper *)((longlong)this_00 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((this->PartyMembers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    if (3 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    if (3 < (byte)LogPartyBeacon._0_1_) {
      FUniqueNetIdWrapper::ToDebugString(this_00,&local_28);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (3 < (byte)LogPartyBeacon._0_1_) {
        pwVar2 = L"true";
        if ((char)this_00[2].Variant._padding_ == '\0') {
          pwVar2 = L"false";
        }
        ::FString::FString(&local_38,pwVar2);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if ((3 < (byte)LogPartyBeacon._0_1_) &&
           (UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)&PTR_u_______Validatio_153079e98,
                       (FLogCategoryBase *)&LogPartyBeacon), 3 < (byte)LogPartyBeacon._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        }
      }
    }
    this_00 = (FUniqueNetIdWrapper *)&this_00[2].Variant.TypeIndex;
  }
  return;
}

// DumpUniqueIdsOnly @ 14ecb76e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPartyReservation::DumpUniqueIdsOnly(FPartyReservation *this)

{
  int iVar1;
  FUniqueNetIdWrapper *this_00;
  FUniqueNetIdWrapper *pFVar2;
  undefined1 local_res8 [8];
  FString local_18;
  
  if (3 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  iVar1 = (this->PartyMembers).ArrayNum;
  this_00 = (FUniqueNetIdWrapper *)(this->PartyMembers).AllocatorInstance.Data;
  pFVar2 = (FUniqueNetIdWrapper *)((longlong)this_00 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((this->PartyMembers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    if (3 < (byte)LogPartyBeacon._0_1_) {
      FUniqueNetIdWrapper::ToDebugString(this_00,&local_18);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this_00 = (FUniqueNetIdWrapper *)&this_00[2].Variant.TypeIndex;
  }
  return;
}

// IsValid @ 14ecbda60

bool __thiscall FPartyReservation::IsValid(FPartyReservation *this,bool param_1)

{
  uchar uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FUniqueNetIdWrapper *pFVar8;
  ulonglong uVar9;
  FUniqueNetIdWrapper *pFVar10;
  undefined1 local_res8 [8];
  
  bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&this->PartyLeader);
  if (!bVar5) {
    return false;
  }
  iVar2 = (this->PartyMembers).ArrayNum;
  if (0 < iVar2) {
    pFVar8 = (FUniqueNetIdWrapper *)(this->PartyMembers).AllocatorInstance.Data;
    pFVar10 = (FUniqueNetIdWrapper *)((longlong)pFVar8 + (longlong)iVar2 * 0x58);
    while( true ) {
      if ((this->PartyMembers).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar10) {
        return true;
      }
      uVar9 = (ulonglong)(pFVar8->Variant).TypeIndex;
      if ((1 < uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar1 = (pFVar8->Variant).TypeIndex;
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar9 + 4) == '\0') {
        if ((uVar1 != '\x01') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        bVar5 = ((pFVar8->Variant)._padding_ & 0xffffff) == 0;
      }
      else {
        if ((uVar1 != '\0') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        plVar3 = (longlong *)(pFVar8->Variant)._padding_;
        if (plVar3 == (longlong *)0x0) {
          return false;
        }
        cVar7 = (**(code **)(*plVar3 + 0x28))();
        bVar5 = cVar7 == '\0';
      }
      if (bVar5) {
        return false;
      }
      if ((int)pFVar8[2].Variant._padding_ < 2) break;
      if (((param_1) &&
          (bVar5 = ::operator==((FUniqueNetIdWrapper *)&this->PartyLeader,pFVar8), bVar5)) &&
         (*(int *)&pFVar8[1].Variant.TypeIndex < 2)) {
        return false;
      }
      pFVar8 = (FUniqueNetIdWrapper *)&pFVar8[2].Variant.TypeIndex;
    }
    return false;
  }
  return false;
}

// RemoveAllPartyMembers @ 14ecc5df0

int __thiscall
FPartyReservation::RemoveAllPartyMembers(FPartyReservation *this,FPlayerReservation *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  FUniqueNetId *pFVar8;
  FUniqueNetId *pFVar9;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar10;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar11;
  uint uVar12;
  FUniqueNetIdWrapper *this_00;
  longlong lVar13;
  
  iVar6 = 0;
  uVar12 = (this->PartyMembers).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 * 0x58;
    do {
      uVar5 = 0;
      if ((int)uVar12 < (this->PartyMembers).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      this_00 = (FUniqueNetIdWrapper *)((this->PartyMembers).AllocatorInstance.Data + lVar13);
      bVar2 = FUniqueNetIdWrapper::IsValid(this_00);
      bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
      if (bVar2 == bVar3) {
        if (bVar2) {
          if ((this_00->Variant).TypeIndex == (uchar)(param_1->UniqueId)._padding_) {
            bVar2 = FUniqueNetIdWrapper::IsV1(this_00);
            if (bVar2) {
              pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)param_1);
              pFVar8 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7);
              pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe(this_00);
              pFVar9 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7);
              cVar4 = (*(code *)**(undefined8 **)pFVar9)(pFVar9,pFVar8);
            }
            else {
              pTVar10 = FUniqueNetIdWrapper::GetV2Unsafe(this_00);
              pTVar11 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)param_1);
              cVar4 = pTVar10->Value == pTVar11->Value;
            }
            if (cVar4 != '\0') goto LAB_14ecc5f02;
          }
        }
        else {
LAB_14ecc5f02:
          iVar6 = iVar6 + 1;
          RemovePartyMemberAtIndex(this,uVar12);
        }
      }
      lVar13 = lVar13 + -0x58;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return iVar6;
}

// RemovePartyMemberAtIndex @ 14ecc6350

void __thiscall FPartyReservation::RemovePartyMemberAtIndex(FPartyReservation *this,int param_1)

{
  int *piVar1;
  FPlayerReservation *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FPlayerReservation *pFVar7;
  
  if ((-1 < param_1) && (param_1 < (this->PartyMembers).ArrayNum)) {
    if (param_1 < 0) {
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
    pFVar2 = (FPlayerReservation *)(this->RemovedPartyMembers).AllocatorInstance.Data;
    pFVar7 = (FPlayerReservation *)
             ((this->PartyMembers).AllocatorInstance.Data + (longlong)param_1 * 0x58);
    if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (this->RemovedPartyMembers).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->RemovedPartyMembers).ArrayNum;
    piVar1 = &(this->RemovedPartyMembers).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->RemovedPartyMembers).AllocatorInstance,piVar1);
    }
    (this->RemovedPartyMembers).ArrayNum = iVar5 + 1;
    FPlayerReservation::FPlayerReservation
              ((FPlayerReservation *)
               ((this->RemovedPartyMembers).AllocatorInstance.Data + (longlong)iVar5 * 0x58),pFVar7)
    ;
    uVar6 = 0;
    if (param_1 < (this->PartyMembers).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&this->PartyMembers,param_1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,&(this->PartyMembers).AllocatorInstance,(this->PartyMembers).ArrayNum,
               &(this->PartyMembers).ArrayMax);
  }
  return;
}

