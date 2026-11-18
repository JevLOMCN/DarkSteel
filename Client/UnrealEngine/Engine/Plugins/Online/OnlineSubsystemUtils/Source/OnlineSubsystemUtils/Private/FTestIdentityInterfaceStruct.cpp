// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// FTestIdentityInterfaceStruct @ 14ecad1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTestIdentityInterfaceStruct * __thiscall
FTestIdentityInterfaceStruct::FTestIdentityInterfaceStruct
          (FTestIdentityInterfaceStruct *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  UWorld *pUVar3;
  FTestIdentityInterface *this_00;
  FTestIdentityInterface *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FTestIdentityInterface *pFVar7;
  FDestructionSentinel local_38;
  int *local_20;
  
  pUVar3 = (UWorld *)(**(code **)(GEngine->_padding_ + 0x180))();
  this->CurrentWorld = pUVar3;
  this_00 = ::operator_new(0x30);
  pFVar7 = (FTestIdentityInterface *)0x0;
  pFVar4 = pFVar7;
  if (this_00 != (FTestIdentityInterface *)0x0) {
    ::FString::FString(&this_00->SubsystemName,param_3);
    ::FString::FString((FString *)&this_00->OnlineIdentity,param_1);
    ::FString::FString((FString *)&this_00->OnLoginCompleteDelegate,param_2);
    pFVar4 = this_00;
  }
  this->AccountCredentials = (FOnlineAccountCredentials *)pFVar4;
  pFVar4 = ::operator_new(0xb0);
  if (pFVar4 != (FTestIdentityInterface *)0x0) {
    ::FString::FString(&pFVar4->SubsystemName,param_4);
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pFVar4->OnlineIdentity).Object)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar1 = (int *)&(pFVar4->OnLoginCompleteDelegate).field_0x8;
    (pFVar4->OnlineIdentity).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)piVar1 = 0;
    *(undefined4 *)&(pFVar4->OnLoginCompleteDelegate).field_0x10 = 0;
    *(undefined8 *)&pFVar4->OnLoginCompleteDelegate = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar4->OnLoginCompleteDelegate,(FWriteAccessScope *)&local_38);
    local_20 = piVar1;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)piVar1);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestIdentityInterface____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[4] = FTestIdentityInterface::OnLoginComplete;
      puVar5[3] = pFVar4;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    puVar2 = &(pFVar4->OnLogoutCompleteDelegate).field_0x8;
    *(undefined8 *)&pFVar4->OnLogoutCompleteDelegate = 0;
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)&(pFVar4->OnLogoutCompleteDelegate).field_0x10 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar4->OnLogoutCompleteDelegate,(FWriteAccessScope *)&local_38);
    local_20 = (int *)puVar2;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar2);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestIdentityInterface____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[4] = FTestIdentityInterface::OnLogoutComplete;
      puVar5[3] = pFVar4;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    (pFVar4->OnLoginCompleteDelegateHandle).ID = 0;
    (pFVar4->OnLogoutCompleteDelegateHandle).ID = 0;
    pFVar4->bRunLoginTest = true;
    pFVar4->bRunLogoutTest = false;
    (pFVar4->UserInfo).Object = (FUserOnlineAccount *)0x0;
    (pFVar4->UserInfo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    pFVar4->LocalUserIdx = 0;
    pFVar4->bIsTestFinished = false;
    (pFVar4->AccountCredentials).Type.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->AccountCredentials).Type.Data.ArrayNum = 0;
    (pFVar4->AccountCredentials).Type.Data.ArrayMax = 0;
    (pFVar4->AccountCredentials).Id.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->AccountCredentials).Id.Data.ArrayNum = 0;
    (pFVar4->AccountCredentials).Id.Data.ArrayMax = 0;
    (pFVar4->AccountCredentials).Token.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->AccountCredentials).Token.Data.ArrayNum = 0;
    (pFVar4->AccountCredentials).Token.Data.ArrayMax = 0;
    pFVar7 = pFVar4;
  }
  this->IdentityInterface = pFVar7;
  this->bIsLogoutTest = false;
  this->TestStatus = NotStarted;
  return this;
}

