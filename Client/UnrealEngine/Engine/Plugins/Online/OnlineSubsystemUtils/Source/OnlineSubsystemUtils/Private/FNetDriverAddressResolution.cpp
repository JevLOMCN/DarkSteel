// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 5

// operator() @ 14ec585e0

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
`UE::Net::Private::FNetDriverAddressResolution::InitConnect'::__l5::<lambda_1>::operator()
          (void *this,FAddressInfoResult *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  void *_Src;
  AActor *pAVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<FString> *pTVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UNetConnection *this_00;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  TSharedRef<FInternetAddr,1> *pTVar12;
  longlong lVar13;
  longlong *plVar14;
  FGCScopeGuard local_res8 [8];
  undefined1 local_res18 [16];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FInternetAddr *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  TSharedRef<FInternetAddr,1> local_88;
  void *local_78 [2];
  FNetResult local_68;
  
  FGCScopeGuard::FGCScopeGuard(local_res8);
  bVar6 = FWeakObjectPtr::IsValid(this);
  if (bVar6) {
    this_00 = (UNetConnection *)FWeakObjectPtr::Get(this);
    if (param_1->ReturnCode == SE_NO_ERROR) {
      iVar10 = 0;
      pFVar11 = (param_1->Results).AllocatorInstance.Data;
      iVar8 = (param_1->Results).ArrayNum;
      local_b8.Data = (FScriptContainerElement *)0x0;
      pTVar12 = (TSharedRef<FInternetAddr,1> *)(pFVar11 + 0x18);
      local_b0 = 0;
      pFVar3 = pFVar11 + (longlong)iVar8 * 0x28;
      while( true ) {
        if ((param_1->Results).ArrayNum != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FAddressInfoResultData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
          iVar10 = (int)local_b0;
        }
        pTVar5 = CVarNetDebugAddResolverAddress.Ref;
        if (pFVar11 == pFVar3) break;
        iVar7 = iVar10;
        if ((local_b8.Data <= pTVar12) &&
           (pTVar12 < (TSharedRef<FInternetAddr,1> *)
                      (local_b8.Data + (longlong)local_b0._4_4_ * 0x10))) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_b0;
        }
        if (iVar7 == local_b0._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
        }
        iVar10 = iVar7 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,iVar10);
        *(FInternetAddr **)&local_b8.Data[(longlong)iVar7 * 0x10].field_0x0 = pTVar12->Object;
        pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
        *(TReferenceControllerBase<1> **)(local_b8.Data + (longlong)iVar7 * 0x10 + 8) = pTVar1;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar11 = pFVar11 + 0x28;
        pTVar12 = (TSharedRef<FInternetAddr,1> *)&pTVar12[2].SharedReferenceCount;
      }
      bVar6 = IsInParallelGameThread();
      if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0x10;
      }
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = *(int *)((longlong)&pTVar5->ShadowedValue[0].Data.ArrayNum + lVar9);
      lVar13 = (longlong)local_90;
      _Src = *(void **)((longlong)&pTVar5->ShadowedValue[0].Data.AllocatorInstance.Data + lVar9);
      if (local_90 == 0) {
        local_8c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_90,0,&local_98,local_90,&local_8c);
        memcpy(local_98.Data,_Src,lVar13 * 2);
      }
      if (1 < local_90) {
        (**(code **)(**(longlong **)((longlong)this + 8) + 0x58))
                  (*(longlong **)((longlong)this + 8),&local_a8,&local_98);
        if (local_a8 != (FInternetAddr *)0x0) {
          if ((local_a8 == (FInternetAddr *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)((longlong)*local_a8 + 0x28))(local_a8,*(undefined4 *)((longlong)this + 0x10))
          ;
          if ((local_a8 == (FInternetAddr *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_88.Object = local_a8;
          local_88.SharedReferenceCount.ReferenceController = pTStack_a0;
          if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_a0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_a8 == (FInternetAddr *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((local_b8.Data <= &local_88) &&
              (&local_88 <
               (TSharedRef<FInternetAddr,1> *)(local_b8.Data + (longlong)local_b0._4_4_ * 0x10))) &&
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
          iVar8 = (int)local_b0;
          if ((int)local_b0 == local_b0._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
          }
          local_b0 = CONCAT44(local_b0._4_4_,iVar8 + 1);
          *(FInternetAddr **)&local_b8.Data[(longlong)iVar8 * 0x10].field_0x0 = local_88.Object;
          *(TReferenceControllerBase<1> **)(local_b8.Data + (longlong)iVar8 * 0x10 + 8) =
               local_88.SharedReferenceCount.ReferenceController;
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          if (4 < (byte)LogNet._0_1_) {
            if ((local_a8 == (FInternetAddr *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (**(code **)((longlong)*local_a8 + 0x80))(local_a8,local_78,0);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_78[0] != (void *)0x0) {
              FMemory::Free(local_78[0]);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_a0);
      }
      pAVar2 = this_00[1].OwningActor.field0_0x0.DebugPtr;
      plVar14 = &(pAVar2->PrimaryActorTick)._padding_;
      if ((ForAnyElementType *)plVar14 != &local_b8) {
        DestructItems<TSharedRef<FInternetAddr,1>,int>
                  ((TSharedRef<FInternetAddr,1> *)*plVar14,(int)(pAVar2->PrimaryActorTick)._padding_
                  );
        if ((void *)*plVar14 != (void *)0x0) {
          FMemory::Free((void *)*plVar14);
        }
        *plVar14 = (longlong)local_b8.Data;
        local_b8.Data = (FScriptContainerElement *)0x0;
        *(int *)&(pAVar2->PrimaryActorTick)._padding_ = (int)local_b0;
        *(int *)((longlong)&(pAVar2->PrimaryActorTick)._padding_ + 4) = local_b0._4_4_;
        local_b0 = 0;
      }
      *(undefined1 *)
       ((longlong)&((this_00[1].OwningActor.field0_0x0.DebugPtr)->PrimaryActorTick)._padding_ + 4) =
           4;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      DestructItems<TSharedRef<FInternetAddr,1>,int>
                ((TSharedRef<FInternetAddr,1> *)local_b8.Data,(int)local_b0);
      local_68.ErrorContext.Data.AllocatorInstance.Data = local_b8.Data;
    }
    else {
      *(undefined1 *)
       ((longlong)&((this_00[1].OwningActor.field0_0x0.DebugPtr)->PrimaryActorTick)._padding_ + 4) =
           7;
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_68,AddressResolutionFailed);
      UNetConnection::Close(this_00,&local_68);
      if (local_68.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_68.NextResult + -0x10))((longlong)local_68.NextResult + -0x10);
      }
    }
    if ((TSharedRef<FInternetAddr,1> *)local_68.ErrorContext.Data.AllocatorInstance.Data !=
        (TSharedRef<FInternetAddr,1> *)0x0) {
      FMemory::Free(local_68.ErrorContext.Data.AllocatorInstance.Data);
    }
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    DestructItems<FAddressInfoResultData,int>
              ((FAddressInfoResultData *)(param_1->Results).AllocatorInstance.Data,
               (param_1->Results).ArrayNum);
  }
  else {
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    DestructItems<FAddressInfoResultData,int>
              ((FAddressInfoResultData *)(param_1->Results).AllocatorInstance.Data,
               (param_1->Results).ArrayNum);
  }
  pFVar3 = (param_1->Results).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->CanonicalNameResult).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->QueryServiceName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->QueryHostName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetConnectionResolver @ 14ec74b30

FNetConnectionAddressResolution * __cdecl
UE::Net::Private::FNetDriverAddressResolution::GetConnectionResolver(UIpConnection *param_1)

{
  if (param_1 != (UIpConnection *)0x0) {
    return (param_1->Resolver).Ptr;
  }
  return (FNetConnectionAddressResolution *)0x0;
}

// InitBindSockets @ 14ec7ee70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetDriverAddressResolution::InitBindSockets
          (FNetDriverAddressResolution *this,
          TUniqueFunction<TUniquePtr<FSocket,FSocketDeleter>___cdecl(TSharedRef<FInternetAddr,1>,FString_&)>
          *param_1,EInitBindSocketsFlags param_2,ISocketSubsystem *param_3,FString *param_4)

{
  int *piVar1;
  code *pcVar2;
  TSharedPtr<FSocket,1> *pTVar3;
  FSocket *pFVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  TSharedRef<FInternetAddr,1> *pTVar9;
  TSharedRef<FInternetAddr,1> *pTVar10;
  undefined1 local_a8 [2];
  EInitBindSocketsFlags local_a6;
  TSharedRef<FInternetAddr,1> *local_a0;
  uint local_98;
  ISocketSubsystem *local_90;
  FSocket *local_88;
  uint local_80;
  FSocketDeleter local_78;
  FInternetAddr *local_70;
  TReferenceControllerBase<1> *local_68;
  void *local_60 [2];
  void *local_50 [3];
  
  local_a6 = param_2;
  (**(code **)(param_3->_padding_ + 0xd8))(param_3,&local_a0);
  if (local_98 != 0) {
    uVar6 = (ulonglong)(int)local_98;
    pTVar10 = local_a0 + uVar6;
    local_80 = local_98;
    pTVar9 = local_a0;
    do {
      if (local_98 != (uint)uVar6) {
        `TCheckedPointerIterator<TSharedRef<FInternetAddr,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_a8);
      }
      if (pTVar9 == pTVar10) goto LAB_14ec7f01d;
      local_70 = pTVar9->Object;
      local_68 = (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_68 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
        UNLOCK();
      }
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar2 = *(code **)param_1;
      plVar8 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar8 = (longlong *)&param_1->field_0x10;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar2)(&local_90,uVar7,&local_70,param_4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
      if (local_88 == (FSocket *)0x0) {
        if (2 < (byte)LogNet._0_1_) {
          (**(code **)((longlong)*pTVar9->Object + 0x80))(pTVar9->Object,local_50,0);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_50[0] != (void *)0x0) {
            FMemory::Free(local_50[0]);
          }
        }
        ::FString::operator=(param_4,L"");
      }
      else {
        if (4 < (byte)LogNet._0_1_) {
          (**(code **)((longlong)*pTVar9->Object + 0x80))(pTVar9->Object,local_60,1);
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_60[0] != (void *)0x0) {
            FMemory::Free(local_60[0]);
          }
        }
        pFVar4 = local_88;
        piVar1 = &(this->BoundSockets).ArrayMax;
        local_78.Subsystem = local_90;
        iVar5 = (this->BoundSockets).ArrayNum;
        local_88 = (FSocket *)0x0;
        if (iVar5 == *piVar1) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)this,piVar1);
        }
        (this->BoundSockets).ArrayNum = iVar5 + 1;
        TSharedPtr<FSocket,1>::TSharedPtr<FSocket,1><FSocket,FSocketDeleter>
                  ((TSharedPtr<FSocket,1> *)
                   ((this->BoundSockets).AllocatorInstance.Data + (longlong)iVar5 * 0x10),pFVar4,
                   &local_78);
        if ((local_a6 & Server) != 0) goto code_r0x00014ec7f009;
      }
      if ((local_90 != (ISocketSubsystem *)0x0) && (local_88 != (FSocket *)0x0)) {
        (**(code **)(local_90->_padding_ + 0x38))();
      }
      uVar6 = (ulonglong)local_80;
      pTVar9 = pTVar9 + 1;
    } while( true );
  }
  ::FString::operator=
            (param_4,
             L"No binding addresses could be found or grabbed for this platform! Sockets could not be created!"
            );
