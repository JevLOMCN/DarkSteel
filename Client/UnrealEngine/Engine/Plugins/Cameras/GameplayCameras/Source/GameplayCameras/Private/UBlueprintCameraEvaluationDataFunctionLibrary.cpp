// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 16

// StaticClass @ 14d57a190

UClass * __cdecl UBlueprintCameraEvaluationDataFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraEvaluationDataFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUBlueprintCameraEvaluationDataFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraEvaluationDataFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraEvaluationDataFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.InnerSingleton;
}

// UBlueprintCameraEvaluationDataFunctionLibrary @ 14d58ee60

UBlueprintCameraEvaluationDataFunctionLibrary * __thiscall
UBlueprintCameraEvaluationDataFunctionLibrary::UBlueprintCameraEvaluationDataFunctionLibrary
          (UBlueprintCameraEvaluationDataFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintCameraEvaluationDataFunctionLibrary__6B_;
  return this;
}

// UBlueprintCameraEvaluationDataFunctionLibrary @ 14d58ee90

UBlueprintCameraEvaluationDataFunctionLibrary * __thiscall
UBlueprintCameraEvaluationDataFunctionLibrary::UBlueprintCameraEvaluationDataFunctionLibrary
          (UBlueprintCameraEvaluationDataFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintCameraEvaluationDataFunctionLibrary__6B_;
  return this;
}

// ~UBlueprintCameraEvaluationDataFunctionLibrary @ 14d591940

