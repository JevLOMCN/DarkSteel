// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 3

// GetData<float> @ 14a719ae0

float * __thiscall
FAnimNode_Base::GetData<float>(FAnimNode_Base *this,FNodeDataId *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  FNodeDataId local_18;
  
  if (this->NodeData == (FAnimNodeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0x3e1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  local_18.Id = param_1->Id;
  local_18.Index = param_1->Index;
  pfVar3 = FAnimNodeData::GetData(this->NodeData,&local_18,this,param_2);
  return pfVar3;
}

// GetData<UE::Math::TVector<double>_> @ 14a719b60

TVector<double> * __thiscall
FAnimNode_Base::GetData<UE::Math::TVector<double>_>
          (FAnimNode_Base *this,FNodeDataId *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  FNodeDataId local_18;
  
  if (this->NodeData == (FAnimNodeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0x3e1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_18.Id = param_1->Id;
  local_18.Index = param_1->Index;
  pTVar3 = FAnimNodeData::GetData(this->NodeData,&local_18,this,param_2);
  return pTVar3;
}

// GetData<bool> @ 14a719be0

bool * __thiscall
FAnimNode_Base::GetData<bool>(FAnimNode_Base *this,FNodeDataId *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  FNodeDataId local_18;
  
  if (this->NodeData == (FAnimNodeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0x3e1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
  }
  local_18.Id = param_1->Id;
  local_18.Index = param_1->Index;
  pbVar3 = FAnimNodeData::GetData(this->NodeData,&local_18,this,param_2);
  return pbVar3;
}

