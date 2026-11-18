// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// FContentBundleClient @ 148a418b0

/* WARNING: Enum "Type": Some values do not have unique names */

FContentBundleClient * __thiscall
FContentBundleClient::FContentBundleClient
          (FContentBundleClient *this,UContentBundleDescriptor *param_1,FString *param_2)

{
  UContentBundleDescriptor *local_res8;
  
  this->_padding_ = (longlong)&___7FContentBundleClient__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UContentBundleDescriptor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ContentBundleDescriptor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UContentBundleDescriptor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->ContentBundleDescriptor).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->WorldContentStates = 0;
  *(undefined8 *)&(this->WorldContentStates).field_0x8 = 0;
  *(undefined8 *)&(this->WorldContentStates).field_0x20 = 0;
  *(undefined4 *)&(this->WorldContentStates).field_0x28 = 0;
  *(undefined4 *)&(this->WorldContentStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldContentStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldContentStates).field_0x34 = 0;
  *(undefined8 *)&(this->WorldContentStates).field_0x40 = 0;
  *(undefined4 *)&(this->WorldContentStates).field_0x48 = 0;
  ::FString::FString(&this->DisplayName,param_2);
  this->State = Unregistered;
  if (5 < (byte)LogContentBundle._0_1_) {
    FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
  }
  SetState(this,Registered);
  return this;
}

// ~FContentBundleClient @ 148a44180

void __thiscall FContentBundleClient::~FContentBundleClient(FContentBundleClient *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->DisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WorldContentStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WorldContentStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->WorldContentStates);
  return;
}

// CreateClient @ 148a4e500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FContentBundleClient,1> * __cdecl
FContentBundleClient::CreateClient
          (TSharedPtr<FContentBundleClient,1> *__return_storage_ptr__,
          UContentBundleDescriptor *param_1,FString *param_2)

{
  UContentBundleEngineSubsystem *this;
  
  this = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
  UContentBundleEngineSubsystem::RegisterContentBundle(this,__return_storage_ptr__,param_1,param_2);
  if ((1 < (byte)LogContentBundle._0_1_) &&
     (__return_storage_ptr__->Object == (FContentBundleClient *)0x0)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
  }
  return __return_storage_ptr__;
}

// DoOnClientToUnregister @ 148a50560

void __thiscall FContentBundleClient::DoOnClientToUnregister(FContentBundleClient *this)

{
  return;
}

// DoOnContentInjectedInWorld @ 148a50570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleClient::DoOnContentInjectedInWorld
          (FContentBundleClient *this,EContentBundleStatus param_1,UWorld *param_2)

{
  return;
}

// DoOnContentRegisteredInWorld @ 148a50580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleClient::DoOnContentRegisteredInWorld(FContentBundleClient *this,UWorld *param_1)

{
  return;
}

// DoOnContentRemovedFromWorld @ 148a50590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleClient::DoOnContentRemovedFromWorld(FContentBundleClient *this,UWorld *param_1)

{
  return;
}

// GetWorldContentState @ 148a5b550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EWorldContentState __thiscall
FContentBundleClient::GetWorldContentState(FContentBundleClient *this,UWorld *param_1)

{
  longlong lVar1;
  int iVar2;
  EWorldContentState *pEVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    (&this->WorldContentStates,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res10);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&this->WorldContentStates + (longlong)iVar2 * 0x14;
    pEVar3 = (EWorldContentState *)(lVar1 + 8);
    if (lVar1 == 0) {
      pEVar3 = (EWorldContentState *)0x0;
    }
    if (pEVar3 != (EWorldContentState *)0x0) {
      return *pEVar3;
    }
  }
  return NoContent;
}

// HasContentToRemove @ 148a5b690

