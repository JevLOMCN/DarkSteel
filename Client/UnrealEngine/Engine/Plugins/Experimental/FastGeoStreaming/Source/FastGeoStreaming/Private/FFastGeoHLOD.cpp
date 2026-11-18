// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 17

// FFastGeoHLOD @ 14da18770

FFastGeoHLOD * __thiscall FFastGeoHLOD::FFastGeoHLOD(FFastGeoHLOD *this,FFastGeoHLOD *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FFastGeoComponentCluster::FFastGeoComponentCluster
            ((FFastGeoComponentCluster *)this,(FFastGeoComponentCluster *)param_1);
  this->_padding_ = (longlong)&_vftable__for__FFastGeoComponentCluster__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  this->bIsVisible = param_1->bIsVisible;
  this->bRequireWarmup = param_1->bRequireWarmup;
  uVar1 = (param_1->SourceCellGuid).B;
  uVar2 = (param_1->SourceCellGuid).C;
  uVar3 = (param_1->SourceCellGuid).D;
  (this->SourceCellGuid).A = (param_1->SourceCellGuid).A;
  (this->SourceCellGuid).B = uVar1;
  (this->SourceCellGuid).C = uVar2;
  (this->SourceCellGuid).D = uVar3;
  uVar1 = (param_1->StandaloneHLODGuid).B;
  uVar2 = (param_1->StandaloneHLODGuid).C;
  uVar3 = (param_1->StandaloneHLODGuid).D;
  (this->StandaloneHLODGuid).A = (param_1->StandaloneHLODGuid).A;
  (this->StandaloneHLODGuid).B = uVar1;
  (this->StandaloneHLODGuid).C = uVar2;
  (this->StandaloneHLODGuid).D = uVar3;
  uVar1 = (param_1->CustomHLODGuid).B;
  uVar2 = (param_1->CustomHLODGuid).C;
  uVar3 = (param_1->CustomHLODGuid).D;
  (this->CustomHLODGuid).A = (param_1->CustomHLODGuid).A;
  (this->CustomHLODGuid).B = uVar1;
  (this->CustomHLODGuid).C = uVar2;
  (this->CustomHLODGuid).D = uVar3;
  return this;
}

// FFastGeoHLOD @ 14da18800

FFastGeoHLOD * __thiscall
FFastGeoHLOD::FFastGeoHLOD
          (FFastGeoHLOD *this,UFastGeoContainer *param_1,FName param_2,FFastGeoElementType *param_3)

{
  longlong lVar1;
  FFastGeoElementType *pFVar2;
  FName local_res8 [4];
  
  lVar1 = *(longlong *)param_3;
  pFVar2 = param_3->ParentType;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FFastGeoComponentCluster__6B_;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)pFVar2;
  local_res8[0] = param_2;
  ::FName::ToString(local_res8,(FString *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FFastGeoComponentCluster__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bIsVisible = true;
  this->bRequireWarmup = false;
  (this->SourceCellGuid).A = 0;
  (this->SourceCellGuid).B = 0;
  (this->SourceCellGuid).C = 0;
  (this->SourceCellGuid).D = 0;
  (this->StandaloneHLODGuid).A = 0;
  (this->StandaloneHLODGuid).B = 0;
  (this->StandaloneHLODGuid).C = 0;
  (this->StandaloneHLODGuid).D = 0;
  (this->CustomHLODGuid).A = 0;
  (this->CustomHLODGuid).B = 0;
  (this->CustomHLODGuid).C = 0;
  (this->CustomHLODGuid).D = 0;
  return this;
}

// DoesRequireWarmup @ 14da27380

bool __thiscall FFastGeoHLOD::DoesRequireWarmup(FFastGeoHLOD *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 1);
}

// GetAssetsToWarmup @ 14da29860

TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> * __thiscall
FFastGeoHLOD::GetAssetsToWarmup
          (FFastGeoHLOD *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  <lambda_1> local_res8 [4];
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res8[0].AssetsToWarmup = __return_storage_ptr__;
  FFastGeoComponentCluster::
  ForEachComponent<FFastGeoComponentCluster_const_,FFastGeoStaticMeshComponentBase_const_,_FFastGeoHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
            ((FFastGeoComponentCluster *)&this[-1]._padding_,local_res8);
  return __return_storage_ptr__;
}

// GetCustomHLODGuid @ 14da2a3b0

FGuid * __thiscall FFastGeoHLOD::GetCustomHLODGuid(FFastGeoHLOD *this)

{
  return (FGuid *)((longlong)&this->_padding_ + 4);
}

// GetHLODLevel @ 14da2a5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall FFastGeoHLOD::GetHLODLevel(FFastGeoHLOD *this)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  
  if ((*(uint *)(this[-1]._padding_ + 8) & 0x10) == 0) {
    return *(ULevel **)(this[-1]._padding_ + 0x20);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_634665728192020378>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                     ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (ULevel *)(*pcVar1)();
    return pUVar3;
  }
  return (ULevel *)0x0;
}

// GetHLODNameOrLabel @ 14da2a650

FString * __thiscall
FFastGeoHLOD::GetHLODNameOrLabel(FFastGeoHLOD *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(FString *)&this[-1]._padding_);
  return __return_storage_ptr__;
}

