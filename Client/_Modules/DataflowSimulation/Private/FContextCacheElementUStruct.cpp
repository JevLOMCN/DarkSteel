// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 2

// FContextCacheElementUStruct<FDataflowSimulationTime_const_&> @ 1462ee660

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowSimulationTime_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowSimulationTime *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  UPackage *pUVar6;
  uchar *puVar7;
  FContextCacheElementUStruct *pFVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationTime,(UObject *)pUVar6,
                         L"DataflowSimulationTime");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar7 = (this->InstancedStruct).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar10 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar9 = (int)pUVar4->_padding_ + -1 + uVar10 & -uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    puVar7 = FMemory::Malloc((longlong)(int)uVar9,uVar10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar4;
    (this->InstancedStruct).StructMemory = puVar7;
  }
  if (puVar7 == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FContextCacheElementUStruct *)(*pcVar1)();
      return pFVar8;
    }
  }
  *(undefined8 *)puVar7 = *(undefined8 *)param_3;
  *(float *)(puVar7 + 8) = param_3->TimeOffset;
  return this;
}

// FContextCacheElementUStruct<FDataflowSimulationTime> @ 1462ee7d0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowSimulationTime>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowSimulationTime *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  UPackage *pUVar6;
  uchar *puVar7;
  FContextCacheElementUStruct *pFVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationTime,(UObject *)pUVar6,
                         L"DataflowSimulationTime");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar7 = (this->InstancedStruct).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar10 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar9 = (int)pUVar4->_padding_ + -1 + uVar10 & -uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    puVar7 = FMemory::Malloc((longlong)(int)uVar9,uVar10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar4;
    (this->InstancedStruct).StructMemory = puVar7;
  }
  if (puVar7 == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FContextCacheElementUStruct *)(*pcVar1)();
      return pFVar8;
    }
  }
  *(undefined8 *)puVar7 = *(undefined8 *)param_3;
  *(float *)(puVar7 + 8) = param_3->TimeOffset;
  return this;
}

