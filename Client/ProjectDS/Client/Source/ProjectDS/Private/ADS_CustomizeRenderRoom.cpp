// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b47ac20

UClass * __cdecl ADS_CustomizeRenderRoom::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_CustomizeRenderRoom.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CustomizeRenderRoom",
               &Z_Registration_Info_UClass_ADS_CustomizeRenderRoom.InnerSingleton,
               StaticRegisterNativesADS_CustomizeRenderRoom,0x400,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_CustomizeRenderRoom>,
               InternalVTableHelperCtorCaller<ADS_CustomizeRenderRoom>,local_res8,
               ADS_RenderRoom::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_CustomizeRenderRoom.InnerSingleton;
}

// ADS_CustomizeRenderRoom @ 14b47cf40

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADS_CustomizeRenderRoom * __thiscall
ADS_CustomizeRenderRoom::ADS_CustomizeRenderRoom
          (ADS_CustomizeRenderRoom *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  ADS_RenderRoom::ADS_RenderRoom((ADS_RenderRoom *)this,param_1);
  *(undefined ***)this = &___7ADS_CustomizeRenderRoom__6B_;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->CustomizableSkeletalComponent).field0_0x0.DebugPtr =
       (UDS_CustomizableSkeletalComponent *)0x0;
  (this->CameraComponent).field0_0x0.DebugPtr = (UDS_CameraComponent *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ZoomInTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ZoomInTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ZoomInTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ZoomInTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ZoomInTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ZoomInTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ZoomInTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ZoomInTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ZoomInTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ZoomInTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ZoomInTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ZoomInTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->PendingCoiPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PendingCoiPath).AssetPath.PackageName.Number = 0;
  (this->PendingCoiPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PendingCoiPath).AssetPath.AssetName.Number = 0;
  (this->PendingCoiPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCoiPath).SubPathString.Data.ArrayNum = 0;
  (this->PendingCoiPath).SubPathString.Data.ArrayMax = 0;
  this->WeaponID = 0;
  this->VoiceType = 0;
  this->VoiceTone = 0.0;
  this->VoiceID = 0;
  this->bIsZoomIn = false;
  this->bIsZoomInOutProcess = false;
  this->ZoomInOutSpeed = 0.0;
  this->SelectGender = Male;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CamTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CamTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CamTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CamTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CamTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CamTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CamTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CamTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CamTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CamTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CamTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CamTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~ADS_CustomizeRenderRoom @ 14b47dbe0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_CustomizeRenderRoom::~ADS_CustomizeRenderRoom(ADS_CustomizeRenderRoom *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7ADS_CustomizeRenderRoom__6B_;
  pFVar1 = (this->PendingCoiPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ADS_RenderRoom::~ADS_RenderRoom((ADS_RenderRoom *)this);
  return;
}

// GetPrivateStaticClass @ 14b47ec40

UClass * __cdecl ADS_CustomizeRenderRoom::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_CustomizeRenderRoom.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CustomizeRenderRoom",
               &Z_Registration_Info_UClass_ADS_CustomizeRenderRoom.InnerSingleton,
               StaticRegisterNativesADS_CustomizeRenderRoom,0x400,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_CustomizeRenderRoom>,
               InternalVTableHelperCtorCaller<ADS_CustomizeRenderRoom>,local_res8,
               ADS_RenderRoom::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_CustomizeRenderRoom.InnerSingleton;
}

// StaticRegisterNativesADS_CustomizeRenderRoom @ 14b47f560

void __cdecl ADS_CustomizeRenderRoom::StaticRegisterNativesADS_CustomizeRenderRoom(void)

{
  return;
}

// __VTableCtorCaller @ 14b4804c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl ADS_CustomizeRenderRoom::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  ADS_RenderRoom *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  this = (ADS_RenderRoom *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ADS_RenderRoom *)0x0) {
    ADS_RenderRoom::ADS_RenderRoom(this,param_1);
    this->_padding_ = (longlong)&___7ADS_CustomizeRenderRoom__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// ADS_CustomizeRenderRoom @ 14bc811c0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_CustomizeRenderRoom * __thiscall
ADS_CustomizeRenderRoom::ADS_CustomizeRenderRoom
          (ADS_CustomizeRenderRoom *this,FObjectInitializer *param_1)

{
  FName FVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  USkeletalMeshComponent *this_00;
  UDS_CustomizableSkeletalComponent *this_01;
  UDS_CameraComponent *this_02;
  FName local_res8;
  
  ADS_RenderRoom::ADS_RenderRoom((ADS_RenderRoom *)this,param_1);
  *(undefined ***)this = &___7ADS_CustomizeRenderRoom__6B_;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->CustomizableSkeletalComponent).field0_0x0.DebugPtr =
       (UDS_CustomizableSkeletalComponent *)0x0;
  (this->CameraComponent).field0_0x0.DebugPtr = (UDS_CameraComponent *)0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ZoomInTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ZoomInTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->ZoomInTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->ZoomInTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ZoomInTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ZoomInTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->ZoomInTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->ZoomInTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ZoomInTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ZoomInTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->ZoomInTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->ZoomInTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  (this->PendingCoiPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PendingCoiPath).AssetPath.PackageName.Number = 0;
  (this->PendingCoiPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PendingCoiPath).AssetPath.AssetName.Number = 0;
  (this->PendingCoiPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCoiPath).SubPathString.Data.ArrayNum = 0;
  (this->PendingCoiPath).SubPathString.Data.ArrayMax = 0;
  this->SelectGender = Male;
  this->WeaponID = 0;
  this->VoiceType = 0;
  this->VoiceTone = 0.0;
  this->VoiceID = 0;
  this->bIsZoomIn = false;
  this->bIsZoomInOutProcess = false;
  this->ZoomInOutSpeed = 0.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CamTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CamTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->CamTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->CamTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CamTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CamTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->CamTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->CamTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CamTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CamTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->CamTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->CamTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  pFVar5 = ::FName::FName(&local_res8,"SceneComponent");
  FVar1 = *pFVar5;
  pUVar6 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar7 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  *(UObject **)&this->field_0x1b8 = pUVar7;
  pFVar5 = ::FName::FName(&local_res8,L"SkeletalMeshComponent");
  FVar1 = *pFVar5;
  pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  this_00 = (USkeletalMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,*(USceneComponent **)&this->field_0x1b8,(FName)0x0);
  pFVar5 = ::FName::FName(&local_res8,"CustomizableSkeletalComponent");
  FVar1 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UDS_CustomizableSkeletalComponent_NoRegister();
  this_01 = (UDS_CustomizableSkeletalComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UDS_CustomizableSkeletalComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->CustomizableSkeletalComponent).field0_0x0.DebugPtr = this_01;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_01,
             (USceneComponent *)(this->SkeletalMeshComp).field0_0x0.DebugPtr,(FName)0x0);
  pFVar5 = ::FName::FName(&local_res8,"CameraComponent");
  FVar1 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UDS_CameraComponent_NoRegister();
  this_02 = (UDS_CameraComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_02 != (UDS_CameraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
  (this->CameraComponent).field0_0x0.DebugPtr = this_02;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_02,*(USceneComponent **)&this->field_0x1b8,(FName)0x0);
  this->field_0x32 = this->field_0x32 | 6;
  return this;
}

