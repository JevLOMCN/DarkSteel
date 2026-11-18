// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 50

// StaticClass @ 14eca85f0

UClass * __cdecl UPartyBeaconState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPartyBeaconState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"PartyBeaconState",
               &Z_Registration_Info_UClass_UPartyBeaconState.InnerSingleton,
               StaticRegisterNativesUPartyBeaconState,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPartyBeaconState>,
               InternalVTableHelperCtorCaller<UPartyBeaconState>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPartyBeaconState.InnerSingleton;
}

// UPartyBeaconState @ 14ecad500

UPartyBeaconState * __thiscall
UPartyBeaconState::UPartyBeaconState(UPartyBeaconState *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPartyBeaconState__6B_;
  (this->SessionName).ComparisonIndex = 0;
  (this->SessionName).Number = 0;
  (this->TeamAssignmentMethod).ComparisonIndex = 0;
  (this->TeamAssignmentMethod).Number = 0;
  (this->PlatformCrossplayRestrictions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformCrossplayRestrictions).ArrayNum = 0;
  (this->PlatformCrossplayRestrictions).ArrayMax = 0;
  (this->PlatformTypeMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformTypeMapping).ArrayNum = 0;
  (this->PlatformTypeMapping).ArrayMax = 0;
  (this->Reservations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Reservations).ArrayNum = 0;
  (this->Reservations).ArrayMax = 0;
  (this->PlayersPendingJoin).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayersPendingJoin).ArrayNum = 0;
  (this->PlayersPendingJoin).ArrayMax = 0;
  return this;
}

// UPartyBeaconState @ 14ecad560

UPartyBeaconState * __thiscall
UPartyBeaconState::UPartyBeaconState(UPartyBeaconState *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPartyBeaconState__6B_;
  (this->SessionName).ComparisonIndex = 0;
  (this->SessionName).Number = 0;
  this->NumConsumedReservations = 0;
  this->MaxReservations = 0;
  this->NumTeams = 0;
  this->NumPlayersPerTeam = 0;
  this->TeamAssignmentMethod = ETeamAssignmentMethod::Smallest;
  (this->PlatformCrossplayRestrictions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformCrossplayRestrictions).ArrayNum = 0;
  (this->PlatformCrossplayRestrictions).ArrayMax = 0;
  (this->PlatformTypeMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformTypeMapping).ArrayNum = 0;
  (this->PlatformTypeMapping).ArrayMax = 0;
  (this->Reservations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Reservations).ArrayNum = 0;
  (this->Reservations).ArrayMax = 0;
  (this->PlayersPendingJoin).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayersPendingJoin).ArrayNum = 0;
  (this->PlayersPendingJoin).ArrayMax = 0;
  this->ReservedHostTeamNum = 0;
  this->ForceTeamNum = 0;
  this->bRestrictCrossConsole = false;
  this->bRespectCompetitiveIntegrity = true;
  return this;
}

// ~UPartyBeaconState @ 14ecadb40

