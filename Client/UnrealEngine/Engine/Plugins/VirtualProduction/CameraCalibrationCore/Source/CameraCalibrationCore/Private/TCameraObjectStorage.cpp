// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// BuildObject<UE::Cameras::FLensCalibrationCameraNodeEvaluator> @ 14d68a980

FLensCalibrationCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FLensCalibrationCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLensCalibrationCameraNodeEvaluator *pFVar6;
  FLensCalibrationCameraNodeEvaluator *local_18 [2];
  
  pFVar6 = BuildObjectUninitialized(this,0x30,8);
  *(undefined4 *)((longlong)&pFVar6->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar6->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar6->_padding_ + 7) = 0;
  pFVar6->_padding_ = 7;
  *(undefined1 *)&pFVar6->_padding_ = 1;
  pFVar6->_padding_ = 0;
  pFVar6->_padding_ = (longlong)&___7FLensCalibrationCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar6->LensFile).field0_0x0.DebugPtr = (ULensFile *)0x0;
  (pFVar6->DistortionHandler).field0_0x0.DebugPtr = (ULensDistortionModelHandlerBase *)0x0;
  pFVar2 = (this->ObjectInfos).AllocatorInstance.Data;
  local_18[0] = pFVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->ObjectInfos).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FLensCalibrationCameraNodeEvaluator *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->ObjectInfos).ArrayNum;
  piVar1 = &(this->ObjectInfos).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ObjectInfos).AllocatorInstance,piVar1);
  }
  (this->ObjectInfos).ArrayNum = iVar5 + 1;
  *(FLensCalibrationCameraNodeEvaluator **)
   ((this->ObjectInfos).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