// BeginPlay @ 14bc87e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_CustomizeRenderRoom::BeginPlay(ADS_CustomizeRenderRoom *this)

{
  UDS_CameraComponent *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  UDS_RenderRoomManager *this_00;
  FString *pFVar6;
  UDS_CharacterUIEvent *pUVar7;
  UDS_LoadingEvent *pUVar8;
  TTransform<double> *pTVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  ADS_RenderRoom::BeginPlay((ADS_RenderRoom *)this);
  this_00 = UDS_RenderRoomManager::GetInst();
  if (this_00 != (UDS_RenderRoomManager *)0x0) {
    pFVar6 = ::FString::FString((FString *)local_88,&RenderRoomKey);
    UDS_RenderRoomManager::AddRenderRoom(this_00,pFVar6,(ADS_RenderRoom *)this);
  }
  pUVar7 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar7 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar7->OnCustomizeComponentInfoChanged,this);
    TMulticastDelegateRegistration<void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_CustomizeRenderRoom>
              ((TMulticastDelegateRegistration<void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar7->OnCustomizeComponentInfoChanged,(ADS_CustomizeRenderRoom *)local_88,
               (pmf_b4f79219)this);
  }
  pUVar8 = UDS_LoadingEvent::GetEvent();
  if (pUVar8 != (UDS_LoadingEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->LoadingPhaseDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>::
    AddUObject<ADS_CustomizeRenderRoom>
              (&pUVar8->LoadingPhaseDelegate,(ADS_CustomizeRenderRoom *)local_88,(pmf_44bc35fe)this)
    ;
  }
  pTVar9 = USceneComponent::GetRelativeTransform
                     ((USceneComponent *)(this->CameraComponent).field0_0x0.DebugPtr,
                      (TTransform<double> *)(local_88 + 0x10));
  pUVar1 = (this->CameraComponent).field0_0x0.DebugPtr;
  dVar5 = (pTVar9->Rotation).XY.m128d_f64[1];
  (this->CamTransform).Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
  (this->CamTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (pTVar9->Rotation).ZW.m128d_f64[1];
  (this->CamTransform).Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
  (this->CamTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (pTVar9->Translation).XY.m128d_f64[1];
  (this->CamTransform).Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
  (this->CamTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (pTVar9->Translation).ZW.m128d_f64[1];
  (this->CamTransform).Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
  (this->CamTransform).Translation.ZW.m128d_f64[1] = dVar5;
  uVar2 = *(undefined4 *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 4);
  uVar3 = *(undefined4 *)((pTVar9->Scale3D).XY.m128d_f64 + 1);
  uVar4 = *(undefined4 *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 0xc);
  *(undefined4 *)(this->CamTransform).Scale3D.XY.m128d_f64 =
       *(undefined4 *)(pTVar9->Scale3D).XY.m128d_f64;
  *(undefined4 *)((longlong)(this->CamTransform).Scale3D.XY.m128d_f64 + 4) = uVar2;
  *(undefined4 *)((this->CamTransform).Scale3D.XY.m128d_f64 + 1) = uVar3;
  *(undefined4 *)((longlong)(this->CamTransform).Scale3D.XY.m128d_f64 + 0xc) = uVar4;
  uVar2 = *(undefined4 *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 4);
  uVar3 = *(undefined4 *)((pTVar9->Scale3D).ZW.m128d_f64 + 1);
  uVar4 = *(undefined4 *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 0xc);
  *(undefined4 *)(this->CamTransform).Scale3D.ZW.m128d_f64 =
       *(undefined4 *)(pTVar9->Scale3D).ZW.m128d_f64;
  *(undefined4 *)((longlong)(this->CamTransform).Scale3D.ZW.m128d_f64 + 4) = uVar2;
  *(undefined4 *)((this->CamTransform).Scale3D.ZW.m128d_f64 + 1) = uVar3;
  *(undefined4 *)((longlong)(this->CamTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar4;
  fVar10 = (float)(**(code **)(pUVar1->_padding_ + 0x6c0))();
  this->CamFOV = fVar10;
  InitInfoWithGender(this);
  Refresh(this);
  return;
}

// CreateCharacter @ 14bc8d050

void __thiscall
ADS_CustomizeRenderRoom::CreateCharacter(ADS_CustomizeRenderRoom *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  EDS_GenderType EVar3;
  EDS_ItemType EVar4;
  UCustomizableObjectInstance *pUVar5;
  FDS_CustomizingOptionItemTableRow *pFVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  EDS_WeaponType EVar12;
  undefined1 local_res8 [8];
  FString local_78;
  FString local_68;
  TArray<FDS_WeaponTypeBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_58;
  FString local_48 [2];
  
  pFVar6 = FDS_CustomizingOptionItemTableRow::GetRef((longlong)this->WeaponID,true);
  EVar12 = None;
  EVar4 = pFVar6->ItemType;
  FDS_WeaponTypeBaseTableRow::GetAll(&local_58);
  iVar10 = local_58.ArrayNum;
  pFVar1 = local_58.AllocatorInstance.Data + (longlong)iVar10 * 8;
  FVar8.Data = local_58.AllocatorInstance.Data;
  uVar11 = local_58._8_8_;
  while( true ) {
    if ((int)uVar11 != iVar10) {
      `TCheckedPointerIterator<FDS_WeaponTypeBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      uVar11 = local_58._8_8_;
    }
    if (FVar8.Data == pFVar1) goto LAB_14bc8d0db;
    if (*(EDS_ItemType *)(*(longlong *)FVar8.Data + 0x10) == EVar4) break;
    FVar8.Data = FVar8.Data + 8;
  }
  EVar12 = *(EDS_WeaponType *)(*(longlong *)FVar8.Data + 8);
LAB_14bc8d0db:
  pUVar5 = *(UCustomizableObjectInstance **)
            &((this->CustomizableSkeletalComponent).field0_0x0.DebugPtr)->field_0x2b0;
  ::FString::FString(local_48,"A_Hair");
  pFVar7 = UCustomizableObjectInstance::GetIntParameterSelectedOption(pUVar5,local_48,-1);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  lVar9 = (longlong)local_68.Data.ArrayNum;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,pFVar1,lVar9 * 2);
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pUVar5 = *(UCustomizableObjectInstance **)
            &((this->CustomizableSkeletalComponent).field0_0x0.DebugPtr)->field_0x2b0;
  ::FString::FString(local_48,"A_Head");
  pFVar7 = UCustomizableObjectInstance::GetIntParameterSelectedOption(pUVar5,local_48,-1);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  lVar9 = (longlong)local_78.Data.ArrayNum;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,pFVar1,lVar9 * 2);
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  fVar2 = this->VoiceTone;
  iVar10 = this->VoiceType;
  EVar3 = this->SelectGender;
  pFVar7 = ::FString::FString(local_48,param_1);
  FDS_LoginService::SendCreateCharacter(pFVar7,EVar12,EVar3,iVar10,fVar2,&local_68,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// DestroyRenderRoom @ 14bc96850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ADS_CustomizeRenderRoom::DestroyRenderRoom(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_RenderRoomManager *this;
  UObject *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  AActor *this_00;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [16];
  FString local_28;
  FString local_18;
  
  this = UDS_RenderRoomManager::GetInst();
  if (this == (UDS_RenderRoomManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<980974666459906171>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\RenderRoom\\DS_CustomizeRenderRoom.cpp"
                       ,0x7b,"false");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_28,&RenderRoomKey);
  UDS_RenderRoomManager::FindRenderRoom(this,(FString *)local_res10);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res10);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_ADS_CustomizeRenderRoom_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bc968f7;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bc968f7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10._8_8_ = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)((longlong)local_res10 + 8));
  bVar3 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar3) {
    pFVar6 = ::FString::FString(&local_18,&RenderRoomKey);
    UDS_RenderRoomManager::RemoveRenderRoom(this,pFVar6);
    this_00 = (AActor *)FWeakObjectPtr::Get(&local_res8);
    AActor::Destroy(this_00,false,true);
  }
  return;
}

// EndPlay @ 14bc96a80

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_CustomizeRenderRoom::EndPlay(ADS_CustomizeRenderRoom *this,Type param_1)

{
  UDS_RenderRoomManager *this_00;
  FString *pFVar1;
  UDS_CharacterUIEvent *pUVar2;
  UDS_LoadingEvent *pUVar3;
  FString local_18;
  
  UDS_VM_CharacterCreate::CloseWidget();
  this_00 = UDS_RenderRoomManager::GetInst();
  if (this_00 != (UDS_RenderRoomManager *)0x0) {
    pFVar1 = ::FString::FString(&local_18,&RenderRoomKey);
    UDS_RenderRoomManager::RemoveRenderRoom(this_00,pFVar1);
  }
  pUVar2 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar2 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnCustomizeComponentInfoChanged,this);
  }
  pUVar3 = UDS_LoadingEvent::GetEvent();
  if (pUVar3 != (UDS_LoadingEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->LoadingPhaseDelegate,
               this);
  }
  ADS_StreamingSourceActor::DisableStreamingSource(*(ADS_StreamingSourceActor **)&this->field_0x2c0)
  ;
  AActor::Destroy(*(AActor **)&this->field_0x2c0,false,true);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetSpawnedRenderRoom @ 14bca1be0

TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> __cdecl
ADS_CustomizeRenderRoom::GetSpawnedRenderRoom(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_RenderRoomManager *this;
  TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FWeakObjectPtr in_RCX;
  FWeakObjectPtr local_res10;
  undefined8 local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_38;
  FString local_30;
  
  this = UDS_RenderRoomManager::GetInst();
  if (this == (UDS_RenderRoomManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<980974666459906191>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\RenderRoom\\DS_CustomizeRenderRoom.cpp"
                       ,0x8f,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>)TVar4.WeakPtr;
    }
    *(undefined8 *)in_RCX = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>)in_RCX;
  }
  ::FString::FString(&local_30,&RenderRoomKey);
  UDS_RenderRoomManager::FindRenderRoom(this,(FString *)&local_res20);
  pUVar5 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_ADS_CustomizeRenderRoom_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bca1cae;
  }
  pUVar5 = (UObject *)0x0;
LAB_14bca1cae:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_38 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_38);
  *(FWeakObjectPtr *)in_RCX = local_res10;
  return (TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>)in_RCX;
}

// InitInfoWithGender @ 14bca4890

void __thiscall ADS_CustomizeRenderRoom::InitInfoWithGender(ADS_CustomizeRenderRoom *this)

{
  FUtf8String *pFVar1;
  int *piVar2;
  FUtf8String *pFVar3;
  char cVar4;
  int iVar5;
  FDS_CustomizingComponentTableRow *pFVar6;
  longlong lVar7;
  FScriptContainerElement *_Src;
  code *pcVar8;
  FName FVar9;
  FIdentityFunctor FVar10;
  ADS_CustomizeRenderRoom *pAVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FDS_CustomizingGenderCategoryTableRow *this_00;
  FDS_CustomizingPresetTableRow *pFVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ForAnyElementType FVar23;
  ADS_CustomizeRenderRoom *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7 [7];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  uint local_a0;
  FScriptContainerElement *local_98;
  TArray<FDS_CustomizingComponentTableRow_const_*,TSizedDefaultAllocator<32>_> local_90;
  TArray<FDS_CustomizingCategoryTableRow_const_*,TSizedDefaultAllocator<32>_> local_80;
  FScriptContainerElement *local_70;
  TArray<FDS_CustomizingCategoryGroupTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_res8 = this;
  this_00 = FDS_CustomizingGenderCategoryTableRow::GetRef((ulonglong)this->SelectGender,true);
  FDS_CustomizingGenderCategoryTableRow::ID_CustomizingCategoryGroupTables(this_00,&local_68);
  uVar17 = (ulonglong)local_68.ArrayNum;
  FVar10 = local_res8._0_1_;
  uVar22 = (ulonglong)local_res8 & 0xff;
  local_a0 = local_68.ArrayNum;
  pFVar19 = local_68.AllocatorInstance.Data + uVar17 * 8;
  FVar23.Data = local_68.AllocatorInstance.Data;
  local_70 = pFVar19;
  while( true ) {
    local_98 = FVar23.Data;
    if (local_68.ArrayNum != (uint)uVar17) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_CustomizingCategoryGroupTableRow_const_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    pAVar11 = local_res8;
    if (FVar23.Data == pFVar19) break;
    if ((*(FDS_CustomizingCategoryGroupTableRow **)FVar23.Data)->CustomizingSceneType == AllPreset)
    {
      FDS_CustomizingCategoryGroupTableRow::ID_CustomizingCategoryTables
                (*(FDS_CustomizingCategoryGroupTableRow **)FVar23.Data,&local_80);
      AlgoImpl::
      IntroSortInternal<FDS_CustomizingCategoryTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingCategoryTableRow_const_*,_ADS_CustomizeRenderRoom::InitInfoWithGender_::__l6::<lambda_1>_>_>
                ((FDS_CustomizingCategoryTableRow **)local_80.AllocatorInstance.Data,
                 local_80.ArrayNum,SUB81(uVar22,0),(<lambda_1> *)&local_b8);
      iVar12 = local_80.ArrayNum;
      local_58 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 8;
      FVar23.Data = local_80.AllocatorInstance.Data;
      while( true ) {
        pFVar19 = local_58;
        if (local_80.ArrayNum != iVar12) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FDS_CustomizingCategoryTableRow_const_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (FVar23.Data == pFVar19) break;
        FDS_CustomizingCategoryTableRow::ID_CustomizingComponentTables
                  (*(FDS_CustomizingCategoryTableRow **)FVar23.Data,&local_90);
        AlgoImpl::
        IntroSortInternal<FDS_CustomizingComponentTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingComponentTableRow_const_*,_ADS_CustomizeRenderRoom::InitInfoWithGender_::__l13::<lambda_2>_>_>
                  ((FDS_CustomizingComponentTableRow **)local_90.AllocatorInstance.Data,
                   local_90.ArrayNum,FVar10,(<lambda_2> *)local_b7);
        iVar5 = local_90.ArrayNum;
        pFVar19 = local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 8;
        FVar18.Data = local_90.AllocatorInstance.Data;
        while( true ) {
          if (local_90.ArrayNum != iVar5) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FDS_CustomizingComponentTableRow_const_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res20);
          }
          if (FVar18.Data == pFVar19) break;
          pFVar6 = *(FDS_CustomizingComponentTableRow **)FVar18.Data;
          iVar14 = (int)local_a8;
          if ((int)local_a8 == local_a8._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b0,(int *)((longlong)&local_a8 + 4));
          }
          FVar18.Data = FVar18.Data + 8;
          local_a8 = CONCAT44(local_a8._4_4_,iVar14 + 1);
          *(FDS_CustomizingComponentTableRow **)(local_b0.Data + (longlong)iVar14 * 8) = pFVar6;
        }
        if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.AllocatorInstance.Data);
        }
        FVar23.Data = FVar23.Data + 8;
      }
      uVar22 = (ulonglong)local_res8 & 0xff;
      pFVar19 = local_70;
      FVar23.Data = local_98;
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
        pFVar19 = local_70;
        FVar23.Data = local_98;
      }
    }
    uVar17 = (ulonglong)local_a0;
    FVar23.Data = FVar23.Data + 8;
  }
  iVar12 = (int)local_a8;
  pFVar19 = local_b0.Data + (longlong)(int)local_a8 * 8;
  FVar23.Data = local_b0.Data;
LAB_14bca4a44:
  do {
    if ((int)local_a8 != iVar12) {
      local_res8 = (ADS_CustomizeRenderRoom *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TCheckedPointerIterator<FDS_CustomizingComponentTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (FVar23.Data == pFVar19) {
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      return;
    }
    lVar7 = *(longlong *)FVar23.Data;
    cVar4 = *(char *)(lVar7 + 0x38);
    if (cVar4 == '\x01') {
      pFVar16 = FDS_CustomizingPresetTableRow::GetRef((longlong)*(int *)(lVar7 + 0x3c),true);
      pFVar3 = &(pAVar11->PendingCoiPath).SubPathString;
      FVar9 = (pFVar16->CoiPath).AssetPath.AssetName;
      pFVar1 = &(pFVar16->CoiPath).SubPathString;
      (pAVar11->PendingCoiPath).AssetPath.PackageName = (pFVar16->CoiPath).AssetPath.PackageName;
      (pAVar11->PendingCoiPath).AssetPath.AssetName = FVar9;
      if (pFVar3 != pFVar1) {
        iVar5 = (pFVar16->CoiPath).SubPathString.Data.ArrayNum;
        piVar2 = &(pAVar11->PendingCoiPath).SubPathString.Data.ArrayMax;
        _Src = (pFVar1->Data).AllocatorInstance.Data;
        iVar14 = *piVar2;
        (pAVar11->PendingCoiPath).SubPathString.Data.ArrayNum = iVar5;
        if ((iVar5 == 0) && (iVar14 == 0)) {
          *piVar2 = 0;
          FVar23.Data = FVar23.Data + 8;
          goto LAB_14bca4a44;
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar5,iVar14,(ForAnyElementType *)pFVar3,iVar5,piVar2);
        if (iVar5 != 0) {
          memcpy((pFVar3->Data).AllocatorInstance.Data,_Src,(longlong)iVar5);
        }
      }
LAB_14bca4bb4:
      FVar23.Data = FVar23.Data + 8;
      goto LAB_14bca4a44;
    }
    if (cVar4 == '\x02') {
      uVar21 = 0;
      pAVar11->VoiceID = *(int *)(lVar7 + 0x3c);
      if (*(int *)(lVar7 + 0x50) < 1) goto LAB_14bca4bb4;
      lVar20 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar21 < *(int *)(lVar7 + 0x50)) {
          uVar15 = ~uVar21 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)(lVar20 + *(longlong *)(lVar7 + 0x48)) == *(int *)(lVar7 + 0x3c)) {
          pAVar11->VoiceType = uVar21;
          FVar23.Data = FVar23.Data + 8;
          goto LAB_14bca4a44;
        }
        uVar21 = uVar21 + 1;
        lVar20 = lVar20 + 4;
      } while ((int)uVar21 < *(int *)(lVar7 + 0x50));
      FVar23.Data = FVar23.Data + 8;
    }
    else if (cVar4 == '\x03') {
      FVar23.Data = FVar23.Data + 8;
      pAVar11->VoiceTone = *(float *)(lVar7 + 0x40);
    }
    else {
      if (cVar4 != '\x05') goto LAB_14bca4bb4;
      FVar23.Data = FVar23.Data + 8;
      pAVar11->WeaponID = *(int *)(lVar7 + 0x3c);
    }
  } while( true );
}

// OnCOICoreInitComplete @ 14bcafc30

void __thiscall
ADS_CustomizeRenderRoom::OnCOICoreInitComplete
          (ADS_CustomizeRenderRoom *this,FSoftObjectPath *param_1,UWN_MCS_COICore *param_2,
          bool param_3,FWN_EndOfRefs *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ADS_CustomizeRenderRoom *local_78;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  undefined1 local_38 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  FDelegateAllocation FStack_28;
  EWN_MCS_MeshUpdatePolicy local_18;
  
  if (param_3) {
    if ((this->PendingCoiPath).AssetPath.PackageName == (FName)0x0) {
      local_38._0_4_ = 0xffffffff;
      FStack_28.DelegateSize = 0;
      local_18 = Async_High;
      local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_30,(FWriteAccessScope *)&local_58);
      local_40 = &FStack_28;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&FStack_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXIPEAVUWN_MCS_COICore__W4EWN_MCS_MeshUpdateResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_CustomizeRenderRoom____A6AXIPEAVUWN_MCS_COICore__W4EWN_MCS_MeshUpdateResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_78 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_78);
        puVar3[4] = OnCOIUpdateMeshComplete;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      UWN_MCS_COICore::UpdateMeshAsync
                ((UWN_MCS_COICore *)(this->CustomizableSkeletalComponent).field0_0x0.DebugPtr,
                 (FWN_MCS_MeshUpdateParams *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_30,(FWriteAccessScope *)&local_70);
      if ((FStack_28.DelegateSize != 0) &&
         (FStack_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_28.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_28,0,0,0x10);
        FStack_28.DelegateSize = 0;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (FStack_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_28.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
    }
    else {
      Refresh(this);
    }
  }
  else {
    this->IsLoading = false;
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<980974666459906458>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\RenderRoom\\DS_CustomizeRenderRoom.cpp"
                       ,0x19a,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnCOIUpdateMeshComplete @ 14bcafe60

void __thiscall
ADS_CustomizeRenderRoom::OnCOIUpdateMeshComplete
          (ADS_CustomizeRenderRoom *this,uint param_1,UWN_MCS_COICore *param_2,
          EWN_MCS_MeshUpdateResult param_3)

{
  code *pcVar1;
  bool bVar2;
  
  this->IsLoading = false;
  if (param_3 == Success) {
    if ((this->PendingCoiPath).AssetPath.PackageName != (FName)0x0) {
      Refresh(this);
      return;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<980974666459906481>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\RenderRoom\\DS_CustomizeRenderRoom.cpp"
                       ,0x1b1,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnChangedLoadingPhase @ 14bcb0d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADS_CustomizeRenderRoom::OnChangedLoadingPhase
          (ADS_CustomizeRenderRoom *this,EDS_LoadingPhase param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_RenderRoomManager *this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  AActor *this_01;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_38;
  FString local_30;
  FString local_20;
  
  if (param_1 != EndFadeIn) {
    return;
  }
  this_00 = UDS_RenderRoomManager::GetInst();
  if (this_00 == (UDS_RenderRoomManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<980974666459906171>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\RenderRoom\\DS_CustomizeRenderRoom.cpp"
                       ,0x7b,"false");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_30,&RenderRoomKey);
  UDS_RenderRoomManager::FindRenderRoom(this_00,(FString *)&local_res20);
  pUVar4 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_ADS_CustomizeRenderRoom_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bcb0dfd;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bcb0dfd:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_38 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_38);
  bVar3 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (!bVar3) {
    pFVar6 = ::FString::FString(&local_20,&RenderRoomKey);
    UDS_RenderRoomManager::RemoveRenderRoom(this_00,pFVar6);
    this_01 = (AActor *)FWeakObjectPtr::Get(&local_res18);
    AActor::Destroy(this_01,false,true);
  }
  return;
}

// OnCustomizeComponentInfoChanged @ 14bcb2910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_CustomizeRenderRoom::OnCustomizeComponentInfoChanged
          (ADS_CustomizeRenderRoom *this,int param_1,FDS_CustomizeComponentInfo *param_2)

{
  EDS_CustomizingType EVar1;
  int iVar2;
  FDS_CustomizingComponentTableRow *pFVar3;
  FDS_CustomizingPresetTableRow *pFVar4;
  FDS_ItemBaseTableRow *this_00;
  UDS_SoundManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *pTVar8;
  FWeakObjectPtr local_res20;
  ADS_CustomizeRenderRoom *local_68;
  undefined1 local_60 [8];
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pFVar3 = FDS_CustomizingComponentTableRow::GetRef((longlong)param_1,true);
  EVar1 = pFVar3->CustomizingType;
  if (EVar1 == ListGender) {
    this->SelectGender = (EDS_GenderType)param_2->IntValue;
    InitInfoWithGender(this);
    Refresh(this);
    return;
  }
  if (EVar1 == ListPreset) {
    pFVar4 = FDS_CustomizingPresetTableRow::GetRef((longlong)param_2->IntValue,true);
    FSoftObjectPath::operator=(&this->PendingCoiPath,&pFVar4->CoiPath);
    if (this->IsLoading != true) {
      Refresh(this);
      return;
    }
  }
  else {
    if (EVar1 == ListWeapon) {
      iVar2 = param_2->IntValue;
      this->WeaponID = iVar2;
      this_00 = FDS_ItemBaseTableRow::GetRef((longlong)iVar2,true);
      FDS_ItemBaseTableRow::ID_ResourcePartsTable(this_00);
      return;
    }
    local_68 = this;
    if (EVar1 == ListVoice) {
      this->VoiceType = param_2->Index;
      this->VoiceID = param_2->IntValue;
      pUVar5 = UDS_SoundManager::GetInst();
      if (pUVar5 != (UDS_SoundManager *)0x0) {
        local_60 = (undefined1  [8])0x0;
        local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_58.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                   (FWriteAccessScope *)&local_48);
        local_30 = &local_58;
        puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_58);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUAudioComponent___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[2] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_CustomizeRenderRoom____A6AXPEAVUAudioComponent___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar6[3] = 0;
          local_res20 = (FWeakObjectPtr)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res20);
          puVar6[4] = OnSoundSpawnComplete;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        pTVar8 = TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *
                            )&local_48,
                            (TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *
                            )local_60);
        iVar2 = param_2->IntValue;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_68);
        UDS_SoundManager::SpawnSoundAsync
                  (pUVar5,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res20,iVar2,pTVar8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                   (FWriteAccessScope *)&local_48);
        if ((local_58.DelegateSize != 0) &&
           (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_58,0,0,0x10);
          local_58.DelegateSize = 0;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_58.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_60);
      }
    }
    else if (EVar1 == VoiceTone) {
      this->VoiceTone = param_2->FloatValue;
      pUVar5 = UDS_SoundManager::GetInst();
      if (pUVar5 != (UDS_SoundManager *)0x0) {
        local_60 = (undefined1  [8])0x0;
        local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_58.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                   (FWriteAccessScope *)&local_48);
        local_30 = &local_58;
        puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_58);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUAudioComponent___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[2] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_CustomizeRenderRoom____A6AXPEAVUAudioComponent___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar6[3] = 0;
          local_res20 = (FWeakObjectPtr)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res20);
          puVar6[4] = OnSoundSpawnComplete;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        pTVar8 = TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *
                            )&local_48,
                            (TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *
                            )local_60);
        iVar2 = this->VoiceID;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_68);
        UDS_SoundManager::SpawnSoundAsync
                  (pUVar5,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res20,iVar2,pTVar8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                   (FWriteAccessScope *)&local_48);
        if ((local_58.DelegateSize != 0) &&
           (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_58,0,0,0x10);
          local_58.DelegateSize = 0;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_58.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_60);
      }
    }
  }
  return;
}

// OnSoundSpawnComplete @ 14bcbb230

void __thiscall
ADS_CustomizeRenderRoom::OnSoundSpawnComplete
          (ADS_CustomizeRenderRoom *this,UAudioComponent *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  FName *pFVar5;
  FName local_res8;
  
  puVar1 = &param_1->field_0x250;
  iVar3 = this->VoiceType;
  pcVar4 = *(code **)(*(longlong *)puVar1 + 0x40);
  pFVar5 = ::FName::FName(&local_res8,"Voice_Type");
  (*pcVar4)(puVar1,*pFVar5,(float)iVar3);
  fVar2 = this->VoiceTone;
  pcVar4 = *(code **)(*(longlong *)puVar1 + 0x40);
  pFVar5 = ::FName::FName(&local_res8,"Voice_Tone");
  (*pcVar4)(puVar1,*pFVar5,fVar2);
  return;
}

// OnSpawnRenderRoomComplete @ 14bcbb310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ADS_CustomizeRenderRoom::OnSpawnRenderRoomComplete
          (FSoftObjectPath *param_1,UObject *param_2,UWorld *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_RenderRoomManager *this;
  UClass *pUVar4;
  FActorSpawnParameters *pFVar5;
  AActor *pAVar6;
  FString *pFVar7;
  APlayerController *pAVar8;
  longlong lVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_178 [32];
  undefined4 uStack_144;
  uint uStack_13c;
  undefined1 local_138 [8];
  UClass *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  FString local_118;
  FString local_108;
  FString local_f8;
  TTransform<double> local_e8;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_RenderRoomManager::GetInst();
  if (this == (UDS_RenderRoomManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<980974666459906131>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\RenderRoom\\DS_CustomizeRenderRoom.cpp"
                       ,0x53,"false");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_118,&RenderRoomKey);
  UDS_RenderRoomManager::FindRenderRoom(this,(FString *)local_138);
  bVar3 = TWeakObjectPtr<ADS_RenderRoom,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_RenderRoom,FWeakObjectPtr> *)local_138,(void *)0x0);
  if (!bVar3) {
    return;
  }
  if (param_2 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bcbb3dc;
  }
  param_2 = (UObject *)0x0;
LAB_14bcbb3dc:
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  bVar3 = ADS_PositionActor::GetPositionActorTransform(&local_e8,Customize,0);
  if (bVar3) {
    pFVar5 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
    pAVar6 = UWorld::SpawnActor(param_3,(UClass *)param_2,&local_e8,pFVar5);
    if (pAVar6 == (AActor *)0x0) {
      pAVar6 = (AActor *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_ADS_CustomizeRenderRoom_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pAVar6->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pFVar7 = GetTypeName<ADS_CustomizeRenderRoom>(&local_108);
        pwVar12 = L"";
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = GetFullNameForCastLogError<AActor>(&local_f8,pAVar6);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar12,pwVar11);
      }
    }
    if (local_88._64_8_ != 0) {
      plVar10 = (longlong *)(local_88 + 0x50);
      if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_88._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((pAVar6 != (AActor *)0x0) &&
       (pAVar8 = UWorld::GetFirstPlayerController(param_3), pAVar8 != (APlayerController *)0x0)) {
      pcVar2 = *(code **)(pAVar6->_padding_ + 0x738);
      local_130 = Z_Construct_UClass_UCameraComponent_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_130);
      }
      lVar9 = (*pcVar2)(pAVar6,&local_130);
      if (lVar9 != 0) {
        uStack_11c = uStack_13c & 0xfffffffe;
        uStack_144 = CONCAT31(uStack_144._1_3_,1);
        local_128 = 0;
        uStack_124 = uStack_144;
        uStack_120 = 0x40000000;
        (**(code **)(pAVar8->_padding_ + 0xef8))(pAVar8,pAVar6,&local_128);
      }
    }
  }
  return;
}

// OnStreamingComplete @ 14bcbb630

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_CustomizeRenderRoom::OnStreamingComplete(ADS_CustomizeRenderRoom *this)

{
  ADS_CameraManager *this_00;
  UDS_WindowManager *this_01;
  FWeakObjectPtr local_res8;
  ADS_CustomizeRenderRoom *local_res10 [3];
  
  this_00 = ADS_CameraManager::GetInst();
  if (this_00 != (ADS_CameraManager *)0x0) {
    local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffff00000000);
    local_res10[0] = (ADS_CustomizeRenderRoom *)CONCAT44(local_res10[0]._4_4_,1);
    ADS_CameraManager::RequestFade(this_00,(EDS_CameraFadeState *)local_res10,(float *)&local_res8);
  }
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffff00000000);
    local_res10[0] = (ADS_CustomizeRenderRoom *)((ulonglong)local_res10[0] & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow(this_01,Login,(uint *)local_res10,(float *)&local_res8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (ADS_CustomizeRenderRoom *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (ADS_CustomizeRenderRoom *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  UDS_VM_CharacterCreate::OpenWidgetAsync
            ((TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>)local_res8);
  UDS_WindowManager::CloseCommonCenterLoading();
  return;
}

// Refresh @ 14bcc1cf0

void __thiscall ADS_CustomizeRenderRoom::Refresh(ADS_CustomizeRenderRoom *this)

{
  int iVar1;
  UWN_MCS_COICore *this_00;
  FName FVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  FSharedReferencer<1> FVar5;
  char cVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FString *pFVar10;
  FName *pFVar11;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
  *pTVar12;
  int iVar13;
  TReferenceControllerBase<1> *pTVar14;
  FName local_res8;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  int local_a8;
  undefined1 local_a0 [8];
  ForAnyElementType local_98;
  int local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType local_80;
  int local_78;
  undefined1 local_70 [8];
  FDelegateAllocation local_68;
  undefined1 local_58 [8];
  FSharedReferencer<1> FStack_50;
  FSoftObjectPath local_48;
  
  if ((this->PendingCoiPath).AssetPath.PackageName == (FName)0x0) {
    return;
  }
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  this->IsLoading = true;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_58 = (undefined1  [8])0x0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_88,(FReadAccessScope *)&local_d8);
  if (((local_78 == 0) || (local_80.Data == (FScriptContainerElement *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)local_80.Data + 0x38))(), cVar6 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_d8);
  if (!bVar3) goto LAB_14bcc1f8e;
  local_a0 = (undefined1  [8])0x0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_b8 = (undefined1  [8])0x0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_88,(FReadAccessScope *)&local_d8);
  if ((local_78 != 0) && (local_80.Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)local_80.Data + 0x50))(local_80.Data,local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_d8);
  iVar1 = local_a8;
  FVar4.Data = local_b0.Data;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)&local_d8);
  if (local_90 == 0) {
LAB_14bcc1e2f:
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
  }
  else if (local_98.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_14bcc1e2f;
  }
  local_98.Data = FVar4.Data;
  local_90 = iVar1;
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_d8);
  if ((local_a8 != 0) && (local_b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
    local_a8 = 0;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  pTVar7 = ::operator_new(0x30);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)(pTVar7 + 1) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar7 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a0);
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
    ;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14 = pTVar7;
  }
  local_b8 = (undefined1  [8])0x0;
  local_b0.Data = (FScriptContainerElement *)pTVar14;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FStack_50,(FSharedReferencer<1> *)&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b0.Data);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)&local_d8);
  if ((local_90 != 0) && (local_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
LAB_14bcc1f8e:
  local_70 = (undefined1  [8])0x0;
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_d8);
  local_c0 = &local_68;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_68);
  FVar5.ReferenceController = FStack_50.ReferenceController;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUWN_MCS_COICore___N_ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    puVar8[1] = local_58;
    puVar8[2] = FStack_50.ReferenceController;
    if (FStack_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_CustomizeRenderRoom____A6AXAEBUFSoftObjectPath__PEAVUWN_MCS_COICore___N_ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[4] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res8);
    puVar8[5] = OnCOICoreInitComplete;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_d8);
  if ((local_78 != 0) && (local_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  pFVar10 = FSoftObjectPath::ToString(&this->PendingCoiPath,(FString *)local_a0);
  pFVar10 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_b8,pFVar10,false);
  local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_48.AssetPath.PackageName.Number = 0;
  local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_48.AssetPath.AssetName.Number = 0;
  local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.SubPathString.Data.ArrayNum = 0;
  local_48.SubPathString.Data.ArrayMax = 0;
  local_58 = (undefined1  [8])(pFVar10->Data).AllocatorInstance.Data;
  iVar1 = (pFVar10->Data).ArrayNum;
  iVar13 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar13 = 0;
  }
  FStack_50.ReferenceController._0_4_ = iVar13;
  FSoftObjectPath::SetPath(&local_48,(TStringView<wchar_t> *)local_58);
  if ((atomic<unsigned___int64>)local_b8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  if ((atomic<unsigned___int64>)local_a0 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_a0);
  }
  (this->PendingCoiPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PendingCoiPath).AssetPath.AssetName.Number = 0;
  (this->PendingCoiPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PendingCoiPath).AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&(this->PendingCoiPath).SubPathString,0);
  UWN_MCS_COICore::Deinitialize
            ((UWN_MCS_COICore *)(this->CustomizableSkeletalComponent).field0_0x0.DebugPtr,false);
  this_00 = (UWN_MCS_COICore *)(this->CustomizableSkeletalComponent).field0_0x0.DebugPtr;
  pFVar11 = ::FName::FName(&local_res8,"M_Base");
  FVar2 = *pFVar11;
  pTVar12 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
            ::
            TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                        *)&local_d8,
                       (TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                        *)local_70);
  UWN_MCS_COICore::InitializeCOIAsync(this_00,pTVar12,&local_48,FVar2,false);
  if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_d8);
  if ((local_68.DelegateSize != 0) &&
     (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_68,0,0,0x10);
    local_68.DelegateSize = 0;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  return;
}

// SpawnRenderRoomAsync @ 14bcc9fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl ADS_CustomizeRenderRoom::SpawnRenderRoomAsync(UWorld *param_1)

{
  int iVar1;
  FDS_UniqueBpTableRow *this;
  FDS_ResourceEtcTableRow *pFVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy> *pTVar6;
  UWorld *local_res8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  void *local_b0;
  FMRSWRecursiveAccessDetector *local_a8;
  undefined4 local_a0;
  FDelegateAllocation *local_98;
  TStringView<wchar_t> local_88;
  FSoftObjectPath local_78;
  FString local_58;
  FLoadAssetAsyncOptionalParams local_48;
  
  this = FDS_UniqueBpTableRow::GetRef(0x11,true);
  pFVar2 = FDS_UniqueBpTableRow::ID_BpLinkTable(this);
  FSoftObjectPath::ToString(&pFVar2->ResourcePath,&local_58);
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath((FString *)&local_b0,&local_58,false);
  local_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_78.AssetPath.PackageName.Number = 0;
  local_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetPath.AssetName.Number = 0;
  local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.SubPathString.Data.ArrayNum = 0;
  local_78.SubPathString.Data.ArrayMax = 0;
  local_88.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_88.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_88.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_78,&local_88);
  if (local_b0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0);
  }
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_b0);
  local_98 = &local_c0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar4[1] = param_1;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__P6AX01PEAVUWorld___ZPEAV4___6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = OnSpawnRenderRoomComplete;
  }
  if (local_a0._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8,(FDestructionSentinel *)&local_b0);
  }
  local_48.PackagePriority = 0;
  local_48._20_4_ = 0;
  local_48.LoadFlags = 0;
  local_48._36_4_ = 0;
  local_48.InstancingContext = (FLinkerInstancingContext *)0x0;
  local_48.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_48.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar6 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                     ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                       *)&local_b0,
                      (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                       *)local_c8);
  FSoftObjectPath::LoadAsync(&local_78,pTVar6,&local_48);
  local_b0 = (FScriptContainerElement *)0x0;
  local_a8 = (FMRSWRecursiveAccessDetector *)0x0;
  local_a0._0_1_ = false;
  local_a0._1_3_ = 0;
  UDS_WindowManager::OpenCommonCenterLoading
            ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)&local_b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_b0);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_a0._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8,(FDestructionSentinel *)&local_b0);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// StartZoomInOut @ 14bcca240

void __thiscall ADS_CustomizeRenderRoom::StartZoomInOut(ADS_CustomizeRenderRoom *this,bool param_1)

{
  float fVar1;
  
  if ((this->bIsZoomInOutProcess != true) || (this->bIsZoomIn != param_1)) {
    this->bIsZoomIn = param_1;
    this->bIsZoomInOutProcess = true;
    fVar1 = DS_CommonDataHelper::CharViewerInitialZoomInOutSpeed();
    this->ZoomInOutSpeed = fVar1;
  }
  return;
}

// Tick @ 14bccc620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_CustomizeRenderRoom::Tick(ADS_CustomizeRenderRoom *this,float param_1)

{
  UDS_CameraComponent *pUVar1;
  float fVar2;
  undefined1 auStackY_1f8 [32];
  TVector<double>_u_0 local_1c8;
  double dStack_1b0;
  TVector<double>_u_0 local_1a8;
  double dStack_190;
  TVector<double>_u_0 local_188;
  TQuat<double> local_168;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  AActor::Tick((AActor *)this,param_1);
  if ((this->bIsZoomInOutProcess != false) &&
     (pUVar1 = (this->CameraComponent).field0_0x0.DebugPtr, pUVar1 != (UDS_CameraComponent *)0x0)) {
    USceneComponent::GetRelativeTransform((USceneComponent *)pUVar1,&local_88);
    local_148.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_148.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_148.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_148.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_148.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_148.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    (**(code **)(((this->CameraComponent).field0_0x0.DebugPtr)->_padding_ + 0x6c0))();
    if (this->bIsZoomIn == true) {
      local_148.Rotation.XY.m128d_f64[0] = (this->ZoomInTransform).Rotation.XY.m128d_f64[0];
      local_148.Rotation.XY.m128d_f64[1] = (this->ZoomInTransform).Rotation.XY.m128d_f64[1];
      local_148.Rotation.ZW.m128d_f64[0] = (this->ZoomInTransform).Rotation.ZW.m128d_f64[0];
      local_148.Rotation.ZW.m128d_f64[1] = (this->ZoomInTransform).Rotation.ZW.m128d_f64[1];
      local_148.Translation.XY.m128d_f64[0] = (this->ZoomInTransform).Translation.XY.m128d_f64[0];
      local_148.Translation.XY.m128d_f64[1] = (this->ZoomInTransform).Translation.XY.m128d_f64[1];
      local_148.Translation.ZW.m128d_f64 = *&(this->ZoomInTransform).Translation.ZW.m128d_f64;
      local_148.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(this->ZoomInTransform).Scale3D.XY.m128d_f64;
      local_148.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomInTransform).Scale3D.XY.m128d_f64 + 4);
      local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((this->ZoomInTransform).Scale3D.XY.m128d_f64 + 1);
      local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomInTransform).Scale3D.XY.m128d_f64 + 0xc);
      local_148.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(this->ZoomInTransform).Scale3D.ZW.m128d_f64;
      local_148.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomInTransform).Scale3D.ZW.m128d_f64 + 4);
      local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((this->ZoomInTransform).Scale3D.ZW.m128d_f64 + 1);
      local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomInTransform).Scale3D.ZW.m128d_f64 + 0xc);
    }
    else {
      local_148.Rotation.XY.m128d_f64[0] = (this->CamTransform).Rotation.XY.m128d_f64[0];
      local_148.Rotation.XY.m128d_f64[1] = (this->CamTransform).Rotation.XY.m128d_f64[1];
      local_148.Rotation.ZW.m128d_f64[0] = (this->CamTransform).Rotation.ZW.m128d_f64[0];
      local_148.Rotation.ZW.m128d_f64[1] = (this->CamTransform).Rotation.ZW.m128d_f64[1];
      local_148.Translation.XY.m128d_f64[0] = (this->CamTransform).Translation.XY.m128d_f64[0];
      local_148.Translation.XY.m128d_f64[1] = (this->CamTransform).Translation.XY.m128d_f64[1];
      local_148.Translation.ZW.m128d_f64 = *&(this->CamTransform).Translation.ZW.m128d_f64;
      local_148.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(this->CamTransform).Scale3D.XY.m128d_f64;
      local_148.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(this->CamTransform).Scale3D.XY.m128d_f64 + 4);
      local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((this->CamTransform).Scale3D.XY.m128d_f64 + 1);
      local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(this->CamTransform).Scale3D.XY.m128d_f64 + 0xc);
      local_148.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(this->CamTransform).Scale3D.ZW.m128d_f64;
      local_148.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(this->CamTransform).Scale3D.ZW.m128d_f64 + 4);
      local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((this->CamTransform).Scale3D.ZW.m128d_f64 + 1);
      local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(this->CamTransform).Scale3D.ZW.m128d_f64 + 0xc);
    }
    fVar2 = DS_CommonDataHelper::CharViewerZoomInOutAcceleration();
    local_1a8._s_0.Z = local_148.Translation.ZW.m128d_f64[0];
    local_1a8._s_0.X = local_148.Translation.XY.m128d_f64[0];
    local_1a8._s_0.Y = local_148.Translation.XY.m128d_f64[1];
    fVar2 = fVar2 * param_1 + this->ZoomInOutSpeed;
    local_1c8._s_0.X = local_88.Translation.XY.m128d_f64[0];
    local_1c8._s_0.Y = local_88.Translation.XY.m128d_f64[1];
    local_1c8._s_0.Z = local_88.Translation.ZW.m128d_f64[0];
    this->ZoomInOutSpeed = fVar2;
    FMath::VInterpTo((TVector<double> *)&local_188._s_0,(TVector<double> *)&local_1c8._s_0,
                     (TVector<double> *)&local_1a8._s_0,param_1,fVar2);
    local_1c8._s_0.X = local_148.Rotation.XY.m128d_f64[0];
    local_1c8._s_0.Y = local_148.Rotation.XY.m128d_f64[1];
    local_1a8._s_0.X = local_88.Rotation.XY.m128d_f64[0];
    local_1a8._s_0.Y = local_88.Rotation.XY.m128d_f64[1];
    local_1c8._s_0.Z = local_148.Rotation.ZW.m128d_f64[0];
    dStack_1b0 = local_148.Rotation.ZW.m128d_f64[1];
    local_1a8._s_0.Z = local_88.Rotation.ZW.m128d_f64[0];
    dStack_190 = local_88.Rotation.ZW.m128d_f64[1];
    FMath::QInterpTo<double>
              (&local_168,(TQuat<double> *)&local_1a8._s_0,(TQuat<double> *)&local_1c8._s_0,param_1,
               this->ZoomInOutSpeed);
    pUVar1 = (this->CameraComponent).field0_0x0.DebugPtr;
    if (__real_3f1a36e2e0000000 <=
        (local_148.Translation.XY.m128d_f64[1] - local_188._s_0.Y) *
        (local_148.Translation.XY.m128d_f64[1] - local_188._s_0.Y) +
        (local_148.Translation.XY.m128d_f64[0] - local_188._s_0.X) *
        (local_148.Translation.XY.m128d_f64[0] - local_188._s_0.X) +
        (local_148.Translation.ZW.m128d_f64[0] - local_188._s_0.Z) *
        (local_148.Translation.ZW.m128d_f64[0] - local_188._s_0.Z)) {
      local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_e8.Translation.ZW.m128d_f64[0] = local_188._s_0.Z;
      local_e8.Translation.ZW.m128d_f64[1] = 0.0;
      local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_e8.Rotation.XY.m128d_f64[0] = local_168.X;
      local_e8.Rotation.XY.m128d_f64[1] = local_168.Y;
      local_e8.Translation.XY.m128d_f64[0] = local_188._s_0.X;
      local_e8.Translation.XY.m128d_f64[1] = local_188._s_0.Y;
      local_e8.Rotation.ZW.m128d_f64[0] = local_168.Z;
      local_e8.Rotation.ZW.m128d_f64[1] = local_168.W;
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)pUVar1,&local_e8,false,(FHitResult *)0x0,None);
    }
    else {
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)pUVar1,&local_148,false,(FHitResult *)0x0,None);
      this->bIsZoomInOutProcess = false;
    }
  }
  return;
}

