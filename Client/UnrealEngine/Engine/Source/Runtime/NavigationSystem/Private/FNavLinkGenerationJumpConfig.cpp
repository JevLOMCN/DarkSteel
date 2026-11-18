// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 4

// StaticStruct @ 146dca8b0

UScriptStruct * __cdecl FNavLinkGenerationJumpConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig,(UObject *)pUVar1,
                         L"NavLinkGenerationJumpConfig");
  }
  return Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton;
}

// FNavLinkGenerationJumpConfig @ 146dd3e20

FNavLinkGenerationJumpConfig * __thiscall
FNavLinkGenerationJumpConfig::FNavLinkGenerationJumpConfig(FNavLinkGenerationJumpConfig *this)

{
  UClass *pUVar1;
  
  this->bEnabled = true;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->JumpLength = 150.0;
  this->JumpDistanceFromEdge = 10.0;
  this->JumpMaxDepth = 150.0;
  this->JumpHeight = 50.0;
  this->JumpEndsHeightTolerance = 80.0;
  this->SamplingSeparationFactor = 1.0;
  this->FilterDistanceThreshold = 80.0;
  this->LinkBuilderFlags = 1;
  (this->DownDirectionAreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->UpDirectionAreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LinkProxyClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LinkProxyId).Id = 0;
  (this->LinkProxy).field0_0x0.DebugPtr = (UBaseGeneratedNavLinksProxy *)0x0;
  this->bLinkProxyRegistered = false;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DownDirectionAreaClass).Class.field0_0x0.DebugPtr = pUVar1;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->UpDirectionAreaClass).Class.field0_0x0.DebugPtr = pUVar1;
  return this;
}

// CopyToDetourConfig @ 146de57d0

void __thiscall
FNavLinkGenerationJumpConfig::CopyToDetourConfig
          (FNavLinkGenerationJumpConfig *this,dtNavLinkBuilderJumpConfig *param_1)

{
  UBaseGeneratedNavLinksProxy *pUVar1;
  ulong64 *puVar2;
  undefined1 local_res8 [32];
  
  param_1->enabled = this->bEnabled;
  param_1->jumpLength = this->JumpLength;
  param_1->jumpDistanceFromEdge = this->JumpDistanceFromEdge;
  param_1->jumpMaxDepth = this->JumpMaxDepth;
  param_1->jumpHeight = this->JumpHeight;
  param_1->jumpEndsHeightTolerance = this->JumpEndsHeightTolerance;
  param_1->samplingSeparationFactor = this->SamplingSeparationFactor;
  param_1->filterDistanceThreshold = this->FilterDistanceThreshold;
  param_1->linkBuilderFlags = this->LinkBuilderFlags;
  pUVar1 = (this->LinkProxy).field0_0x0.DebugPtr;
  if (pUVar1 != (UBaseGeneratedNavLinksProxy *)0x0) {
    puVar2 = (ulong64 *)(**(code **)(pUVar1->_padding_ + 0x38))(&pUVar1->_padding_,local_res8);
    param_1->linkUserId = *puVar2;
  }
  return;
}

// Serialize @ 146e22a90

bool __thiscall
FNavLinkGenerationJumpConfig::Serialize(FNavLinkGenerationJumpConfig *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig,(UObject *)pUVar1,
                         L"NavLinkGenerationJumpConfig");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton,param_1,
             &this->bEnabled,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  return true;
}

