// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// ACameraActor @ 147685c70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraActor * __thiscall ACameraActor::ACameraActor(ACameraActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ACameraActor__6B_;
  (this->CameraComponent).field0_0x0.DebugPtr = (UCameraComponent *)0x0;
  (this->SceneComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings_DEPRECATED);
  return this;
}

// ACameraActor @ 147685cc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraActor * __thiscall ACameraActor::ACameraActor(ACameraActor *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  UCameraComponent *pUVar6;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ACameraActor__6B_;
  (this->CameraComponent).field0_0x0.DebugPtr = (UCameraComponent *)0x0;
  (this->SceneComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings_DEPRECATED);
  pFVar3 = ::FName::FName(&local_res8,L"SceneComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SceneComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->SceneComponent).field0_0x0;
  pFVar3 = ::FName::FName(&local_res8,L"CameraComponent");
  FVar2 = *pFVar3;
  pUVar4 = UCameraComponent::StaticClass();
  pUVar6 = (UCameraComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UCameraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->CameraComponent).field0_0x0.DebugPtr = pUVar6;
  pUVar6->FieldOfView = 90.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  ((this->CameraComponent).field0_0x0.DebugPtr)->bConstrainAspectRatio = '\x01';
  ((this->CameraComponent).field0_0x0.DebugPtr)->AspectRatio = 1.777778;
  ((this->CameraComponent).field0_0x0.DebugPtr)->PostProcessBlendWeight = 1.0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->CameraComponent).field0_0x0.DebugPtr,
             (this->SceneComponent).field0_0x0.DebugPtr,(FName)0x0);
  this->bConstrainAspectRatio_DEPRECATED = 1;
  this->FOVAngle_DEPRECATED = 90.0;
  this->AspectRatio_DEPRECATED = 1.777778;
  this->PostProcessBlendWeight_DEPRECATED = 1.0;
  return this;
}

// ~ACameraActor @ 147689e10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraActor::~ACameraActor(ACameraActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ACameraActor__6B_;
  pFVar1 = (this->PostProcessSettings_DEPRECATED).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// BeginPlay @ 147694c40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraActor::BeginPlay(ACameraActor *this)

{
  byte bVar1;
  int iVar2;
  ENetMode EVar3;
  UWorld *this_00;
  APlayerController *pAVar4;
  undefined4 local_18;
  undefined1 uStack_14;
  undefined3 uStack_13;
  undefined4 uStack_10;
  uint uStack_c;
  
  if ((this->AutoActivateForPlayer).Value != '\0') {
    EVar3 = AActor::InternalGetNetMode((AActor *)this);
    if (EVar3 != NM_Client) {
      bVar1 = (this->AutoActivateForPlayer).Value;
      iVar2 = bVar1 - 1;
      if (bVar1 == 0) {
        iVar2 = -1;
      }
      this_00 = AActor::GetWorld((AActor *)this);
      UWorld::RegisterAutoActivateCamera(this_00,this,iVar2);
      pAVar4 = UGameplayStatics::GetPlayerController((UObject *)this,iVar2);
      if (pAVar4 != (APlayerController *)0x0) {
        uStack_c = uStack_c & 0xfffffffe;
        _uStack_14 = CONCAT31(uStack_13,1);
        local_18 = 0;
        uStack_10 = 0x40000000;
        (**(code **)(pAVar4->_padding_ + 0xef8))(pAVar4,this,&local_18);
      }
    }
  }
  AActor::BeginPlay((AActor *)this);
  return;
}

// GetAutoActivatePlayerIndex @ 1476adee0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall ACameraActor::GetAutoActivatePlayerIndex(ACameraActor *this)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (this->AutoActivateForPlayer).Value;
  iVar2 = -1;
  if (bVar1 != 0) {
    iVar2 = bVar1 - 1;
  }
  return iVar2;
}

