// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 16

// StaticClass @ 14cf31ac0

UClass * __cdecl AARSharedWorldGameMode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSharedWorldGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSharedWorldGameMode",
               &Z_Registration_Info_UClass_AARSharedWorldGameMode.InnerSingleton,
               StaticRegisterNativesAARSharedWorldGameMode,0x408,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AARSharedWorldGameMode>,
               InternalVTableHelperCtorCaller<AARSharedWorldGameMode>,local_res8,
               AGameMode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSharedWorldGameMode.InnerSingleton;
}

// AARSharedWorldGameMode @ 14cf403d0

AARSharedWorldGameMode * __thiscall
AARSharedWorldGameMode::AARSharedWorldGameMode(AARSharedWorldGameMode *this,FVTableHelper *param_1)

{
  AGameMode::AGameMode((AGameMode *)this,param_1);
  this->_padding_ = (longlong)&___7AARSharedWorldGameMode__6B_;
  *(undefined8 *)&this->PlayerToReplicationStateMap = 0;
  *(undefined8 *)&(this->PlayerToReplicationStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerToReplicationStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x34 = 0;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlayerToReplicationStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x48 = 0;
  (this->SendBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SendBuffer).ArrayNum = 0;
  (this->SendBuffer).ArrayMax = 0;
  return this;
}

// AARSharedWorldGameMode @ 14cf40450

AARSharedWorldGameMode * __thiscall
AARSharedWorldGameMode::AARSharedWorldGameMode
          (AARSharedWorldGameMode *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  AGameMode::AGameMode((AGameMode *)this,param_1);
  this->BufferSizePerChunk = 0x200;
  this->_padding_ = (longlong)&___7AARSharedWorldGameMode__6B_;
  *(undefined8 *)&this->PlayerToReplicationStateMap = 0;
  *(undefined8 *)&(this->PlayerToReplicationStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerToReplicationStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x34 = 0;
  *(undefined8 *)&(this->PlayerToReplicationStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x48 = 0;
  (this->SendBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SendBuffer).ArrayNum = 0;
  (this->SendBuffer).ArrayMax = 0;
  pUVar1 = AARSharedWorldGameState::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  pUVar1 = AARSharedWorldPlayerController::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  return this;
}

// ~AARSharedWorldGameMode @ 14cf43cc0

void __thiscall AARSharedWorldGameMode::~AARSharedWorldGameMode(AARSharedWorldGameMode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7AARSharedWorldGameMode__6B_;
  pFVar1 = (this->SendBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PlayerToReplicationStateMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlayerToReplicationStateMap);
  AGameMode::~AGameMode((AGameMode *)this);
  return;
}

// GetARSharedWorldGameState @ 14cf4fa20

AARSharedWorldGameState * __thiscall
AARSharedWorldGameMode::GetARSharedWorldGameState(AARSharedWorldGameMode *this)

{
  longlong *this_00;
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  this_00 = &this->_padding_;
  if (*this_00 == 0) {
    pFVar3 = GetTypeName<AARSharedWorldGameState>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AARSharedWorldGameState::StaticClass();
  bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
  if ((bVar1) && ((AARSharedWorldGameState *)*this_00 != (AARSharedWorldGameState *)0x0)) {
    return (AARSharedWorldGameState *)*this_00;
  }
  pFVar3 = GetTypeName<AARSharedWorldGameState>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AGameStateBase>(&local_18,(AGameStateBase *)*this_00);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetPrivateStaticClass @ 14cf539e0

UClass * __cdecl AARSharedWorldGameMode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSharedWorldGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSharedWorldGameMode",
               &Z_Registration_Info_UClass_AARSharedWorldGameMode.InnerSingleton,
               StaticRegisterNativesAARSharedWorldGameMode,0x408,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AARSharedWorldGameMode>,
               InternalVTableHelperCtorCaller<AARSharedWorldGameMode>,local_res8,
               AGameMode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSharedWorldGameMode.InnerSingleton;
}

// Logout @ 14cf58120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AARSharedWorldGameMode::Logout(AARSharedWorldGameMode *this,AController *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  UClass *pUVar4;
  undefined1 *puVar5;
  FName local_res10;
  FString local_18;
  
  AGameMode::Logout((AGameMode *)this,param_1);
  if (param_1 != (AController *)0x0) {
    pUVar4 = AARSharedWorldPlayerController::StaticClass();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar4->_padding_)) {
      uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar2 = uVar2 >> 0x10 ^ uVar2;
      if (*(int *)&(this->PlayerToReplicationStateMap).field_0x8 !=
          *(int *)&(this->PlayerToReplicationStateMap).field_0x34) {
        puVar5 = *(undefined1 **)&(this->PlayerToReplicationStateMap).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this->PlayerToReplicationStateMap).field_0x38;
        }
        iVar3 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&(this->PlayerToReplicationStateMap).field_0x48 - 1U &
                                  uVar2) * 4);
        if (iVar3 != -1) {
          lVar1 = *(longlong *)&(this->PlayerToReplicationStateMap).field_0x0;
          while (*(AController **)(lVar1 + (longlong)iVar3 * 0x18) != param_1) {
            iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
            if (iVar3 == -1) {
              return;
            }
          }
          if (5 < (byte)LogAR._0_1_) {
            local_res10 = (FName)param_1->_padding_;
            ::FName::ToString(&local_res10,&local_18);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
          if (*(int *)&(this->PlayerToReplicationStateMap).field_0x8 !=
              *(int *)&(this->PlayerToReplicationStateMap).field_0x34) {
            local_res10 = (FName)param_1;
            TSet<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,0>,FDefaultSetAllocator>
            ::RemoveImpl<AARSharedWorldPlayerController_const_*>
                      ((TSet<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,0>,FDefaultSetAllocator>
                        *)&this->PlayerToReplicationStateMap,uVar2,
                       (AARSharedWorldPlayerController **)&local_res10);
          }
        }
      }
    }
  }
  return;
}

