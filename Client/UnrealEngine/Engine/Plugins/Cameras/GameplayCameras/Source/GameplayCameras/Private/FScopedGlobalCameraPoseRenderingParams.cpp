// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// FScopedGlobalCameraPoseRenderingParams @ 14d58e960

FScopedGlobalCameraPoseRenderingParams * __thiscall
UE::Cameras::FScopedGlobalCameraPoseRenderingParams::FScopedGlobalCameraPoseRenderingParams
          (FScopedGlobalCameraPoseRenderingParams *this,FLinearColor *param_1)

{
  int iVar1;
  
  (this->PreviousLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousLabel).Data.ArrayNum = 0;
  (this->PreviousLabel).Data.ArrayMax = 0;
  iVar1 = FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayNum + -1;
  if (FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AssignRange
            (&this->PreviousLabel,
             (wchar_t *)FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.AllocatorInstance.Data,
             iVar1);
  (this->PreviousLineColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0;
  FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0 =
       (FLinearColor_u_0)(FLinearColor_u_0)(param_1->field0_0x0)._s_0;
  return this;
}

// FScopedGlobalCameraPoseRenderingParams @ 14d58e9d0

FScopedGlobalCameraPoseRenderingParams * __thiscall
UE::Cameras::FScopedGlobalCameraPoseRenderingParams::FScopedGlobalCameraPoseRenderingParams
          (FScopedGlobalCameraPoseRenderingParams *this,FString *param_1)

{
  int iVar1;
  
  (this->PreviousLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousLabel).Data.ArrayNum = 0;
  (this->PreviousLabel).Data.ArrayMax = 0;
  iVar1 = FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayNum + -1;
  if (FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AssignRange
            (&this->PreviousLabel,
             (wchar_t *)FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.AllocatorInstance.Data,
             iVar1);
  (this->PreviousLineColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0;
  ::FString::operator=(&FCameraPoseDebugBlock::GlobalCameraPoseLabel,param_1);
  return this;
}

// FScopedGlobalCameraPoseRenderingParams @ 14d58ea40

FScopedGlobalCameraPoseRenderingParams * __thiscall
UE::Cameras::FScopedGlobalCameraPoseRenderingParams::FScopedGlobalCameraPoseRenderingParams
          (FScopedGlobalCameraPoseRenderingParams *this,FString *param_1,FLinearColor *param_2)

{
  int iVar1;
  
  (this->PreviousLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousLabel).Data.ArrayNum = 0;
  (this->PreviousLabel).Data.ArrayMax = 0;
  iVar1 = FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayNum + -1;
  if (FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AssignRange
            (&this->PreviousLabel,
             (wchar_t *)FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.AllocatorInstance.Data,
             iVar1);
  (this->PreviousLineColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0;
  ::FString::operator=(&FCameraPoseDebugBlock::GlobalCameraPoseLabel,param_1);
  FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0 =
       (FLinearColor_u_0)(FLinearColor_u_0)(param_2->field0_0x0)._s_0;
  return this;
}

// ~FScopedGlobalCameraPoseRenderingParams @ 14d591780

void __thiscall
UE::Cameras::FScopedGlobalCameraPoseRenderingParams::~FScopedGlobalCameraPoseRenderingParams
          (FScopedGlobalCameraPoseRenderingParams *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (this->PreviousLabel).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&FCameraPoseDebugBlock::GlobalCameraPoseLabel,
             (wchar_t *)(this->PreviousLabel).Data.AllocatorInstance.Data,iVar3);
  FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0 =
       (FLinearColor_u_0)*(FLinearColor_u_0 *)&(this->PreviousLineColor).field0_0x0._s_0;
  pFVar2 = (this->PreviousLabel).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

