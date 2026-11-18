// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 28

// StaticClass @ 14eca9350

UClass * __cdecl USpectatorBeaconState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpectatorBeaconState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconState",
               &Z_Registration_Info_UClass_USpectatorBeaconState.InnerSingleton,
               StaticRegisterNativesUSpectatorBeaconState,0x60,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USpectatorBeaconState>,
               InternalVTableHelperCtorCaller<USpectatorBeaconState>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpectatorBeaconState.InnerSingleton;
}

// USpectatorBeaconState @ 14ecad720

USpectatorBeaconState * __thiscall
USpectatorBeaconState::USpectatorBeaconState(USpectatorBeaconState *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USpectatorBeaconState__6B_;
  (this->SessionName).ComparisonIndex = 0;
  (this->SessionName).Number = 0;
  (this->Reservations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Reservations).ArrayNum = 0;
  (this->Reservations).ArrayMax = 0;
  (this->PlayersPendingJoin).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayersPendingJoin).ArrayNum = 0;
  (this->PlayersPendingJoin).ArrayMax = 0;
  return this;
}

// USpectatorBeaconState @ 14ecad760

USpectatorBeaconState * __thiscall
USpectatorBeaconState::USpectatorBeaconState
          (USpectatorBeaconState *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USpectatorBeaconState__6B_;
  (this->SessionName).ComparisonIndex = 0;
  (this->SessionName).Number = 0;
  this->NumConsumedReservations = 0;
  this->MaxReservations = 0;
  this->bRestrictCrossConsole = false;
  (this->Reservations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Reservations).ArrayNum = 0;
  (this->Reservations).ArrayMax = 0;
  (this->PlayersPendingJoin).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayersPendingJoin).ArrayNum = 0;
  (this->PlayersPendingJoin).ArrayMax = 0;
  return this;
}

// ~USpectatorBeaconState @ 14ecadcb0

void __thiscall USpectatorBeaconState::~USpectatorBeaconState(USpectatorBeaconState *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USpectatorBeaconState__6B_;
  DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
            ((TSharedPtr<FUniqueNetId_const_,1> *)(this->PlayersPendingJoin).AllocatorInstance.Data,
             (this->PlayersPendingJoin).ArrayNum);
  pFVar1 = (this->PlayersPendingJoin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSpectatorReservation,int>
            ((FSpectatorReservation *)(this->Reservations).AllocatorInstance.Data,
             (this->Reservations).ArrayNum);
  pFVar1 = (this->Reservations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddReservation @ 14ecb0090

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USpectatorBeaconState::AddReservation(USpectatorBeaconState *this,FSpectatorReservation *param_1)

{
  int *piVar1;
  FSpectatorReservation *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    FSpectatorReservation::Dump(param_1);
  }
  this->NumConsumedReservations = this->NumConsumedReservations + 1;
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
  }
  pFVar2 = (FSpectatorReservation *)(this->Reservations).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Reservations).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = (this->Reservations).ArrayNum;
  piVar1 = &(this->Reservations).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,&(this->Reservations).AllocatorInstance,piVar1);
  }
  pFVar7 = (this->Reservations).AllocatorInstance.Data;
  (this->Reservations).ArrayNum = iVar6 + 1;
  pFVar7 = pFVar7 + (longlong)iVar6 * 0x88;
  *(undefined ***)pFVar7 = &___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)(pFVar7 + 8),
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(param_1->SpectatorId)._padding_);
  *(undefined ***)pFVar7 = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)(pFVar7 + 0x20) = 0;
  *(undefined8 *)(pFVar7 + 0x28) = 0;
  FPlayerReservation::FPlayerReservation((FPlayerReservation *)(pFVar7 + 0x30),&param_1->Spectator);
  SanityCheckReservations(this,false);
  return true;
}

// CrossPlayAllowed @ 14ecb59d0

bool __thiscall
USpectatorBeaconState::CrossPlayAllowed(USpectatorBeaconState *this,FSpectatorReservation *param_1)