void __thiscall UPartyBeaconState::~UPartyBeaconState(UPartyBeaconState *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPartyBeaconState__6B_;
  DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
            ((TSharedPtr<FUniqueNetId_const_,1> *)(this->PlayersPendingJoin).AllocatorInstance.Data,
             (this->PlayersPendingJoin).ArrayNum);
  pFVar1 = (this->PlayersPendingJoin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPartyReservation,int>
            ((FPartyReservation *)(this->Reservations).AllocatorInstance.Data,
             (this->Reservations).ArrayNum);
  pFVar1 = (this->Reservations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPartyBeaconCrossplayPlatformMapping,int>
            ((FPartyBeaconCrossplayPlatformMapping *)
             (this->PlatformTypeMapping).AllocatorInstance.Data,(this->PlatformTypeMapping).ArrayNum
            );
  pFVar1 = (this->PlatformTypeMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PlatformCrossplayRestrictions).AllocatorInstance.Data,
             (this->PlatformCrossplayRestrictions).ArrayNum);
  pFVar1 = (this->PlatformCrossplayRestrictions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddReservation @ 14ecafe40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPartyBeaconState::AddReservation(UPartyBeaconState *this,FPartyReservation *param_1)

{
  int *piVar1;
  TArray<FPartyReservation,TSizedDefaultAllocator<32>_> *pTVar2;
  FPartyReservation *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FUniqueNetIdWrapper *this_00;
  FUniqueNetIdWrapper *pFVar10;
  undefined1 local_res8 [8];
  FString local_38;
  
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if (3 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    iVar7 = (param_1->PartyMembers).ArrayNum;
    this_00 = (FUniqueNetIdWrapper *)(param_1->PartyMembers).AllocatorInstance.Data;
    pFVar10 = (FUniqueNetIdWrapper *)((longlong)this_00 + (longlong)iVar7 * 0x58);
    while( true ) {
      if ((param_1->PartyMembers).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar10) break;
      if (3 < (byte)LogPartyBeacon._0_1_) {
        FUniqueNetIdWrapper::ToDebugString(this_00,&local_38);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      this_00 = (FUniqueNetIdWrapper *)&this_00[2].Variant.TypeIndex;
    }
  }
  iVar7 = (**(code **)(this->_padding_ + 0x3d8))(this,param_1);
  if (iVar7 != -1) {
    this->NumConsumedReservations = (param_1->PartyMembers).ArrayNum + this->NumConsumedReservations
    ;
    if (5 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    pTVar2 = &this->Reservations;
    pFVar3 = (FPartyReservation *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Reservations).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar8 = (this->Reservations).ArrayNum;
    piVar1 = &(this->Reservations).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Reservations).ArrayNum = uVar8 + 1;
    FPartyReservation::FPartyReservation
              ((FPartyReservation *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x58)
               ,param_1);
    uVar9 = 0;
    if ((int)uVar8 < (this->Reservations).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x58) = iVar7;
    SanityCheckReservations(this,false);
    (**(code **)(this->_padding_ + 0x3f0))(this);
  }
  return iVar7 != -1;
}

// AreTeamsAvailable @ 14ecb0640

bool __thiscall
UPartyBeaconState::AreTeamsAvailable(UPartyBeaconState *this,FPartyReservation *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_1->PartyMembers).ArrayNum;
  iVar3 = 0;
  if (0 < this->NumTeams) {
    do {
      iVar2 = (**(code **)(this->_padding_ + 0x378))(this,iVar3);
      if (iVar2 + iVar1 <= this->NumPlayersPerTeam) {
        return true;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this->NumTeams);
  }
  return false;
}

// BestFitTeamAssignmentJiggle @ 14ecb06e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPartyBeaconState::BestFitTeamAssignmentJiggle(UPartyBeaconState *this)

{
  uint uVar1;
  int iVar2;
  FPartyReservation *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FScriptContainerElement *local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  if ((this->TeamAssignmentMethod == ETeamAssignmentMethod::BestFit) && (1 < this->NumTeams)) {
    if (5 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    uVar1 = (this->Reservations).ArrayNum;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&local_40,0,(int *)((longlong)&local_38 + 4));
    }
    iVar2 = (this->Reservations).ArrayNum;
    pFVar8 = (this->Reservations).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar2 * 0x58;
    while( true ) {
      if ((this->Reservations).ArrayNum != iVar2) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FPartyReservation,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar9) break;
      if (*(int *)&pFVar8->field_0x0 != -1) {
        *(undefined4 *)&pFVar8->field_0x0 = 0xffffffff;
        local_48 = pFVar8;
        if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)local_38._4_4_ * 8))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (int)local_38;
        if ((int)local_38 == local_38._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_40,(int *)((longlong)&local_38 + 4));
        }
        local_38 = CONCAT44(local_38._4_4_,iVar6 + 1);
        *(FScriptContainerElement **)(local_40.Data + (longlong)iVar6 * 8) = local_48;
      }
      pFVar8 = pFVar8 + 0x58;
    }
    AlgoImpl::
    IntroSortInternal<FPartyReservation_*,int,FIdentityFunctor,TDereferenceWrapper<FPartyReservation_*,_UPartyBeaconState::BestFitTeamAssignmentJiggle_::__l5::<lambda_1>_>_>
              ((FPartyReservation **)local_40.Data,(int)local_38,local_res8[0],
               (<lambda_1> *)local_res10);
    iVar2 = (int)local_38;
    uVar7 = (ulonglong)(int)local_38;
    pFVar8 = local_40.Data + uVar7 * 8;
    FVar10.Data = local_40.Data;
    while( true ) {
      if ((int)uVar7 != iVar2) {
        `TCheckedPointerIterator<FPartyReservation_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar10.Data == pFVar8) break;
      pFVar3 = *(FPartyReservation **)FVar10.Data;
      iVar6 = (**(code **)(this->_padding_ + 0x3d8))(this,pFVar3);
      pFVar3->TeamNum = iVar6;
      if ((iVar6 == -1) && (2 < (byte)LogPartyBeacon._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      uVar7 = local_38 & 0xffffffff;
      FVar10.Data = FVar10.Data + 8;
    }
    SanityCheckReservations(this,true);
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  return;
}

// ChangeTeam @ 14ecb0ed0

bool __thiscall
UPartyBeaconState::ChangeTeam(UPartyBeaconState *this,FUniqueNetIdRepl *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if ((-1 < param_2) && (param_2 < this->NumTeams)) {
    uVar4 = (**(code **)(this->_padding_ + 0x310))();
    if (uVar4 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar4 < (this->Reservations).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      pFVar7 = (this->Reservations).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x58;
      if (*(int *)pFVar7 != param_2) {
        iVar6 = (**(code **)(this->_padding_ + 0x378))(this,param_2);
        if (iVar6 + *(int *)(pFVar7 + 0x40) <= this->NumPlayersPerTeam) {
          *(int *)pFVar7 = param_2;
          return true;
        }
      }
    }
    return false;
  }
  return false;
}

// CrossPlayAllowed @ 14ecb45f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPartyBeaconState::CrossPlayAllowed(UPartyBeaconState *this,FPartyReservation *param_1)

{
  FString *pFVar1;
  Type TVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UPartyBeaconState *pUVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  Type TVar14;
  Type TVar15;
  FPartyBeaconCrossplayPlatformMapping *pFVar16;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar17;
  size_t sVar18;
  byte bVar19;
  int iVar20;
  ulonglong uVar21;
  wchar_t *pwVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  Type *pTVar28;
  FPartyReservation *pFVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  uint uVar31;
  longlong lVar32;
  wchar_t *pwVar33;
  undefined1 auStackY_518 [32];
  byte local_4d8;
  byte local_4d7;
  bool local_4d6;
  undefined1 local_4cc;
  undefined1 local_4cb;
  undefined1 local_4ca;
  undefined1 local_4c9;
  undefined1 local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6;
  undefined1 local_4c5;
  undefined1 local_4c4 [4];
  longlong *local_4c0;
  undefined8 uStack_4b8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4b0;
  uint uStack_4a8;
  uint uStack_4a4;
  uint uStack_4a0;
  undefined4 uStack_49c;
  int local_498;
  undefined4 uStack_494;
  UPartyBeaconState *local_490;
  FPartyReservation *local_488;
  TBitArray<FDefaultBitArrayAllocator> *local_480;
  TBitArray<FDefaultBitArrayAllocator> *local_478;
  FString local_470;
  FString local_460;
  longlong *local_450;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_448;
  undefined8 local_428;
  FString local_420;
  FString local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_400;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3c0;
  undefined1 local_3a0 [8];
  TPairInitializer<FString_&&,FString_&&> local_398;
  int local_388;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  int local_2f0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2e8;
  longlong *local_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d0;
  undefined8 uStack_2b0;
  longlong *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  undefined8 uStack_280;
  longlong *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 uStack_250;
  longlong *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  FString local_218;
  FString *local_208;
  FString *local_200;
  FString local_1f8;
  FString local_1e8 [2];
  undefined4 local_1bc;
  undefined4 local_19c;
  undefined4 local_17c;
  undefined1 local_178 [32];
  Type *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [32];
  Type *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_518;
  bVar4 = false;
  bVar9 = false;
  pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)(this->Reservations).AllocatorInstance.Data;
  uVar27 = (this->Reservations).ArrayNum;
  uVar21 = (ulonglong)(int)uVar27;
  local_4d6 = true;
  pTVar23 = pTVar30 + 2;
  local_480 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar30 + uVar21 * 0x58);
  local_4d7 = 1;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  local_108 = (Type *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_490 = this;
  local_488 = param_1;
  while( true ) {
    pTVar7 = local_480;
    bVar11 = false;
    bVar5 = false;
    local_478 = pTVar30;
    if ((local_490->Reservations).ArrayNum != (int)uVar21) {
      local_4cc = 0;
      `TCheckedPointerIterator<FPartyReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_4cc);
    }
    pFVar29 = local_488;
    pUVar6 = local_490;
    if (pTVar30 == pTVar7) break;
    iVar20 = *(int *)(pTVar23->AllocatorInstance).InlineData;
    lVar25 = *(longlong *)&pTVar23[-1].NumBits;
    lVar32 = (longlong)iVar20 * 0x58 + lVar25;
    while( true ) {
      if (*(int *)(pTVar23->AllocatorInstance).InlineData != iVar20) {
        local_4cb = 0;
        `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_4cb);
      }
      if (lVar25 == lVar32) break;
      local_4d7 = local_4d7 & *(byte *)(lVar25 + 0x50);
      pFVar16 = TArray<FPartyBeaconCrossplayPlatformMapping,TSizedDefaultAllocator<32>_>::
                FindByKey<FString>(&pUVar6->PlatformTypeMapping,(FString *)(lVar25 + 0x40));
      if (pFVar16 == (FPartyBeaconCrossplayPlatformMapping *)0x0) {
        bVar9 = true;
        pTVar17 = &::FString::FString(local_1e8,L"OTHER")->Data;
      }
      else {
        bVar4 = true;
        local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  (&local_2e8,(wchar_t *)(pFVar16->PlatformType).Data.AllocatorInstance.Data,
                   (pFVar16->PlatformType).Data.ArrayNum,0);
        pTVar17 = &local_2e8;
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_128,
                 (FString *)local_3a0,(bool *)pTVar17);
      if ((bVar9) &&
         (bVar9 = false, local_1e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
         ) {
        FMemory::Free(local_1e8[0].Data.AllocatorInstance.Data);
      }
      if ((bVar4) &&
         (bVar4 = false, local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2e8.AllocatorInstance.Data);
      }
      lVar25 = lVar25 + 0x58;
    }
    uVar21 = (ulonglong)uVar27;
    pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)&local_478[2].NumBits;
    pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar23[2].NumBits;
  }
  if (local_128._8_4_ - local_f4 < 1) goto LAB_14ecb5963;
  local_4d8 = 1;
  local_178._0_8_ = 0;
  iVar20 = (local_488->PartyMembers).ArrayNum;
  pFVar26 = (local_488->PartyMembers).AllocatorInstance.Data;
  local_178._8_8_ = 0;
  pFVar24 = pFVar26 + (longlong)iVar20 * 0x58;
  local_158 = (Type *)0x0;
  local_150 = 0;
  local_14c = 0x80;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  while( true ) {
    if ((pFVar29->PartyMembers).ArrayNum != iVar20) {
      local_4ca = 0;
      `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_4ca);
    }
    if (pFVar26 == pFVar24) break;
    local_4d8 = local_4d8 & (byte)pFVar26[0x50];
    pFVar16 = TArray<FPartyBeaconCrossplayPlatformMapping,TSizedDefaultAllocator<32>_>::
              FindByKey<FString>(&pUVar6->PlatformTypeMapping,(FString *)(pFVar26 + 0x40));
    if (pFVar16 == (FPartyBeaconCrossplayPlatformMapping *)0x0) {
      bVar5 = true;
      pTVar17 = &::FString::FString(&local_1f8,L"OTHER")->Data;
    }
    else {
      bVar11 = true;
      local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                (&local_380,(wchar_t *)(pFVar16->PlatformType).Data.AllocatorInstance.Data,
                 (pFVar16->PlatformType).Data.ArrayNum,0);
      pTVar17 = &local_380;
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_178,
               (FString *)(local_3a0 + 4),(bool *)pTVar17);
    if ((bVar5) &&
       (bVar5 = false, local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if ((bVar11) &&
       (bVar11 = false, local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_380.AllocatorInstance.Data);
    }
    pFVar26 = pFVar26 + 0x58;
  }
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)local_d8,(pUVar6->PlatformCrossplayRestrictions).ArrayNum);
  iVar20 = (pUVar6->PlatformCrossplayRestrictions).ArrayNum;
  pFVar26 = (pUVar6->PlatformCrossplayRestrictions).AllocatorInstance.Data;
  pFVar24 = pFVar26 + (longlong)iVar20 * 0x10;
  while( true ) {
    if ((pUVar6->PlatformCrossplayRestrictions).ArrayNum != iVar20) {
      local_4c9 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_4c9);
    }
    if (pFVar26 == pFVar24) break;
    local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_410.Data.ArrayNum = 0;
    local_410.Data.ArrayMax = 0;
    local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_420.Data.ArrayNum = 0;
    local_420.Data.ArrayMax = 0;
    ::FString::FString(&local_218,L"=");
    bVar9 = ::FString::Split((FString *)pFVar26,&local_218,&local_410,&local_420);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      local_208 = &local_410;
      local_200 = &local_420;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)local_d8,&local_398,(bool *)&local_208);
    }
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
    pFVar26 = pFVar26 + 0x10;
  }
  local_3e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  local_3e0._padding_._0_4_ = 0;
  pFVar29 = (FPartyReservation *)&DAT_00000001;
  local_488 = (FPartyReservation *)&DAT_00000001;
  local_3e0._padding_._4_4_ = 1;
  local_3e0.UnvisitedBitMask = 0xffffffff;
  local_3e0.CurrentBitIndex = 0;
  local_3e0.BaseBitIndex = 0;
  if (local_b0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e0);
  }
  uVar27 = local_b0;
  TStack_448._padding_ = CONCAT44(local_3e0._padding_._4_4_,(undefined4)local_3e0._padding_);
  local_450 = (longlong *)local_d8;
  TStack_448.CurrentBitIndex = local_3e0.CurrentBitIndex;
  TStack_448.UnvisitedBitMask = local_3e0.UnvisitedBitMask;
  TStack_448._28_4_ = local_3e0._28_4_;
  TStack_448.BaseBitIndex = local_3e0.BaseBitIndex;
  local_400.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  bVar19 = (byte)local_b0 & 0x1f;
  local_428 = CONCAT44(local_428._4_4_,local_d8._8_4_ - local_a4);
  local_400._padding_._0_4_ = (int)local_b0 >> 5;
  local_400._padding_._4_4_ = 1 << bVar19;
  local_400.UnvisitedBitMask = -1 << bVar19;
  TStack_448.Array = local_3e0.Array;
  local_400.BaseBitIndex = local_b0 & 0xffffffe0;
  local_400.CurrentBitIndex = local_b0;
  TStack_270.Array = local_3e0.Array;
  uStack_250 = local_428;
  local_278 = local_450;
  TStack_270._padding_ = TStack_448._padding_;
  TStack_270._16_8_ = TStack_448._16_8_;
  TStack_270._24_8_ = TStack_448._24_8_;
  if (((int)local_b0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return (bool)uVar10;
  }
  if (uVar27 != local_b0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_400);
  }
  iVar20 = local_400.CurrentBitIndex;
  uStack_4b8 = CONCAT44(local_400._padding_._4_4_,(int)local_400._padding_);
  uStack_4a4 = local_400.CurrentBitIndex;
  uStack_4a8 = local_400.UnvisitedBitMask;
  uStack_49c = local_400._28_4_;
  uStack_4a0 = local_400.BaseBitIndex;
  pTStack_4b0 = local_400.Array;
  local_480 = local_400.Array;
  while( true ) {
    plVar8 = local_278;
    TVar14 = (Type)pFVar29;
    uVar27 = 0;
    if ((int)local_278[1] - *(int *)((longlong)local_278 + 0x34) != (int)uStack_250) {
      local_4c8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4c8);
    }
    if (((TStack_270.CurrentBitIndex == iVar20) && (TStack_270.Array == local_480)) &&
       (plVar8 == (longlong *)local_d8)) break;
    lVar25 = *plVar8;
    pFVar1 = (FString *)(lVar25 + (longlong)TStack_270.CurrentBitIndex * 0x28);
    iVar13 = *(int *)(lVar25 + 8 + (longlong)TStack_270.CurrentBitIndex * 0x28);
    if (iVar13 == 0) {
      pwVar22 = L"";
      uVar12 = uVar27;
    }
    else {
      pwVar22 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
      uVar12 = iVar13 - 1;
    }
    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar12,pwVar22);
    iVar13 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_128,
                        uVar12,pFVar1);
    uVar12 = local_150;
    if (iVar13 != -1) {
      uStack_4a4 = uVar27;
      uStack_4a0 = uVar27;
      if (local_150 != 0) {
        pTVar28 = (Type *)(local_178 + 0x10);
        if (local_158 != (Type *)0x0) {
          pTVar28 = local_158;
        }
        TVar15 = *pTVar28;
        while (TVar15 == CaseSensitive) {
          lVar25 = (longlong)(int)uVar27;
          uStack_4a0 = uStack_4a0 + 0x20;
          uVar27 = uVar27 + 1;
          uStack_4a4 = local_150;
          if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
          goto LAB_14ecb4ca3;
          TVar15 = (pTVar28 + 1)[lVar25];
        }
        TVar14 = -TVar15 & TVar15;
        uVar21 = (ulonglong)TVar14 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_398.Key._4_4_ = (int)lVar25;
        uStack_4a4 = local_398.Key._4_4_ + -1 + uStack_4a0;
        if ((int)local_150 < (int)uStack_4a4) {
          uStack_4a4 = local_150;
        }
      }
LAB_14ecb4ca3:
      local_4c0 = (longlong *)local_178;
      pTStack_4b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
      local_498 = local_178._8_4_ - local_144;
      uStack_4a8 = 0xffffffff;
      uVar31 = local_150 & 0xffffffe0;
      uStack_4b8 = CONCAT44(TVar14,uVar27);
      uStack_49c = local_1bc;
      TStack_2d0._padding_ = uStack_4b8;
      iVar13 = (int)local_150 >> 5;
      uStack_2b0 = CONCAT44(uStack_494,local_498);
      bVar19 = (byte)local_150;
      TStack_2d0.UnvisitedBitMask = 0xffffffff;
      TStack_2d0.CurrentBitIndex = uStack_4a4;
      TStack_2d0.BaseBitIndex = uStack_4a0;
      TStack_2d0._28_4_ = local_1bc;
      local_2d8 = local_4c0;
      TStack_2d0.Array = pTStack_4b0;
      if (((int)local_150 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      if (uVar12 != local_150) {
        pTVar28 = (Type *)(local_178 + 0x10);
        if (local_158 != (Type *)0x0) {
          pTVar28 = local_158;
        }
        TVar14 = -1 << (bVar19 & 0x1f) & pTVar28[iVar13];
        while (TVar14 == CaseSensitive) {
          lVar25 = (longlong)iVar13;
          uVar31 = uVar31 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = local_150;
          if ((int)(((int)(local_150 - 1) >> 0x1f & 0x1fU) + (local_150 - 1)) >> 5 < iVar13)
          goto LAB_14ecb4dd3;
          TVar14 = (pTVar28 + 1)[lVar25];
        }
        uVar21 = (ulonglong)(-TVar14 & TVar14) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_398.Value._0_4_ = (int)lVar25;
        uVar12 = (uVar31 - 1) + (int)local_398.Value;
        if ((int)local_150 < (int)uVar12) {
          uVar12 = local_150;
        }
      }
LAB_14ecb4dd3:
      do {
        plVar8 = local_2d8;
        if ((int)local_2d8[1] - *(int *)((longlong)local_2d8 + 0x34) != (int)uStack_2b0) {
          local_4c7 = 0;
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4c7);
        }
        if (((TStack_2d0.CurrentBitIndex == uVar12) &&
            (TStack_2d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
           (pFVar29 = local_488, plVar8 == (longlong *)local_178)) goto LAB_14ecb50ef;
        lVar25 = *plVar8;
        if (*(int *)(lVar25 + 8 + (longlong)TStack_2d0.CurrentBitIndex * 0x18) == 0) {
          pwVar22 = L"";
LAB_14ecb4e4b:
          sVar18 = wcslen(pwVar22);
          TVar14 = (Type)local_488;
          iVar13 = ::FString::Find(pFVar1 + 1,pwVar22,(int)sVar18,TVar14,FromStart,-1);
          if (iVar13 != -1) goto LAB_14ecb5169;
        }
        else {
          pwVar22 = *(wchar_t **)(lVar25 + (longlong)TStack_2d0.CurrentBitIndex * 0x18);
          if (pwVar22 != (wchar_t *)0x0) goto LAB_14ecb4e4b;
        }
        TStack_2d0.UnvisitedBitMask = TStack_2d0.UnvisitedBitMask & ~TStack_2d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d0);
      } while( true );
    }
    iVar13 = (pFVar1->Data).ArrayNum;
    if (iVar13 == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
      uVar27 = iVar13 - 1;
    }
    uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar27,pwVar22);
    iVar13 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_178,
                        uVar27,pFVar1);
    if (iVar13 != -1) {
      local_3c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
      local_3c0._padding_._0_4_ = 0;
      local_3c0.UnvisitedBitMask = 0xffffffff;
      local_3c0.CurrentBitIndex = 0;
      local_3c0.BaseBitIndex = 0;
      local_3c0._padding_._4_4_ = TVar14;
      if (local_100 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3c0);
      }
      uVar12 = local_100;
      uStack_4b8 = CONCAT44(local_3c0._padding_._4_4_,(undefined4)local_3c0._padding_);
      local_4c0 = (longlong *)local_128;
      uStack_4a4 = local_3c0.CurrentBitIndex;
      uStack_4a8 = local_3c0.UnvisitedBitMask;
      uStack_49c = local_3c0._28_4_;
      uStack_4a0 = local_3c0.BaseBitIndex;
      local_498 = local_128._8_4_ - local_f4;
      pTStack_4b0 = local_3c0.Array;
      uVar27 = local_100 & 0xffffffe0;
      iVar13 = (int)local_100 >> 5;
      bVar19 = (byte)local_100;
      uStack_280 = CONCAT44(uStack_494,local_498);
      TStack_2a0.Array = local_3c0.Array;
      local_2a8 = local_4c0;
      TStack_2a0._padding_ = uStack_4b8;
      TStack_2a0._16_8_ = _uStack_4a8;
      TStack_2a0._24_8_ = _uStack_4a0;
      if (((int)local_100 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      if (uVar12 != local_100) {
        pTVar28 = (Type *)(local_128 + 0x10);
        if (local_108 != (Type *)0x0) {
          pTVar28 = local_108;
        }
        TVar15 = -1 << (bVar19 & 0x1f) & pTVar28[iVar13];
        while (TVar15 == CaseSensitive) {
          lVar25 = (longlong)iVar13;
          uVar27 = uVar27 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = local_100;
          if ((int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5 < iVar13)
          goto LAB_14ecb5023;
          TVar15 = (pTVar28 + 1)[lVar25];
        }
        uVar21 = (ulonglong)(-TVar15 & TVar15) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_398.Value._4_4_ = (int)lVar25;
        uVar12 = (uVar27 - 1) + local_398.Value._4_4_;
        if ((int)local_100 < (int)uVar12) {
          uVar12 = local_100;
        }
      }
LAB_14ecb5023:
      do {
        plVar8 = local_2a8;
        if ((int)local_2a8[1] - *(int *)((longlong)local_2a8 + 0x34) != (int)uStack_280) {
          local_4c6 = 0;
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4c6);
        }
        if (((TStack_2a0.CurrentBitIndex == uVar12) &&
            (TStack_2a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
           (plVar8 == (longlong *)local_128)) break;
        lVar25 = *plVar8;
        if (*(int *)(lVar25 + 8 + (longlong)TStack_2a0.CurrentBitIndex * 0x18) == 0) {
          pwVar22 = L"";
LAB_14ecb508f:
          sVar18 = wcslen(pwVar22);
          iVar13 = ::FString::Find(pFVar1 + 1,pwVar22,(int)sVar18,TVar14,FromStart,-1);
          if (iVar13 != -1) goto LAB_14ecb5169;
        }
        else {
          pwVar22 = *(wchar_t **)(lVar25 + (longlong)TStack_2a0.CurrentBitIndex * 0x18);
          if (pwVar22 != (wchar_t *)0x0) goto LAB_14ecb508f;
        }
        TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
      } while( true );
    }
LAB_14ecb50ef:
    TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Intersect
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_178,&local_88,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_128);
  local_498 = local_128._8_4_ - local_f4;
  iVar13 = local_178._8_4_ - local_144;
  iVar20 = local_88.Elements._8_4_ - local_88.Elements._52_4_;
LAB_14ecb5152:
  bVar9 = true;
LAB_14ecb5155:
  uVar27 = local_100;
  if ((iVar20 == iVar13) || (local_4d7 != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((local_4d8 == 0) && (iVar20 != local_498)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((!bVar9) || (!bVar4)) || (local_4d6 = true, !bVar5)) {
    local_4d6 = false;
  }
  uVar12 = 0;
  local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_460.Data.ArrayNum = 0;
  local_460.Data.ArrayMax = 0;
  uStack_4a4 = uVar12;
  uStack_4a0 = uVar12;
  TVar15 = TVar14;
  if (local_100 != 0) {
    pTVar28 = (Type *)(local_128 + 0x10);
    if (local_108 != (Type *)0x0) {
      pTVar28 = local_108;
    }
    TVar2 = *pTVar28;
    while (TVar2 == CaseSensitive) {
      lVar25 = (longlong)(int)uVar12;
      uStack_4a0 = uStack_4a0 + 0x20;
      uVar12 = uVar12 + 1;
      uStack_4a4 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14ecb5283;
      TVar2 = (pTVar28 + 1)[lVar25];
    }
    TVar15 = -TVar2 & TVar2;
    uVar21 = (ulonglong)TVar15 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_388 = (int)lVar25;
    uStack_4a4 = (uStack_4a0 - 1) + local_388;
    if ((int)local_100 < (int)uStack_4a4) {
      uStack_4a4 = local_100;
    }
  }
LAB_14ecb5283:
  local_4c0 = (longlong *)local_128;
  pTStack_4b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  uStack_4b8 = CONCAT44(TVar15,uVar12);
  uStack_4a8 = 0xffffffff;
  uVar12 = local_100 & 0xffffffe0;
  TStack_240._padding_ = uStack_4b8;
  uStack_49c = local_19c;
  uStack_220 = CONCAT44(uStack_494,local_498);
  iVar20 = (int)local_100 >> 5;
  bVar19 = (byte)local_100;
  TStack_240.BaseBitIndex = uStack_4a0;
  TStack_240._28_4_ = local_19c;
  TStack_240.UnvisitedBitMask = 0xffffffff;
  TStack_240.CurrentBitIndex = uStack_4a4;
  local_248 = local_4c0;
  TStack_240.Array = pTStack_4b0;
  if (((int)local_100 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return (bool)uVar10;
  }
  if (uVar27 != local_100) {
    pTVar28 = (Type *)(local_128 + 0x10);
    if (local_108 != (Type *)0x0) {
      pTVar28 = local_108;
    }
    TVar15 = -1 << (bVar19 & 0x1f) & pTVar28[iVar20];
    while (TVar15 == CaseSensitive) {
      lVar25 = (longlong)iVar20;
      uVar12 = uVar12 + 0x20;
      iVar20 = iVar20 + 1;
      uVar27 = local_100;
      if ((int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5 < iVar20)
      goto LAB_14ecb53a3;
      TVar15 = (pTVar28 + 1)[lVar25];
    }
    uVar21 = (ulonglong)(-TVar15 & TVar15) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_2f0 = (int)lVar25;
    uVar27 = (uVar12 - 1) + local_2f0;
    if ((int)local_100 < (int)uVar27) {
      uVar27 = local_100;
    }
  }
LAB_14ecb53a3:
  while( true ) {
    plVar8 = local_248;
    if ((int)local_248[1] - *(int *)((longlong)local_248 + 0x34) != (int)uStack_220) {
      local_4c5 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4c5);
    }
    uVar12 = 0;
    if (((TStack_240.CurrentBitIndex == uVar27) &&
        (TStack_240.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar8 == (longlong *)local_128)) break;
    ::FString::ConcatFC(&local_370,
                        (FString *)(*plVar8 + (longlong)TStack_240.CurrentBitIndex * 0x18),L"|");
    uVar31 = local_370.Data.ArrayNum - 1;
    if (local_370.Data.ArrayNum == 0) {
      uVar31 = uVar12;
    }
    ::FString::AppendChars(&local_460,(wchar_t *)local_370.Data.AllocatorInstance.Data,uVar31);
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
    }
    TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  uVar27 = local_150;
  local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470.Data.ArrayNum = 0;
  local_470.Data.ArrayMax = 0;
  uStack_4a4 = uVar12;
  uStack_4a0 = 0;
  if (local_150 != 0) {
    pTVar28 = (Type *)(local_178 + 0x10);
    if (local_158 != (Type *)0x0) {
      pTVar28 = local_158;
    }
    TVar15 = *pTVar28;
    uStack_4a0 = 0;
    uVar12 = 0;
    while (TVar15 == CaseSensitive) {
      lVar25 = (longlong)(int)uVar12;
      uStack_4a0 = uStack_4a0 + 0x20;
      uVar12 = uVar12 + 1;
      uStack_4a4 = local_150;
      if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14ecb5522;
      TVar15 = (pTVar28 + 1)[lVar25];
    }
    TVar14 = -TVar15 & TVar15;
    uVar21 = (ulonglong)TVar14 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uStack_4a4 = (uStack_4a0 - 1) + (int)lVar25;
    local_478 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_478._4_4_,(int)lVar25);
    if ((int)local_150 < (int)uStack_4a4) {
      uStack_4a4 = local_150;
    }
  }
LAB_14ecb5522:
  local_4c0 = (longlong *)local_178;
  pTStack_4b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
  local_498 = local_178._8_4_ - local_144;
  uVar31 = local_150 & 0xffffffe0;
  uStack_4a8 = 0xffffffff;
  bVar19 = (byte)local_150;
  uStack_4b8 = CONCAT44(TVar14,uVar12);
  uStack_49c = local_17c;
  TStack_448._padding_ = uStack_4b8;
  iVar20 = (int)local_150 >> 5;
  local_428 = CONCAT44(uStack_494,local_498);
  TStack_448.UnvisitedBitMask = 0xffffffff;
  TStack_448.CurrentBitIndex = uStack_4a4;
  TStack_448.BaseBitIndex = uStack_4a0;
  TStack_448._28_4_ = local_17c;
  local_450 = local_4c0;
  TStack_448.Array = pTStack_4b0;
  if (((int)local_150 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return (bool)uVar10;
  }
  if (uVar27 != local_150) {
    pTVar28 = (Type *)(local_178 + 0x10);
    if (local_158 != (Type *)0x0) {
      pTVar28 = local_158;
    }
    TVar14 = -1 << (bVar19 & 0x1f) & pTVar28[iVar20];
    while (TVar14 == CaseSensitive) {
      lVar25 = (longlong)iVar20;
      uVar31 = uVar31 + 0x20;
      iVar20 = iVar20 + 1;
      uVar27 = local_150;
      if ((int)(((int)(local_150 - 1) >> 0x1f & 0x1fU) + (local_150 - 1)) >> 5 < iVar20)
      goto LAB_14ecb5650;
      TVar14 = (pTVar28 + 1)[lVar25];
    }
    uVar21 = (ulonglong)(-TVar14 & TVar14) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar27 = (uVar31 - 1) + (int)lVar25;
    if ((int)local_150 < (int)uVar27) {
      uVar27 = local_150;
    }
  }
LAB_14ecb5650:
  while( true ) {
    plVar8 = local_450;
    if ((int)local_450[1] - *(int *)((longlong)local_450 + 0x34) != (int)local_428) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4c4);
    }
    if (((TStack_448.CurrentBitIndex == uVar27) &&
        (TStack_448.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
       (plVar8 == (longlong *)local_178)) break;
    ::FString::ConcatFC(&local_360,
                        (FString *)(*plVar8 + (longlong)TStack_448.CurrentBitIndex * 0x18),L"|");
    uVar12 = local_360.Data.ArrayNum - 1;
    if (local_360.Data.ArrayNum == 0) {
      uVar12 = 0;
    }
    ::FString::AppendChars(&local_470,(wchar_t *)local_360.Data.AllocatorInstance.Data,uVar12);
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
    TStack_448.UnvisitedBitMask = TStack_448.UnvisitedBitMask & ~TStack_448._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_448);
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  if (4 < (byte)LogPartyBeacon._0_1_) {
    pwVar33 = L"true";
    pwVar22 = L"true";
    if (local_4d6 == false) {
      pwVar22 = L"false";
    }
    ::FString::FString(&local_300,pwVar22);
    pwVar22 = L"true";
    if (!bVar5) {
      pwVar22 = L"false";
    }
    ::FString::FString(&local_310,pwVar22);
    pwVar22 = L"true";
    if (!bVar4) {
      pwVar22 = L"false";
    }
    ::FString::FString(&local_320,pwVar22);
    pwVar22 = L"true";
    if (!bVar9) {
      pwVar22 = L"false";
    }
    ::FString::FString(&local_330,pwVar22);
    pwVar22 = L"true";
    if (local_4d8 == 0) {
      pwVar22 = L"false";
    }
    ::FString::FString(&local_340,pwVar22);
    if (local_4d7 == 0) {
      pwVar33 = L"false";
    }
    ::FString::FString(&local_350,pwVar33);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  local_130 = 0;
  if (local_138 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_178);
LAB_14ecb5963:
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  return local_4d6;
LAB_14ecb5169:
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Intersect
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_178,&local_88,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_128);
  local_498 = local_128._8_4_ - local_f4;
  iVar13 = local_178._8_4_ - local_144;
  iVar20 = local_88.Elements._8_4_ - local_88.Elements._52_4_;
  if (local_490->bRestrictCrossConsole == false) goto LAB_14ecb5152;
  bVar9 = false;
  goto LAB_14ecb5155;
}

// DoesModifiedReservationFit @ 14ecb6090

bool __thiscall
UPartyBeaconState::DoesModifiedReservationFit
          (UPartyBeaconState *this,FPartyReservation *param_1,
          TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2->ArrayNum;
  iVar2 = (**(code **)(this->_padding_ + 0x330))();
  return (bool)((byte)((uint)(iVar2 - iVar1) >> 0x1f) ^ 1);
}

// DoesReservationFit @ 14ecb60c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPartyBeaconState::DoesReservationFit(UPartyBeaconState *this,FPartyReservation *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = true;
  iVar1 = (param_1->PartyMembers).ArrayNum;
  if ((this->bRespectCompetitiveIntegrity != false) &&
     ((iVar1 < 1 || (this->NumPlayersPerTeam < iVar1)))) {
    bVar4 = false;
  }
  iVar2 = this->NumConsumedReservations;
  iVar3 = this->MaxReservations;
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  if ((bVar4) && (iVar2 + iVar1 <= iVar3)) {
    return true;
  }
  return false;
}

// DumpReservations @ 14ecb6980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPartyBeaconState::DumpReservations(UPartyBeaconState *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  FUniqueNetId *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar9;
  wchar_t *pwVar10;
  FUniqueNetIdRepl *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_188 [32];
  longlong local_140;
  FString local_130;
  FString local_120;
  TSharedPtr<FUniqueNetId_const_,1> local_110;
  void *local_100 [2];
  TSharedPtr<FUniqueNetId_const_,1> local_f0;
  void *local_e0 [2];
  FUniqueNetIdRepl local_d0;
  FString local_a0;
  FString local_90;
  char local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  longlong local_70;
  longlong lStack_68;
  ulonglong local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_60 = local_60 & 0xffffffffffffff00;
  local_70 = 0;
  lStack_68 = 0;
  local_78 = (undefined1  [8])&___7FUniqueNetIdRepl__6B_;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_d0._padding_ = 0;
  local_d0._padding_ = 0;
  local_d0._padding_._0_1_ = 0;
  local_d0._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_d0.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ReplicationBytes.ArrayNum = 0;
  local_d0.ReplicationBytes.ArrayMax = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_80 = '\0';
  local_7c = 0;
  if (3 < (byte)LogPartyBeacon._0_1_) {
    ::FName::ToString(&this->SessionName,&local_120);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if ((((3 < (byte)LogPartyBeacon._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon),
         3 < (byte)LogPartyBeacon._0_1_)) &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon),
        3 < (byte)LogPartyBeacon._0_1_)) &&
       ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon),
        3 < (byte)LogPartyBeacon._0_1_ &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon),
        3 < (byte)LogPartyBeacon._0_1_)))) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
  }
  uVar15 = 0;
  if (0 < (this->Reservations).ArrayNum) {
    local_140 = 0;
    do {
      uVar17 = ~uVar15 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar15 < (this->Reservations).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->Reservations).AllocatorInstance.Data;
      if (pFVar3 + local_140 + 0x10 != (FScriptContainerElement *)(local_78 + 8)) {
        FVar1 = pFVar3[local_140 + 0x20];
        local_38 = CONCAT71(local_38._1_7_,FVar1);
        if ((1 < (byte)FVar1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[(byte)FVar1])(&local_48,pFVar3 + local_140 + 0x10);
        uVar12 = local_38;
        lVar6 = lStack_40;
        lVar16 = local_48;
        local_38 = local_60;
        uVar14 = local_60 & 0xff;
        local_60 = uVar12;
        local_48 = local_70;
        lStack_40 = lStack_68;
        local_70 = lVar16;
        lStack_68 = lVar6;
        if ((1 < uVar14) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(&local_48);
      }
      if ((FScriptContainerElement *)&local_58 != pFVar3 + local_140 + 0x28) {
        iVar2 = *(int *)(pFVar3 + local_140 + 0x30);
        _Src = *(void **)(pFVar3 + local_140 + 0x28);
        local_50 = CONCAT44(local_50._4_4_,iVar2);
        if ((iVar2 == 0) && (local_50._4_4_ == 0)) {
          local_50 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,local_50._4_4_,&local_58,iVar2,(int *)((longlong)&local_50 + 4));
          if (iVar2 != 0) {
            memcpy(local_58.Data,_Src,(longlong)iVar2);
          }
        }
      }
      if (3 < (byte)LogPartyBeacon._0_1_) {
        pTVar9 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)local_78,&local_110);
        pFVar4 = pTVar9->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110.SharedReferenceCount.ReferenceController);
        (**(code **)(*(longlong *)pFVar4 + 0x38))(pFVar4,local_100);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        if (local_100[0] != (void *)0x0) {
          FMemory::Free(local_100[0]);
        }
        if (3 < (byte)LogPartyBeacon._0_1_) {
          uVar13 = 0;
          if ((int)uVar15 < (this->Reservations).ArrayNum) {
            uVar13 = uVar17;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u___Party_team____15307bcf0,
                     (FLogCategoryBase *)&LogPartyBeacon);
          if (3 < (byte)LogPartyBeacon._0_1_) {
            uVar13 = 0;
            if ((int)uVar15 < (this->Reservations).ArrayNum) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          }
        }
      }
      uVar13 = 0;
      lVar16 = 0;
      while( true ) {
        uVar8 = 0;
        if ((int)uVar15 < (this->Reservations).ArrayNum) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)((this->Reservations).AllocatorInstance.Data + local_140 + 0x40) <= (int)uVar13)
        break;
        uVar8 = 0;
        if ((int)uVar15 < (this->Reservations).ArrayNum) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Reservations).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar13 < *(int *)(pFVar3 + (longlong)(int)uVar15 * 0x58 + 0x40)) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = (FUniqueNetIdRepl *)
                  (*(longlong *)(pFVar3 + (longlong)(int)uVar15 * 0x58 + 0x38) + lVar16);
        FUniqueNetIdRepl::operator=(&local_d0,pFVar11);
        ::FString::operator=(&local_a0,(FString *)(pFVar11 + 1));
        ::FString::operator=(&local_90,(FString *)&pFVar11[1]._padding_);
        local_80 = *(char *)&pFVar11[1].ReplicationBytes.AllocatorInstance.Data;
        local_7c = *(undefined4 *)
                    ((longlong)&pFVar11[1].ReplicationBytes.AllocatorInstance.Data + 4);
        if (3 < (byte)LogPartyBeacon._0_1_) {
          pwVar10 = L"true";
          if (local_80 == '\0') {
            pwVar10 = L"false";
          }
          ::FString::FString(&local_130,pwVar10);
          pTVar9 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_d0,&local_f0);
          pFVar4 = pTVar9->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f0.SharedReferenceCount.ReferenceController);
          (**(code **)(*(longlong *)pFVar4 + 0x30))(pFVar4,local_e0);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          if (local_e0[0] != (void *)0x0) {
            FMemory::Free(local_e0[0]);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        uVar13 = uVar13 + 1;
        lVar16 = lVar16 + 0x58;
      }
      local_140 = local_140 + 0x58;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (this->Reservations).ArrayNum);
  }
  if (3 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_d0);
  local_78 = (undefined1  [8])&___7FUniqueNetIdRepl__6B_;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  uVar12 = local_60 & 0xff;
  if ((1 < (byte)local_60) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar12])(local_78 + 8);
  return;
}

