// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 2

// operator<FGuid,FAnalyticsFlowTracker::FFlowData>_TTuple<FGuid,FAnalyticsFlowTracker::FFlowData> @ 14318f8a0

TTuple<FGuid,FAnalyticsFlowTracker::FFlowData> * __thiscall
TPairInitializer<FGuid_const_&,FAnalyticsFlowTracker::FFlowData_const_&>::
operator<FGuid,FAnalyticsFlowTracker::FFlowData>_TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>
          (TPairInitializer<FGuid_const_&,FAnalyticsFlowTracker::FFlowData_const_&> *this,
          TTuple<FGuid,FAnalyticsFlowTracker::FFlowData> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FFlowData *pFVar3;
  FGuid *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x48;
  pFVar4 = this->Key;
  uVar6 = pFVar4->B;
  uVar7 = pFVar4->C;
  uVar8 = pFVar4->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar4->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar8;
  uVar6 = (pFVar3->FlowName).Number;
  *(uint *)&__return_storage_ptr__->field_0x10 = (pFVar3->FlowName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar6;
  uVar6 = (pFVar3->FlowGuid).B;
  uVar7 = (pFVar3->FlowGuid).C;
  uVar8 = (pFVar3->FlowGuid).D;
  *(uint *)&__return_storage_ptr__->field_0x18 = (pFVar3->FlowGuid).A;
  *(uint *)&__return_storage_ptr__->field_0x1c = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x20 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0x24 = uVar8;
  *(long64 *)&__return_storage_ptr__->field_0x28 = (pFVar3->StartTime).Ticks;
  *(long64 *)&__return_storage_ptr__->field_0x30 = (pFVar3->EndTime).Ticks;
  *(uint *)&__return_storage_ptr__->field_0x38 = pFVar3->ThreadId;
  *(double *)&__return_storage_ptr__->field_0x40 = pFVar3->TimeInSeconds;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->SubFlowDataArray).ArrayNum;
  pFVar5 = (pFVar3->SubFlowDataArray).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x50 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x54 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x54);
    memcpy(*(void **)puVar1,pFVar5,(longlong)iVar2 << 4);
  }
  puVar1 = &__return_storage_ptr__->field_0x58;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->SubFlowDataStack).ArrayNum;
  pFVar5 = (pFVar3->SubFlowDataStack).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x60 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x64 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x64);
    memcpy(*(void **)puVar1,pFVar5,(longlong)iVar2 << 4);
  }
  return __return_storage_ptr__;
}

// operator<FGuid,FAnalyticsFlowTracker::FSubFlowData>_TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData> @ 14318f9d0

TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData> * __thiscall
TPairInitializer<FGuid_const_&,FAnalyticsFlowTracker::FSubFlowData_const_&>::
operator<FGuid,FAnalyticsFlowTracker::FSubFlowData>_TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData>
          (TPairInitializer<FGuid_const_&,FAnalyticsFlowTracker::FSubFlowData_const_&> *this,
          TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FSubFlowData *pFVar3;
  FGuid *pFVar4;
  FAnalyticsEventAttribute *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x68;
  pFVar4 = this->Key;
  uVar6 = pFVar4->B;
  uVar7 = pFVar4->C;
  uVar8 = pFVar4->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar4->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar8;
  uVar6 = (pFVar3->FlowName).Number;
  *(uint *)&__return_storage_ptr__->field_0x10 = (pFVar3->FlowName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar6;
  uVar6 = (pFVar3->FlowGuid).B;
  uVar7 = (pFVar3->FlowGuid).C;
  uVar8 = (pFVar3->FlowGuid).D;
  *(uint *)&__return_storage_ptr__->field_0x18 = (pFVar3->FlowGuid).A;
  *(uint *)&__return_storage_ptr__->field_0x1c = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x20 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0x24 = uVar8;
  uVar6 = (pFVar3->SubFlowName).Number;
  *(uint *)&__return_storage_ptr__->field_0x28 = (pFVar3->SubFlowName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x2c = uVar6;
  uVar6 = (pFVar3->SubFlowGuid).B;
  uVar7 = (pFVar3->SubFlowGuid).C;
  uVar8 = (pFVar3->SubFlowGuid).D;
  *(uint *)&__return_storage_ptr__->field_0x30 = (pFVar3->SubFlowGuid).A;
  *(uint *)&__return_storage_ptr__->field_0x34 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x38 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0x3c = uVar8;
  *(long64 *)&__return_storage_ptr__->field_0x40 = (pFVar3->StartTime).Ticks;
  *(long64 *)&__return_storage_ptr__->field_0x48 = (pFVar3->EndTime).Ticks;
  *(uint *)&__return_storage_ptr__->field_0x50 = pFVar3->ThreadId;
  *(double *)&__return_storage_ptr__->field_0x58 = pFVar3->TimeInSeconds;
  __return_storage_ptr__->field_0x60 = pFVar3->bSuccess;
  *(int *)&__return_storage_ptr__->field_0x64 = pFVar3->ScopeDepth;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->AdditionalEventAttributes).ArrayNum;
  pFVar5 = (FAnalyticsEventAttribute *)(pFVar3->AdditionalEventAttributes).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x70 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x74 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x74);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              (*(void **)puVar1,pFVar5,iVar2);
  }
  return __return_storage_ptr__;
}

