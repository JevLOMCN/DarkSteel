// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// SpawnActorDeferred<ADS_InstallGuideActor> @ 14b822d50

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
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ADS_InstallGuideActor * __thiscall
UWorld::SpawnActorDeferred<ADS_InstallGuideActor>
          (UWorld *this,UClass *param_1,TTransform<double> *param_2,AActor *param_3,APawn *param_4,
          ESpawnActorCollisionHandlingMethod param_5,ESpawnActorScaleMethod param_6)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  ADS_InstallGuideActor *pAVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_3 != (AActor *)0x0) {
    pUVar4 = AActor::GetWorld(param_3);
    if (this != pUVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("this==Owner->GetWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\World.h"
                         ,0xea2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pAVar5 = (ADS_InstallGuideActor *)(*pcVar2)();
        return pAVar5;
      }
    }
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
  local_a8[0x32] = local_a8[0x32] | 4;
  local_a8[0x30] = param_5;
  local_a8[0x31] = param_6;
  local_a8._24_8_ = param_4;
  local_a8._16_8_ = param_3;
  if (param_1 != (UClass *)0x0) {
    pAVar5 = (ADS_InstallGuideActor *)
             SpawnActor(this,param_1,param_2,(FActorSpawnParameters *)local_a8);
    if (pAVar5 != (ADS_InstallGuideActor *)0x0) {
      pUVar6 = Z_Construct_UClass_ADS_InstallGuideActor_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) goto LAB_14b822e32;
    }
  }
  pAVar5 = (ADS_InstallGuideActor *)0x0;
LAB_14b822e32:
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return pAVar5;
}

// GetSubsystem<UDS_InteractiveWorldSubsystem> @ 14b993fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_InteractiveWorldSubsystem * __thiscall
UWorld::GetSubsystem<UDS_InteractiveWorldSubsystem>(UWorld *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_InteractiveWorldSubsystem *pUVar5;
  
  pUVar3 = Z_Construct_UClass_UDS_InteractiveWorldSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14b994012;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14b994012:
    pUVar4 = Z_Construct_UClass_UDS_InteractiveWorldSubsystem_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14b994042;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14b994042:
  pUVar5 = (UDS_InteractiveWorldSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetSubsystem<UDS_SoundManager> @ 14bba3ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_SoundManager * __thiscall UWorld::GetSubsystem<UDS_SoundManager>(UWorld *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_SoundManager *pUVar5;
  
  pUVar3 = Z_Construct_UClass_UDS_SoundManager_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14bba3af2;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14bba3af2:
    pUVar4 = Z_Construct_UClass_UDS_SoundManager_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14bba3b22;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14bba3b22:
  pUVar5 = (UDS_SoundManager *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar3);
  return pUVar5;
}

