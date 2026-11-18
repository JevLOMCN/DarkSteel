// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 6

// StaticStruct @ 14d6785e0

UScriptStruct * __cdecl FLensDistortionState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLensDistortionState.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FLensDistortionState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLensDistortionState,(UObject *)pUVar1,
                         L"LensDistortionState");
  }
  return Z_Registration_Info_UScriptStruct_FLensDistortionState.OuterSingleton;
}

// FLensDistortionState @ 14d6a7c60

FLensDistortionState * __thiscall
FLensDistortionState::FLensDistortionState(FLensDistortionState *this,FLensDistortionState *param_1)

{
  double dVar1;
  
  (this->DistortionInfo).Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistortionInfo).Parameters.AllocatorInstance.Data =
       (param_1->DistortionInfo).Parameters.AllocatorInstance.Data;
  (param_1->DistortionInfo).Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistortionInfo).Parameters.ArrayNum = (param_1->DistortionInfo).Parameters.ArrayNum;
  (this->DistortionInfo).Parameters.ArrayMax = (param_1->DistortionInfo).Parameters.ArrayMax;
  (param_1->DistortionInfo).Parameters.ArrayNum = 0;
  (param_1->DistortionInfo).Parameters.ArrayMax = 0;
  dVar1 = (param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.Y;
  (this->FocalLengthInfo).FxFy.field0_0x0._s_0.X = (param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.X
  ;
  (this->FocalLengthInfo).FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.X =
       (param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.X;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  return this;
}

// FLensDistortionState @ 14d6a7ca0

FLensDistortionState * __thiscall
FLensDistortionState::FLensDistortionState(FLensDistortionState *this,FLensDistortionState *param_1)

{
  double dVar1;
  
  FDistortionInfo::FDistortionInfo(&this->DistortionInfo,&param_1->DistortionInfo);
  dVar1 = (param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.Y;
  (this->FocalLengthInfo).FxFy.field0_0x0._s_0.X = (param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.X
  ;
  (this->FocalLengthInfo).FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.X =
       (param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.X;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  return this;
}

// FLensDistortionState @ 14d6a7ce0

FLensDistortionState * __thiscall
FLensDistortionState::FLensDistortionState(FLensDistortionState *this)

{
  (this->DistortionInfo).Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistortionInfo).Parameters.ArrayNum = 0;
  (this->DistortionInfo).Parameters.ArrayMax = 0;
  (this->FocalLengthInfo).FxFy.field0_0x0._s_0.X = 1.0;
  (this->FocalLengthInfo).FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.X = 0.5;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  return this;
}

// ~FLensDistortionState @ 14d6ac540

void __thiscall FLensDistortionState::~FLensDistortionState(FLensDistortionState *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->DistortionInfo).Parameters.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator== @ 14d6ad6b0

bool __thiscall
FLensDistortionState::operator==(FLensDistortionState *this,FLensDistortionState *param_1)

{
  int iVar1;
  
  iVar1 = (this->DistortionInfo).Parameters.ArrayNum;
  if (iVar1 == (param_1->DistortionInfo).Parameters.ArrayNum) {
    if ((iVar1 != 0) &&
       (iVar1 = memcmp((this->DistortionInfo).Parameters.AllocatorInstance.Data,
                       (param_1->DistortionInfo).Parameters.AllocatorInstance.Data,
                       (longlong)iVar1 << 2), iVar1 != 0)) {
      return false;
    }
    if (((((param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.X ==
           (this->FocalLengthInfo).FxFy.field0_0x0._s_0.X) &&
         ((param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.Y ==
          (this->FocalLengthInfo).FxFy.field0_0x0._s_0.Y)) &&
        ((param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.X ==
         (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.X)) &&
       ((param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y ==
        (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y)) {
      return true;
    }
  }
  return false;
}

