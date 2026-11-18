// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147edeba0

UClass * __cdecl UPlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPlayer.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Player",&Z_Registration_Info_UClass_UPlayer.InnerSingleton,
               StaticRegisterNativesUPlayer,0x48,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlayer>,
               InternalVTableHelperCtorCaller<UPlayer>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayer.InnerSingleton;
}

// UPlayer @ 14834c7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPlayer * __thiscall UPlayer::UPlayer(UPlayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->PlayerController).field0_0x0.DebugPtr = (APlayerController *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  return this;
}

// UPlayer @ 14834c820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPlayer * __thiscall UPlayer::UPlayer(UPlayer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->PlayerController).field0_0x0.DebugPtr = (APlayerController *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  return this;
}

// ~UPlayer @ 14834df00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPlayer::~UPlayer(UPlayer *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  FExec::~FExec((FExec *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// ConsoleCommand @ 148368010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UPlayer::ConsoleCommand(UPlayer *this,FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  UGameViewportClient *pUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  wchar_t *_Dest;
  wchar_t *pwVar7;
  undefined8 uVar8;
  int iVar9;
  wchar_t *pwVar10;
  ForAnyElementType _Source;
  int iVar11;
  UConsole *pUVar12;
  int iVar13;
  wchar_t *local_88;
  FString local_80;
  FOutputDevice local_70;
  FString local_60;
  UConsole *local_50;
  
  if (this != (UPlayer *)0x0) {
    pUVar6 = Z_Construct_UClass_UNetConnection_NoRegister();
    iVar11 = (int)pUVar6->_padding_;
    if ((((iVar11 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar11 * 8)
          == &pUVar6->_padding_)) && (this[2]._padding_ != 0)) &&
       ((this->PlayerController).field0_0x0.DebugPtr == (APlayerController *)0x0)) {
      bVar3 = true;
      goto LAB_14836808f;
    }
  }
  bVar3 = false;