void __thiscall
UBlueprintCameraEvaluationDataFunctionLibrary::~UBlueprintCameraEvaluationDataFunctionLibrary
          (UBlueprintCameraEvaluationDataFunctionLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintCameraEvaluationDataFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BlendCameraEvaluationData @ 14d59a960

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::BlendCameraEvaluationData
          (FBlueprintCameraEvaluationDataRef *param_1,FBlueprintCameraEvaluationDataRef *param_2,
          float param_3)

{
  if ((param_1->Result != (FCameraNodeEvaluationResult *)0x0) &&
     (param_2->Result != (FCameraNodeEvaluationResult *)0x0)) {
    UE::Cameras::FCameraNodeEvaluationResult::LerpAll(param_1->Result,param_2->Result,param_3,true);
    return;
  }
  return;
}

// GetCameraPose @ 14d5a6bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraPose * __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::GetCameraPose
          (FBlueprintCameraPose *__return_storage_ptr__,FBlueprintCameraEvaluationDataRef *param_1)

{
  FCameraNodeEvaluationResult *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uchar uVar10;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  undefined8 local_60;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float fStack_24;
  undefined8 uStack_20;
  undefined4 uStack_17;
  undefined2 uStack_13;
  undefined1 uStack_11;
  
  pFVar1 = param_1->Result;
  if (pFVar1 == (FCameraNodeEvaluationResult *)0x0) {
    uVar10 = '\0';
    local_2c = 8;
    uStack_17 = 0;
    uStack_13 = 0;
    local_98 = 0.0;
    dStack_90 = 0.0;
    uStack_11 = 0;
    local_88 = 0.0;
    dStack_80 = 0.0;
    local_30 = 0.0;
    dStack_78 = 0.0;
    dStack_70 = 0.0;
    local_28 = 10.0;
    dStack_68 = __real_408f400000000000;
    local_60 = ___xmm_4033333344c00000420c0000bf800000;
    fStack_58 = (float)_UNK_152b79aa8;
    uStack_54 = (undefined4)((ulonglong)_UNK_152b79aa8 >> 0x20);
    fStack_24 = -1.0;
    uStack_50 = (undefined4)___xmm_41955c2941c71eb8bf80000042700000;
    uStack_4c = (undefined4)((ulonglong)___xmm_41955c2941c71eb8bf80000042700000 >> 0x20);
    uStack_48 = (undefined4)_UNK_152b79ab8;
    uStack_44 = (undefined4)((ulonglong)_UNK_152b79ab8 >> 0x20);
    uStack_20 = 0;
    uStack_40 = (undefined4)___xmm_3f80000042c800000000000000000000;
    uStack_3c = (undefined4)((ulonglong)___xmm_3f80000042c800000000000000000000 >> 0x20);
    uStack_38 = (undefined4)_UNK_152b79a98;
    local_34 = (float)((ulonglong)_UNK_152b79a98 >> 0x20);
  }
  else {
    local_88 = (pFVar1->CameraPose).Location.field0_0x0._s_0.Z;
    local_98 = (pFVar1->CameraPose).Location.field0_0x0._s_0.X;
    dStack_90 = (pFVar1->CameraPose).Location.field0_0x0._s_0.Y;
    local_2c = (pFVar1->CameraPose).DiaphragmBladeCount;
    dStack_70 = (pFVar1->CameraPose).Rotation.Roll;
    dStack_68 = (pFVar1->CameraPose).TargetDistance;
    uVar2 = (pFVar1->CameraPose).Aperture;
    uVar3 = (pFVar1->CameraPose).ShutterSpeed;
    uVar4 = (pFVar1->CameraPose).FocusDistance;
    uVar5 = (pFVar1->CameraPose).SensorWidth;
    dStack_80 = (pFVar1->CameraPose).Rotation.Pitch;
    dStack_78 = (pFVar1->CameraPose).Rotation.Yaw;
    uVar6 = (pFVar1->CameraPose).SensorHeight;
    uVar7 = (pFVar1->CameraPose).SensorHorizontalOffset;
    uVar8 = (pFVar1->CameraPose).SensorVerticalOffset;
    uVar9 = (pFVar1->CameraPose).ISO;
    local_30 = (pFVar1->CameraPose).Overscan;
    uVar10 = (pFVar1->CameraPose).ProjectionMode.Value;
    local_34 = (pFVar1->CameraPose).SqueezeFactor;
    local_28 = (pFVar1->CameraPose).NearClippingPlane;
    uStack_20._0_4_ = (pFVar1->CameraPose).PhysicalCameraBlendWeight;
    uStack_20._4_1_ = (pFVar1->CameraPose).EnablePhysicalCamera;
    uStack_20._5_1_ = (pFVar1->CameraPose).ConstrainAspectRatio;
    uStack_20._6_1_ = (pFVar1->CameraPose).OverrideAspectRatioAxisConstraint;
    uStack_20._7_1_ = (pFVar1->CameraPose).AspectRatioAxisConstraint;
    fStack_58 = (pFVar1->CameraPose).OrthographicWidth;
    fStack_24 = (pFVar1->CameraPose).FarClippingPlane;
    local_60._0_4_ = (pFVar1->CameraPose).FieldOfView;
    local_60._4_4_ = (pFVar1->CameraPose).FocalLength;
    uStack_54 = uVar2;
    uStack_50 = uVar3;
    uStack_4c = uVar4;
    uStack_48 = uVar5;
    uStack_44 = uVar6;
    uStack_40 = uVar7;
    uStack_3c = uVar8;
    uStack_38 = uVar9;
  }
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = local_98;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dStack_90;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = local_88;
  (__return_storage_ptr__->Rotation).Pitch = dStack_80;
  (__return_storage_ptr__->Rotation).Yaw = dStack_78;
  (__return_storage_ptr__->Rotation).Roll = dStack_70;
  __return_storage_ptr__->TargetDistance = dStack_68;
  __return_storage_ptr__->FieldOfView = (float)(undefined4)local_60;
  __return_storage_ptr__->FocalLength = (float)local_60._4_4_;
  __return_storage_ptr__->OrthographicWidth = fStack_58;
  __return_storage_ptr__->Aperture = (float)uStack_54;
  __return_storage_ptr__->ShutterSpeed = (float)uStack_50;
  __return_storage_ptr__->FocusDistance = (float)uStack_4c;
  __return_storage_ptr__->SensorWidth = (float)uStack_48;
  __return_storage_ptr__->SensorHeight = (float)uStack_44;
  __return_storage_ptr__->SensorHorizontalOffset = (float)uStack_40;
  __return_storage_ptr__->SensorVerticalOffset = (float)uStack_3c;
  __return_storage_ptr__->ISO = (float)uStack_38;
  __return_storage_ptr__->SqueezeFactor = local_34;
  __return_storage_ptr__->Overscan = local_30;
  __return_storage_ptr__->DiaphragmBladeCount = local_2c;
  __return_storage_ptr__->NearClippingPlane = local_28;
  __return_storage_ptr__->FarClippingPlane = fStack_24;
  __return_storage_ptr__->PhysicalCameraBlendWeight = (float)(undefined4)uStack_20;
  __return_storage_ptr__->EnablePhysicalCamera = (bool)uStack_20._4_1_;
  __return_storage_ptr__->ConstrainAspectRatio = (bool)uStack_20._5_1_;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = (bool)uStack_20._6_1_;
  __return_storage_ptr__->AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)uStack_20._7_1_;
  *(ulonglong *)&__return_storage_ptr__->ProjectionMode =
       CONCAT17(uStack_11,CONCAT25(uStack_13,CONCAT41(uStack_17,uVar10)));
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d5a8e90

UClass * __cdecl UBlueprintCameraEvaluationDataFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraEvaluationDataFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUBlueprintCameraEvaluationDataFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraEvaluationDataFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraEvaluationDataFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.InnerSingleton;
}

