// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149d75c60

UScriptStruct * __cdecl FPCGMeshInstanceList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGMeshInstanceList.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGMeshInstanceList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGMeshInstanceList,(UObject *)pUVar1,
                         L"PCGMeshInstanceList");
  }
  return Z_Registration_Info_UScriptStruct_FPCGMeshInstanceList.OuterSingleton;
}

// FPCGMeshInstanceList @ 149e353e0

FPCGMeshInstanceList * __thiscall
FPCGMeshInstanceList::FPCGMeshInstanceList(FPCGMeshInstanceList *this,FPCGMeshInstanceList *param_1)

{
  FSoftISMComponentDescriptor::FSoftISMComponentDescriptor
            ((FSoftISMComponentDescriptor *)this,(FSoftISMComponentDescriptor *)param_1);
  (this->Descriptor)._padding_ = (longlong)&___7FPCGSoftISMComponentDescriptor__6B_;
  (this->Descriptor).ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptor).ComponentTags.AllocatorInstance.Data =
       (param_1->Descriptor).ComponentTags.AllocatorInstance.Data;
  (param_1->Descriptor).ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptor).ComponentTags.ArrayNum = (param_1->Descriptor).ComponentTags.ArrayNum;
  (this->Descriptor).ComponentTags.ArrayMax = (param_1->Descriptor).ComponentTags.ArrayMax;
  (param_1->Descriptor).ComponentTags.ArrayNum = 0;
  (param_1->Descriptor).ComponentTags.ArrayMax = 0;
  (this->Descriptor).AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Descriptor).AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data =
       (param_1->Descriptor).AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data;
  (param_1->Descriptor).AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Descriptor).AdditionalCommaSeparatedTags.Data.ArrayNum =
       (param_1->Descriptor).AdditionalCommaSeparatedTags.Data.ArrayNum;
  (this->Descriptor).AdditionalCommaSeparatedTags.Data.ArrayMax =
       (param_1->Descriptor).AdditionalCommaSeparatedTags.Data.ArrayMax;
  (param_1->Descriptor).AdditionalCommaSeparatedTags.Data.ArrayNum = 0;
  (param_1->Descriptor).AdditionalCommaSeparatedTags.Data.ArrayMax = 0;
  (this->Instances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instances).AllocatorInstance.Data = (param_1->Instances).AllocatorInstance.Data;
  (param_1->Instances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instances).ArrayNum = (param_1->Instances).ArrayNum;
  (this->Instances).ArrayMax = (param_1->Instances).ArrayMax;
  (param_1->Instances).ArrayNum = 0;
  (param_1->Instances).ArrayMax = 0;
  this->AttributePartitionIndex = param_1->AttributePartitionIndex;
  (this->PointData).WeakPtr = (param_1->PointData).WeakPtr;
  (this->InstancesIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancesIndices).AllocatorInstance.Data =
       (param_1->InstancesIndices).AllocatorInstance.Data;
  (param_1->InstancesIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancesIndices).ArrayNum = (param_1->InstancesIndices).ArrayNum;
  (this->InstancesIndices).ArrayMax = (param_1->InstancesIndices).ArrayMax;
  (param_1->InstancesIndices).ArrayNum = 0;
  (param_1->InstancesIndices).ArrayMax = 0;
  return this;
}