LAB_14836808f:
  pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if (pUVar1 == (UGameViewportClient *)0x0) {
    pUVar12 = (UConsole *)0x0;
  }
  else {
    pUVar12 = (pUVar1->ViewportConsole).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UConsole *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
  }
  ::FString::FString(&local_60,L"");
  FOutputDevice::FOutputDevice(&local_70);
  local_70.bAutoEmitLineTerminator = false;
  local_70._padding_ = (longlong)&___7FConsoleOutputDevice__6B_;
  local_50 = pUVar12;
  if ((param_2) && (pUVar12 == (UConsole *)0x0)) {
    GetGlobalLogSingleton();
  }
  iVar9 = (param_1->Data).ArrayNum;
  iVar11 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar11 = 0;
  }
  iVar13 = iVar11 + 1;
  _Dest = FMemory::Malloc((longlong)iVar13 * 2,0);
  pwVar7 = FMemory::Malloc((longlong)iVar13 * 2,0);
  iVar9 = (param_1->Data).ArrayNum;
  if (iVar9 == 0) {
    pwVar10 = L"";
    iVar9 = 0;
    if (iVar11 < 0) {
      iVar9 = iVar11;
    }
    iVar11 = 0;
    if (0 < iVar9) {
      iVar11 = iVar9;
    }
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar9 = iVar9 + -1;
    if (iVar11 < iVar9) {
      iVar9 = iVar11;
    }
    iVar11 = 0;
    if (0 < iVar9) {
      iVar11 = iVar9;
    }
  }
  local_88 = _Dest;
  ::FString::ConstructFromPtrSize(&local_80,pwVar10,iVar11);
  _Source.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    _Source.Data = local_80.Data.AllocatorInstance.Data;
  }
  wcsncpy(_Dest,(wchar_t *)_Source.Data,(longlong)iVar13 - 1);
  _Dest[(longlong)iVar13 + -1] = L'\0';
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  bVar4 = FParse::Line(&local_88,pwVar7,iVar13,false);
  if (bVar4) {
    do {
      if ((bVar3) || ((this->PlayerController).field0_0x0.DebugPtr != (APlayerController *)0x0)) {
        pcVar2 = *(code **)(this->_padding_ + 8);
        uVar8 = (**(code **)(this->_padding_ + 0x180))(this);
        cVar5 = (*pcVar2)(&this->_padding_,uVar8,pwVar7);
        if (cVar5 == '\0') {
          FOutputDevice::LogfImpl(&local_70,L"Command not recognized: %s");
        }
      }
      bVar4 = FParse::Line(&local_88,pwVar7,iVar13,false);
    } while (bVar4);
  }
  FMemory::Free(_Dest);
  FMemory::Free(pwVar7);
  if (param_2) {
    ::FString::FString(__return_storage_ptr__,L"");
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_60.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_60.Data.ArrayMax;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  FOutputDevice::~FOutputDevice(&local_70);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Exec @ 148379ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPlayer::Exec(UPlayer *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  int iVar1;
  APlayerController *pAVar2;
  longlong *plVar3;
  AGameModeBase *pAVar4;
  AGameStateBase *pAVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  UClass *pUVar10;
  UWorld *this_00;
  APawn *pAVar11;
  AActor *this_01;
  
  bVar7 = FExec::Exec((FExec *)this,param_1,param_2,param_3);
  if (bVar7) {
LAB_148379f49:
    bVar7 = true;
  }
  else {
    this_01 = (AActor *)this->_padding_;
    if (this_01 == (AActor *)0x0) {
      if (this != (UPlayer *)&DAT_00000028) {
        pUVar10 = Z_Construct_UClass_UNetConnection_NoRegister();
        pAVar2 = this[-1].PlayerController.field0_0x0.DebugPtr;
        iVar1 = (int)pUVar10->_padding_;
        if (((iVar1 <= (int)pAVar2->_padding_) &&
            ((longlong *)*(undefined1 **)(pAVar2->_padding_ + (longlong)iVar1 * 8) ==
             &pUVar10->_padding_)) &&
           (this_01 = (AActor *)this[1]._padding_, this_01 != (AActor *)0x0)) goto LAB_148379d23;
      }
    }
    else {
LAB_148379d23:
      this_00 = AActor::GetWorld(this_01);
      if ((this_00 == (UWorld *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Player.cpp"
                             ,0x76,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (((param_1 != (UWorld *)0x0) && (param_1 != this_00)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InWorld == nullptr || InWorld == World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Player.cpp"
                             ,0x77,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if ((GEngine == (UEngine *)0x0) || (this == (UPlayer *)&DAT_00000028)) {
LAB_148379dd0:
        bVar7 = true;
      }
      else {
        pUVar10 = Z_Construct_UClass_ULocalPlayer_NoRegister();
        pAVar2 = this[-1].PlayerController.field0_0x0.DebugPtr;
        iVar1 = (int)pUVar10->_padding_;
        if (((int)pAVar2->_padding_ < iVar1) ||
           (((longlong *)*(undefined1 **)(pAVar2->_padding_ + (longlong)iVar1 * 8) !=
             &pUVar10->_padding_ || (this[1]._padding_ == 0)))) goto LAB_148379dd0;
        bVar7 = false;
      }
      if ((APlayerController *)this->_padding_ == (APlayerController *)0x0) {
        pAVar11 = (APawn *)0x0;
      }
      else {
        pAVar11 = APlayerController::GetPawnOrSpectator((APlayerController *)this->_padding_);
      }
      if ((((bVar7) && (bVar7 = UWorld::Exec(this_00,this_00,param_2,param_3), bVar7)) ||
          ((((this->_padding_ != 0 &&
             ((plVar3 = *(longlong **)(this->_padding_ + 0x450), plVar3 != (longlong *)0x0 &&
              (cVar9 = (**(code **)(*plVar3 + 0x278))(plVar3,param_2,param_3,pAVar11), cVar9 != '\0'
              )))) || (cVar9 = (**(code **)(this_01->_padding_ + 0x278))
                                         (this_01,param_2,param_3,pAVar11), cVar9 != '\0')) ||
           (((pAVar11 != (APawn *)0x0 &&
             (cVar9 = (**(code **)(pAVar11->_padding_ + 0x278))(pAVar11,param_2,param_3,pAVar11),
             cVar9 != '\0')) ||
            ((this->_padding_ != 0 &&
             ((plVar3 = *(longlong **)(this->_padding_ + 0x388), plVar3 != (longlong *)0x0 &&
              (cVar9 = (**(code **)(*plVar3 + 0x278))(plVar3,param_2,param_3,pAVar11), cVar9 != '\0'
              )))))))))) ||
         (((pAVar4 = (this_00->AuthorityGameMode).field0_0x0.DebugPtr,
           pAVar4 != (AGameModeBase *)0x0 &&
           (cVar9 = (**(code **)(pAVar4->_padding_ + 0x278))(pAVar4,param_2,param_3,pAVar11),
           cVar9 != '\0')) ||
          ((((this->_padding_ != 0 &&
             (plVar3 = *(longlong **)(this->_padding_ + 0x440), plVar3 != (longlong *)0x0)) &&
            (cVar9 = (**(code **)(*plVar3 + 0x278))(plVar3,param_2,param_3,pAVar11), cVar9 != '\0'))
           || ((pAVar5 = (this_00->GameState).field0_0x0.DebugPtr, pAVar5 != (AGameStateBase *)0x0
               && (cVar9 = (**(code **)(pAVar5->_padding_ + 0x278))(pAVar5,param_2,param_3,pAVar11),
                  cVar9 != '\0')))))))) goto LAB_148379f49;
      if ((this->_padding_ != 0) &&
         (plVar3 = *(longlong **)(this->_padding_ + 0x390), plVar3 != (longlong *)0x0)) {
        cVar9 = (**(code **)(*plVar3 + 0x278))(plVar3,param_2,param_3,pAVar11);
        return cVar9 != '\0';
      }
    }
    bVar7 = false;
  }
  return bVar7;
}

// GetPlayerController @ 148385c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall UPlayer::GetPlayerController(UPlayer *this,UWorld *param_1)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  APlayerController *pAVar6;
  UClass *pUVar7;
  UPlayer *pUVar8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  if (param_1 == (UWorld *)0x0) {
    return (this->PlayerController).field0_0x0.DebugPtr;
  }
  UWorld::GetPlayerControllerIterator(param_1,&local_18);
  do {
    iVar3 = local_18.Index;
    pTVar2 = local_18.Container;
    if (local_18.Index < 0) {
      return (APlayerController *)0x0;
    }
    if ((local_18.Container)->ArrayNum <= local_18.Index) {
      return (APlayerController *)0x0;
    }
    uVar5 = 0;
    if (local_18.Index < (local_18.Container)->ArrayNum) {
      uVar5 = (uint)~local_18.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      pAVar6 = (APlayerController *)(*pcVar1)();
      return pAVar6;
    }
    pAVar6 = (APlayerController *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
    if (pAVar6 != (APlayerController *)0x0) {
      if ((pAVar6->Player).field0_0x0.DebugPtr == (UPlayer *)0x0) {
LAB_148385d36:
        pUVar8 = (UPlayer *)0x0;
      }
      else {
        pUVar7 = Z_Construct_UClass_ULocalPlayer_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&pAVar6->Player,pUVar7);
        if (!bVar4) goto LAB_148385d36;
        pUVar8 = (pAVar6->Player).field0_0x0.DebugPtr;
      }
      if (pUVar8 == this) {
        return pAVar6;
      }
    }
    local_18.Index = local_18.Index + 1;
  } while( true );
}

// GetPrivateStaticClass @ 148387290

UClass * __cdecl UPlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Player",&Z_Registration_Info_UClass_UPlayer.InnerSingleton,
               StaticRegisterNativesUPlayer,0x48,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlayer>,
               InternalVTableHelperCtorCaller<UPlayer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayer.InnerSingleton;
}

// ReceivedPlayerController @ 14839d020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPlayer::ReceivedPlayerController(UPlayer *this,APlayerController *param_1)

{
  return;
}

// StaticRegisterNativesUPlayer @ 1483af770

void __cdecl UPlayer::StaticRegisterNativesUPlayer(void)

{
  return;
}

// SwitchController @ 1483afb90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPlayer::SwitchController(UPlayer *this,APlayerController *param_1)

{
  APlayerController *pAVar1;
  
  pAVar1 = (this->PlayerController).field0_0x0.DebugPtr;
  if (pAVar1 != (APlayerController *)0x0) {
    (pAVar1->Player).field0_0x0.DebugPtr = (UPlayer *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (param_1->Player).field0_0x0.DebugPtr = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PlayerController).field0_0x0.DebugPtr = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001483afbf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,param_1);
  return;
}

