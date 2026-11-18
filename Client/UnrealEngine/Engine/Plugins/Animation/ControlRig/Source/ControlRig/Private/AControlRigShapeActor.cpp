// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 34

// StaticClass @ 14a1ff750

UClass * __cdecl AControlRigShapeActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AControlRigShapeActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigShapeActor",
               &Z_Registration_Info_UClass_AControlRigShapeActor.InnerSingleton,
               StaticRegisterNativesAControlRigShapeActor,0x3b0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AControlRigShapeActor>,
               InternalVTableHelperCtorCaller<AControlRigShapeActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AControlRigShapeActor.InnerSingleton;
}

// AControlRigShapeActor @ 14a21d3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

AControlRigShapeActor * __thiscall
AControlRigShapeActor::AControlRigShapeActor(AControlRigShapeActor *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__IViewportSelectableObject__;
  (this->ActorRootComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->ControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ControlName).ComparisonIndex = 0;
  (this->ControlName).Number = 0;
  (this->ShapeName).ComparisonIndex = 0;
  (this->ShapeName).Number = 0;
  (this->ColorParameterName).ComparisonIndex = 0;
  (this->ColorParameterName).Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OffsetTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OffsetTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OffsetTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OffsetTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OffsetTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OffsetTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OffsetTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OffsetTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->CachedIndex).Key.Type = None;
  (this->CachedIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedIndex).Key.Name.Number = 0;
  (this->CachedIndex).Index = 0xffff;
  (this->CachedIndex).ContainerVersion = -1;
  (this->CachedIndex).Element = (FRigBaseElement *)0x0;
  return this;
}

// AControlRigShapeActor @ 14a21d4d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

