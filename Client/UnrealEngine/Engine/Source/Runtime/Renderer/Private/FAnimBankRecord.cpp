// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FAnimBankRecord @ 145665660

FAnimBankRecord * __thiscall
FAnimBankRecord::FAnimBankRecord(FAnimBankRecord *this,FAnimBankRecord *param_1)

{
  FWeakObjectPtr FVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  FVar1 = (param_1->Desc).Asset.WeakPtr;
  (this->Desc).BankAsset.WeakPtr = (param_1->Desc).BankAsset.WeakPtr;
  (this->Desc).Asset.WeakPtr = FVar1;
  fVar2 = (param_1->Desc).Position;
  fVar3 = (param_1->Desc).PlayRate;
  uVar4 = *(undefined4 *)&(param_1->Desc).field_0x1c;
  (this->Desc).SequenceIndex = (param_1->Desc).SequenceIndex;
  (this->Desc).Position = fVar2;
  (this->Desc).PlayRate = fVar3;
  *(undefined4 *)&(this->Desc).field_0x1c = uVar4;
  this->RecordId = param_1->RecordId;
  this->KeyOffset = param_1->KeyOffset;
  this->KeyCount = param_1->KeyCount;
  this->FrameCount = param_1->FrameCount;
  this->ReferenceCount = param_1->ReferenceCount;
  (this->AssetMapping).MeshGlobalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).MeshGlobalRefPose.AllocatorInstance.Data =
       (param_1->AssetMapping).MeshGlobalRefPose.AllocatorInstance.Data;
  (param_1->AssetMapping).MeshGlobalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).MeshGlobalRefPose.ArrayNum =
       (param_1->AssetMapping).MeshGlobalRefPose.ArrayNum;
  (this->AssetMapping).MeshGlobalRefPose.ArrayMax =
       (param_1->AssetMapping).MeshGlobalRefPose.ArrayMax;
  (param_1->AssetMapping).MeshGlobalRefPose.ArrayNum = 0;
  (param_1->AssetMapping).MeshGlobalRefPose.ArrayMax = 0;
  (this->AssetMapping).AnimGlobalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).AnimGlobalRefPose.AllocatorInstance.Data =
       (param_1->AssetMapping).AnimGlobalRefPose.AllocatorInstance.Data;
  (param_1->AssetMapping).AnimGlobalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).AnimGlobalRefPose.ArrayNum =
       (param_1->AssetMapping).AnimGlobalRefPose.ArrayNum;
  (this->AssetMapping).AnimGlobalRefPose.ArrayMax =
       (param_1->AssetMapping).AnimGlobalRefPose.ArrayMax;
  (param_1->AssetMapping).AnimGlobalRefPose.ArrayNum = 0;
  (param_1->AssetMapping).AnimGlobalRefPose.ArrayMax = 0;
  (this->AssetMapping).MeshToAnimIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).MeshToAnimIndexMap.AllocatorInstance.Data =
       (param_1->AssetMapping).MeshToAnimIndexMap.AllocatorInstance.Data;
  (param_1->AssetMapping).MeshToAnimIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AssetMapping).MeshToAnimIndexMap.ArrayNum =
       (param_1->AssetMapping).MeshToAnimIndexMap.ArrayNum;
  (this->AssetMapping).MeshToAnimIndexMap.ArrayMax =
       (param_1->AssetMapping).MeshToAnimIndexMap.ArrayMax;
  (param_1->AssetMapping).MeshToAnimIndexMap.ArrayNum = 0;
  (param_1->AssetMapping).MeshToAnimIndexMap.ArrayMax = 0;
  (this->AssetMapping).RetargetingTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).RetargetingTable.AllocatorInstance.Data =
       (param_1->AssetMapping).RetargetingTable.AllocatorInstance.Data;
  (param_1->AssetMapping).RetargetingTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).RetargetingTable.ArrayNum = (param_1->AssetMapping).RetargetingTable.ArrayNum
  ;
  (this->AssetMapping).RetargetingTable.ArrayMax = (param_1->AssetMapping).RetargetingTable.ArrayMax
  ;
  (param_1->AssetMapping).RetargetingTable.ArrayNum = 0;
  (param_1->AssetMapping).RetargetingTable.ArrayMax = 0;
  (this->AssetMapping).PositionKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).PositionKeys.AllocatorInstance.Data =
       (param_1->AssetMapping).PositionKeys.AllocatorInstance.Data;
  (param_1->AssetMapping).PositionKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).PositionKeys.ArrayNum = (param_1->AssetMapping).PositionKeys.ArrayNum;
  (this->AssetMapping).PositionKeys.ArrayMax = (param_1->AssetMapping).PositionKeys.ArrayMax;
  (param_1->AssetMapping).PositionKeys.ArrayNum = 0;
  (param_1->AssetMapping).PositionKeys.ArrayMax = 0;
  (this->AssetMapping).RotationKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).RotationKeys.AllocatorInstance.Data =
       (param_1->AssetMapping).RotationKeys.AllocatorInstance.Data;
  (param_1->AssetMapping).RotationKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMapping).RotationKeys.ArrayNum = (param_1->AssetMapping).RotationKeys.ArrayNum;
  (this->AssetMapping).RotationKeys.ArrayMax = (param_1->AssetMapping).RotationKeys.ArrayMax;
  (param_1->AssetMapping).RotationKeys.ArrayNum = 0;
  (param_1->AssetMapping).RotationKeys.ArrayMax = 0;
  (this->AssetMapping).BoneCount = (param_1->AssetMapping).BoneCount;
  (this->PositionKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionKeys).AllocatorInstance.Data = (param_1->PositionKeys).AllocatorInstance.Data;
  (param_1->PositionKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionKeys).ArrayNum = (param_1->PositionKeys).ArrayNum;
  (this->PositionKeys).ArrayMax = (param_1->PositionKeys).ArrayMax;
  (param_1->PositionKeys).ArrayNum = 0;
  (param_1->PositionKeys).ArrayMax = 0;
  (this->RotationKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationKeys).AllocatorInstance.Data = (param_1->RotationKeys).AllocatorInstance.Data;
  (param_1->RotationKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationKeys).ArrayNum = (param_1->RotationKeys).ArrayNum;
  (this->RotationKeys).ArrayMax = (param_1->RotationKeys).ArrayMax;
  (param_1->RotationKeys).ArrayNum = 0;
  (param_1->RotationKeys).ArrayMax = 0;
  this->field_0xc0 = (this->Playing ^ param_1->Playing) & 1 ^ this->field_0xc0;
  this->CurrentTime = param_1->CurrentTime;
  this->PreviousTime = param_1->PreviousTime;
  return this;
}

