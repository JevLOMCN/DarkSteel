// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FAnimSequenceDecompressionContext @ 1474b2590

FAnimSequenceDecompressionContext * __thiscall
FAnimSequenceDecompressionContext::FAnimSequenceDecompressionContext
          (FAnimSequenceDecompressionContext *this,FFrameRate *param_1,int param_2,
          EAnimInterpolationType param_3,FName *param_4,ICompressedAnimData *param_5,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *param_7,USkeleton *param_8,
          bool param_9,EAdditiveAnimationType param_10)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FAnimSequenceDecompressionContext *pFVar5;
  
  iVar1 = param_1->Numerator;
  iVar2 = param_1->Denominator;
  this->Interpolation = param_3;
  this->SequenceLength =
       ((float)iVar2 * 0.0 + (float)((longlong)iVar2 * (longlong)param_2)) / (float)iVar1;
  this->AnimName = *param_4;
  this->CompressedAnimData = param_5;
  this->Time = 0.0;
  this->RelativePos = 0.0;
  iVar1 = param_6->ArrayNum;
  (this->RefPoses).DataPtr = (TTransform<double> *)(param_6->AllocatorInstance).Data;
  (this->RefPoses).ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAnimSequenceDecompressionContext *)(*pcVar3)();
      return pFVar5;
    }
  }
  iVar1 = param_7->ArrayNum;
  (this->TrackToSkeletonMap).DataPtr = (FTrackToSkeletonMap *)(param_7->AllocatorInstance).Data;
  (this->TrackToSkeletonMap).ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAnimSequenceDecompressionContext *)(*pcVar3)();
      return pFVar5;
    }
  }
  this->SamplingRate = *param_1;
  this->SourceSkeleton = param_8;
  this->AdditiveType = param_10;
  this->bAdditiveAnimation = param_9;
  (this->SamplingTime).FrameNumber = 0;
  (this->SamplingTime).SubFrame = 0.0;
  this->NumberOfFrames = param_2;
  return this;
}