// SetARSharedWorldData @ 14cf5e5e0

void __thiscall
AARSharedWorldGameMode::SetARSharedWorldData
          (AARSharedWorldGameMode *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  AARSharedWorldGameState *pAVar3;
  
  pAVar3 = GetARSharedWorldGameState(this);
  pTVar1 = &pAVar3->ARWorldData;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pAVar3->ARWorldData).ArrayNum = param_1->ArrayNum;
    (pAVar3->ARWorldData).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetARWorldSharingIsReady @ 14cf5f6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AARSharedWorldGameMode::SetARWorldSharingIsReady(AARSharedWorldGameMode *this)

{
  if (this->bShouldSendSharedWorldData == false) {
    this->bShouldSendSharedWorldData = true;
    GetARSharedWorldGameState(this);
    if (4 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      return;
    }
  }
  return;
}

// SetPreviewImageData @ 14cf607f0

void __thiscall
AARSharedWorldGameMode::SetPreviewImageData
          (AARSharedWorldGameMode *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  AARSharedWorldGameState *pAVar3;
  
  pAVar3 = GetARSharedWorldGameState(this);
  pTVar1 = &pAVar3->PreviewImageData;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pAVar3->PreviewImageData).ArrayNum = param_1->ArrayNum;
    (pAVar3->PreviewImageData).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// StaticRegisterNativesAARSharedWorldGameMode @ 14cf60d00

