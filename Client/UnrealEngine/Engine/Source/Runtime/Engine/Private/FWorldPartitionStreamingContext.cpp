// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FWorldPartitionStreamingContext @ 148ab4740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldPartitionStreamingContext * __thiscall
FWorldPartitionStreamingContext::FWorldPartitionStreamingContext
          (FWorldPartitionStreamingContext *this,UWorld *param_1)

{
  EWorldPartitionDataLayersLogicOperator EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UWorldPartition *pUVar5;
  AWorldDataLayers *this_00;
  FWorldPartitionStreamingContext *pFVar6;
  FWorldDataLayersEffectiveStates *pFVar7;
  
  pUVar5 = UWorld::GetWorldPartition(param_1);
  iVar4 = UWorldPartition::GetUpdateStreamingStateEpoch(pUVar5);
  this_00 = UWorld::GetWorldDataLayers(param_1);
  if (this_00 == (AWorldDataLayers *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWorldDataLayers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\WorldDataLayers.h"
                       ,0x17e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FWorldPartitionStreamingContext *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar7 = AWorldDataLayers::GetEffectiveStates(this_00);
  pUVar5 = UWorld::GetWorldPartition(param_1);
  EVar1 = pUVar5->DataLayersLogicOperator;
  this->DataLayerEffectiveStates = pFVar7;
  this->UpdateStreamingStateEpoch = iVar4;
  this->DataLayersLogicOperator = EVar1;
  this->bIsValid = true;
  return this;
}

// FWorldPartitionStreamingContext @ 148ab47f0

FWorldPartitionStreamingContext * __thiscall
FWorldPartitionStreamingContext::FWorldPartitionStreamingContext
          (FWorldPartitionStreamingContext *this,EWorldPartitionDataLayersLogicOperator param_1,
          FWorldDataLayersEffectiveStates *param_2,int param_3)

{
  this->bIsValid = true;
  this->DataLayersLogicOperator = param_1;
  this->DataLayerEffectiveStates = param_2;
  this->UpdateStreamingStateEpoch = param_3;
  return this;
}

// FWorldPartitionStreamingContext @ 148ab4810

FWorldPartitionStreamingContext * __thiscall
FWorldPartitionStreamingContext::FWorldPartitionStreamingContext
          (FWorldPartitionStreamingContext *this)

{
  this->bIsValid = false;
  this->DataLayersLogicOperator = Or;
  this->DataLayerEffectiveStates = (FWorldDataLayersEffectiveStates *)0x0;
  this->UpdateStreamingStateEpoch = 0;
  return this;
}

// Create @ 148ac2ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldPartitionStreamingContext * __cdecl
FWorldPartitionStreamingContext::Create
          (FWorldPartitionStreamingContext *__return_storage_ptr__,UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UWorldPartition *pUVar4;
  AWorldDataLayers *pAVar5;
  FWorldPartitionStreamingContext *pFVar6;
  FWorldDataLayersEffectiveStates *pFVar7;
  
  if (param_1 != (UWorld *)0x0) {
    pUVar4 = UWorld::GetWorldPartition(param_1);
    if (pUVar4 != (UWorldPartition *)0x0) {
      pAVar5 = UWorld::GetWorldDataLayers(param_1);
      if (pAVar5 != (AWorldDataLayers *)0x0) {
        bVar2 = UWorld::IsGameWorld(param_1);
        if (bVar2) {
          bVar2 = IsInGameThread();
          if (!bVar2) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InWorld->IsGameWorld() || IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                               ,799,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pFVar6 = (FWorldPartitionStreamingContext *)(*pcVar1)();
              return pFVar6;
            }
          }
        }
        pUVar4 = UWorld::GetWorldPartition(param_1);
        iVar3 = UWorldPartition::GetUpdateStreamingStateEpoch(pUVar4);
        pAVar5 = UWorld::GetWorldDataLayers(param_1);
        if (pAVar5 == (AWorldDataLayers *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InWorldDataLayers",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\WorldDataLayers.h"
                             ,0x17e,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FWorldPartitionStreamingContext *)(*pcVar1)();
            return pFVar6;
          }
        }
        pFVar7 = AWorldDataLayers::GetEffectiveStates(pAVar5);
        pUVar4 = UWorld::GetWorldPartition(param_1);
        __return_storage_ptr__->DataLayerEffectiveStates = pFVar7;
        __return_storage_ptr__->UpdateStreamingStateEpoch = iVar3;
        __return_storage_ptr__->DataLayersLogicOperator = pUVar4->DataLayersLogicOperator;
        __return_storage_ptr__->bIsValid = true;
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->DataLayerEffectiveStates = (FWorldDataLayersEffectiveStates *)0x0;
  __return_storage_ptr__->UpdateStreamingStateEpoch = 0;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->DataLayersLogicOperator = Or;
  return __return_storage_ptr__;
}

// ResolveDataLayerRuntimeState @ 148ada380

EDataLayerRuntimeState __thiscall
FWorldPartitionStreamingContext::ResolveDataLayerRuntimeState
          (FWorldPartitionStreamingContext *this,FDataLayerInstanceNames *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  EDataLayerRuntimeState EVar8;
  bool bVar9;
  uint uVar10;
  FName *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<FName_const_,int> local_88;
  TArrayView<FName_const_,int> local_78;
  TArrayView<FName_const_,int> local_68;
  TArrayView<FName_const_,int> local_58;
  undefined4 local_3c;
  undefined4 local_2c;
  
  if ((param_1->DataLayers).ArrayNum == 0) {
    return Activated;
  }
  if ((this->bIsValid == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                         ,0x33f,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    EVar8 = (*pcVar3)();
    return EVar8;
  }
  if ((this->DataLayerEffectiveStates == (FWorldDataLayersEffectiveStates *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataLayerEffectiveStates",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                         ,0x340,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    EVar8 = (*pcVar3)();
    return EVar8;
  }
  if (param_1->bIsFirstDataLayerExternal != false) {
    if (((param_1->DataLayers).ArrayNum == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsFirstDataLayerExternal || !DataLayers.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\DataLayerInstanceNames.h"
                           ,0x24,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    if (param_1->bIsFirstDataLayerExternal != false) {
      if (((param_1->DataLayers).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        EVar8 = (*pcVar3)();
        return EVar8;
      }
      FVar2 = *(FName *)(param_1->DataLayers).AllocatorInstance.Data;
      if (FVar2 != (FName)0x0) {
        EVar8 = FWorldDataLayersEffectiveStates::GetDataLayerEffectiveRuntimeStateByName
                          (this->DataLayerEffectiveStates,FVar2);
        if (EVar8 == Unloaded) {
          return Unloaded;
        }
        goto LAB_148ada4ac;
      }
    }
  }
  EVar8 = Activated;
LAB_148ada4ac:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDataLayerInstanceNames::GetNonExternalDataLayers'::__l2::
           _dynamic_atexit_destructor_for__EmptyArray__);
    _Init_thread_footer(&`public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  bVar7 = param_1->bIsFirstDataLayerExternal == false;
  if (!bVar7) {
    if (((param_1->DataLayers).ArrayNum == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsFirstDataLayerExternal || !DataLayers.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\DataLayerInstanceNames.h"
                           ,0x38,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    bVar7 = param_1->bIsFirstDataLayerExternal == false;
  }
  iVar6 = `public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
          ::__l2::EmptyArray.ArrayNum;
  local_98 = (FName *)`public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
                      ::__l2::EmptyArray.AllocatorInstance.Data;
  iVar1 = (param_1->DataLayers).ArrayNum;
  uVar10 = (uint)!bVar7;
  iStack_90 = iVar1 - uVar10;
  if (iStack_90 < 1) {
    if ((`public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
         ::__l2::EmptyArray.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    uStack_8c = local_2c;
    iStack_90 = iVar6;
    if (iVar6 == 0) {
      return EVar8;
    }
  }
  else {
    if ((iVar1 <= (int)uVar10) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    uStack_8c = local_3c;
    local_98 = (FName *)((param_1->DataLayers).AllocatorInstance.Data + (ulonglong)!bVar7 * 8);
  }
  if (this->DataLayersLogicOperator == Or) {
    uVar5._4_4_ = uStack_8c;
    uVar5._0_4_ = iStack_90;
    local_68.DataPtr = local_98;
    local_68._8_8_ = uVar5;
    bVar7 = UDataLayerManager::IsAnyDataLayerInEffectiveRuntimeState
                      (&local_68,Activated,this->DataLayerEffectiveStates);
    if (!bVar7) {
      local_58.DataPtr = local_98;
      local_58._8_8_ = uVar5;
      bVar7 = UDataLayerManager::IsAnyDataLayerInEffectiveRuntimeState
                        (&local_58,Loaded,this->DataLayerEffectiveStates);
      EVar8 = Unloaded;
      if (bVar7) {
        EVar8 = Loaded;
      }
    }
  }
  else if (this->DataLayersLogicOperator == And) {
    uVar4._4_4_ = uStack_8c;
    uVar4._0_4_ = iStack_90;
    local_88.DataPtr = local_98;
    local_88._8_8_ = uVar4;
    bVar7 = UDataLayerManager::IsAllDataLayerInEffectiveRuntimeState
                      (&local_88,Activated,this->DataLayerEffectiveStates);
    if (!bVar7) {
      local_78.DataPtr = local_98;
      local_78._8_8_ = uVar4;
      bVar7 = UDataLayerManager::IsAllDataLayerInEffectiveRuntimeState
                        (&local_78,Loaded,this->DataLayerEffectiveStates);
      EVar8 = Unloaded;
      if (bVar7) {
        EVar8 = Loaded;
      }
    }
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x367,L"");
    EVar8 = Unloaded;
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
  }
  return EVar8;
}