// MakeCameraEvaluationData @ 14d5b5a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraEvaluationDataRef * __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::MakeCameraEvaluationData
          (FBlueprintCameraEvaluationDataRef *__return_storage_ptr__)

{
  TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FBlueprintCameraEvaluationDataRef *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCameraNodeEvaluationResult *pFVar7;
  FCameraNodeEvaluationResult *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar1 = &__return_storage_ptr__->SharedResult;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Result = (FCameraNodeEvaluationResult *)0x0;
  pTVar1->Object = (FCameraNodeEvaluationResult *)0x0;
  (__return_storage_ptr__->SharedResult).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar4 = ::operator_new(0xa10);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar7 = (FCameraNodeEvaluationResult *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFCameraNodeEvaluationResult_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar4 + 1,0,0xa00);
    UE::Cameras::FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
              ((FCameraNodeEvaluationResult *)(pTVar4 + 1));
    pFVar7 = (FCameraNodeEvaluationResult *)(pTVar4 + 1);
    if (pFVar7 == (FCameraNodeEvaluationResult *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FBlueprintCameraEvaluationDataRef *)(*pcVar2)();
        return pFVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_20.ReferenceController = pTVar4;
    pTVar6 = pTVar4;
    local_28 = pFVar7;
  }
  if (pTVar1 != (TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *)&local_28) {
    pTVar1->Object = pFVar7;
    local_28 = (FCameraNodeEvaluationResult *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->SharedResult).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  __return_storage_ptr__->Result = pTVar1->Object;
  return __return_storage_ptr__;
}

// SetCameraPose @ 14d5ce3f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::SetCameraPose
          (FBlueprintCameraEvaluationDataRef *param_1,FBlueprintCameraPose *param_2)

{
  if (param_1->Result != (FCameraNodeEvaluationResult *)0x0) {
    FBlueprintCameraPose::ApplyTo(param_2,&param_1->Result->CameraPose);
    return;
  }
  return;
}

// SetDefaultCameraRigParameters @ 14d5ce6b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::SetDefaultCameraRigParameters
          (FBlueprintCameraEvaluationDataRef *param_1,UCameraRigAsset *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  
  pFVar1 = param_1->Result;
  if (pFVar1 != (FCameraNodeEvaluationResult *)0x0) {
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultParameters
              ((UBaseCameraObject *)param_2,&pFVar1->VariableTable,&pFVar1->ContextDataTable);
    return;
  }
  return;
}

// StaticRegisterNativesUBlueprintCameraEvaluationDataFunctionLibrary @ 14d5d0c00

void __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::
StaticRegisterNativesUBlueprintCameraEvaluationDataFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBlendCameraEvaluationData @ 14d5d8340

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::execBlendCameraEvaluationData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  float local_res10 [2];
  uchar local_38 [16];
  TReferenceControllerBase<1> *local_28;
  uchar local_20 [16];
  TReferenceControllerBase<1> *local_10;
  
  local_10 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_20[0] = '\0';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_20;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0.0;
  puVar2 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(FCameraNodeEvaluationResult **)puVar3 != (FCameraNodeEvaluationResult *)0x0) &&
     (*(FCameraNodeEvaluationResult **)puVar2 != (FCameraNodeEvaluationResult *)0x0)) {
    UE::Cameras::FCameraNodeEvaluationResult::LerpAll
              (*(FCameraNodeEvaluationResult **)puVar3,*(FCameraNodeEvaluationResult **)puVar2,
               local_res10[0],true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// execGetCameraPose @ 14d5d9450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::execGetCameraPose
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b7;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  longlong local_b0 [2];
  TReferenceControllerBase<1> *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_a0 = (TReferenceControllerBase<1> *)0x0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b0);
  }
  plVar4 = local_b0;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar4 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)*plVar4;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
    local_cc = 8;
    uStack_b7 = 0;
    uStack_b3 = 0;
    local_138 = 0;
    uStack_130 = 0;
    uStack_b1 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_d0 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    local_c8 = 0x41200000;
    uStack_108 = __real_408f400000000000;
    local_100 = ___xmm_4033333344c00000420c0000bf800000;
    uStack_f8 = (undefined4)_UNK_152b79aa8;
    uStack_f4 = (undefined4)((ulonglong)_UNK_152b79aa8 >> 0x20);
    uStack_c4 = 0xbf800000;
    uStack_f0 = (undefined4)___xmm_41955c2941c71eb8bf80000042700000;
    uStack_ec = (undefined4)((ulonglong)___xmm_41955c2941c71eb8bf80000042700000 >> 0x20);
    uStack_e8 = (undefined4)_UNK_152b79ab8;
    uStack_e4 = (undefined4)((ulonglong)_UNK_152b79ab8 >> 0x20);
    uStack_c0 = 0;
    uStack_e0 = (undefined4)___xmm_3f80000042c800000000000000000000;
    uStack_dc = (undefined4)((ulonglong)___xmm_3f80000042c800000000000000000000 >> 0x20);
    uStack_d8 = (undefined4)_UNK_152b79a98;
    local_d4 = (undefined4)((ulonglong)_UNK_152b79a98 >> 0x20);
  }
  else {
    local_128 = puVar2[2];
    local_138 = *puVar2;
    uStack_130 = puVar2[1];
    local_cc = *(undefined4 *)((longlong)puVar2 + 0x6c);
    uStack_110 = puVar2[5];
    uStack_108 = puVar2[6];
    uStack_120 = puVar2[3];
    uStack_118 = puVar2[4];
    uStack_f4 = (undefined4)*(undefined8 *)((longlong)puVar2 + 0x44);
    uStack_f0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0x44) >> 0x20);
    uStack_ec = (undefined4)*(undefined8 *)((longlong)puVar2 + 0x4c);
    uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0x4c) >> 0x20);
    local_d0 = *(undefined4 *)(puVar2 + 0xd);
    uVar3 = *(undefined1 *)(puVar2 + 0x10);
    uStack_e4 = (undefined4)*(undefined8 *)((longlong)puVar2 + 0x54);
    uStack_e0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0x54) >> 0x20);
    uStack_dc = (undefined4)*(undefined8 *)((longlong)puVar2 + 0x5c);
    uStack_d8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0x5c) >> 0x20);
    local_d4 = *(undefined4 *)((longlong)puVar2 + 100);
    local_c8 = *(undefined4 *)(puVar2 + 0xe);
    uStack_c0 = puVar2[0xf];
    uStack_f8 = *(undefined4 *)(puVar2 + 8);
    uStack_c4 = *(undefined4 *)((longlong)puVar2 + 0x74);
    local_100 = puVar2[7];
  }
  local_98 = local_138;
  uStack_90 = uStack_130;
  local_88 = local_128;
  uStack_80 = uStack_120;
  local_78 = uStack_118;
  uStack_70 = uStack_110;
  local_58 = CONCAT44(uStack_f4,uStack_f8);
  uStack_50 = CONCAT44(uStack_ec,uStack_f0);
  local_68 = uStack_108;
  uStack_60 = local_100;
  local_48 = CONCAT44(uStack_e4,uStack_e8);
  uStack_40 = CONCAT44(uStack_dc,uStack_e0);
  local_38 = CONCAT44(local_d4,uStack_d8);
  uStack_30 = CONCAT44(local_cc,local_d0);
  local_28 = CONCAT44(uStack_c4,local_c8);
  local_18 = CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT41(uStack_b7,uVar3)));
  uStack_20 = uStack_c0;
  *(undefined8 *)param_3 = local_138;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_130;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_128;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_120;
  *(undefined8 *)((longlong)param_3 + 0x20) = uStack_118;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_110;
  *(undefined8 *)((longlong)param_3 + 0x30) = uStack_108;
  *(undefined8 *)((longlong)param_3 + 0x38) = local_100;
  *(undefined8 *)((longlong)param_3 + 0x40) = local_58;
  *(undefined8 *)((longlong)param_3 + 0x48) = uStack_50;
  *(undefined8 *)((longlong)param_3 + 0x50) = local_48;
  *(undefined8 *)((longlong)param_3 + 0x58) = uStack_40;
  *(undefined8 *)((longlong)param_3 + 0x60) = local_38;
  *(undefined8 *)((longlong)param_3 + 0x68) = uStack_30;
  *(undefined8 *)((longlong)param_3 + 0x70) = local_28;
  *(undefined8 *)((longlong)param_3 + 0x78) = uStack_c0;
  *(undefined8 *)((longlong)param_3 + 0x80) = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  return;
}

