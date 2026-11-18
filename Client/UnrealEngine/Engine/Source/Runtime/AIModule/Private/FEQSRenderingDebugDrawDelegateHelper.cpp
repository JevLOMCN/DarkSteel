// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// DrawDebugLabels @ 146f42ac0

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
FEQSRenderingDebugDrawDelegateHelper::DrawDebugLabels
          (FEQSRenderingDebugDrawDelegateHelper *this,UCanvas *param_1,APlayerController *param_2)

{
  bool bVar1;
  char cVar2;
  
  if ((this->ActorOwner != (AActor *)0x0) &&
     ((bVar1 = UObject::IsSelected((UObject *)this->ActorOwner), bVar1 ||
      (this->bDrawOnlyWhenSelected == 0)))) {
    if ((this->QueryDataSource != (IEQSQueryResultSourceInterface *)0x0) &&
       (cVar2 = (**(code **)((longlong)*this->QueryDataSource + 0x20))(), cVar2 == '\0')) {
      return;
    }
    FDebugDrawDelegateHelper::DrawDebugLabels((FDebugDrawDelegateHelper *)this,param_1,param_2);
  }
  return;
}

