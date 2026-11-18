// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 42

// StaticClass @ 14d57a5f0

UClass * __cdecl UBlueprintCameraVariableTableFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraVariableTableFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUBlueprintCameraVariableTableFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraVariableTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraVariableTableFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.InnerSingleton;
}

// UBlueprintCameraVariableTableFunctionLibrary @ 14d58ef20

UBlueprintCameraVariableTableFunctionLibrary * __thiscall
UBlueprintCameraVariableTableFunctionLibrary::UBlueprintCameraVariableTableFunctionLibrary
          (UBlueprintCameraVariableTableFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintCameraVariableTableFunctionLibrary__6B_;
  return this;
}

// UBlueprintCameraVariableTableFunctionLibrary @ 14d58ef50

UBlueprintCameraVariableTableFunctionLibrary * __thiscall
UBlueprintCameraVariableTableFunctionLibrary::UBlueprintCameraVariableTableFunctionLibrary
          (UBlueprintCameraVariableTableFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintCameraVariableTableFunctionLibrary__6B_;
  return this;
}

// ~UBlueprintCameraVariableTableFunctionLibrary @ 14d591980

void __thiscall
UBlueprintCameraVariableTableFunctionLibrary::~UBlueprintCameraVariableTableFunctionLibrary
          (UBlueprintCameraVariableTableFunctionLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintCameraVariableTableFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetBooleanCameraVariable @ 14d5a6a40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UBlueprintCameraVariableTableFunctionLibrary::GetBooleanCameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UBooleanCameraVariable *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  bool *pbVar6;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return ErrorResult;
  }
  if (param_2 == (UBooleanCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return ErrorResult;
  }
  uVar4 = param_2->bDefaultValue;
  if ((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
      (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_841517864337801202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                       ,0xe,"Guid.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pbVar6 = UE::Cameras::FCameraVariableTable::FindValue<bool>
                     (&pFVar1->VariableTable,(FCameraVariableID)(uint)uVar5);
  if (pbVar6 != (bool *)0x0) {
    uVar4 = *pbVar6;
  }
  return (bool)uVar4;
}

// GetDoubleCameraVariable @ 14d5a7b30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

double __cdecl
UBlueprintCameraVariableTableFunctionLibrary::GetDoubleCameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UDoubleCameraVariable *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  double *pdVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return ErrorResult;
  }
  if (param_2 == (UDoubleCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return ErrorResult;
  }
  uVar7 = SUB84(param_2->DefaultValue,0);
  uVar8 = (undefined4)((ulonglong)param_2->DefaultValue >> 0x20);
  if ((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
      (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_841517864337801202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                       ,0xe,"Guid.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar6 = (double)(*pcVar2)();
      return dVar6;
    }
  }
  uVar4 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pdVar5 = UE::Cameras::FCameraVariableTable::FindValue<double>
                     (&pFVar1->VariableTable,(FCameraVariableID)(uint)uVar4);
  if (pdVar5 != (double *)0x0) {
    uVar7 = SUB84(*pdVar5,0);
    uVar8 = (undefined4)((ulonglong)*pdVar5 >> 0x20);
  }
  return (double)CONCAT44(uVar8,uVar7);
}

// GetFloatCameraVariable @ 14d5a8480

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
UBlueprintCameraVariableTableFunctionLibrary::GetFloatCameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UFloatCameraVariable *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  float *pfVar5;
  float fVar6;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return ErrorResult;
  }
  if (param_2 == (UFloatCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return ErrorResult;
  }
  fVar6 = param_2->DefaultValue;
  if ((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
      (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_841517864337801202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                       ,0xe,"Guid.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  uVar4 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pfVar5 = UE::Cameras::FCameraVariableTable::FindValue<float>
                     (&pFVar1->VariableTable,(FCameraVariableID)(uint)uVar4);
  if (pfVar5 != (float *)0x0) {
    fVar6 = *pfVar5;
  }
  return fVar6;
}

// GetInteger32CameraVariable @ 14d5a86c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UBlueprintCameraVariableTableFunctionLibrary::GetInteger32CameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UInteger32CameraVariable *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  int *piVar6;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return ErrorResult;
  }
  if (param_2 == (UInteger32CameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return ErrorResult;
  }
  iVar4 = param_2->DefaultValue;
  if ((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
      (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_841517864337801202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                       ,0xe,"Guid.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  uVar5 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  piVar6 = UE::Cameras::FCameraVariableTable::FindValue<int>
                     (&pFVar1->VariableTable,(FCameraVariableID)(uint)uVar5);
  if (piVar6 != (int *)0x0) {
    iVar4 = *piVar6;
  }
  return iVar4;
}

// GetPrivateStaticClass @ 14d5a9010

UClass * __cdecl UBlueprintCameraVariableTableFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraVariableTableFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUBlueprintCameraVariableTableFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraVariableTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraVariableTableFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.InnerSingleton;
}

// GetRotatorCameraVariable @ 14d5ab160

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRotator<double> * __cdecl
UBlueprintCameraVariableTableFunctionLibrary::GetRotatorCameraVariable
          (TRotator<double> *__return_storage_ptr__,FBlueprintCameraEvaluationDataRef *param_1,
          URotator3dCameraVariable *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRotator<double> *pTVar4;
  ulong64 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    uVar6 = ErrorResult.Pitch._0_4_;
    uVar7 = ErrorResult.Pitch._4_4_;
    uVar8 = ErrorResult.Yaw._0_4_;
    uVar9 = ErrorResult.Yaw._4_4_;
    dVar10 = ErrorResult.Roll;
  }
  else if (param_2 == (URotator3dCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    uVar6 = ErrorResult.Pitch._0_4_;
    uVar7 = ErrorResult.Pitch._4_4_;
    uVar8 = ErrorResult.Yaw._0_4_;
    uVar9 = ErrorResult.Yaw._4_4_;
    dVar10 = ErrorResult.Roll;
  }
  else {
    if ((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
        (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TRotator<double> *)(*pcVar2)();
        return pTVar4;
      }
    }
    uVar5 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
    pTVar4 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>
                       (&pFVar1->VariableTable,(FCameraVariableID)(uint)uVar5);
    if (pTVar4 == (TRotator<double> *)0x0) {
      uVar6 = *(undefined4 *)&(param_2->DefaultValue).Pitch;
      uVar7 = *(undefined4 *)((longlong)&(param_2->DefaultValue).Pitch + 4);
      uVar8 = *(undefined4 *)&(param_2->DefaultValue).Yaw;
      uVar9 = *(undefined4 *)((longlong)&(param_2->DefaultValue).Yaw + 4);
      dVar10 = (param_2->DefaultValue).Roll;
    }
    else {
      uVar6 = *(undefined4 *)&pTVar4->Pitch;
      uVar7 = *(undefined4 *)((longlong)&pTVar4->Pitch + 4);
      uVar8 = *(undefined4 *)&pTVar4->Yaw;
      uVar9 = *(undefined4 *)((longlong)&pTVar4->Yaw + 4);
      dVar10 = pTVar4->Roll;
    }
  }
  *(undefined4 *)&__return_storage_ptr__->Pitch = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Pitch + 4) = uVar7;
  *(undefined4 *)&__return_storage_ptr__->Yaw = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Yaw + 4) = uVar9;
  __return_storage_ptr__->Roll = dVar10;
  return __return_storage_ptr__;
}

// GetTransformCameraVariable @ 14d5ab8d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __cdecl
UBlueprintCameraVariableTableFunctionLibrary::GetTransformCameraVariable
          (TTransform<double> *__return_storage_ptr__,FBlueprintCameraEvaluationDataRef *param_1,
          UTransform3dCameraVariable *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  __m128d _Var7;
  __m128d _Var8;
  bool bVar9;
  TTransform<double> *pTVar10;
  ulong64 uVar11;
  wchar_t *pwVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ErrorResult.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      ErrorResult.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      ErrorResult.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      ErrorResult.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      ErrorResult.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      ErrorResult.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      ErrorResult.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      ErrorResult.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
      ;
      ErrorResult.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      ErrorResult.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      ErrorResult.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
      ;
      ErrorResult.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      ErrorResult.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      ErrorResult.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      ErrorResult.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      ErrorResult.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      ErrorResult.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      ErrorResult.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    pwVar12 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != (UTransform3dCameraVariable *)0x0) {
      if ((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
          (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          pTVar10 = (TTransform<double> *)(*pcVar2)();
          return pTVar10;
        }
      }
      uVar11 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
      pTVar10 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TTransform<double>_>
                          (&pFVar1->VariableTable,(FCameraVariableID)(uint)uVar11);
      if (pTVar10 == (TTransform<double> *)0x0) {
        dVar3 = (param_2->DefaultValue).Rotation.XY.m128d_f64[1];
        dVar4 = (param_2->DefaultValue).Rotation.ZW.m128d_f64[0];
        dVar5 = (param_2->DefaultValue).Rotation.ZW.m128d_f64[1];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
             (param_2->DefaultValue).Rotation.XY.m128d_f64[0];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
        dVar3 = (param_2->DefaultValue).Translation.XY.m128d_f64[0];
        dVar6 = (param_2->DefaultValue).Translation.XY.m128d_f64[1];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
        dVar4 = (param_2->DefaultValue).Translation.ZW.m128d_f64[0];
        dVar5 = (param_2->DefaultValue).Translation.ZW.m128d_f64[1];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar3;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
        uVar13 = *(undefined4 *)(param_2->DefaultValue).Scale3D.XY.m128d_f64;
        uVar14 = *(undefined4 *)((longlong)(param_2->DefaultValue).Scale3D.XY.m128d_f64 + 4);
        uVar15 = *(undefined4 *)((param_2->DefaultValue).Scale3D.XY.m128d_f64 + 1);
        uVar16 = *(undefined4 *)((longlong)(param_2->DefaultValue).Scale3D.XY.m128d_f64 + 0xc);
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar4;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
        uVar17 = *(undefined4 *)(param_2->DefaultValue).Scale3D.ZW.m128d_f64;
        uVar18 = *(undefined4 *)((longlong)(param_2->DefaultValue).Scale3D.ZW.m128d_f64 + 4);
        uVar19 = *(undefined4 *)((param_2->DefaultValue).Scale3D.ZW.m128d_f64 + 1);
        uVar20 = *(undefined4 *)((longlong)(param_2->DefaultValue).Scale3D.ZW.m128d_f64 + 0xc);
      }
      else {
        dVar3 = (pTVar10->Rotation).XY.m128d_f64[1];
        dVar4 = (pTVar10->Rotation).ZW.m128d_f64[0];
        dVar5 = (pTVar10->Rotation).ZW.m128d_f64[1];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
        dVar3 = (pTVar10->Translation).XY.m128d_f64[0];
        dVar6 = (pTVar10->Translation).XY.m128d_f64[1];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
        dVar4 = (pTVar10->Translation).ZW.m128d_f64[0];
        dVar5 = (pTVar10->Translation).ZW.m128d_f64[1];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar3;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
        uVar13 = *(undefined4 *)(pTVar10->Scale3D).XY.m128d_f64;
        uVar14 = *(undefined4 *)((longlong)(pTVar10->Scale3D).XY.m128d_f64 + 4);
        uVar15 = *(undefined4 *)((pTVar10->Scale3D).XY.m128d_f64 + 1);
        uVar16 = *(undefined4 *)((longlong)(pTVar10->Scale3D).XY.m128d_f64 + 0xc);
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar4;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
        uVar17 = *(undefined4 *)(pTVar10->Scale3D).ZW.m128d_f64;
        uVar18 = *(undefined4 *)((longlong)(pTVar10->Scale3D).ZW.m128d_f64 + 4);
        uVar19 = *(undefined4 *)((pTVar10->Scale3D).ZW.m128d_f64 + 1);
        uVar20 = *(undefined4 *)((longlong)(pTVar10->Scale3D).ZW.m128d_f64 + 0xc);
      }
      goto LAB_14d5aba3b;
    }
    pwVar12 = L"No camera variable asset was given";
  }
  FFrame::KismetExecutionMessage(pwVar12,Error,(FName)0x0);
  _Var7 = ErrorResult.Rotation.ZW;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 = ErrorResult.Rotation.XY.m128d_f64;
  _Var8 = ErrorResult.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var7.m128d_f64;
  _Var7 = ErrorResult.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var8.m128d_f64;
  uVar13 = ErrorResult.Scale3D.XY.m128d_f64[0]._0_4_;
  uVar14 = ErrorResult.Scale3D.XY.m128d_f64[0]._4_4_;
  uVar15 = ErrorResult.Scale3D.XY.m128d_f64[1]._0_4_;
  uVar16 = ErrorResult.Scale3D.XY.m128d_f64[1]._4_4_;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var7.m128d_f64;
  uVar17 = ErrorResult.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar18 = ErrorResult.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar19 = ErrorResult.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar20 = ErrorResult.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14d5aba3b:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar13;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar14;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar15;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar16;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar17;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar18;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar19;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar20;
  return __return_storage_ptr__;
}

// GetVector2CameraVariable @ 14d5acc00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __cdecl
UBlueprintCameraVariableTableFunctionLibrary::GetVector2CameraVariable
          (TVector2<double> *__return_storage_ptr__,FBlueprintCameraEvaluationDataRef *param_1,
          UVector2dCameraVariable *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  ulong64 uVar6;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    (__return_storage_ptr__->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)ErrorResult;
    return __return_storage_ptr__;
  }
  if (param_2 == (UVector2dCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    (__return_storage_ptr__->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)ErrorResult;
    return __return_storage_ptr__;
  }
  if ((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
      (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_841517864337801202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                       ,0xe,"Guid.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar6 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pTVar5 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                     (&pFVar1->VariableTable,(FCameraVariableID)(uint)uVar6);
  if (pTVar5 != (TVector2<double> *)0x0) {
    dVar3 = (pTVar5->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    return __return_storage_ptr__;
  }
  dVar3 = (param_2->DefaultValue).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->DefaultValue).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// GetVector3CameraVariable @ 14d5acd10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __cdecl
UBlueprintCameraVariableTableFunctionLibrary::GetVector3CameraVariable
          (TVector<double> *__return_storage_ptr__,FBlueprintCameraEvaluationDataRef *param_1,
          UVector3dCameraVariable *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  ulong64 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    uVar6 = ErrorResult.field0_0x0._0_4_;
    uVar7 = ErrorResult.field0_0x0._4_4_;
    uVar8 = ErrorResult.field0_0x0._8_4_;
    uVar9 = ErrorResult.field0_0x0._12_4_;
    uVar10 = ErrorResult.field0_0x0._s_0.Z;
  }
  else if (param_2 == (UVector3dCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    uVar6 = ErrorResult.field0_0x0._0_4_;
    uVar7 = ErrorResult.field0_0x0._4_4_;
    uVar8 = ErrorResult.field0_0x0._8_4_;
    uVar9 = ErrorResult.field0_0x0._12_4_;
    uVar10 = ErrorResult.field0_0x0._s_0.Z;
  }
  else {
    if ((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
        (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TVector<double> *)(*pcVar2)();
        return pTVar4;
      }
    }
    uVar5 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
    pTVar4 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                       (&pFVar1->VariableTable,(FCameraVariableID)(uint)uVar5);
    if (pTVar4 == (TVector<double> *)0x0) {
      uVar6 = *(undefined4 *)&(param_2->DefaultValue).field0_0x0;
      uVar7 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 4);
      uVar8 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 8);
      uVar9 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 0xc);
      uVar10 = (param_2->DefaultValue).field0_0x0._s_0.Z;
    }
    else {
      uVar6 = *(undefined4 *)&pTVar4->field0_0x0;
      uVar7 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 4);
      uVar8 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 8);
      uVar9 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 0xc);
      uVar10 = (pTVar4->field0_0x0)._s_0.Z;
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar7;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar10;
  return __return_storage_ptr__;
}

// GetVector4CameraVariable @ 14d5ace20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector4<double> * __cdecl
UBlueprintCameraVariableTableFunctionLibrary::GetVector4CameraVariable
          (TVector4<double> *__return_storage_ptr__,FBlueprintCameraEvaluationDataRef *param_1,
          UVector4dCameraVariable *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  code *pcVar2;
  bool bVar3;
  TVector4<double> *pTVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    pwVar6 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != (UVector4dCameraVariable *)0x0) {
      if ((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
          (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TVector4<double> *)(*pcVar2)();
          return pTVar4;
        }
      }
      uVar5 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
      pTVar4 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector4<double>_>
                         (&pFVar1->VariableTable,(FCameraVariableID)(uint)uVar5);
      if (pTVar4 == (TVector4<double> *)0x0) {
        uVar7 = *(undefined4 *)&(param_2->DefaultValue).field0_0x0;
        uVar8 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 4);
        uVar9 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 8);
        uVar10 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 0xc);
        uVar11 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 0x10);
        uVar12 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 0x14);
        uVar13 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 0x18);
        uVar14 = *(undefined4 *)((longlong)&(param_2->DefaultValue).field0_0x0 + 0x1c);
      }
      else {
        uVar7 = *(undefined4 *)&pTVar4->field0_0x0;
        uVar8 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 4);
        uVar9 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 8);
        uVar10 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 0xc);
        uVar11 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 0x10);
        uVar12 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 0x14);
        uVar13 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 0x18);
        uVar14 = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 0x1c);
      }
      goto LAB_14d5acef4;
    }
    pwVar6 = L"No camera variable asset was given";
  }
  FFrame::KismetExecutionMessage(pwVar6,Error,(FName)0x0);
  uVar7 = ErrorResult.field0_0x0._0_4_;
  uVar8 = ErrorResult.field0_0x0._4_4_;
  uVar9 = ErrorResult.field0_0x0._8_4_;
  uVar10 = ErrorResult.field0_0x0._12_4_;
  uVar11 = ErrorResult.field0_0x0._16_4_;
  uVar12 = ErrorResult.field0_0x0._20_4_;
  uVar13 = ErrorResult.field0_0x0._24_4_;
  uVar14 = ErrorResult.field0_0x0._28_4_;
