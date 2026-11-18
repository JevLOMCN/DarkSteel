// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 19

// StaticClass @ 14a203690

UClass * __cdecl AControlRigControlActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AControlRigControlActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigControlActor",
               &Z_Registration_Info_UClass_AControlRigControlActor.InnerSingleton,
               StaticRegisterNativesAControlRigControlActor,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AControlRigControlActor>,
               InternalVTableHelperCtorCaller<AControlRigControlActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AControlRigControlActor.InnerSingleton;
}

// AControlRigControlActor @ 14a21d1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AControlRigControlActor * __thiscall
AControlRigControlActor::AControlRigControlActor
          (AControlRigControlActor *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  AActor::AActor((AActor *)this,param_1);
  this_00 = &(this->ControlRig).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7AControlRigControlActor__6B_;
  (this->ActorToTrack).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MaterialOverride).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->ColorParameter).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorParameter).Data.ArrayNum = 0;
  (this->ColorParameter).Data.ArrayMax = 0;
  (this->ActorRootComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ControlNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlNames).ArrayNum = 0;
  (this->ControlNames).ArrayMax = 0;
  (this->ShapeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapeTransforms).ArrayNum = 0;
  (this->ShapeTransforms).ArrayMax = 0;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->ColorParameterName).ComparisonIndex = 0;
  (this->ColorParameterName).Number = 0;
  return this;
}

// AControlRigControlActor @ 14a21d280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AControlRigControlActor * __thiscall
AControlRigControlActor::AControlRigControlActor
          (AControlRigControlActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *this_00;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->bRefreshOnTick = true;
  this->bIsSelectable = true;
  this->_padding_ = (longlong)&___7AControlRigControlActor__6B_;
  (this->ActorToTrack).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MaterialOverride).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  ::FString::FString(&this->ColorParameter,L"Color");
  this_00 = &(this->ControlRig).SoftObjectPtr.field_0x18;
  this->bCastShadows = false;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x20 = 0;
  (this->ActorRootComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ControlNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlNames).ArrayNum = 0;
  (this->ControlNames).ArrayMax = 0;
  (this->ShapeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapeTransforms).ArrayNum = 0;
  (this->ShapeTransforms).ArrayMax = 0;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->ColorParameterName).ComparisonIndex = 0;
  (this->ColorParameterName).Number = 0;
  pFVar3 = ::FName::FName(&local_res8,L"SceneComponent0");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ActorRootComponent).field0_0x0.DebugPtr = pUVar5;
  AActor::SetRootComponent((AActor *)this,pUVar5);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 1;
  *(undefined1 *)&this->_padding_ = 5;
  AActor::SetActorEnableCollision((AActor *)this,false);
  Refresh(this);
  return this;
}

// ~AControlRigControlActor @ 14a225230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlRigControlActor::~AControlRigControlActor(AControlRigControlActor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7AControlRigControlActor__6B_;
  RemoveUnbindDelegate(this);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShapeTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ControlNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ControlRig).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->ColorParameter).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// operator() @ 14a22e9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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