// execMakeCameraEvaluationData @ 14d5dbd50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::execMakeCameraEvaluationData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSharedReferencer<1> local_30;
  TReferenceControllerBase<1> *local_28;
  TReferenceControllerBase<1> *local_20;
  FSharedReferencer<1> local_18 [2];
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_18[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = ::operator_new(0xa10);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_20 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFCameraNodeEvaluationResult_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar4 + 1,0,0xa00);
    UE::Cameras::FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
              ((FCameraNodeEvaluationResult *)(pTVar4 + 1));
    local_20 = pTVar4 + 1;
    if (local_20 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_30.ReferenceController = pTVar4;
  }
  FVar2.ReferenceController = local_30.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_18,&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  local_28 = local_20;
  *(TReferenceControllerBase<1> **)param_3 = local_20;
  if ((TReferenceControllerBase<1> **)((longlong)param_3 + 8) != &local_20) {
    *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = local_20;
    local_20 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18[0].ReferenceController);
  return;
}

// execSetCameraPose @ 14d5dd120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::execSetCameraPose
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double>_u_0 *this;
  uchar *puVar2;
  uchar local_b8 [16];
  TReferenceControllerBase<1> *local_a8;
  TVector<double>_u_0 local_98;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  local_a8 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_b8[8] = '\0';
  local_b8[9] = '\0';
  local_b8[10] = '\0';
  local_b8[0xb] = '\0';
  local_b8[0xc] = '\0';
  local_b8[0xd] = '\0';
  local_b8[0xe] = '\0';
  local_b8[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_60 = 0xbf800000;
  local_98._s_0.Z = 0.0;
  uStack_80 = 0;
  local_68 = __real_408f400000000000;
  puVar2 = local_b8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_40 = _UNK_1513d9ee8;
  local_5c = 0x420c0000;
  local_58 = ___xmm_bf800000427000004033333344c00000;
  uStack_50 = _UNK_152b79ac8;
  local_38 = 0x42c80000;
  local_34 = 0x3f800000;
  local_2c = 8;
  local_28 = 0x41200000;
  local_24 = 0xbf800000;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  this = &local_98;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    this = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FCameraPose **)puVar2 != (FCameraPose *)0x0) {
    FBlueprintCameraPose::ApplyTo((FBlueprintCameraPose *)&this->_s_0,*(FCameraPose **)puVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  return;
}

// execSetDefaultCameraRigParameters @ 14d5dd420

void __cdecl
UBlueprintCameraEvaluationDataFunctionLibrary::execSetDefaultCameraRigParameters
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  UBaseCameraObject *local_res10;
  longlong local_28 [2];
  TReferenceControllerBase<1> *local_18;
  
  local_18 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[0] = 0;
  local_28[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10 = (UBaseCameraObject *)0x0;
  plVar3 = local_28;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultParameters
              (local_res10,(FCameraVariableTable *)(lVar2 + 0x88),
               (FCameraContextDataTable *)(lVar2 + 0xf8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

