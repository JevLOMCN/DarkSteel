// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 48

// StaticClass @ 14eca8d80

UClass * __cdecl APartyBeaconHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APartyBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"PartyBeaconHost",
               &Z_Registration_Info_UClass_APartyBeaconHost.InnerSingleton,
               StaticRegisterNativesAPartyBeaconHost,0x390,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APartyBeaconHost>,
               InternalVTableHelperCtorCaller<APartyBeaconHost>,local_res8,
               AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APartyBeaconHost.InnerSingleton;
}

// APartyBeaconHost @ 14ecac760

APartyBeaconHost * __thiscall
APartyBeaconHost::APartyBeaconHost(APartyBeaconHost *this,FVTableHelper *param_1)

{
  AOnlineBeaconHostObject::AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this,param_1);
  this->_padding_ = (longlong)&___7APartyBeaconHost__6B_;
  (this->State).field0_0x0.DebugPtr = (UPartyBeaconState *)0x0;
  *(undefined8 *)&this->ReservationsFull = 0;
  *(undefined8 *)&(this->ReservationsFull).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationsFull).field_0x10 = 0;
  *(undefined8 *)&this->ReservationChanged = 0;
  *(undefined8 *)&(this->ReservationChanged).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationChanged).field_0x10 = 0;
  *(undefined8 *)&this->CancelationReceived = 0;
  *(undefined8 *)&(this->CancelationReceived).field_0x8 = 0;
  *(undefined4 *)&(this->CancelationReceived).field_0x10 = 0;
  *(undefined8 *)&this->DuplicateReservation = 0;
  *(undefined8 *)&(this->DuplicateReservation).field_0x8 = 0;
  *(undefined4 *)&(this->DuplicateReservation).field_0x10 = 0;
  *(undefined8 *)&this->NewPlayerAddedDelegate = 0;
  *(undefined8 *)&(this->NewPlayerAddedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NewPlayerAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ValidatePlayers = 0;
  *(undefined8 *)&(this->ValidatePlayers).field_0x8 = 0;
  *(undefined4 *)&(this->ValidatePlayers).field_0x10 = 0;
  return this;
}

// APartyBeaconHost @ 14ecac810

APartyBeaconHost * __thiscall
APartyBeaconHost::APartyBeaconHost(APartyBeaconHost *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  longlong lVar7;
  FName local_res8;
  FString local_18;
  
  AOnlineBeaconHostObject::AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this,param_1);
  lVar7 = 0;
  this->bLogoutOnSessionTimeout = true;
  this->bIsValidationStrRequired = true;
  this->_padding_ = (longlong)&___7APartyBeaconHost__6B_;
  (this->State).field0_0x0.DebugPtr = (UPartyBeaconState *)0x0;
  *(undefined8 *)&this->ReservationsFull = 0;
  *(undefined8 *)&(this->ReservationsFull).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationsFull).field_0x10 = 0;
  *(undefined8 *)&this->ReservationChanged = 0;
  *(undefined8 *)&(this->ReservationChanged).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationChanged).field_0x10 = 0;
  *(undefined8 *)&this->CancelationReceived = 0;
  *(undefined8 *)&(this->CancelationReceived).field_0x8 = 0;
  *(undefined4 *)&(this->CancelationReceived).field_0x10 = 0;
  *(undefined8 *)&this->DuplicateReservation = 0;
  *(undefined8 *)&(this->DuplicateReservation).field_0x8 = 0;
  *(undefined4 *)&(this->DuplicateReservation).field_0x10 = 0;
  *(undefined8 *)&this->NewPlayerAddedDelegate = 0;
  *(undefined8 *)&(this->NewPlayerAddedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NewPlayerAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ValidatePlayers = 0;
  *(undefined8 *)&(this->ValidatePlayers).field_0x8 = 0;
  *(undefined4 *)&(this->ValidatePlayers).field_0x10 = 0;
  pUVar5 = Z_Construct_UClass_APartyBeaconClient_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UClass *)0x0)) {
    this->_padding_ = (longlong)pUVar5;
    if (pUVar5 == (UClass *)0x0) goto LAB_14ecac928;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    this->_padding_ = (longlong)pUVar5;
  }
  pUVar6 = Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar3 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar7 = this->_padding_;
    }
  }
LAB_14ecac928:
  local_res8 = *(FName *)(lVar7 + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  plVar2 = &this->_padding_;
  if ((FString *)plVar2 != &local_18) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0xe;
  return this;
}

// ~APartyBeaconHost @ 14ecad8d0

void __thiscall APartyBeaconHost::~APartyBeaconHost(APartyBeaconHost *this)

{
  this->_padding_ = (longlong)&___7APartyBeaconHost__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ValidatePlayers);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NewPlayerAddedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DuplicateReservation);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CancelationReceived);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationsFull);
  AOnlineBeaconHostObject::~AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this);
  return;
}

// AddPartyReservation @ 14ecaf4d0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
APartyBeaconHost::AddPartyReservation(APartyBeaconHost *this,FPartyReservation *param_1)

{
  UPartyBeaconState *pUVar1;
  FUniqueNetIdMatcher FVar2;
  code *pcVar3;
  int iVar4;
  APartyBeaconHost *this_00;
  bool bVar5;
  char cVar6;
  bool bVar7;
  Type TVar8;
  uint uVar9;
  Type TVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar14;
  ulonglong uVar15;
  uint uVar16;
  FUniqueNetIdWrapper *pFVar17;
  FPartyReservation *this_01;
  ForAnyElementType FVar18;
  FUniqueNetIdWrapper *pFVar19;
  FPlayerReservation *pFVar20;
  int iVar21;
  FPlayerReservation *pFVar22;
  longlong lVar23;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186 [2];
  int local_184;
  ForAnyElementType local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined1 local_16f [7];
  APartyBeaconHost *local_168;
  FPlayerReservation *local_160;
  FPlayerReservation *local_158;
  FString local_150;
  TSharedPtr<FUniqueNetId_const_,1> local_140;
  FString local_130;
  FPlayerReservation local_120;
  FPlayerReservation local_c8;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  if (((this->State).field0_0x0.DebugPtr == (UPartyBeaconState *)0x0) ||
     (local_168 = this,
     TVar8 = AOnlineBeaconHostObject::GetBeaconState((AOnlineBeaconHostObject *)this),
     TVar8 == DenyRequests)) {
    return ReservationDenied;
  }
  bVar5 = FPartyReservation::IsValid(param_1,this->bIsValidationStrRequired);
  if (!bVar5) {
    return ReservationInvalid;
  }
  plVar13 = (longlong *)(**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x308))();
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  local_160 = (FPlayerReservation *)plVar13;
  uVar9 = (**(code **)(pUVar1->_padding_ + 0x310))(pUVar1,&param_1->PartyLeader);
  if (uVar9 != 0xffffffff) {
    uVar16 = 0;
    if ((int)uVar9 < (int)plVar13[1]) {
      uVar16 = ~uVar9 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar10 = (*pcVar3)();
      return TVar10;
    }
    iVar11 = (param_1->PartyMembers).ArrayNum;
    lVar23 = (longlong)(int)uVar9 * 0x58 + *plVar13;
    if (iVar11 <= *(int *)(lVar23 + 0x40)) {
      pFVar20 = (FPlayerReservation *)(param_1->PartyMembers).AllocatorInstance.Data;
      iVar21 = 0;
      local_160 = pFVar20 + iVar11;
LAB_14ecaf603:
      pFVar22 = local_160;
      if ((param_1->PartyMembers).ArrayNum != iVar11) {
        local_188 = 0;
        `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_188);
      }
      if (pFVar20 != pFVar22) {
        FPlayerReservation::FPlayerReservation(&local_120,pFVar20);
        pFVar17 = *(FUniqueNetIdWrapper **)(lVar23 + 0x38);
        pFVar19 = (FUniqueNetIdWrapper *)
                  ((longlong)*(int *)(lVar23 + 0x40) * 0x58 + (longlong)pFVar17);
        for (; pFVar17 != pFVar19; pFVar17 = (FUniqueNetIdWrapper *)&pFVar17[2].Variant.TypeIndex) {
          bVar5 = ::operator==((FUniqueNetIdWrapper *)&local_120,pFVar17);
          if (bVar5) {
            if (local_120.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Platform.Data.AllocatorInstance.Data);
            }
            if (local_120.ValidationStr.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.ValidationStr.Data.AllocatorInstance.Data);
            }
            FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_120.UniqueId);
            if (pFVar17 == (FUniqueNetIdWrapper *)0x0) goto LAB_14ecaf67f;
            iVar21 = iVar21 + 1;
            pFVar20 = pFVar20 + 1;
            goto LAB_14ecaf603;
          }
        }
        if (local_120.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Platform.Data.AllocatorInstance.Data);
        }
        if (local_120.ValidationStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.ValidationStr.Data.AllocatorInstance.Data);
        }
        FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_120.UniqueId);
LAB_14ecaf67f:
        pFVar20 = pFVar20 + 1;
        goto LAB_14ecaf603;
      }
      iVar11 = (param_1->PartyMembers).ArrayNum;
      if (iVar21 == iVar11) {
        pFVar20 = (FPlayerReservation *)(param_1->PartyMembers).AllocatorInstance.Data;
        pFVar22 = pFVar20 + iVar11;
LAB_14ecaf6e3:
        do {
          if ((param_1->PartyMembers).ArrayNum != iVar11) {
            local_187 = 0;
            `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_187);
          }
          this_00 = local_168;
          if (pFVar20 == pFVar22) {
            pUVar1 = (local_168->State).field0_0x0.DebugPtr;
            cVar6 = (**(code **)(pUVar1->_padding_ + 0x3c0))(pUVar1,param_1);
            if (cVar6 == '\0') {
              return ReservationDenied_CrossPlayRestriction;
            }
            SendReservationUpdates(this_00);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &this_00->DuplicateReservation,&local_70);
            if ((*(int *)&(this_00->DuplicateReservation).field_0x10 != 0) &&
               (plVar13 = *(longlong **)&(this_00->DuplicateReservation).field_0x8,
               plVar13 != (longlong *)0x0)) {
              (**(code **)(*plVar13 + 0x68))(plVar13,param_1);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_70);
            uVar9 = 0;
            if (0 < (param_1->PartyMembers).ArrayNum) {
              do {
                uVar16 = 0;
                if ((int)uVar9 < (param_1->PartyMembers).ArrayNum) {
                  uVar16 = ~uVar9 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  TVar10 = (*pcVar3)();
                  return TVar10;
                }
                NewPlayerAdded(this_00,(FPlayerReservation *)
                                       ((param_1->PartyMembers).AllocatorInstance.Data +
                                       (longlong)(int)uVar9 * 0x58));
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < (param_1->PartyMembers).ArrayNum);
            }
            return ReservationDuplicate;
          }
          if (1 < (pFVar20->ValidationStr).Data.ArrayNum) {
            FPlayerReservation::FPlayerReservation(&local_c8,pFVar20);
            pFVar17 = *(FUniqueNetIdWrapper **)(lVar23 + 0x38);
            pFVar19 = (FUniqueNetIdWrapper *)
                      ((longlong)*(int *)(lVar23 + 0x40) * 0x58 + (longlong)pFVar17);
            for (; pFVar17 != pFVar19;
                pFVar17 = (FUniqueNetIdWrapper *)&pFVar17[2].Variant.TypeIndex) {
              bVar5 = ::operator==((FUniqueNetIdWrapper *)&local_c8,pFVar17);
              if (bVar5) {
                if (local_c8.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free(local_c8.Platform.Data.AllocatorInstance.Data);
                }
                if (local_c8.ValidationStr.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.ValidationStr.Data.AllocatorInstance.Data);
                }
                FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_c8.UniqueId);
                if (pFVar17 == (FUniqueNetIdWrapper *)0x0) goto LAB_14ecaf76e;
                ::FString::operator=
                          ((FString *)&pFVar17[1].Variant._padding_,&pFVar20->ValidationStr);
                pFVar20 = pFVar20 + 1;
                goto LAB_14ecaf6e3;
              }
            }
            if (local_c8.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Platform.Data.AllocatorInstance.Data);
            }
            if (local_c8.ValidationStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_c8.ValidationStr.Data.AllocatorInstance.Data);
            }
            FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_c8.UniqueId);
          }
LAB_14ecaf76e:
          pFVar20 = pFVar20 + 1;
        } while( true );
      }
    }
    return IncorrectPlayerCount;
  }
  iVar11 = (param_1->PartyMembers).ArrayNum;
  uVar15 = (ulonglong)iVar11;
  pFVar20 = (FPlayerReservation *)(param_1->PartyMembers).AllocatorInstance.Data;
  bVar5 = false;
  local_184 = 0;
  local_158 = pFVar20 + uVar15;
  local_180.Data = (FScriptContainerElement *)0x0;
  iVar21 = -1;
  local_178 = 0;
  local_168 = (APartyBeaconHost *)CONCAT44(local_168._4_4_,iVar11);