// GetExistingReservation @ 14ecb91c0

int __thiscall
UPartyBeaconState::GetExistingReservation(UPartyBeaconState *this,FUniqueNetIdRepl *param_1)

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
  
  uVar12 = 0;
  if ((this->Reservations).ArrayNum < 1) {
    return -1;
  }
  lVar13 = 0;
  do {
    uVar5 = 0;
    if ((int)uVar12 < (this->Reservations).ArrayNum) {
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
    this_00 = (FUniqueNetIdWrapper *)((this->Reservations).AllocatorInstance.Data + lVar13 + 8);
    bVar2 = FUniqueNetIdWrapper::IsValid(this_00);
    bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
    if (bVar2 == bVar3) {
      if (!bVar2) {
        return uVar12;
      }
      if ((this_00->Variant).TypeIndex == (uchar)param_1->_padding_) {
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
        if (cVar4 != '\0') {
          return uVar12;
        }
      }
    }
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + 0x58;
    if ((this->Reservations).ArrayNum <= (int)uVar12) {
      return -1;
    }
  } while( true );
}

// GetExistingReservationContainingMember @ 14ecb9470

int __thiscall
UPartyBeaconState::GetExistingReservationContainingMember
          (UPartyBeaconState *this,FUniqueNetIdRepl *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar8;
  FUniqueNetId *pFVar9;
  FUniqueNetId *pFVar10;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar11;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar12;
  FUniqueNetIdWrapper *this_00;
  uint uVar13;
  FUniqueNetIdWrapper *pFVar14;
  undefined1 local_res8 [8];
  uint local_res18;
  longlong local_res20;
  
  uVar13 = 0;
  local_res18 = 0xffffffff;
  if ((this->Reservations).ArrayNum < 1) {
    return -1;
  }
  local_res20 = 0;
LAB_14ecb94c0:
  uVar6 = 0;
  if ((int)uVar13 < (this->Reservations).ArrayNum) {
    uVar6 = ~uVar13 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  pFVar1 = (this->Reservations).AllocatorInstance.Data;
  iVar7 = *(int *)(pFVar1 + local_res20 + 0x40);
  this_00 = *(FUniqueNetIdWrapper **)(pFVar1 + local_res20 + 0x38);
  pFVar14 = (FUniqueNetIdWrapper *)((longlong)iVar7 * 0x58 + (longlong)this_00);
  do {
    if (*(int *)(pFVar1 + local_res20 + 0x40) != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    uVar6 = local_res18;
    if (this_00 == pFVar14) break;
    bVar3 = FUniqueNetIdWrapper::IsValid(this_00);
    bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
    if (bVar3 == bVar4) {
      uVar6 = uVar13;
      if (!bVar3) break;
      if ((this_00->Variant).TypeIndex == (uchar)param_1->_padding_) {
        bVar3 = FUniqueNetIdWrapper::IsV1(this_00);
        if (bVar3) {
          pTVar8 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)param_1);
          pFVar9 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar8);
          pTVar8 = FUniqueNetIdWrapper::GetV1Unsafe(this_00);
          pFVar10 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar8);
          cVar5 = (*(code *)**(undefined8 **)pFVar10)(pFVar10,pFVar9);
        }
        else {
          pTVar11 = FUniqueNetIdWrapper::GetV2Unsafe(this_00);
          pTVar12 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)param_1);
          cVar5 = pTVar11->Value == pTVar12->Value;
        }
        if (cVar5 != '\0') break;
      }
    }
    this_00 = (FUniqueNetIdWrapper *)&this_00[2].Variant.TypeIndex;
  } while( true );
  local_res18 = uVar6;
  uVar13 = uVar13 + 1;
  local_res20 = local_res20 + 0x58;
  if ((this->Reservations).ArrayNum <= (int)uVar13) {
    return local_res18;
  }
  goto LAB_14ecb94c0;
}

