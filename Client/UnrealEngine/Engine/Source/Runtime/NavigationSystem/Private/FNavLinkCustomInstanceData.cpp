// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 4

// StaticStruct @ 146dc8be0

UScriptStruct * __cdecl FNavLinkCustomInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkCustomInstanceData,(UObject *)pUVar1,
                         L"NavLinkCustomInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton;
}

// ContainsData @ 146dc8c20

bool __thiscall FNavLinkCustomInstanceData::ContainsData(FNavLinkCustomInstanceData *this)

{
  return true;
}

// ApplyToComponent @ 146dc8c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNavLinkCustomInstanceData::ApplyToComponent
          (FNavLinkCustomInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FActorComponentInstanceData::ApplyToComponent((FActorComponentInstanceData *)this,param_1,param_2)
  ;
  if (param_2 == PostUserConstructionScript) {
    if (param_1 == (UActorComponent *)0x0) {
      pFVar5 = GetTypeName<UNavLinkCustomComponent>(&local_38);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar4 = UNavLinkCustomComponent::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UNavLinkCustomComponent>(&local_28);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UActorComponent>(&local_18,param_1);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
    if (this == (FNavLinkCustomInstanceData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NavLinkData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavLinkCustomComponent.cpp"
                         ,0x6e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_1[1].PrimaryComponentTick.Target != (UActorComponent *)(this->CustomLinkId).Id) ||
       (param_1[1].ComponentTags.AllocatorInstance.Data !=
        (FScriptContainerElement *)(this->AuxiliaryCustomLinkId).Id)) {
      if (param_1->bRegistered == 0) {
        param_1[1].ComponentTags.AllocatorInstance.Data =
             (FScriptContainerElement *)(this->AuxiliaryCustomLinkId).Id;
        param_1[1].PrimaryComponentTick.Target = (UActorComponent *)(this->CustomLinkId).Id;
        return;
      }
      UNavigationSystemV1::RequestCustomLinkUnregistering
                ((INavLinkCustomInterface *)&param_1[1].PrimaryComponentTick._padding_,
                 (UObject *)param_1);
      param_1[1].ComponentTags.AllocatorInstance.Data =
           (FScriptContainerElement *)(this->AuxiliaryCustomLinkId).Id;
      param_1[1].PrimaryComponentTick.Target = (UActorComponent *)(this->CustomLinkId).Id;
      UNavigationSystemV1::RequestCustomLinkRegistering
                ((INavLinkCustomInterface *)&param_1[1].PrimaryComponentTick._padding_,
                 (UObject *)param_1);
    }
  }
  return;
}

// ~FNavLinkCustomInstanceData @ 146dd94f0

void __thiscall
FNavLinkCustomInstanceData::~FNavLinkCustomInstanceData(FNavLinkCustomInstanceData *this)

{
  this->_padding_ = (longlong)&___7FInstanceCacheDataBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