LAB_14ecaf8d8:
  do {
    pFVar22 = local_158;
    if ((param_1->PartyMembers).ArrayNum != (int)uVar15) {
      local_186[0] = 0;
      `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_186);
    }
    if (pFVar20 == pFVar22) {
      if ((iVar21 == -1) || (cVar6 = (**(code **)(this->_padding_ + 0x7d8))(this), cVar6 == '\0')) {
LAB_14ecafc22:
        plVar13 = (longlong *)0x0;
        if (!bVar5) {
          iVar11 = (int)local_178;
          pFVar20 = (FPlayerReservation *)(local_180.Data + (longlong)(int)local_178 * 0x58);
          FVar18.Data = local_180.Data;
          while( true ) {
            if ((int)local_178 != iVar11) {
              `TCheckedPointerIterator<FPlayerReservation,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_170);
            }
            pUVar1 = (this->State).field0_0x0.DebugPtr;
            if ((FPlayerReservation *)FVar18.Data == pFVar20) break;
            (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1,FVar18.Data);
            FVar18.Data = FVar18.Data + 0x58;
          }
          cVar6 = (**(code **)(pUVar1->_padding_ + 0x340))(pUVar1,param_1);
          if (cVar6 != '\0') {
            bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ValidatePlayers);
            if (bVar5) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &this->ValidatePlayers,&local_58);
              if (*(int *)&(this->ValidatePlayers).field_0x10 != 0) {
                plVar13 = *(longlong **)&(this->ValidatePlayers).field_0x8;
              }
              cVar6 = (**(code **)(*plVar13 + 0x60))(plVar13,&param_1->PartyMembers);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_58);
              if (cVar6 == '\0') {
                TVar10 = ReservationDenied_Banned;
                goto LAB_14ecafbf9;
              }
            }
            cVar6 = (**(code **)(this->_padding_ + 0x7d8))(this);
            if ((cVar6 == '\0') ||
               (pUVar1 = (this->State).field0_0x0.DebugPtr,
               cVar6 = (**(code **)(pUVar1->_padding_ + 0x3b8))(pUVar1,param_1), cVar6 != '\0')) {
              pUVar1 = (this->State).field0_0x0.DebugPtr;
              cVar6 = (**(code **)(pUVar1->_padding_ + 0x3c0))(pUVar1,param_1);
              if (cVar6 == '\0') {
                TVar10 = ReservationDenied_CrossPlayRestriction;
              }
              else {
                pUVar1 = (this->State).field0_0x0.DebugPtr;
                cVar6 = (**(code **)(pUVar1->_padding_ + 1000))(pUVar1,param_1);
                if (cVar6 == '\0') {
                  TVar10 = ReservationDenied_ValidationFailed;
                }
                else {
                  pUVar1 = (this->State).field0_0x0.DebugPtr;
                  cVar6 = (**(code **)(pUVar1->_padding_ + 0x2d0))(pUVar1,param_1);
                  if (cVar6 == '\0') {
                    TVar10 = IncorrectPlayerCount;
                  }
                  else {
                    iVar11 = (param_1->PartyMembers).ArrayNum;
                    pFVar20 = (FPlayerReservation *)(param_1->PartyMembers).AllocatorInstance.Data;
                    pFVar22 = pFVar20 + iVar11;
                    while( true ) {
                      if ((param_1->PartyMembers).ArrayNum != iVar11) {
                        `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2
                        ::<lambda_1>::operator()(local_16f);
                      }
                      if (pFVar20 == pFVar22) break;
                      NewPlayerAdded(this,pFVar20);
                      pFVar20 = pFVar20 + 1;
                    }
                    SendReservationUpdates(this);
                    NotifyReservationEventNextFrame(this,&this->ReservationChanged);
                    cVar6 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x350))();
                    if (cVar6 != '\0') {
                      NotifyReservationEventNextFrame(this,&this->ReservationsFull);
                    }
                    TVar10 = ReservationAccepted;
                  }
                }
              }
              goto LAB_14ecafbf9;
            }
          }
          TVar10 = PartyLimitReached;
LAB_14ecafbf9:
          DestructItems<FPlayerReservation,int>((FPlayerReservation *)local_180.Data,(int)local_178)
          ;
          if ((FPlayerReservation *)local_180.Data != (FPlayerReservation *)0x0) {
            FMemory::Free(local_180.Data);
            return TVar10;
          }
          return TVar10;
        }
      }
      else {
        iVar11 = 0;
        if ((this->_padding_ == 0) ||
           (pUVar1 = (this->State).field0_0x0.DebugPtr, pUVar1 == (UPartyBeaconState *)0x0)) {
          if (2 < (byte)LogPartyBeacon._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          }
        }
        else {
          iVar11 = (**(code **)(pUVar1->_padding_ + 0x378))(pUVar1,iVar21);
        }
        iVar12 = (**(code **)(this->_padding_ + 2000))(this);
        iVar4 = local_184;
        iVar21 = (param_1->PartyMembers).ArrayNum;
        iVar12 = (local_184 - iVar11) + iVar12;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        if ((iVar21 <= iVar12) &&
           (iVar11 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x330))(),
           iVar21 - iVar4 <= iVar11)) goto LAB_14ecafc22;
      }
      TVar10 = ReservationDenied_ContainsExistingPlayers;
      goto LAB_14ecafbf9;
    }
    pUVar1 = (this->State).field0_0x0.DebugPtr;
    uVar9 = (**(code **)(pUVar1->_padding_ + 0x318))(pUVar1,pFVar20);
    if (uVar9 == 0xffffffff) {
      pTVar14 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)pFVar20,&local_140);
      if ((pTVar14->Object == (FUniqueNetId *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        TVar10 = (*pcVar3)();
        return TVar10;
      }
      FVar2.UniqueIdTarget = pTVar14->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.SharedReferenceCount.ReferenceController);
      iVar11 = TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
               IndexOfByPredicate<FUniqueNetIdMatcher>
                         (&((this->State).field0_0x0.DebugPtr)->PlayersPendingJoin,FVar2);
      if (iVar11 != -1) {
        this_01 = param_1;
        if (3 < (byte)LogPartyBeacon._0_1_) {
          FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)pFVar20,&local_130);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14ecafb2a;
      }
    }
    else {
      if (((local_180.Data <= pFVar20) &&
          (pFVar20 < (FPlayerReservation *)(local_180.Data + (longlong)local_178._4_4_ * 0x58))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        TVar10 = (*pcVar3)();
        return TVar10;
      }
      iVar11 = (int)local_178;
      if ((int)local_178 == local_178._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&local_180,(int *)((longlong)&local_178 + 4));
      }
      local_178 = CONCAT44(local_178._4_4_,iVar11 + 1);
      FPlayerReservation::FPlayerReservation
                ((FPlayerReservation *)(local_180.Data + (longlong)iVar11 * 0x58),pFVar20);
      uVar16 = 0;
      if ((int)uVar9 < (int)*(longlong *)((longlong)local_160 + 8)) {
        uVar16 = ~uVar9 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        TVar10 = (*pcVar3)();
        return TVar10;
      }
      this_01 = (FPartyReservation *)((longlong)(int)uVar9 * 0x58 + *(longlong *)local_160);
      if ((iVar21 == -1) || (iVar21 == this_01->TeamNum)) {
        local_184 = local_184 + 1;
        iVar21 = this_01->TeamNum;
        pFVar20 = pFVar20 + 1;
        uVar15 = (ulonglong)local_168 & 0xffffffff;
        goto LAB_14ecaf8d8;
      }
      if (3 < (byte)LogPartyBeacon._0_1_) {
        FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)pFVar20,&local_150);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
      FPartyReservation::Dump(param_1);
LAB_14ecafb2a:
      FPartyReservation::Dump(this_01);
      bVar5 = true;
    }
    pFVar20 = pFVar20 + 1;
    uVar15 = (ulonglong)local_168 & 0xffffffff;
  } while( true );
}

// ChangeTeam @ 14ecb0e80

bool __thiscall
APartyBeaconHost::ChangeTeam(APartyBeaconHost *this,FUniqueNetIdRepl *param_1,int param_2)

{
  UPartyBeaconState *pUVar1;
  char cVar2;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2f0))();
    if (cVar2 != '\0') {
      NotifyReservationEventNextFrame(this,&this->ReservationChanged);
      return true;
    }
  }
  return false;
}

// DoesSessionMatch @ 14ecb61a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall APartyBeaconHost::DoesSessionMatch(APartyBeaconHost *this,FString *param_1)

{
  int iVar1;
  UPartyBeaconState *pUVar2;
  int iVar3;
  IOnlineSubsystem *pIVar4;
  longlong *plVar5;
  longlong lVar6;
  FOnlineSessionInfo *pFVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FName local_res8;
  undefined8 local_res18 [2];
  void *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((this->State).field0_0x0.DebugPtr == (UPartyBeaconState *)0x0) {
    return false;
  }
  AActor::GetWorld((AActor *)this);
  pUVar2 = (this->State).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,local_res18);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar4 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar4 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar11 = pTVar10;
LAB_14ecb6207:
    bVar12 = false;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_14ecb62f9;
  }
  else {
    plVar5 = (longlong *)(**(code **)(pIVar4->_padding_ + 0x20))(pIVar4,&local_28);
    plVar8 = (longlong *)*plVar5;
    pTVar11 = (TReferenceControllerBase<1> *)plVar5[1];
    plVar5[1] = 0;
    *plVar5 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if ((((plVar8 == (longlong *)0x0) ||
         (lVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,local_res18[0]), lVar6 == 0)) ||
        (pTVar10 = (TReferenceControllerBase<1> *)0x0,
        ((TSharedPtr<FOnlineSessionInfo,1> *)(lVar6 + 0x100))->Object == (FOnlineSessionInfo *)0x0))
       || ((param_1->Data).ArrayNum < 2)) goto LAB_14ecb6207;
    pFVar7 = TSharedPtr<FOnlineSessionInfo,1>::operator->
                       ((TSharedPtr<FOnlineSessionInfo,1> *)(lVar6 + 0x100));
    plVar8 = (longlong *)(**(code **)((longlong)*pFVar7 + 0x38))(pFVar7);
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,&local_28);
    iVar3 = (param_1->Data).ArrayNum;
    iVar1 = *(int *)(puVar9 + 1);
    if (iVar1 == iVar3) {
      if (1 < iVar1) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar9,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar12 = iVar3 == 0;
        goto LAB_14ecb62e1;
      }
    }
    else {
      bVar12 = iVar3 + iVar1 == 1;
LAB_14ecb62e1:
      pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000001;
      if (!bVar12) goto LAB_14ecb6207;
    }
    bVar12 = true;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    return true;
  }
LAB_14ecb62f9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return false;
}

// DumpReservations @ 14ecb6880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall APartyBeaconHost::DumpReservations(APartyBeaconHost *this)

{
  UPartyBeaconState *pUVar1;
  
  if (3 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x3e0))();
  }
  if (3 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    return;
  }
  return;
}

// GetMaxAvailableTeamSize @ 14ecb9700

int __thiscall APartyBeaconHost::GetMaxAvailableTeamSize(APartyBeaconHost *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecb970a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x370))();
  return iVar1;
}

// GetMaxPlayersPerTeam @ 14ecb9780

int __thiscall APartyBeaconHost::GetMaxPlayersPerTeam(APartyBeaconHost *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecb978a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x360))();
  return iVar1;
}

// GetMaxReservations @ 14ecb97b0

int __thiscall APartyBeaconHost::GetMaxReservations(APartyBeaconHost *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecb97ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x328))();
  return iVar1;
}

// GetNumConsumedReservations @ 14ecb9810

int __thiscall APartyBeaconHost::GetNumConsumedReservations(APartyBeaconHost *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecb981a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x338))();
  return iVar1;
}

// GetNumPlayersOnTeam @ 14ecb9870

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall APartyBeaconHost::GetNumPlayersOnTeam(APartyBeaconHost *this,int param_1)

{
  UPartyBeaconState *pUVar1;
  int iVar2;
  undefined4 in_register_00000014;
  
  if ((this->_padding_ != 0) &&
     (pUVar1 = (this->State).field0_0x0.DebugPtr, pUVar1 != (UPartyBeaconState *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014ecb9894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(pUVar1->_padding_ + 0x378))(pUVar1,CONCAT44(in_register_00000014,param_1));
    return iVar2;
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  return 0;
}

// GetPartyBeaconHostClass @ 14ecba180

TSubclassOf<UPartyBeaconState> __thiscall
APartyBeaconHost::GetPartyBeaconHostClass(APartyBeaconHost *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPartyBeaconState::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPartyBeaconState>)in_RDX.field0_0x0;
}

// GetPartyLeader @ 14ecba1c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
APartyBeaconHost::GetPartyLeader
          (APartyBeaconHost *this,FUniqueNetIdRepl *param_1,FUniqueNetIdRepl *param_2)

{
  UPartyBeaconState *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecba1da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x3a8))(pUVar1);
    return (bool)uVar2;
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  return false;
}

// GetPlayerValidation @ 14ecba5b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
APartyBeaconHost::GetPlayerValidation(APartyBeaconHost *this,FUniqueNetId *param_1,FString *param_2)

{
  UPartyBeaconState *pUVar1;
  undefined1 uVar2;
  
  ::FString::Empty(param_2);
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecba5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x3a0))(pUVar1,param_1,param_2);
    return (bool)uVar2;
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  return false;
}

// GetPlayersOnTeam @ 14ecbab50

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
APartyBeaconHost::GetPlayersOnTeam
          (APartyBeaconHost *this,int param_1,
          TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>_> *param_2)

{
  UPartyBeaconState *pUVar1;
  int iVar2;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 == (UPartyBeaconState *)0x0) {
    if (2 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
  }
  else {
    iVar2 = (**(code **)(pUVar1->_padding_ + 0x358))();
    if (param_1 < iVar2) {
      iVar2 = UPartyBeaconState::GetPlayersOnTeam((this->State).field0_0x0.DebugPtr,param_1,param_2)
      ;
      return iVar2;
    }
    if (2 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      return 0;
    }
  }
  return 0;
}

// GetPrivateStaticClass @ 14ecbb130

UClass * __cdecl APartyBeaconHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APartyBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"PartyBeaconHost",
               &Z_Registration_Info_UClass_APartyBeaconHost.InnerSingleton,
               StaticRegisterNativesAPartyBeaconHost,0x390,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APartyBeaconHost>,
               InternalVTableHelperCtorCaller<APartyBeaconHost>,local_res8,
               AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APartyBeaconHost.InnerSingleton;
}

// GetReservationCount @ 14ecbb970

int __thiscall APartyBeaconHost::GetReservationCount(APartyBeaconHost *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecbb97a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 800))();
  return iVar1;
}

// GetReservationPlatformCount @ 14ecbb9d0

int __thiscall
APartyBeaconHost::GetReservationPlatformCount(APartyBeaconHost *this,FString *param_1,bool param_2)

{
  UPartyBeaconState *pUVar1;
  int iVar2;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecbb9df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(pUVar1->_padding_ + 0x3d0))();
    return iVar2;
  }
  return 0;
}

// GetSessionTimeoutSecs @ 14ecbc180

float __thiscall
APartyBeaconHost::GetSessionTimeoutSecs(APartyBeaconHost *this,FUniqueNetIdRepl *param_1)

{
  return this->SessionTimeoutSecs;
}

// GetTeamForCurrentPlayer @ 14ecbc4d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
APartyBeaconHost::GetTeamForCurrentPlayer(APartyBeaconHost *this,FUniqueNetId *param_1)

{
  UPartyBeaconState *pUVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  if (cVar2 == '\0') {
    if (3 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
  }
  else {
    pUVar1 = (this->State).field0_0x0.DebugPtr;
    if (pUVar1 != (UPartyBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecbc509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(pUVar1->_padding_ + 0x380))(pUVar1,param_1);
      return iVar3;
    }
  }
  return -1;
}

// HandlePlayerLogout @ 14ecbca10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
APartyBeaconHost::HandlePlayerLogout(APartyBeaconHost *this,FUniqueNetIdRepl *param_1)

{
  FUniqueNetId *pFVar1;
  UPartyBeaconState *pUVar2;
  bool bVar3;
  char cVar4;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar5;
  TSharedPtr<FUniqueNetId_const_,1> local_28;
  void *local_18 [2];
  
  bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if (bVar3) {
    if (5 < (byte)LogPartyBeacon._0_1_) {
      pTVar5 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,&local_28);
      pFVar1 = pTVar5->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1,local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    pUVar2 = (this->State).field0_0x0.DebugPtr;
    if ((pUVar2 != (UPartyBeaconState *)0x0) &&
       (cVar4 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2,param_1), cVar4 != '\0')) {
      SendReservationUpdates(this);
      NotifyReservationEventNextFrame(this,&this->ReservationChanged);
    }
  }
  return;
}

// HasCrossplayOptOutReservation @ 14ecbcbd0

bool __thiscall APartyBeaconHost::HasCrossplayOptOutReservation(APartyBeaconHost *this)

{
  UPartyBeaconState *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecbcbdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x3c8))();
    return (bool)uVar2;
  }
  return false;
}

// InitFromBeaconState @ 14ecbcf20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
APartyBeaconHost::InitFromBeaconState(APartyBeaconHost *this,UPartyBeaconState *param_1)

{
  if (((this->State).field0_0x0.DebugPtr == (UPartyBeaconState *)0x0) &&
     (param_1 != (UPartyBeaconState *)0x0)) {
    if (5 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->State).field0_0x0.DebugPtr = param_1;
    return true;
  }
  return false;
}

// InitHostBeacon @ 14ecbd030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
APartyBeaconHost::InitHostBeacon
          (APartyBeaconHost *this,int param_1,int param_2,int param_3,FName param_4,int param_5,
          bool param_6)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  char cVar5;
  longlong *plVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  UPartyBeaconState *pUVar9;
  UClass *pUVar10;
  bool bVar11;
  undefined1 auStack_128 [32];
  FName local_108;
  int local_100;
  bool local_f8;
  FName local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (5 < (byte)LogPartyBeacon._0_1_) {
    local_108.ComparisonIndex.Value = param_3;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  if (param_3 < 1) {
    bVar11 = false;
  }
  else {
    pUVar10 = (UClass *)0x0;
    local_e8.ComparisonIndex.Value = 0;
    local_e8.Number = 0;
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x870))(this,local_e0);
    lVar2 = *plVar6;
    if ((lVar2 != 0) && (pUVar7 = UPartyBeaconState::StaticClass(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        pUVar10 = (UClass *)*plVar6;
      }
    }
    pUVar8 = GetTransientPackage();
    FVar3 = local_e8;
    if (local_e8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar8,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = UPartyBeaconState::StaticClass();
    CheckIsClassChildOf_Internal(pUVar7,pUVar10);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar10);
    FVar4 = local_e8;
    local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_d8._56_8_ = (UPackage *)0x0;
    local_e8.ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_e8.Number = FVar3.Number;
    local_d8._16_4_ = local_e8.ComparisonIndex.Value;
    local_d8._20_4_ = local_e8.Number;
    local_d8._24_4_ = RF_NoFlags;
    local_d8._40_8_ = (UObject *)0x0;
    local_d8[0x20] = false;
    local_e8 = FVar4;
    local_d8._8_8_ = pUVar8;
    pUVar9 = (UPartyBeaconState *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar6 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPartyBeaconState *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->State).field0_0x0.DebugPtr = pUVar9;
    local_f8 = param_6;
    local_100 = param_5;
    local_108 = param_4;
    cVar5 = (**(code **)(pUVar9->_padding_ + 0x2b0))(pUVar9,param_1,param_2,param_3);
    bVar11 = cVar5 != '\0';
  }
  return bVar11;
}

// IsPlayerActive @ 14ecbd680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall APartyBeaconHost::IsPlayerActive(APartyBeaconHost *this,FUniqueNetIdRepl *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FUniqueNetId *pFVar3;
  UPartyBeaconState *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  IOnlineSubsystem *pIVar7;
  longlong *plVar8;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar9;
  undefined8 *puVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName local_res20;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TSharedPtr<FUniqueNetId_const_,1> local_50 [2];
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  AActor::GetWorld((AActor *)this);
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pIVar7 = IOnlineSubsystem::Get(&local_res20);
  if (pIVar7 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x20))(pIVar7,local_60);
    plVar1 = (longlong *)*plVar8;
    pTVar11 = (TReferenceControllerBase<1> *)plVar8[1];
    plVar8[1] = 0;
    *plVar8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    if (plVar1 != (longlong *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x110);
      pTVar9 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,local_50);
      if (pTVar9->Object == (FUniqueNetId *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
      }
      pFVar3 = pTVar9->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50[0].SharedReferenceCount.ReferenceController);
      pUVar4 = (this->State).field0_0x0.DebugPtr;
      puVar10 = (undefined8 *)(**(code **)(pUVar4->_padding_ + 0x300))(pUVar4,local_68);
      uVar6 = (*pcVar2)(plVar1,*puVar10,pFVar3);
      goto LAB_14ecbd6c8;
    }
  }
  uVar6 = 0;
LAB_14ecbd6c8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return (bool)uVar6;
}

// NewPlayerAdded @ 14ecbdc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall APartyBeaconHost::NewPlayerAdded(APartyBeaconHost *this,FPlayerReservation *param_1)

{
  int *piVar1;
  UPartyBeaconState *pUVar2;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUniqueNetIdMatcher FVar7;
  FStaticBasicLogRecord *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  TSharedPtr<FUniqueNetId_const_,1> local_28;
  FString local_18;
  
  bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if (bVar5) {
    if ((this->State).field0_0x0.DebugPtr != (UPartyBeaconState *)0x0) {
      FVar7.UniqueIdTarget = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)param_1);
      iVar6 = TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
              IndexOfByPredicate<FUniqueNetIdMatcher>
                        (&((this->State).field0_0x0.DebugPtr)->PlayersPendingJoin,FVar7);
      if (iVar6 != -1) {
        return;
      }
      if (5 < (byte)LogPartyBeacon._0_1_) {
        FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      pUVar2 = (this->State).field0_0x0.DebugPtr;
      pTVar10 = &pUVar2->PlayersPendingJoin;
      FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,&local_28);
      pTVar3 = (TSharedPtr<FUniqueNetId_const_,1> *)(pTVar10->AllocatorInstance).Data;
      if (((pTVar3 <= &local_28) && (&local_28 < pTVar3 + (pUVar2->PlayersPendingJoin).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (pUVar2->PlayersPendingJoin).ArrayNum;
      piVar1 = &(pUVar2->PlayersPendingJoin).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar10->AllocatorInstance,piVar1);
      }
      (pUVar2->PlayersPendingJoin).ArrayNum = iVar6 + 1;
      pFVar9 = (pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(FUniqueNetId **)pFVar9 = local_28.Object;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) =
           local_28.SharedReferenceCount.ReferenceController;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_28.Object = (FUniqueNetId *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      TDelegate<void___cdecl(FPlayerReservation_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->NewPlayerAddedDelegate,param_1);
      return;
    }
    if ((byte)LogPartyBeacon._0_1_ < 3) {
      return;
    }
    pFVar8 = &::LOG_Static;
  }
  else {
    if ((byte)LogPartyBeacon._0_1_ < 3) {
      return;
    }
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogPartyBeacon);
  return;
}

// NotifyReservationEventNextFrame @ 14ecbe060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
APartyBeaconHost::NotifyReservationEventNextFrame
          (APartyBeaconHost *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FTimerManager *this_01;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 auStack_b8 [32];
  FDelegateAllocation local_98;
  undefined1 local_88 [24];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_70;
  FTimerUnifiedDelegate local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconHost.cpp"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_01 = UWorld::GetTimerManager(this_00);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_70,param_1);
  local_88[8] = 0;
  local_88._16_8_ = &local_98;
  local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_98.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_98);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconHost::NotifyReservationEventNextFrame'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar3 + 3),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70);
  }
  FTimerUnifiedDelegate::FTimerUnifiedDelegate
            (&local_58,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_98);
  FTimerManager::InternalSetTimerForNextTick(this_01,(FTimerUnifiedDelegate *)local_88);
  if (3 < local_58.VariantDelegate.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_58.VariantDelegate.TypeIndex])(&local_58);
  if (local_98.DelegateSize != 0) {
    if (local_98.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
    goto LAB_14ecbe1d2;
    (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.DelegateSize = 0;
  }
  if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_98.DelegateAllocator);
  }
LAB_14ecbe1d2:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70);
  return;
}

// PlayerHasReservation @ 14ecc2960

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall APartyBeaconHost::PlayerHasReservation(APartyBeaconHost *this,FUniqueNetId *param_1)

{
  UPartyBeaconState *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecc297a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x390))(pUVar1);
    return (bool)uVar2;
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  return false;
}

// PlayerRemoved @ 14ecc2d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall APartyBeaconHost::PlayerRemoved(APartyBeaconHost *this,FPlayerReservation *param_1)

{
  UPartyBeaconState *pUVar1;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUniqueNetIdMatcher FVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FStaticBasicLogRecord *pFVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  FUniqueNetId *pFVar14;
  int iVar15;
  TSharedPtr<FUniqueNetId_const_,1> local_48;
  FString local_38;
  
  bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if (bVar5) {
    if ((this->State).field0_0x0.DebugPtr != (UPartyBeaconState *)0x0) {
      FVar7.UniqueIdTarget = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)param_1);
      iVar6 = TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
              IndexOfByPredicate<FUniqueNetIdMatcher>
                        (&((this->State).field0_0x0.DebugPtr)->PlayersPendingJoin,FVar7);
      if (iVar6 == -1) {
        return;
      }
      if (5 < (byte)LogPartyBeacon._0_1_) {
        FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_38);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pUVar1 = (this->State).field0_0x0.DebugPtr;
      FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,&local_48);
      pTVar2 = (TSharedPtr<FUniqueNetId_const_,1> *)
               (pUVar1->PlayersPendingJoin).AllocatorInstance.Data;
      if (((pTVar2 <= &local_48) && (&local_48 < pTVar2 + (pUVar1->PlayersPendingJoin).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (pUVar1->PlayersPendingJoin).ArrayNum;
      lVar8 = (longlong)iVar6;
      if (iVar6 != 0) {
        pFVar3 = (pUVar1->PlayersPendingJoin).AllocatorInstance.Data;
        iVar15 = 0;
        bVar5 = *(FUniqueNetId **)pFVar3 != local_48.Object;
        lVar11 = 0;
        pFVar14 = local_48.Object;
        iVar6 = 0;
        do {
          lVar11 = lVar11 + 1;
          iVar13 = iVar6 + 1;
          if (lVar11 < lVar8) {
            pFVar9 = pFVar3 + lVar11 * 0x10;
            do {
              if (bVar5 != (*(FUniqueNetId **)pFVar9 != pFVar14)) break;
              iVar13 = iVar13 + 1;
              lVar11 = lVar11 + 1;
              pFVar9 = pFVar9 + 0x10;
            } while (lVar11 < lVar8);
          }
          iVar12 = iVar13 - iVar6;
          if (bVar5 == false) {
            DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
                      ((TSharedPtr<FUniqueNetId_const_,1> *)(pFVar3 + (longlong)iVar6 * 0x10),iVar12
                      );
            pFVar14 = local_48.Object;
          }
          else {
            if (iVar15 != iVar6) {
              memmove(pFVar3 + (longlong)iVar15 * 0x10,pFVar3 + (longlong)iVar6 * 0x10,
                      (longlong)iVar12 << 4);
              pFVar14 = local_48.Object;
            }
            iVar15 = iVar15 + iVar12;
          }
          bVar5 = (bool)(bVar5 ^ 1);
          iVar6 = iVar13;
        } while (lVar11 < lVar8);
        (pUVar1->PlayersPendingJoin).ArrayNum = iVar15;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      return;
    }
    if ((byte)LogPartyBeacon._0_1_ < 3) {
      return;
    }
    pFVar10 = &::LOG_Static;
  }
  else {
    if ((byte)LogPartyBeacon._0_1_ < 3) {
      return;
    }
    pFVar10 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogPartyBeacon);
  return;
}

// PostInitProperties @ 14ecc2fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APartyBeaconHost::PostInitProperties(APartyBeaconHost *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  AActor::PostInitProperties((AActor *)this);
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"NoTimeouts");
  this->bLogoutOnSessionTimeout = !bVar1;
  return;
}

// ProcessCancelReservationRequest @ 14ecc3270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
APartyBeaconHost::ProcessCancelReservationRequest
          (APartyBeaconHost *this,APartyBeaconClient *param_1,FUniqueNetIdRepl *param_2)

{
  FUniqueNetId *pFVar1;
  bool bVar2;
  bool bVar3;
  Type TVar4;
  longlong *plVar5;
  longlong lVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  FUniqueNetIdRepl *pFVar8;
  FName local_res10;
  FString local_68;
  TSharedPtr<FUniqueNetId_const_,1> local_58;
  void *local_48 [2];
  void *local_38 [2];
  
  bVar3 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if (5 < (byte)LogPartyBeacon._0_1_) {
    if (param_1 != (APartyBeaconClient *)0x0) {
      plVar5 = (longlong *)(**(code **)(param_1->_padding_ + 0x570))(param_1);
      lVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,local_38);
      if (*(int *)(lVar6 + 8) == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    bVar2 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
    if (bVar2) {
      pTVar7 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_2,&local_58);
      pFVar1 = pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_48);
    }
    if (param_1 != (APartyBeaconClient *)0x0) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_68);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if ((param_1 != (APartyBeaconClient *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_48[0] != (void *)0x0)) {
      FMemory::Free(local_48[0]);
    }
    if ((bVar3) && (local_38[0] != (void *)0x0)) {
      FMemory::Free(local_38[0]);
    }
  }
  if (param_1 == (APartyBeaconClient *)0x0) {
    return;
  }
  pFVar8 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)param_1);
  bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)pFVar8);
  if (bVar3) {
    pFVar8 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)param_1);
    bVar3 = ::operator==((FUniqueNetIdWrapper *)pFVar8,(FUniqueNetIdWrapper *)param_2);
    if (bVar3) {
      TVar4 = (**(code **)(this->_padding_ + 0x820))(this,param_2);
      if (5 < (byte)LogPartyBeacon._0_1_) {
        EPartyReservationResult::ToString(TVar4);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        if ((5 < (byte)LogPartyBeacon._0_1_) && (TVar4 != ReservationRequestCanceled)) {
          (**(code **)(this->_padding_ + 0x860))(this);
        }
      }
      goto LAB_14ecc3487;
    }
  }
  TVar4 = ReservationInvalid;
LAB_14ecc3487:
  (**(code **)(param_1->_padding_ + 0x850))(param_1,TVar4);
  return;
}

// ProcessReservationAddOrUpdateRequest @ 14ecc3740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
APartyBeaconHost::ProcessReservationAddOrUpdateRequest
          (APartyBeaconHost *this,APartyBeaconClient *param_1,FString *param_2,
          FPartyReservation *param_3)

{
  FUniqueNetId *pFVar1;
  UPartyBeaconState *pUVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  Type TVar6;
  longlong *plVar7;
  longlong lVar8;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar9;
  FUniqueNetIdRepl *pFVar10;
  TSharedPtr<FUniqueNetId_const_,1> local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  bVar4 = false;
  if (5 < (byte)LogPartyBeacon._0_1_) {
    if (param_1 != (APartyBeaconClient *)0x0) {
      plVar7 = (longlong *)(**(code **)(param_1->_padding_ + 0x570))(param_1);
      lVar8 = (**(code **)(*plVar7 + 0x2d8))(plVar7,local_48);
      if (*(int *)(lVar8 + 8) == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = true;
      }
    }
    bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&param_3->PartyLeader);
    if (bVar3) {
      pTVar9 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&param_3->PartyLeader,&local_78);
      pFVar1 = pTVar9->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_58);
    }
    if (param_1 != (APartyBeaconClient *)0x0) {
      local_78.Object = (FUniqueNetId *)param_1->_padding_;
      ::FName::ToString((FName *)&local_78,&local_68);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if ((param_1 != (APartyBeaconClient *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_58[0] != (void *)0x0)) {
      FMemory::Free(local_58[0]);
    }
    if ((bVar4) && (local_48[0] != (void *)0x0)) {
      FMemory::Free(local_48[0]);
    }
  }
  if (param_1 != (APartyBeaconClient *)0x0) {
    pFVar10 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)param_1);
    bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)pFVar10);
    if (bVar4) {
      pFVar10 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)param_1);
      bVar4 = ::operator==((FUniqueNetIdWrapper *)pFVar10,
                           (FUniqueNetIdWrapper *)&param_3->PartyLeader);
      if (bVar4) {
        TVar6 = BadSessionId;
        bVar4 = DoesSessionMatch(this,param_2);
        if (bVar4) {
          pUVar2 = (this->State).field0_0x0.DebugPtr;
          iVar5 = (**(code **)(pUVar2->_padding_ + 0x310))(pUVar2,&param_3->PartyLeader);
          if (iVar5 == -1) {
            TVar6 = (**(code **)(this->_padding_ + 0x810))(this,param_3);
          }
          else {
            TVar6 = (**(code **)(this->_padding_ + 0x818))(this,param_3,0);
          }
        }
        if (5 < (byte)LogPartyBeacon._0_1_) {
          EPartyReservationResult::ToString(TVar6);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          if ((5 < (byte)LogPartyBeacon._0_1_) && (TVar6 != ReservationAccepted)) {
            (**(code **)(this->_padding_ + 0x860))(this);
            FPartyReservation::Dump(param_3);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00014ecc39e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1->_padding_ + 0x848))(param_1,TVar6);
        return;
      }
    }
    (**(code **)(param_1->_padding_ + 0x850))(param_1,0xd);
  }
  return;
}

// ProcessReservationRequest @ 14ecc3a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
APartyBeaconHost::ProcessReservationRequest
          (APartyBeaconHost *this,APartyBeaconClient *param_1,FString *param_2,
          FPartyReservation *param_3)

{
  FUniqueNetId *pFVar1;
  bool bVar2;
  bool bVar3;
  Type TVar4;
  longlong *plVar5;
  longlong lVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  FUniqueNetIdRepl *pFVar8;
  TSharedPtr<FUniqueNetId_const_,1> local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  bVar3 = false;
  if (5 < (byte)LogPartyBeacon._0_1_) {
    if (param_1 != (APartyBeaconClient *)0x0) {
      plVar5 = (longlong *)(**(code **)(param_1->_padding_ + 0x570))(param_1);
      lVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,local_48);
      if (*(int *)(lVar6 + 8) == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    bVar2 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&param_3->PartyLeader);
    if (bVar2) {
      pTVar7 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&param_3->PartyLeader,&local_78);
      pFVar1 = pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_58);
    }
    if (param_1 != (APartyBeaconClient *)0x0) {
      local_78.Object = (FUniqueNetId *)param_1->_padding_;
      ::FName::ToString((FName *)&local_78,&local_68);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if ((param_1 != (APartyBeaconClient *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_58[0] != (void *)0x0)) {
      FMemory::Free(local_58[0]);
    }
    if ((bVar3) && (local_48[0] != (void *)0x0)) {
      FMemory::Free(local_48[0]);
    }
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    FPartyReservation::Dump(param_3);
  }
  if (param_1 != (APartyBeaconClient *)0x0) {
    pFVar8 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)param_1);
    bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)pFVar8);
    if (bVar3) {
      pFVar8 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)param_1);
      bVar3 = ::operator==((FUniqueNetIdWrapper *)pFVar8,
                           (FUniqueNetIdWrapper *)&param_3->PartyLeader);
      if (bVar3) {
        TVar4 = BadSessionId;
        bVar3 = DoesSessionMatch(this,param_2);
        if (bVar3) {
          TVar4 = (**(code **)(this->_padding_ + 0x810))(this,param_3);
        }
        if (5 < (byte)LogPartyBeacon._0_1_) {
          EPartyReservationResult::ToString(TVar4);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          if ((5 < (byte)LogPartyBeacon._0_1_) && (TVar4 != ReservationAccepted)) {
            (**(code **)(this->_padding_ + 0x860))(this);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00014ecc3d21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1->_padding_ + 0x848))(param_1,TVar4);
        return;
      }
    }
    (**(code **)(param_1->_padding_ + 0x850))(param_1,0xd);
  }
  return;
}

// ProcessReservationUpdateRequest @ 14ecc40f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
APartyBeaconHost::ProcessReservationUpdateRequest
          (APartyBeaconHost *this,APartyBeaconClient *param_1,FString *param_2,
          FPartyReservation *param_3,bool param_4)

{
  FUniqueNetId *pFVar1;
  TObjectPtr<UPartyBeaconState> TVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  ForAnyElementType this_00;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  Type TVar8;
  longlong *plVar9;
  longlong lVar10;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar11;
  FUniqueNetIdRepl *pFVar12;
  ulonglong uVar13;
  ForAnyElementType this_01;
  uint uVar14;
  undefined1 auStackY_288 [32];
  FString local_240;
  FString local_230;
  FString *local_220;
  FName local_218;
  FString local_210;
  TSharedPtr<FUniqueNetId_const_,1> local_200;
  void *local_1f0 [2];
  void *local_1e0 [2];
  undefined1 local_1d0 [8];
  FUniqueNetIdRepl local_1c8;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_198;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar6 = false;
  local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  local_220 = param_2;
  if (5 < (byte)LogPartyBeacon._0_1_) {
    if (param_1 != (APartyBeaconClient *)0x0) {
      plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x570))(param_1);
      lVar10 = (**(code **)(*plVar9 + 0x2d8))(plVar9,local_1e0);
      if (*(int *)(lVar10 + 8) == 0) {
        bVar6 = true;
      }
      else {
        bVar6 = true;
      }
    }
    bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&param_3->PartyLeader);
    if (bVar5) {
      pTVar11 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&param_3->PartyLeader,&local_200);
      pFVar1 = pTVar11->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_200.SharedReferenceCount.ReferenceController);
      (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_1f0);
    }
    if (param_1 != (APartyBeaconClient *)0x0) {
      local_218 = (FName)param_1->_padding_;
      ::FName::ToString(&local_218,&local_210);
    }
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"APartyBeaconHost::ProcessReservationUpdateRequest",0x31,Yes);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
    if ((param_1 != (APartyBeaconClient *)0x0) &&
       (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if ((bVar5) && (local_1f0[0] != (void *)0x0)) {
      FMemory::Free(local_1f0[0]);
    }
    if ((bVar6) && (local_1e0[0] != (void *)0x0)) {
      FMemory::Free(local_1e0[0]);
    }
  }
  this_01.Data = local_230.Data.AllocatorInstance.Data;
  this_00.Data = local_240.Data.AllocatorInstance.Data;
  if (param_1 != (APartyBeaconClient *)0x0) {
    pFVar12 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)param_1);
    bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)pFVar12);
    if (bVar6) {
      pFVar12 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)param_1);
      bVar6 = ::operator==((FUniqueNetIdWrapper *)pFVar12,(FUniqueNetIdWrapper *)(this_01.Data + 8))
      ;
      pTVar4 = BeaconConsoleVariables::CVarRemapReservationUpdateToExistingReservation.Ref;
      if (bVar6) {
        local_1c8._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
        local_1c8._padding_ = 0;
        local_1c8._padding_ = 0;
        local_1d0._0_4_ = -1;
        local_1c8._padding_._0_1_ = 0;
        local_1c8.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.ReplicationBytes.ArrayNum = 0;
        local_1c8.ReplicationBytes.ArrayMax = 0;
        local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.ArrayNum = 0;
        local_198.ArrayMax = 0;
        local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.ArrayNum = 0;
        local_188.ArrayMax = 0;
        bVar6 = IsInParallelGameThread();
        if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((pTVar4->ShadowedValue[0] != false) &&
           (TVar2.field0_0x0 =
                 (TObjectPtr<UPartyBeaconState>_u_0)
                 ((TObjectPtr<UPartyBeaconState>_u_0 *)(this_00.Data + 0x2e8))->DebugPtr,
           TVar2.field0_0x0 != (UPartyBeaconState *)0x0)) {
          uVar7 = (**(code **)(*(longlong *)TVar2.field0_0x0 + 0x318))
                            (TVar2.field0_0x0,this_01.Data + 8);
          if (uVar7 != 0xffffffff) {
            plVar9 = (longlong *)
                     (**(code **)(((TObjectPtr<UPartyBeaconState>_u_0 *)(this_00.Data + 0x2e8))->
                                  DebugPtr->_padding_ + 0x308))
                               (((TObjectPtr<UPartyBeaconState>_u_0 *)(this_00.Data + 0x2e8))->
                                DebugPtr);
            uVar14 = 0;
            if ((int)uVar7 < (int)plVar9[1]) {
              uVar14 = ~uVar7 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar10 = (longlong)(int)uVar7 * 0x58 + *plVar9;
            if (lVar10 != 0) {
              pFVar12 = (FUniqueNetIdRepl *)(lVar10 + 8);
              bVar6 = ::operator==((FUniqueNetIdWrapper *)pFVar12,
                                   (FUniqueNetIdWrapper *)(local_1d0 + 8));
              if (!bVar6) {
                if (4 < (byte)LogPartyBeacon._0_1_) {
                  FUniqueNetIdWrapper::ToDebugString
                            ((FUniqueNetIdWrapper *)(local_1d0 + 8),&local_240);
                  FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)pFVar12,&local_230);
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
                  if ((FPartyReservation *)local_230.Data.AllocatorInstance.Data !=
                      (FPartyReservation *)0x0) {
                    FMemory::Free(local_230.Data.AllocatorInstance.Data);
                  }
                  if ((APartyBeaconHost *)local_240.Data.AllocatorInstance.Data !=
                      (APartyBeaconHost *)0x0) {
                    FMemory::Free(local_240.Data.AllocatorInstance.Data);
                  }
                }
                local_1d0._0_4_ = *(undefined4 *)this_01.Data;
                FUniqueNetIdRepl::operator=
                          ((FUniqueNetIdRepl *)(local_1d0 + 8),
                           (FUniqueNetIdRepl *)(this_01.Data + 8));
                TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                          ((TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *)
                           (local_1d0 + 0x38),
                           (TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *)
                           (this_01.Data + 0x38));
                TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                          ((TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *)
                           (local_1d0 + 0x48),
                           (TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *)
                           (this_01.Data + 0x48));
                FUniqueNetIdRepl::operator=((FUniqueNetIdRepl *)(local_1d0 + 8),pFVar12);
                this_01.Data = (FScriptContainerElement *)local_1d0;
              }
            }
          }
        }
        TVar8 = BadSessionId;
        bVar6 = DoesSessionMatch((APartyBeaconHost *)this_00.Data,local_220);
        if (bVar6) {
          TVar8 = (**(code **)(*(longlong *)this_00.Data + 0x818))
                            (this_00.Data,this_01.Data,param_4);
        }
        if (5 < (byte)LogPartyBeacon._0_1_) {
          EPartyReservationResult::ToString(TVar8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          if ((5 < (byte)LogPartyBeacon._0_1_) && (TVar8 != ReservationAccepted)) {
            (**(code **)(*(longlong *)this_00.Data + 0x860))(this_00.Data);
            FPartyReservation::Dump((FPartyReservation *)this_01.Data);
          }
        }
        (**(code **)(param_1->_padding_ + 0x848))(param_1,TVar8);
        DestructItems<FPlayerReservation,int>
                  ((FPlayerReservation *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
        if ((FPlayerReservation *)local_188.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
          FMemory::Free(local_188.AllocatorInstance.Data);
        }
        DestructItems<FPlayerReservation,int>
                  ((FPlayerReservation *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
        if ((FPlayerReservation *)local_198.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
          FMemory::Free(local_198.AllocatorInstance.Data);
        }
        local_1c8._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
        if (local_1c8.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.ReplicationBytes.AllocatorInstance.Data);
        }
        uVar13 = (ulonglong)(byte)local_1c8._padding_;
        if ((1 < (byte)local_1c8._padding_) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13] ==
            UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_1c8._padding_);
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_1d0 + 0x10);
        return;
      }
    }
    (**(code **)(param_1->_padding_ + 0x850))(param_1,0xd);
  }
  return;
}

// ReconfigureTeamAndPlayerCount @ 14ecc54d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
APartyBeaconHost::ReconfigureTeamAndPlayerCount
          (APartyBeaconHost *this,int param_1,int param_2,int param_3)

{
  UPartyBeaconState *pUVar1;
  undefined1 uVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  if ((this->_padding_ != 0) &&
     (pUVar1 = (this->State).field0_0x0.DebugPtr, pUVar1 != (UPartyBeaconState *)0x0)) {
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2b8))
                      (pUVar1,CONCAT44(in_register_00000014,param_1),
                       CONCAT44(in_register_00000084,param_2));
    if (4 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    return (bool)uVar2;
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  return false;
}

// RegisterAuthTicket @ 14ecc5700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
APartyBeaconHost::RegisterAuthTicket
          (APartyBeaconHost *this,FUniqueNetIdRepl *param_1,FString *param_2)

{
  UPartyBeaconState *this_00;
  
  this_00 = (this->State).field0_0x0.DebugPtr;
  if (this_00 != (UPartyBeaconState *)0x0) {
    UPartyBeaconState::RegisterAuthTicket(this_00,param_1,param_2);
    return;
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    return;
  }
  return;
}

// RemovePartyReservation @ 14ecc64f0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
APartyBeaconHost::RemovePartyReservation(APartyBeaconHost *this,FUniqueNetIdRepl *param_1)

{
  UPartyBeaconState *pUVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  FUniqueNetId *pFVar5;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar6;
  longlong lVar7;
  bool bVar8;
  TSharedPtr<FUniqueNetId_const_,1> local_38;
  void *local_28 [4];
  
  bVar8 = false;
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPartyBeaconState *)0x0) &&
     (cVar3 = (**(code **)(pUVar1->_padding_ + 0x2d8))(), cVar3 != '\0')) {
    pFVar5 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CancelationReceived,
               (FReadAccessScope *)local_28);
    if ((*(int *)&(this->CancelationReceived).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->CancelationReceived).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,pFVar5);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
    SendReservationUpdates(this);
    NotifyReservationEventNextFrame(this,&this->ReservationChanged);
    return ReservationRequestCanceled;
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
    if (bVar4) {
      pTVar6 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,&local_38);
      pFVar5 = pTVar6->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      lVar7 = (**(code **)(*(longlong *)pFVar5 + 0x30))(pFVar5,local_28);
      if (*(int *)(lVar7 + 8) == 0) {
        bVar8 = true;
      }
      else {
        bVar8 = true;
      }
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if ((bVar8) && (local_28[0] != (void *)0x0)) {
      FMemory::Free(local_28[0]);
    }
  }
  return ReservationNotFound;
}

// SendReservationUpdates @ 14ecc86a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall APartyBeaconHost::SendReservationUpdates(APartyBeaconHost *this)

{
  longlong *plVar1;
  int iVar2;
  UPartyBeaconState *pUVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->State).field0_0x0.DebugPtr;
  if ((pUVar3 != (UPartyBeaconState *)0x0) && (0 < (int)this->_padding_)) {
    iVar5 = (**(code **)(pUVar3->_padding_ + 0x330))();
    iVar6 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x328))();
    if (iVar5 < iVar6) {
      if (iVar5 < 1) {
        if (5 < (byte)LogPartyBeacon._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        }
        plVar8 = (longlong *)this->_padding_;
        iVar5 = (int)this->_padding_;
        plVar1 = plVar8 + iVar5;
        while( true ) {
          if ((int)this->_padding_ != iVar5) {
            `TCheckedPointerIterator<TObjectPtr<AOnlineBeaconClient>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar8 == plVar1) break;
          plVar4 = (longlong *)*plVar8;
          if (plVar4 != (longlong *)0x0) {
            pUVar7 = Z_Construct_UClass_APartyBeaconClient_NoRegister();
            iVar6 = (int)pUVar7->_padding_;
            if ((iVar6 <= *(int *)(plVar4[2] + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar6 * 8)
                == &pUVar7->_padding_)) {
              (**(code **)(*plVar4 + 0x860))(plVar4);
            }
          }
          plVar8 = plVar8 + 1;
        }
      }
      else {
        if (5 < (byte)LogPartyBeacon._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        }
        plVar8 = (longlong *)this->_padding_;
        iVar6 = (int)this->_padding_;
        plVar1 = plVar8 + iVar6;
        while( true ) {
          if ((int)this->_padding_ != iVar6) {
            `TCheckedPointerIterator<TObjectPtr<AOnlineBeaconClient>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar8 == plVar1) break;
          plVar4 = (longlong *)*plVar8;
          if (plVar4 != (longlong *)0x0) {
            pUVar7 = Z_Construct_UClass_APartyBeaconClient_NoRegister();
            iVar2 = (int)pUVar7->_padding_;
            if ((iVar2 <= *(int *)(plVar4[2] + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar2 * 8)
                == &pUVar7->_padding_)) {
              (**(code **)(*plVar4 + 0x858))(plVar4,iVar5);
            }
          }
          plVar8 = plVar8 + 1;
        }
      }
    }
  }
  return;
}

// SetCompetitiveIntegrity @ 14ecc8f60

void __thiscall APartyBeaconHost::SetCompetitiveIntegrity(APartyBeaconHost *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ecc8f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
  return;
}

// SetTeamAssignmentMethod @ 14ecc8f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall APartyBeaconHost::SetTeamAssignmentMethod(APartyBeaconHost *this,FName param_1)

{
  UPartyBeaconState *pUVar1;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecc8f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2c8))();
    return;
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    return;
  }
  return;
}

// ShouldRespectCompetitiveIntegrity @ 14ecc8ff0

bool __thiscall APartyBeaconHost::ShouldRespectCompetitiveIntegrity(APartyBeaconHost *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecc8ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x368))();
  return (bool)uVar1;
}

// StaticRegisterNativesAPartyBeaconHost @ 14ecca380

void __cdecl APartyBeaconHost::StaticRegisterNativesAPartyBeaconHost(void)

{
  return;
}

// SwapTeams @ 14ecca4f0

bool __thiscall
APartyBeaconHost::SwapTeams
          (APartyBeaconHost *this,FUniqueNetIdRepl *param_1,FUniqueNetIdRepl *param_2)

{
  UPartyBeaconState *pUVar1;
  char cVar2;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2e8))();
    if (cVar2 != '\0') {
      NotifyReservationEventNextFrame(this,&this->ReservationChanged);
      return true;
    }
  }
  return false;
}

// Tick @ 14eccd790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APartyBeaconHost::Tick(APartyBeaconHost *this,float param_1)

{
  FObjectPtr_u_0 *this_00;
  float fVar1;
  longlong *plVar2;
  UPartyBeaconState *pUVar3;
  longlong lVar4;
  FObjectPtr FVar5;
  TObjectPtr<UPartyBeaconState>_u_0 TVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  IOnlineSubsystem *pIVar14;
  longlong *plVar15;
  longlong lVar16;
  UClass *pUVar17;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar18;
  FUniqueNetId *pFVar19;
  FUniqueNetId *pFVar20;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar21;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar22;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar23;
  int iVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  TReferenceControllerBase<1> *pTVar30;
  TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this_01;
  longlong lVar31;
  FUniqueNetIdWrapper *pFVar32;
  float fVar33;
  undefined1 auStackY_1f8 [32];
  uint local_1b8;
  longlong local_1a0;
  TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> local_188;
  longlong *local_178;
  undefined8 local_170;
  FName local_168;
  FName local_160 [2];
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  TSharedPtr<FUniqueNetId_const_,1> local_120;
  undefined1 local_110 [8];
  TReferenceControllerBase<1> *local_108;
  TSharedPtr<FUniqueNetId_const_,1> local_100;
  TSharedPtr<FUniqueNetId_const_,1> local_f0;
  TSharedPtr<FUniqueNetId_const_,1> local_e0;
  FString local_d0;
  FString local_c0;
  TSharedPtr<FUniqueNetId_const_,1> local_b0;
  void *local_a0 [4];
  undefined **local_80;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_78;
  void *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar30 = (TReferenceControllerBase<1> *)0x0;
  if ((this->State).field0_0x0.DebugPtr != (UPartyBeaconState *)0x0) {
    AActor::GetWorld((AActor *)this);
    local_170 = 0;
    local_160[0].ComparisonIndex.Value = 0;
    local_160[0].Number = 0;
    pIVar14 = IOnlineSubsystem::Get(local_160);
    if (pIVar14 == (IOnlineSubsystem *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      plVar15 = (longlong *)(**(code **)(pIVar14->_padding_ + 0x20))(pIVar14,local_110);
      pTVar30 = (TReferenceControllerBase<1> *)plVar15[1];
      plVar2 = (longlong *)*plVar15;
      plVar15[1] = 0;
      *plVar15 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108)
      ;
      if (plVar2 != (longlong *)0x0) {
        pUVar3 = (this->State).field0_0x0.DebugPtr;
        (**(code **)(pUVar3->_padding_ + 0x300))(pUVar3,&local_168);
        plVar15 = (longlong *)
                  (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x308))();
        local_178 = plVar15;
        lVar16 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (lVar16 != 0) {
          iVar25 = (int)plVar15[1];
          local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_188.ArrayNum = 0;
          local_188.ArrayMax = 0;
          local_1b8 = 0;
          iVar24 = 0;
          if (0 < iVar25) {
            local_1a0 = 0;
            do {
              uVar28 = 0;
              if ((int)local_1b8 < iVar25) {
                uVar28 = ~local_1b8 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar4 = *plVar15;
              lVar31 = 0;
              uVar28 = 0;
              if (0 < (int)this->_padding_) {
                plVar2 = &this->_padding_;
                do {
                  uVar29 = 0;
                  if ((int)uVar28 < (int)this->_padding_) {
                    uVar29 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  this_00 = (FObjectPtr_u_0 *)(*plVar2 + lVar31 * 8);
                  if (*(longlong *)(*plVar2 + lVar31 * 8) == 0) {
LAB_14eccdbae:
                    if (1 < (byte)LogPartyBeacon._0_1_) {
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
                    }
                    uVar29 = 0;
                    if ((int)uVar28 < (int)this->_padding_) {
                      uVar29 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar29 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    iVar25 = (int)this->_padding_;
                    iVar24 = ~uVar28 + iVar25;
                    if (1 < iVar24) {
                      iVar24 = 1;
                    }
                    if (iVar24 != 0) {
                      memmove((void *)(*plVar2 + (longlong)(int)uVar28 * 8),
                              (void *)(*plVar2 + (longlong)(iVar25 - iVar24) * 8),
                              (longlong)iVar24 << 3);
                    }
                    *(int *)&this->_padding_ = (int)this->_padding_ + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,(ForAnyElementType *)plVar2,(int)this->_padding_,
                               (int *)((longlong)&this->_padding_ + 4));
                    uVar28 = uVar28 - 1;
                    lVar31 = lVar31 + -1;
                  }
                  else {
                    pUVar17 = Z_Construct_UClass_APartyBeaconClient_NoRegister();
                    bVar10 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar17);
                    if ((!bVar10) ||
                       (FVar5.field0_0x0 = (FObjectPtr_u_0)this_00->Handle,
                       FVar5.field0_0x0 == (UObject *)0x0)) goto LAB_14eccdbae;
                    pFVar32 = (FUniqueNetIdWrapper *)(local_1a0 + lVar4 + 8);
                    bVar10 = FUniqueNetIdWrapper::IsValid
                                       ((FUniqueNetIdWrapper *)((longlong)FVar5.field0_0x0 + 0x3b8))
                    ;
                    bVar11 = FUniqueNetIdWrapper::IsValid(pFVar32);
                    if (bVar10 == bVar11) {
                      if (!bVar10) {
LAB_14eccdc69:
                        uVar28 = 0;
                        if (0 < *(int *)(local_1a0 + 0x40 + lVar4)) {
                          lVar31 = 0;
                          do {
                            uVar29 = 0;
                            if ((int)uVar28 < *(int *)(local_1a0 + 0x40 + lVar4)) {
                              uVar29 = ~uVar28 >> 0x1f;
                            }
                            if ((uVar29 == 0) &&
                               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                              pcVar9 = (code *)swi(3);
                              (*pcVar9)();
                              return;
                            }
                            uVar28 = uVar28 + 1;
                            *(undefined4 *)(*(longlong *)(local_1a0 + 0x38 + lVar4) + 0x54 + lVar31)
                                 = 0;
                            lVar31 = lVar31 + 0x58;
                          } while ((int)uVar28 < *(int *)(local_1a0 + 0x40 + lVar4));
                        }
                        goto LAB_14eccdf34;
                      }
                      if (*(uchar *)((longlong)FVar5.field0_0x0 + 0x3d0) ==
                          (pFVar32->Variant).TypeIndex) {
                        bVar10 = FUniqueNetIdWrapper::IsV1
                                           ((FUniqueNetIdWrapper *)
                                            ((longlong)FVar5.field0_0x0 + 0x3b8));
                        if (bVar10) {
                          pTVar18 = FUniqueNetIdWrapper::GetV1Unsafe(pFVar32);
                          pFVar19 = TSharedPtr<FUniqueNetId_const_,1>::
                                    operator*<FUniqueNetId_const_>(pTVar18);
                          pTVar18 = FUniqueNetIdWrapper::GetV1Unsafe
                                              ((FUniqueNetIdWrapper *)
                                               ((longlong)FVar5.field0_0x0 + 0x3b8));
                          pFVar20 = TSharedPtr<FUniqueNetId_const_,1>::
                                    operator*<FUniqueNetId_const_>(pTVar18);
                          cVar12 = (*(code *)**(undefined8 **)pFVar20)(pFVar20,pFVar19);
                        }
                        else {
                          pTVar21 = FUniqueNetIdWrapper::GetV2Unsafe
                                              ((FUniqueNetIdWrapper *)
                                               ((longlong)FVar5.field0_0x0 + 0x3b8));
                          pTVar22 = FUniqueNetIdWrapper::GetV2Unsafe(pFVar32);
                          cVar12 = pTVar21->Value == pTVar22->Value;
                        }
                        if (cVar12 != '\0') goto LAB_14eccdc69;
                      }
                    }
                  }
                  uVar28 = uVar28 + 1;
                  lVar31 = lVar31 + 1;
                } while ((int)uVar28 < (int)this->_padding_);
              }
              uVar28 = 0;
              if (0 < *(int *)(local_1a0 + 0x40 + lVar4)) {
                lVar31 = 0;
                do {
                  uVar29 = 0;
                  if ((int)uVar28 < *(int *)(local_1a0 + 0x40 + lVar4)) {
                    uVar29 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar32 = (FUniqueNetIdWrapper *)
                            (*(longlong *)(local_1a0 + 0x38 + lVar4) + lVar31);
                  if (*(longlong *)(lVar16 + 8) == 0) {
LAB_14eccdcf9:
                    bVar10 = false;
                  }
                  else {
                    pTVar18 = FUniqueNetIdWrapper::GetV1(pFVar32,&local_100);
                    if ((pTVar18->Object == (FUniqueNetId *)0x0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x44d,L""), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar19 = pTVar18->Object;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_100.SharedReferenceCount.ReferenceController);
                    if ((*(longlong *)(lVar16 + 8) == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x44d,L""), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    cVar12 = (**(code **)**(undefined8 **)(lVar16 + 8))
                                       (*(undefined8 **)(lVar16 + 8),pFVar19);
                    if (cVar12 == '\0') goto LAB_14eccdcf9;
                    bVar10 = true;
                  }
                  cVar12 = (**(code **)(this->_padding_ + 0x868))(this,pFVar32);
                  if ((cVar12 != '\0') || (bVar10)) {
                    pTVar18 = FUniqueNetIdWrapper::GetV1(pFVar32,&local_e0);
                    if ((pTVar18->Object == (FUniqueNetId *)0x0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x44d,L""), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar19 = pTVar18->Object;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_e0.SharedReferenceCount.ReferenceController);
                    TVar6 = (this->State).field0_0x0;
                    plVar2 = *(longlong **)((longlong)TVar6 + 0x90);
                    iVar25 = ((TVar6.DebugPtr)->PlayersPendingJoin).ArrayNum;
                    for (plVar15 = plVar2; plVar15 != plVar2 + (longlong)iVar25 * 2;
                        plVar15 = plVar15 + 2) {
                      if ((*plVar15 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x44d,L""), bVar10)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      cVar12 = (*(code *)**(undefined8 **)pFVar19)(pFVar19,*plVar15);
                      if (cVar12 != '\0') {
                        uVar29 = (uint)((longlong)plVar15 - (longlong)plVar2 >> 4);
                        if (uVar29 != 0xffffffff) {
                          if (3 < (byte)LogPartyBeacon._0_1_) {
                            ::FName::ToString(&local_168,&local_c0);
                            FUniqueNetIdWrapper::ToDebugString(pFVar32,&local_d0);
                            local_150 = (FName)this->_padding_;
                            ::FName::ToString(&local_150,&local_140);
                            UE::Logging::Private::BasicLog<4>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
                            if (local_140.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_140.Data.AllocatorInstance.Data);
                            }
                            if (local_d0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                            }
                            if (local_c0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                            }
                          }
                          *(undefined4 *)((longlong)&pFVar32[2].Variant._padding_ + 4) = 0;
                          pUVar3 = (this->State).field0_0x0.DebugPtr;
                          uVar13 = 0;
                          if ((int)uVar29 < (pUVar3->PlayersPendingJoin).ArrayNum) {
                            uVar13 = ~uVar29 >> 0x1f;
                          }
                          if ((uVar13 == 0) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar10)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
                          RemoveAtSwapImpl(&pUVar3->PlayersPendingJoin,uVar29);
                          UE::Core::Private::
                          ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x10,8,&(pUVar3->PlayersPendingJoin).AllocatorInstance,
                                     (pUVar3->PlayersPendingJoin).ArrayNum,
                                     &(pUVar3->PlayersPendingJoin).ArrayMax);
                        }
                        break;
                      }
                    }
                  }
                  else {
                    *(float *)((longlong)&pFVar32[2].Variant._padding_ + 4) =
                         param_1 + *(float *)((longlong)&pFVar32[2].Variant._padding_ + 4);
                    if (this->bLogoutOnSessionTimeout != false) {
                      pTVar18 = FUniqueNetIdWrapper::GetV1(pFVar32,&local_f0);
                      if ((pTVar18->Object == (FUniqueNetId *)0x0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x44d,L""), bVar10)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pFVar19 = pTVar18->Object;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_f0.SharedReferenceCount.ReferenceController);
                      TVar6 = (this->State).field0_0x0;
                      plVar2 = *(longlong **)((longlong)TVar6 + 0x90);
                      iVar25 = ((TVar6.DebugPtr)->PlayersPendingJoin).ArrayNum;
                      for (plVar15 = plVar2; plVar15 != plVar2 + (longlong)iVar25 * 2;
                          plVar15 = plVar15 + 2) {
                        if ((*plVar15 == 0) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x44d,L""), bVar10)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        cVar12 = (*(code *)**(undefined8 **)pFVar19)(pFVar19,*plVar15);
                        if (cVar12 != '\0') {
                          if ((int)((longlong)plVar15 - (longlong)plVar2 >> 4) != -1) {
                            if (this->TravelSessionTimeoutSecs <
                                *(float *)((longlong)&pFVar32[2].Variant._padding_ + 4))
                            goto LAB_14eccde08;
                            goto LAB_14eccdf13;
                          }
                          break;
                        }
                      }
                      fVar1 = *(float *)((longlong)&pFVar32[2].Variant._padding_ + 4);
                      fVar33 = (float)(**(code **)(this->_padding_ + 0x808))(this,pFVar32);
                      if (fVar33 < fVar1) {
LAB_14eccde08:
                        FUniqueNetIdWrapper::GetV1(pFVar32,&local_120);
                        TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
                        AddUniqueImpl<TSharedPtr<FUniqueNetId_const_,1>_>(&local_188,&local_120);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline
                                  (local_120.SharedReferenceCount.ReferenceController);
                      }
                    }
                  }
LAB_14eccdf13:
                  uVar28 = uVar28 + 1;
                  lVar31 = lVar31 + 0x58;
                } while ((int)uVar28 < *(int *)(local_1a0 + 0x40 + lVar4));
              }
LAB_14eccdf34:
              local_1a0 = local_1a0 + 0x58;
              local_1b8 = local_1b8 + 1;
              iVar25 = (int)local_178[1];
              plVar15 = local_178;
            } while ((int)local_1b8 < iVar25);
            iVar24 = local_188.ArrayNum;
          }
          if ((this->bLogoutOnSessionTimeout != false) && (local_1b8 = 0, 0 < iVar24)) {
            local_1a0 = 0;
            do {
              uVar28 = 0;
              if ((int)local_1b8 < iVar24) {
                uVar28 = ~local_1b8 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar28 = 0;
              iVar25 = (int)plVar15[1];
              pTVar18 = (TSharedPtr<FUniqueNetId_const_,1> *)
                        (local_188.AllocatorInstance.Data + local_1a0);
              if (0 < iVar25) {
                lVar16 = 0;
                do {
                  uVar29 = 0;
                  if ((int)uVar28 < iVar25) {
                    uVar29 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  lVar4 = *plVar15;
                  uVar29 = 0;
                  if (0 < *(int *)(lVar16 + 0x40 + lVar4)) {
                    lVar31 = 0;
                    do {
                      uVar13 = 0;
                      if ((int)uVar29 < *(int *)(lVar16 + 0x40 + lVar4)) {
                        uVar13 = ~uVar29 >> 0x1f;
                      }
                      if ((uVar13 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar7 = *(longlong *)(lVar16 + 0x38 + lVar4);
                      if ((pTVar18->Object == (FUniqueNetId *)0x0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x44d,L""), bVar10)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pFVar19 = pTVar18->Object;
                      pTVar23 = FUniqueNetIdWrapper::GetV1
                                          ((FUniqueNetIdWrapper *)(lVar7 + lVar31),&local_b0);
                      if ((pTVar23->Object == (FUniqueNetId *)0x0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x44d,L""), bVar10)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pFVar20 = pTVar23->Object;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_b0.SharedReferenceCount.ReferenceController);
                      cVar12 = (*(code *)**(undefined8 **)pFVar20)(pFVar20,pFVar19);
                      if (cVar12 != '\0') goto LAB_14ecce307;
                      uVar29 = uVar29 + 1;
                      lVar31 = lVar31 + 0x58;
                    } while ((int)uVar29 < *(int *)(lVar16 + 0x40 + lVar4));
                  }
                  uVar28 = uVar28 + 1;
                  lVar16 = lVar16 + 0x58;
                  iVar25 = (int)local_178[1];
                  plVar15 = local_178;
                } while ((int)uVar28 < iVar25);
              }
LAB_14ecce307:
              if (3 < (byte)LogPartyBeacon._0_1_) {
                if ((pTVar18->Object == (FUniqueNetId *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                (**(code **)(*(longlong *)pTVar18->Object + 0x38))(pTVar18->Object,local_a0);
                local_148 = (FName)this->_padding_;
                ::FName::ToString(&local_148,&local_130);
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon)
                ;
                if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130.Data.AllocatorInstance.Data);
                }
                if (local_a0[0] != (void *)0x0) {
                  FMemory::Free(local_a0[0]);
                }
              }
              pUVar3 = (this->State).field0_0x0.DebugPtr;
              this_01 = &pUVar3->PlayersPendingJoin;
              pFVar8 = (this_01->AllocatorInstance).Data;
              if (pFVar8 != pFVar8 + (longlong)(pUVar3->PlayersPendingJoin).ArrayNum * 0x10) {
                pFVar26 = pFVar8;
                do {
                  if (*(FUniqueNetId **)pFVar26 == pTVar18->Object) {
                    uVar28 = (uint)((longlong)pFVar26 - (longlong)pFVar8 >> 4);
                    if (uVar28 != 0xffffffff) {
                      uVar29 = 0;
                      if ((int)(uVar28 + 1) <= (pUVar3->PlayersPendingJoin).ArrayNum) {
                        uVar29 = ~uVar28 >> 0x1f;
                      }
                      if ((uVar29 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x458,
                                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
                      RemoveAtSwapImpl(this_01,uVar28,1);
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,&this_01->AllocatorInstance,
                                 (pUVar3->PlayersPendingJoin).ArrayNum,
                                 &(pUVar3->PlayersPendingJoin).ArrayMax);
                    }
                    break;
                  }
                  pFVar26 = pFVar26 + 0x10;
                } while (pFVar26 != pFVar8 + (longlong)(pUVar3->PlayersPendingJoin).ArrayNum * 0x10)
                ;
              }
              local_78.TypeIndex = 0;
              local_80 = &___7FUniqueNetIdWrapper__6B_;
              local_78._padding_ = 0;
              local_78._padding_ = 0;
              TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ::Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&>
                        (&local_78,pTVar18);
              local_80 = &___7FUniqueNetIdRepl__6B_;
              local_60 = (void *)0x0;
              local_58 = 0;
              (**(code **)(this->_padding_ + 0x7b0))(this,&local_80);
              local_80 = &___7FUniqueNetIdRepl__6B_;
              if (local_60 != (void *)0x0) {
                FMemory::Free(local_60);
              }
              uVar27 = (ulonglong)local_78.TypeIndex;
              if ((1 < local_78.TypeIndex) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar27] ==
                  UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct
                 ) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)local_78._padding_);
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar27])(&local_78);
              }
              local_1b8 = local_1b8 + 1;
              local_1a0 = local_1a0 + 0x10;
              plVar15 = local_178;
              iVar24 = local_188.ArrayNum;
            } while ((int)local_1b8 < local_188.ArrayNum);
          }
          DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
                    ((TSharedPtr<FUniqueNetId_const_,1> *)local_188.AllocatorInstance.Data,iVar24);
          if ((TSharedPtr<FUniqueNetId_const_,1> *)local_188.AllocatorInstance.Data !=
              (TSharedPtr<FUniqueNetId_const_,1> *)0x0) {
            FMemory::Free(local_188.AllocatorInstance.Data);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  return;
}

// UpdatePartyLeader @ 14ecd0380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
APartyBeaconHost::UpdatePartyLeader
          (APartyBeaconHost *this,FUniqueNetIdRepl *param_1,FUniqueNetIdRepl *param_2)

{
  UPartyBeaconState *pUVar1;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (UPartyBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecd0392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1);
    return;
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    return;
  }
  return;
}

// UpdatePartyReservation @ 14ecd10b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
APartyBeaconHost::UpdatePartyReservation
          (APartyBeaconHost *this,FPartyReservation *param_1,bool param_2)

{
  UPartyBeaconState *pUVar1;
  FUniqueNetIdMatcher FVar2;
  FUniqueNetId *pFVar3;
  code *pcVar4;
  FPartyReservation *this_00;
  FUniqueNetIdWrapper *this_01;
  bool bVar5;
  char cVar6;
  char cVar7;
  Type TVar8;
  uint uVar9;
  Type TVar10;
  uint uVar11;
  int iVar12;
  FUniqueNetIdWrapper *pFVar13;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar14;
  undefined8 *puVar15;
  FString *pFVar16;
  ForAnyElementType FVar17;
  FPlayerReservation *pFVar18;
  FScriptContainerElement *pFVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  wchar_t *pwVar23;
  FUniqueNetIdRepl *this_02;
  FPartyReservation *pFVar24;
  FPlayerReservation *pFVar25;
  APartyBeaconHost *this_03;
  uint uVar26;
  longlong lVar27;
  undefined1 auStack_3e8 [32];
  FPlayerReservation *local_3c8;
  FPlayerReservation *local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined8 local_3a8;
  char local_398;
  ForAnyElementType local_390;
  undefined8 local_388;
  APartyBeaconHost *local_380;
  ForAnyElementType local_378;
  undefined8 local_370;
  undefined8 local_368;
  <lambda_1> local_360;
  <lambda_2> local_35f [7];
  FPartyReservation *local_358;
  FUniqueNetIdWrapper *local_350;
  FPartyReservation *local_348;
  FString local_340;
  TSharedPtr<FUniqueNetId_const_,1> local_330;
  TSharedPtr<FUniqueNetId_const_,1> local_320;
  void *local_310 [2];
  TSharedPtr<FUniqueNetId_const_,1> local_300;
  void *local_2f0 [2];
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  local_380 = this;
  local_348 = param_1;
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    FPartyReservation::Dump(param_1);
  }
  if ((((this->State).field0_0x0.DebugPtr == (UPartyBeaconState *)0x0) ||
      (TVar8 = AOnlineBeaconHostObject::GetBeaconState((AOnlineBeaconHostObject *)this),
      TVar8 == DenyRequests)) ||
     ((param_2 && (((this->State).field0_0x0.DebugPtr)->bEnableRemovalRequests == false)))) {
    return ReservationDenied;
  }
  bVar5 = FPartyReservation::IsValid(param_1,this->bIsValidationStrRequired);
  if (bVar5) {
    if (!param_2) {
      if (5 < (byte)LogPartyBeacon._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      pUVar1 = (this->State).field0_0x0.DebugPtr;
      uVar9 = (**(code **)(pUVar1->_padding_ + 0x310))(pUVar1,&param_1->PartyLeader);
      if (uVar9 == 0xffffffff) {
        return ReservationNotFound;
      }
      pFVar24 = (FPartyReservation *)
                (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x308))();
      uVar11 = 0;
      uVar22 = 0;
      iVar12 = (int)(pFVar24->PartyLeader)._padding_;
      uVar21 = uVar22;
      if ((int)uVar9 < iVar12) {
        uVar21 = ~uVar9 >> 0x1f;
      }
      local_358 = pFVar24;
      if ((uVar21 == 0) &&
         (local_3c8 = (FPlayerReservation *)(longlong)(int)uVar9,
         local_3c0 = (FPlayerReservation *)(longlong)iVar12,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        TVar10 = (*pcVar4)();
        return TVar10;
      }
      pFVar13 = (FUniqueNetIdWrapper *)((longlong)(int)uVar9 * 0x58 + *(longlong *)pFVar24);
      local_350 = pFVar13;
      if ((this->_padding_ == 0) ||
         (pUVar1 = (this->State).field0_0x0.DebugPtr, pUVar1 == (UPartyBeaconState *)0x0)) {
        uVar21 = uVar11;
        if (2 < (byte)LogPartyBeacon._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          uVar21 = 0;
        }
      }
      else {
        uVar21 = (**(code **)(pUVar1->_padding_ + 0x378))(pUVar1,(int)pFVar13->_padding_);
      }
      iVar12 = (**(code **)(this->_padding_ + 2000))(this);
      local_378.Data = (FScriptContainerElement *)0x0;
      local_370 = 0;
      uVar26 = iVar12 - uVar21;
      if ((int)(iVar12 - uVar21) < 0) {
        uVar26 = uVar22;
      }
      local_368 = (wchar_t *)((ulonglong)local_368._4_4_ << 0x20);
      local_380 = (APartyBeaconHost *)CONCAT44(local_380._4_4_,uVar26);
      if (0 < (param_1->PartyMembers).ArrayNum) {
        do {
          iVar12 = (param_1->PartyMembers).ArrayNum;
          uVar21 = 0;
          if ((int)uVar11 < iVar12) {
            uVar21 = ~uVar11 >> 0x1f;
          }
          if (uVar21 == 0) {
            local_3c8 = (FPlayerReservation *)(longlong)(int)uVar11;
            local_3c0 = (FPlayerReservation *)(longlong)iVar12;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              TVar10 = (*pcVar4)();
              return TVar10;
            }
          }
          pUVar1 = (this->State).field0_0x0.DebugPtr;
          pFVar25 = (FPlayerReservation *)
                    ((param_1->PartyMembers).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x58);
          uVar21 = (**(code **)(pUVar1->_padding_ + 0x318))(pUVar1,pFVar25);
          if (uVar21 == uVar9) {
            if (4 < (byte)LogPartyBeacon._0_1_) {
              FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)pFVar25,&local_2e0);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
              if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
              }
            }
            uVar22 = (uint)local_368;
          }
          else {
            if (local_378.Data <= pFVar25) {
              if (pFVar25 < (FPlayerReservation *)
                            (local_378.Data + (longlong)local_370._4_4_ * 0x58)) {
                local_3b0 = (longlong)(int)local_370;
                local_3a8 = 0x58;
                local_3c0 = (FPlayerReservation *)local_378.Data;
                local_3c8 = pFVar25;
                local_3b8 = (longlong)local_370._4_4_;
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  TVar10 = (*pcVar4)();
                  return TVar10;
                }
              }
            }
            iVar12 = (int)local_370;
            if ((int)local_370 == local_370._4_4_) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x858,&local_378,(int *)((longlong)&local_370 + 4));
            }
            local_370 = CONCAT44(local_370._4_4_,iVar12 + 1);
            FPlayerReservation::FPlayerReservation
                      ((FPlayerReservation *)(local_378.Data + (longlong)iVar12 * 0x58),pFVar25);
            uVar22 = (uint)local_368;
            if (uVar21 != 0xffffffff) {
              uVar22 = (uint)local_368 + 1;
              local_368 = (wchar_t *)CONCAT44(local_368._4_4_,uVar22);
            }
          }
          uVar11 = uVar11 + 1;
          param_1 = local_348;
        } while ((int)uVar11 < (local_348->PartyMembers).ArrayNum);
        pFVar13 = local_350;
        uVar26 = (uint)local_380;
      }
      pUVar1 = (this->State).field0_0x0.DebugPtr;
      cVar6 = (**(code **)(pUVar1->_padding_ + 0x348))(pUVar1,pFVar13,&local_378);
      if (cVar6 == '\0') {
        TVar10 = PartyLimitReached;
      }
      else {
        cVar6 = (**(code **)(this->_padding_ + 0x7d8))(this);
        if ((cVar6 == '\0') || ((int)((int)local_370 - uVar22) <= (int)uVar26)) {
          cVar6 = '\0';
          local_398 = '\0';
          if ((int)local_370 < 1) {
            TVar10 = ReservationDuplicate;
          }
          else {
            pUVar1 = (this->State).field0_0x0.DebugPtr;
            cVar7 = (**(code **)(pUVar1->_padding_ + 0x3c0))(pUVar1,param_1);
            if (cVar7 == '\0') {
              TVar10 = ReservationDenied_CrossPlayRestriction;
            }
            else {
              uVar9 = 0;
              local_380 = (APartyBeaconHost *)((ulonglong)local_380 & 0xffffffff00000000);
              if (0 < (int)local_370) {
                local_350 = (FUniqueNetIdWrapper *)&param_1->PartyLeader;
                do {
                  this_01 = local_350;
                  uVar21 = 0;
                  if ((int)uVar9 < (int)local_370) {
                    uVar21 = ~uVar9 >> 0x1f;
                  }
                  if (uVar21 == 0) {
                    local_3c0 = (FPlayerReservation *)(longlong)(int)local_370;
                    local_3c8 = (FPlayerReservation *)(longlong)(int)uVar9;
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar5) {
                      pcVar4 = (code *)swi(3);
                      TVar10 = (*pcVar4)();
                      return TVar10;
                    }
                  }
                  pFVar25 = (FPlayerReservation *)(local_378.Data + (longlong)(int)uVar9 * 0x58);
                  cVar6 = local_398;
                  if (0 < (int)(uint)local_368) {
                    pUVar1 = (this->State).field0_0x0.DebugPtr;
                    uVar9 = (**(code **)(pUVar1->_padding_ + 0x318))(pUVar1,pFVar25);
                    pFVar24 = local_358;
                    if (uVar9 == 0xffffffff) {
                      cVar6 = local_398;
                      uVar9 = (uint)local_380;
                    }
                    else {
                      iVar12 = (int)(local_358->PartyLeader)._padding_;
                      uVar21 = 0;
                      if ((int)uVar9 < iVar12) {
                        uVar21 = ~uVar9 >> 0x1f;
                      }
                      if ((uVar21 == 0) &&
                         (local_3c8 = (FPlayerReservation *)(longlong)(int)uVar9,
                         local_3c0 = (FPlayerReservation *)(longlong)iVar12,
                         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar5)) {
                        pcVar4 = (code *)swi(3);
                        TVar10 = (*pcVar4)();
                        return TVar10;
                      }
                      pFVar24 = (FPartyReservation *)
                                ((longlong)(int)uVar9 * 0x58 + *(longlong *)pFVar24);
                      if (4 < (byte)LogPartyBeacon._0_1_) {
                        pFVar16 = FUniqueNetIdWrapper::ToString(this_01,&local_2b0);
                        if ((pFVar16->Data).ArrayNum == 0) {
                          pwVar23 = L"";
                        }
                        else {
                          pwVar23 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
                        }
                        FUniqueNetIdWrapper::ToString
                                  ((FUniqueNetIdWrapper *)&pFVar24->PartyLeader,&local_2c0);
                        FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)pFVar25,&local_2d0);
                        local_3c8 = (FPlayerReservation *)pwVar23;
                        UE::Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
                        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
                        }
                        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                        }
                        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                        }
                      }
                      if (5 < (byte)LogPartyBeacon._0_1_) {
                        FPartyReservation::Dump(pFVar24);
                      }
                      iVar12 = FPartyReservation::RemoveAllPartyMembers(pFVar24,pFVar25);
                      piVar20 = &((this->State).field0_0x0.DebugPtr)->NumConsumedReservations;
                      *piVar20 = *piVar20 - iVar12;
                      if (5 < (byte)LogPartyBeacon._0_1_) {
                        UE::Logging::Private::BasicLog<6>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
                      }
                      if (iVar12 != 0) {
                        local_398 = '\x01';
                        bVar5 = ::operator==((FUniqueNetIdWrapper *)&pFVar24->PartyLeader,
                                             (FUniqueNetIdWrapper *)pFVar25);
                        if (!bVar5) {
                          cVar6 = '\x01';
                          uVar9 = (uint)local_380;
                          goto LAB_14ecd1ecf;
                        }
                        if (3 < (byte)LogPartyBeacon._0_1_) {
                          UE::Logging::Private::BasicLog<4>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
                        }
                        uVar9 = 0;
                        if (0 < (pFVar24->PartyMembers).ArrayNum) {
                          do {
                            iVar12 = (pFVar24->PartyMembers).ArrayNum;
                            uVar21 = 0;
                            if ((int)uVar9 < iVar12) {
                              uVar21 = ~uVar9 >> 0x1f;
                            }
                            if (uVar21 == 0) {
                              local_3c8 = (FPlayerReservation *)(longlong)(int)uVar9;
                              local_3c0 = (FPlayerReservation *)(longlong)iVar12;
                              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                );
                              if (bVar5) {
                                pcVar4 = (code *)swi(3);
                                TVar10 = (*pcVar4)();
                                return TVar10;
                              }
                            }
                            this_02 = (FUniqueNetIdRepl *)
                                      ((pFVar24->PartyMembers).AllocatorInstance.Data +
                                      (longlong)(int)uVar9 * 0x58);
                            bVar5 = ::operator==((FUniqueNetIdWrapper *)this_02,
                                                 (FUniqueNetIdWrapper *)&pFVar24->PartyLeader);
                            if (((!bVar5) &&
                                (bVar5 = FUniqueNetIdWrapper::IsValid
                                                   ((FUniqueNetIdWrapper *)this_02), bVar5)) &&
                               (pUVar1 = (this->State).field0_0x0.DebugPtr,
                               iVar12 = (**(code **)(pUVar1->_padding_ + 0x310))(pUVar1,this_02),
                               iVar12 == -1)) {
                              if (3 < (byte)LogPartyBeacon._0_1_) {
                                FUniqueNetIdWrapper::ToDebugString
                                          ((FUniqueNetIdWrapper *)this_02,&local_2a0);
                                UE::Logging::Private::BasicLog<4>
                                          (&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
                                if (local_2a0.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
                                }
                              }
                              FUniqueNetIdRepl::operator=(&pFVar24->PartyLeader,this_02);
                              goto LAB_14ecd1eb3;
                            }
                            uVar9 = uVar9 + 1;
                          } while ((int)uVar9 < (pFVar24->PartyMembers).ArrayNum);
                        }
                        if (3 < (byte)LogPartyBeacon._0_1_) {
                          UE::Logging::Private::BasicLog<4>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
                        }
LAB_14ecd1eb3:
                        UPartyBeaconState::SanityCheckReservations
                                  ((this->State).field0_0x0.DebugPtr,true);
                      }
                      cVar6 = local_398;
                      uVar9 = (uint)local_380;
                    }
                  }
LAB_14ecd1ecf:
                  piVar20 = (int *)((longlong)&pFVar13[2]._padding_ + 4);
                  pFVar18 = *(FPlayerReservation **)&pFVar13[1].Variant.TypeIndex;
                  if ((pFVar18 <= pFVar25) &&
                     (lVar27 = (longlong)*(int *)((longlong)&pFVar13[2]._padding_ + 4),
                     pFVar25 < pFVar18 + lVar27)) {
                    local_3b0 = (longlong)(int)pFVar13[2]._padding_;
                    local_3a8 = 0x58;
                    local_3c8 = pFVar25;
                    local_3c0 = pFVar18;
                    local_3b8 = lVar27;
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar5) {
                      pcVar4 = (code *)swi(3);
                      TVar10 = (*pcVar4)();
                      return TVar10;
                    }
                  }
                  iVar12 = (int)pFVar13[2]._padding_;
                  if (iVar12 == *piVar20) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x858,(ForAnyElementType *)&pFVar13[1].Variant.TypeIndex,
                                        piVar20);
                  }
                  *(int *)&pFVar13[2]._padding_ = iVar12 + 1;
                  FPlayerReservation::FPlayerReservation
                            ((FPlayerReservation *)
                             ((longlong)iVar12 * 0x58 + *(longlong *)&pFVar13[1].Variant.TypeIndex),
                             pFVar25);
                  NewPlayerAdded(this,pFVar25);
                  UPartyBeaconState::SanityCheckReservations((this->State).field0_0x0.DebugPtr,true)
                  ;
                  uVar9 = uVar9 + 1;
                  local_380 = (APartyBeaconHost *)CONCAT44(local_380._4_4_,uVar9);
                } while ((int)uVar9 < (int)local_370);
              }
              piVar20 = &((this->State).field0_0x0.DebugPtr)->NumConsumedReservations;
              *piVar20 = *piVar20 + (int)local_370;
              if (5 < (byte)LogPartyBeacon._0_1_) {
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon)
                ;
              }
              SendReservationUpdates(this);
              NotifyReservationEventNextFrame(this,&this->ReservationChanged);
              cVar7 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x350))();
              if (cVar7 != '\0') {
                NotifyReservationEventNextFrame(this,&this->ReservationsFull);
              }
              if (cVar6 != '\0') {
                TArray<FPartyReservation,TSizedDefaultAllocator<32>_>::
                RemoveAll<_APartyBeaconHost::UpdatePartyReservation_::__l354::<lambda_2>_>
                          (&((this->State).field0_0x0.DebugPtr)->Reservations,local_35f);
                UPartyBeaconState::SanityCheckReservations((this->State).field0_0x0.DebugPtr,false);
              }
              TVar10 = ReservationAccepted;
            }
          }
        }
        else {
          TVar10 = IncorrectPlayerCount;
        }
      }
      DestructItems<FPlayerReservation,int>((FPlayerReservation *)local_378.Data,(int)local_370);
      FVar17.Data = local_378.Data;
      goto LAB_14ecd20ca;
    }
  }
  else if (!param_2) {
    return ReservationInvalid;
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  uVar9 = (**(code **)(pUVar1->_padding_ + 0x310))(pUVar1,&param_1->PartyLeader);
  this_03 = local_380;
  pFVar25 = (FPlayerReservation *)(longlong)(int)uVar9;
  if (uVar9 == 0xffffffff) {
    return ReservationNotFound;
  }
  pUVar1 = (local_380->State).field0_0x0.DebugPtr;
  pFVar13 = (FUniqueNetIdWrapper *)(**(code **)(pUVar1->_padding_ + 0x308))(pUVar1);
  uVar22 = 0;
  iVar12 = (int)(pFVar13->Variant)._padding_;
  uVar21 = 0;
  if ((int)uVar9 < iVar12) {
    uVar21 = ~uVar9 >> 0x1f;
  }
  local_350 = pFVar13;
  if ((uVar21 == 0) &&
     (local_3c8 = pFVar25, local_3c0 = (FPlayerReservation *)(longlong)iVar12,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    TVar10 = (*pcVar4)();
    return TVar10;
  }
  local_358 = (FPartyReservation *)((longlong)pFVar25 * 0x58 + pFVar13->_padding_);
  local_390.Data = (FScriptContainerElement *)0x0;
  local_388 = 0;
  local_368 = L"";
  uVar21 = uVar22;
  local_388._0_4_ = uVar22;
  if (0 < (param_1->PartyMembers).ArrayNum) {
    do {
      iVar12 = (param_1->PartyMembers).ArrayNum;
      uVar11 = 0;
      if ((int)uVar21 < iVar12) {
        uVar11 = ~uVar21 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_3c8 = (FPlayerReservation *)(longlong)(int)uVar21;
        local_3c0 = (FPlayerReservation *)(longlong)iVar12;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          TVar10 = (*pcVar4)();
          return TVar10;
        }
      }
      pUVar1 = (this_03->State).field0_0x0.DebugPtr;
      pFVar18 = (FPlayerReservation *)
                ((param_1->PartyMembers).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x58);
      uVar11 = (**(code **)(pUVar1->_padding_ + 0x318))(pUVar1,pFVar18);
      if ((uVar11 == 0xffffffff) || (uVar11 != uVar9)) {
        if (4 < (byte)LogPartyBeacon._0_1_) {
          FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)pFVar18,&local_340);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_340.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if (local_390.Data <= pFVar18) {
          if (pFVar18 < (FPlayerReservation *)(local_390.Data + (longlong)local_388._4_4_ * 0x58)) {
            local_3b0 = (longlong)(int)(uint)local_388;
            local_3a8 = 0x58;
            local_3c0 = (FPlayerReservation *)local_390.Data;
            local_3c8 = pFVar18;
            local_3b8 = (longlong)local_388._4_4_;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              TVar10 = (*pcVar4)();
              return TVar10;
            }
          }
        }
        iVar12 = (uint)local_388;
        if ((uint)local_388 == local_388._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&local_390,(int *)((longlong)&local_388 + 4));
        }
        local_388 = CONCAT44(local_388._4_4_,iVar12 + 1);
        FPlayerReservation::FPlayerReservation
                  ((FPlayerReservation *)(local_390.Data + (longlong)iVar12 * 0x58),pFVar18);
      }
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (param_1->PartyMembers).ArrayNum);
  }
  if (0 < (int)(uint)local_388) {
    pFVar24 = local_358;
    uVar9 = (uint)local_388;
    local_358 = (FPartyReservation *)&param_1->PartyLeader;
    do {
      uVar11 = ~uVar22 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar22 < (int)uVar9) {
        uVar21 = uVar11;
      }
      if (uVar21 == 0) {
        local_3c0 = (FPlayerReservation *)(longlong)(int)uVar9;
        local_3c8 = (FPlayerReservation *)(longlong)(int)uVar22;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          TVar10 = (*pcVar4)();
          return TVar10;
        }
      }
      pFVar18 = (FPlayerReservation *)(longlong)(int)uVar22;
      lVar27 = (longlong)pFVar18 * 0x58;
      pTVar14 = FUniqueNetIdWrapper::GetV1
                          ((FUniqueNetIdWrapper *)(local_390.Data + lVar27),&local_330);
      if ((pTVar14->Object == (FUniqueNetId *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        TVar10 = (*pcVar4)();
        return TVar10;
      }
      FVar2.UniqueIdTarget = pTVar14->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_330.SharedReferenceCount.ReferenceController);
      iVar12 = TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
               IndexOfByPredicate<FUniqueNetIdMatcher>
                         (&((local_380->State).field0_0x0.DebugPtr)->PlayersPendingJoin,FVar2);
      if (iVar12 == -1) {
        pcVar4 = *(code **)(local_380->_padding_ + 0x828);
        uVar9 = 0;
        if ((int)uVar22 < (int)(uint)local_388) {
          uVar9 = uVar11;
        }
        if (uVar9 == 0) {
          local_3c8 = pFVar18;
          local_3c0 = (FPlayerReservation *)(longlong)(int)(uint)local_388;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            TVar10 = (*pcVar4)();
            return TVar10;
          }
        }
        pFVar19 = local_390.Data + lVar27;
        uVar9 = 0;
        if ((int)uVar22 < (int)(uint)local_388) {
          uVar9 = ~uVar22 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_3c0 = (FPlayerReservation *)(longlong)(int)(uint)local_388;
          local_3c8 = (FPlayerReservation *)(longlong)(int)uVar22;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            TVar10 = (*pcVar4)();
            return TVar10;
          }
        }
        this_03 = local_380;
        (*pcVar4)(local_380,local_390.Data + (longlong)(int)uVar22 * 0x58,pFVar19);
        this_00 = local_358;
        pUVar1 = (this_03->State).field0_0x0.DebugPtr;
        uVar9 = (**(code **)(pUVar1->_padding_ + 0x310))(pUVar1,local_358);
        pFVar13 = local_350;
        if (uVar9 == 0xffffffff) {
          if (2 < (byte)LogPartyBeacon._0_1_) {
            pTVar14 = FUniqueNetIdWrapper::GetV1
                                ((FUniqueNetIdWrapper *)&local_348->PartyLeader,&local_300);
            pFVar3 = pTVar14->Object;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_300.SharedReferenceCount.ReferenceController);
            puVar15 = (undefined8 *)(**(code **)(*(longlong *)pFVar3 + 0x30))(pFVar3,local_2f0);
            if (*(int *)(puVar15 + 1) != 0) {
              local_368 = (wchar_t *)*puVar15;
            }
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"APartyBeaconHost::UpdatePartyReservation",0x28,Yes);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
            if (local_2f0[0] != (void *)0x0) {
              FMemory::Free(local_2f0[0]);
            }
          }
          break;
        }
        iVar12 = (int)(local_350->Variant)._padding_;
        uVar21 = 0;
        if ((int)uVar9 < iVar12) {
          uVar21 = ~uVar9 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (local_3c8 = (FPlayerReservation *)(longlong)(int)uVar9,
           local_3c0 = (FPlayerReservation *)(longlong)iVar12,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          TVar10 = (*pcVar4)();
          return TVar10;
        }
        pFVar24 = (FPartyReservation *)((longlong)(int)uVar9 * 0x58 + pFVar13->_padding_);
        if (uVar9 != (uint)pFVar25) {
          if (5 < (byte)LogPartyBeacon._0_1_) {
            pTVar14 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)this_00,&local_320);
            pFVar3 = pTVar14->Object;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_320.SharedReferenceCount.ReferenceController);
            (**(code **)(*(longlong *)pFVar3 + 0x30))(pFVar3,local_310);
            local_288._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_288,"APartyBeaconHost::UpdatePartyReservation",0x28,Yes);
            local_3c0 = (FPlayerReservation *)CONCAT44(local_3c0._4_4_,uVar9);
            local_3c8 = (FPlayerReservation *)CONCAT44(local_3c8._4_4_,(uint)pFVar25);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
            if ((void *)local_288._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_288._padding_);
            }
            if (local_310[0] != (void *)0x0) {
              FMemory::Free(local_310[0]);
            }
          }
          pFVar25 = (FPlayerReservation *)(ulonglong)uVar9;
        }
      }
      else {
        uVar9 = 0;
        if ((int)uVar22 < (int)(uint)local_388) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (local_3c8 = pFVar18, local_3c0 = (FPlayerReservation *)(longlong)(int)(uint)local_388,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          TVar10 = (*pcVar4)();
          return TVar10;
        }
        pFVar18 = (FPlayerReservation *)(local_390.Data + lVar27);
        FPartyReservation::RemoveAllPartyMembers(pFVar24,pFVar18);
        this_03 = local_380;
        PlayerRemoved(local_380,pFVar18);
        UPartyBeaconState::SanityCheckReservations((this_03->State).field0_0x0.DebugPtr,true);
        piVar20 = &((this_03->State).field0_0x0.DebugPtr)->NumConsumedReservations;
        *piVar20 = *piVar20 + -1;
      }
      uVar22 = uVar22 + 1;
      uVar9 = (uint)local_388;
    } while ((int)uVar22 < (int)(uint)local_388);
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u_APartyBeaconHos_153078c50,
               (FLogCategoryBase *)&LogPartyBeacon);
  }
  SendReservationUpdates(this_03);
  NotifyReservationEventNextFrame(this_03,&this_03->ReservationChanged);
  TArray<FPartyReservation,TSizedDefaultAllocator<32>_>::
  RemoveAll<_APartyBeaconHost::UpdatePartyReservation_::__l56::<lambda_1>_>
            (&((this_03->State).field0_0x0.DebugPtr)->Reservations,&local_360);
  UPartyBeaconState::SanityCheckReservations((this_03->State).field0_0x0.DebugPtr,false);
  TVar10 = ReservationAccepted;
  DestructItems<FPlayerReservation,int>((FPlayerReservation *)local_390.Data,(uint)local_388);
  FVar17.Data = local_390.Data;
LAB_14ecd20ca:
  if ((FPlayerReservation *)FVar17.Data != (FPlayerReservation *)0x0) {
    FMemory::Free(FVar17.Data);
    return TVar10;
  }
  return TVar10;
}