// GetSourceCellGuid @ 14da2b840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __thiscall FFastGeoHLOD::GetSourceCellGuid(FFastGeoHLOD *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FGuid *pFVar6;
  IWorldPartitionCell *pIVar7;
  longlong lVar8;
  UClass *pUVar9;
  ULevel *this_00;
  
  pFVar6 = (FGuid *)((longlong)&this->_padding_ + 4);
  if ((((int)this->_padding_ == 0 && *(int *)((longlong)&this->_padding_ + 4) == 0) &&
      (int)this->_padding_ == 0) && pFVar6->A == 0) {
    if ((*(uint *)(this[-1]._padding_ + 8) >> 4 & 1) == 0) {
      this_00 = *(ULevel **)(this[-1]._padding_ + 0x20);
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_634665728192020378>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                         ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FGuid *)(*pcVar2)();
        return pFVar6;
      }
      this_00 = (ULevel *)0x0;
    }
    pIVar7 = ULevel::GetWorldPartitionRuntimeCell(this_00);
    if (pIVar7 != (IWorldPartitionCell *)0x0) {
      lVar8 = (**(code **)((longlong)*pIVar7 + 8))(pIVar7);
      if (lVar8 != 0) {
        pUVar9 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
        iVar1 = (int)pUVar9->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar9->_padding_)) {
          if (*(char *)(lVar8 + 0x59) != '\0') {
            uVar3 = *(undefined8 *)(lVar8 + 0x8c);
            uVar4 = *(undefined8 *)(lVar8 + 0x94);
            pFVar6->A = (int)uVar3;
            pFVar6->B = (int)((ulonglong)uVar3 >> 0x20);
            *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
          }
          return pFVar6;
        }
      }
      return pFVar6;
    }
  }
  return pFVar6;
}

// GetStandaloneHLODGuid @ 14da2b9e0

FGuid * __thiscall FFastGeoHLOD::GetStandaloneHLODGuid(FFastGeoHLOD *this)

{
  return (FGuid *)((longlong)&this->_padding_ + 4);
}

// GetUObject @ 14da2bcb0

UObject * __thiscall FFastGeoHLOD::GetUObject(FFastGeoHLOD *this)

{
  return (UObject *)0x0;
}

// IsCustomHLOD @ 14da2d830

bool __thiscall FFastGeoHLOD::IsCustomHLOD(FFastGeoHLOD *this)

{
  return (((int)this->_padding_ != 0 || *(int *)((longlong)&this->_padding_ + 4) != 0) ||
         (int)this->_padding_ != 0) || *(int *)((longlong)&this->_padding_ + 4) != 0;
}

// IsStandalone @ 14da2e0d0

bool __thiscall FFastGeoHLOD::IsStandalone(FFastGeoHLOD *this)

{
  return (((int)this->_padding_ != 0 || *(int *)((longlong)&this->_padding_ + 4) != 0) ||
         (int)this->_padding_ != 0) || *(int *)((longlong)&this->_padding_ + 4) != 0;
}

// IsVisible @ 14da2e1a0

bool __thiscall FFastGeoHLOD::IsVisible(FFastGeoHLOD *this)

{
  return this->bIsVisible;
}

// OnRegister @ 14da31940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FFastGeoHLOD::OnRegister(FFastGeoHLOD *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  ULevel *pUVar3;
  
  if ((*(uint *)(this->_padding_ + 8) & 0x10) == 0) {
    pUVar3 = *(ULevel **)(this->_padding_ + 0x20);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_634665728192020378>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                       ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar3 = (ULevel *)0x0;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = ULevel::GetWorld(pUVar3);
  this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
  pUVar3 = (ULevel *)&this->_padding_;
  if (this == (FFastGeoHLOD *)0x0) {
    pUVar3 = (ULevel *)0x0;
  }
  UWorldPartitionHLODRuntimeSubsystem::RegisterHLODObject
            (this_01,(IWorldPartitionHLODObject *)pUVar3);
  return;
}

// OnUnregister @ 14da31b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FFastGeoHLOD::OnUnregister(FFastGeoHLOD *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  ULevel *pUVar3;
  
  if ((*(uint *)(this->_padding_ + 8) & 0x10) == 0) {
    pUVar3 = *(ULevel **)(this->_padding_ + 0x20);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_634665728192020378>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                       ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar3 = (ULevel *)0x0;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = ULevel::GetWorld(pUVar3);
  this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
  pUVar3 = (ULevel *)&this->_padding_;
  if (this == (FFastGeoHLOD *)0x0) {
    pUVar3 = (ULevel *)0x0;
  }
  UWorldPartitionHLODRuntimeSubsystem::UnregisterHLODObject
            (this_01,(IWorldPartitionHLODObject *)pUVar3);
  return;
}

// Serialize @ 14da33d50

void __thiscall FFastGeoHLOD::Serialize(FFastGeoHLOD *this,FArchive *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  ::operator<<(param_1,(FString *)&this->_padding_);
  plVar1 = &this->_padding_;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
    }
  }
  else {
    *(undefined4 *)plVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_);
  TArrayPrivateFriend::Serialize<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_);
  TArrayPrivateFriend::Serialize<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_);
  TArrayPrivateFriend::Serialize<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_);
  TArrayPrivateFriend::Serialize<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_);
  ::operator<<(param_1,&this->bRequireWarmup);
  ::operator<<(param_1,&this->SourceCellGuid);
  ::operator<<(param_1,&this->StandaloneHLODGuid);
  ::operator<<(param_1,&this->CustomHLODGuid);
  return;
}

// SetVisibility @ 14da37ea0

void __thiscall FFastGeoHLOD::SetVisibility(FFastGeoHLOD *this,bool param_1)

{
  if ((bool)(char)this->_padding_ != param_1) {
    *(bool *)&this->_padding_ = param_1;
    FFastGeoComponentCluster::UpdateVisibility((FFastGeoComponentCluster *)&this[-1]._padding_);
    return;
  }
  return;
}

