// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// ProcessError @ 14bbce810

bool __cdecl FDS_GameService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveEventAnimControl @ 14bbd1c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FDS_GameService::ReceiveEventAnimControl(ServerMessages *param_1)

{
  longlong lVar1;
  FDS_EntityBase *this;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  EventAnimControlResponseDefaultTypeInternal *pEVar5;
  double dVar6;
  undefined1 auStack_d8 [32];
  EDS_AbilityTagType local_b8 [8];
  ulong64 local_b0;
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x26f) {
    pEVar5 = *(EventAnimControlResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pEVar5 = &server_msg::_EventAnimControlResponse_default_instance_;
  }
  local_b0 = *(ulong64 *)&((Message *)((longlong)pEVar5 + 0x10))->field_0x8;
  this = FDS_EntityBase::GetEntityBase(&local_b0);
  if (this != (FDS_EntityBase *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_EventAnimationAbilityContext_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._8_8_ = pUVar2;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if (*(int *)&((Message *)((longlong)pEVar5 + 0x20))->field_0x8 == 2) {
      lVar1 = *(longlong *)((longlong)pEVar5 + 0x20);
      dVar6 = UDS_TimeUtilManager::GetCurrentServerTime();
      *(undefined4 *)(pUVar2 + 1) = *(undefined4 *)(lVar1 + 0x20);
      *(float *)&pUVar2[1].field_0x4 = (float)(*(double *)(lVar1 + 0x18) - dVar6);
    }
    local_a8[0] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_b8[0] = EventAnim;
    FDS_EntityBase::TryActivateAbility(this,local_b8,(TObjectPtr<UWN_AbilityContext>)local_a8);
  }
  return;
}