LAB_14d5acef4:
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar7;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar9;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar10;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = uVar11;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x14) = uVar12;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x18) = uVar13;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x1c) = uVar14;
  return __return_storage_ptr__;
}

// SetBooleanCameraVariable @ 14d5ce230

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::SetBooleanCameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UBooleanCameraVariable *param_2,bool param_3)

{
  ECameraVariableType EVar1;
  FCameraNodeEvaluationResult *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  FEntry *pFVar6;
  FCameraVariableTable *this;
  uint local_res8 [2];
  uint *local_40 [2];
  FCameraVariableDefinition local_30;
  
  pFVar2 = param_1->Result;
  if (pFVar2 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return;
  }
  if (param_2 == (UBooleanCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return;
  }
  this = &pFVar2->VariableTable;
  if (((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
       (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this,(FCameraVariableID)(uint)uVar5);
  if (pFVar6 == (FEntry *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)param_2,&local_30);
    UE::Cameras::FCameraVariableTable::AddVariable(this,&local_30);
    local_res8[0] = local_30.VariableID.Value;
    pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this,local_30.VariableID);
    if (pFVar6 == (FEntry *)0x0) {
      local_40[0] = local_res8;
      bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l3::<lambda_1>::operator()
                        (local_40);
      if (!bVar4) {
        return;
      }
    }
    EVar1 = pFVar6->Type;
  }
  else {
    EVar1 = pFVar6->Type;
  }
  if ((EVar1 != Boolean) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (pFVar2->VariableTable).Memory[pFVar6->Offset] = param_3;
  pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
  return;
}

// SetDoubleCameraVariable @ 14d5ce6e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::SetDoubleCameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UDoubleCameraVariable *param_2,double param_3)

{
  ECameraVariableType EVar1;
  FCameraNodeEvaluationResult *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  FEntry *pFVar6;
  FCameraVariableTable *this;
  uint local_res8 [2];
  uint *local_40 [2];
  FCameraVariableDefinition local_30;
  
  pFVar2 = param_1->Result;
  if (pFVar2 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return;
  }
  if (param_2 == (UDoubleCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return;
  }
  this = &pFVar2->VariableTable;
  if (((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
       (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this,(FCameraVariableID)(uint)uVar5);
  if (pFVar6 == (FEntry *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)param_2,&local_30);
    UE::Cameras::FCameraVariableTable::AddVariable(this,&local_30);
    local_res8[0] = local_30.VariableID.Value;
    pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this,local_30.VariableID);
    if (pFVar6 == (FEntry *)0x0) {
      local_40[0] = local_res8;
      bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<double>'::__l3::<lambda_1>::operator()
                        (local_40);
      if (!bVar4) {
        return;
      }
    }
    EVar1 = pFVar6->Type;
  }
  else {
    EVar1 = pFVar6->Type;
  }
  if ((EVar1 != Double) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(double *)((pFVar2->VariableTable).Memory + pFVar6->Offset) = param_3;
  pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
  return;
}

// SetFloatCameraVariable @ 14d5ce950

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::SetFloatCameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UFloatCameraVariable *param_2,float param_3)

{
  ECameraVariableType EVar1;
  FCameraNodeEvaluationResult *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  FEntry *pFVar6;
  FCameraVariableTable *this;
  uint local_res8 [2];
  uint *local_40 [2];
  FCameraVariableDefinition local_30;
  
  pFVar2 = param_1->Result;
  if (pFVar2 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return;
  }
  if (param_2 == (UFloatCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return;
  }
  this = &pFVar2->VariableTable;
  if (((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
       (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this,(FCameraVariableID)(uint)uVar5);
  if (pFVar6 == (FEntry *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)param_2,&local_30);
    UE::Cameras::FCameraVariableTable::AddVariable(this,&local_30);
    local_res8[0] = local_30.VariableID.Value;
    pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this,local_30.VariableID);
    if (pFVar6 == (FEntry *)0x0) {
      local_40[0] = local_res8;
      bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<float>'::__l3::<lambda_1>::operator()
                        (local_40);
      if (!bVar4) {
        return;
      }
    }
    EVar1 = pFVar6->Type;
  }
  else {
    EVar1 = pFVar6->Type;
  }
  if ((EVar1 != Float) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(float *)((pFVar2->VariableTable).Memory + pFVar6->Offset) = param_3;
  pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
  return;
}

// SetInteger32CameraVariable @ 14d5ceb50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::SetInteger32CameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UInteger32CameraVariable *param_2,int param_3)

{
  ECameraVariableType EVar1;
  FCameraNodeEvaluationResult *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  FEntry *pFVar6;
  FCameraVariableTable *this;
  uint local_res8 [2];
  uint *local_40 [2];
  FCameraVariableDefinition local_30;
  
  pFVar2 = param_1->Result;
  if (pFVar2 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return;
  }
  if (param_2 == (UInteger32CameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return;
  }
  this = &pFVar2->VariableTable;
  if (((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
       (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this,(FCameraVariableID)(uint)uVar5);
  if (pFVar6 == (FEntry *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)param_2,&local_30);
    UE::Cameras::FCameraVariableTable::AddVariable(this,&local_30);
    local_res8[0] = local_30.VariableID.Value;
    pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this,local_30.VariableID);
    if (pFVar6 == (FEntry *)0x0) {
      local_40[0] = local_res8;
      bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<int>'::__l3::<lambda_1>::operator()
                        (local_40);
      if (!bVar4) {
        return;
      }
    }
    EVar1 = pFVar6->Type;
  }
  else {
    EVar1 = pFVar6->Type;
  }
  if ((EVar1 != Integer32) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(int *)((pFVar2->VariableTable).Memory + pFVar6->Offset) = param_3;
  pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
  return;
}

// SetRotatorCameraVariable @ 14d5ceeb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::SetRotatorCameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,URotator3dCameraVariable *param_2,
          TRotator<double> *param_3)

{
  double *pdVar1;
  ECameraVariableType EVar2;
  uint uVar3;
  FCameraNodeEvaluationResult *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  ulong64 uVar9;
  FEntry *pFVar10;
  FCameraVariableTable *this;
  uint local_res8 [2];
  uint *local_40 [2];
  FCameraVariableDefinition local_30;
  
  pFVar4 = param_1->Result;
  if (pFVar4 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return;
  }
  if (param_2 == (URotator3dCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return;
  }
  this = &pFVar4->VariableTable;
  if (((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
       (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pFVar10 = UE::Cameras::FCameraVariableTable::FindEntry(this,(FCameraVariableID)(uint)uVar9);
  if (pFVar10 == (FEntry *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)param_2,&local_30);
    UE::Cameras::FCameraVariableTable::AddVariable(this,&local_30);
    local_res8[0] = local_30.VariableID.Value;
    pFVar10 = UE::Cameras::FCameraVariableTable::FindEntry(this,local_30.VariableID);
    if (pFVar10 == (FEntry *)0x0) {
      local_40[0] = local_res8;
      bVar8 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l3::
              <lambda_1>::operator()(local_40);
      if (!bVar8) {
        return;
      }
    }
    EVar2 = pFVar10->Type;
  }
  else {
    EVar2 = pFVar10->Type;
  }
  if ((EVar2 != Rotator3d) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar5 = (pFVar4->VariableTable).Memory;
  uVar3 = pFVar10->Offset;
  dVar7 = param_3->Yaw;
  pdVar1 = (double *)(puVar5 + uVar3);
  *pdVar1 = param_3->Pitch;
  pdVar1[1] = dVar7;
  *(double *)(puVar5 + (ulonglong)uVar3 + 0x10) = param_3->Roll;
  pFVar10->Flags = pFVar10->Flags | (WrittenThisFrame|Written);
  return;
}

// SetTransformCameraVariable @ 14d5cf340

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::SetTransformCameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UTransform3dCameraVariable *param_2,
          TTransform<double> *param_3)

{
  FCameraVariableTable *this;
  FCameraNodeEvaluationResult *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  ulong64 uVar6;
  FEntry *pFVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  uint *local_40 [2];
  FCameraVariableDefinition local_30;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return;
  }
  if (param_2 == (UTransform3dCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return;
  }
  this = &pFVar1->VariableTable;
  if (((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
       (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pFVar7 = UE::Cameras::FCameraVariableTable::FindEntry(this,(FCameraVariableID)(uint)uVar6);
  if (pFVar7 == (FEntry *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)param_2,&local_30);
    UE::Cameras::FCameraVariableTable::AddVariable(this,&local_30);
    local_res8[0] = local_30.VariableID.Value;
    pFVar7 = UE::Cameras::FCameraVariableTable::FindEntry(this,local_30.VariableID);
    if (pFVar7 == (FEntry *)0x0) {
      local_40[0] = local_res8;
      bVar5 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>'::__l3::
              <lambda_1>::operator()(local_40);
      if (!bVar5) {
        return;
      }
    }
    if ((pFVar7->Type != Transform3d) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar4 = (param_3->Rotation).XY.m128d_f64[1];
    uVar8 = (ulonglong)pFVar7->Offset;
    puVar2 = (pFVar1->VariableTable).Memory;
    *(double *)(puVar2 + uVar8) = (param_3->Rotation).XY.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8) + 8) = dVar4;
    dVar4 = (param_3->Rotation).ZW.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x10) = (param_3->Rotation).ZW.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x10) + 8) = dVar4;
    dVar4 = (param_3->Translation).XY.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x20) = (param_3->Translation).XY.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x20) + 8) = dVar4;
    dVar4 = (param_3->Translation).ZW.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x30) = (param_3->Translation).ZW.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x30) + 8) = dVar4;
    dVar4 = (param_3->Scale3D).XY.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x40) = (param_3->Scale3D).XY.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x40) + 8) = dVar4;
    dVar4 = (param_3->Scale3D).ZW.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x50) = (param_3->Scale3D).ZW.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x50) + 8) = dVar4;
    pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  }
  else {
    if ((pFVar7->Type != Transform3d) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar4 = (param_3->Rotation).XY.m128d_f64[1];
    uVar8 = (ulonglong)pFVar7->Offset;
    puVar2 = (pFVar1->VariableTable).Memory;
    *(double *)(puVar2 + uVar8) = (param_3->Rotation).XY.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8) + 8) = dVar4;
    dVar4 = (param_3->Rotation).ZW.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x10) = (param_3->Rotation).ZW.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x10) + 8) = dVar4;
    dVar4 = (param_3->Translation).XY.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x20) = (param_3->Translation).XY.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x20) + 8) = dVar4;
    dVar4 = (param_3->Translation).ZW.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x30) = (param_3->Translation).ZW.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x30) + 8) = dVar4;
    dVar4 = (param_3->Scale3D).XY.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x40) = (param_3->Scale3D).XY.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x40) + 8) = dVar4;
    dVar4 = (param_3->Scale3D).ZW.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x50) = (param_3->Scale3D).ZW.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x50) + 8) = dVar4;
    pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetVector2CameraVariable @ 14d5cf640

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::SetVector2CameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UVector2dCameraVariable *param_2,
          TVector2<double> *param_3)

