// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_> @ 1477e9930

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_> * __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_> *this,
          FSQHitBuffer<ChaosInterface::FOverlapHit> *param_1,FCollisionQueryFilterCallback *param_2,
          FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *this_00;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FOverlapHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQHitBuffer<ChaosInterface::FOverlapHit> *)0x0;
  this->RepeatBuffer = (FSQHitBuffer<ChaosInterface::FOverlapHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x1c58);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FOverlapHit> *)0x0) {
      pFVar6 = ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::
               FSQHitBuffer<ChaosInterface::FOverlapHit>(this_00,this->UserBuffer);
    }
    this->OriginalBuffer = pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_> @ 1477e9a90

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_> * __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>
           *this,FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_1,
          FCollisionQueryFilterCallback *param_2,FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *this_00;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FPTOverlapHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQHitBuffer<ChaosInterface::FPTOverlapHit> *)0x0;
  this->RepeatBuffer = (FSQHitBuffer<ChaosInterface::FPTOverlapHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x1c58);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FPTOverlapHit> *)0x0) {
      pFVar6 = ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::
               FSQHitBuffer<ChaosInterface::FPTOverlapHit>(this_00,this->UserBuffer);
    }
    this->OriginalBuffer = pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_> @ 1477e9bf0

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_> * __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>
           *this,FSQHitBuffer<ChaosInterface::FPTRaycastHit> *param_1,
          FCollisionQueryFilterCallback *param_2,FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FPTRaycastHit> *this_00;
  FSQHitBuffer<ChaosInterface::FPTRaycastHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0;
  this->RepeatBuffer = (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x40a0);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0) {
      pFVar6 = ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>::
               FSQHitBuffer<ChaosInterface::FPTRaycastHit>(this_00,this->UserBuffer);
    }
    this->OriginalBuffer = pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_> @ 1477e9d50

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_> * __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_> *this,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_1,FCollisionQueryFilterCallback *param_2,
          FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *this_00;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FPTSweepHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQHitBuffer<ChaosInterface::FPTSweepHit> *)0x0;
  this->RepeatBuffer = (FSQHitBuffer<ChaosInterface::FPTSweepHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x3c98);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FPTSweepHit> *)0x0) {
      pFVar6 = ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>::
               FSQHitBuffer<ChaosInterface::FPTSweepHit>(this_00,this->UserBuffer);
    }
    this->OriginalBuffer = pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_> @ 1477e9eb0

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_> * __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_> *this,
          FSQHitBuffer<ChaosInterface::FRaycastHit> *param_1,FCollisionQueryFilterCallback *param_2,
          FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FRaycastHit> *this_00;
  FSQHitBuffer<ChaosInterface::FRaycastHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FRaycastHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQHitBuffer<ChaosInterface::FRaycastHit> *)0x0;
  this->RepeatBuffer = (FSQHitBuffer<ChaosInterface::FRaycastHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x40a0);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FRaycastHit> *)0x0) {
      pFVar6 = ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>::
               FSQHitBuffer<ChaosInterface::FRaycastHit>(this_00,this->UserBuffer);
    }
    this->OriginalBuffer = pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_> @ 1477ea010

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_> * __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_> *this,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_1,FCollisionQueryFilterCallback *param_2,
          FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FSweepHit> *this_00;
  FSQHitBuffer<ChaosInterface::FSweepHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FSweepHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQHitBuffer<ChaosInterface::FSweepHit> *)0x0;
  this->RepeatBuffer = (FSQHitBuffer<ChaosInterface::FSweepHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x3c98);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FSweepHit> *)0x0) {
      pFVar6 = ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>::
               FSQHitBuffer<ChaosInterface::FSweepHit>(this_00,this->UserBuffer);
    }
    this->OriginalBuffer = pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_> @ 1477ea170

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_> *
__thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>
           *this,FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit> *param_1,
          FCollisionQueryFilterCallback *param_2,FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FPTRaycastHit> *this_00;
  FSQHitBuffer<ChaosInterface::FPTRaycastHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0;
  this->RepeatBuffer = (FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x40a0);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0) {
      ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>::
      FSQHitBuffer<ChaosInterface::FPTRaycastHit>
                (this_00,(FSQHitBuffer<ChaosInterface::FPTRaycastHit> *)this->UserBuffer);
      this_00->_padding_ =
           (longlong)&___7__FSQSingleHitBuffer_UFPTRaycastHit_ChaosInterface___ChaosInterface__6B_;
      pFVar6 = this_00;
    }
    this->OriginalBuffer = (FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit> *)pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_> @ 1477ea2e0

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_> *
__thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>
           *this,FSQSingleHitBuffer<ChaosInterface::FPTSweepHit> *param_1,
          FCollisionQueryFilterCallback *param_2,FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *this_00;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FPTSweepHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQSingleHitBuffer<ChaosInterface::FPTSweepHit> *)0x0;
  this->RepeatBuffer = (FSQSingleHitBuffer<ChaosInterface::FPTSweepHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x3c98);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FPTSweepHit> *)0x0) {
      ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>::
      FSQHitBuffer<ChaosInterface::FPTSweepHit>
                (this_00,(FSQHitBuffer<ChaosInterface::FPTSweepHit> *)this->UserBuffer);
      this_00->_padding_ =
           (longlong)&___7__FSQSingleHitBuffer_UFPTSweepHit_ChaosInterface___ChaosInterface__6B_;
      pFVar6 = this_00;
    }
    this->OriginalBuffer = (FSQSingleHitBuffer<ChaosInterface::FPTSweepHit> *)pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_> @ 1477ea450

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_> *
__thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>
           *this,FSQSingleHitBuffer<ChaosInterface::FRaycastHit> *param_1,
          FCollisionQueryFilterCallback *param_2,FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FRaycastHit> *this_00;
  FSQHitBuffer<ChaosInterface::FRaycastHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FRaycastHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQSingleHitBuffer<ChaosInterface::FRaycastHit> *)0x0;
  this->RepeatBuffer = (FSQSingleHitBuffer<ChaosInterface::FRaycastHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x40a0);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FRaycastHit> *)0x0) {
      ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>::
      FSQHitBuffer<ChaosInterface::FRaycastHit>
                (this_00,(FSQHitBuffer<ChaosInterface::FRaycastHit> *)this->UserBuffer);
      this_00->_padding_ =
           (longlong)&___7__FSQSingleHitBuffer_UFRaycastHit_ChaosInterface___ChaosInterface__6B_;
      pFVar6 = this_00;
    }
    this->OriginalBuffer = (FSQSingleHitBuffer<ChaosInterface::FRaycastHit> *)pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_> @ 1477ea5c0