// GetMaxAvailableTeamSize @ 14ecb9720

int __thiscall UPartyBeaconState::GetMaxAvailableTeamSize(UPartyBeaconState *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < this->NumTeams) {
    do {
      iVar4 = this->NumPlayersPerTeam;
      iVar1 = (**(code **)(this->_padding_ + 0x378))(this,iVar3);
      iVar4 = iVar4 - iVar1;
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
      iVar2 = iVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < this->NumTeams);
  }
  return iVar2;
}

// GetMaxPlayersPerTeam @ 14ecb97a0

int __thiscall UPartyBeaconState::GetMaxPlayersPerTeam(UPartyBeaconState *this)

{
  return this->NumPlayersPerTeam;
}

// GetMaxReservations @ 14ecb97f0

int __thiscall UPartyBeaconState::GetMaxReservations(UPartyBeaconState *this)

{
  return this->MaxReservations;
}

// GetNumConsumedReservations @ 14ecb9850

int __thiscall UPartyBeaconState::GetNumConsumedReservations(UPartyBeaconState *this)

{
  return this->NumConsumedReservations;
}

// GetNumPlayersOnTeam @ 14ecb98e0

int __thiscall UPartyBeaconState::GetNumPlayersOnTeam(UPartyBeaconState *this,int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_res18;
  
  iVar6 = 0;
  uVar11 = 0;
  if (0 < (this->Reservations).ArrayNum) {
    local_res18 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->Reservations).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      pFVar8 = (this->Reservations).AllocatorInstance.Data + local_res18;
      if ((*(int *)pFVar8 == param_1) && (uVar9 = 0, 0 < *(int *)(pFVar8 + 0x40))) {
        lVar12 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar9 < *(int *)(pFVar8 + 0x40)) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          lVar10 = *(longlong *)(pFVar8 + 0x38) + lVar12;
          bVar1 = *(byte *)(lVar10 + 0x18);
          if ((1 < (ulonglong)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
            if ((*(char *)(lVar10 + 0x18) != '\x01') &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            bVar4 = (*(uint *)(lVar10 + 8) & 0xffffff) != 0;
          }
          else {
            if ((*(char *)(lVar10 + 0x18) != '\0') &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            if ((*(longlong **)(lVar10 + 8) == (longlong *)0x0) ||
               (cVar5 = (**(code **)(**(longlong **)(lVar10 + 8) + 0x28))(), cVar5 == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
          iVar3 = iVar6 + 1;
          if (!bVar4) {
            iVar3 = iVar6;
          }
          iVar6 = iVar3;
          uVar9 = uVar9 + 1;
          lVar12 = lVar12 + 0x58;
        } while ((int)uVar9 < *(int *)(pFVar8 + 0x40));
      }
      local_res18 = local_res18 + 0x58;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (this->Reservations).ArrayNum);
  }
  return iVar6;
}

// GetNumTeams @ 14ecb9b30

int __thiscall UPartyBeaconState::GetNumTeams(UPartyBeaconState *this)

{
  return this->NumTeams;
}

// GetPartyLeader @ 14ecba230

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPartyBeaconState::GetPartyLeader
          (UPartyBeaconState *this,FUniqueNetIdRepl *param_1,FUniqueNetIdRepl *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  FUniqueNetIdWrapper *pFVar8;
  uint uVar9;
  FUniqueNetIdWrapper *pFVar10;
  ulonglong uVar11;
  FUniqueNetIdWrapper local_d0;
  void *local_b0;
  undefined8 local_a8;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  *local_a0;
  FUniqueNetIdRepl *local_98;
  undefined **local_90;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_88;
  void *local_70;
  undefined8 local_68;
  FString local_60;
  FString local_50;
  
  local_98 = param_2;
  bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if (!bVar4) {
    return false;
  }
  uVar7 = 0;
  if (0 < (this->Reservations).ArrayNum) {
    local_a0 = (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&param_1->_padding_;
    uVar11 = uVar7;
    do {
      pTVar3 = local_a0;
      uVar9 = (uint)uVar7;
      uVar6 = 0;
      if ((int)uVar9 < (this->Reservations).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = (this->Reservations).AllocatorInstance.Data;
      local_90 = &___7FUniqueNetIdWrapper__6B_;
      TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
      ::
      TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                (&local_88,pTVar3);
      local_70 = (void *)0x0;
      local_d0._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
      local_90 = &___7FUniqueNetIdRepl__6B_;
      local_68 = 0;
      TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
      ::
      TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                (&local_d0.Variant,&local_88);
      local_d0._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
      pFVar8 = *(FUniqueNetIdWrapper **)(pFVar1 + uVar11 + 0x38);
      pFVar10 = (FUniqueNetIdWrapper *)
                ((longlong)*(int *)(pFVar1 + uVar11 + 0x40) * 0x58 + (longlong)pFVar8);
      local_b0 = (void *)0x0;
      local_a8 = 0;
      for (; pFVar8 != pFVar10; pFVar8 = (FUniqueNetIdWrapper *)&pFVar8[2].Variant.TypeIndex) {
        bVar4 = ::operator==(&local_d0,pFVar8);
        if (bVar4) {
          local_d0._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
          if (local_b0 != (void *)0x0) {
            FMemory::Free(local_b0);
          }
          uVar7 = (ulonglong)local_d0.Variant.TypeIndex;
          if ((1 < local_d0.Variant.TypeIndex) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7])(&local_d0.Variant);
          goto LAB_14ecba3e6;
        }
      }
      local_d0._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
      if (local_b0 != (void *)0x0) {
        FMemory::Free(local_b0);
      }
      uVar7 = (ulonglong)local_d0.Variant.TypeIndex;
      if ((1 < local_d0.Variant.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(&local_d0.Variant);
      pFVar8 = (FUniqueNetIdWrapper *)0x0;
LAB_14ecba3e6:
      local_90 = &___7FUniqueNetIdRepl__6B_;
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      uVar7 = (ulonglong)local_88.TypeIndex;
      if ((1 < local_88.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(&local_88);
      if (pFVar8 != (FUniqueNetIdWrapper *)0x0) {
        if (3 < (byte)LogPartyBeacon._0_1_) {
          FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_60);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        FUniqueNetIdRepl::operator=(local_98,(FUniqueNetIdRepl *)(pFVar1 + uVar11 + 8));
        return true;
      }
      uVar7 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 0x58;
    } while ((int)(uVar9 + 1) < (this->Reservations).ArrayNum);
  }
  if (2 < (byte)LogPartyBeacon._0_1_) {
    FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_50);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetPlayerValidation @ 14ecba6f0

bool __thiscall
UPartyBeaconState::GetPlayerValidation
          (UPartyBeaconState *this,FUniqueNetId *param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FUniqueNetId *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar10;
  FString *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  bool local_res18;
  longlong local_res20;
  FString local_68;
  TSharedPtr<FUniqueNetId_const_,1> local_58;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18 = false;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  if (param_2 != &local_68) {
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  uVar13 = 0;
  bVar6 = false;
  if (0 < (this->Reservations).ArrayNum) {
    local_res20 = 0;
    do {
      if (local_res18 != false) {
        return local_res18;
      }
      uVar12 = 0;
      if ((int)uVar13 < (this->Reservations).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar3 = (this->Reservations).AllocatorInstance.Data;
      uVar12 = 0;
      lVar14 = 0;
      if (0 < *(int *)(pFVar3 + local_res20 + 0x40)) {
        do {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)(pFVar3 + local_res20 + 0x40)) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pTVar10 = FUniqueNetIdWrapper::GetV1
                              ((FUniqueNetIdWrapper *)
                               ((longlong)(int)uVar12 * 0x58 +
                               *(longlong *)(pFVar3 + local_res20 + 0x38)),&local_58);
          if ((pTVar10->Object == (FUniqueNetId *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar4 = pTVar10->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          cVar8 = (*(code *)**(undefined8 **)pFVar4)(pFVar4,param_1);
          if (cVar8 != '\0') {
            uVar9 = 0;
            if ((int)uVar12 < *(int *)(pFVar3 + local_res20 + 0x40)) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            pFVar11 = (FString *)(*(longlong *)(pFVar3 + local_res20 + 0x38) + 0x30 + lVar14 * 0x58)
            ;
            if (param_2 != pFVar11) {
              iVar2 = (pFVar11->Data).ArrayNum;
              piVar1 = &(param_2->Data).ArrayMax;
              pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
              (param_2->Data).ArrayNum = iVar2;
              if ((iVar2 == 0) && (*piVar1 == 0)) {
                *piVar1 = 0;
                local_res18 = true;
                break;
              }
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar2,*piVar1,(ForAnyElementType *)param_2,iVar2,piVar1);
              if (iVar2 != 0) {
                memcpy((param_2->Data).AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
              }
            }
            local_res18 = true;
            break;
          }
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 1;
        } while ((int)uVar12 < *(int *)(pFVar3 + local_res20 + 0x40));
      }
      uVar13 = uVar13 + 1;
      local_res20 = local_res20 + 0x58;
      bVar6 = local_res18;
    } while ((int)uVar13 < (this->Reservations).ArrayNum);
  }
  return bVar6;
}

// GetPlayersOnTeam @ 14ecbac10

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UPartyBeaconState::GetPlayersOnTeam
          (UPartyBeaconState *this,int param_1,
          TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint local_res20;
  longlong local_48;
  
  uVar7 = this->NumPlayersPerTeam;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  DestructItems<FUniqueNetIdRepl,int>
            ((FUniqueNetIdRepl *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar7,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar4 = (**(code **)(this->_padding_ + 0x358))(this);
  if (iVar4 <= param_1) {
    if (2 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    return 0;
  }
  local_res20 = 0;
  if (0 < (this->Reservations).ArrayNum) {
    local_48 = 0;
    do {
      uVar7 = 0;
      if ((int)local_res20 < (this->Reservations).ArrayNum) {
        uVar7 = ~local_res20 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar7 = 0;
      pFVar9 = (this->Reservations).AllocatorInstance.Data + local_48;
      if ((*(int *)pFVar9 == param_1) && (0 < *(int *)(pFVar9 + 0x40))) {
        do {
          uVar5 = 0;
          if ((int)uVar7 < *(int *)(pFVar9 + 0x40)) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          pFVar6 = (param_2->AllocatorInstance).Data;
          pFVar8 = (FScriptContainerElement *)
                   ((longlong)(int)uVar7 * 0x58 + *(longlong *)(pFVar9 + 0x38));
          if (((pFVar6 <= pFVar8) && (pFVar8 < pFVar6 + (longlong)*piVar1 * 0x30)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          iVar4 = param_2->ArrayNum;
          if (iVar4 == *piVar1) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar4 + 1;
          pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
          *(undefined ***)pFVar6 = &___7FUniqueNetIdWrapper__6B_;
          TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          ::
          TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                    ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                      *)(pFVar6 + 8),
                     (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                      *)(pFVar8 + 8));
          *(undefined ***)pFVar6 = &___7FUniqueNetIdRepl__6B_;
          uVar7 = uVar7 + 1;
          *(undefined8 *)(pFVar6 + 0x20) = 0;
          *(undefined8 *)(pFVar6 + 0x28) = 0;
        } while ((int)uVar7 < *(int *)(pFVar9 + 0x40));
      }
      local_res20 = local_res20 + 1;
      local_48 = local_48 + 0x58;
    } while ((int)local_res20 < (this->Reservations).ArrayNum);
  }
  return param_2->ArrayNum;
}

// GetPrivateStaticClass @ 14ecbb670

UClass * __cdecl UPartyBeaconState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPartyBeaconState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"PartyBeaconState",
               &Z_Registration_Info_UClass_UPartyBeaconState.InnerSingleton,
               StaticRegisterNativesUPartyBeaconState,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPartyBeaconState>,
               InternalVTableHelperCtorCaller<UPartyBeaconState>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPartyBeaconState.InnerSingleton;
}

// GetRemainingReservations @ 14ecbb950

int __thiscall UPartyBeaconState::GetRemainingReservations(UPartyBeaconState *this)

{
  return this->MaxReservations - this->NumConsumedReservations;
}

// GetReservationCount @ 14ecbb9b0

int __thiscall UPartyBeaconState::GetReservationCount(UPartyBeaconState *this)

{
  return (this->Reservations).ArrayNum;
}

// GetReservationPlatformCount @ 14ecbb9f0

int __thiscall
UPartyBeaconState::GetReservationPlatformCount
          (UPartyBeaconState *this,FString *param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FPartyBeaconCrossplayPlatformMapping *pFVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  
  pFVar10 = (this->Reservations).AllocatorInstance.Data;
  uVar1 = (this->Reservations).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  iVar11 = 0;
  pFVar7 = pFVar10 + uVar6 * 0x58;
  pFVar12 = pFVar10 + 0x40;
  do {
    if ((this->Reservations).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FPartyReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar7) {
      return iVar11;
    }
    iVar2 = *(int *)pFVar12;
    lVar8 = *(longlong *)(pFVar12 + -8);
    lVar9 = (longlong)iVar2 * 0x58 + lVar8;
    while( true ) {
      if (*(int *)pFVar12 != iVar2) {
        `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar8 == lVar9) break;
      iVar4 = *(int *)(lVar8 + 0x48);
      iVar3 = (param_1->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar8 + 0x40),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar13 = iVar4 == 0;
          goto LAB_14ecbbaaa;
        }
LAB_14ecbbafb:
        iVar11 = iVar11 + 1;
      }
      else {
        bVar13 = iVar4 + iVar3 == 1;
LAB_14ecbbaaa:
        if (bVar13) goto LAB_14ecbbafb;
        if (param_2) {
          pFVar5 = TArray<FPartyBeaconCrossplayPlatformMapping,TSizedDefaultAllocator<32>_>::
                   FindByKey<FString>(&this->PlatformTypeMapping,(FString *)(lVar8 + 0x40));
          if (pFVar5 != (FPartyBeaconCrossplayPlatformMapping *)0x0) {
            iVar4 = (pFVar5->PlatformType).Data.ArrayNum;
            iVar3 = (param_1->Data).ArrayNum;
            if (iVar4 == iVar3) {
              if (iVar4 < 2) goto LAB_14ecbbafb;
              iVar4 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar5->PlatformType).Data.AllocatorInstance.Data,
                                 (wchar_t *)(param_1->Data).AllocatorInstance.Data);
              bVar13 = iVar4 == 0;
            }
            else {
              bVar13 = iVar3 + iVar4 == 1;
            }
            if (bVar13) goto LAB_14ecbbafb;
          }
        }
      }
      lVar8 = lVar8 + 0x58;
    }
    pFVar10 = pFVar10 + 0x58;
    uVar6 = (ulonglong)uVar1;
    pFVar12 = pFVar12 + 0x58;
  } while( true );
}

// GetReservationTeamCount @ 14ecbbc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall UPartyBeaconState::GetReservationTeamCount(UPartyBeaconState *this)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  byte bVar10;
  ForAnyElementType FVar11;
  TSparseSetElement<int> *pTVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  TSparseSetElement<int> *pTVar18;
  TSparseSetElement<int> *pTVar19;
  TSparseSetElement<int> *pTVar20;
  uint uVar21;
  undefined1 auStackY_128 [32];
  int local_f8 [2];
  uint local_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  int local_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  FSparseArrayAllocationInfo local_a0;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pTVar20 = (TSparseSetElement<int> *)0x0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pTVar19 = pTVar20;
  pTVar12 = pTVar20;
  if (0 < (this->Reservations).ArrayNum) {
    do {
      uVar21 = (uint)pTVar12;
      uVar16 = 0;
      if ((int)uVar21 < (this->Reservations).ArrayNum) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      pFVar2 = (this->Reservations).AllocatorInstance.Data;
      if (*(int *)(&pTVar19->field_0x0 + (longlong)pFVar2) != -1) {
        if (local_54 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                             (int *)(local_88 + 0xc));
          iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
          FVar14 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_68;
          }
          bVar10 = (byte)iVar8 & 0x1f;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 0x1f;
            bVar10 = bVar10 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar14 + (longlong)(iVar8 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar10 & 0x1f));
          iVar8 = local_58;
        }
        else {
          local_54 = local_54 + -1;
          iVar8 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0xc + 4);
          iVar7 = local_58;
          if (local_54 != 0) {
            *(undefined4 *)(local_88._0_8_ + (longlong)iVar8 * 0xc) = 0xffffffff;
          }
        }
        local_58 = iVar8;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,&local_a0,iVar7);
        pTVar12 = pTVar20;
        if (local_a0.Pointer != (TSparseSetElement<int> *)0x0) {
          *(undefined4 *)local_a0.Pointer = *(undefined4 *)(&pTVar19->field_0x0 + (longlong)pFVar2);
          *(undefined4 *)((longlong)local_a0.Pointer + 4) = 0xffffffff;
          pTVar12 = local_a0.Pointer;
        }
        uVar16 = *(uint *)pTVar12;
        local_f8[0] = local_a0.Index;
        bVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,uVar16,
                           pTVar12,local_f8,(bool *)0x0);
        if (!bVar6) {
          uVar15 = 1;
          uVar13 = local_88._8_4_ - local_54;
          if (3 < uVar13) {
            uVar17 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            local_d0 = (undefined4)lVar3;
            uVar15 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((int)uVar13 < 1) || ((int)uVar15 <= (int)local_40)) {
            uVar16 = local_40 - 1 & uVar16;
            *(uint *)&pTVar12->field_0x8 = uVar16;
            FVar11.Data = (FScriptContainerElement *)local_50;
            if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar11.Data = local_48.Data;
            }
            uVar17 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
            *(undefined4 *)&pTVar12->field_0x4 = *(undefined4 *)((longlong)FVar11.Data + uVar17 * 4)
            ;
            *(int *)((longlong)FVar11.Data + uVar17 * 4) = local_f8[0];
          }
          else {
            local_40 = uVar15;
            if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
            }
            if (uVar15 != 0) {
              uVar16 = uVar15;
              if (uVar15 < 2) {
                if ((ForElementType<FSetElementId>)local_48.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar16 = 0;
                  goto LAB_14ecbbe47;
                }
              }
              else {
LAB_14ecbbe47:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_48,0,uVar16,4);
              }
              if (0 < (int)uVar15) {
                uVar17 = (ulonglong)uVar15;
                pTVar12 = pTVar20;
                do {
                  FVar11.Data = (FScriptContainerElement *)local_50;
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar11.Data = local_48.Data;
                  }
                  uVar9 = (ulonglong)pTVar12 & (longlong)(int)uVar15 - 1U;
                  pTVar12 = (TSparseSetElement<int> *)&pTVar12->field_0x1;
                  *(undefined4 *)((longlong)FVar11.Data + uVar9 * 4) = 0xffffffff;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
            }
            if (local_40 != 0) {
              pTStack_e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
              local_f0 = 0;
              uStack_ec = 1;
              uStack_dc = 0;
              uStack_d8 = 0;
              pTVar12 = pTVar20;
              if (local_60 != 0) {
                FVar14 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
                if (local_68 != (ForElementType<unsigned_int>)0x0) {
                  FVar14 = local_68;
                }
                uVar16 = *(uint *)FVar14;
                pTVar18 = pTVar20;
                while (uVar16 == 0) {
                  uStack_d8 = (int)pTVar18 + 0x20;
                  pTVar18 = (TSparseSetElement<int> *)(ulonglong)uStack_d8;
                  iVar7 = (int)pTVar12;
                  local_f0 = iVar7 + 1;
                  pTVar12 = (TSparseSetElement<int> *)(ulonglong)local_f0;
                  if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)local_f0) goto LAB_14ecbbf53;
                  uVar16 = ((uint *)((longlong)FVar14 + 4))[iVar7];
                }
                uStack_ec = -uVar16 & uVar16;
                uVar17 = (ulonglong)uStack_ec * 2 + 1;
                lVar3 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                  }
                }
                local_cc = (int)lVar3;
                uStack_dc = local_cc + -1 + (int)pTVar18;
                pTVar12 = (TSparseSetElement<int> *)(ulonglong)uStack_dc;
                if ((int)local_60 < (int)uStack_dc) {
LAB_14ecbbf53:
                  pTVar12 = (TSparseSetElement<int> *)(ulonglong)local_60;
                  uStack_dc = local_60;
                }
              }
              local_e0 = 0xffffffff;
              local_c8 = (longlong *)local_88;
              local_c0._padding_ = CONCAT44(uStack_ec,local_f0);
              local_c0.CurrentBitIndex = uStack_dc;
              local_c0.UnvisitedBitMask = 0xffffffff;
              local_c0._28_4_ = uStack_d4;
              local_c0.BaseBitIndex = uStack_d8;
              local_c0.Array = pTStack_e8;
              if ((int)pTVar12 < (int)local_60) {
                do {
                  iVar7 = (int)pTVar12;
                  uVar16 = local_40 - 1 & *(uint *)(*local_c8 + (longlong)iVar7 * 0xc);
                  lVar3 = *local_c8 + (longlong)iVar7 * 0xc;
                  *(uint *)(lVar3 + 8) = uVar16;
                  FVar11.Data = (FScriptContainerElement *)local_50;
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar11.Data = local_48.Data;
                  }
                  uVar17 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
                  *(undefined4 *)(lVar3 + 4) = *(undefined4 *)((longlong)FVar11.Data + uVar17 * 4);
                  *(int *)((longlong)FVar11.Data + uVar17 * 4) = iVar7;
                  local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
                  pTVar12 = (TSparseSetElement<int> *)(ulonglong)(uint)local_c0.CurrentBitIndex;
                } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
              }
            }
          }
        }
      }
      pTVar19 = (TSparseSetElement<int> *)&pTVar19[7].field_0x4;
      pTVar12 = (TSparseSetElement<int> *)(ulonglong)(uVar21 + 1);
    } while ((int)(uVar21 + 1) < (this->Reservations).ArrayNum);
  }
  iVar7 = local_54;
  uVar5 = local_88._8_4_;
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = -1;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return uVar5 - iVar7;
}

// GetReservations @ 14ecbc120

TArray<FPartyReservation,TSizedDefaultAllocator<32>_> * __thiscall
UPartyBeaconState::GetReservations(UPartyBeaconState *this)

{
  return &this->Reservations;
}

// GetSessionName @ 14ecbc140

FName __thiscall UPartyBeaconState::GetSessionName(UPartyBeaconState *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->SessionName;
  return in_RDX;
}

// GetTeamAssignment @ 14ecbc1d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UPartyBeaconState::GetTeamAssignment(UPartyBeaconState *this,FPartyReservation *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [16];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  if (this->NumTeams < 2) {
LAB_14ecbc479:
    return this->ForceTeamNum;
  }
  if (this->TeamAssignmentMethod == ETeamAssignmentMethod::Manual) {
    iVar5 = (**(code **)(this->_padding_ + 0x378))(this,param_1->TeamNum);
    if (this->NumPlayersPerTeam < iVar5 + (param_1->PartyMembers).ArrayNum) {
      if (2 < (byte)LogPartyBeacon._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      return -1;
    }
    return param_1->TeamNum;
  }
  iVar5 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  do {
    iVar6 = (**(code **)(this->_padding_ + 0x378))(this,iVar5);
    uVar9 = 0;
    if ((param_1->PartyMembers).ArrayNum + iVar6 <= this->NumPlayersPerTeam) {
      uVar7 = (uint)local_30;
      if ((uint)local_30 == local_30._4_4_) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_38,(int *)((longlong)&local_30 + 4));
      }
      local_30 = CONCAT44(local_30._4_4_,uVar7 + 1);
      uVar8 = uVar9;
      if ((int)uVar7 < (int)(uVar7 + 1)) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      pFVar1 = local_38.Data + (longlong)(int)uVar7 * 8;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        *(int *)&pFVar1->field_0x0 = iVar5;
        *(int *)(pFVar1 + 4) = iVar6;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < this->NumTeams);
  if ((int)(uint)local_30 < 1) {
    if (2 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    iVar5 = -1;
  }
  else {
    FVar2 = this->TeamAssignmentMethod;
    if (FVar2 == ETeamAssignmentMethod::Smallest) {
      AlgoImpl::
      IntroSortInternal<FTeamBalanceInfo,int,FIdentityFunctor,TDereferenceWrapper<FTeamBalanceInfo,FSortTeamSizeSmallestToLargest>_>
                ((FTeamBalanceInfo *)local_38.Data,(uint)local_30,local_res8[0],
                 (FSortTeamSizeSmallestToLargest *)local_res8);
      if (((int)(uint)local_30 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = *(int *)local_38.Data;
    }
    else if (FVar2 == ETeamAssignmentMethod::BestFit) {
      AlgoImpl::
      IntroSortInternal<FTeamBalanceInfo,int,FIdentityFunctor,TDereferenceWrapper<FTeamBalanceInfo,FSortTeamSizeSmallestToLargest>_>
                ((FTeamBalanceInfo *)local_38.Data,(uint)local_30,local_res8[0],
                 (FSortTeamSizeSmallestToLargest *)local_res18);
      uVar7 = (uint)local_30 - 1;
      if ((int)uVar7 < (int)(uint)local_30) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = *(int *)&local_38.Data[(longlong)(int)uVar7 * 8].field_0x0;
    }
    else {
      if (FVar2 != ETeamAssignmentMethod::Random) {
        if ((FTeamBalanceInfo *)local_38.Data != (FTeamBalanceInfo *)0x0) {
          FMemory::Free(local_38.Data);
        }
        goto LAB_14ecbc479;
      }
      iVar5 = rand();
      uVar7 = iVar5 % (int)(uint)local_30;
      if ((int)uVar7 < (int)(uint)local_30) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = *(int *)&local_38.Data[(longlong)(int)uVar7 * 8].field_0x0;
    }
  }
  if ((FTeamBalanceInfo *)local_38.Data != (FTeamBalanceInfo *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return iVar5;
}

// GetTeamForCurrentPlayer @ 14ecbc550

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UPartyBeaconState::GetTeamForCurrentPlayer(UPartyBeaconState *this,FUniqueNetId *param_1)

{
  FUniqueNetId *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong local_res10;
  TSharedPtr<FUniqueNetId_const_,1> local_48;
  void *local_38 [2];
  
  iVar5 = -1;
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  if (cVar3 == '\0') {
    if (3 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    return -1;
  }
  uVar9 = 0;
  if (0 < (this->Reservations).ArrayNum) {
    local_res10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->Reservations).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar10 = (this->Reservations).AllocatorInstance.Data + local_res10;
      uVar8 = 0;
      if (0 < *(int *)(pFVar10 + 0x40)) {
        do {
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(pFVar10 + 0x40)) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          pTVar7 = FUniqueNetIdWrapper::GetV1
                             ((FUniqueNetIdWrapper *)
                              ((longlong)(int)uVar8 * 0x58 + *(longlong *)(pFVar10 + 0x38)),
                              &local_48);
          if ((pTVar7->Object == (FUniqueNetId *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          pFVar1 = pTVar7->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          cVar3 = (*(code *)**(undefined8 **)pFVar1)(pFVar1,param_1);
          if (cVar3 != '\0') {
            iVar5 = *(int *)pFVar10;
            break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < *(int *)(pFVar10 + 0x40));
      }
      uVar9 = uVar9 + 1;
      local_res10 = local_res10 + 0x58;
    } while ((int)uVar9 < (this->Reservations).ArrayNum);
  }
  if (6 < (byte)LogPartyBeacon._0_1_) {
    (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_38);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  return iVar5;
}

// HasCrossplayOptOutReservation @ 14ecbcbf0

bool __thiscall UPartyBeaconState::HasCrossplayOptOutReservation(UPartyBeaconState *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->Reservations).AllocatorInstance.Data;
  iVar1 = (this->Reservations).ArrayNum;
  pFVar5 = pFVar7 + 0x40;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->Reservations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPartyReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    iVar2 = *(int *)pFVar5;
    lVar3 = *(longlong *)(pFVar5 + -8);
    lVar4 = (longlong)iVar2 * 0x58 + lVar3;
    while( true ) {
      if (*(int *)pFVar5 != iVar2) {
        `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar3 == lVar4) break;
      if (*(char *)(lVar3 + 0x50) == '\0') {
        return true;
      }
      lVar3 = lVar3 + 0x58;
    }
    pFVar7 = pFVar7 + 0x58;
    pFVar5 = pFVar5 + 0x58;
  }
  return false;
}

// InitState @ 14ecbd420

bool __thiscall
UPartyBeaconState::InitState
          (UPartyBeaconState *this,int param_1,int param_2,int param_3,FName param_4,int param_5,
          bool param_6)

{
  int *piVar1;
  
  if (0 < param_3) {
    this->SessionName = param_4;
    this->ForceTeamNum = param_5;
    this->NumTeams = param_1;
    this->NumPlayersPerTeam = param_2;
    this->MaxReservations = param_3;
    DestructItems<FPartyReservation,int>
              ((FPartyReservation *)(this->Reservations).AllocatorInstance.Data,
               (this->Reservations).ArrayNum);
    piVar1 = &(this->Reservations).ArrayMax;
    (this->Reservations).ArrayNum = 0;
    if (*piVar1 != param_3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,param_3,&(this->Reservations).AllocatorInstance,0,piVar1);
    }
    this->bEnableRemovalRequests = param_6;
    (**(code **)(this->_padding_ + 0x3b0))(this);
    return true;
  }
  return false;
}

// InitTeamArray @ 14ecbd550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPartyBeaconState::InitTeamArray(UPartyBeaconState *this)

{
  int iVar1;
  
  if (this->NumTeams < 2) {
    iVar1 = this->ForceTeamNum;
  }
  else {
    iVar1 = rand();
    iVar1 = iVar1 % this->NumTeams;
  }
  this->ReservedHostTeamNum = iVar1;
  if (3 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  return;
}

// IsBeaconFull @ 14ecbd5b0

bool __thiscall UPartyBeaconState::IsBeaconFull(UPartyBeaconState *this)

{
  return this->NumConsumedReservations == this->MaxReservations;
}

// PlayerHasReservation @ 14ecc2a40

bool __thiscall
UPartyBeaconState::PlayerHasReservation(UPartyBeaconState *this,FUniqueNetId *param_1)

{
  FScriptContainerElement *pFVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  longlong lVar12;
  TSharedPtr<FUniqueNetId_const_,1> local_38;
  
  bVar11 = false;
  uVar10 = 0;
  if (0 < (this->Reservations).ArrayNum) {
    lVar12 = 0;
    bVar11 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < (this->Reservations).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (this->Reservations).AllocatorInstance.Data;
      uVar9 = 0;
      if (0 < *(int *)(pFVar1 + lVar12 + 0x40)) {
        do {
          uVar7 = 0;
          if ((int)uVar9 < *(int *)(pFVar1 + lVar12 + 0x40)) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pTVar8 = FUniqueNetIdWrapper::GetV1
                             ((FUniqueNetIdWrapper *)
                              ((longlong)(int)uVar9 * 0x58 + *(longlong *)(pFVar1 + lVar12 + 0x38)),
                              &local_38);
          if ((pTVar8->Object == (FUniqueNetId *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = pTVar8->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
          cVar6 = (*(code *)**(undefined8 **)pFVar2)(pFVar2,param_1);
          if (cVar6 != '\0') {
            bVar11 = true;
            break;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < *(int *)(pFVar1 + lVar12 + 0x40));
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x58;
    } while ((int)uVar10 < (this->Reservations).ArrayNum);
  }
  return bVar11;
}

// ReconfigureTeamAndPlayerCount @ 14ecc5590

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPartyBeaconState::ReconfigureTeamAndPlayerCount
          (UPartyBeaconState *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 < this->NumConsumedReservations) {
    if (2 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    return false;
  }
  iVar4 = this->NumTeams;
  bVar3 = false;
  iVar5 = param_1;
  bVar1 = false;
  if (param_1 < iVar4) {
    do {
      bVar3 = bVar1;
      iVar4 = (**(code **)(this->_padding_ + 0x378))(this,iVar5);
      if ((0 < iVar4) && (bVar3 = true, 2 < (byte)LogPartyBeacon._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      iVar4 = this->NumTeams;
      iVar5 = iVar5 + 1;
      bVar1 = bVar3;
    } while (iVar5 < iVar4);
  }
  bVar1 = false;
  if ((param_2 < this->NumPlayersPerTeam) && (iVar5 = 0, bVar2 = false, 0 < iVar4)) {
    do {
      bVar1 = bVar2;
      iVar4 = (**(code **)(this->_padding_ + 0x378))(this,iVar5);
      if ((param_2 < iVar4) && (bVar1 = true, 2 < (byte)LogPartyBeacon._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      iVar5 = iVar5 + 1;
      bVar2 = bVar1;
    } while (iVar5 < this->NumTeams);
  }
  if ((bVar3) || (bVar1)) {
    bVar3 = false;
  }
  else {
    this->NumTeams = param_1;
    this->NumPlayersPerTeam = param_2;
    this->MaxReservations = param_3;
    (**(code **)(this->_padding_ + 0x3b0))(this);
    if (3 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    bVar3 = true;
  }
  return bVar3;
}

// RegisterAuthTicket @ 14ecc57a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPartyBeaconState::RegisterAuthTicket
          (UPartyBeaconState *this,FUniqueNetIdRepl *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  FUniqueNetIdWrapper *pFVar8;
  uint uVar9;
  FUniqueNetIdWrapper *pFVar10;
  ulonglong uVar11;
  undefined1 local_98 [32];
  ForAnyElementType local_78;
  undefined8 local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if ((bVar4) && (1 < (param_2->Data).ArrayNum)) {
    uVar7 = 0;
    uVar11 = uVar7;
    if (0 < (this->Reservations).ArrayNum) {
      do {
        uVar9 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar9 < (this->Reservations).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->Reservations).AllocatorInstance.Data;
        local_98._0_8_ = &___7FUniqueNetIdWrapper__6B_;
        TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
        ::
        TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                  ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                    *)(local_98 + 8),
                   (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                    *)&param_1->_padding_);
        local_78.Data = (FScriptContainerElement *)0x0;
        pFVar8 = *(FUniqueNetIdWrapper **)(pFVar2 + uVar11 + 0x38);
        local_98._0_8_ = &___7FUniqueNetIdRepl__6B_;
        local_70._0_4_ = 0;
        local_70._4_4_ = 0;
        pFVar10 = (FUniqueNetIdWrapper *)
                  ((longlong)*(int *)(pFVar2 + uVar11 + 0x40) * 0x58 + (longlong)pFVar8);
        for (; pFVar8 != pFVar10; pFVar8 = (FUniqueNetIdWrapper *)&pFVar8[2].Variant.TypeIndex) {
          bVar4 = ::operator==((FUniqueNetIdWrapper *)local_98,pFVar8);
          if (bVar4) {
            FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_98);
            if (pFVar8 != (FUniqueNetIdWrapper *)0x0) {
              iVar6 = *(int *)&pFVar8[1].Variant.TypeIndex;
              if (iVar6 < 2) {
                if ((byte)LogPartyBeacon._0_1_ < 7) goto LAB_14ecc59ba;
                FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_68);
                UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon)
                ;
              }
              else {
                iVar1 = (param_2->Data).ArrayNum;
                if (iVar6 == iVar1) {
                  iVar6 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)pFVar8[1].Variant._padding_,
                                     (wchar_t *)(param_2->Data).AllocatorInstance.Data);
                  bVar4 = iVar6 == 0;
                }
                else {
                  bVar4 = iVar6 + iVar1 == 1;
                }
                if ((bVar4) || ((byte)LogPartyBeacon._0_1_ < 3)) goto LAB_14ecc59ba;
                FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_58);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon)
                ;
                local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
              }
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
LAB_14ecc59ba:
              ::FString::operator=((FString *)&pFVar8[1].Variant._padding_,param_2);
              return;
            }
            goto LAB_14ecc58d4;
          }
        }
        FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_98);
LAB_14ecc58d4:
        uVar7 = (ulonglong)(uVar9 + 1);
        uVar11 = uVar11 + 0x58;
      } while ((int)(uVar9 + 1) < (this->Reservations).ArrayNum);
    }
    if (2 < (byte)LogPartyBeacon._0_1_) {
      FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RemovePlayer @ 14ecc6650

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPartyBeaconState::RemovePlayer(UPartyBeaconState *this,FUniqueNetIdRepl *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  FUniqueNetId *pFVar8;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar9;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar10;
  FUniqueNetIdRepl *this_00;
  FPartyReservation *this_01;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  FUniqueNetIdWrapper *this_02;
  longlong lVar14;
  bool local_res8;
  uint local_res18;
  longlong local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (6 < (byte)LogPartyBeacon._0_1_) {
    FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_90);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  local_res8 = false;
  local_res18 = 0;
  bVar2 = false;
  if (0 < (this->Reservations).ArrayNum) {
    local_a0 = 0;
    do {
      bVar2 = local_res8;
      if (local_res8 != false) goto LAB_14ecc6d07;
      uVar11 = 0;
      if ((int)local_res18 < (this->Reservations).ArrayNum) {
        uVar11 = ~local_res18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      this_01 = (FPartyReservation *)((this->Reservations).AllocatorInstance.Data + local_a0);
      bVar2 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&this_01->PartyLeader);
      bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
      if (bVar2 == bVar4) {
        if (bVar2) {
          if ((char)(this_01->PartyLeader)._padding_ == (char)param_1->_padding_) {
            bVar2 = FUniqueNetIdWrapper::IsV1((FUniqueNetIdWrapper *)&this_01->PartyLeader);
            if (bVar2) {
              pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)param_1);
              TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7);
              pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe
                                 ((FUniqueNetIdWrapper *)&this_01->PartyLeader);
              pFVar8 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7);
              cVar5 = (*(code *)**(undefined8 **)pFVar8)(pFVar8);
            }
            else {
              pTVar9 = FUniqueNetIdWrapper::GetV2Unsafe
                                 ((FUniqueNetIdWrapper *)&this_01->PartyLeader);
              pTVar10 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)param_1);
              cVar5 = pTVar9->Value == pTVar10->Value;
            }
            if (cVar5 != '\0') goto LAB_14ecc6800;
          }
        }
        else {
LAB_14ecc6800:
          if (1 < (this_01->PartyMembers).ArrayNum) {
            if (3 < (byte)LogPartyBeacon._0_1_) {
              FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_1,&local_80);
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
              if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
            }
            if (5 < (byte)LogPartyBeacon._0_1_) {
              FPartyReservation::Dump(this_01);
            }
            uVar11 = 0;
            if (0 < (this_01->PartyMembers).ArrayNum) {
              lVar14 = 0;
              do {
                uVar12 = 0;
                if ((int)uVar11 < (this_01->PartyMembers).ArrayNum) {
                  uVar12 = ~uVar11 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  uVar3 = (*pcVar1)();
                  return (bool)uVar3;
                }
                this_00 = (FUniqueNetIdRepl *)
                          ((this_01->PartyMembers).AllocatorInstance.Data + lVar14);
                bVar2 = ::operator==((FUniqueNetIdWrapper *)this_00,
                                     (FUniqueNetIdWrapper *)&this_01->PartyLeader);
                if (!bVar2) {
                  uVar13 = (ulonglong)(byte)this_00->_padding_;
                  if ((1 < uVar13) &&
                     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                         ,0x12f,L""), bVar2)) {
                    pcVar1 = (code *)swi(3);
                    uVar3 = (*pcVar1)();
                    return (bool)uVar3;
                  }
                  cVar5 = (char)this_00->_padding_;
                  if (*(char *)((longlong)
                                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                                 ::__l2::bIsSameType + uVar13 + 4) == '\0') {
                    if ((cVar5 != '\x01') &&
                       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index == TypeIndex",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                           ,0x97,L""), bVar2)) {
                      pcVar1 = (code *)swi(3);
                      uVar3 = (*pcVar1)();
                      return (bool)uVar3;
                    }
                    bVar2 = (this_00->_padding_ & 0xffffff) == 0;
                  }
                  else {
                    if ((cVar5 != '\0') &&
                       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index == TypeIndex",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                           ,0x97,L""), bVar2)) {
                      pcVar1 = (code *)swi(3);
                      uVar3 = (*pcVar1)();
                      return (bool)uVar3;
                    }
                    if ((longlong *)this_00->_padding_ == (longlong *)0x0) goto LAB_14ecc69ad;
                    cVar5 = (**(code **)(*(longlong *)this_00->_padding_ + 0x28))();
                    bVar2 = cVar5 == '\0';
                  }
                  if ((!bVar2) &&
                     (iVar6 = (**(code **)(this->_padding_ + 0x310))(this,this_00), iVar6 == -1)) {
                    if (3 < (byte)LogPartyBeacon._0_1_) {
                      FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)this_00,&local_70);
                      UE::Logging::Private::BasicLog<4>
                                (&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
                      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_70.Data.AllocatorInstance.Data);
                      }
                    }
                    FUniqueNetIdRepl::operator=(&this_01->PartyLeader,this_00);
                    goto LAB_14ecc69d8;
                  }
                }
LAB_14ecc69ad:
                uVar11 = uVar11 + 1;
                lVar14 = lVar14 + 0x58;
              } while ((int)uVar11 < (this_01->PartyMembers).ArrayNum);
            }
            if (3 < (byte)LogPartyBeacon._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
            }
LAB_14ecc69d8:
            SanityCheckReservations(this,true);
          }
        }
      }
      iVar6 = (this_01->PartyMembers).ArrayNum;
      uVar11 = 0;
      if (0 < iVar6) {
        lVar14 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar11 < (this_01->PartyMembers).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
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
          this_02 = (FUniqueNetIdWrapper *)((this_01->PartyMembers).AllocatorInstance.Data + lVar14)
          ;
          bVar2 = FUniqueNetIdWrapper::IsValid(this_02);
          bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
          uVar12 = uVar11;
          if (bVar2 == bVar4) {
            if (bVar2) {
              if ((this_02->Variant).TypeIndex == (uchar)param_1->_padding_) {
                bVar2 = FUniqueNetIdWrapper::IsV1(this_02);
                if (bVar2) {
                  pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)param_1);
                  TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7);
                  pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe(this_02);
                  pFVar8 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7)
                  ;
                  cVar5 = (*(code *)**(undefined8 **)pFVar8)(pFVar8);
                }
                else {
                  pTVar9 = FUniqueNetIdWrapper::GetV2Unsafe(this_02);
                  pTVar10 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)param_1);
                  cVar5 = pTVar9->Value == pTVar10->Value;
                }
                if (cVar5 != '\0') goto LAB_14ecc6b34;
              }
            }
            else {
LAB_14ecc6b34:
              uVar12 = uVar11 - 1;
              lVar14 = lVar14 + -0x58;
              FPartyReservation::RemovePartyMemberAtIndex(this_01,uVar11);
              local_res8 = true;
              this->NumConsumedReservations = this->NumConsumedReservations + -1;
              if (5 < (byte)LogPartyBeacon._0_1_) {
                FUniqueNetIdWrapper::ToString
                          ((FUniqueNetIdWrapper *)&this_01->PartyLeader,&local_60);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon)
                ;
                if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60.Data.AllocatorInstance.Data);
                }
                FPartyReservation::Dump(this_01);
              }
              SanityCheckReservations(this,true);
            }
          }
          iVar6 = (this_01->PartyMembers).ArrayNum;
          uVar11 = uVar12 + 1;
          lVar14 = lVar14 + 0x58;
        } while ((int)uVar11 < iVar6);
      }
      if (iVar6 == 0) {
        if (5 < (byte)LogPartyBeacon._0_1_) {
          FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)&this_01->PartyLeader,&local_50);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        local_a0 = local_a0 + -0x58;
        uVar11 = 0;
        if ((int)local_res18 < (this->Reservations).ArrayNum) {
          uVar11 = ~local_res18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        TArray<FPartyReservation,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->Reservations,local_res18);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,&(this->Reservations).AllocatorInstance,(this->Reservations).ArrayNum,
                   &(this->Reservations).ArrayMax);
        local_res18 = local_res18 - 1;
      }
      local_res18 = local_res18 + 1;
      local_a0 = local_a0 + 0x58;
    } while ((int)local_res18 < (this->Reservations).ArrayNum);
    bVar2 = local_res8;
    if (local_res8 != false) {
LAB_14ecc6d07:
      if (5 < (byte)LogPartyBeacon._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_UPartyBeaconSta_15307b868,
                   (FLogCategoryBase *)&LogPartyBeacon);
      }
      (**(code **)(this->_padding_ + 0x3f0))(this);
    }
  }
  SanityCheckReservations(this,false);
  return bVar2;
}