{
  return true;
}

// DoesReservationFit @ 14ecb6150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USpectatorBeaconState::DoesReservationFit
          (USpectatorBeaconState *this,FSpectatorReservation *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this->NumConsumedReservations;
  iVar2 = this->MaxReservations;
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
  }
  return iVar1 + 1 <= iVar2;
}

// DumpReservations @ 14ecb7130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpectatorBeaconState::DumpReservations(USpectatorBeaconState *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  void *_Src;
  FUniqueNetId *pFVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStackY_178 [32];
  FString local_130;
  FString local_120;
  TSharedPtr<FUniqueNetId_const_,1> local_110;
  void *local_100 [2];
  TSharedPtr<FUniqueNetId_const_,1> local_f0;
  void *local_e0 [2];
  FUniqueNetIdRepl local_d0;
  FString local_a0;
  FString local_90;
  FScriptContainerElement local_80;
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
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_70 = 0;
  lStack_68 = 0;
  local_78 = (undefined1  [8])&___7FUniqueNetIdRepl__6B_;
  local_d0._padding_ = 0;
  local_d0._padding_ = 0;
  local_d0._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_60 = local_60 & 0xffffffffffffff00;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_d0._padding_._0_1_ = 0;
  local_d0.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ReplicationBytes.ArrayNum = 0;
  local_d0.ReplicationBytes.ArrayMax = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_80 = (FScriptContainerElement)0x0;
  local_7c = 0;
  if (3 < (byte)LogSpectatorBeacon._0_1_) {
    ::FName::ToString(&this->SessionName,&local_120);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (((3 < (byte)LogSpectatorBeacon._0_1_) &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon),
        3 < (byte)LogSpectatorBeacon._0_1_)) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon),
       3 < (byte)LogSpectatorBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    }
  }
  uVar16 = 0;
  if (0 < (this->Reservations).ArrayNum) {
    lVar15 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar16 < (this->Reservations).ArrayNum) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (this->Reservations).AllocatorInstance.Data;
      pFVar14 = pFVar9 + lVar15 + 8;
      if (pFVar14 != (FScriptContainerElement *)(local_78 + 8)) {
        FVar1 = pFVar14[0x10];
        local_38 = CONCAT71(local_38._1_7_,FVar1);
        if ((1 < (byte)FVar1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[(byte)FVar1])(&local_48,pFVar14);
        uVar13 = local_38;
        lVar6 = lStack_40;
        lVar5 = local_48;
        local_38 = local_60;
        uVar12 = local_60 & 0xff;
        local_60 = uVar13;
        local_48 = local_70;
        lStack_40 = lStack_68;
        local_70 = lVar5;
        lStack_68 = lVar6;
        if ((1 < uVar12) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12])(&local_48);
      }
      pFVar9 = pFVar9 + lVar15 + 0x20;
      if ((FScriptContainerElement *)&local_58 != pFVar9) {
        iVar2 = *(int *)(pFVar9 + 8);
        _Src = *(void **)pFVar9;
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
      if (3 < (byte)LogSpectatorBeacon._0_1_) {
        pTVar10 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)local_78,&local_110);
        pFVar3 = pTVar10->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110.SharedReferenceCount.ReferenceController);
        (**(code **)(*(longlong *)pFVar3 + 0x38))(pFVar3,local_100);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
        if (local_100[0] != (void *)0x0) {
          FMemory::Free(local_100[0]);
        }
      }
      uVar8 = 0;
      if ((int)uVar16 < (this->Reservations).ArrayNum) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (this->Reservations).AllocatorInstance.Data;
      FUniqueNetIdRepl::operator=(&local_d0,(FUniqueNetIdRepl *)(pFVar9 + lVar15 + 0x30));
      ::FString::operator=(&local_a0,(FString *)(pFVar9 + lVar15 + 0x60));
      ::FString::operator=(&local_90,(FString *)(pFVar9 + lVar15 + 0x70));
      local_80 = pFVar9[lVar15 + 0x80];
      local_7c = *(undefined4 *)(pFVar9 + lVar15 + 0x84);
      if (3 < (byte)LogSpectatorBeacon._0_1_) {
        pwVar11 = L"true";
        if (local_80 == (FScriptContainerElement)0x0) {
          pwVar11 = L"false";
        }
        ::FString::FString(&local_130,pwVar11);
        pTVar10 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_d0,&local_f0);
        pFVar3 = pTVar10->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0.SharedReferenceCount.ReferenceController);
        (**(code **)(*(longlong *)pFVar3 + 0x30))(pFVar3,local_e0);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
        if (local_e0[0] != (void *)0x0) {
          FMemory::Free(local_e0[0]);
        }
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0x88;
    } while ((int)uVar16 < (this->Reservations).ArrayNum);
  }
  if (3 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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
  uVar13 = local_60 & 0xff;
  if ((1 < (byte)local_60) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar13])(local_78 + 8);
  return;
}