AControlRigShapeActor * __thiscall
AControlRigShapeActor::AControlRigShapeActor
          (AControlRigShapeActor *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  USceneComponent *pUVar6;
  UStaticMeshComponent *pUVar7;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->ControlRigIndex = 0xffffffff;
  (this->ActorRootComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  *(undefined ***)this = &_vftable__for__AActor__;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__IViewportSelectableObject__;
  (this->ControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FWeakObjectPtr::operator=(&(this->ControlRig).WeakPtr,(FObjectPtr)&local_res8);
  (this->ControlName).ComparisonIndex = 0;
  (this->ControlName).Number = 0;
  (this->ShapeName).ComparisonIndex = 0;
  (this->ShapeName).Number = 0;
  (this->ColorParameterName).ComparisonIndex = 0;
  (this->ColorParameterName).Number = 0;
  *(undefined8 *)&(this->OverrideColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->OverrideColor).field0_0x0 + 8) = 0;
  *&(this->OffsetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OffsetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OffsetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OffsetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OffsetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OffsetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->CachedIndex).Key.Type = None;
  (this->CachedIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedIndex).Key.Name.Number = 0;
  (this->CachedIndex).Index = 0xffff;
  (this->CachedIndex).ContainerVersion = -1;
  (this->CachedIndex).Element = (FRigBaseElement *)0x0;
  this->bSelected = '\0';
  this->bHovered = '\0';
  this->bSelectable = '\x01';
  (this->CurrentColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  pFVar4 = ::FName::FName(&local_res8,L"SceneComponent0");
  FVar3 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar6 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ActorRootComponent).field0_0x0.DebugPtr = pUVar6;
  pFVar4 = ::FName::FName(&local_res8,L"StaticMeshComponent0");
  FVar3 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  pUVar7 = (UStaticMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->StaticMeshComponent).field0_0x0.DebugPtr = pUVar7;
  (**(code **)(pUVar7->_padding_ + 0x788))(pUVar7,UCollisionProfile::NoCollision_ProfileName,1);
  *(undefined1 *)((longlong)&((this->StaticMeshComponent).field0_0x0.DebugPtr)->_padding_ + 3) = 2;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->StaticMeshComponent).field0_0x0.DebugPtr,false);
  ((this->StaticMeshComponent).field0_0x0.DebugPtr)->bUseDefaultCollision = '\0';
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (this->ActorRootComponent).field0_0x0.DebugPtr, pUVar6 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar6 = (this->ActorRootComponent).field0_0x0.DebugPtr;
  *(USceneComponent **)&this->field_0x1b8 = pUVar6;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->StaticMeshComponent).field0_0x0.DebugPtr,pUVar6,(FName)0x0);
  pbVar2 = (byte *)((longlong)&((this->StaticMeshComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar2 = *pbVar2 & 0xbf;
  pbVar2 = (byte *)((longlong)&((this->StaticMeshComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar2 = *pbVar2 & 0xdf;
  pbVar2 = (byte *)((longlong)&((this->StaticMeshComponent).field0_0x0.DebugPtr)->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0x10;
  return this;
}

// ~AControlRigShapeActor @ 14a2252d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigShapeActor::~AControlRigShapeActor(AControlRigShapeActor *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &___7IViewportSelectableObject__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetGlobalTransform @ 14a263d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
AControlRigShapeActor::GetGlobalTransform
          (AControlRigShapeActor *this,TTransform<double> *__return_storage_ptr__)

{
  if (*(USceneComponent **)&this->field_0x1b8 != (USceneComponent *)0x0) {
    USceneComponent::GetRelativeTransform
              (*(USceneComponent **)&this->field_0x1b8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a2678d0

UClass * __cdecl AControlRigShapeActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AControlRigShapeActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigShapeActor",
               &Z_Registration_Info_UClass_AControlRigShapeActor.InnerSingleton,
               StaticRegisterNativesAControlRigShapeActor,0x3b0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AControlRigShapeActor>,
               InternalVTableHelperCtorCaller<AControlRigShapeActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AControlRigShapeActor.InnerSingleton;
}

// IsEnabled @ 14a274340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall AControlRigShapeActor::IsEnabled(AControlRigShapeActor *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a27434a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)&this->field_0x2c0 + 0x10))();
  return (bool)uVar1;
}

// IsHovered @ 14a274360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall AControlRigShapeActor::IsHovered(AControlRigShapeActor *this)

{
  return this->bHovered;
}

// IsSelectable @ 14a2755e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall AControlRigShapeActor::IsSelectable(AControlRigShapeActor *this)

{
  return (bool)((byte)this->field_0xd0 >> 2 & 1);
}

// IsSelectedInEditor @ 14a275610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall AControlRigShapeActor::IsSelectedInEditor(AControlRigShapeActor *this)

{
  return this->bSelected;
}

// OnEnabledChanged @ 14a277cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigShapeActor::OnEnabledChanged(AControlRigShapeActor *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AControlRigShapeActor_OnEnabledChanged)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// OnHoveredChanged @ 14a277ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigShapeActor::OnHoveredChanged(AControlRigShapeActor *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AControlRigShapeActor_OnHoveredChanged)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// OnManipulatingChanged @ 14a278240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
AControlRigShapeActor::OnManipulatingChanged(AControlRigShapeActor *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AControlRigShapeActor_OnManipulatingChanged);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// OnSelectionChanged @ 14a278a50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigShapeActor::OnSelectionChanged(AControlRigShapeActor *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AControlRigShapeActor_OnSelectionChanged);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// OnTransformChanged @ 14a278b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
AControlRigShapeActor::OnTransformChanged(AControlRigShapeActor *this,TTransform<double> *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_70 = (param_1->Rotation).XY.m128d_f64[1];
  local_68 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_60 = (param_1->Rotation).ZW.m128d_f64[1];
  local_58 = (param_1->Translation).XY.m128d_f64[0];
  dStack_50 = (param_1->Translation).XY.m128d_f64[1];
  local_48 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_40 = (param_1->Translation).ZW.m128d_f64[1];
  local_38 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_30 = (param_1->Scale3D).XY.m128d_f64[1];
  local_28 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_20 = (param_1->Scale3D).ZW.m128d_f64[1];
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AControlRigShapeActor_OnTransformChanged);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_78);
  return;
}

// SetEnabled @ 14a292210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigShapeActor::SetEnabled(AControlRigShapeActor *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014a292213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x780))();
  return;
}

// SetGlobalTransform @ 14a293c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
AControlRigShapeActor::SetGlobalTransform(AControlRigShapeActor *this,TTransform<double> *param_1)

{
  if (*(USceneComponent **)&this->field_0x1b8 != (USceneComponent *)0x0) {
    USceneComponent::SetRelativeTransform
              (*(USceneComponent **)&this->field_0x1b8,param_1,false,(FHitResult *)0x0,
               TeleportPhysics);
  }
  return;
}

// SetHovered @ 14a293fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigShapeActor::SetHovered(AControlRigShapeActor *this,bool param_1)

{
  undefined1 uVar1;
  UFunction *pUVar2;
  FEditorScriptExecutionGuard local_res8 [8];
  byte local_res10 [24];
  
  uVar1 = this->field_0x390;
  this->field_0x390 = uVar1 & 0xfd | param_1 * '\x02';
  if (param_1 != this->bHovered) {
    FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(local_res8);
    local_res10[0] = this->bHovered;
    pUVar2 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AControlRigShapeActor_OnHoveredChanged);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,local_res10);
    FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_res8);
  }
  return;
}

// SetSelectable @ 14a2956f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigShapeActor::SetSelectable(AControlRigShapeActor *this,bool param_1)

{
  UFunction *pUVar1;
  FEditorScriptExecutionGuard local_res8 [8];
  undefined1 local_res10 [8];
  
  if (this->bSelectable != param_1) {
    this->field_0x390 = this->field_0x390 & 0xfb | param_1 << 2;
    if (!param_1) {
      (**(code **)(*(longlong *)this + 0x770))(this,0);
    }
    FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(local_res8);
    local_res10[0] = param_1;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AControlRigShapeActor_OnEnabledChanged);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
    FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_res8);
  }
  return;
}

