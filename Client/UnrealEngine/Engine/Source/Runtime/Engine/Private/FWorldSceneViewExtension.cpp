// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FWorldSceneViewExtension @ 14850f950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldSceneViewExtension * __thiscall
FWorldSceneViewExtension::FWorldSceneViewExtension
          (FWorldSceneViewExtension *this,FAutoRegister *param_1,UWorld *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWorldSceneViewExtension *pFVar3;
  UWorld *local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FWorldSceneViewExtension__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_2 == (UWorld *)0x0)) {
    FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
    if (param_2 == (UWorld *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWorld != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneViewExtension.cpp"
                         ,0x2f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FWorldSceneViewExtension *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_2);
    FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  }
  return this;
}

// IsActiveThisFrame_Internal @ 148531eb0

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
FWorldSceneViewExtension::IsActiveThisFrame_Internal
          (FWorldSceneViewExtension *this,FSceneViewExtensionContext *param_1)

{
  FViewportClient *pFVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  if ((param_1->Viewport != (FViewport *)0x0) &&
     (pFVar1 = param_1->Viewport->ViewportClient, pFVar1 != (FViewportClient *)0x0)) {
    pUVar3 = (UWorld *)(**(code **)((longlong)*pFVar1 + 0x30))();
    bVar2 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>(&this->World,pUVar3);
    return bVar2;
  }
  if (param_1->Scene != (FSceneInterface *)0x0) {
    pUVar3 = (UWorld *)(**(code **)(param_1->Scene->_padding_ + 0x410))();
    bVar2 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>(&this->World,pUVar3);
    return bVar2;
  }
  bVar2 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>(&this->World,(UWorld *)0x0)
  ;
  return bVar2;
}