{
  double *pdVar1;
  ECameraVariableType EVar2;
  FCameraNodeEvaluationResult *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  ulong64 uVar7;
  FEntry *pFVar8;
  FCameraVariableTable *this;
  uint local_res8 [2];
  uint *local_40 [2];
  FCameraVariableDefinition local_30;
  
  pFVar3 = param_1->Result;
  if (pFVar3 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return;
  }
  if (param_2 == (UVector2dCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return;
  }
  this = &pFVar3->VariableTable;
  if (((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
       (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pFVar8 = UE::Cameras::FCameraVariableTable::FindEntry(this,(FCameraVariableID)(uint)uVar7);
  if (pFVar8 == (FEntry *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)param_2,&local_30);
    UE::Cameras::FCameraVariableTable::AddVariable(this,&local_30);
    local_res8[0] = local_30.VariableID.Value;
    pFVar8 = UE::Cameras::FCameraVariableTable::FindEntry(this,local_30.VariableID);
    if (pFVar8 == (FEntry *)0x0) {
      local_40[0] = local_res8;
      bVar6 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>'::__l3::
              <lambda_1>::operator()(local_40);
      if (!bVar6) {
        return;
      }
    }
    EVar2 = pFVar8->Type;
  }
  else {
    EVar2 = pFVar8->Type;
  }
  if ((EVar2 != Vector2d) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  pdVar1 = (double *)((pFVar3->VariableTable).Memory + pFVar8->Offset);
  *pdVar1 = (param_3->field0_0x0)._s_0.X;
  pdVar1[1] = dVar5;
  pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  return;
}

// SetVector3CameraVariable @ 14d5cf7c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::SetVector3CameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UVector3dCameraVariable *param_2,
          TVector<double> *param_3)

{
  double *pdVar1;
  ECameraVariableType EVar2;
  uint uVar3;
  FCameraNodeEvaluationResult *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  ulong64 uVar9;
  FEntry *pFVar10;
  FCameraVariableTable *this;
  uint local_res8 [2];
  uint *local_40 [2];
  FCameraVariableDefinition local_30;
  
  pFVar4 = param_1->Result;
  if (pFVar4 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return;
  }
  if (param_2 == (UVector3dCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return;
  }
  this = &pFVar4->VariableTable;
  if (((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
       (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pFVar10 = UE::Cameras::FCameraVariableTable::FindEntry(this,(FCameraVariableID)(uint)uVar9);
  if (pFVar10 == (FEntry *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)param_2,&local_30);
    UE::Cameras::FCameraVariableTable::AddVariable(this,&local_30);
    local_res8[0] = local_30.VariableID.Value;
    pFVar10 = UE::Cameras::FCameraVariableTable::FindEntry(this,local_30.VariableID);
    if (pFVar10 == (FEntry *)0x0) {
      local_40[0] = local_res8;
      bVar8 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>'::__l3::
              <lambda_1>::operator()(local_40);
      if (!bVar8) {
        return;
      }
    }
    EVar2 = pFVar10->Type;
  }
  else {
    EVar2 = pFVar10->Type;
  }
  if ((EVar2 != Vector3d) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar5 = (pFVar4->VariableTable).Memory;
  uVar3 = pFVar10->Offset;
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  pdVar1 = (double *)(puVar5 + uVar3);
  *pdVar1 = (param_3->field0_0x0)._s_0.X;
  pdVar1[1] = dVar7;
  *(double *)(puVar5 + (ulonglong)uVar3 + 0x10) = (param_3->field0_0x0)._s_0.Z;
  pFVar10->Flags = pFVar10->Flags | (WrittenThisFrame|Written);
  return;
}

// SetVector4CameraVariable @ 14d5cf950

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::SetVector4CameraVariable
          (FBlueprintCameraEvaluationDataRef *param_1,UVector4dCameraVariable *param_2,
          TVector4<double> *param_3)

{
  double *pdVar1;
  ECameraVariableType EVar2;
  uint uVar3;
  FCameraNodeEvaluationResult *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  ulong64 uVar9;
  FEntry *pFVar10;
  FCameraVariableTable *this;
  uint local_res8 [2];
  uint *local_40 [2];
  FCameraVariableDefinition local_30;
  
  pFVar4 = param_1->Result;
  if (pFVar4 == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    return;
  }
  if (param_2 == (UVector4dCameraVariable *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    return;
  }
  this = &pFVar4->VariableTable;
  if (((((int)param_2->_padding_ == 0 && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
       (int)param_2->_padding_ == 0) && *(int *)((longlong)&param_2->_padding_ + 4) == 0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = CityHash64((char *)((longlong)&param_2->_padding_ + 4),0x10);
  pFVar10 = UE::Cameras::FCameraVariableTable::FindEntry(this,(FCameraVariableID)(uint)uVar9);
  if (pFVar10 == (FEntry *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)param_2,&local_30);
    UE::Cameras::FCameraVariableTable::AddVariable(this,&local_30);
    local_res8[0] = local_30.VariableID.Value;
    pFVar10 = UE::Cameras::FCameraVariableTable::FindEntry(this,local_30.VariableID);
    if (pFVar10 == (FEntry *)0x0) {
      local_40[0] = local_res8;
      bVar8 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>'::__l3::
              <lambda_1>::operator()(local_40);
      if (!bVar8) {
        return;
      }
    }
    EVar2 = pFVar10->Type;
  }
  else {
    EVar2 = pFVar10->Type;
  }
  if ((EVar2 != Vector4d) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar5 = (pFVar4->VariableTable).Memory;
  uVar3 = pFVar10->Offset;
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  pdVar1 = (double *)(puVar5 + uVar3);
  *pdVar1 = (param_3->field0_0x0)._s_0.X;
  pdVar1[1] = dVar7;
  dVar7 = (param_3->field0_0x0)._s_0.W;
  pdVar1 = (double *)(puVar5 + (ulonglong)uVar3 + 0x10);
  *pdVar1 = (param_3->field0_0x0)._s_0.Z;
  pdVar1[1] = dVar7;
  pFVar10->Flags = pFVar10->Flags | (WrittenThisFrame|Written);
  return;
}

// StaticRegisterNativesUBlueprintCameraVariableTableFunctionLibrary @ 14d5d0c80

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::
StaticRegisterNativesUBlueprintCameraVariableTableFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBooleanCameraVariable @ 14d5d8ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execGetBooleanCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ulong64 uVar6;
  bool *pbVar7;
  undefined1 uVar8;
  longlong *plVar9;
  longlong local_res10 [3];
  longlong local_48 [2];
  TReferenceControllerBase<1> *local_38;
  
  local_38 = (TReferenceControllerBase<1> *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10[0] = 0;
  plVar9 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar9;
  if (lVar2 == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    uVar8 = ErrorResult;
  }
  else if (local_res10[0] == 0) {
    local_res10[2] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    uVar8 = ErrorResult;
  }
  else {
    uVar8 = *(undefined1 *)(local_res10[0] + 0x40);
    if (((*(int *)(local_res10[0] + 0x38) == 0 && *(int *)(local_res10[0] + 0x34) == 0) &&
        *(int *)(local_res10[0] + 0x30) == 0) && *(int *)(local_res10[0] + 0x2c) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)(lVar4 + 0x2c),0x10);
    pbVar7 = UE::Cameras::FCameraVariableTable::FindValue<bool>
                       ((FCameraVariableTable *)(lVar2 + 0x88),(FCameraVariableID)(uint)uVar6);
    if (pbVar7 != (bool *)0x0) {
      uVar8 = *pbVar7;
    }
  }
  *(undefined1 *)param_3 = uVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execGetDoubleCameraVariable @ 14d5d9950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execGetDoubleCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ulong64 uVar6;
  double *pdVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong local_res10 [3];
  longlong local_48 [2];
  TReferenceControllerBase<1> *local_38;
  
  local_38 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10[0] = 0;
  plVar8 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    uVar9 = SUB84(ErrorResult,0);
    uVar10 = (undefined4)((ulonglong)ErrorResult >> 0x20);
  }
  else if (local_res10[0] == 0) {
    local_res10[2] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    uVar9 = SUB84(ErrorResult,0);
    uVar10 = (undefined4)((ulonglong)ErrorResult >> 0x20);
  }
  else {
    uVar9 = (undefined4)*(undefined8 *)(local_res10[0] + 0x40);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(local_res10[0] + 0x40) >> 0x20);
    if (((*(int *)(local_res10[0] + 0x38) == 0 && *(int *)(local_res10[0] + 0x34) == 0) &&
        *(int *)(local_res10[0] + 0x30) == 0) && *(int *)(local_res10[0] + 0x2c) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)(lVar4 + 0x2c),0x10);
    pdVar7 = UE::Cameras::FCameraVariableTable::FindValue<double>
                       ((FCameraVariableTable *)(lVar2 + 0x88),(FCameraVariableID)(uint)uVar6);
    if (pdVar7 != (double *)0x0) {
      uVar9 = SUB84(*pdVar7,0);
      uVar10 = (undefined4)((ulonglong)*pdVar7 >> 0x20);
    }
  }
  *(ulonglong *)param_3 = CONCAT44(uVar10,uVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execGetFloatCameraVariable @ 14d5d9f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execGetFloatCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ulong64 uVar6;
  float *pfVar7;
  longlong *plVar8;
  float fVar9;
  longlong local_res10 [3];
  longlong local_48 [2];
  TReferenceControllerBase<1> *local_38;
  
  local_38 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10[0] = 0;
  plVar8 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    fVar9 = ErrorResult;
  }
  else if (local_res10[0] == 0) {
    local_res10[2] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    fVar9 = ErrorResult;
  }
  else {
    fVar9 = *(float *)(local_res10[0] + 0x40);
    if (((*(int *)(local_res10[0] + 0x38) == 0 && *(int *)(local_res10[0] + 0x34) == 0) &&
        *(int *)(local_res10[0] + 0x30) == 0) && *(int *)(local_res10[0] + 0x2c) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)(lVar4 + 0x2c),0x10);
    pfVar7 = UE::Cameras::FCameraVariableTable::FindValue<float>
                       ((FCameraVariableTable *)(lVar2 + 0x88),(FCameraVariableID)(uint)uVar6);
    if (pfVar7 != (float *)0x0) {
      fVar9 = *pfVar7;
    }
  }
  *(float *)param_3 = fVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execGetInteger32CameraVariable @ 14d5da290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execGetInteger32CameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ulong64 uVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  longlong local_res10 [3];
  longlong local_48 [2];
  TReferenceControllerBase<1> *local_38;
  
  local_38 = (TReferenceControllerBase<1> *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10[0] = 0;
  plVar9 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar9;
  if (lVar2 == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    iVar8 = ErrorResult;
  }
  else if (local_res10[0] == 0) {
    local_res10[2] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    iVar8 = ErrorResult;
  }
  else {
    iVar8 = *(int *)(local_res10[0] + 0x40);
    if (((*(int *)(local_res10[0] + 0x38) == 0 && *(int *)(local_res10[0] + 0x34) == 0) &&
        *(int *)(local_res10[0] + 0x30) == 0) && *(int *)(local_res10[0] + 0x2c) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)(lVar4 + 0x2c),0x10);
    piVar7 = UE::Cameras::FCameraVariableTable::FindValue<int>
                       ((FCameraVariableTable *)(lVar2 + 0x88),(FCameraVariableID)(uint)uVar6);
    if (piVar7 != (int *)0x0) {
      iVar8 = *piVar7;
    }
  }
  *(int *)param_3 = iVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execGetRotatorCameraVariable @ 14d5da900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execGetRotatorCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ulong64 uVar6;
  TRotator<double> *pTVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  longlong local_res10 [3];
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  plVar8 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    uVar9 = ErrorResult.Pitch._0_4_;
    uVar10 = ErrorResult.Pitch._4_4_;
    uVar11 = ErrorResult.Yaw._0_4_;
    uVar12 = ErrorResult.Yaw._4_4_;
    dVar13 = ErrorResult.Roll;
  }
  else if (local_res10[0] == 0) {
    local_res10[2] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    uVar9 = ErrorResult.Pitch._0_4_;
    uVar10 = ErrorResult.Pitch._4_4_;
    uVar11 = ErrorResult.Yaw._0_4_;
    uVar12 = ErrorResult.Yaw._4_4_;
    dVar13 = ErrorResult.Roll;
  }
  else {
    if (((*(int *)(local_res10[0] + 0x38) == 0 && *(int *)(local_res10[0] + 0x34) == 0) &&
        *(int *)(local_res10[0] + 0x30) == 0) && *(int *)(local_res10[0] + 0x2c) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)(lVar4 + 0x2c),0x10);
    pTVar7 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>
                       ((FCameraVariableTable *)(lVar2 + 0x88),(FCameraVariableID)(uint)uVar6);
    if (pTVar7 == (TRotator<double> *)0x0) {
      uVar9 = *(undefined4 *)(lVar4 + 0x40);
      uVar10 = *(undefined4 *)(lVar4 + 0x44);
      uVar11 = *(undefined4 *)(lVar4 + 0x48);
      uVar12 = *(undefined4 *)(lVar4 + 0x4c);
      dVar13 = *(double *)(lVar4 + 0x50);
    }
    else {
      uVar9 = *(undefined4 *)&pTVar7->Pitch;
      uVar10 = *(undefined4 *)((longlong)&pTVar7->Pitch + 4);
      uVar11 = *(undefined4 *)&pTVar7->Yaw;
      uVar12 = *(undefined4 *)((longlong)&pTVar7->Yaw + 4);
      dVar13 = pTVar7->Roll;
    }
  }
  *(undefined4 *)param_3 = uVar9;
  *(undefined4 *)((longlong)param_3 + 4) = uVar10;
  *(undefined4 *)((longlong)param_3 + 8) = uVar11;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar12;
  *(double *)((longlong)param_3 + 0x10) = dVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetTransformCameraVariable @ 14d5db590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execGetTransformCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  void *pvVar4;
  longlong lVar5;
  bool bVar6;
  ulong64 uVar7;
  TTransform<double> *pTVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  longlong local_res10 [3];
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  plVar10 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar10 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar5 = local_res10[0];
  pvVar4 = ThreadLocalStoragePointer;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ErrorResult.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      ErrorResult.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      ErrorResult.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      ErrorResult.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      ErrorResult.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      ErrorResult.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      ErrorResult.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      ErrorResult.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
      ;
      ErrorResult.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      ErrorResult.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      ErrorResult.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
      ;
      ErrorResult.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      ErrorResult.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      ErrorResult.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      ErrorResult.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      ErrorResult.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      ErrorResult.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      ErrorResult.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      _Init_thread_footer(&::_TSS0);
    }
  }
  lVar2 = *plVar10;
  if (lVar2 == 0) {
    local_res10[1] = 0;
    pwVar9 = L"No camera variable table has been set";
  }
  else {
    if (lVar5 != 0) {
      if (((*(int *)(lVar5 + 0x38) == 0 && *(int *)(lVar5 + 0x34) == 0) &&
          *(int *)(lVar5 + 0x30) == 0) && *(int *)(lVar5 + 0x2c) == 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar7 = CityHash64((char *)(lVar5 + 0x2c),0x10);
      pTVar8 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TTransform<double>_>
                         ((FCameraVariableTable *)(lVar2 + 0x88),(FCameraVariableID)(uint)uVar7);
      if (pTVar8 == (TTransform<double> *)0x0) {
        uVar11 = *(undefined4 *)(lVar5 + 0x40);
        uVar12 = *(undefined4 *)(lVar5 + 0x44);
        uVar13 = *(undefined4 *)(lVar5 + 0x48);
        uVar14 = *(undefined4 *)(lVar5 + 0x4c);
        uVar15 = *(undefined4 *)(lVar5 + 0x50);
        uVar16 = *(undefined4 *)(lVar5 + 0x54);
        uVar17 = *(undefined4 *)(lVar5 + 0x58);
        uVar18 = *(undefined4 *)(lVar5 + 0x5c);
        uVar19 = *(undefined4 *)(lVar5 + 0x60);
        uVar20 = *(undefined4 *)(lVar5 + 100);
        uVar21 = *(undefined4 *)(lVar5 + 0x68);
        uVar22 = *(undefined4 *)(lVar5 + 0x6c);
        uVar23 = *(undefined4 *)(lVar5 + 0x70);
        uVar24 = *(undefined4 *)(lVar5 + 0x74);
        uVar25 = *(undefined4 *)(lVar5 + 0x78);
        uVar26 = *(undefined4 *)(lVar5 + 0x7c);
        uVar27 = *(undefined4 *)(lVar5 + 0x80);
        uVar28 = *(undefined4 *)(lVar5 + 0x84);
        uVar29 = *(undefined4 *)(lVar5 + 0x88);
        uVar30 = *(undefined4 *)(lVar5 + 0x8c);
        uVar31 = *(undefined4 *)(lVar5 + 0x90);
        uVar32 = *(undefined4 *)(lVar5 + 0x94);
        uVar33 = *(undefined4 *)(lVar5 + 0x98);
        uVar34 = *(undefined4 *)(lVar5 + 0x9c);
      }
      else {
        uVar11 = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
        uVar12 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
        uVar13 = *(undefined4 *)((pTVar8->Rotation).XY.m128d_f64 + 1);
        uVar14 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
        uVar15 = *(undefined4 *)(pTVar8->Rotation).ZW.m128d_f64;
        uVar16 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 4);
        uVar17 = *(undefined4 *)((pTVar8->Rotation).ZW.m128d_f64 + 1);
        uVar18 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 0xc);
        uVar19 = *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
        uVar20 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
        uVar21 = *(undefined4 *)((pTVar8->Translation).XY.m128d_f64 + 1);
        uVar22 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
        uVar23 = *(undefined4 *)(pTVar8->Translation).ZW.m128d_f64;
        uVar24 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
        uVar25 = *(undefined4 *)((pTVar8->Translation).ZW.m128d_f64 + 1);
        uVar26 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
        uVar27 = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
        uVar28 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
        uVar29 = *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
        uVar30 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
        uVar31 = *(undefined4 *)(pTVar8->Scale3D).ZW.m128d_f64;
        uVar32 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
        uVar33 = *(undefined4 *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
        uVar34 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
      }
      goto LAB_14d5db77b;
    }
    local_res10[2] = 0;
    pwVar9 = L"No camera variable asset was given";
  }
  FFrame::KismetExecutionMessage(pwVar9,Error,(FName)0x0);
  uVar11 = ErrorResult.Rotation.XY.m128d_f64[0]._0_4_;
  uVar12 = ErrorResult.Rotation.XY.m128d_f64[0]._4_4_;
  uVar13 = ErrorResult.Rotation.XY.m128d_f64[1]._0_4_;
  uVar14 = ErrorResult.Rotation.XY.m128d_f64[1]._4_4_;
  uVar15 = ErrorResult.Rotation.ZW.m128d_f64[0]._0_4_;
  uVar16 = ErrorResult.Rotation.ZW.m128d_f64[0]._4_4_;
  uVar17 = ErrorResult.Rotation.ZW.m128d_f64[1]._0_4_;
  uVar18 = ErrorResult.Rotation.ZW.m128d_f64[1]._4_4_;
  uVar19 = ErrorResult.Translation.XY.m128d_f64[0]._0_4_;
  uVar20 = ErrorResult.Translation.XY.m128d_f64[0]._4_4_;
  uVar21 = ErrorResult.Translation.XY.m128d_f64[1]._0_4_;
  uVar22 = ErrorResult.Translation.XY.m128d_f64[1]._4_4_;
  uVar23 = ErrorResult.Translation.ZW.m128d_f64[0]._0_4_;
  uVar24 = ErrorResult.Translation.ZW.m128d_f64[0]._4_4_;
  uVar25 = ErrorResult.Translation.ZW.m128d_f64[1]._0_4_;
  uVar26 = ErrorResult.Translation.ZW.m128d_f64[1]._4_4_;
  uVar27 = ErrorResult.Scale3D.XY.m128d_f64[0]._0_4_;
  uVar28 = ErrorResult.Scale3D.XY.m128d_f64[0]._4_4_;
  uVar29 = ErrorResult.Scale3D.XY.m128d_f64[1]._0_4_;
  uVar30 = ErrorResult.Scale3D.XY.m128d_f64[1]._4_4_;
  uVar31 = ErrorResult.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar32 = ErrorResult.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar33 = ErrorResult.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar34 = ErrorResult.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14d5db77b:
  *(undefined4 *)param_3 = uVar11;
  *(undefined4 *)((longlong)param_3 + 4) = uVar12;
  *(undefined4 *)((longlong)param_3 + 8) = uVar13;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar18;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar19;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar20;
  *(undefined4 *)((longlong)param_3 + 0x28) = uVar21;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar22;
  *(undefined4 *)((longlong)param_3 + 0x30) = uVar23;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar24;
  *(undefined4 *)((longlong)param_3 + 0x38) = uVar25;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar26;
  *(undefined4 *)((longlong)param_3 + 0x40) = uVar27;
  *(undefined4 *)((longlong)param_3 + 0x44) = uVar28;
  *(undefined4 *)((longlong)param_3 + 0x48) = uVar29;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uVar30;
  *(undefined4 *)((longlong)param_3 + 0x50) = uVar31;
  *(undefined4 *)((longlong)param_3 + 0x54) = uVar32;
  *(undefined4 *)((longlong)param_3 + 0x58) = uVar33;
  *(undefined4 *)((longlong)param_3 + 0x5c) = uVar34;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetVector2CameraVariable @ 14d5db840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execGetVector2CameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ulong64 uVar6;
  TVector2<double> *pTVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong local_res10 [3];
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  plVar8 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    uVar9 = ErrorResult.field0_0x0._0_4_;
    uVar10 = ErrorResult.field0_0x0._4_4_;
    uVar11 = ErrorResult.field0_0x0._8_4_;
    uVar12 = ErrorResult.field0_0x0._12_4_;
  }
  else if (local_res10[0] == 0) {
    local_res10[2] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    uVar9 = ErrorResult.field0_0x0._0_4_;
    uVar10 = ErrorResult.field0_0x0._4_4_;
    uVar11 = ErrorResult.field0_0x0._8_4_;
    uVar12 = ErrorResult.field0_0x0._12_4_;
  }
  else {
    if (((*(int *)(local_res10[0] + 0x38) == 0 && *(int *)(local_res10[0] + 0x34) == 0) &&
        *(int *)(local_res10[0] + 0x30) == 0) && *(int *)(local_res10[0] + 0x2c) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)(lVar4 + 0x2c),0x10);
    pTVar7 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                       ((FCameraVariableTable *)(lVar2 + 0x88),(FCameraVariableID)(uint)uVar6);
    if (pTVar7 == (TVector2<double> *)0x0) {
      uVar9 = *(undefined4 *)(lVar4 + 0x40);
      uVar10 = *(undefined4 *)(lVar4 + 0x44);
      uVar11 = *(undefined4 *)(lVar4 + 0x48);
      uVar12 = *(undefined4 *)(lVar4 + 0x4c);
    }
    else {
      uVar9 = *(undefined4 *)&pTVar7->field0_0x0;
      uVar10 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
      uVar11 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
      uVar12 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
    }
  }
  *(undefined4 *)param_3 = uVar9;
  *(undefined4 *)((longlong)param_3 + 4) = uVar10;
  *(undefined4 *)((longlong)param_3 + 8) = uVar11;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetVector3CameraVariable @ 14d5db9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execGetVector3CameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ulong64 uVar6;
  TVector<double> *pTVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong local_res10 [3];
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  plVar8 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
    uVar9 = ErrorResult.field0_0x0._0_4_;
    uVar10 = ErrorResult.field0_0x0._4_4_;
    uVar11 = ErrorResult.field0_0x0._8_4_;
    uVar12 = ErrorResult.field0_0x0._12_4_;
    uVar13 = ErrorResult.field0_0x0._s_0.Z;
  }
  else if (local_res10[0] == 0) {
    local_res10[2] = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
    uVar9 = ErrorResult.field0_0x0._0_4_;
    uVar10 = ErrorResult.field0_0x0._4_4_;
    uVar11 = ErrorResult.field0_0x0._8_4_;
    uVar12 = ErrorResult.field0_0x0._12_4_;
    uVar13 = ErrorResult.field0_0x0._s_0.Z;
  }
  else {
    if (((*(int *)(local_res10[0] + 0x38) == 0 && *(int *)(local_res10[0] + 0x34) == 0) &&
        *(int *)(local_res10[0] + 0x30) == 0) && *(int *)(local_res10[0] + 0x2c) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)(lVar4 + 0x2c),0x10);
    pTVar7 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                       ((FCameraVariableTable *)(lVar2 + 0x88),(FCameraVariableID)(uint)uVar6);
    if (pTVar7 == (TVector<double> *)0x0) {
      uVar9 = *(undefined4 *)(lVar4 + 0x40);
      uVar10 = *(undefined4 *)(lVar4 + 0x44);
      uVar11 = *(undefined4 *)(lVar4 + 0x48);
      uVar12 = *(undefined4 *)(lVar4 + 0x4c);
      uVar13 = *(double *)(lVar4 + 0x50);
    }
    else {
      uVar9 = *(undefined4 *)&pTVar7->field0_0x0;
      uVar10 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
      uVar11 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
      uVar12 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
      uVar13 = (pTVar7->field0_0x0)._s_0.Z;
    }
  }
  *(undefined4 *)param_3 = uVar9;
  *(undefined4 *)((longlong)param_3 + 4) = uVar10;
  *(undefined4 *)((longlong)param_3 + 8) = uVar11;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar12;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetVector4CameraVariable @ 14d5dbba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execGetVector4CameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ulong64 uVar6;
  TVector4<double> *pTVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong local_res10 [3];
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  plVar9 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar9;
  if (lVar2 == 0) {
    local_res10[1] = 0;
    pwVar8 = L"No camera variable table has been set";
  }
  else {
    if (local_res10[0] != 0) {
      if (((*(int *)(local_res10[0] + 0x38) == 0 && *(int *)(local_res10[0] + 0x34) == 0) &&
          *(int *)(local_res10[0] + 0x30) == 0) && *(int *)(local_res10[0] + 0x2c) == 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar6 = CityHash64((char *)(lVar4 + 0x2c),0x10);
      pTVar7 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector4<double>_>
                         ((FCameraVariableTable *)(lVar2 + 0x88),(FCameraVariableID)(uint)uVar6);
      if (pTVar7 == (TVector4<double> *)0x0) {
        uVar10 = *(undefined4 *)(lVar4 + 0x40);
        uVar11 = *(undefined4 *)(lVar4 + 0x44);
        uVar12 = *(undefined4 *)(lVar4 + 0x48);
        uVar13 = *(undefined4 *)(lVar4 + 0x4c);
        uVar14 = *(undefined4 *)(lVar4 + 0x50);
        uVar15 = *(undefined4 *)(lVar4 + 0x54);
        uVar16 = *(undefined4 *)(lVar4 + 0x58);
        uVar17 = *(undefined4 *)(lVar4 + 0x5c);
      }
      else {
        uVar10 = *(undefined4 *)&pTVar7->field0_0x0;
        uVar11 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
        uVar12 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
        uVar13 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
        uVar14 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0x10);
        uVar15 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0x14);
        uVar16 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0x18);
        uVar17 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0x1c);
      }
      goto LAB_14d5dbd21;
    }
    local_res10[2] = 0;
    pwVar8 = L"No camera variable asset was given";
  }
  FFrame::KismetExecutionMessage(pwVar8,Error,(FName)0x0);
  uVar10 = ErrorResult.field0_0x0._0_4_;
  uVar11 = ErrorResult.field0_0x0._4_4_;
  uVar12 = ErrorResult.field0_0x0._8_4_;
  uVar13 = ErrorResult.field0_0x0._12_4_;
  uVar14 = ErrorResult.field0_0x0._16_4_;
  uVar15 = ErrorResult.field0_0x0._20_4_;
  uVar16 = ErrorResult.field0_0x0._24_4_;
  uVar17 = ErrorResult.field0_0x0._28_4_;