`AControlRigControlActor::Refresh'::__l11::<lambda_1>::operator()
          (void *this,FRigControlElement *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FControlRigShapeDefinition *pFVar9;
  UMaterial *pUVar10;
  UStaticMesh *pUVar11;
  USceneComponent *this_00;
  UMaterialInstanceDynamic *pUVar12;
  TTransform<double> *pTVar13;
  longlong *plVar14;
  longlong lVar15;
  byte bVar16;
  uint uVar17;
  UObject *pUVar18;
  ForAnyElementType *pFVar19;
  undefined1 auStack_208 [32];
  TTransform<double> *local_1e8;
  TTransform<double> *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8 [16];
  double local_1a8;
  double local_1a0;
  FName local_198 [2];
  undefined1 local_188 [128];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  if ((param_1->Settings).AnimationType == AnimationChannel) {
    return true;
  }
  if ((param_1->Settings).ControlType == Bool) {
    return true;
  }
  switch((param_1->Settings).ControlType) {
  case Float:
  case Integer:
  case Vector2D:
  case Position:
  case Scale:
  case Rotator:
  case Transform:
  case TransformNoScale:
  case EulerTransform:
  case ScaleFloat:
    break;
  default:
    return true;
  }
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)(*(longlong *)this + 0x300));
  pUVar18 = (UObject *)0x0;
  if (pUVar7 == (UObject *)0x0) {
LAB_14a22ea80:
    pUVar7 = pUVar18;
  }
  else {
    pUVar8 = UControlRig::StaticClass();
    iVar6 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar8->_padding_)) goto LAB_14a22ea80;
  }
  pFVar9 = UControlRigShapeLibrary::GetShapeByName
                     (&(param_1->Settings).ShapeName,
                      (TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> *
                      )((longlong)this + 8),
                      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                       *)&pUVar7[0x15].field_0x8,true);
  if (pFVar9 == (FControlRigShapeDefinition *)0x0) {
    return true;
  }
  lVar15 = *(longlong *)this;
  pUVar10 = *(UMaterial **)(lVar15 + 0x2d8);
  if ((pUVar10 != (UMaterial *)0x0) && (1 < *(int *)(lVar15 + 0x2e8))) {
    if (*(int *)(lVar15 + 0x2e8) == 0) {
      ::FName::FName(local_198,L"");
    }
    else {
      ::FName::FName(local_198,*(wchar_t **)(lVar15 + 0x2e0));
    }
    goto LAB_14a22eba6;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(pFVar9->Library).WeakPtr);
  if (!bVar4) {
    return true;
  }
  pUVar7 = FWeakObjectPtr::Get(&(pFVar9->Library).WeakPtr);
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar7[5].field_0x8);
  if (pUVar7 == (UObject *)0x0) {
LAB_14a22eb78:
    pUVar7 = FWeakObjectPtr::Get(&(pFVar9->Library).WeakPtr);
    pUVar10 = TSoftObjectPtr<UMaterial>::LoadSynchronous
                        ((TSoftObjectPtr<UMaterial> *)&pUVar7[5].field_0x8);
  }
  else {
    pUVar8 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar6 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar8->_padding_)) goto LAB_14a22eb78;
    pUVar7 = FWeakObjectPtr::Get(&(pFVar9->Library).WeakPtr);
    pUVar10 = TSoftObjectPtr<UMaterial>::Get((TSoftObjectPtr<UMaterial> *)&pUVar7[5].field_0x8);
  }
  pUVar7 = FWeakObjectPtr::Get(&(pFVar9->Library).WeakPtr);
  local_198[0].ComparisonIndex.Value = *(uint *)&pUVar7[7].field_0x8;
  local_198[0].Number = *(uint *)&pUVar7[7].field_0xc;
LAB_14a22eba6:
  *(FName *)(*(longlong *)this + 0x368) = local_198[0];
  pUVar11 = TSoftObjectPtr<UStaticMesh>::LoadSynchronous(&pFVar9->StaticMesh);
  pUVar7 = *(UObject **)(*(longlong *)this + 0x2f8);
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_188,pUVar8);
  local_188._8_8_ = pUVar7;
  this_00 = (USceneComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_188);
  if (local_188._64_8_ != 0) {
    plVar14 = (longlong *)(local_188 + 0x50);
    if ((longlong *)local_188._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_188._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  (**(code **)(this_00->_padding_ + 0xb28))(this_00,pUVar11);
  local_1a8 = 0.0;
  USceneComponent::SetupAttachment
            (this_00,*(USceneComponent **)(*(longlong *)this + 0x2f8),(FName)0x0);
  UActorComponent::RegisterComponent((UActorComponent *)this_00);
  bVar16 = *(byte *)((longlong)&this_00[1]._padding_ + 6);
  local_1a0 = 0.0;
  bVar16 = (*(char *)(*(longlong *)this + 0x2f0) << 6 ^ bVar16) & 0x40 ^ bVar16;
  *(byte *)((longlong)&this_00[1]._padding_ + 6) = bVar16;
  *(byte *)((longlong)&this_00[1]._padding_ + 6) =
       (*(char *)(*(longlong *)this + 0x2f0) << 5 ^ bVar16) & 0x20 ^ bVar16;
  pUVar12 = UMaterialInstanceDynamic::Create
                      ((UMaterialInterface *)pUVar10,(UObject *)this_00,(FName)0x0);
  iVar6 = (**(code **)(this_00->_padding_ + 0x810))(this_00);
  if (0 < iVar6) {
    do {
      (**(code **)(this_00->_padding_ + 0x6b8))(this_00,pUVar18,pUVar12);
      uVar17 = (int)pUVar18 + 1;
      pUVar18 = (UObject *)(ulonglong)uVar17;
      iVar6 = (**(code **)(this_00->_padding_ + 0x810))(this_00);
    } while ((int)uVar17 < iVar6);
  }
  lVar15 = *(longlong *)this;
  puVar1 = &param_1->field_0x14;
  pFVar19 = (ForAnyElementType *)(lVar15 + 0x328);
  pTVar13 = (TTransform<double> *)pFVar19->Data;
  if ((pTVar13 <= puVar1) && (puVar1 < (pTVar13->Rotation).XY.m128d_f64 + *(int *)(lVar15 + 0x334)))
  {
    local_1d0 = (longlong)*(int *)(lVar15 + 0x330);
    local_1c8 = 8;
    local_1e8 = (TTransform<double> *)puVar1;
    local_1e0 = pTVar13;
    local_1d8 = (longlong)*(int *)(lVar15 + 0x334);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)(lVar15 + 0x330);
  if (iVar6 == *(int *)(lVar15 + 0x334)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar19,(int *)(lVar15 + 0x334));
  }
  *(int *)(lVar15 + 0x330) = iVar6 + 1;
  *(undefined8 *)(pFVar19->Data + (longlong)iVar6 * 8) = *(undefined8 *)puVar1;
  lVar15 = *(longlong *)this;
  pFVar19 = (ForAnyElementType *)(lVar15 + 0x338);
  pTVar13 = URigHierarchy::GetControlShapeTransform
                      (*(URigHierarchy **)((longlong)this + 0x18),&local_a8,param_1,CurrentLocal);
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
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
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
  UE::Math::TTransform<double>::Multiply(&local_108,&pFVar9->Transform,pTVar13);
  pTVar13 = (TTransform<double> *)pFVar19->Data;
  if ((pTVar13 <= &local_108) && (&local_108 < pTVar13 + *(int *)(lVar15 + 0x344))) {
    local_1d0 = (longlong)*(int *)(lVar15 + 0x340);
    local_1c8 = 0x60;
    local_1e8 = &local_108;
    local_1e0 = pTVar13;
    local_1d8 = (longlong)*(int *)(lVar15 + 0x344);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)(lVar15 + 0x340);
  if (iVar6 == *(int *)(lVar15 + 0x344)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,pFVar19,(int *)(lVar15 + 0x344));
  }
  *(int *)(lVar15 + 0x340) = iVar6 + 1;
  pFVar2 = pFVar19->Data;
  lVar15 = (longlong)iVar6 * 0x60;
  *(double *)(pFVar2 + lVar15) = local_108.Rotation.XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar15 + 8) = local_108.Rotation.XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar15 + 0x10) = local_108.Rotation.ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar15 + 0x10 + 8) = local_108.Rotation.ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar15 + 0x20) = local_108.Translation.XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar15 + 0x20 + 8) = local_108.Translation.XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar15 + 0x30) = local_108.Translation.ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar15 + 0x30 + 8) = local_108.Translation.ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar15 + 0x40) = local_108.Scale3D.XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar15 + 0x40 + 8) = local_108.Scale3D.XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar15 + 0x50) = local_108.Scale3D.ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar15 + 0x50 + 8) = local_108.Scale3D.ZW.m128d_f64[1];
  lVar15 = *(longlong *)this;
  pFVar19 = (ForAnyElementType *)(lVar15 + 0x348);
  local_1b8._0_8_ = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pTVar13 = (TTransform<double> *)pFVar19->Data;
  if ((pTVar13 <= (TTransform<double> *)local_1b8) &&
     (local_1b8 < (pTVar13->Rotation).XY.m128d_f64 + *(int *)(lVar15 + 0x354))) {
    local_1d0 = (longlong)*(int *)(lVar15 + 0x350);
    local_1c8 = 8;
    local_1e8 = (TTransform<double> *)local_1b8;
    local_1e0 = pTVar13;
    local_1d8 = (longlong)*(int *)(lVar15 + 0x354);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)(lVar15 + 0x350);
  if (iVar6 == *(int *)(lVar15 + 0x354)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar19,(int *)(lVar15 + 0x354));
  }
  *(int *)(lVar15 + 0x350) = iVar6 + 1;
  *(undefined8 *)(pFVar19->Data + (longlong)iVar6 * 8) = local_1b8._0_8_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((USceneComponent *)local_1b8._0_8_ != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b8._0_8_);
  }
  lVar15 = *(longlong *)this;
  pFVar19 = (ForAnyElementType *)(lVar15 + 0x358);
  local_1b8._8_8_ = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pTVar13 = (TTransform<double> *)pFVar19->Data;
  if ((pTVar13 <= (TTransform<double> *)(local_1b8 + 8)) &&
     (local_1b8 + 8 < (pTVar13->Rotation).XY.m128d_f64 + *(int *)(lVar15 + 0x364))) {
    local_1d0 = (longlong)*(int *)(lVar15 + 0x360);
    local_1c8 = 8;
    local_1e8 = (TTransform<double> *)(local_1b8 + 8);
    local_1e0 = pTVar13;
    local_1d8 = (longlong)*(int *)(lVar15 + 0x364);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)(lVar15 + 0x360);
  if (iVar6 == *(int *)(lVar15 + 0x364)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar19,(int *)(lVar15 + 0x364));
  }
  *(int *)(lVar15 + 0x360) = iVar6 + 1;
  *(undefined8 *)(pFVar19->Data + (longlong)iVar6 * 8) = local_1b8._8_8_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UMaterialInstanceDynamic *)local_1b8._8_8_ != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b8._8_8_);
  }
  return true;
}

// BeginDestroy @ 14a241250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlRigControlActor::BeginDestroy(AControlRigControlActor *this)

{
  undefined8 local_res8 [4];
  
  RemoveUnbindDelegate(this);
  local_res8[0] = 0;
  FSoftObjectPtr::operator=(&(this->ControlRig).SoftObjectPtr,(FObjectPtr)local_res8);
  Clear(this);
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BeginPlay @ 14a2419f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlRigControlActor::BeginPlay(AControlRigControlActor *this)

{
  TObjectPtr<UStaticMeshComponent>_u_0 *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  USceneComponent *this_00;
  TObjectPtr<UStaticMeshComponent>_u_0 TVar5;
  UActorComponent *this_01;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  TObjectPtr<UStaticMeshComponent>_u_0 TStackX_8;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> TStack_38;
  
  this_00 = (this->ActorRootComponent).field0_0x0.DebugPtr;
  if (this_00 != (USceneComponent *)0x0) {
    TStack_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_38.ArrayNum = 0;
    TStack_38.ArrayMax = 0;
    USceneComponent::GetChildrenComponents(this_00,true,&TStack_38);
    iVar4 = TStack_38.ArrayNum;
    pTVar1 = (TObjectPtr<UStaticMeshComponent>_u_0 *)
             (TStack_38.AllocatorInstance.Data + (longlong)TStack_38.ArrayNum * 8);
    FVar7.Data = TStack_38.AllocatorInstance.Data;
    while( true ) {
      if (TStack_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&TStackX_8);
      }
      if ((TObjectPtr<UStaticMeshComponent>_u_0 *)FVar7.Data == pTVar1) break;
      TVar5 = (TObjectPtr<UStaticMeshComponent>_u_0)
              *(TObjectPtr<UStaticMeshComponent>_u_0 *)FVar7.Data;
      if (TVar5.DebugPtr != (UStaticMeshComponent *)0x0) {
        pUVar6 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar3 = (int)pUVar6->_padding_;
        if (((iVar3 <= *(int *)((TVar5.DebugPtr)->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)((TVar5.DebugPtr)->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar6->_padding_)) && (((uint)(TVar5.DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
          TStackX_8 = TVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
          }
          TArray<TObjectPtr<UStaticMeshComponent>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TObjectPtr<UStaticMeshComponent>_>
                    (&this->Components,(TObjectPtr<UStaticMeshComponent> *)&TStackX_8.ObjectPtr);
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    pFVar8 = (this->Components).AllocatorInstance.Data;
    iVar4 = (this->Components).ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->Components).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&TStackX_8);
      }
      if (pFVar8 == pFVar2) break;
      this_01 = *(UActorComponent **)pFVar8;
      if ((this_01 != (UActorComponent *)0x0) && (((uint)this_01->_padding_ >> 0x1e & 1) == 0)) {
        (**(code **)(this_01->_padding_ + 0x518))
                  (this_01,&FDetachmentTransformRules::KeepRelativeTransform);
        UActorComponent::UnregisterComponent(this_01);
        (**(code **)(this_01->_padding_ + 0x4a0))(this_01,0);
      }
      pFVar8 = pFVar8 + 8;
    }
    if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_38.AllocatorInstance.Data);
    }
  }
  (this->ControlNames).ArrayNum = 0;
  if ((this->ControlNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ControlNames).AllocatorInstance,0,&(this->ControlNames).ArrayMax);
  }
  (this->ShapeTransforms).ArrayNum = 0;
  if ((this->ShapeTransforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->ShapeTransforms).AllocatorInstance,0,
               &(this->ShapeTransforms).ArrayMax);
  }
  (this->Components).ArrayNum = 0;
  if ((this->Components).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Components).AllocatorInstance,0,&(this->Components).ArrayMax);
  }
  (this->Materials).ArrayNum = 0;
  if ((this->Materials).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Materials).AllocatorInstance,0,&(this->Materials).ArrayMax);
  }
  return;
}

// Clear @ 14a245d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlRigControlActor::Clear(AControlRigControlActor *this)

{
  TObjectPtr<UStaticMeshComponent>_u_0 *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  USceneComponent *this_00;
  TObjectPtr<UStaticMeshComponent>_u_0 TVar5;
  UActorComponent *this_01;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  TObjectPtr<UStaticMeshComponent>_u_0 local_res8;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = (this->ActorRootComponent).field0_0x0.DebugPtr;
  if (this_00 != (USceneComponent *)0x0) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    USceneComponent::GetChildrenComponents(this_00,true,&local_38);
    iVar4 = local_38.ArrayNum;
    pTVar1 = (TObjectPtr<UStaticMeshComponent>_u_0 *)
             (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8);
    FVar7.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if ((TObjectPtr<UStaticMeshComponent>_u_0 *)FVar7.Data == pTVar1) break;
      TVar5 = (TObjectPtr<UStaticMeshComponent>_u_0)
              *(TObjectPtr<UStaticMeshComponent>_u_0 *)FVar7.Data;
      if (TVar5.DebugPtr != (UStaticMeshComponent *)0x0) {
        pUVar6 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar3 = (int)pUVar6->_padding_;
        if (((iVar3 <= *(int *)((TVar5.DebugPtr)->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)((TVar5.DebugPtr)->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar6->_padding_)) && (((uint)(TVar5.DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
          local_res8 = TVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
          }
          TArray<TObjectPtr<UStaticMeshComponent>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TObjectPtr<UStaticMeshComponent>_>
                    (&this->Components,(TObjectPtr<UStaticMeshComponent> *)&local_res8.ObjectPtr);
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    pFVar8 = (this->Components).AllocatorInstance.Data;
    iVar4 = (this->Components).ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->Components).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar8 == pFVar2) break;
      this_01 = *(UActorComponent **)pFVar8;
      if ((this_01 != (UActorComponent *)0x0) && (((uint)this_01->_padding_ >> 0x1e & 1) == 0)) {
        (**(code **)(this_01->_padding_ + 0x518))
                  (this_01,&FDetachmentTransformRules::KeepRelativeTransform);
        UActorComponent::UnregisterComponent(this_01);
        (**(code **)(this_01->_padding_ + 0x4a0))(this_01,0);
      }
      pFVar8 = pFVar8 + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  (this->ControlNames).ArrayNum = 0;
  if ((this->ControlNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ControlNames).AllocatorInstance,0,&(this->ControlNames).ArrayMax);
  }
  (this->ShapeTransforms).ArrayNum = 0;
  if ((this->ShapeTransforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->ShapeTransforms).AllocatorInstance,0,
               &(this->ShapeTransforms).ArrayMax);
  }
  (this->Components).ArrayNum = 0;
  if ((this->Components).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Components).AllocatorInstance,0,&(this->Components).ArrayMax);
  }
  (this->Materials).ArrayNum = 0;
  if ((this->Materials).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Materials).AllocatorInstance,0,&(this->Materials).ArrayMax);
  }
  return;
}

// EndPlay @ 14a251d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlRigControlActor::EndPlay(AControlRigControlActor *this,Type param_1)

{
  undefined8 local_res8;
  
  RemoveUnbindDelegate(this);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->ControlRig).SoftObjectPtr,(FObjectPtr)&local_res8);
  Clear(this);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 14a267810

UClass * __cdecl AControlRigControlActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AControlRigControlActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigControlActor",
               &Z_Registration_Info_UClass_AControlRigControlActor.InnerSingleton,
               StaticRegisterNativesAControlRigControlActor,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AControlRigControlActor>,
               InternalVTableHelperCtorCaller<AControlRigControlActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AControlRigControlActor.InnerSingleton;
}

// HandleControlRigUnbind @ 14a26e1c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlRigControlActor::HandleControlRigUnbind(AControlRigControlActor *this)

{
  Clear(this);
  Refresh(this);
  return;
}

// Refresh @ 14a27e0a0

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
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall AControlRigControlActor::Refresh(AControlRigControlActor *this)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  URigHierarchy *pUVar3;
  TSoftObjectPtr<UControlRigShapeLibrary> *pTVar4;
  USceneComponent *this_00;
  UMaterialInstanceDynamic *this_01;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  longlong *plVar13;
  FRigBaseElement *pFVar14;
  longlong lVar15;
  UScriptStruct *pUVar16;
  FLinearColor *pFVar17;
  TPersistentObjectPtr<FSoftObjectPath> *this_03;
  longlong lVar18;
  uint uVar19;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8 [8];
  AControlRigControlActor *local_1b0;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  URigHierarchy *local_198;
  TArray<UControlRig_*,TSizedDefaultAllocator<32>_> local_190;
  undefined8 local_180;
  UClass *local_178;
  UObject *local_170;
  code *local_168;
  FRigElementKey local_160;
  code *local_150;
  AControlRigControlActor **local_148;
  TVector<double>_u_0 local_140;
  undefined1 local_128 [24];
  longlong lStack_110;
  FLinearColor local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((this->ActorToTrack).field0_0x0.DebugPtr == (AActor *)0x0) {
    return;
  }
  iVar10 = (this->ControlNames).ArrayNum;
  if ((((iVar10 == 0) || (iVar10 != (this->Components).ArrayNum)) ||
      (iVar10 != (this->Materials).ArrayNum)) || (iVar10 != (this->ShapeTransforms).ArrayNum)) {
    RemoveUnbindDelegate(this);
    local_180 = 0;
    FSoftObjectPtr::operator=(&(this->ControlRig).SoftObjectPtr,(FObjectPtr)&local_180);
    Clear(this);
  }
  pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar11 == (UObject *)0x0) {
    local_178 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_178 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_178);
    }
    UControlRig::FindControlRigs
              (&local_190,(UObject *)(this->ActorToTrack).field0_0x0.DebugPtr,
               (TSubclassOf<UControlRig>)&local_178);
    if (0 < local_190.ArrayNum) {
      local_170 = *(UObject **)local_190.AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_170 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_170);
      }
      FSoftObjectPtr::operator=(&(this->ControlRig).SoftObjectPtr,(FObjectPtr)&local_170);
    }
    pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
    if (pUVar11 != (UObject *)0x0) {
      RemoveUnbindDelegate(this);
      pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
      if (pUVar11 == (UObject *)0x0) {
LAB_14a27e218:
        pUVar11 = (UObject *)0x0;
      }
      else {
        pUVar12 = UControlRig::StaticClass();
        iVar10 = (int)pUVar12->_padding_;
        if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar12->_padding_)) goto LAB_14a27e218;
      }
      plVar13 = *(longlong **)&pUVar11[0x17].field_0x8;
      pTVar2 = *(TReferenceControllerBase<1> **)&pUVar11[0x17].field_0x10;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (plVar13 != (longlong *)0x0) {
        this_02 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                  (**(code **)(*plVar13 + 0x18))();
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<AControlRigControlActor>
                  (this_02,(AControlRigControlActor *)local_128,(pmf_c8c0c65e)this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
      if (pUVar11 == (UObject *)0x0) {
LAB_14a27e291:
        pUVar11 = (UObject *)0x0;
      }
      else {
        pUVar12 = UControlRig::StaticClass();
        iVar10 = (int)pUVar12->_padding_;
        if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar12->_padding_)) goto LAB_14a27e291;
      }
      plVar13 = (longlong *)(**(code **)(*(longlong *)pUVar11 + 0x410))(pUVar11);
      if ((int)plVar13[1] != 0) {
        AActor::SetActorEnableCollision((AActor *)this,false);
        lVar18 = plVar13[1];
        this_03 = (TPersistentObjectPtr<FSoftObjectPath> *)*plVar13;
        pTVar1 = this_03 + (int)lVar18;
        while( true ) {
          if ((int)plVar13[1] != (int)lVar18) {
            local_1b8[0] = 0;
            `TCheckedPointerIterator<TSoftObjectPtr<UControlRigShapeLibrary>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_1b8);
          }
          if (this_03 == pTVar1) break;
          pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_03);
          if (pUVar11 == (UObject *)0x0) {
LAB_14a27e312:
            pUVar11 = (UObject *)0x0;
          }
          else {
            pUVar12 = UControlRigShapeLibrary::StaticClass();
            iVar10 = (int)pUVar12->_padding_;
            if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar10) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
                &pUVar12->_padding_)) goto LAB_14a27e312;
          }
          TSoftObjectPtr<UMaterial>::LoadSynchronous
                    ((TSoftObjectPtr<UMaterial> *)&pUVar11[5].field_0x8);
          this_03 = this_03 + 1;
        }
        pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
        if (pUVar11 == (UObject *)0x0) {
LAB_14a27e35d:
          pUVar11 = (UObject *)0x0;
        }
        else {
          pUVar12 = UControlRig::StaticClass();
          iVar10 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar12->_padding_)) goto LAB_14a27e35d;
        }
        pUVar3 = *(URigHierarchy **)&pUVar11[0x14].field_0x18;
        iVar10 = (int)plVar13[1];
        pTVar4 = (TSoftObjectPtr<UControlRigShapeLibrary> *)*plVar13;
        local_1a8.Data = (FScriptContainerElement *)0x0;
        local_1b0 = this;
        local_1a0 = iVar10;
        if (iVar10 == 0) {
          local_19c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar10,0,&local_1a8,iVar10,&local_19c);
          ConstructItems<TSoftObjectPtr<UControlRigShapeLibrary>,TSoftObjectPtr<UControlRigShapeLibrary>,int>
                    (local_1a8.Data,pTVar4,iVar10);
        }
        local_148 = &local_1b0;
        local_150 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AControlRigControlActor::Refresh'::__l11::<lambda_1>,bool,FRigControlElement_*>
                    ::Call;
        local_198 = pUVar3;
        URigHierarchy::ForEach<FRigControlElement>
                  (pUVar3,(TFunctionRef<bool___cdecl(FRigControlElement_*)> *)&local_150);
        DestructItems<TSoftObjectPtr<UControlRigShapeLibrary>,int>
                  ((TSoftObjectPtr<UControlRigShapeLibrary> *)local_1a8.Data,local_1a0);
        if (local_1a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
        if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.AllocatorInstance.Data);
        }
        goto LAB_14a27e417;
      }
    }
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
  }
  else {
LAB_14a27e417:
    uVar19 = 0;
    if (0 < (this->ControlNames).ArrayNum) {
      lVar18 = 0;
      do {
        pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
        if (pUVar11 == (UObject *)0x0) {
LAB_14a27e473:
          pUVar11 = (UObject *)0x0;
        }
        else {
          pUVar12 = UControlRig::StaticClass();
          iVar10 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar12->_padding_)) goto LAB_14a27e473;
        }
        pUVar3 = *(URigHierarchy **)&pUVar11[0x14].field_0x18;
        uVar9 = 0;
        if ((int)uVar19 < (this->Components).ArrayNum) {
          uVar9 = ~uVar19 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = *(USceneComponent **)((this->Components).AllocatorInstance.Data + lVar18);
        uVar9 = 0;
        if ((int)uVar19 < (this->ControlNames).ArrayNum) {
          uVar9 = ~uVar19 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_160.Type = Control;
        local_160.Name = *(FName *)((this->ControlNames).AllocatorInstance.Data + lVar18);
        iVar10 = URigHierarchy::GetIndex(pUVar3,&local_160,true);
        pFVar14 = URigHierarchy::Get(pUVar3,iVar10);
        if (pFVar14 == (FRigBaseElement *)0x0) {
LAB_14a27e5ca:
          pFVar14 = (FRigBaseElement *)0x0;
LAB_14a27e5cc:
          bVar7 = false;
        }
        else {
          lVar15 = (**(code **)(pFVar14->_padding_ + 0x10))(pFVar14);
          pUVar16 = FRigControlElement::StaticStruct();
          if (pUVar16 == (UScriptStruct *)0x0) goto LAB_14a27e5ca;
          iVar10 = (int)pUVar16->_padding_;
          if ((*(int *)(lVar15 + 0x38) < iVar10) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar16->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (!bVar7) goto LAB_14a27e5ca;
          if (((*(char *)&pFVar14[5].CachedNameString.Data.AllocatorInstance.Data == '\x01') ||
              (*(char *)((longlong)&pFVar14[5].CachedNameString.Data.AllocatorInstance.Data + 1) ==
               '\0')) || ((char)pFVar14[8].CachedNameString.Data.ArrayMax == '\0'))
          goto LAB_14a27e5cc;
          bVar7 = true;
        }
        if (this_00 != (USceneComponent *)0x0) {
          cVar8 = (**(code **)(this_00->_padding_ + 0x560))(this_00);
          if ((bool)cVar8 != bVar7) {
            USceneComponent::SetVisibility(this_00,bVar7,DirtyOnly);
          }
          if (pFVar14 != (FRigBaseElement *)0x0) {
            pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
            if (pUVar11 == (UObject *)0x0) {
LAB_14a27e635:
              pUVar11 = (UObject *)0x0;
            }
            else {
              pUVar12 = UControlRig::StaticClass();
              iVar10 = (int)pUVar12->_padding_;
              if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar10) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar10 * 8)
                  != &pUVar12->_padding_)) goto LAB_14a27e635;
            }
            local_168 = *(code **)(*(longlong *)pUVar11 + 1000);
            uVar9 = 0;
            if ((int)uVar19 < (this->ControlNames).ArrayNum) {
              uVar9 = ~uVar19 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (*local_168)(pUVar11,&local_98,
                         (this->ControlNames).AllocatorInstance.Data + (longlong)(int)uVar19 * 8);
            uVar9 = 0;
            if ((int)uVar19 < (this->ShapeTransforms).ArrayNum) {
              uVar9 = ~uVar19 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
            ;
            local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
            ;
            local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_f8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_f8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_f8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_f8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_f8,
                       (TTransform<double> *)
                       ((this->ShapeTransforms).AllocatorInstance.Data +
                       (longlong)(int)uVar19 * 0x60),&local_98);
            USceneComponent::SetRelativeTransform(this_00,&local_f8,false,(FHitResult *)0x0,None);
            uVar9 = 0;
            if ((int)uVar19 < (this->Materials).ArrayNum) {
              uVar9 = ~uVar19 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_140._s_0.X = (double)*(float *)&pFVar14[9].Owner;
            this_01 = *(UMaterialInstanceDynamic **)
                       ((this->Materials).AllocatorInstance.Data + lVar18);
            local_140._s_0.Y = (double)*(float *)((longlong)&pFVar14[9].Owner + 4);
            FVar5 = this->ColorParameterName;
            local_140._s_0.Z = (double)*(float *)&pFVar14[9].Key;
            pFVar17 = FLinearColor::FLinearColor(&local_108,(TVector<double> *)&local_140._s_0);
            local_128._16_8_ = *(undefined8 *)&pFVar17->field0_0x0;
            lStack_110 = *(longlong *)((longlong)&pFVar17->field0_0x0 + 8);
            UMaterialInstanceDynamic::SetVectorParameterValue
                      (this_01,FVar5,(FLinearColor *)(local_128 + 0x10));
          }
        }
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 8;
      } while ((int)uVar19 < (this->ControlNames).ArrayNum);
    }
  }
  return;
}