// GetExistingReservation @ 14ecb9320

int __thiscall
USpectatorBeaconState::GetExistingReservation(USpectatorBeaconState *this,FUniqueNetIdRepl *param_1)

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
    this_00 = (FUniqueNetIdWrapper *)((this->Reservations).AllocatorInstance.Data + lVar13);
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
    lVar13 = lVar13 + 0x88;
    if ((this->Reservations).ArrayNum <= (int)uVar12) {
      return -1;
    }
  } while( true );
}

// GetMaxReservations @ 14ecb9800

int __thiscall USpectatorBeaconState::GetMaxReservations(USpectatorBeaconState *this)

{
  return this->MaxReservations;
}

// GetNumConsumedReservations @ 14ecb9860

int __thiscall USpectatorBeaconState::GetNumConsumedReservations(USpectatorBeaconState *this)

{
  return this->NumConsumedReservations;
}

// GetPlayerValidation @ 14ecba9f0

bool __thiscall
USpectatorBeaconState::GetPlayerValidation
          (USpectatorBeaconState *this,FUniqueNetId *param_1,FString *param_2)

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
  FString local_38;
  TSharedPtr<FUniqueNetId_const_,1> local_28;
  
  uVar9 = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (param_2 != &local_38) {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  if (0 < (this->Reservations).ArrayNum) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Reservations).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
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
      pTVar8 = FUniqueNetIdWrapper::GetV1
                         ((FUniqueNetIdWrapper *)(pFVar1 + (longlong)(int)uVar9 * 0x88 + 0x30),
                          &local_28);
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
                (local_28.SharedReferenceCount.ReferenceController);
      cVar6 = (*(code *)**(undefined8 **)pFVar2)(pFVar2,param_1);
      if (cVar6 != '\0') {
        ::FString::operator=(param_2,(FString *)(pFVar1 + (longlong)(int)uVar9 * 0x88 + 0x60));
        return true;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->Reservations).ArrayNum);
  }
  return false;
}

// GetPrivateStaticClass @ 14ecbb8a0

UClass * __cdecl USpectatorBeaconState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpectatorBeaconState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconState",
               &Z_Registration_Info_UClass_USpectatorBeaconState.InnerSingleton,
               StaticRegisterNativesUSpectatorBeaconState,0x60,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USpectatorBeaconState>,
               InternalVTableHelperCtorCaller<USpectatorBeaconState>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpectatorBeaconState.InnerSingleton;
}

// GetRemainingReservations @ 14ecbb960

int __thiscall USpectatorBeaconState::GetRemainingReservations(USpectatorBeaconState *this)

{
  return this->MaxReservations - this->NumConsumedReservations;
}

// GetReservationCount @ 14ecbb9c0

int __thiscall USpectatorBeaconState::GetReservationCount(USpectatorBeaconState *this)

{
  return (this->Reservations).ArrayNum;
}

// GetReservationPlatformCount @ 14ecbbb50

