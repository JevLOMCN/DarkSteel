// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// StaticStruct @ 1463477b0

UScriptStruct * __cdecl FGeometryCollectionDebugDrawActorSelectedRigidBody::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody
                         ,(UObject *)pUVar1,L"GeometryCollectionDebugDrawActorSelectedRigidBody");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody.
         OuterSingleton;
}

// GetSolverName @ 14637b830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FString * __thiscall
FGeometryCollectionDebugDrawActorSelectedRigidBody::GetSolverName
          (FGeometryCollectionDebugDrawActorSelectedRigidBody *this,FString *__return_storage_ptr__)

{
  AChaosSolverActor *pAVar1;
  FString *pFVar2;
  bool bVar3;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pAVar1 = (this->Solver).field0_0x0.DebugPtr;
  bVar3 = pAVar1 != (AChaosSolverActor *)0x0;
  if (bVar3) {
    local_res10 = (FName)pAVar1->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    pFVar2 = &local_28;
  }
  else {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar2 = ::FName::ToString(&local_res8,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

