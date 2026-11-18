// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 1497237c0

UScriptStruct * __cdecl FPCGInteractiveToolWorkingData_PointArrayData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_PointArrayData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_PointArrayData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_PointArrayData,
                         (UObject *)pUVar1,L"PCGInteractiveToolWorkingData_PointArrayData");
  }
  return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_PointArrayData.
         OuterSingleton;
}

// GetPointArrayData @ 1499fa9d0

UPCGPointArrayData * __thiscall
FPCGInteractiveToolWorkingData_PointArrayData::GetPointArrayData
          (FPCGInteractiveToolWorkingData_PointArrayData *this)

{
  return (this->GeneratedPointData).field0_0x0.DebugPtr;
}

// InitializeRuntimeElementData @ 1499fe980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGInteractiveToolWorkingData_PointArrayData::InitializeRuntimeElementData
          (FPCGInteractiveToolWorkingData_PointArrayData *this,FPCGContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UPCGPointArrayData *pUVar3;
  int iVar4;
  UPCGData *pUVar5;
  FPCGDataPtrWrapper *this_00;
  
  iVar4 = (param_1->OutputData).TaggedData.ArrayNum;
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
  }
  pFVar2 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
  (param_1->OutputData).TaggedData.ArrayNum = iVar4 + 1;
  this_00 = (FPCGDataPtrWrapper *)(pFVar2 + (longlong)iVar4 * 0x78);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  pUVar3 = (this->GeneratedPointData).field0_0x0.DebugPtr;
  if (pUVar3 != (UPCGPointArrayData *)0x0) {
    pUVar5 = (UPCGData *)(**(code **)(pUVar3->_padding_ + 0x310))(pUVar3,param_1,1);
    FPCGDataPtrWrapper::operator=(this_00,pUVar5);
  }
  return;
}

// IsValid @ 149a013b0

bool __thiscall
FPCGInteractiveToolWorkingData_PointArrayData::IsValid
          (FPCGInteractiveToolWorkingData_PointArrayData *this)

{
  return (this->GeneratedPointData).field0_0x0.DebugPtr != (UPCGPointArrayData *)0x0;
}