int __thiscall
USpectatorBeaconState::GetReservationPlatformCount(USpectatorBeaconState *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Reservations).ArrayNum;
  pFVar4 = (this->Reservations).AllocatorInstance.Data;
  pFVar6 = pFVar4 + (longlong)iVar1 * 0x88;
  iVar3 = 0;
  while( true ) {
    iVar5 = iVar3;
    if ((this->Reservations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpectatorReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar6) break;
    iVar3 = *(int *)(pFVar4 + 0x78);
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar3 == iVar2) {
      if (iVar3 < 2) {
        bVar7 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar4 + 0x70),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
      }
    }
    else {
      bVar7 = iVar3 + iVar2 == 1;
    }
    pFVar4 = pFVar4 + 0x88;
    iVar3 = iVar5 + 1;
    if (!bVar7) {
      iVar3 = iVar5;
    }
  }
  return iVar5;
}

// GetReservations @ 14ecbc130

TArray<FSpectatorReservation,TSizedDefaultAllocator<32>_> * __thiscall
USpectatorBeaconState::GetReservations(USpectatorBeaconState *this)

{
  return &this->Reservations;
}

// GetSessionName @ 14ecbc160

FName __thiscall USpectatorBeaconState::GetSessionName(USpectatorBeaconState *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->SessionName;
  return in_RDX;
}

// HasCrossplayOptOutReservation @ 14ecbccb0

bool __thiscall USpectatorBeaconState::HasCrossplayOptOutReservation(USpectatorBeaconState *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Reservations).ArrayNum;
  pFVar2 = (this->Reservations).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((this->Reservations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpectatorReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x80] == (FScriptContainerElement)0x0) {
      return true;
    }
    pFVar2 = pFVar2 + 0x88;
  }
  return false;
}

// InitState @ 14ecbd4e0

bool __thiscall
USpectatorBeaconState::InitState(USpectatorBeaconState *this,int param_1,FName param_2)

{
  int *piVar1;
  
  if (0 < param_1) {
    this->SessionName = param_2;
    this->MaxReservations = param_1;
    DestructItems<FSpectatorReservation,int>
              ((FSpectatorReservation *)(this->Reservations).AllocatorInstance.Data,
               (this->Reservations).ArrayNum);
    piVar1 = &(this->Reservations).ArrayMax;
    (this->Reservations).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,param_1,&(this->Reservations).AllocatorInstance,0,piVar1);
    }
    return true;
  }
  return false;
}

// IsBeaconFull @ 14ecbd5c0

bool __thiscall USpectatorBeaconState::IsBeaconFull(USpectatorBeaconState *this)

{
  return this->NumConsumedReservations == this->MaxReservations;
}

// PlayerHasReservation @ 14ecc2be0

bool __thiscall
USpectatorBeaconState::PlayerHasReservation(USpectatorBeaconState *this,FUniqueNetId *param_1)

