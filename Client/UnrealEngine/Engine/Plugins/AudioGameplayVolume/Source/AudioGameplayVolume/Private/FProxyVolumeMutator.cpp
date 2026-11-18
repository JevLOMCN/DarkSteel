// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 10

// FProxyVolumeMutator @ 14d99f1e0

FProxyVolumeMutator * __thiscall FProxyVolumeMutator::FProxyVolumeMutator(FProxyVolumeMutator *this)

{
  FName local_res8 [4];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MutatorName).ComparisonIndex = 0;
  (this->MutatorName).Number = 0;
  this->_padding_ = (longlong)&___7FProxyVolumeMutator__6B_;
  this->Priority = -1;
  this->VolumeID = 0xffffffff;
  this->WorldID = 0xffffffff;
  ::FName::FName(local_res8,L"MutatorBase");
  this->MutatorName = local_res8[0];
  return this;
}

// ~FProxyVolumeMutator @ 14d9a02b0

void __thiscall FProxyVolumeMutator::~FProxyVolumeMutator(FProxyVolumeMutator *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a02d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Apply @ 14d9a2f20

void __thiscall
FProxyVolumeMutator::Apply(FProxyVolumeMutator *this,FAudioProxyActiveSoundParams *param_1)

{
  return;
}

// Apply @ 14d9a2f30

void __thiscall FProxyVolumeMutator::Apply(FProxyVolumeMutator *this,FInteriorSettings *param_1)

{
  param_1->bIsWorldSettings = false;
  return;
}

// Apply @ 14d9a2f40

void __thiscall
FProxyVolumeMutator::Apply(FProxyVolumeMutator *this,FAudioGameplayVolumeListener *param_1)

{
  return;
}

// CheckPriority @ 14d9a34e0

bool __thiscall
FProxyVolumeMutator::CheckPriority(FProxyVolumeMutator *this,FAudioProxyMutatorPriorities *param_1)

{
  int *piVar1;
  
  if ((param_1->bFilterPayload == false) ||
     ((this->PayloadType & param_1->PayloadType) != AGCP_None)) {
    piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)param_1,this->MutatorName);
    if (piVar1 != (int *)0x0) {
      return this->Priority == *piVar1;
    }
  }
  return false;
}

// HasPayloadType @ 14d9a6e10

bool __thiscall
FProxyVolumeMutator::HasPayloadType(FProxyVolumeMutator *this,EComponentPayload param_1)

{
  return (this->PayloadType & param_1) != AGCP_None;
}

// Remove @ 14d9a8c70

void __thiscall
FProxyVolumeMutator::Remove(FProxyVolumeMutator *this,FAudioProxyActiveSoundParams *param_1)

{
  return;
}

// Remove @ 14d9a8c80

void __thiscall
FProxyVolumeMutator::Remove(FProxyVolumeMutator *this,FAudioGameplayVolumeListener *param_1)

{
  return;
}

// UpdatePriority @ 14d9ac220

void __thiscall
FProxyVolumeMutator::UpdatePriority(FProxyVolumeMutator *this,FAudioProxyMutatorPriorities *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 local_res10 [2];
  int local_res18 [4];
  FName *local_28;
  undefined4 *local_20;
  
  if ((param_1->bFilterPayload == false) ||
     ((this->PayloadType & param_1->PayloadType) != AGCP_None)) {
    FVar1 = this->MutatorName;
    local_res10[0] = 0xffffffff;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    uVar2 = uVar2 + FVar1.Number;
    if (*(int *)&(param_1->PriorityMap).field_0x8 != *(int *)&(param_1->PriorityMap).field_0x34) {
      puVar5 = *(undefined1 **)&(param_1->PriorityMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(param_1->PriorityMap).field_0x38;
      }
      iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(param_1->PriorityMap).field_0x48 - 1U & uVar2)
                                * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *(longlong *)&param_1->PriorityMap + (longlong)iVar3 * 0x14;
          if (*(FName *)(*(longlong *)&param_1->PriorityMap + (longlong)iVar3 * 0x14) ==
              this->MutatorName) {
            if (lVar4 != 0) goto LAB_14d9ac2fc;
            break;
          }
          iVar3 = *(int *)(lVar4 + 0xc);
        } while (iVar3 != -1);
      }
    }
    local_20 = local_res10;
    local_28 = &this->MutatorName;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    EmplaceByHash<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)param_1,(uint)local_res18,
               (TPairInitializer<FName_const_&,int_const_&> *)(ulonglong)uVar2,(bool *)&local_28);
    lVar4 = *(longlong *)&param_1->PriorityMap + (longlong)local_res18[0] * 0x14;
LAB_14d9ac2fc:
    if (*(int *)(lVar4 + 8) < this->Priority) {
      *(int *)(lVar4 + 8) = this->Priority;
    }
  }
  return;
}

