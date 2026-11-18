// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 2

// StaticStruct @ 148c752c0

UScriptStruct * __cdecl FPendingDelayedSpawn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPendingDelayedSpawn.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FPendingDelayedSpawn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPendingDelayedSpawn,(UObject *)pUVar1,
                         L"PendingDelayedSpawn");
  }
  return Z_Registration_Info_UScriptStruct_FPendingDelayedSpawn.OuterSingleton;
}

// Tick @ 148c9e7a0

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
FPendingDelayedSpawn::Tick(FPendingDelayedSpawn *this,float param_1,AFunctionalAITestBase *param_2)

{
  uint uVar1;
  longlong *plVar2;
  FAITestSpawnInfoBase *pFVar3;
  float fVar4;
  
  if ((this->bFinished == false) && (param_2 != (AFunctionalAITestBase *)0x0)) {
    fVar4 = this->TimeToNextSpawn - param_1;
    this->TimeToNextSpawn = fVar4;
    if (fVar4 <= 0.0) {
      uVar1 = this->SpawnInfoIndex;
      plVar2 = (longlong *)(**(code **)(param_2->_padding_ + 0x900))(param_2,this->SpawnSetIndex);
      if (plVar2 != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,uVar1);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        }
      }
      this->NumberToSpawnLeft = this->NumberToSpawnLeft - 1;
      if (this->NumberToSpawnLeft == 0) {
        this->bFinished = true;
        return;
      }
      pFVar3 = AFunctionalAITestBase::GetSpawnInfo(param_2,this->SpawnSetIndex,this->SpawnInfoIndex)
      ;
      if (pFVar3 != (FAITestSpawnInfoBase *)0x0) {
        this->TimeToNextSpawn = pFVar3->SpawnDelay;
      }
    }
  }
  return;
}