{
  FUniqueNetId *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  uint uVar8;
  TSharedPtr<FUniqueNetId_const_,1> local_18;
  
  uVar8 = 0;
  if ((this->Reservations).ArrayNum < 1) {
    return false;
  }
  do {
    uVar6 = 0;
    if ((int)uVar8 < (this->Reservations).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pTVar7 = FUniqueNetIdWrapper::GetV1
                       ((FUniqueNetIdWrapper *)
                        ((this->Reservations).AllocatorInstance.Data +
                        (longlong)(int)uVar8 * 0x88 + 0x30),&local_18);
    if ((pTVar7->Object == (FUniqueNetId *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar1 = pTVar7->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    cVar5 = (*(code *)**(undefined8 **)pFVar1)(pFVar1,param_1);
    if (cVar5 != '\0') {
      return true;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < (this->Reservations).ArrayNum);
  return false;
}

// RegisterAuthTicket @ 14ecc5a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USpectatorBeaconState::RegisterAuthTicket
          (USpectatorBeaconState *this,FUniqueNetIdRepl *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if ((bVar4) && (1 < (param_2->Data).ArrayNum)) {
    uVar7 = 0;
    if (0 < (this->Reservations).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->Reservations).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
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
        bVar4 = ::operator==((FUniqueNetIdWrapper *)param_1,
                             (FUniqueNetIdWrapper *)(pFVar2 + (longlong)(int)uVar7 * 0x88 + 0x30));
        if (bVar4) {
          iVar6 = *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x88 + 0x68);
          if (iVar6 < 2) {
            if ((byte)LogSpectatorBeacon._0_1_ < 7) goto LAB_14ecc5c06;
            FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_38);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon)
            ;
          }
          else {
            iVar1 = (param_2->Data).ArrayNum;
            if (iVar6 == iVar1) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)(pFVar2 + (longlong)(int)uVar7 * 0x88 + 0x60),
                                 (wchar_t *)(param_2->Data).AllocatorInstance.Data);
              bVar4 = iVar6 == 0;
            }
            else {
              bVar4 = iVar6 + iVar1 == 1;
            }
            if ((bVar4) || ((byte)LogSpectatorBeacon._0_1_ < 3)) goto LAB_14ecc5c06;
            FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_28);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon)
            ;
            local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
LAB_14ecc5c06:
          ::FString::operator=((FString *)(pFVar2 + (longlong)(int)uVar7 * 0x88 + 0x60),param_2);
          return;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (this->Reservations).ArrayNum);
    }
    if (2 < (byte)LogSpectatorBeacon._0_1_) {
      FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RemovePlayer @ 14ecc6d80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USpectatorBeaconState::RemovePlayer(USpectatorBeaconState *this,FUniqueNetIdRepl *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  FUniqueNetId *pFVar8;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar9;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar10;
  uint uVar11;
  FSpectatorReservation *this_00;
  bool local_res8;
  longlong local_res18;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if (6 < (byte)LogSpectatorBeacon._0_1_) {
    FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_78);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  uVar11 = 0;
  local_res8 = false;
  bVar2 = false;
  if (0 < (this->Reservations).ArrayNum) {
    local_res18 = 0;
    do {
      bVar2 = local_res8;
      if (local_res8 != false) break;
      uVar6 = 0;
      if ((int)uVar11 < (this->Reservations).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      this_00 = (FSpectatorReservation *)((this->Reservations).AllocatorInstance.Data + local_res18)
      ;
      bVar2 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&this_00->Spectator);
      bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
      if (bVar2 == bVar4) {
        if (bVar2) {
          if ((char)(this_00->Spectator).UniqueId._padding_ == (char)param_1->_padding_) {
            bVar2 = FUniqueNetIdWrapper::IsV1((FUniqueNetIdWrapper *)&this_00->Spectator);
            if (bVar2) {
              pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)param_1);
              TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7);
              pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)&this_00->Spectator);
              pFVar8 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7);
              cVar5 = (*(code *)**(undefined8 **)pFVar8)(pFVar8);
            }
            else {
              pTVar9 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)&this_00->Spectator);
              pTVar10 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)param_1);
              cVar5 = pTVar9->Value == pTVar10->Value;
            }
            if (cVar5 != '\0') goto LAB_14ecc6f32;
          }
        }
        else {
LAB_14ecc6f32:
          local_res8 = true;
          this->NumConsumedReservations = this->NumConsumedReservations + -1;
          if (5 < (byte)LogSpectatorBeacon._0_1_) {
            FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)this_00,&local_68);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon)
            ;
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            FSpectatorReservation::Dump(this_00);
          }
          SanityCheckReservations(this,true);
          if (5 < (byte)LogSpectatorBeacon._0_1_) {
            FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)this_00,&local_58);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon)
            ;
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          local_res18 = local_res18 + -0x88;
          uVar6 = 0;
          if ((int)uVar11 < (this->Reservations).ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          TArray<FSpectatorReservation,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->Reservations,uVar11);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x88,8,&(this->Reservations).AllocatorInstance,(this->Reservations).ArrayNum,
                     &(this->Reservations).ArrayMax);
          uVar11 = uVar11 - 1;
        }
      }
      uVar11 = uVar11 + 1;
      local_res18 = local_res18 + 0x88;
      bVar2 = local_res8;
    } while ((int)uVar11 < (this->Reservations).ArrayNum);
  }
  SanityCheckReservations(this,false);
  return bVar2;
}

