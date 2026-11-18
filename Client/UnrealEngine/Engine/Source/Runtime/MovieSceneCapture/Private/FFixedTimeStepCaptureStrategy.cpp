// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 5

// FFixedTimeStepCaptureStrategy @ 146bd72e0

FFixedTimeStepCaptureStrategy * __thiscall
FFixedTimeStepCaptureStrategy::FFixedTimeStepCaptureStrategy
          (FFixedTimeStepCaptureStrategy *this,FFrameRate param_1)

{
  this->FrameRate = param_1;
  this->_padding_ = (longlong)&___7FFixedTimeStepCaptureStrategy__6B_;
  return this;
}

// GetDroppedFrames @ 146bdfff0

int __thiscall
FFixedTimeStepCaptureStrategy::GetDroppedFrames
          (FFixedTimeStepCaptureStrategy *this,double param_1,uint param_2)

{
  return 0;
}

// OnInitialize @ 146be3cf0

void __thiscall FFixedTimeStepCaptureStrategy::OnInitialize(FFixedTimeStepCaptureStrategy *this)

{
  FApp::bUseFixedTimeStep = true;
  FApp::FixedDeltaTime =
       (atomic<double>)((double)(this->FrameRate).Denominator / (double)(this->FrameRate).Numerator)
  ;
  return;
}

// OnStop @ 146be4ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFixedTimeStepCaptureStrategy::OnStop(FFixedTimeStepCaptureStrategy *this)

{
  atomic<double> aVar1;
  LARGE_INTEGER local_res10 [3];
  
  aVar1 = FApp::CurrentTime;
  FApp::bUseFixedTimeStep = false;
  QueryPerformanceCounter(local_res10);
  if ((double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
      __real_4170000000000000 < (double)aVar1) {
    if (2 < (byte)LogTemp._0_1_) {
      QueryPerformanceCounter(local_res10);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    QueryPerformanceCounter(local_res10);
    FApp::CurrentTime =
         (atomic<double>)
         ((double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000);
  }
  return;
}

// ShouldPresent @ 146be8620

bool __thiscall
FFixedTimeStepCaptureStrategy::ShouldPresent
          (FFixedTimeStepCaptureStrategy *this,double param_1,uint param_2)

{
  return true;
}