// SetSelected @ 14a295790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigShapeActor::SetSelected(AControlRigShapeActor *this,bool param_1)

{
  UFunction *pUVar1;
  FEditorScriptExecutionGuard local_res8 [8];
  byte local_res10 [24];
  
  if (this->bSelected != param_1) {
    this->field_0x390 = this->field_0x390 & 0xfe | param_1;
    FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(local_res8);
    local_res10[0] = this->bSelected;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AControlRigShapeActor_OnSelectionChanged);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
    FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_res8);
  }
  return;
}

// SetShapeColor @ 14a295810

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
AControlRigShapeActor::SetShapeColor(AControlRigShapeActor *this,FLinearColor *param_1,bool param_2)

{
  int iVar1;
  UStaticMeshComponent *this_00;
  double dVar2;
  undefined8 uVar3;
  UMaterialInstanceDynamic *this_01;
  UClass *pUVar4;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  if (this_00 == (UStaticMeshComponent *)0x0) {
    return;
  }
  if (this->ColorParameterName == (FName)0x0) {
    return;
  }
  if ((((!param_2) && ((this->CurrentColor).field0_0x0._s_0.R == (param_1->field0_0x0)._s_0.R)) &&
      ((this->CurrentColor).field0_0x0._s_0.G == (param_1->field0_0x0)._s_0.G)) &&
     (((this->CurrentColor).field0_0x0._s_0.B == (param_1->field0_0x0)._s_0.B &&
      ((this->CurrentColor).field0_0x0._s_0.A == (param_1->field0_0x0)._s_0.A)))) {
    return;
  }
  this_01 = (UMaterialInstanceDynamic *)UStaticMeshComponent::GetMaterial(this_00,0);
  if (this_01 != (UMaterialInstanceDynamic *)0x0) {
    pUVar4 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14a2958b3;
  }
  this_01 = (UMaterialInstanceDynamic *)0x0;
LAB_14a2958b3:
  if (this_01 != (UMaterialInstanceDynamic *)0x0) {
    dVar2 = (double)(float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    local_28._8_4_ = SUB84(dVar2,0);
    local_28._0_8_ = (double)(float)*(undefined8 *)&param_1->field0_0x0;
    local_28._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_28._s_0.Z = (double)(param_1->field0_0x0)._s_0.B;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this_01,this->ColorParameterName,(TVector<double> *)&local_28._s_0);
  }
  uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentColor).field0_0x0 + 8) = uVar3;
  return;
}

// StaticRegisterNativesAControlRigShapeActor @ 14a297ef0

void __cdecl AControlRigShapeActor::StaticRegisterNativesAControlRigShapeActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_AControlRigShapeActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickControl @ 14a29c1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigShapeActor::TickControl(AControlRigShapeActor *this)

{
  return;
}

// UpdateControlSettings @ 14a2a4460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
AControlRigShapeActor::UpdateControlSettings
          (AControlRigShapeActor *this,ERigHierarchyNotification param_1,UControlRig *param_2,
          FRigControlElement *param_3,bool param_4,bool param_5)

