// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// BuildEvaluator<UE::Cameras::FLensCalibrationCameraNodeEvaluator> @ 14d686ed0

FLensCalibrationCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FLensCalibrationCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FLensCalibrationCameraNodeEvaluator *pFVar4;
  FLensCalibrationCameraNodeEvaluator *local_18 [2];
  
  pFVar4 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x30,8);
  *(undefined4 *)((longlong)&pFVar4->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar4->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar4->_padding_ + 7) = 0;
  pFVar4->_padding_ = 7;
  *(undefined1 *)&pFVar4->_padding_ = 1;
  pFVar4->_padding_ = 0;
  pFVar4->_padding_ = (longlong)&___7FLensCalibrationCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar4->LensFile).field0_0x0.DebugPtr = (ULensFile *)0x0;
  (pFVar4->DistortionHandler).field0_0x0.DebugPtr = (ULensDistortionModelHandlerBase *)0x0;
  local_18[0] = pFVar4;
  if ((*(FLensCalibrationCameraNodeEvaluator ***)&this->field_0x10 <= local_18) &&
     (local_18 <
      *(FLensCalibrationCameraNodeEvaluator ***)&this->field_0x10 + *(int *)&this->field_0x1c)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLensCalibrationCameraNodeEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = *(int *)&this->field_0x18;
  if (iVar3 == *(int *)&this->field_0x1c) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->field_0x10,(int *)&this->field_0x1c);
  }
  *(int *)&this->field_0x18 = iVar3 + 1;
  *(FLensCalibrationCameraNodeEvaluator **)(*(longlong *)&this->field_0x10 + (longlong)iVar3 * 8) =
       local_18[0];
  return pFVar4;
}

