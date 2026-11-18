// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FDynamicEmitterReplayDataBase @ 1480f65a0

void __thiscall
FDynamicEmitterReplayDataBase::~FDynamicEmitterReplayDataBase(FDynamicEmitterReplayDataBase *this)

{
  this->_padding_ = (longlong)&___7FDynamicEmitterReplayDataBase__6B_;
  FParticleDataContainer::Free(&this->DataContainer);
  return;
}

// Serialize @ 14812e320

void __thiscall
FDynamicEmitterReplayDataBase::Serialize(FDynamicEmitterReplayDataBase *this,FArchive *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  EDynamicEmitterType local_res8 [2];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = this->eEmitterType;
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((EDynamicEmitterType *)plVar4[1] < (EDynamicEmitterType *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(EDynamicEmitterType *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  piVar1 = &this->ActiveParticleCount;
  this->eEmitterType = local_res8[0];
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->ParticleStride;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (((param_1->field_0x28 & 1) == 0) && ((param_1->field_0x2b & 1) == 0)) {
    iVar3 = (this->DataContainer).ParticleDataNumBytes;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,&local_28.AllocatorInstance,&local_28.ArrayNum,&local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,(this->DataContainer).ParticleData,
             (longlong)(this->DataContainer).ParticleDataNumBytes);
    }
    iVar3 = (this->DataContainer).ParticleIndicesNumShorts;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,&local_38.AllocatorInstance,&local_38.ArrayNum,&local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,(this->DataContainer).ParticleIndices,
             (longlong)(this->DataContainer).ParticleIndicesNumShorts * 2);
    }
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_28);
  TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&local_38);
  if ((param_1->field_0x28 & 1) != 0) {
    FParticleDataContainer::Free(&this->DataContainer);
    if (local_28.ArrayNum == 0) {
      if (local_38.ArrayNum != 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ParticleIndices.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                           ,0x4e2,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    else {
      FParticleDataContainer::Alloc(&this->DataContainer,local_28.ArrayNum,local_38.ArrayNum);
      memcpy((this->DataContainer).ParticleData,local_28.AllocatorInstance.Data,
             (longlong)(this->DataContainer).ParticleDataNumBytes);
      iVar3 = (this->DataContainer).ParticleIndicesNumShorts;
      if (iVar3 != 0) {
        memcpy((this->DataContainer).ParticleIndices,local_38.AllocatorInstance.Data,
               (longlong)iVar3 * 2);
      }
    }
  }
  UE::Math::operator<<(param_1,&this->Scale);
  piVar1 = &this->SortMode;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&(this->MacroUVOverride).bOverride);
  pfVar2 = &(this->MacroUVOverride).Radius;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&(this->MacroUVOverride).Position);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