/* WARNING: Type propagation algorithm not settling */

FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_> * __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>::
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>
           *this,FSQSingleHitBuffer<ChaosInterface::FSweepHit> *param_1,
          FCollisionQueryFilterCallback *param_2,FHitchDetectionInfo *param_3)

{
  double dVar1;
  FCollisionQueryParams *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  FSQHitBuffer<ChaosInterface::FSweepHit> *this_00;
  FSQHitBuffer<ChaosInterface::FSweepHit> *pFVar6;
  LARGE_INTEGER local_res8;
  
  pFVar6 = (FSQHitBuffer<ChaosInterface::FSweepHit> *)0x0;
  this->HitchDuration = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->HitchTimer).Accumulator = &this->HitchDuration;
  (this->HitchTimer).StartTime = dVar1 + __real_4170000000000000;
  this->LoopCounter = 0;
  this->UserBuffer = param_1;
  this->OriginalBuffer = (FSQSingleHitBuffer<ChaosInterface::FSweepHit> *)0x0;
  this->RepeatBuffer = (FSQSingleHitBuffer<ChaosInterface::FSweepHit> *)0x0;
  this->QueryCallback = param_2;
  dVar1 = (param_3->Start).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.X;
  (this->HitchDetectionInfo).Start.field0_0x0._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->End).field0_0x0._s_0.Z;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  (this->HitchDetectionInfo).End.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->Pose).Rotation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[0] =
       (param_3->Pose).Rotation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Rotation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[0] =
       (param_3->Pose).Rotation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[0] =
       (param_3->Pose).Translation.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Translation.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[0] =
       (param_3->Pose).Translation.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.XY.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[0] = (param_3->Pose).Scale3D.XY.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Pose).Scale3D.ZW.m128d_f64[1];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[0] = (param_3->Pose).Scale3D.ZW.m128d_f64[0];
  (this->HitchDetectionInfo).Pose.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar4 = *(undefined4 *)&param_3->field_0x94;
  pFVar2 = param_3->Params;
  (this->HitchDetectionInfo).TraceChannel = param_3->TraceChannel;
  *(undefined4 *)&(this->HitchDetectionInfo).field_0x94 = uVar4;
  (this->HitchDetectionInfo).Params = pFVar2;
  uVar5 = *(undefined7 *)&param_3->field_0xa1;
  uVar3 = *(undefined8 *)&param_3->field_0xa8;
  (this->HitchDetectionInfo).bInTM = param_3->bInTM;
  *(undefined7 *)&(this->HitchDetectionInfo).field_0xa1 = uVar5;
  *(undefined8 *)&(this->HitchDetectionInfo).field_0xa8 = uVar3;
  if (FSQHitchRepeaterCVars::SQHitchDetection != 0) {
    this_00 = ::operator_new(0x3c98);
    if (this_00 != (FSQHitBuffer<ChaosInterface::FSweepHit> *)0x0) {
      ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>::
      FSQHitBuffer<ChaosInterface::FSweepHit>
                (this_00,(FSQHitBuffer<ChaosInterface::FSweepHit> *)this->UserBuffer);
      this_00->_padding_ =
           (longlong)&___7__FSQSingleHitBuffer_UFSweepHit_ChaosInterface___ChaosInterface__6B_;
      pFVar6 = this_00;
    }
    this->OriginalBuffer = (FSQSingleHitBuffer<ChaosInterface::FSweepHit> *)pFVar6;
    QueryPerformanceCounter(&local_res8);
    (this->HitchTimer).StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return this;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_> @ 1477f0e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FOverlapHit> *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FOverlapHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f0fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar5->_padding_)(pFVar5,1);
    return;
  }
  return;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_> @ 1477f0fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FPTOverlapHit> *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FPTOverlapHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f1168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar5->_padding_)(pFVar5,1);
    return;
  }
  return;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_> @ 1477f1180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQHitBuffer<ChaosInterface::FPTRaycastHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f1318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar5->_padding_)(pFVar5,1);
    return;
  }
  return;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_> @ 1477f1330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FPTSweepHit> *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FPTSweepHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f14c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar5->_padding_)(pFVar5,1);
    return;
  }
  return;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_> @ 1477f14e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQHitBuffer<ChaosInterface::FRaycastHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FRaycastHit> *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FRaycastHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f1678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar5->_padding_)(pFVar5,1);
    return;
  }
  return;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_> @ 1477f1690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQHitBuffer<ChaosInterface::FSweepHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FSweepHit> *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQHitBuffer<ChaosInterface::FSweepHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f1828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar5->_padding_)(pFVar5,1);
    return;
  }
  return;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_> @ 1477f1840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0) {
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQSingleHitBuffer<ChaosInterface::FPTRaycastHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f19d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    return;
  }
  return;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_> @ 1477f19f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQSingleHitBuffer<ChaosInterface::FPTSweepHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FPTSweepHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQSingleHitBuffer<ChaosInterface::FPTSweepHit> *)0x0) {
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQSingleHitBuffer<ChaosInterface::FPTSweepHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f1b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    return;
  }
  return;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_> @ 1477f1ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQSingleHitBuffer<ChaosInterface::FRaycastHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FRaycastHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQSingleHitBuffer<ChaosInterface::FRaycastHit> *)0x0) {
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQSingleHitBuffer<ChaosInterface::FRaycastHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f1d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    return;
  }
  return;
}

