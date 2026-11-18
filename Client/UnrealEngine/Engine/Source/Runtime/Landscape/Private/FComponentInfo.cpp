// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// FComponentInfo @ 145f76d80

FComponentInfo * __thiscall
FLandscapeGrassWeightExporter_RenderThread::FComponentInfo::FComponentInfo
          (FComponentInfo *this,FComponentInfo *param_1)

{
  ULandscapeComponent *pUVar1;
  double dVar2;
  
  pUVar1 = (param_1->Component).field0_0x0.DebugPtr;
  (this->Component).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (ULandscapeComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->RequestedGrassTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestedGrassTypes).AllocatorInstance.Data =
       (param_1->RequestedGrassTypes).AllocatorInstance.Data;
  (param_1->RequestedGrassTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestedGrassTypes).ArrayNum = (param_1->RequestedGrassTypes).ArrayNum;
  (this->RequestedGrassTypes).ArrayMax = (param_1->RequestedGrassTypes).ArrayMax;
  (param_1->RequestedGrassTypes).ArrayNum = 0;
  (param_1->RequestedGrassTypes).ArrayMax = 0;
  dVar2 = (param_1->ViewOffset).field0_0x0._s_0.Y;
  (this->ViewOffset).field0_0x0._s_0.X = (param_1->ViewOffset).field0_0x0._s_0.X;
  (this->ViewOffset).field0_0x0._s_0.Y = dVar2;
  this->PixelOffsetX = param_1->PixelOffsetX;
  this->SceneProxy = param_1->SceneProxy;
  this->NumPasses = param_1->NumPasses;
  this->FirstHeightMipsPassIndex = param_1->FirstHeightMipsPassIndex;
  return this;
}