LAB_14ec7f18b:
  DestructItems<TSharedRef<FInternetAddr,1>,int>(local_a0,local_98);
  if (local_a0 != (TSharedRef<FInternetAddr,1> *)0x0) {
    FMemory::Free(local_a0);
  }
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return false;
code_r0x00014ec7f009:
  if ((local_90 != (ISocketSubsystem *)0x0) && (local_88 != (FSocket *)0x0)) {
    (**(code **)(local_90->_padding_ + 0x38))();
  }
LAB_14ec7f01d:
  if (((param_4->Data).ArrayNum < 2) && ((this->BoundSockets).ArrayNum != 0)) {
    DestructItems<TSharedRef<FInternetAddr,1>,int>(local_a0,local_98);
    if (local_a0 != (TSharedRef<FInternetAddr,1> *)0x0) {
      FMemory::Free(local_a0);
    }
    if (*(longlong *)param_1 != 0) {
      plVar8 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    return true;
  }
  if (2 < (byte)LogNet._0_1_) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  piVar1 = &(this->BoundSockets).ArrayMax;
  pTVar3 = (TSharedPtr<FSocket,1> *)(this->BoundSockets).AllocatorInstance.Data;
  iVar5 = (this->BoundSockets).ArrayNum;
  if ((this->BoundSockets).ArrayMax < 0) {
    DestructItems<TSharedPtr<FSocket,1>,int>(pTVar3,iVar5);
    (this->BoundSockets).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FSocket,1>,int>(pTVar3,iVar5);
    (this->BoundSockets).ArrayNum = 0;
  }
  goto LAB_14ec7f18b;
}