{
  TSoftObjectPtr<UStaticMesh> *this_00;
  int iVar1;
  FName FVar2;
  FName FVar3;
  UStaticMesh *pUVar4;
  UStaticMeshComponent *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  FControlRigShapeDefinition *pFVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UStaticMesh *pUVar13;
  FRigCurrentAndInitialTransform *this_01;
  TTransform<double> *pTVar14;
  undefined1 auStackY_1c8 [32];
  TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> local_180;
  TSoftObjectPtr<UControlRigShapeLibrary> *local_170;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((param_3 == (FRigControlElement *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InControlElement",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigGizmoActor.cpp"
                         ,0x7d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (((param_3->Settings).AnimationType == AnimationChannel) ||
     ((param_3->Settings).ControlType == Bool)) {
LAB_14a2a4767:
    bVar7 = false;
  }
  else {
    FVar2 = this->ShapeName;
    bVar7 = param_1 == ControlShapeTransformChanged;
    FVar3 = (param_3->Settings).ShapeName;
    if ((FVar2 == FVar3) && (param_1 != ControlShapeTransformChanged)) {
      local_168.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_168.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_168.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_168.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_168.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_168.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      local_168.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_168.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_168.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_168.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_168.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_168.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      puVar9 = (undefined8 *)(**(code **)(param_2->_padding_ + 0x410))();
      local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = *(int *)(puVar9 + 1);
      local_170 = (TSoftObjectPtr<UControlRigShapeLibrary> *)*puVar9;
      local_180.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_180.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar1,0,&local_180.AllocatorInstance,iVar1,&local_180.ArrayMax);
        ConstructItems<TSoftObjectPtr<UControlRigShapeLibrary>,TSoftObjectPtr<UControlRigShapeLibrary>,int>
                  (local_180.AllocatorInstance.Data,local_170,iVar1);
      }
      pFVar10 = UControlRigShapeLibrary::GetShapeByName
                          (&(param_3->Settings).ShapeName,&local_180,&param_2->ShapeLibraryNameMap,
                           true);
      if (pFVar10 != (FControlRigShapeDefinition *)0x0) {
        local_168.Rotation.XY.m128d_f64 = *&(pFVar10->Transform).Rotation.XY.m128d_f64;
        local_168.Rotation.ZW.m128d_f64 = *&(pFVar10->Transform).Rotation.ZW.m128d_f64;
        local_168.Translation.XY.m128d_f64 = *&(pFVar10->Transform).Translation.XY.m128d_f64;
        local_168.Translation.ZW.m128d_f64 = *&(pFVar10->Transform).Translation.ZW.m128d_f64;
        local_168.Scale3D.XY.m128d_f64 = *&(pFVar10->Transform).Scale3D.XY.m128d_f64;
        local_168.Scale3D.ZW.m128d_f64 = *&(pFVar10->Transform).Scale3D.ZW.m128d_f64;
        if (FVar2 != FVar3) {
          this_00 = &pFVar10->StaticMesh;
          pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
          if (pUVar11 == (UObject *)0x0) {
LAB_14a2a46a1:
            TSoftObjectPtr<UStaticMesh>::LoadSynchronous(this_00);
          }
          else {
            pUVar12 = Z_Construct_UClass_UStaticMesh_NoRegister();
            iVar1 = (int)pUVar12->_padding_;
            if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar12->_padding_)) goto LAB_14a2a46a1;
          }
          pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
          if (pUVar11 != (UObject *)0x0) {
            pUVar12 = Z_Construct_UClass_UStaticMesh_NoRegister();
            iVar1 = (int)pUVar12->_padding_;
            if (((iVar1 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                 &pUVar12->_padding_)) &&
               (pUVar13 = TSoftObjectPtr<UStaticMesh>::Get(this_00), pUVar13 != (UStaticMesh *)0x0))
            {
              pUVar4 = (((this->StaticMeshComponent).field0_0x0.DebugPtr)->StaticMesh).field0_0x0.
                       DebugPtr;
              if (UE::GC::GIsIncrementalReachabilityPending == false) {
                if (pUVar4 != (UStaticMesh *)0x0) goto LAB_14a2a471b;
              }
              else if (pUVar4 != (UStaticMesh *)0x0) {
                UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14a2a471b:
                if (pUVar4 == pUVar13) goto LAB_14a2a47a3;
              }
              pUVar5 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
              (**(code **)(pUVar5->_padding_ + 0xb28))(pUVar5,pUVar13);
              bVar7 = true;
              this->ShapeName = (param_3->Settings).ShapeName;
              goto LAB_14a2a47a3;
            }
          }
          DestructItems<TSoftObjectPtr<UControlRigShapeLibrary>,int>
                    ((TSoftObjectPtr<UControlRigShapeLibrary> *)local_180.AllocatorInstance.Data,
                     local_180.ArrayNum);
          if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.AllocatorInstance.Data);
          }
          goto LAB_14a2a4767;
        }
      }
