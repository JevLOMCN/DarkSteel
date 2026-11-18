// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1484a5530

UScriptStruct * __cdecl FCameraExposureSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraExposureSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCameraExposureSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraExposureSettings,(UObject *)pUVar1,
                         L"CameraExposureSettings");
  }
  return Z_Registration_Info_UScriptStruct_FCameraExposureSettings.OuterSingleton;
}

// FCameraExposureSettings @ 1484b9f00

FCameraExposureSettings * __thiscall
FCameraExposureSettings::FCameraExposureSettings(FCameraExposureSettings *this)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  bool bVar5;
  longlong lVar6;
  TConsoleVariableData<int> *pTVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  TConsoleVariableData<float> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pvVar4 = ThreadLocalStoragePointer;
  uVar11 = (ulonglong)_tls_index;
  (this->BiasCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->MeterMask).field0_0x0.DebugPtr = (UTexture *)0x0;
  lVar3 = *(longlong *)((longlong)pvVar4 + uVar11 * 8);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar8 = IConsoleManager::Get();
    plVar9 = (longlong *)
             (**(code **)((longlong)*pIVar8 + 0xc0))
                       (pIVar8,L"r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange",1);
    pTVar7 = (TConsoleVariableData<int> *)0x0;
    if (plVar9 != (longlong *)0x0) {
      pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
    }
    VarDefaultAutoExposureExtendDefaultLuminanceRange = pTVar7;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar7 = VarDefaultAutoExposureExtendDefaultLuminanceRange;
  bVar5 = IsInParallelGameThread();
  lVar12 = 4;
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4;
  }
  iVar2 = *(int *)((longlong)pTVar7->ShadowedValue + lVar6);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar8 = IConsoleManager::Get();
    plVar9 = (longlong *)
             (**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8,L"r.DefaultFeature.AutoExposure.Bias",1)
    ;
    pTVar10 = (TConsoleVariableData<float> *)0x0;
    if (plVar9 != (longlong *)0x0) {
      pTVar10 = (TConsoleVariableData<float> *)(**(code **)(*plVar9 + 0x70))(plVar9);
    }
    VarDefaultAutoExposureBias = pTVar10;
    _Init_thread_footer(&::_TSS1);
  }
  pTVar10 = VarDefaultAutoExposureBias;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar12 = 0;
  }
  fVar1 = *(float *)((longlong)pTVar10->ShadowedValue + lVar12);
  (this->Method).Value = '\0';
  this->LowPercent = 10.0;
  this->HighPercent = 90.0;
  fVar13 = __real_40800000;
  fVar14 = __real_c1000000;
  fVar15 = __real_41000000;
  fVar16 = __real_3cf5c28f;
  if (iVar2 == 1) {
    fVar13 = __real_41a00000;
    fVar14 = __real_c1200000;
    fVar15 = __real_41a00000;
    fVar16 = __real_c1200000;
  }
  this->MinBrightness = fVar16;
  this->MaxBrightness = fVar15;
  this->HistogramLogMin = fVar14;
  this->HistogramLogMax = fVar13;
  this->ApplyPhysicalCameraExposure = 0;
  this->Bias = fVar1;
  this->SpeedUp = 3.0;
  this->SpeedDown = 1.0;
  this->CalibrationConstant = 18.0;
  return this;
}

// ExportToPostProcessSettings @ 1484d5fc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FCameraExposureSettings::ExportToPostProcessSettings
          (FCameraExposureSettings *this,FPostProcessSettings *param_1)

{
  undefined1 *puVar1;
  UCurveFloat *pUVar2;
  UTexture *pUVar3;
  
  param_1->bOverride_AutoExposureMethod = '\x01';
  param_1->bOverride_AutoExposureSpeedDown = '\x01';
  param_1->bOverride_AutoExposureSpeedUp = '\x01';
  param_1->bOverride_AutoExposureMaxBrightness = '\x01';
  param_1->bOverride_AutoExposureMinBrightness = '\x01';
  param_1->bOverride_AutoExposureHighPercent = '\x01';
  param_1->bOverride_AutoExposureLowPercent = '\x01';
  param_1->bOverride_AutoExposureBias = '\x01';
  param_1->bOverride_HistogramLogMax = '\x01';
  param_1->bOverride_HistogramLogMin = '\x01';
  param_1->bOverride_AutoExposureApplyPhysicalCameraExposure = '\x01';
  param_1->bOverride_AutoExposureMeterMask = '\x01';
  param_1->bOverride_AutoExposureBiasCurve = '\x01';
  param_1->AutoExposureLowPercent = this->LowPercent;
  param_1->AutoExposureHighPercent = this->HighPercent;
  param_1->AutoExposureMinBrightness = this->MinBrightness;
  param_1->AutoExposureMaxBrightness = this->MaxBrightness;
  param_1->AutoExposureSpeedUp = this->SpeedUp;
  param_1->AutoExposureSpeedDown = this->SpeedDown;
  param_1->AutoExposureBias = this->Bias;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (this->BiasCurve).field0_0x0.DebugPtr, pUVar2 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (param_1->AutoExposureBiasCurve).field0_0x0 = (this->BiasCurve).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (this->MeterMask).field0_0x0.DebugPtr, pUVar3 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (param_1->AutoExposureMeterMask).field0_0x0 = (this->MeterMask).field0_0x0;
  param_1->HistogramLogMin = this->HistogramLogMin;
  param_1->HistogramLogMax = this->HistogramLogMax;
  *(uint *)&param_1->field_0x4a0 =
       (ZPULL(*(undefined4 *)&param_1->field_0x4a0,0,1) ^ this->ApplyPhysicalCameraExposure) & 1 ^
       *(undefined4 *)&param_1->field_0x4a0;
  return;
}

