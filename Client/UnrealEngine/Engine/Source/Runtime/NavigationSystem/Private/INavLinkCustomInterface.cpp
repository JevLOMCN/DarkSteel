// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 22

// ~INavLinkCustomInterface @ 146d78b10

void __thiscall INavLinkCustomInterface::~INavLinkCustomInterface(INavLinkCustomInterface *this)

{
  *this = (INavLinkCustomInterface)&___7INavLinkCustomInterface__6B_;
  return;
}

// GetAuxiliaryId @ 146d99940

FNavLinkAuxiliaryId __thiscall
INavLinkCustomInterface::GetAuxiliaryId(INavLinkCustomInterface *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = FNavLinkAuxiliaryId::Invalid.Id;
  return (FNavLinkAuxiliaryId)(ulong64)in_RDX;
}

// GetId @ 146d9b970

FNavLinkId __thiscall INavLinkCustomInterface::GetId(INavLinkCustomInterface *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = FNavLinkId::Invalid.Id;
  return (FNavLinkId)(ulong64)in_RDX;
}

// GetLinkAreaClass @ 146d9c070

TSubclassOf<UNavArea> __thiscall
INavLinkCustomInterface::GetLinkAreaClass(INavLinkCustomInterface *this)

{
  TObjectPtr<UClass> in_RDX;
  
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UNavArea>)in_RDX.field0_0x0;
}

// GetLinkData @ 146d9c090

void __thiscall
INavLinkCustomInterface::GetLinkData
          (INavLinkCustomInterface *this,TVector<double> *param_1,TVector<double> *param_2,
          Type *param_3)

{
  return;
}

// GetLinkId @ 146d9c0c0

uint __thiscall INavLinkCustomInterface::GetLinkId(INavLinkCustomInterface *this)

{
  return (uint)FNavLinkId::Invalid.Id;
}

// GetSupportedAgents @ 146da29d0

void __thiscall
INavLinkCustomInterface::GetSupportedAgents
          (INavLinkCustomInterface *this,FNavAgentSelector *param_1)

{
  return;
}

// HasReachedLinkStart @ 146da3810

bool __thiscall
INavLinkCustomInterface::HasReachedLinkStart
          (INavLinkCustomInterface *this,UObject *param_1,TVector<double> *param_2,
          FNavPathPoint *param_3,FNavPathPoint *param_4)

{
  return true;
}

// IsLinkPathfindingAllowed @ 146da4940

bool __thiscall
INavLinkCustomInterface::IsLinkPathfindingAllowed(INavLinkCustomInterface *this,UObject *param_1)

{
  return true;
}

// IsLinkUsingCustomReachCondition @ 146da4950

bool __thiscall
INavLinkCustomInterface::IsLinkUsingCustomReachCondition
          (INavLinkCustomInterface *this,UObject *param_1)

{
  return false;
}

// OnLinkMoveFinished @ 146da8390

void __thiscall
INavLinkCustomInterface::OnLinkMoveFinished(INavLinkCustomInterface *this,UObject *param_1)

{
  return;
}

// OnLinkMoveStarted @ 146da83a0

bool __thiscall
INavLinkCustomInterface::OnLinkMoveStarted
          (INavLinkCustomInterface *this,UObject *param_1,TVector<double> *param_2)

{
  return false;
}

// UpdateLinkId @ 146dc25e0

void __thiscall INavLinkCustomInterface::UpdateLinkId(INavLinkCustomInterface *this,uint param_1)

{
  return;
}

// UpdateLinkId @ 146dc25f0

void __thiscall
INavLinkCustomInterface::UpdateLinkId(INavLinkCustomInterface *this,FNavLinkId param_1)

{
  return;
}

// _getUObject @ 146dc5710

UObject * __thiscall INavLinkCustomInterface::_getUObject(INavLinkCustomInterface *this)

{
  return (UObject *)0x0;
}

// GetLinkOwner @ 146e078b0