bool __thiscall FContentBundleClient::HasContentToRemove(FContentBundleClient *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->WorldContentStates).field_0x28;
  puVar1 = &(this->WorldContentStates).field_0x10;
  iVar14 = 0;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->WorldContentStates).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a5b72d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar9 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_148a5b72d:
  uVar13 = *(uint *)&(this->WorldContentStates).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->WorldContentStates).field_0x8 -
                       *(int *)&(this->WorldContentStates).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar8 = *(uint *)&(this->WorldContentStates).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->WorldContentStates).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a5b830;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_148a5b830:
  while( true ) {
    if (*(int *)&(this->WorldContentStates).field_0x8 -
        *(int *)&(this->WorldContentStates).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pcVar4 = *(code **)(this->_padding_ + 0x10);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  (*(longlong *)&this->WorldContentStates +
                                  (longlong)TStack_60.CurrentBitIndex * 0x14));
    cVar7 = (*pcVar4)(this,pUVar10);
    if (cVar7 != '\0') {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// OnContentInjectedInWorld @ 148a5f620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleClient::OnContentInjectedInWorld
          (FContentBundleClient *this,EContentBundleStatus param_1,UWorld *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 8))(this,param_2);
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShouldInjectContent(InjectedWorld)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                       ,0x62,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (2 < param_1 - ReadyToInject) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InjectionStatus == EContentBundleStatus::ContentInjected || InjectionStatus == EContentBundleStatus::ReadyToInject || InjectionStatus == EContentBundleStatus::FailedToInject"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                       ,0x65,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetWorldContentState(this,param_2,ContentBundleInjected);
                    /* WARNING: Could not recover jumptable at 0x000148a5f6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))(this,param_1,param_2);
  return;
}

// OnContentRegisteredInWorld @ 148a5f6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleClient::OnContentRegisteredInWorld
          (FContentBundleClient *this,EContentBundleStatus param_1,UWorld *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != Registered) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContentBundleStatus == EContentBundleStatus::Registered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                       ,0x5b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a5f71d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,param_2);
  return;
}

// OnContentRemovedFromWorld @ 148a5f730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleClient::OnContentRemovedFromWorld
          (FContentBundleClient *this,EContentBundleStatus param_1,UWorld *param_2)

{
  UContentBundleManager *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *this_01;
  UWorldPartition *this_02;
  
  cVar2 = (**(code **)(this->_padding_ + 0x10))(this,param_2);
  if (cVar2 == '\0') {
    this_00 = (param_2->ContentBundleManager).field0_0x0.DebugPtr;
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    this_01 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
    this_02 = UWorld::GetWorldPartition(this_01);
    if (this_02 != (UWorldPartition *)0x0) {
      bVar3 = UWorldPartition::IsInitialized(this_02);
      if (bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShouldRemoveContent(InjectedWorld) || !InjectedWorld->ContentBundleManager->CanInject()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                           ,0x6f,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  if (param_1 != Registered) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RemovalStatus == EContentBundleStatus::Registered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                       ,0x70,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetWorldContentState(this,param_2,NoContent);
  (**(code **)(this->_padding_ + 0x28))(this,param_2);
  bVar3 = HasContentToRemove(this);
  if ((!bVar3) && (this->State == ContentRemovalRequested)) {
    SetState(this,Registered);
    return;
  }
  return;
}

// RequestContentInjection @ 148a65f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleClient::RequestContentInjection(FContentBundleClient *this)

{
  EContentBundleClientState EVar1;
  code *pcVar2;
  UEnum *this_00;
  bool bVar3;
  UContentBundleEngineSubsystem *this_01;
  UContentBundleDescriptor *pUVar4;
  TSharedPtr<FContentBundleClient,1> *pTVar5;
  UPackage *pUVar6;
  FText local_18;
  
  EVar1 = this->State;
  if (EVar1 == Registered) {
    SetState(this,ContentInjectionRequested);
    this_01 = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
    pUVar4 = (UContentBundleDescriptor *)
             FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
    pTVar5 = UContentBundleEngineSubsystem::FindRegisteredClient(this_01,pUVar4);
    if (pTVar5 == (TSharedPtr<FContentBundleClient,1> *)0x0) {
      if (1 < (byte)LogContentBundle._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      }
    }
    else {
      if (4 < (byte)LogContentBundle._0_1_) {
        FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      }
      if ((pTVar5->Object == (FContentBundleClient *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMulticastDelegate<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::Broadcast
                (&this_01->OnContentBundleClientRequestedContentInjection,pTVar5->Object);
    }
  }
  else if (4 < (byte)LogContentBundle._0_1_) {
    if (Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton == (UEnum *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleClientState,(UObject *)pUVar6,
                         L"EContentBundleClientState");
    }
    this_00 = Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton;
    if ((Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UEnum::GetDisplayNameTextByValue(this_00,&local_18,(longlong)(int)EVar1);
    FText::ToString(&local_18);
    FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// RequestRemoveContent @ 148a663b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleClient::RequestRemoveContent(FContentBundleClient *this)

{
  code *pcVar1;
  bool bVar2;
  UContentBundleEngineSubsystem *this_00;
  UContentBundleDescriptor *pUVar3;
  TSharedPtr<FContentBundleClient,1> *pTVar4;
  
  if (this->State == Unregistered) {
    bVar2 = HasContentToRemove(this);
    if ((bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasContentToRemove()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                           ,0x2e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogContentBundle._0_1_) {
      FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      return;
    }
  }
  else {
    SetState(this,ContentRemovalRequested);
    bVar2 = HasContentToRemove(this);
    if (!bVar2) {
      SetState(this,Registered);
      return;
    }
    this_00 = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
    pUVar3 = (UContentBundleDescriptor *)
             FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
    pTVar4 = UContentBundleEngineSubsystem::FindRegisteredClient(this_00,pUVar3);
    if (pTVar4 == (TSharedPtr<FContentBundleClient,1> *)0x0) {
      if (1 < (byte)LogContentBundle._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      }
    }
    else {
      if (4 < (byte)LogContentBundle._0_1_) {
        FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      }
      if ((pTVar4->Object == (FContentBundleClient *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TMulticastDelegate<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::Broadcast
                (&this_00->OnContentBundleClientRequestedContentRemoval,pTVar4->Object);
    }
  }
  return;
}

// RequestUnregister @ 148a66580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleClient::RequestUnregister(FContentBundleClient *this)

{
  code *pcVar1;
  UEnum *this_00;
  bool bVar2;
  UContentBundleEngineSubsystem *this_01;
  UPackage *pUVar3;
  FText local_18;
  
  if (this->State != Unregistered) {
    (**(code **)(this->_padding_ + 0x30))();
    this_01 = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
    UContentBundleEngineSubsystem::UnregisterContentBundle(this_01,this);
    SetState(this,Unregistered);
    return;
  }
  if (4 < (byte)LogContentBundle._0_1_) {
    if (Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton == (UEnum *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleClientState,(UObject *)pUVar3,
                         L"EContentBundleClientState");
    }
    this_00 = Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton;
    if ((Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UEnum::GetDisplayNameTextByValue(this_00,&local_18,0);
    FText::ToString(&local_18);
    FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetState @ 148a69300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FContentBundleClient::SetState(FContentBundleClient *this,EContentBundleClientState param_1)

{
  EContentBundleClientState EVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  UEnum *pUVar5;
  FString local_48;
  FText local_38;
  FText local_28;
  
  if ((param_1 == this->State) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewState != State",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                         ,0xa6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (5 < (byte)LogContentBundle._0_1_) {
    pUVar5 = Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton;
    if (Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton == (UEnum *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Engine();
      pUVar5 = GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleClientState,(UObject *)pUVar4,
                             L"EContentBundleClientState");
      Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton = pUVar5;
      if ((pUVar5 == (UEnum *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd13,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UEnum::GetDisplayNameTextByValue(pUVar5,&local_28,(longlong)(int)param_1);
    FText::ToString(&local_28);
    EVar1 = this->State;
    pUVar5 = Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton;
    if (Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton == (UEnum *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Engine();
      pUVar5 = GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleClientState,(UObject *)pUVar4,
                             L"EContentBundleClientState");
      Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton = pUVar5;
      if ((pUVar5 == (UEnum *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd13,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UEnum::GetDisplayNameTextByValue(pUVar5,&local_38,(longlong)(int)EVar1);
    FText::ToString(&local_38);
    FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
    ::FString::PrintfImpl(&local_48,L"[CB: %s]");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  this->State = param_1;
  return;
}

// SetWorldContentState @ 148a698c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleClient::SetWorldContentState
          (FContentBundleClient *this,UWorld *param_1,EWorldContentState param_2)

{
  EWorldContentState EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  UEnum *pUVar6;
  UContentBundleDescriptor *pUVar7;
  EWorldContentState *pEVar8;
  longlong lVar9;
  TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,EWorldContentState_const_&> local_res8;
  EWorldContentState local_res18 [2];
  FWeakObjectPtr local_res20;
  UWorld *local_c8;
  FWeakObjectPtr local_c0;
  UWorld *local_b8;
  FString local_b0;
  FString local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FWeakObjectPtr *local_60;
  EWorldContentState *local_58;
  
  local_res18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.Value = (EWorldContentState *)0x0;
  local_c8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.Value,(FObjectPtr)&local_c8);
  local_c0 = (FWeakObjectPtr)local_res8.Value;
  iVar4 = TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    (&this->WorldContentStates,
                     (uint)((ulonglong)local_res8.Value >> 0x20) ^ (uint)local_res8.Value,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_c0);
  if (iVar4 != -1) {
    lVar9 = *(longlong *)&this->WorldContentStates + (longlong)iVar4 * 0x14;
    pEVar8 = (EWorldContentState *)(lVar9 + 8);
    if (lVar9 == 0) {
      pEVar8 = (EWorldContentState *)0x0;
    }
    if (pEVar8 != (EWorldContentState *)0x0) {
      if (5 < (byte)LogContentBundle._0_1_) {
        lVar9 = (longlong)(int)local_res18[0];
        if (Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton == (UEnum *)0x0) {
          pUVar5 = Z_Construct_UPackage__Script_Engine();
          Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton =
               GetStaticEnum(Z_Construct_UEnum_Engine_EWorldContentState,(UObject *)pUVar5,
                             L"EWorldContentState");
        }
        pUVar6 = Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton;
        if ((Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton == (UEnum *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd13,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UEnum::GetDisplayNameTextByValue(pUVar6,&local_80,lVar9);
        FText::ToString(&local_80);
        EVar1 = *pEVar8;
        pUVar6 = Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton;
        if (Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton == (UEnum *)0x0) {
          pUVar5 = Z_Construct_UPackage__Script_Engine();
          pUVar6 = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldContentState,(UObject *)pUVar5,
                                 L"EWorldContentState");
          Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton = pUVar6;
          if ((pUVar6 == (UEnum *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("EnumClass != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xd13,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        UEnum::GetDisplayNameTextByValue(pUVar6,&local_90,(longlong)(int)EVar1);
        FText::ToString(&local_90);
        pUVar7 = (UContentBundleDescriptor *)
                 FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
        ContentBundle::LogPrivate::MakeDebugInfoString(&local_b0,pUVar7,param_1);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_90.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
        }
        if (local_80.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
        }
      }
      *pEVar8 = local_res18[0];
      return;
    }
  }
  if (5 < (byte)LogContentBundle._0_1_) {
    lVar9 = (longlong)(int)local_res18[0];
    if (Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton == (UEnum *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_Engine_EWorldContentState,(UObject *)pUVar5,
                         L"EWorldContentState");
    }
    pUVar6 = Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton;
    if ((Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UEnum::GetDisplayNameTextByValue(pUVar6,&local_70,lVar9);
    FText::ToString(&local_70);
    pUVar7 = (UContentBundleDescriptor *)
             FWeakObjectPtr::Get(&(this->ContentBundleDescriptor).WeakPtr);
    ContentBundle::LogPrivate::MakeDebugInfoString(&local_a0,pUVar7,param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_b8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_b8);
  local_60 = &local_res20;
  local_58 = local_res18;
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,enum_EWorldContentState_const_&>_>
            (&this->WorldContentStates,&local_res8,(bool *)&local_60);
  return;
}

// ShouldInjectContent @ 148a6a180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FContentBundleClient::ShouldInjectContent(FContentBundleClient *this,UWorld *param_1)

{
  EWorldContentState EVar1;
  
  if (this->State == ContentInjectionRequested) {
    EVar1 = GetWorldContentState(this,param_1);
    if (EVar1 == NoContent) {
      return true;
    }
  }
  return false;
}

// ShouldRemoveContent @ 148a6a1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FContentBundleClient::ShouldRemoveContent(FContentBundleClient *this,UWorld *param_1)

{
  EWorldContentState EVar1;
  
  if (this->State != ContentInjectionRequested) {
    EVar1 = GetWorldContentState(this,param_1);
    if (EVar1 != NoContent) {
      return true;
    }
  }
  return false;
}