// RemoveReservation @ 14ecc70f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPartyBeaconState::RemoveReservation(UPartyBeaconState *this,FUniqueNetIdRepl *param_1)

{
  TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FUniqueNetId *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar12;
  ulonglong uVar13;
  uint uVar14;
  FUniqueNetIdWrapper *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FUniqueNetIdWrapper *this_01;
  longlong lVar18;
  undefined1 local_res8 [8];
  FString local_58;
  TSharedPtr<FUniqueNetId_const_,1> local_48;
  
  uVar9 = (**(code **)(this->_padding_ + 0x310))();
  if (uVar9 == 0xffffffff) {
    return false;
  }
  uVar17 = ~uVar9 >> 0x1f;
  uVar10 = 0;
  if ((int)uVar9 < (this->Reservations).ArrayNum) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lVar18 = (longlong)(int)uVar9 * 0x58;
  this->NumConsumedReservations =
       this->NumConsumedReservations -
       *(int *)((this->Reservations).AllocatorInstance.Data + lVar18 + 0x40);
  if (5 < (byte)LogPartyBeacon._0_1_) {
    FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_1,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  uVar10 = 0;
  if ((int)uVar9 < (this->Reservations).ArrayNum) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar2 = (this->Reservations).AllocatorInstance.Data;
  uVar10 = *(uint *)(pFVar2 + lVar18 + 0x40);
  uVar13 = (ulonglong)(int)uVar10;
  this_01 = *(FUniqueNetIdWrapper **)(pFVar2 + lVar18 + 0x38);
  pFVar15 = (FUniqueNetIdWrapper *)(uVar13 * 0x58 + (longlong)this_01);
LAB_14ecc7270:
  do {
    if (*(int *)(pFVar2 + lVar18 + 0x40) != (int)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPlayerReservation,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_01 == pFVar15) {
      uVar10 = 0;
      if ((int)uVar9 < (this->Reservations).ArrayNum) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      TArray<FPartyReservation,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (&this->Reservations,uVar9);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,&(this->Reservations).AllocatorInstance,(this->Reservations).ArrayNum,
                 &(this->Reservations).ArrayMax);
      SanityCheckReservations(this,false);
      (**(code **)(this->_padding_ + 0x3f0))(this);
      return true;
    }
    pTVar12 = FUniqueNetIdWrapper::GetV1(this_01,&local_48);
    if ((pTVar12->Object == (FUniqueNetId *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar3 = pTVar12->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    this_00 = &this->PlayersPendingJoin;
    pFVar4 = (this_00->AllocatorInstance).Data;
    iVar1 = (this->PlayersPendingJoin).ArrayNum;
    for (pFVar16 = pFVar4; pFVar16 != pFVar4 + (longlong)iVar1 * 0x10; pFVar16 = pFVar16 + 0x10) {
      if ((*(longlong *)pFVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      cVar8 = (*(code *)**(undefined8 **)pFVar3)(pFVar3,*(longlong *)pFVar16);
      if (cVar8 != '\0') {
        uVar14 = (uint)((longlong)pFVar16 - (longlong)pFVar4 >> 4);
        if (uVar14 != 0xffffffff) {
          uVar11 = 0;
          if ((int)uVar14 < (this->PlayersPendingJoin).ArrayNum) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (this_00,uVar14);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this_00->AllocatorInstance,(this->PlayersPendingJoin).ArrayNum,
                     &(this->PlayersPendingJoin).ArrayMax);
          uVar13 = (ulonglong)uVar10;
          this_01 = (FUniqueNetIdWrapper *)&this_01[2].Variant.TypeIndex;
          goto LAB_14ecc7270;
        }
        break;
      }
    }
    uVar13 = (ulonglong)uVar10;
    this_01 = (FUniqueNetIdWrapper *)&this_01[2].Variant.TypeIndex;
  } while( true );
}

// SanityCheckReservations @ 14ecc7d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPartyBeaconState::SanityCheckReservations(UPartyBeaconState *this,bool param_1)

{
  FScriptContainerElement FVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar10;
  FUniqueNetId *pFVar11;
  FUniqueNetId *pFVar12;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar13;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar14;
  ulonglong uVar15;
  code *pcVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  FUniqueNetIdWrapper *this_00;
  FUniqueNetIdRepl *pFVar20;
  FUniqueNetIdRepl *this_01;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_158 [32];
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  undefined1 local_118;
  undefined1 local_117;
  char local_116;
  uint local_114;
  uint local_110;
  undefined1 local_10c [12];
  FUniqueNetIdRepl *local_100;
  FScriptContainerElement *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar21 = (this->Reservations).AllocatorInstance.Data;
  local_110 = (this->Reservations).ArrayNum;
  uVar15 = (ulonglong)(int)local_110;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._0_8_ = 0;
  local_10c._4_8_ = pFVar21 + uVar15 * 0x58;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_116 = param_1;
  do {
    uVar2 = local_10c._4_8_;
    cVar5 = local_116;
    if ((this->Reservations).ArrayNum != (int)uVar15) {
      local_118 = 0;
      `TCheckedPointerIterator<FPartyReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_118);
    }
    if (pFVar21 == (FScriptContainerElement *)uVar2) {
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    FVar1 = pFVar21[0x20];
    if ((1 < (ulonglong)(byte)FVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)(byte)FVar1 + 4) == '\0') {
      if ((pFVar21[0x20] != (FScriptContainerElement)0x1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if ((*(uint *)(pFVar21 + 0x10) & 0xffffff) == 0) goto LAB_14ecc7e91;
    }
    else {
      if ((pFVar21[0x20] != (FScriptContainerElement)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if ((*(longlong **)(pFVar21 + 0x10) == (longlong *)0x0) ||
         (cVar4 = (**(code **)(**(longlong **)(pFVar21 + 0x10) + 0x28))(), cVar4 == '\0')) {
LAB_14ecc7e91:
        (**(code **)(this->_padding_ + 0x3e0))(this);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconState.cpp"
                           ,0x4a2,L"Reservation does not have valid party leader!");
        if (bVar3) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
    }
    if ((*(int *)(pFVar21 + 0x40) == 0) && (cVar5 == '\0')) {
      (**(code **)(this->_padding_ + 0x3e0))(this);
      pFVar9 = FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)(pFVar21 + 8),&local_f0);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_138 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_138 = (pFVar9->Data).AllocatorInstance.Data;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconState.cpp"
                         ,0x4a7,L"Reservation under leader %s has no members!");
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
    local_114 = *(uint *)(pFVar21 + 0x40);
    uVar15 = (ulonglong)(int)local_114;
    this_01 = *(FUniqueNetIdRepl **)(pFVar21 + 0x38);
    pFVar20 = (FUniqueNetIdRepl *)(uVar15 * 0x58 + (longlong)this_01);
    while( true ) {
      if (*(int *)(pFVar21 + 0x40) != (int)uVar15) {
        local_117 = 0;
        `TCheckedPointerIterator<FPlayerReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_117);
      }
      if (this_01 == pFVar20) break;
      uVar15 = (ulonglong)(byte)this_01->_padding_;
      if ((1 < uVar15) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar3)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      cVar5 = (char)this_01->_padding_;
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar15 + 4) == '\0') {
        if ((cVar5 != '\x01') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        bVar3 = (this_01->_padding_ & 0xffffff) == 0;
LAB_14ecc801d:
        if (!bVar3) {
          uVar7 = ::GetTypeHash(this_01);
          iVar8 = TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FUniqueNetIdRepl>(&local_88,uVar7,this_01);
          if (iVar8 != -1) {
            lVar19 = (longlong)iVar8 * 0x68 + local_88.Elements._0_8_;
            this_00 = (FUniqueNetIdWrapper *)(lVar19 + 0x30);
            if (lVar19 == 0) {
              this_00 = (FUniqueNetIdWrapper *)0x0;
            }
            if (this_00 != (FUniqueNetIdWrapper *)0x0) {
              bVar3 = FUniqueNetIdWrapper::IsValid(this_00);
              bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)(pFVar21 + 8));
              if (bVar3 == bVar6) {
                if (!bVar3) {
                  pcVar16 = *(code **)(this->_padding_ + 0x3e0);
LAB_14ecc8114:
                  (*pcVar16)(this);
                  pFVar9 = FUniqueNetIdWrapper::ToString
                                     ((FUniqueNetIdWrapper *)(pFVar21 + 8),&local_d0);
                  if ((pFVar9->Data).ArrayNum == 0) {
                    pwVar17 = L"";
                  }
                  else {
                    pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                  }
                  pFVar9 = FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)this_01,&local_e0);
                  if ((pFVar9->Data).ArrayNum == 0) {
                    local_138 = (FScriptContainerElement *)0x15060d16c;
                  }
                  else {
                    local_138 = (pFVar9->Data).AllocatorInstance.Data;
                  }
                  local_130 = (FScriptContainerElement *)pwVar17;
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconState.cpp"
                                     ,0x4b4,
                                     L"Player %s is in reservation with leader %s multiple times!");
                  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                  }
                  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                  }
                  if (bVar3) goto code_r0x00014ecc827a;
                  goto LAB_14ecc8282;
                }
                if ((FScriptContainerElement)(this_00->Variant).TypeIndex != pFVar21[0x20])
                goto LAB_14ecc81ae;
                bVar3 = FUniqueNetIdWrapper::IsV1(this_00);
                if (bVar3) {
                  pTVar10 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)(pFVar21 + 8));
                  pFVar11 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                                      (pTVar10);
                  pTVar10 = FUniqueNetIdWrapper::GetV1Unsafe(this_00);
                  pFVar12 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                                      (pTVar10);
                  cVar5 = (*(code *)**(undefined8 **)pFVar12)(pFVar12,pFVar11);
                }
                else {
                  pTVar13 = FUniqueNetIdWrapper::GetV2Unsafe(this_00);
                  pTVar14 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)(pFVar21 + 8));
                  cVar5 = pTVar13->Value == pTVar14->Value;
                }
                pcVar16 = *(code **)(this->_padding_ + 0x3e0);
                if (cVar5 != '\0') goto LAB_14ecc8114;
              }
              else {
LAB_14ecc81ae:
                pcVar16 = *(code **)(this->_padding_ + 0x3e0);
              }
              (*pcVar16)(this);
              pFVar9 = FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)(pFVar21 + 8),&local_a0)
              ;
              if ((pFVar9->Data).ArrayNum == 0) {
                pwVar17 = L"";
              }
              else {
                pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
              }
              pFVar9 = FUniqueNetIdWrapper::ToString(this_00,&local_b0);
              if ((pFVar9->Data).ArrayNum == 0) {
                pwVar18 = L"";
              }
              else {
                pwVar18 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
              }
              pFVar9 = FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)this_01,&local_c0);
              if ((pFVar9->Data).ArrayNum == 0) {
                local_138 = (FScriptContainerElement *)0x15060d16c;
              }
              else {
                local_138 = (pFVar9->Data).AllocatorInstance.Data;
              }
              local_130 = (FScriptContainerElement *)pwVar18;
              local_128 = (FScriptContainerElement *)pwVar17;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconState.cpp"
                                 ,0x4ba,
                                 L"Player %s is in multiple reservations (with leader %s and %s)!");
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              if (bVar3) {
code_r0x00014ecc827a:
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
          }