LAB_14a2a47a3:
      DestructItems<TSoftObjectPtr<UControlRigShapeLibrary>,int>
                ((TSoftObjectPtr<UControlRigShapeLibrary> *)local_180.AllocatorInstance.Data,
                 local_180.ArrayNum);
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      if (bVar7) {
        this_01 = FRigControlElement::GetShapeTransform(param_3);
        pTVar14 = FRigComputedTransform::Get((FRigComputedTransform *)this_01);
        pUVar5 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
        local_a8.Rotation.XY.m128d_f64[0] = (pTVar14->Rotation).XY.m128d_f64[0];
        local_a8.Rotation.XY.m128d_f64[1] = (pTVar14->Rotation).XY.m128d_f64[1];
        local_a8.Rotation.ZW.m128d_f64[0] = (pTVar14->Rotation).ZW.m128d_f64[0];
        local_a8.Rotation.ZW.m128d_f64[1] = (pTVar14->Rotation).ZW.m128d_f64[1];
        local_a8.Translation.XY.m128d_f64[0] = (pTVar14->Translation).XY.m128d_f64[0];
        local_a8.Translation.XY.m128d_f64[1] = (pTVar14->Translation).XY.m128d_f64[1];
        local_a8.Translation.ZW.m128d_f64[0] = (pTVar14->Translation).ZW.m128d_f64[0];
        local_a8.Translation.ZW.m128d_f64[1] = (pTVar14->Translation).ZW.m128d_f64[1];
        local_a8.Scale3D.XY.m128d_f64[0] = (pTVar14->Scale3D).XY.m128d_f64[0];
        local_a8.Scale3D.XY.m128d_f64[1] = (pTVar14->Scale3D).XY.m128d_f64[1];
        local_a8.Scale3D.ZW.m128d_f64[0] = (pTVar14->Scale3D).ZW.m128d_f64[0];
        local_a8.Scale3D.ZW.m128d_f64[1] = (pTVar14->Scale3D).ZW.m128d_f64[1];
        local_108.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_108.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_108.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_108.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_108.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_108.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_108,&local_168,&local_a8);
        USceneComponent::SetRelativeTransform
                  ((USceneComponent *)pUVar5,&local_108,false,(FHitResult *)0x0,None);
      }
    }
    (**(code **)(*(longlong *)this + 0x7a0))(this,&(param_3->Settings).ShapeColor,0);
    bVar7 = true;
  }
  return bVar7;
}

// _getUObject @ 14a2ae4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __thiscall AControlRigShapeActor::_getUObject(AControlRigShapeActor *this)

{
  return (UObject *)&this[-1].field_0xf0;
}

// execGetGlobalTransform @ 14a2b2800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AControlRigShapeActor::execGetGlobalTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(USceneComponent **)(param_1 + 0xb) == (USceneComponent *)0x0) {
    local_78.Rotation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_78.Rotation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_78.Rotation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_78.Rotation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_78.Rotation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    local_78.Rotation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    local_78.Translation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    local_78.Translation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    local_78.Translation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    local_78.Translation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_78.Translation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    local_78.Translation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    local_78.Translation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    local_78.Translation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_78.Scale3D.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    local_78.Scale3D.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    local_78.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_78.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    USceneComponent::GetRelativeTransform(*(USceneComponent **)(param_1 + 0xb),&local_78);
  }
  *(undefined4 *)param_3 = local_78.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_78.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_78.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_78.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_78.Rotation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_78.Rotation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_78.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_78.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_78.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_78.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_78.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_78.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_78.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_78.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_78.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_78.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_78.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_78.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_78.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_78.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_78.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_78.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_78.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_78.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

// execIsEnabled @ 14a2b3dd0

void __cdecl AControlRigShapeActor::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x768))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsHovered @ 14a2b3e10

void __cdecl AControlRigShapeActor::execIsHovered(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x790))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsSelectedInEditor @ 14a2b3f10

void __cdecl
AControlRigShapeActor::execIsSelectedInEditor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x778))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execSetEnabled @ 14a2b69a0

void __cdecl AControlRigShapeActor::execSetEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x760))(param_1,local_res8[0] != 0);
  return;
}

// execSetGlobalTransform @ 14a2b6a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AControlRigShapeActor::execSetGlobalTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TTransform<double> *pTVar14;
  undefined1 auStack_a8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_78.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_78.Rotation.XY.m128d_f64[1] = (double)fVar5;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar14 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar14 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(USceneComponent **)(param_1 + 0xb) != (USceneComponent *)0x0) {
    USceneComponent::SetRelativeTransform
              (*(USceneComponent **)(param_1 + 0xb),pTVar14,false,(FHitResult *)0x0,TeleportPhysics)
    ;
  }
  return;
}

// execSetHovered @ 14a2b6b70

void __cdecl AControlRigShapeActor::execSetHovered(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x788))(param_1,local_res8[0] != 0);
  return;
}

// execSetSelectable @ 14a2b76f0

void __cdecl
AControlRigShapeActor::execSetSelectable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x780))(param_1,local_res8[0] != 0);
  return;
}

// execSetSelected @ 14a2b7790

void __cdecl AControlRigShapeActor::execSetSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x770))(param_1,local_res8[0] != 0);
  return;
}

