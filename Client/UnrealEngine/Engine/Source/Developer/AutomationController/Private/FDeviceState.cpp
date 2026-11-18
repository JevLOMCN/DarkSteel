// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 1

// FDeviceState @ 148c53900

FDeviceState * __thiscall
FAutomationDeviceClusterManager::FDeviceState::FDeviceState
          (FDeviceState *this,FMessageAddress *param_1,FAutomationWorkerFindWorkersResponse *param_2
          )

{
  atomic<int> *paVar1;
  TSharedPtr<IAutomationReport,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_18 [2];
  
  uVar5 = (param_1->UniqueId).A;
  uVar6 = (param_1->UniqueId).B;
  uVar7 = (param_1->UniqueId).C;
  uVar8 = (param_1->UniqueId).D;
  (this->Info).DeviceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->Report;
  (this->Info).DeviceName.Data.ArrayNum = 0;
  (this->Info).DeviceName.Data.ArrayMax = 0;
  pTVar2->Object = (IAutomationReport *)0x0;
  (this->Report).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Info).Instance.A = 0;
  (this->Info).Instance.B = 0;
  (this->Info).Instance.C = 0;
  (this->Info).Instance.D = 0;
  (this->Info).InstanceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).InstanceName.Data.ArrayNum = 0;
  (this->Info).InstanceName.Data.ArrayMax = 0;
  (this->Info).Platform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).Platform.Data.ArrayNum = 0;
  (this->Info).Platform.Data.ArrayMax = 0;
  (this->Info).OSVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).OSVersion.Data.ArrayNum = 0;
  (this->Info).OSVersion.Data.ArrayMax = 0;
  (this->Info).Model.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).Model.Data.ArrayNum = 0;
  (this->Info).Model.Data.ArrayMax = 0;
  (this->Info).GPU.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).GPU.Data.ArrayNum = 0;
  (this->Info).GPU.Data.ArrayMax = 0;
  (this->Info).CPUModel.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).CPUModel.Data.ArrayNum = 0;
  (this->Info).CPUModel.Data.ArrayMax = 0;
  (this->Info).RAMInGB = 0;
  (this->Info).RenderMode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).RenderMode.Data.ArrayNum = 0;
  (this->Info).RenderMode.Data.ArrayMax = 0;
  (this->Info).RHI.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).RHI.Data.ArrayNum = 0;
  (this->Info).RHI.Data.ArrayMax = 0;
  (this->Info).AppInstanceLog.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).AppInstanceLog.Data.ArrayNum = 0;
  (this->Info).AppInstanceLog.Data.ArrayMax = 0;
  (this->DeviceMessageAddress).UniqueId.A = uVar5;
  (this->DeviceMessageAddress).UniqueId.B = uVar6;
  (this->DeviceMessageAddress).UniqueId.C = uVar7;
  (this->DeviceMessageAddress).UniqueId.D = uVar8;
  ::FString::operator=(&(this->Info).DeviceName,&param_2->DeviceName);
  ::FString::operator=(&(this->Info).Platform,&param_2->Platform);
  ::FString::operator=(&(this->Info).OSVersion,&param_2->OSVersionName);
  ::FString::operator=(&(this->Info).Model,&param_2->ModelName);
  ::FString::operator=(&(this->Info).GPU,&param_2->GPUName);
  ::FString::operator=(&(this->Info).CPUModel,&param_2->CPUModelName);
  (this->Info).RAMInGB = param_2->RAMInGB;
  ::FString::operator=(&(this->Info).RenderMode,&param_2->RenderModeName);
  ::FString::operator=(&(this->Info).RHI,&param_2->RHIName);
  uVar9 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar10 = *(undefined4 *)&param_2->_padding_;
  uVar11 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  (this->Info).Instance.A = *(undefined4 *)&param_2->_padding_;
  (this->Info).Instance.B = uVar9;
  (this->Info).Instance.C = uVar10;
  (this->Info).Instance.D = uVar11;
  ::FString::operator=(&(this->Info).InstanceName,&param_2->InstanceName);
  if (pTVar2 != (TSharedPtr<IAutomationReport,1> *)local_18) {
    pTVar2->Object = (IAutomationReport *)0x0;
    pTVar4 = (this->Report).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      (this->Report).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)();
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->IsDeviceAvailable = true;
  return this;
}