LAB_14ecc8282:
          local_f8 = pFVar21 + 8;
          local_100 = this_01;
          TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&>_>
                    (&local_88,
                     (TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&> *)
                     local_10c,(bool *)&local_100);
        }
      }
      else {
        if ((cVar5 != '\0') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if ((longlong *)this_01->_padding_ != (longlong *)0x0) {
          cVar5 = (**(code **)(*(longlong *)this_01->_padding_ + 0x28))();
          bVar3 = cVar5 == '\0';
          goto LAB_14ecc801d;
        }
      }
      uVar15 = (ulonglong)local_114;
      this_01 = (FUniqueNetIdRepl *)&this_01[1].ReplicationBytes.ArrayNum;
    }
    pFVar21 = pFVar21 + 0x58;
    uVar15 = (ulonglong)local_110;
  } while( true );
}

// SetCompetitiveIntegrity @ 14ecc8f80

void __thiscall UPartyBeaconState::SetCompetitiveIntegrity(UPartyBeaconState *this,bool param_1)

{
  this->bRespectCompetitiveIntegrity = param_1;
  return;
}

// SetTeamAssignmentMethod @ 14ecc8fd0

void __thiscall UPartyBeaconState::SetTeamAssignmentMethod(UPartyBeaconState *this,FName param_1)