LAB_14d5dbd21:
  *(undefined4 *)param_3 = uVar10;
  *(undefined4 *)((longlong)param_3 + 4) = uVar11;
  *(undefined4 *)((longlong)param_3 + 8) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar13;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar17;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execSetBooleanCameraVariable @ 14d5dc6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execSetBooleanCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  UCameraVariableAsset *this;
  bool bVar4;
  ulong64 uVar5;
  FEntry *pFVar6;
  longlong *plVar7;
  FCameraVariableTable *this_00;
  bool bVar8;
  int local_res10 [4];
  uint local_res20 [2];
  UCameraVariableAsset *local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint *local_50;
  longlong local_48 [2];
  TReferenceControllerBase<1> *local_38;
  FCameraVariableDefinition local_30;
  
  local_38 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_68 = (UCameraVariableAsset *)0x0;
  plVar7 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_68;
  bVar8 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar7;
  if (lVar2 == 0) {
    local_60 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
  }
  else if (local_68 == (UCameraVariableAsset *)0x0) {
    local_58 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
  }
  else {
    this_00 = (FCameraVariableTable *)(lVar2 + 0x88);
    if ((((local_68->Guid).D == 0 && (local_68->Guid).C == 0) && (local_68->Guid).B == 0) &&
        (local_68->Guid).A == 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar5 = CityHash64((char *)&this->Guid,0x10);
    pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)(uint)uVar5);
    if (pFVar6 == (FEntry *)0x0) {
      UCameraVariableAsset::GetVariableDefinition(this,&local_30);
      UE::Cameras::FCameraVariableTable::AddVariable(this_00,&local_30);
      local_res20[0] = local_30.VariableID.Value;
      pFVar6 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,local_30.VariableID);
      if (pFVar6 == (FEntry *)0x0) {
        local_50 = local_res20;
        bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l3::<lambda_1>::operator()
                          (&local_50);
        if (!bVar4) goto LAB_14d5dc947;
      }
      if (pFVar6->Type != Boolean) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(bool *)((ulonglong)pFVar6->Offset + *(longlong *)(lVar2 + 0xe8)) = bVar8;
      pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
    }
    else {
      if (pFVar6->Type != Boolean) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(bool *)((ulonglong)pFVar6->Offset + *(longlong *)(lVar2 + 0xe8)) = bVar8;
      pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
    }
  }
