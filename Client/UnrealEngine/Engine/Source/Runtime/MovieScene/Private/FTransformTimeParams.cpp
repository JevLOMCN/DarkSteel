// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// AppendBreadcrumbs @ 146192b90

FTransformTimeParams * __thiscall
UE::MovieScene::FTransformTimeParams::AppendBreadcrumbs
          (FTransformTimeParams *this,FMovieSceneTransformBreadcrumbs *param_1)

{
  this->Breadcrumbs = param_1;
  return this;
}

// HarvestBreadcrumbs @ 1461b5360

FTransformTimeParams * __thiscall
UE::MovieScene::FTransformTimeParams::HarvestBreadcrumbs
          (FTransformTimeParams *this,FMovieSceneTransformBreadcrumbs *param_1)

{
  (param_1->Breadcrumbs).ArrayNum = 0;
  if ((param_1->Breadcrumbs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)param_1,0,&(param_1->Breadcrumbs).ArrayMax);
  }
  this->Breadcrumbs = param_1;
  return this;
}

// IgnoreClamps @ 1461b5640

FTransformTimeParams * __thiscall
UE::MovieScene::FTransformTimeParams::IgnoreClamps(FTransformTimeParams *this)

{
  this->bIgnoreClamps = '\x01';
  return this;
}

// TrackCycleCounts @ 1461d7b10

FTransformTimeParams * __thiscall
UE::MovieScene::FTransformTimeParams::TrackCycleCounts
          (FTransformTimeParams *this,TOptional<int> *param_1)

{
  this->CycleCount = param_1;
  return this;
}