// GetDefaultAttachComponent @ 1476b01f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall ACameraActor::GetDefaultAttachComponent(ACameraActor *this)

{
  return (USceneComponent *)(this->CameraComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 1476b3a10

UClass * __cdecl ACameraActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraActor",
               &Z_Registration_Info_UClass_ACameraActor.InnerSingleton,
               StaticRegisterNativesACameraActor,0xa60,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraActor>,
               InternalVTableHelperCtorCaller<ACameraActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraActor.InnerSingleton;
}

// Serialize @ 1476c60c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraActor::Serialize(ACameraActor *this,FArchive *param_1)

{
  undefined1 uVar1;
  UCameraComponent *pUVar2;
  
  AActor::Serialize((AActor *)this,param_1);
  if ((*(int *)&param_1->field_0x40 < 0x112) && ((param_1->field_0x28 & 1) != 0)) {
    pUVar2 = (this->CameraComponent).field0_0x0.DebugPtr;
    uVar1 = pUVar2->field_0x279;
    pUVar2->field_0x279 =
         (pUVar2->bConstrainAspectRatio ^ this->bConstrainAspectRatio_DEPRECATED) & 1 ^ uVar1;
    (((this->CameraComponent).field0_0x0.DebugPtr)->ProjectionMode).Value = '\0';
    ((this->CameraComponent).field0_0x0.DebugPtr)->AspectRatio = this->AspectRatio_DEPRECATED;
    ((this->CameraComponent).field0_0x0.DebugPtr)->FieldOfView = this->FOVAngle_DEPRECATED;
    ((this->CameraComponent).field0_0x0.DebugPtr)->PostProcessBlendWeight =
         this->PostProcessBlendWeight_DEPRECATED;
    FPostProcessSettings::operator=
              (&((this->CameraComponent).field0_0x0.DebugPtr)->PostProcessSettings,
               &this->PostProcessSettings_DEPRECATED);
  }
  return;
}

// Serialize @ 1476c6180

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraActor::Serialize(ACameraActor *this,FStructuredArchiveRecord param_1)

{
  undefined1 uVar1;
  UCameraComponent *pUVar2;
  FArchive *pFVar3;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  AActor::Serialize((AActor *)this,pFVar3);
  if ((*(int *)&pFVar3->field_0x40 < 0x112) && ((pFVar3->field_0x28 & 1) != 0)) {
    pUVar2 = (this->CameraComponent).field0_0x0.DebugPtr;
    uVar1 = pUVar2->field_0x279;
    pUVar2->field_0x279 =
         (pUVar2->bConstrainAspectRatio ^ this->bConstrainAspectRatio_DEPRECATED) & 1 ^ uVar1;
    (((this->CameraComponent).field0_0x0.DebugPtr)->ProjectionMode).Value = '\0';
    ((this->CameraComponent).field0_0x0.DebugPtr)->AspectRatio = this->AspectRatio_DEPRECATED;
    ((this->CameraComponent).field0_0x0.DebugPtr)->FieldOfView = this->FOVAngle_DEPRECATED;
    ((this->CameraComponent).field0_0x0.DebugPtr)->PostProcessBlendWeight =
         this->PostProcessBlendWeight_DEPRECATED;
    FPostProcessSettings::operator=
              (&((this->CameraComponent).field0_0x0.DebugPtr)->PostProcessSettings,
               &this->PostProcessSettings_DEPRECATED);
  }
  return;
}

// StaticRegisterNativesACameraActor @ 1476ca150

void __cdecl ACameraActor::StaticRegisterNativesACameraActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ACameraActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAutoActivatePlayerIndex @ 1476d0680

void __cdecl
ACameraActor::execGetAutoActivatePlayerIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = (byte)param_1[0x11].field_0x18 - 1;
  if (param_1[0x11].field_0x18 == 0) {
    iVar1 = -1;
  }
  *(int *)param_3 = iVar1;
  return;
}