void __cdecl AARSharedWorldGameMode::StaticRegisterNativesAARSharedWorldGameMode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_AARSharedWorldGameMode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14cf617f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AARSharedWorldGameMode::Tick(AARSharedWorldGameMode *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  TMap<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,0>_>
  *this_00;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  AARSharedWorldGameState *pAVar12;
  UWorld *this_01;
  AARSharedWorldPlayerController *pAVar13;
  UClass *pUVar14;
  UFunction *pUVar15;
  FARSharedWorldReplicationState *pFVar16;
  undefined1 *puVar17;
  int iVar18;
  AARSharedWorldPlayerController *local_res18;
  AARSharedWorldGameState *local_res20;
  int local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  int local_d0 [2];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<AController,FWeakObjectPtr>_const_,int>
  local_a8;
  FName local_98;
  FName local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  AARSharedWorldPlayerController **local_50;
  undefined8 *local_48;
  
  AGameMode::Tick((AGameMode *)this,param_1);
  if (this->bShouldSendSharedWorldData == false) {
    return;
  }
  pAVar12 = GetARSharedWorldGameState(this);
  local_res20 = pAVar12;
  this_01 = AActor::GetWorld((AActor *)this);
  UWorld::GetControllerIterator(this_01,&local_a8);
  do {
    while( true ) {
      iVar11 = local_a8.Index;
      pTVar7 = local_a8.Container;
      if (local_a8.Index < 0) {
        return;
      }
      if ((local_a8.Container)->ArrayNum <= local_a8.Index) {
        return;
      }
      uVar10 = 0;
      if (local_a8.Index < (local_a8.Container)->ArrayNum) {
        uVar10 = (uint)~local_a8.Index >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pAVar13 = (AARSharedWorldPlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar7->AllocatorInstance).Data + (longlong)iVar11 * 8));
      if (pAVar13 != (AARSharedWorldPlayerController *)0x0) break;
LAB_14cf61e05:
      local_a8.Index = local_a8.Index + 1;
      local_res18 = (AARSharedWorldPlayerController *)0x0;
    }
    pUVar14 = AARSharedWorldPlayerController::StaticClass();
    iVar11 = (int)pUVar14->_padding_;
    if ((*(int *)(pAVar13->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar14->_padding_)) goto LAB_14cf61e05;
    local_res18 = pAVar13;
    cVar9 = (**(code **)(pAVar13->_padding_ + 0x7f0))(pAVar13);
    if ((cVar9 == '\0') && (local_res18->bIsReadyToReceive != false)) {
      this_00 = &this->PlayerToReplicationStateMap;
      uVar10 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res18 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      if (*(int *)&(this->PlayerToReplicationStateMap).field_0x8 !=
          *(int *)&(this->PlayerToReplicationStateMap).field_0x34) {
        puVar4 = *(undefined1 **)&(this->PlayerToReplicationStateMap).field_0x40;
        puVar17 = &(this->PlayerToReplicationStateMap).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar17 = puVar4;
        }
        iVar11 = *(int *)(puVar17 +
                         (ulonglong)
                         (*(int *)&(this->PlayerToReplicationStateMap).field_0x48 - 1U &
                         (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar11 != -1) {
          do {
            if (*(AARSharedWorldPlayerController **)
                 (*(longlong *)&this_00->field_0x0 + (longlong)iVar11 * 0x18) == local_res18) {
              pFVar16 = TMapBase<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,0>_>
                        ::FindChecked((TMapBase<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,0>_>
                                       *)this_00,local_res18);
              iVar11 = pFVar16->PreviewImageOffset;
              if (iVar11 < (pAVar12->PreviewImageData).ArrayNum) {
                uVar10 = this->BufferSizePerChunk;
                pTVar3 = &this->SendBuffer;
                if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
                }
                piVar1 = &(this->SendBuffer).ArrayMax;
                piVar2 = &(this->SendBuffer).ArrayNum;
                *piVar2 = 0;
                if ((this->SendBuffer).ArrayMax < (int)uVar10) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,uVar10,&pTVar3->AllocatorInstance,0,piVar1);
                }
                iVar18 = (pAVar12->PreviewImageData).ArrayNum - iVar11;
                if (this->BufferSizePerChunk < iVar18) {
                  iVar18 = this->BufferSizePerChunk;
                }
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar18,&pTVar3->AllocatorInstance,piVar2,piVar1);
                memcpy((pTVar3->AllocatorInstance).Data,
                       (local_res20->PreviewImageData).AllocatorInstance.Data + iVar11,
                       (longlong)iVar18);
                pAVar13 = local_res18;
                local_e0.Data = (FScriptContainerElement *)0x0;
                local_d8 = 0;
                local_e8[0] = iVar11;
                if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_e0 != pTVar3) {
                  uVar10 = *piVar2;
                  pFVar5 = (pTVar3->AllocatorInstance).Data;
                  local_d8 = (ulonglong)uVar10;
                  if (uVar10 != 0) {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,uVar10,0,&local_e0,uVar10,(int *)((longlong)&local_d8 + 4));
                    memcpy(local_e0.Data,pFVar5,(longlong)(int)uVar10);
                  }
                }
                pUVar15 = UObject::FindFunctionChecked
                                    ((UObject *)pAVar13,
                                     NAME_AARSharedWorldPlayerController_ClientUpdatePreviewImageData
                                    );
                (**(code **)(pAVar13->_padding_ + 0x260))(pAVar13,pUVar15,local_e8);
                if (local_e0.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e0.Data);
                }
                pFVar16->PreviewImageOffset = pFVar16->PreviewImageOffset + iVar18;
                pAVar12 = local_res20;
                if (5 < (byte)LogAR._0_1_) {
                  local_98 = (FName)local_res18->_padding_;
                  ::FName::ToString(&local_98,&local_80);
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
                  pAVar12 = local_res20;
                  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_80.Data.AllocatorInstance.Data);
                    pAVar12 = local_res20;
                  }
                }
              }
              iVar11 = pFVar16->ARWorldOffset;
              if (iVar11 < (pAVar12->ARWorldData).ArrayNum) {
                uVar10 = this->BufferSizePerChunk;
                pTVar3 = &this->SendBuffer;
                if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
                }
                piVar1 = &(this->SendBuffer).ArrayMax;
                piVar2 = &(this->SendBuffer).ArrayNum;
                *piVar2 = 0;
                if ((this->SendBuffer).ArrayMax < (int)uVar10) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,uVar10,&pTVar3->AllocatorInstance,0,piVar1);
                }
                iVar18 = (pAVar12->ARWorldData).ArrayNum - iVar11;
                if (this->BufferSizePerChunk < iVar18) {
                  iVar18 = this->BufferSizePerChunk;
                }
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar18,&pTVar3->AllocatorInstance,piVar2,piVar1);
                memcpy((pTVar3->AllocatorInstance).Data,
                       (local_res20->ARWorldData).AllocatorInstance.Data + iVar11,(longlong)iVar18);
                pAVar13 = local_res18;
                local_c8.Data = (FScriptContainerElement *)0x0;
                local_c0 = 0;
                local_d0[0] = iVar11;
                if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_c8 != pTVar3) {
                  uVar10 = *piVar2;
                  pFVar5 = (pTVar3->AllocatorInstance).Data;
                  local_c0 = (ulonglong)uVar10;
                  if (uVar10 != 0) {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,uVar10,0,&local_c8,uVar10,(int *)((longlong)&local_c0 + 4));
                    memcpy(local_c8.Data,pFVar5,(longlong)(int)uVar10);
                  }
                }
                pUVar15 = UObject::FindFunctionChecked
                                    ((UObject *)pAVar13,
                                     NAME_AARSharedWorldPlayerController_ClientUpdateARWorldData);
                (**(code **)(pAVar13->_padding_ + 0x260))(pAVar13,pUVar15,local_d0);
                if (local_c8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.Data);
                }
                pFVar16->ARWorldOffset = pFVar16->ARWorldOffset + iVar18;
                pAVar12 = local_res20;
                if (5 < (byte)LogAR._0_1_) {
                  local_90 = (FName)local_res18->_padding_;
                  ::FName::ToString(&local_90,&local_70);
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
                  pAVar12 = local_res20;
                  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_70.Data.AllocatorInstance.Data);
                    pAVar12 = local_res20;
                  }
                }
              }
              goto LAB_14cf61df8;
            }
            iVar11 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar11 * 0x18);
          } while (iVar11 != -1);
        }
      }
      local_50 = &local_res18;
      local_b8 = 0;
      local_48 = &local_b8;
      TSet<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<AARSharedWorldPlayerController_*_const_&,FARSharedWorldReplicationState_&&>_>
                ((TSet<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<AARSharedWorldPlayerController_*_const_&,FARSharedWorldReplicationState_&&>
                  *)&stack0x00000008,(bool *)&local_50);
      pAVar13 = local_res18;
      local_b0 = (pAVar12->PreviewImageData).ArrayNum;
      local_ac = (pAVar12->ARWorldData).ArrayNum;
      pUVar15 = UObject::FindFunctionChecked
                          ((UObject *)local_res18,
                           NAME_AARSharedWorldPlayerController_ClientInitSharedWorld);
      (**(code **)(pAVar13->_padding_ + 0x260))(pAVar13,pUVar15,&local_b0);
      if ((byte)LogAR._0_1_ < 6) goto LAB_14cf61df8;
      local_88 = (FName)local_res18->_padding_;
      ::FName::ToString(&local_88,&local_60);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      if (local_60.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_14cf61df8;
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
      local_a8.Index = local_a8.Index + 1;
    }
    else {
LAB_14cf61df8:
      local_a8.Index = local_a8.Index + 1;
    }
  } while( true );
}

