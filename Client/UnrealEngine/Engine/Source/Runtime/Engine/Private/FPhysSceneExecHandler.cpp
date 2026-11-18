// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Exec_Runtime @ 14822a8d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FPhysSceneExecHandler::Exec_Runtime
          (FPhysSceneExecHandler *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FPhysScene_Chaos *this_00;
  UActorComponent *this_01;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar7;
  UClass *pUVar8;
  UWorld *pUVar9;
  longlong lVar10;
  wchar_t *local_res18;
  FName local_58;
  FName local_50;
  FString local_48;
  FString local_38;
  TObjectIterator<UClusterUnionComponent> local_28;
  
  local_res18 = param_2;
  bVar3 = FParse::Command(&local_res18,L"LIST SQ",true);
  if (((bVar3) && (param_1 != (UWorld *)0x0)) &&
     (this_00 = param_1->PhysicsScene, this_00 != (FPhysScene_Chaos *)0x0)) {
    FOutputDevice::Log(param_3,L"----- Begin SQ Listing ----------------------------------------");
    FOutputDevice::Log(param_3,L"----- World SQ         ----------------------------------------");
    local_58 = (FName)param_1->_padding_;
    ::FName::ToString(&local_58,&local_48);
    FOutputDevice::LogfImpl(param_3,L"SQ Data for world %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pIVar7 = FChaosScene::GetSpacialAcceleration((FChaosScene *)this_00);
    (**(code **)(pIVar7->_padding_ + 200))(pIVar7,param_3);
    FOutputDevice::Log(param_3,L"----- Cluster Union SQ ----------------------------------------");
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = UClusterUnionComponent::StaticClass();
    GetObjectsOfClass(pUVar8,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UClusterUnionComponent>::Advance(&local_28);
      lVar10 = (longlong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) break;
      uVar6 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      this_01 = *(UActorComponent **)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
      pUVar9 = this_01->WorldPrivate;
      if (pUVar9 == (UWorld *)0x0) {
        pUVar9 = UActorComponent::GetWorld_Uncached(this_01);
      }
      if (pUVar9 == param_1) {
        local_50 = (FName)this_01->_padding_;
        ::FName::ToString(&local_50,&local_38);
        FOutputDevice::LogfImpl(param_3,L"Inner Acceleration data for Cluster Union Component %s");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        plVar1 = (longlong *)this_01[10].PrimaryComponentTick._padding_;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 200))(plVar1,param_3);
        }
        FOutputDevice::Log(param_3,L"");
      }
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
    FOutputDevice::Log(param_3,L"----- End SQ Listing   ----------------------------------------");
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

