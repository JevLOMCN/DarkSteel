// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a4e7590

UScriptStruct * __cdecl FRigUnit_DynamicHierarchyBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DynamicHierarchyBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DynamicHierarchyBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase,(UObject *)pUVar1,
                         L"RigUnit_DynamicHierarchyBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DynamicHierarchyBase.OuterSingleton;
}

// IsValidToRunInContext @ 14a532770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
FRigUnit_DynamicHierarchyBase::IsValidToRunInContext
          (FControlRigExecuteContext *param_1,bool param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    if ((!param_2) ||
       (bVar2 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1), bVar2)) {
      if ((param_1->Hierarchy->Elements).ArrayNum <
          (param_1->UnitContext).HierarchySettings.ProceduralElementLimit) {
        return true;
      }
      if (param_3 != (FString *)0x0) {
        ::FString::operator=
                  (param_3,
                   L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                  );
        return false;
      }
    }
    else if (param_3 != (FString *)0x0) {
      FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_18);
      FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_28);
      ::FString::PrintfImpl(&local_38,L"Node can only run in %s or %s Event");
      if (param_3 != &local_38) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_38.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