UObject * __thiscall INavLinkCustomInterface::GetLinkOwner(INavLinkCustomInterface *this)

{
  UObject *pUVar1;
  
  if ((this != (INavLinkCustomInterface *)0x0) &&
     (pUVar1 = (UObject *)(**(code **)((longlong)*this + 8))(), pUVar1 != (UObject *)0x0)) {
    return pUVar1;
  }
  return (UObject *)0x0;
}

// GetModifier @ 146e07b70

FNavigationLink * __cdecl
INavLinkCustomInterface::GetModifier
          (FNavigationLink *__return_storage_ptr__,INavLinkCustomInterface *param_1)

{
  int iVar1;
  INavLinkCustomInterface IVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  
  FNavigationLinkBase::FNavigationLinkBase((FNavigationLinkBase *)__return_storage_ptr__);
  pUVar7 = (UClass *)0x0;
  (__return_storage_ptr__->Left).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Left).field0_0x0._s_0.Y = -50.0;
  (__return_storage_ptr__->Left).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Right).field0_0x0._s_0.Y = 50.0;
  IVar2 = *param_1;
  (__return_storage_ptr__->Right).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Right).field0_0x0._s_0.Z = 0.0;
  plVar5 = (longlong *)(**(code **)((longlong)IVar2 + 0x20))(param_1,local_res10);
  lVar3 = *plVar5;
  if ((lVar3 != 0) && (pUVar6 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar6 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar7 = (UClass *)*plVar5;
    }
  }
  FNavigationLinkBase::SetAreaClass((FNavigationLinkBase *)__return_storage_ptr__,pUVar7);
  plVar5 = (longlong *)(**(code **)((longlong)*param_1 + 0x38))(param_1,local_res10);
  __return_storage_ptr__->_padding_ = *plVar5;
  local_res8[0] = 0;
  (**(code **)((longlong)*param_1 + 0x10))
            (param_1,&__return_storage_ptr__->Left,&__return_storage_ptr__->Right,local_res8);
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&__return_storage_ptr__->_padding_);
  *(undefined1 *)&__return_storage_ptr__->_padding_ = (undefined1)local_res8[0];
  return __return_storage_ptr__;
}

// GetUniqueId @ 146e13a00

/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl INavLinkCustomInterface::GetUniqueId(void)

{
  uint uVar1;
  
  if (6 < (byte)LogNavLink._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
  }
  uVar1 = NextUniqueId;
  NextUniqueId = NextUniqueId + 1;
  return uVar1;
}

// OnPreWorldInitialization @ 146e199e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
INavLinkCustomInterface::OnPreWorldInitialization
          (UWorld *param_1,FWorldInitializationValues *param_2)

{
  if (6 < (byte)LogNavLink._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
  }
  NextUniqueId = 1;
  return;
}

// ResetUniqueId @ 146e21ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl INavLinkCustomInterface::ResetUniqueId(void)

{
  if (6 < (byte)LogNavLink._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
  }
  NextUniqueId = 1;
  return;
}

// UpdateUniqueId @ 146e2f070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl INavLinkCustomInterface::UpdateUniqueId(FNavLinkId param_1)

{
  ulonglong uVar1;
  undefined1 local_res8 [32];
  
  if (-1 < (longlong)param_1.Id) {
    if ((6 < (byte)LogNavLink._0_1_) && ((ulonglong)NextUniqueId < param_1.Id + 1)) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
    }
    uVar1 = param_1.Id + 1;
    if (param_1.Id + 1 < (ulonglong)NextUniqueId) {
      uVar1 = (ulonglong)NextUniqueId;
    }
    if (0xffffffff < uVar1) {
      `INavLinkCustomInterface::UpdateUniqueId'::__l5::<lambda_1>::operator()(local_res8);
    }
    NextUniqueId = (uint)uVar1;
  }
  return;
}

// operator() @ 1504fcf40

bool __thiscall `INavLinkCustomInterface::UpdateUniqueId'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8952089275235565862>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8952089275235565862>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