// execGetARSharedWorldGameState @ 14cf6cd80

void __cdecl
AARSharedWorldGameMode::execGetARSharedWorldGameState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  AARSharedWorldGameState *pAVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar1 = GetARSharedWorldGameState((AARSharedWorldGameMode *)param_1);
  *(AARSharedWorldGameState **)param_3 = pAVar1;
  return;
}

// execSetARSharedWorldData @ 14cf73350

void __cdecl
AARSharedWorldGameMode::execSetARSharedWorldData(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  AARSharedWorldGameState *pAVar4;
  size_t _Size;
  ForAnyElementType local_28;
  undefined8 local_20;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_10;
  local_20 = CONCAT44(local_20._4_4_,(int)local_10);
  if ((int)local_10 == 0) {
    local_20 = local_10 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_10,0,&local_28,(int)local_10,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,_Size);
  }
  pAVar4 = GetARSharedWorldGameState((AARSharedWorldGameMode *)param_1);
  pTVar1 = &pAVar4->ARWorldData;
  if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_28) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    (pAVar4->ARWorldData).ArrayNum = (int)local_20;
    (pAVar4->ARWorldData).ArrayMax = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetARWorldSharingIsReady @ 14cf736d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AARSharedWorldGameMode::execSetARWorldSharingIsReady(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x17].field_0xc == '\0') {
    param_1[0x17].field_0xc = 1;
    GetARSharedWorldGameState((AARSharedWorldGameMode *)param_1);
    if (4 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      return;
    }
  }
  return;
}

// execSetPreviewImageData @ 14cf74530

void __cdecl
AARSharedWorldGameMode::execSetPreviewImageData(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  AARSharedWorldGameState *pAVar4;
  size_t _Size;
  ForAnyElementType local_28;
  undefined8 local_20;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_10;
  local_20 = CONCAT44(local_20._4_4_,(int)local_10);
  if ((int)local_10 == 0) {
    local_20 = local_10 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_10,0,&local_28,(int)local_10,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,_Size);
  }
  pAVar4 = GetARSharedWorldGameState((AARSharedWorldGameMode *)param_1);
  pTVar1 = &pAVar4->PreviewImageData;
  if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_28) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    (pAVar4->PreviewImageData).ArrayNum = (int)local_20;
    (pAVar4->PreviewImageData).ArrayMax = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