{
  this->TeamAssignmentMethod = param_1;
  return;
}

// ShouldRespectCompetitiveIntegrity @ 14ecc9010

bool __thiscall UPartyBeaconState::ShouldRespectCompetitiveIntegrity(UPartyBeaconState *this)

{
  return this->bRespectCompetitiveIntegrity;
}

// StaticRegisterNativesUPartyBeaconState @ 14ecca450

void __cdecl UPartyBeaconState::StaticRegisterNativesUPartyBeaconState(void)

{
  return;
}

// SwapTeams @ 14ecca540

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPartyBeaconState::SwapTeams
          (UPartyBeaconState *this,FUniqueNetIdRepl *param_1,FUniqueNetIdRepl *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FPartyReservation *this_00;
  FPartyReservation *this_01;
  FString local_38;
  FString local_28;
  
  uVar5 = (**(code **)(this->_padding_ + 0x310))();
  uVar6 = (**(code **)(this->_padding_ + 0x310))(this,param_2);
  if ((uVar5 != 0xffffffff) && (uVar6 != 0xffffffff)) {
    uVar9 = 0;
    if ((int)uVar5 < (this->Reservations).ArrayNum) {
      uVar9 = ~uVar5 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_01 = (FPartyReservation *)
              ((this->Reservations).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x58);
    uVar5 = 0;
    if ((int)uVar6 < (this->Reservations).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = (FPartyReservation *)
              ((this->Reservations).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x58);
    if (this_01->TeamNum != this_00->TeamNum) {
      iVar7 = (**(code **)(this->_padding_ + 0x378))(this);
      iVar8 = (**(code **)(this->_padding_ + 0x378))(this,this_00->TeamNum);
      iVar1 = (this_01->PartyMembers).ArrayNum;
      if (((iVar1 - (this_00->PartyMembers).ArrayNum) + iVar8 <= this->NumPlayersPerTeam) &&
         (((this_00->PartyMembers).ArrayNum - iVar1) + iVar7 <= this->NumPlayersPerTeam)) {
        if (5 < (byte)LogPartyBeacon._0_1_) {
          FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_2,&local_28);
          FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_1,&local_38);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          FPartyReservation::Dump(this_01);
          FPartyReservation::Dump(this_00);
        }
        iVar1 = this_01->TeamNum;
        this_01->TeamNum = this_00->TeamNum;
        this_00->TeamNum = iVar1;
        SanityCheckReservations(this,false);
        return true;
      }
    }
  }
  return false;
}

// UpdateMemberPlatform @ 14ecd0050