LAB_14d5dc947:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execSetDoubleCameraVariable @ 14d5dd520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execSetDoubleCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  UCameraVariableAsset *this;
  bool bVar5;
  ulong64 uVar6;
  FEntry *pFVar7;
  longlong *plVar8;
  FCameraVariableTable *this_00;
  uint local_res10 [2];
  undefined8 local_res20;
  UCameraVariableAsset *local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint *local_50;
  longlong local_48 [2];
  TReferenceControllerBase<1> *local_38;
  FCameraVariableDefinition local_30;
  
  local_38 = (TReferenceControllerBase<1> *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_68 = (UCameraVariableAsset *)0x0;
  plVar8 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this = local_68;
  uVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_60 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
  }
  else if (local_68 == (UCameraVariableAsset *)0x0) {
    local_58 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
  }
  else {
    this_00 = (FCameraVariableTable *)(lVar2 + 0x88);
    if ((((local_68->Guid).D == 0 && (local_68->Guid).C == 0) && (local_68->Guid).B == 0) &&
        (local_68->Guid).A == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)&this->Guid,0x10);
    pFVar7 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)(uint)uVar6);
    if (pFVar7 == (FEntry *)0x0) {
      UCameraVariableAsset::GetVariableDefinition(this,&local_30);
      UE::Cameras::FCameraVariableTable::AddVariable(this_00,&local_30);
      local_res10[0] = local_30.VariableID.Value;
      pFVar7 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,local_30.VariableID);
      if (pFVar7 == (FEntry *)0x0) {
        local_50 = local_res10;
        bVar5 = `UE::Cameras::FCameraVariableTable::SetValue<double>'::__l3::<lambda_1>::operator()
                          (&local_50);
        if (!bVar5) goto LAB_14d5dd7c1;
      }
      if (pFVar7->Type != Double) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined8 *)((ulonglong)pFVar7->Offset + *(longlong *)(lVar2 + 0xe8)) = uVar4;
      pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
    }
    else {
      if (pFVar7->Type != Double) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined8 *)((ulonglong)pFVar7->Offset + *(longlong *)(lVar2 + 0xe8)) = uVar4;
      pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
    }
  }
LAB_14d5dd7c1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execSetFloatCameraVariable @ 14d5ddb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execSetFloatCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  UCameraVariableAsset *this;
  bool bVar5;
  ulong64 uVar6;
  FEntry *pFVar7;
  longlong *plVar8;
  FCameraVariableTable *this_00;
  undefined4 local_res10 [2];
  uint local_res20 [2];
  UCameraVariableAsset *local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint *local_50;
  longlong local_48 [2];
  TReferenceControllerBase<1> *local_38;
  FCameraVariableDefinition local_30;
  
  local_38 = (TReferenceControllerBase<1> *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_68 = (UCameraVariableAsset *)0x0;
  plVar8 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_68;
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_60 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
  }
  else if (local_68 == (UCameraVariableAsset *)0x0) {
    local_58 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
  }
  else {
    this_00 = (FCameraVariableTable *)(lVar2 + 0x88);
    if ((((local_68->Guid).D == 0 && (local_68->Guid).C == 0) && (local_68->Guid).B == 0) &&
        (local_68->Guid).A == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)&this->Guid,0x10);
    pFVar7 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)(uint)uVar6);
    if (pFVar7 == (FEntry *)0x0) {
      UCameraVariableAsset::GetVariableDefinition(this,&local_30);
      UE::Cameras::FCameraVariableTable::AddVariable(this_00,&local_30);
      local_res20[0] = local_30.VariableID.Value;
      pFVar7 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,local_30.VariableID);
      if (pFVar7 == (FEntry *)0x0) {
        local_50 = local_res20;
        bVar5 = `UE::Cameras::FCameraVariableTable::SetValue<float>'::__l3::<lambda_1>::operator()
                          (&local_50);
        if (!bVar5) goto LAB_14d5dde2c;
      }
      if (pFVar7->Type != Float) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)((ulonglong)pFVar7->Offset + *(longlong *)(lVar2 + 0xe8)) = uVar4;
      pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
    }
    else {
      if (pFVar7->Type != Float) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)((ulonglong)pFVar7->Offset + *(longlong *)(lVar2 + 0xe8)) = uVar4;
      pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
    }
  }
