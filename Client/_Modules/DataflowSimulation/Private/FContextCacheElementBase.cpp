// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 2

// GetTypedData<FDataflowSimulationTime> @ 1462f0660

FDataflowSimulationTime * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowSimulationTime>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowSimulationTime *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowSimulationTime *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowSimulationTime *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowSimulationTime>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowSimulationTime *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_> @ 1462f0730

TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  UPackage *pUVar5;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar6;
  char *pcVar7;
  undefined8 unaff_RDI;
  int iVar8;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    param_3 = (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B
    ;
    if (this[1].Property == (FProperty *)0x0) {
      return param_3;
    }
    if (Z_Registration_Info_UScriptStruct_FDataflowSimulationProperty.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_DataflowSimulation();
      Z_Registration_Info_UScriptStruct_FDataflowSimulationProperty.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationProperty,(UObject *)pUVar5,
                           L"DataflowSimulationProperty");
    }
    if (Z_Registration_Info_UScriptStruct_FDataflowSimulationProperty.OuterSingleton ==
        (UScriptStruct *)this[1].Property) {
      return param_3;
    }
    iVar8 = 0x201;
    pcVar7 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar8 = 0x24a;
    pcVar7 = "false";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar7,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar8,L"");
  if (!bVar3) {
    return param_3;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

