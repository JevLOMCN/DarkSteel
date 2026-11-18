// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 7

// GetTestFlags @ 14d67b650

EAutomationTestFlags __thiscall
FTestCameraCalibrationCore::GetTestFlags(FTestCameraCalibrationCore *this)

{
  return EngineFilter|EditorContext;
}

// GetTestSourceFileName @ 14d67b660

FString * __thiscall
FTestCameraCalibrationCore::GetTestSourceFileName
          (FTestCameraCalibrationCore *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tests\\TestDistortionMapping.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d67b690

int __thiscall FTestCameraCalibrationCore::GetTestSourceFileLine(FTestCameraCalibrationCore *this)

{
  return 0x563;
}

// GetTestSourceFileName @ 14d67b6a0

FString * __thiscall
FTestCameraCalibrationCore::GetTestSourceFileName
          (FTestCameraCalibrationCore *this,FString *__return_storage_ptr__,FString *param_1)

{
  (**(code **)(*(longlong *)this + 0xb8))();
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d67b6e0

int __thiscall
FTestCameraCalibrationCore::GetTestSourceFileLine(FTestCameraCalibrationCore *this,FString *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d67b6e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)this + 200))();
  return iVar1;
}

// GetBeautifiedTestName @ 14d67b6f0

FString * __thiscall
FTestCameraCalibrationCore::GetBeautifiedTestName
          (FTestCameraCalibrationCore *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.CameraCalibrationCore");
  return __return_storage_ptr__;
}

// Define @ 14d67b720

void __thiscall FTestCameraCalibrationCore::Define(FTestCameraCalibrationCore *this)

{
  FString local_68;
  FSourceLocation local_58;
  code *local_38 [2];
  undefined **local_28;
  FTestCameraCalibrationCore *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTestCameraCalibrationCore::Define'::__l2::<lambda_1>,void>::
                Call;
  local_20 = this;
  ::FString::FString(&local_68,"DistortionParameterCurveBlending");
  local_58.Impl._Line = 0x566;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tests\\TestDistortionMapping.cpp"
  ;
  local_58.Impl._Function = "void __cdecl FTestCameraCalibrationCore::Define(void)";
  local_58.Impl._Column = 2;
  FAutomationSpecBase::It
            ((FAutomationSpecBase *)this,&local_68,(TFunction<void___cdecl(void)> *)local_38,
             &local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTestCameraCalibrationCore::Define'::__l2::<lambda_2>,void>::
                Call;
  local_20 = this;
  ::FString::FString(&local_68,"LensFileAddPoints");
  local_58.Impl._Line = 0x56b;
  local_58.Impl._Column = 2;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tests\\TestDistortionMapping.cpp"
  ;
  local_58.Impl._Function = "void __cdecl FTestCameraCalibrationCore::Define(void)";
  FAutomationSpecBase::It
            ((FAutomationSpecBase *)this,&local_68,(TFunction<void___cdecl(void)> *)local_38,
             &local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTestCameraCalibrationCore::Define'::__l2::<lambda_3>,void>::
                Call;
  local_20 = this;
  ::FString::FString(&local_68,"LensFileRemovePoints");
  local_58.Impl._Line = 0x570;
  local_58.Impl._Column = 2;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tests\\TestDistortionMapping.cpp"
  ;
  local_58.Impl._Function = "void __cdecl FTestCameraCalibrationCore::Define(void)";
  FAutomationSpecBase::It
            ((FAutomationSpecBase *)this,&local_68,(TFunction<void___cdecl(void)> *)local_38,
             &local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