// RemoveUnbindDelegate @ 14a286930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlRigControlActor::RemoveUnbindDelegate(AControlRigControlActor *this)

{
  int iVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  pUVar5 = UControlRig::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14a2869b7;
  }
  pUVar4 = (UObject *)0x0;
LAB_14a2869b7:
  plVar2 = *(longlong **)&pUVar4[0x17].field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&pUVar4[0x17].field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 != (longlong *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(**(code **)(*plVar2 + 0x18))();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ResetControlActor @ 14a2898e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlRigControlActor::ResetControlActor(AControlRigControlActor *this)

{
  undefined8 local_res8 [4];
  
  RemoveUnbindDelegate(this);
  local_res8[0] = 0;
  FSoftObjectPtr::operator=(&(this->ControlRig).SoftObjectPtr,(FObjectPtr)local_res8);
  Clear(this);
  return;
}

// StaticRegisterNativesAControlRigControlActor @ 14a297eb0

void __cdecl AControlRigControlActor::StaticRegisterNativesAControlRigControlActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_AControlRigControlActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14a29beb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlRigControlActor::Tick(AControlRigControlActor *this,float param_1)

{
  AActor::Tick((AActor *)this,param_1);
  if (this->bRefreshOnTick != false) {
    Refresh(this);
    return;
  }
  return;
}

// execClear @ 14a2af930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AControlRigControlActor::execClear(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Clear((AControlRigControlActor *)param_1);
  return;
}

// execRefresh @ 14a2b4490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AControlRigControlActor::execRefresh(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Refresh((AControlRigControlActor *)param_1);
  return;
}

// execResetControlActor @ 14a2b4a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AControlRigControlActor::execResetControlActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 local_res8 [4];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveUnbindDelegate((AControlRigControlActor *)param_1);
  local_res8[0] = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&param_1[0x13].field_0x8,(FObjectPtr)local_res8);
  Clear((AControlRigControlActor *)param_1);
  return;
}

