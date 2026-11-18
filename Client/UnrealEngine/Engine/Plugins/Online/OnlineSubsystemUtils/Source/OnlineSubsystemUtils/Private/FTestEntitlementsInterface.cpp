// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 4

// FinishTest @ 14ecb8b90

void __thiscall FTestEntitlementsInterface::FinishTest(FTestEntitlementsInterface *this)

{
  IOnlineEntitlements *pIVar1;
  FScriptContainerElement *pFVar2;
  
  pIVar1 = (this->EntitlementsOSS).Object;
  if (pIVar1 != (IOnlineEntitlements *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x30))(pIVar1,&this->OnQueryEntitlementsCompleteDelegateHandle)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserId).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnQueryEntitlementsCompleteDelegate
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EntitlementsOSS).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->IdentityOSS).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ::operator_delete(this,0x70);
  return;
}

// OnQueryEntitlementsComplete @ 14ecc0a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestEntitlementsInterface::OnQueryEntitlementsComplete
          (FTestEntitlementsInterface *this,bool param_1,FUniqueNetId *param_2,FString *param_3,
          FString *param_4)

{
  IOnlineEntitlements *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TSharedRef<FOnlineEntitlement,1> *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  if (4 < (byte)LogOnlineEntitlement._0_1_) {
    (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_18);
    ::FString::PrintfImpl(&local_38,L"enumerated entitlements. UserId=%s Result=%s Error=[%s]");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineEntitlement);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  uVar6 = 0;
  local_58 = (TSharedRef<FOnlineEntitlement,1> *)0x0;
  local_50 = 0;
  if (((this->EntitlementsOSS).Object == (IOnlineEntitlements *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar1 = (this->EntitlementsOSS).Object;
  local_48 = (void *)0x0;
  local_40 = 0;
  (**(code **)(pIVar1->_padding_ + 0x18))(pIVar1,param_2,&local_48,&local_58);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  while( true ) {
    if (((int)uVar6 < 0) || ((int)local_50 <= (int)uVar6)) {
      this->bQueryEntitlements = false;
      FinishTest(this);
      DestructItems<TSharedRef<FOnlineEntitlement,1>,int>(local_58,(int)local_50);
      if (local_58 != (TSharedRef<FOnlineEntitlement,1> *)0x0) {
        FMemory::Free(local_58);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (int)local_50) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pTVar2 = local_58[(int)uVar6].SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (4 < (byte)LogOnlineEntitlement._0_1_) {
      ::FString::PrintfImpl(&local_28,L"\tentitlement id=%s name=%s");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineEntitlement);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar6 = uVar6 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// StartNextTest @ 14ecc9120

void __thiscall FTestEntitlementsInterface::StartNextTest(FTestEntitlementsInterface *this)

{
  IOnlineEntitlements *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  void *local_18;
  undefined8 local_10;
  
  if (this->bQueryEntitlements == false) {
    FinishTest(this);
    return;
  }
  if ((this->EntitlementsOSS).Object == (IOnlineEntitlements *)0x0) {
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
  pIVar1 = (this->EntitlementsOSS).Object;
  local_resc = 0xffffffff;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x20);
  local_res8 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  if ((this->UserId).Object == (FUniqueNetId *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*pcVar2)(pIVar1,(this->UserId).Object,&local_18,&local_res8);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
    return;
  }
  return;
}

// Test @ 14eccb4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestEntitlementsInterface::Test(FTestEntitlementsInterface *this,UWorld *param_1)

{
  TSharedPtr<IOnlineIdentity,1> *pTVar1;
  TSharedPtr<IOnlineEntitlements,1> *this_00;
  int iVar2;
  IOnlineIdentity *pIVar3;
  FUniqueNetId *pFVar4;
  char cVar5;
  int iVar6;
  FName *pFVar7;
  IOnlineSubsystem *pIVar8;
  undefined8 *puVar9;
  IOnlineEntitlements *pIVar10;
  ulong64 *puVar11;
  FStaticBasicLogRecord *pFVar12;
  FName local_res8;
  FName local_res18;
  FString local_28;
  
  iVar2 = (this->SubsystemName).Data.ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar7 = &local_res8;
  }
  else if (iVar2 == 0) {
    pFVar7 = ::FName::FName(&local_res18,L"",FNAME_Find);
  }
  else {
    pFVar7 = ::FName::FName(&local_res18,
                            (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,FNAME_Find)
    ;
  }
  pIVar8 = IOnlineSubsystem::Get(pFVar7);
  puVar9 = (undefined8 *)(**(code **)(pIVar8->_padding_ + 0x80))(pIVar8,&local_28);
  pTVar1 = &this->IdentityOSS;
  if (pTVar1 != (TSharedPtr<IOnlineIdentity,1> *)puVar9) {
    pTVar1->Object = (IOnlineIdentity *)*puVar9;
    *puVar9 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->IdentityOSS).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_28.Data.ArrayMax,local_28.Data.ArrayNum))
  ;
  pIVar3 = pTVar1->Object;
  if (pIVar3 != (IOnlineIdentity *)0x0) {
    puVar9 = (undefined8 *)
             (**(code **)(pIVar3->_padding_ + 0x110))(pIVar3,&local_28,this->LocalUserIdx);
    if (&this->UserId != (TSharedPtr<FUniqueNetId_const_,1> *)puVar9) {
      (this->UserId).Object = (FUniqueNetId *)*puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UserId).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_28.Data.ArrayMax,local_28.Data.ArrayNum));
  }
  pFVar4 = (this->UserId).Object;
  if ((pFVar4 == (FUniqueNetId *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)pFVar4 + 0x28))(), cVar5 == '\0')) {
    if ((byte)LogOnlineEntitlement._0_1_ < 3) goto LAB_14eccb689;
    ::FString::PrintfImpl(&local_28,L"Entitlement test failed. No logged in user");
    pFVar12 = &::LOG_Static;
  }
  else {
    puVar9 = (undefined8 *)(**(code **)(pIVar8->_padding_ + 0x58))(pIVar8,&local_28);
    this_00 = &this->EntitlementsOSS;
    if (this_00 != (TSharedPtr<IOnlineEntitlements,1> *)puVar9) {
      this_00->Object = (IOnlineEntitlements *)*puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EntitlementsOSS).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1))
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_28.Data.ArrayMax,local_28.Data.ArrayNum));
    if (this_00->Object != (IOnlineEntitlements *)0x0) {
      pIVar10 = TSharedPtr<IOnlineEntitlements,1>::operator->(this_00);
      puVar11 = (ulong64 *)
                (**(code **)(pIVar10->_padding_ + 0x28))
                          (pIVar10,&local_res8,&this->OnQueryEntitlementsCompleteDelegate);
      (this->OnQueryEntitlementsCompleteDelegateHandle).ID = *puVar11;
      StartNextTest(this);
      return;
    }
    if ((byte)LogOnlineEntitlement._0_1_ < 3) goto LAB_14eccb689;
    ::FString::PrintfImpl
              (&local_28,L"Entitlement test failed. Failed to get entitlement service API");
    pFVar12 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LogOnlineEntitlement);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_14eccb689:
  FinishTest(this);
  return;
}