// RemoveReservation @ 14ecc74e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USpectatorBeaconState::RemoveReservation(USpectatorBeaconState *this,FUniqueNetIdRepl *param_1)

{
  FUniqueNetIdMatcher FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar8;
  FString local_48;
  TSharedPtr<FUniqueNetId_const_,1> local_38;
  
  uVar5 = (**(code **)(this->_padding_ + 0x2e0))();
  if (uVar5 == 0xffffffff) {
    return false;
  }
  this->NumConsumedReservations = this->NumConsumedReservations + -1;
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)param_1,&local_48);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = 0;
  if ((int)uVar5 < (this->Reservations).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar8 = FUniqueNetIdWrapper::GetV1
                     ((FUniqueNetIdWrapper *)
                      ((this->Reservations).AllocatorInstance.Data +
                      (longlong)(int)uVar5 * 0x88 + 0x30),&local_38);
  if ((pTVar8->Object == (FUniqueNetId *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FVar1.UniqueIdTarget = pTVar8->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  uVar6 = TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
          IndexOfByPredicate<FUniqueNetIdMatcher>(&this->PlayersPendingJoin,FVar1);
  if (uVar6 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar6 < (this->PlayersPendingJoin).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&this->PlayersPendingJoin,uVar6);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->PlayersPendingJoin).AllocatorInstance,
               (this->PlayersPendingJoin).ArrayNum,&(this->PlayersPendingJoin).ArrayMax);
  }
  uVar6 = 0;
  if ((int)uVar5 < (this->Reservations).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  TArray<FSpectatorReservation,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (&this->Reservations,uVar5);
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x88,8,&(this->Reservations).AllocatorInstance,(this->Reservations).ArrayNum,
             &(this->Reservations).ArrayMax);
  SanityCheckReservations(this,false);
  return true;
}

// SanityCheckReservations @ 14ecc8320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USpectatorBeaconState::SanityCheckReservations(USpectatorBeaconState *this,bool param_1)