// ~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_> @ 1477f1d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>::
~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>
          (FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCollisionQueryFilterCallback *pFVar4;
  FSQSingleHitBuffer<ChaosInterface::FSweepHit> *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (this->QueryCallback->bRecordHitches != false) {
    if ((2 < (byte)LogCollision._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCollision),
       2 < (byte)LogCollision._0_1_)) {
      FHitchDetectionInfo::ToString(&this->HitchDetectionInfo,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>(void)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = this->QueryCallback;
    iVar3 = (pFVar4->PreFilterHitchInfo).ArrayNum;
    pFVar6 = (pFVar4->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->PreFilterHitchInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCollisionQueryFilterCallback::FPreFilterRecord,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (2 < (byte)LogCollision._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>::~FScopedSQHitchRepeater<ChaosInterface::FSQSingleHitBuffer<ChaosInterface::FSweepHit>_>(void)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogCollision);
      }
      pFVar6 = pFVar6 + 0x18;
    }
    pFVar4 = this->QueryCallback;
    DestructItems<FCollisionQueryFilterCallback::FPreFilterRecord,int>
              ((FPreFilterRecord *)(pFVar4->PreFilterHitchInfo).AllocatorInstance.Data,
               (pFVar4->PreFilterHitchInfo).ArrayNum);
    piVar1 = &(pFVar4->PreFilterHitchInfo).ArrayMax;
    (pFVar4->PreFilterHitchInfo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pFVar4->PreFilterHitchInfo).AllocatorInstance,0,piVar1);
    }
  }
  this->QueryCallback->bRecordHitches = false;
  pFVar5 = this->RepeatBuffer;
  if (pFVar5 != (FSQSingleHitBuffer<ChaosInterface::FSweepHit> *)0x0) {
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  pFVar5 = this->OriginalBuffer;
  if (pFVar5 != (FSQSingleHitBuffer<ChaosInterface::FSweepHit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f1ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    return;
  }
  return;
}