LAB_14d5dde2c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execSetInteger32CameraVariable @ 14d5de040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execSetInteger32CameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  UCameraVariableAsset *this;
  bool bVar5;
  ulong64 uVar6;
  FEntry *pFVar7;
  longlong *plVar8;
  FCameraVariableTable *this_00;
  undefined4 local_res10 [4];
  uint local_res20 [2];
  UCameraVariableAsset *local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint *local_50;
  longlong local_48 [2];
  TReferenceControllerBase<1> *local_38;
  FCameraVariableDefinition local_30;
  
  local_38 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_68 = (UCameraVariableAsset *)0x0;
  plVar8 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_68;
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_60 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
  }
  else if (local_68 == (UCameraVariableAsset *)0x0) {
    local_58 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
  }
  else {
    this_00 = (FCameraVariableTable *)(lVar2 + 0x88);
    if ((((local_68->Guid).D == 0 && (local_68->Guid).C == 0) && (local_68->Guid).B == 0) &&
        (local_68->Guid).A == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = CityHash64((char *)&this->Guid,0x10);
    pFVar7 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)(uint)uVar6);
    if (pFVar7 == (FEntry *)0x0) {
      UCameraVariableAsset::GetVariableDefinition(this,&local_30);
      UE::Cameras::FCameraVariableTable::AddVariable(this_00,&local_30);
      local_res20[0] = local_30.VariableID.Value;
      pFVar7 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,local_30.VariableID);
      if (pFVar7 == (FEntry *)0x0) {
        local_50 = local_res20;
        bVar5 = `UE::Cameras::FCameraVariableTable::SetValue<int>'::__l3::<lambda_1>::operator()
                          (&local_50);
        if (!bVar5) goto LAB_14d5de2d1;
      }
      if (pFVar7->Type != Integer32) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)((ulonglong)pFVar7->Offset + *(longlong *)(lVar2 + 0xe8)) = uVar4;
      pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
    }
    else {
      if (pFVar7->Type != Integer32) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)((ulonglong)pFVar7->Offset + *(longlong *)(lVar2 + 0xe8)) = uVar4;
      pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
    }
  }
LAB_14d5de2d1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execSetRotatorCameraVariable @ 14d5dea30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execSetRotatorCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  UCameraVariableAsset *this;
  bool bVar7;
  ulong64 uVar8;
  FEntry *pFVar9;
  uchar *puVar10;
  longlong *plVar11;
  FCameraVariableTable *this_00;
  uint local_res10 [4];
  UCameraVariableAsset *local_res20;
  uint *local_68;
  longlong local_60 [2];
  TReferenceControllerBase<1> *local_50;
  uchar local_48 [24];
  FCameraVariableDefinition local_30;
  
  local_50 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  local_res20 = (UCameraVariableAsset *)0x0;
  plVar11 = local_60;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar11 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  this = local_res20;
  puVar10 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *plVar11;
  if (lVar4 == 0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
  }
  else if (local_res20 == (UCameraVariableAsset *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
  }
  else {
    this_00 = (FCameraVariableTable *)(lVar4 + 0x88);
    if ((((local_res20->Guid).D == 0 && (local_res20->Guid).C == 0) && (local_res20->Guid).B == 0)
        && (local_res20->Guid).A == 0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar8 = CityHash64((char *)&this->Guid,0x10);
    pFVar9 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)(uint)uVar8);
    if (pFVar9 == (FEntry *)0x0) {
      UCameraVariableAsset::GetVariableDefinition(this,&local_30);
      UE::Cameras::FCameraVariableTable::AddVariable(this_00,&local_30);
      local_res10[0] = local_30.VariableID.Value;
      pFVar9 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,local_30.VariableID);
      if (pFVar9 == (FEntry *)0x0) {
        local_68 = local_res10;
        bVar7 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l3::
                <lambda_1>::operator()(&local_68);
        if (!bVar7) goto LAB_14d5decec;
      }
      if (pFVar9->Type != Rotator3d) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar2 = pFVar9->Offset;
      lVar4 = *(longlong *)(lVar4 + 0xe8);
      uVar6 = *(undefined8 *)(puVar10 + 8);
      puVar1 = (undefined8 *)((ulonglong)uVar2 + lVar4);
      *puVar1 = *(undefined8 *)puVar10;
      puVar1[1] = uVar6;
      *(undefined8 *)((ulonglong)uVar2 + 0x10 + lVar4) = *(undefined8 *)(puVar10 + 0x10);
      pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
    }
    else {
      if (pFVar9->Type != Rotator3d) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar2 = pFVar9->Offset;
      lVar4 = *(longlong *)(lVar4 + 0xe8);
      uVar6 = *(undefined8 *)(puVar10 + 8);
      puVar1 = (undefined8 *)((ulonglong)uVar2 + lVar4);
      *puVar1 = *(undefined8 *)puVar10;
      puVar1[1] = uVar6;
      *(undefined8 *)((ulonglong)uVar2 + 0x10 + lVar4) = *(undefined8 *)(puVar10 + 0x10);
      pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
    }
  }
LAB_14d5decec:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  return;
}

// execSetTransformCameraVariable @ 14d5df540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execSetTransformCameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  UCameraVariableAsset *this;
  bool bVar18;
  ulong64 uVar19;
  FEntry *pFVar20;
  ulonglong uVar21;
  uchar *puVar22;
  longlong *plVar23;
  FCameraVariableTable *this_00;
  undefined1 auStackY_118 [32];
  uint local_e8 [2];
  UCameraVariableAsset *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint *local_c8;
  longlong local_c0 [2];
  TReferenceControllerBase<1> *local_b0;
  FCameraVariableDefinition local_a8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_b0 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c0);
  }
  local_e0 = (UCameraVariableAsset *)0x0;
  plVar23 = local_c0;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar23 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar15 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar16 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88._8_4_ = SUB84((double)fVar8,0);
  local_88._0_8_ = (double)fVar5;
  local_88._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_78._8_4_ = SUB84((double)fVar14,0);
  local_78._0_8_ = (double)fVar11;
  local_78._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_68._8_4_ = SUB84((double)fVar9,0);
  local_68._0_8_ = (double)fVar6;
  local_68._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_58._8_4_ = SUB84((double)fVar15,0);
  local_58._0_8_ = (double)fVar12;
  local_58._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  local_48._8_4_ = SUB84((double)fVar10,0);
  local_48._0_8_ = (double)fVar7;
  local_48._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_38._8_4_ = SUB84((double)fVar16,0);
  local_38._0_8_ = (double)fVar13;
  local_38._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  this = local_e0;
  puVar22 = local_88;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar22 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *plVar23;
  if (lVar3 == 0) {
    local_d8 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
  }
  else if (local_e0 == (UCameraVariableAsset *)0x0) {
    local_d0 = 0;
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
  }
  else {
    this_00 = (FCameraVariableTable *)(lVar3 + 0x88);
    if ((((local_e0->Guid).D == 0 && (local_e0->Guid).C == 0) && (local_e0->Guid).B == 0) &&
        (local_e0->Guid).A == 0) {
      bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_841517864337801202>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                          ,0xe,"Guid.IsValid()");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar19 = CityHash64((char *)&this->Guid,0x10);
    pFVar20 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)(uint)uVar19);
    if (pFVar20 == (FEntry *)0x0) {
      UCameraVariableAsset::GetVariableDefinition(this,&local_a8);
      UE::Cameras::FCameraVariableTable::AddVariable(this_00,&local_a8);
      local_e8[0] = local_a8.VariableID.Value;
      pFVar20 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,local_a8.VariableID);
      if (pFVar20 == (FEntry *)0x0) {
        local_c8 = local_e8;
        bVar18 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>'::__l3
                 ::<lambda_1>::operator()(&local_c8);
        if (!bVar18) goto LAB_14d5df87e;
      }
      if (pFVar20->Type != Transform3d) {
        bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7269619262472323284>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                            ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar17 = *(undefined8 *)(puVar22 + 8);
      uVar21 = (ulonglong)pFVar20->Offset;
      lVar3 = *(longlong *)(lVar3 + 0xe8);
      *(undefined8 *)(uVar21 + lVar3) = *(undefined8 *)puVar22;
      ((undefined8 *)(uVar21 + lVar3))[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x18);
      puVar1 = (undefined8 *)(uVar21 + 0x10 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x10);
      puVar1[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x28);
      puVar1 = (undefined8 *)(uVar21 + 0x20 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x20);
      puVar1[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x38);
      puVar1 = (undefined8 *)(uVar21 + 0x30 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x30);
      puVar1[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x48);
      puVar1 = (undefined8 *)(uVar21 + 0x40 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x40);
      puVar1[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x58);
      puVar1 = (undefined8 *)(uVar21 + 0x50 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x50);
      puVar1[1] = uVar17;
      pFVar20->Flags = pFVar20->Flags | (WrittenThisFrame|Written);
    }
    else {
      if (pFVar20->Type != Transform3d) {
        bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7269619262472323284>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                            ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar17 = *(undefined8 *)(puVar22 + 8);
      uVar21 = (ulonglong)pFVar20->Offset;
      lVar3 = *(longlong *)(lVar3 + 0xe8);
      *(undefined8 *)(uVar21 + lVar3) = *(undefined8 *)puVar22;
      ((undefined8 *)(uVar21 + lVar3))[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x18);
      puVar1 = (undefined8 *)(uVar21 + 0x10 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x10);
      puVar1[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x28);
      puVar1 = (undefined8 *)(uVar21 + 0x20 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x20);
      puVar1[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x38);
      puVar1 = (undefined8 *)(uVar21 + 0x30 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x30);
      puVar1[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x48);
      puVar1 = (undefined8 *)(uVar21 + 0x40 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x40);
      puVar1[1] = uVar17;
      uVar17 = *(undefined8 *)(puVar22 + 0x58);
      puVar1 = (undefined8 *)(uVar21 + 0x50 + lVar3);
      *puVar1 = *(undefined8 *)(puVar22 + 0x50);
      puVar1[1] = uVar17;
      pFVar20->Flags = pFVar20->Flags | (WrittenThisFrame|Written);
    }
  }
LAB_14d5df87e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  return;
}

// execSetVector2CameraVariable @ 14d5df8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execSetVector2CameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  UCameraVariableAsset *this;
  bool bVar6;
  ulong64 uVar7;
  FEntry *pFVar8;
  uchar *puVar9;
  longlong *plVar10;
  FCameraVariableTable *this_00;
  uint local_res10 [4];
  UCameraVariableAsset *local_res20;
  uint *local_68;
  uchar local_60 [16];
  longlong local_50 [2];
  TReferenceControllerBase<1> *local_40;
  FCameraVariableDefinition local_38;
  
  local_40 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  local_res20 = (UCameraVariableAsset *)0x0;
  plVar10 = local_50;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar10 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  this = local_res20;
  puVar9 = local_60;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *plVar10;
  if (lVar3 == 0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
  }
  else if (local_res20 == (UCameraVariableAsset *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
  }
  else {
    this_00 = (FCameraVariableTable *)(lVar3 + 0x88);
    if ((((local_res20->Guid).D == 0 && (local_res20->Guid).C == 0) && (local_res20->Guid).B == 0)
        && (local_res20->Guid).A == 0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = CityHash64((char *)&this->Guid,0x10);
    pFVar8 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)(uint)uVar7);
    if (pFVar8 == (FEntry *)0x0) {
      UCameraVariableAsset::GetVariableDefinition(this,&local_38);
      UE::Cameras::FCameraVariableTable::AddVariable(this_00,&local_38);
      local_res10[0] = local_38.VariableID.Value;
      pFVar8 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,local_38.VariableID);
      if (pFVar8 == (FEntry *)0x0) {
        local_68 = local_res10;
        bVar6 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>'::__l3::
                <lambda_1>::operator()(&local_68);
        if (!bVar6) goto LAB_14d5dfb66;
      }
      if (pFVar8->Type != Vector2d) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar5 = *(undefined8 *)(puVar9 + 8);
      puVar1 = (undefined8 *)((ulonglong)pFVar8->Offset + *(longlong *)(lVar3 + 0xe8));
      *puVar1 = *(undefined8 *)puVar9;
      puVar1[1] = uVar5;
      pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
    }
    else {
      if (pFVar8->Type != Vector2d) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar5 = *(undefined8 *)(puVar9 + 8);
      puVar1 = (undefined8 *)((ulonglong)pFVar8->Offset + *(longlong *)(lVar3 + 0xe8));
      *puVar1 = *(undefined8 *)puVar9;
      puVar1[1] = uVar5;
      pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
    }
  }
LAB_14d5dfb66:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// execSetVector3CameraVariable @ 14d5dfb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execSetVector3CameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  UCameraVariableAsset *this;
  bool bVar7;
  ulong64 uVar8;
  FEntry *pFVar9;
  uchar *puVar10;
  longlong *plVar11;
  FCameraVariableTable *this_00;
  uint local_res10 [4];
  UCameraVariableAsset *local_res20;
  uint *local_68;
  longlong local_60 [2];
  TReferenceControllerBase<1> *local_50;
  uchar local_48 [24];
  FCameraVariableDefinition local_30;
  
  local_50 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  local_res20 = (UCameraVariableAsset *)0x0;
  plVar11 = local_60;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar11 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  this = local_res20;
  puVar10 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *plVar11;
  if (lVar4 == 0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
  }
  else if (local_res20 == (UCameraVariableAsset *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
  }
  else {
    this_00 = (FCameraVariableTable *)(lVar4 + 0x88);
    if ((((local_res20->Guid).D == 0 && (local_res20->Guid).C == 0) && (local_res20->Guid).B == 0)
        && (local_res20->Guid).A == 0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar8 = CityHash64((char *)&this->Guid,0x10);
    pFVar9 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)(uint)uVar8);
    if (pFVar9 == (FEntry *)0x0) {
      UCameraVariableAsset::GetVariableDefinition(this,&local_30);
      UE::Cameras::FCameraVariableTable::AddVariable(this_00,&local_30);
      local_res10[0] = local_30.VariableID.Value;
      pFVar9 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,local_30.VariableID);
      if (pFVar9 == (FEntry *)0x0) {
        local_68 = local_res10;
        bVar7 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>'::__l3::
                <lambda_1>::operator()(&local_68);
        if (!bVar7) goto LAB_14d5dfe4c;
      }
      if (pFVar9->Type != Vector3d) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar2 = pFVar9->Offset;
      lVar4 = *(longlong *)(lVar4 + 0xe8);
      uVar6 = *(undefined8 *)(puVar10 + 8);
      puVar1 = (undefined8 *)((ulonglong)uVar2 + lVar4);
      *puVar1 = *(undefined8 *)puVar10;
      puVar1[1] = uVar6;
      *(undefined8 *)((ulonglong)uVar2 + 0x10 + lVar4) = *(undefined8 *)(puVar10 + 0x10);
      pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
    }
    else {
      if (pFVar9->Type != Vector3d) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar2 = pFVar9->Offset;
      lVar4 = *(longlong *)(lVar4 + 0xe8);
      uVar6 = *(undefined8 *)(puVar10 + 8);
      puVar1 = (undefined8 *)((ulonglong)uVar2 + lVar4);
      *puVar1 = *(undefined8 *)puVar10;
      puVar1[1] = uVar6;
      *(undefined8 *)((ulonglong)uVar2 + 0x10 + lVar4) = *(undefined8 *)(puVar10 + 0x10);
      pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
    }
  }
LAB_14d5dfe4c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  return;
}

// execSetVector4CameraVariable @ 14d5dfe70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraVariableTableFunctionLibrary::execSetVector4CameraVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  UCameraVariableAsset *this;
  bool bVar7;
  ulong64 uVar8;
  FEntry *pFVar9;
  uchar *puVar10;
  longlong *plVar11;
  FCameraVariableTable *this_00;
  uint local_res10 [4];
  UCameraVariableAsset *local_res20;
  uint *local_78;
  longlong local_70 [2];
  TReferenceControllerBase<1> *local_60;
  uchar local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  FCameraVariableDefinition local_38;
  
  local_60 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_res20 = (UCameraVariableAsset *)0x0;
  plVar11 = local_70;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar11 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_48 = ___xmm_3ff00000000000000000000000000000;
  uStack_40 = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  this = local_res20;
  puVar10 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *plVar11;
  if (lVar4 == 0) {
    FFrame::KismetExecutionMessage(L"No camera variable table has been set",Error,(FName)0x0);
  }
  else if (local_res20 == (UCameraVariableAsset *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera variable asset was given",Error,(FName)0x0);
  }
  else {
    this_00 = (FCameraVariableTable *)(lVar4 + 0x88);
    if ((((local_res20->Guid).D == 0 && (local_res20->Guid).C == 0) && (local_res20->Guid).B == 0)
        && (local_res20->Guid).A == 0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_841517864337801202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                         ,0xe,"Guid.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar8 = CityHash64((char *)&this->Guid,0x10);
    pFVar9 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)(uint)uVar8);
    if (pFVar9 == (FEntry *)0x0) {
      UCameraVariableAsset::GetVariableDefinition(this,&local_38);
      UE::Cameras::FCameraVariableTable::AddVariable(this_00,&local_38);
      local_res10[0] = local_38.VariableID.Value;
      pFVar9 = UE::Cameras::FCameraVariableTable::FindEntry(this_00,local_38.VariableID);
      if (pFVar9 == (FEntry *)0x0) {
        local_78 = local_res10;
        bVar7 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>'::__l3::
                <lambda_1>::operator()(&local_78);
        if (!bVar7) goto LAB_14d5e0146;
      }
      if (pFVar9->Type != Vector4d) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar2 = pFVar9->Offset;
      lVar4 = *(longlong *)(lVar4 + 0xe8);
      uVar6 = *(undefined8 *)(puVar10 + 8);
      puVar1 = (undefined8 *)((ulonglong)uVar2 + lVar4);
      *puVar1 = *(undefined8 *)puVar10;
      puVar1[1] = uVar6;
      uVar6 = *(undefined8 *)(puVar10 + 0x18);
      puVar1 = (undefined8 *)((ulonglong)uVar2 + 0x10 + lVar4);
      *puVar1 = *(undefined8 *)(puVar10 + 0x10);
      puVar1[1] = uVar6;
      pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
    }
    else {
      if (pFVar9->Type != Vector4d) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar2 = pFVar9->Offset;
      lVar4 = *(longlong *)(lVar4 + 0xe8);
      uVar6 = *(undefined8 *)(puVar10 + 8);
      puVar1 = (undefined8 *)((ulonglong)uVar2 + lVar4);
      *puVar1 = *(undefined8 *)puVar10;
      puVar1[1] = uVar6;
      uVar6 = *(undefined8 *)(puVar10 + 0x18);
      puVar1 = (undefined8 *)((ulonglong)uVar2 + 0x10 + lVar4);
      *puVar1 = *(undefined8 *)(puVar10 + 0x10);
      puVar1[1] = uVar6;
      pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
    }
  }
LAB_14d5e0146:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  return;
}