{
  FUniqueNetIdRepl *this_00;
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_e8 [32];
  FScriptContainerElement *local_c8;
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  FUniqueNetIdRepl *local_b0;
  FScriptContainerElement *local_a8;
  FString local_a0;
  TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  pFVar13 = (this->Reservations).AllocatorInstance.Data;
  iVar2 = (this->Reservations).ArrayNum;
  local_88.Elements._32_8_ = 0;
  pFVar11 = pFVar13 + 0x38;
  pFVar12 = pFVar13 + (longlong)iVar2 * 0x88;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  do {
    if ((this->Reservations).ArrayNum != iVar2) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<FSpectatorReservation_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (pFVar13 == pFVar12) {
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
    FVar1 = pFVar11[-0x20];
    if ((1 < (ulonglong)(byte)FVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)(byte)FVar1 + 4) == '\0') {
      if ((pFVar11[-0x20] != (FScriptContainerElement)0x1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(uint *)(pFVar11 + -0x30) & 0xffffff) == 0) goto LAB_14ecc846a;
    }
    else {
      if ((pFVar11[-0x20] != (FScriptContainerElement)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(longlong **)(pFVar11 + -0x30) == (longlong *)0x0) ||
         (cVar5 = (**(code **)(**(longlong **)(pFVar11 + -0x30) + 0x28))(), cVar5 == '\0')) {
LAB_14ecc846a:
        (**(code **)(this->_padding_ + 0x348))(this);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconState.cpp"
                           ,0x147,L"Reservation does not have valid spectator!");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    FVar1 = pFVar11[0x10];
    if ((1 < (ulonglong)(byte)FVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)(byte)FVar1 + 4) == '\0') {
      if ((pFVar11[0x10] != (FScriptContainerElement)0x1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = (*(uint *)pFVar11 & 0xffffff) == 0;
LAB_14ecc8546:
      if (!bVar4) {
        this_00 = (FUniqueNetIdRepl *)(pFVar11 + -8);
        uVar6 = ::GetTypeHash(this_00);
        iVar7 = TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FUniqueNetIdRepl>(&local_88,uVar6,this_00);
        if (iVar7 != -1) {
          lVar8 = (longlong)iVar7 * 0x68 + local_88.Elements._0_8_;
          lVar9 = lVar8 + 0x30;
          if (lVar8 == 0) {
            lVar9 = 0;
          }
          if (lVar9 != 0) {
            (**(code **)(this->_padding_ + 0x348))(this);
            pFVar10 = FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)this_00,&local_a0);
            if ((pFVar10->Data).ArrayNum == 0) {
              local_c8 = (FScriptContainerElement *)0x15060d16c;
            }
            else {
              local_c8 = (pFVar10->Data).AllocatorInstance.Data;
            }
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconState.cpp"
                               ,0x150,L"Player %s is in multiple reservations!");
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        local_b0 = this_00;
        local_a8 = pFVar13;
        TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&>_>
                  (&local_88,
                   (TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&> *)local_b4,
                   (bool *)(local_b4 + 4));
      }
    }
    else {
      if ((pFVar11[0x10] != (FScriptContainerElement)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong **)pFVar11 != (longlong *)0x0) {
        cVar5 = (**(code **)(**(longlong **)pFVar11 + 0x28))();
        bVar4 = cVar5 == '\0';
        goto LAB_14ecc8546;
      }
    }
    pFVar13 = pFVar13 + 0x88;
    pFVar11 = pFVar11 + 0x88;
  } while( true );
}

// StaticRegisterNativesUSpectatorBeaconState @ 14ecca4e0

void __cdecl USpectatorBeaconState::StaticRegisterNativesUSpectatorBeaconState(void)

{
  return;
}

// UpdateMemberPlatform @ 14ecd0210

bool __thiscall
USpectatorBeaconState::UpdateMemberPlatform
          (USpectatorBeaconState *this,FUniqueNetIdRepl *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  FUniqueNetId *pFVar8;
  FUniqueNetId *pFVar9;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar10;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar11;
  uint uVar12;
  FUniqueNetIdWrapper *this_00;
  longlong lVar13;
  
  uVar12 = 0;
  if (0 < (this->Reservations).ArrayNum) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar12 < (this->Reservations).ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      this_00 = (FUniqueNetIdWrapper *)((this->Reservations).AllocatorInstance.Data + lVar13 + 0x30)
      ;
      bVar2 = FUniqueNetIdWrapper::IsValid(this_00);
      bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
      if (bVar2 == bVar4) {
        if (!bVar2) {
LAB_14ecd0360:
          if (1 < (param_2->Data).ArrayNum) {
            ::FString::operator=((FString *)(this_00 + 2),param_2);
          }
          return true;
        }
        if ((this_00->Variant).TypeIndex == (uchar)param_1->_padding_) {
          bVar2 = FUniqueNetIdWrapper::IsV1(this_00);
          if (bVar2) {
            pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)param_1);
            pFVar8 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7);
            pTVar7 = FUniqueNetIdWrapper::GetV1Unsafe(this_00);
            pFVar9 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar7);
            cVar5 = (*(code *)**(undefined8 **)pFVar9)(pFVar9,pFVar8);
          }
          else {
            pTVar10 = FUniqueNetIdWrapper::GetV2Unsafe(this_00);
            pTVar11 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)param_1);
            cVar5 = pTVar10->Value == pTVar11->Value;
          }
          if (cVar5 != '\0') goto LAB_14ecd0360;
        }
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x88;
    } while ((int)uVar12 < (this->Reservations).ArrayNum);
  }
  return false;
}