// InitConnect @ 14ec7fa10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetDriverAddressResolution::InitConnect
          (FNetDriverAddressResolution *this,UNetConnection *param_1,ISocketSubsystem *param_2,
          FSocket *param_3,FURL *param_4)

{
  int *piVar1;
  FNetConnectionAddressResolution *pFVar2;
  code *pcVar3;
  FURL *pFVar4;
  bool bVar5;
  uint uVar6;
  UIpConnection *pUVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  UIpConnection *local_90;
  FString local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 uStack_64;
  code *local_58 [5];
  undefined8 *local_30;
  
  pUVar7 = CastChecked<UIpConnection,UNetConnection>(param_1);
  pFVar4 = param_4;
  pFVar2 = (pUVar7->Resolver).Ptr;
  iVar8 = param_4->Port;
  if (pFVar2->ResolutionState == Disabled) {
    uVar13 = (this->BoundSockets).ArrayNum - 1;
    if (-1 < (int)uVar13) {
      lVar12 = (longlong)(int)uVar13 << 4;
      do {
        uVar10 = ~uVar13 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar13 < (this->BoundSockets).ArrayNum) {
          uVar6 = uVar10;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (*(FSocket **)((this->BoundSockets).AllocatorInstance.Data + lVar12) != param_3) {
          uVar6 = 0;
          if ((int)uVar13 < (this->BoundSockets).ArrayNum) {
            uVar6 = uVar10;
          }
          if (uVar6 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar11 = (this->BoundSockets).AllocatorInstance.Data + lVar12;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar11 + 8));
          iVar8 = (this->BoundSockets).ArrayNum + ~uVar13;
          if (iVar8 != 0) {
            memmove(pFVar11,pFVar11 + 0x10,(longlong)iVar8 << 4);
          }
          piVar1 = &(this->BoundSockets).ArrayNum;
          *piVar1 = *piVar1 + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)this,(this->BoundSockets).ArrayNum,
                     &(this->BoundSockets).ArrayMax);
        }
        lVar12 = lVar12 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
  }
  else {
    if (pFVar2 != (FNetConnectionAddressResolution *)this) {
      DestructItems<TSharedPtr<FSocket,1>,int>
                ((TSharedPtr<FSocket,1> *)(pFVar2->BindSockets).AllocatorInstance.Data,
                 (pFVar2->BindSockets).ArrayNum);
      pFVar11 = (pFVar2->BindSockets).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pFVar2->BindSockets).AllocatorInstance.Data = (this->BoundSockets).AllocatorInstance.Data;
      (this->BoundSockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->BindSockets).ArrayNum = (this->BoundSockets).ArrayNum;
      (pFVar2->BindSockets).ArrayMax = (this->BoundSockets).ArrayMax;
      (this->BoundSockets).ArrayNum = 0;
      (this->BoundSockets).ArrayMax = 0;
    }
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    param_4 = (FURL *)0x0;
    local_90 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_4,(FObjectPtr)&local_90);
    local_78 = param_4;
    pcVar3 = *(code **)(param_2->_padding_ + 0x50);
    uStack_70 = param_2;
    local_68 = iVar8;
    ::FString::PrintfImpl(&local_88,L"%d");
    pwVar9 = L"";
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar14.Data = local_88.Data.AllocatorInstance.Data;
    }
    if ((pFVar4->Host).Data.ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar4->Host).Data.AllocatorInstance.Data;
    }
    local_58[0] = (code *)0x0;
    local_30 = FMemory::Malloc(0x20,8);
    *local_30 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::Net::Private::FNetDriverAddressResolution::InitConnect'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *(undefined4 *)(local_30 + 1) = (undefined4)local_78;
    *(undefined4 *)((longlong)local_30 + 0xc) = local_78._4_4_;
    *(undefined4 *)(local_30 + 2) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)local_30 + 0x14) = uStack_70._4_4_;
    local_30[3] = CONCAT44(uStack_64,local_68);
    if (local_30 + 1 != (undefined8 *)0x0) {
      local_58[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Net::Private::FNetDriverAddressResolution::InitConnect'::__l5::<lambda_1>,void,FAddressInfoResult>
                    ::Call;
    }
    (*pcVar3)(param_2,local_58,pwVar9,FVar14.Data,0x89,0,1);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetRetrieveTimestamp @ 14ec97b80

void __thiscall
UE::Net::Private::FNetDriverAddressResolution::SetRetrieveTimestamp
          (FNetDriverAddressResolution *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BoundSockets).ArrayNum;
  pFVar4 = (this->BoundSockets).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->BoundSockets).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSocket,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar4 + 0x118))(*(longlong **)pFVar4,param_1);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