bool __thiscall
UPartyBeaconState::UpdateMemberPlatform
          (UPartyBeaconState *this,FUniqueNetIdRepl *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar9;
  FUniqueNetId *pFVar10;
  FUniqueNetId *pFVar11;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar12;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar13;
  FUniqueNetIdWrapper *this_00;
  FUniqueNetIdWrapper *pFVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  longlong local_res20;
  
  uVar15 = 0;
  if (0 < (this->Reservations).ArrayNum) {
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar15 < (this->Reservations).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->Reservations).AllocatorInstance.Data;
      iVar1 = *(int *)(pFVar2 + local_res20 + 0x40);
      this_00 = *(FUniqueNetIdWrapper **)(pFVar2 + local_res20 + 0x38);
      pFVar14 = (FUniqueNetIdWrapper *)((longlong)iVar1 * 0x58 + (longlong)this_00);
      while( true ) {
        if (*(int *)(pFVar2 + local_res20 + 0x40) != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FPlayerReservation,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (this_00 == pFVar14) break;
        bVar4 = FUniqueNetIdWrapper::IsValid(this_00);
        bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
        if (bVar4 == bVar6) {
          if (!bVar4) {
LAB_14ecd01e1:
            if (1 < (param_2->Data).ArrayNum) {
              ::FString::operator=((FString *)(this_00 + 2),param_2);
            }
            return true;
          }
          if ((this_00->Variant).TypeIndex == (uchar)param_1->_padding_) {
            bVar4 = FUniqueNetIdWrapper::IsV1(this_00);
            if (bVar4) {
              pTVar9 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)param_1);
              pFVar10 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar9);
              pTVar9 = FUniqueNetIdWrapper::GetV1Unsafe(this_00);
              pFVar11 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar9);
              cVar7 = (*(code *)**(undefined8 **)pFVar11)(pFVar11,pFVar10);
            }
            else {
              pTVar12 = FUniqueNetIdWrapper::GetV2Unsafe(this_00);
              pTVar13 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)param_1);
              cVar7 = pTVar12->Value == pTVar13->Value;
            }
            if (cVar7 != '\0') goto LAB_14ecd01e1;
          }
        }
        this_00 = (FUniqueNetIdWrapper *)&this_00[2].Variant.TypeIndex;
      }
      uVar15 = uVar15 + 1;
      local_res20 = local_res20 + 0x58;
    } while ((int)uVar15 < (this->Reservations).ArrayNum);
  }
  return false;
}

// UpdatePartyLeader @ 14ecd03e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPartyBeaconState::UpdatePartyLeader
          (UPartyBeaconState *this,FUniqueNetIdRepl *param_1,FUniqueNetIdRepl *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FUniqueNetIdWrapper *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FUniqueNetIdWrapper *pFVar12;
  longlong lVar13;
  longlong lVar14;
  FPartyReservation *this_00;
  uint uVar15;
  TArray<FPartyReservation,TSizedDefaultAllocator<32>_> *this_01;
  undefined1 auStackY_258 [32];
  FScriptContainerElement *local_208;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  int local_f8 [2];
  undefined1 local_f0 [16];
  longlong lStack_e0;
  undefined1 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  FScriptContainerElement local_88;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  FScriptContainerElement local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if (!bVar6) {
    return;
  }
  bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
  if (!bVar6) {
    return;
  }
  uVar7 = (**(code **)(this->_padding_ + 0x318))(this,param_1);
  if (uVar7 == 0xffffffff) {
    if ((byte)LogPartyBeacon._0_1_ < 3) {
      return;
    }
    FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_108);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    if (local_108.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
    return;
  }
  uVar8 = (**(code **)(this->_padding_ + 0x318))(this,param_2);
  uVar9 = (**(code **)(this->_padding_ + 0x310))(this,param_2);
  uVar15 = 0;
  if ((uVar7 == uVar8) &&
     (bVar6 = ::operator==((FUniqueNetIdWrapper *)param_1,(FUniqueNetIdWrapper *)param_2), !bVar6))
  {
    uVar11 = uVar15;
    if ((int)uVar8 < (this->Reservations).ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Reservations).AllocatorInstance.Data;
    bVar6 = ::operator==((FUniqueNetIdWrapper *)(pFVar2 + (longlong)(int)uVar8 * 0x58 + 8),
                         (FUniqueNetIdWrapper *)param_1);
    if (bVar6) {
      FUniqueNetIdRepl::operator=
                ((FUniqueNetIdRepl *)(pFVar2 + (longlong)(int)uVar8 * 0x58 + 8),param_2);
      return;
    }
  }
  if (uVar9 == uVar7) {
    if ((byte)LogPartyBeacon._0_1_ < 7) {
      return;
    }
    FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_2,&local_118);
    FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_1,&local_128);
    UE::Logging::Private::BasicLog<7>
              ((FStaticBasicLogRecord *)&PTR_u_UpdatePartyLead_15307b1f0,
               (FLogCategoryBase *)&LogPartyBeacon);
    local_138.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
      local_138.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    }
  }
  else {
    this_01 = &this->Reservations;
    uVar11 = ~uVar7 >> 0x1f;
    uVar8 = uVar15;
    if ((int)uVar7 < (this->Reservations).ArrayNum) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (FPartyReservation *)((this_01->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x58)
    ;
    if (uVar9 == 0xffffffff) {
      local_208 = (FScriptContainerElement *)0x0;
    }
    else {
      uVar8 = uVar15;
      if ((int)uVar9 < (this->Reservations).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_208 = (this_01->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x58;
      if ((local_208 != (FScriptContainerElement *)0x0) && (*(int *)local_208 != this_00->TeamNum))
      {
        if ((byte)LogPartyBeacon._0_1_ < 3) {
          return;
        }
        FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_2,&local_1b8);
        FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)&this_00->PartyLeader,&local_1c8);
        FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_1,&local_1d8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        local_138.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          local_138.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        }
        goto LAB_14ecd06a7;
      }
    }
    pFVar3 = (FUniqueNetIdWrapper *)(this_00->PartyMembers).AllocatorInstance.Data;
    iVar10 = (this_00->PartyMembers).ArrayNum;
    for (pFVar12 = pFVar3;
        pFVar12 != (FUniqueNetIdWrapper *)((longlong)pFVar3 + (longlong)iVar10 * 0x58);
        pFVar12 = (FUniqueNetIdWrapper *)&pFVar12[2].Variant.TypeIndex) {
      bVar6 = ::operator==((FUniqueNetIdWrapper *)param_1,pFVar12);
      if (bVar6) {
        uVar8 = (uint)(((longlong)pFVar12 - (longlong)pFVar3) / 0x58);
        if (uVar8 != 0xffffffff) {
          if ((int)uVar8 < (this_00->PartyMembers).ArrayNum) {
            uVar15 = ~uVar8 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FPlayerReservation::FPlayerReservation
                    ((FPlayerReservation *)local_a0,
                     (FPlayerReservation *)
                     ((this_00->PartyMembers).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x58))
          ;
          FPartyReservation::RemovePartyMemberAtIndex(this_00,uVar8);
          if (local_208 == (FScriptContainerElement *)0x0) {
            if (5 < (byte)LogPartyBeacon._0_1_) {
              FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_2,&local_158);
              FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)&this_00->PartyLeader,&local_168)
              ;
              FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_1,&local_178);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
            }
            local_d8 = 0;
            local_f0._0_8_ = &___7FUniqueNetIdRepl__6B_;
            local_f8[0] = this_00->TeamNum;
            local_f0._8_8_ = 0;
            lStack_e0 = 0;
            local_d0.Data = (FScriptContainerElement *)0x0;
            local_c8._0_4_ = 0;
            local_c8._4_4_ = 0;
            local_c0.Data = (FScriptContainerElement *)0x0;
            local_b8 = 0;
            local_b0 = (void *)0x0;
            local_a8 = 0;
            FUniqueNetIdRepl::operator=((FUniqueNetIdRepl *)local_f0,param_2);
            if (((local_c0.Data <= (FScriptContainerElement *)local_a0) &&
                ((FScriptContainerElement *)local_a0 <
                 local_c0.Data + (longlong)local_b8._4_4_ * 0x58)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = (int)local_b8;
            if ((int)local_b8 == local_b8._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x858,&local_c0,(int *)((longlong)&local_b8 + 4));
            }
            FVar5.Data = local_c0.Data;
            lVar14 = (longlong)iVar10 * 0x58;
            local_b8 = CONCAT44(local_b8._4_4_,iVar10 + 1);
            *(undefined ***)(local_c0.Data + lVar14) = &___7FUniqueNetIdWrapper__6B_;
            local_c0.Data[lVar14 + 0x18] = local_88;
            if ((1 < (byte)local_88) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xec,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                        ::__l2::CopyConstructors)[(byte)local_88])
                      (FVar5.Data + lVar14 + 8,local_a0 + 8);
            *(undefined ***)(FVar5.Data + lVar14) = &___7FUniqueNetIdRepl__6B_;
            *(undefined8 *)(FVar5.Data + lVar14 + 0x20) = 0;
            *(undefined8 *)(FVar5.Data + lVar14 + 0x28) = 0;
            *(undefined8 *)(FVar5.Data + lVar14 + 0x30) = 0;
            *(FScriptContainerElement **)(FVar5.Data + lVar14 + 0x30) = local_70.Data;
            local_70.Data = (FScriptContainerElement *)0x0;
            *(int *)(FVar5.Data + lVar14 + 0x38) = (int)local_68;
            *(int *)(FVar5.Data + lVar14 + 0x3c) = local_68._4_4_;
            local_68._0_4_ = 0;
            local_68._4_4_ = 0;
            *(undefined8 *)(FVar5.Data + lVar14 + 0x40) = 0;
            *(FScriptContainerElement **)(FVar5.Data + lVar14 + 0x40) = local_60.Data;
            local_60.Data = (FScriptContainerElement *)0x0;
            *(int *)(FVar5.Data + lVar14 + 0x48) = (int)local_58;
            *(int *)(FVar5.Data + lVar14 + 0x4c) = local_58._4_4_;
            local_58._0_4_ = 0;
            local_58._4_4_ = 0;
            FVar5.Data[lVar14 + 0x50] = local_50;
            *(float *)(FVar5.Data + lVar14 + 0x54) = local_4c;
            pFVar2 = (this_01->AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)local_f8) &&
                ((FScriptContainerElement *)local_f8 <
                 pFVar2 + (longlong)(this->Reservations).ArrayMax * 0x58)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = (this->Reservations).ArrayNum;
            piVar1 = &(this->Reservations).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x858,&this_01->AllocatorInstance,piVar1);
            }
            pFVar2 = (this_01->AllocatorInstance).Data;
            (this->Reservations).ArrayNum = iVar10 + 1;
            lVar14 = (longlong)iVar10 * 0x58;
            *(int *)(pFVar2 + lVar14) = local_f8[0];
            *(undefined ***)(pFVar2 + lVar14 + 8) = &___7FUniqueNetIdWrapper__6B_;
            TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ::
            TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                      ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                        *)(pFVar2 + lVar14 + 0x10),
                       (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                        *)(local_f0 + 8));
            *(undefined ***)(pFVar2 + lVar14 + 8) = &___7FUniqueNetIdRepl__6B_;
            *(undefined8 *)(pFVar2 + lVar14 + 0x28) = 0;
            *(undefined8 *)(pFVar2 + lVar14 + 0x30) = 0;
            *(undefined8 *)(pFVar2 + lVar14 + 0x38) = 0;
            *(FScriptContainerElement **)(pFVar2 + lVar14 + 0x38) = local_c0.Data;
            local_c0.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar2 + lVar14 + 0x40) = (int)local_b8;
            *(int *)(pFVar2 + lVar14 + 0x44) = local_b8._4_4_;
            local_b8 = 0;
            *(undefined8 *)(pFVar2 + lVar14 + 0x48) = 0;
            *(void **)(pFVar2 + lVar14 + 0x48) = local_b0;
            local_b0 = (void *)0x0;
            *(undefined4 *)(pFVar2 + lVar14 + 0x50) = (undefined4)local_a8;
            *(undefined4 *)(pFVar2 + lVar14 + 0x54) = local_a8._4_4_;
            local_a8 = 0;
            DestructItems<FPlayerReservation,int>((FPlayerReservation *)0x0,0);
            if (local_b0 != (void *)0x0) {
              FMemory::Free(local_b0);
            }
            DestructItems<FPlayerReservation,int>((FPlayerReservation *)local_c0.Data,(int)local_b8)
            ;
            if ((FPlayerReservation *)local_c0.Data != (FPlayerReservation *)0x0) {
              FMemory::Free(local_c0.Data);
            }
            FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_f0);
            uVar15 = 0;
            if ((int)uVar7 < (this->Reservations).ArrayNum) {
              uVar15 = uVar11;
            }
            if ((uVar15 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = (FPartyReservation *)
                      ((this_01->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x58);
          }
          else {
            if (5 < (byte)LogPartyBeacon._0_1_) {
              FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_2,&local_188);
              FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)&this_00->PartyLeader,&local_198)
              ;
              FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_1,&local_1a8);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
              if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
              }
              if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.Data.AllocatorInstance.Data);
              }
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
            }
            if (((*(undefined1 **)(local_208 + 0x38) <= local_a0) &&
                (local_a0 <
                 *(undefined1 **)(local_208 + 0x38) + (longlong)*(int *)(local_208 + 0x44) * 0x58))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = *(int *)(local_208 + 0x40);
            if (iVar10 == *(int *)(local_208 + 0x44)) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x858,(ForAnyElementType *)(local_208 + 0x38),
                                  (int *)(local_208 + 0x44));
            }
            *(int *)(local_208 + 0x40) = iVar10 + 1;
            lVar14 = *(longlong *)(local_208 + 0x38);
            lVar13 = (longlong)iVar10 * 0x58;
            *(undefined ***)(lVar13 + lVar14) = &___7FUniqueNetIdWrapper__6B_;
            TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ::
            TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                      ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                        *)(lVar14 + 8 + lVar13),
                       (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                        *)(local_a0 + 8));
            *(undefined ***)(lVar13 + lVar14) = &___7FUniqueNetIdRepl__6B_;
            *(undefined8 *)(lVar13 + 0x20 + lVar14) = 0;
            *(undefined8 *)(lVar13 + 0x28 + lVar14) = 0;
            *(undefined8 *)(lVar13 + 0x30 + lVar14) = 0;
            *(FScriptContainerElement **)(lVar13 + 0x30 + lVar14) = local_70.Data;
            local_70.Data = (FScriptContainerElement *)0x0;
            *(int *)(lVar13 + 0x38 + lVar14) = (int)local_68;
            *(int *)(lVar13 + 0x3c + lVar14) = local_68._4_4_;
            local_68._0_4_ = 0;
            local_68._4_4_ = 0;
            *(undefined8 *)(lVar13 + 0x40 + lVar14) = 0;
            *(FScriptContainerElement **)(lVar13 + 0x40 + lVar14) = local_60.Data;
            local_60.Data = (FScriptContainerElement *)0x0;
            *(int *)(lVar13 + 0x48 + lVar14) = (int)local_58;
            *(int *)(lVar13 + 0x4c + lVar14) = local_58._4_4_;
            local_58._0_4_ = 0;
            local_58._4_4_ = 0;
            *(FScriptContainerElement *)(lVar13 + 0x50 + lVar14) = local_50;
            *(float *)(lVar13 + 0x54 + lVar14) = local_4c;
          }
          if ((this_00->PartyMembers).ArrayNum == 0) {
            if (5 < (byte)LogPartyBeacon._0_1_) {
              FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)&this_00->PartyLeader,&local_148)
              ;
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
            }
            uVar15 = 0;
            if ((int)uVar7 < (this->Reservations).ArrayNum) {
              uVar15 = uVar11;
            }
            if ((uVar15 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TArray<FPartyReservation,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_01,uVar7);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,&this_01->AllocatorInstance,(this->Reservations).ArrayNum,
                       &(this->Reservations).ArrayMax);
          }
          SanityCheckReservations(this,false);
          if (local_60.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data);
          }
          if (local_70.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data);
          }
          FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_a0);
          return;
        }
        break;
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1875534277391678691>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconState.cpp"
                       ,0x31d,"PriorPlayerReservationIdx != INDEX_NONE");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((byte)LogPartyBeacon._0_1_ < 3) {
      return;
    }
    FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_138);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
LAB_14ecd06a7:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return;
}

// ValidateNewPartyReservation @ 14ecd2130

bool __thiscall
UPartyBeaconState::ValidateNewPartyReservation(UPartyBeaconState *this,FPartyReservation *param_1)

{
  return true;
}

