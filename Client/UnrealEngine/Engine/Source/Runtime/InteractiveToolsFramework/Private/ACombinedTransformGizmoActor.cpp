// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 16

// StaticClass @ 14962e1d0

UClass * __cdecl ACombinedTransformGizmoActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACombinedTransformGizmoActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmoActor",
               &Z_Registration_Info_UClass_ACombinedTransformGizmoActor.InnerSingleton,
               StaticRegisterNativesACombinedTransformGizmoActor,0x388,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACombinedTransformGizmoActor>,
               InternalVTableHelperCtorCaller<ACombinedTransformGizmoActor>,local_res8,
               AGizmoActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACombinedTransformGizmoActor.InnerSingleton;
}

// ACombinedTransformGizmoActor @ 149638770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ACombinedTransformGizmoActor * __thiscall
ACombinedTransformGizmoActor::ACombinedTransformGizmoActor
          (ACombinedTransformGizmoActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ACombinedTransformGizmoActor__6B_;
  (this->TranslateX).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateYZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateXZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateXY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RotateX).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RotateY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RotateZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RotationSphere).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->FreeRotateHandle).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->FreeTranslateHandle).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->UniformScale).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->AxisScaleX).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->AxisScaleY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->AxisScaleZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->PlaneScaleYZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->PlaneScaleXZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->PlaneScaleXY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->AdjustersThatMirrorOnlyInCombinedMode).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AdjustersThatMirrorOnlyInCombinedMode).ArrayNum = 0;
  (this->AdjustersThatMirrorOnlyInCombinedMode).ArrayMax = 0;
  (this->FullAxisScaleX).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->FullAxisScaleY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->FullAxisScaleZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  return this;
}

// ACombinedTransformGizmoActor @ 149638850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ACombinedTransformGizmoActor * __thiscall
ACombinedTransformGizmoActor::ACombinedTransformGizmoActor(ACombinedTransformGizmoActor *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *this_00;
  undefined7 uVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  AActor::AActor((AActor *)this,pFVar2);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7AGizmoActor__6B_;
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_Transactional);
  this->_padding_ = (longlong)&___7ACombinedTransformGizmoActor__6B_;
  (this->TranslateX).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateYZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateXZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TranslateXY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RotateX).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RotateY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RotateZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RotationSphere).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->FreeRotateHandle).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->FreeTranslateHandle).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->UniformScale).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->AxisScaleX).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->AxisScaleY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->AxisScaleZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->PlaneScaleYZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->PlaneScaleXZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->PlaneScaleXY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->AdjustersThatMirrorOnlyInCombinedMode).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AdjustersThatMirrorOnlyInCombinedMode).ArrayNum = 0;
  (this->AdjustersThatMirrorOnlyInCombinedMode).ArrayMax = 0;
  (this->FullAxisScaleX).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->FullAxisScaleY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->FullAxisScaleZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"GizmoCenter");
  FVar1 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USphereComponent_NoRegister();
  this_00 = (USceneComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  this->_padding_ = (longlong)this_00;
  uVar5 = (undefined7)((ulonglong)pUVar4 >> 8);
  this_00[2].PhysicsVolume.WeakPtr.ObjectIndex = 0x3f800000;
  USceneComponent::SetVisibility(this_00,false,DirtyOnly);
  (**(code **)(this_00->_padding_ + 0x788))
            (this_00,UCollisionProfile::NoCollision_ProfileName,CONCAT71(uVar5,1));
  return this;
}

// ~ACombinedTransformGizmoActor @ 14963dcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ACombinedTransformGizmoActor::~ACombinedTransformGizmoActor(ACombinedTransformGizmoActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ACombinedTransformGizmoActor__6B_;
  DestructItems<TWeakPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1>,int>
            ((TWeakPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> *)
             (this->AdjustersThatMirrorOnlyInCombinedMode).AllocatorInstance.Data,
             (this->AdjustersThatMirrorOnlyInCombinedMode).ArrayNum);
  pFVar1 = (this->AdjustersThatMirrorOnlyInCombinedMode).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7AInternalToolFrameworkActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// operator() @ 14963fd10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UViewAdjustedStaticMeshGizmoComponent * __thiscall
`ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,FLinearColor *param_2,TTransform<double> *param_3,
          EMirror param_4,bool param_5)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  UClass *pUVar7;
  UStaticMesh *pUVar8;
  char *pcVar9;
  UViewAdjustedStaticMeshGizmoComponent *pUVar10;
  atomic<unsigned_char> *paVar11;
  ForAnyElementType *pFVar12;
  FSubGizmoTransformAdjuster *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  local_68 = (wchar_t *)0x0;
  iStack_50 = 0;
  local_58 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iStack_50 = (int)sVar6;
  }
  pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
  local_28._12_4_ = uStack_4c;
  local_28.Size = iStack_50;
  local_38.DataPtr = local_68;
  local_38.Size = (int)uStack_60;
  local_38._12_4_ = uStack_60._4_4_;
  local_28.DataPtr = local_58;
  pUVar8 = (UStaticMesh *)
           StaticLoadObject(pUVar7,(UObject *)0x0,&local_28,&local_38,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar8 == (UStaticMesh *)0x0) {
    pcVar9 = "Mesh";
    iVar5 = 0x162;
    paVar11 = &bGEnsureHasExecuted<4678433611253285218>;
  }
  else {
    pUVar10 = UE::GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent
                        (pUVar8,*(UGizmoViewContext **)this,*(UObject **)((longlong)this + 8),
                         param_2,param_5);
    if (pUVar10 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
      AActor::AddInstanceComponent(*(AActor **)((longlong)this + 8),(UActorComponent *)pUVar10);
      (**(code **)(pUVar10->_padding_ + 0x508))
                (pUVar10,*(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x1b8));
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)pUVar10,param_3,false,(FHitResult *)0x0,None);
      UActorComponent::RegisterComponent((UActorComponent *)pUVar10);
      UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::AddTransformAdjuster
                (&local_48,pUVar10,*(USceneComponent **)(*(longlong *)((longlong)this + 8) + 0x1b8),
                 param_4 == Always);
      if (param_4 == WhenCombined) {
        lVar1 = *(longlong *)((longlong)this + 8);
        local_78 = local_48.Object;
        pTStack_70 = local_48.SharedReferenceCount.ReferenceController;
        pFVar12 = (ForAnyElementType *)(lVar1 + 0x360);
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        if (((pFVar12->Data <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar12->Data + (longlong)*(int *)(lVar1 + 0x36c) * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar10 = (UViewAdjustedStaticMeshGizmoComponent *)(*pcVar3)();
          return pUVar10;
        }
        iVar5 = *(int *)(lVar1 + 0x368);
        if (iVar5 == *(int *)(lVar1 + 0x36c)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,pFVar12,(int *)(lVar1 + 0x36c));
        }
        *(int *)(lVar1 + 0x368) = iVar5 + 1;
        pFVar2 = pFVar12->Data;
        *(FSubGizmoTransformAdjuster **)(pFVar2 + (longlong)iVar5 * 0x10) = local_78;
        *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = pTStack_70;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      return pUVar10;
    }
    pcVar9 = "Component";
    iVar5 = 0x169;
    paVar11 = &bGEnsureHasExecuted<4678433611253285225>;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar11,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                     ,iVar5,pcVar9);
  if (!bVar4) {
    return (UViewAdjustedStaticMeshGizmoComponent *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pUVar10 = (UViewAdjustedStaticMeshGizmoComponent *)(*pcVar3)();
  return pUVar10;
}

// operator() @ 1496400d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UPrimitiveComponent> *param_1)

{
  UPrimitiveComponent *pUVar1;
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  if (pUVar1 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x4a0))(pUVar1,0);
  }
  if (*(TObjectPtr<UPrimitiveComponent>_u_0 **)((longlong)this + 0x18) !=
      (TObjectPtr<UPrimitiveComponent>_u_0 *)0x0) {
    ((*(TObjectPtr<UPrimitiveComponent>_u_0 **)((longlong)this + 0x18))->ObjectPtr).field0_0x0 =
         (FObjectPtr_u_0)param_1->field0_0x0;
  }
  pUVar1 = *(UPrimitiveComponent **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (param_1->field0_0x0).DebugPtr = pUVar1;
  if (*(UActorComponent **)((longlong)this + 0x10) != (UActorComponent *)0x0) {
    AActor::AddInstanceComponent(*(AActor **)this,*(UActorComponent **)((longlong)this + 0x10));
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x508))
              (*(longlong **)((longlong)this + 0x10),*(undefined8 *)(*(longlong *)this + 0x1b8));
    USceneComponent::SetRelativeTransform
              (*(USceneComponent **)((longlong)this + 0x10),
               *(TTransform<double> **)((longlong)this + 8),false,(FHitResult *)0x0,None);
    if ((*(UActorComponent **)((longlong)this + 0x10))->bRegistered == 0) {
      UActorComponent::RegisterComponent(*(UActorComponent **)((longlong)this + 0x10));
    }
  }
  return;
}

// operator() @ 149640330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPrimitiveComponent * __thiscall
`ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_2>::operator()
          (void *this,Type param_1)

{
  void *this_00;
  UObject *pUVar1;
  AActor *this_01;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  FLinearColor *pFVar6;
  UViewAdjustedStaticMeshGizmoComponent *this_02;
  TVector<double> *pTVar7;
  UPrimitiveComponent *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStackY_238 [32];
  code *local_1e8 [2];
  undefined **local_1d8;
  code *local_1d0;
  undefined8 local_1c0;
  FLinearColor local_1b8;
  TVector<double> local_1a8;
  undefined1 local_188 [128];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if (CombinedTransformGizmoLocals::GizmoDrawMode == 1) {
    this_00 = *(void **)((longlong)this + 0x20);
    local_108.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_108.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    local_108.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_108.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_108.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_108.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_108.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_108.Translation.ZW.m128d_f64[1] = 0.0;
    local_108.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_108.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_108.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_108.Scale3D.ZW.m128d_f64[1] = 0.0;
    pTVar5 = UE::GizmoUtil::GetRotatedBasisTransform(&local_a8,&local_108,param_1);
    pFVar6 = UE::GizmoRenderingUtil::GetDefaultAxisColor(&local_1b8,param_1);
    this_02 = __l2::<lambda_1>::operator()
                        (this_00,L"/Engine/InteractiveToolsFramework/Meshes/GizmoArrowHandle",pFVar6
                         ,pTVar5,WhenCombined,true);
    if (this_02 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
      local_1d8 = &
                  ___7__TFunction_OwnedObject_P6A_NAEBVISceneViewInterface_GizmoRenderingUtil_UE__AEBU__TTransform_N_Math_3__Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_1c0 = 0;
      local_1d0 = CombinedTransformGizmoLocals::ShouldAxisBeVisible::<lambda>::
                  <lambda_invoker_cdecl>;
      local_1e8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&),bool,UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&>
                     ::Call;
      UViewAdjustedStaticMeshGizmoComponent::SetRenderVisibilityFunction
                (this_02,(TFunction<bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
                          *)local_1e8);
      return (UPrimitiveComponent *)this_02;
    }
  }
  pTVar7 = CombinedTransformGizmoLocals::AxisToVector(&local_1a8,param_1);
  if (param_1 == X) {
    uVar11 = FLinearColor::Red.field0_0x0._0_4_;
    uVar12 = FLinearColor::Red.field0_0x0._4_4_;
    uVar13 = FLinearColor::Red.field0_0x0._8_4_;
    uVar14 = FLinearColor::Red.field0_0x0._12_4_;
  }
  else if (param_1 == Y) {
    uVar11 = FLinearColor::Green.field0_0x0._0_4_;
    uVar12 = FLinearColor::Green.field0_0x0._4_4_;
    uVar13 = FLinearColor::Green.field0_0x0._8_4_;
    uVar14 = FLinearColor::Green.field0_0x0._12_4_;
  }
  else if (param_1 == Z) {
    uVar11 = FLinearColor::Blue.field0_0x0._0_4_;
    uVar12 = FLinearColor::Blue.field0_0x0._4_4_;
    uVar13 = FLinearColor::Blue.field0_0x0._8_4_;
    uVar14 = FLinearColor::Blue.field0_0x0._12_4_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253284974>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x6e,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar8 = (UPrimitiveComponent *)(*pcVar2)();
      return pUVar8;
    }
    uVar11 = FLinearColor::Black.field0_0x0._0_4_;
    uVar12 = FLinearColor::Black.field0_0x0._4_4_;
    uVar13 = FLinearColor::Black.field0_0x0._8_4_;
    uVar14 = FLinearColor::Black.field0_0x0._12_4_;
  }
  pUVar1 = *(UObject **)((longlong)this + 0x10);
  this_01 = *(AActor **)((longlong)this + 8);
  if ((pUVar1 == (UObject *)0x0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3467743465075376092>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoActor.cpp"
                         ,0x24,"GizmoViewContext"), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar8 = (UPrimitiveComponent *)(*pcVar2)();
    return pUVar8;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this_01,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UGizmoArrowComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_188,pUVar9);
  local_188._8_8_ = this_01;
  pUVar8 = (UPrimitiveComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_188);
  if (local_188._64_8_ != 0) {
    plVar10 = (longlong *)(local_188 + 0x50);
    if ((longlong *)local_188._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_188._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  AActor::AddInstanceComponent(this_01,(UActorComponent *)pUVar8);
  (**(code **)(*(longlong *)pUVar8 + 0x508))
            (pUVar8,(this_01->RootComponent).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)&pUVar8[1].field_0x20 = pUVar1;
  *(bool *)&((FActorComponentTickFunction *)&pUVar8[1].field_0x28)->_padding_ =
       pUVar1 != (UObject *)0x0;
  dVar3 = (pTVar7->field0_0x0)._s_0.Y;
  *(double *)&pUVar8[1].field_0x30 = (pTVar7->field0_0x0)._s_0.X;
  *(double *)&pUVar8[1].field_0x38 = dVar3;
  *(double *)&pUVar8[1].field_0x40 = (pTVar7->field0_0x0)._s_0.Z;
  *(undefined4 *)(pUVar8 + 1) = uVar11;
  *(undefined4 *)&pUVar8[1].field_0x4 = uVar12;
  *(undefined4 *)&pUVar8[1].field_0x8 = uVar13;
  *(undefined4 *)&pUVar8[1].field_0xc = uVar14;
  *(undefined4 *)&pUVar8[1].field_0x4c = 0x42700000;
  UActorComponent::RegisterComponent((UActorComponent *)pUVar8);
  *(undefined4 *)&pUVar8[1].field_0x48 = 0x41a00000;
  *(undefined4 *)&pUVar8[1].field_0x50 = *(undefined4 *)((longlong)this + 0x18);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)pUVar8);
  (**(code **)(*(longlong *)pUVar8 + 0x5b0))(pUVar8);
  return pUVar8;
}

// operator() @ 149640820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
`ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_3>::operator()
          (void *this,Type param_1)

{
  void *this_00;
  code *pcVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FLinearColor *pFVar4;
  UViewAdjustedStaticMeshGizmoComponent *this_01;
  UPrimitiveComponent *pUVar5;
  UGizmoRectangleComponent *this_02;
  undefined1 auStackY_198 [32];
  FLinearColor_u_0 local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  code *local_128 [2];
  undefined **local_118;
  code *local_110;
  undefined8 local_100;
  FLinearColor local_f8;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (CombinedTransformGizmoLocals::GizmoDrawMode == 1) {
    local_e8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_e8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    local_e8.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004044000000000000;
    local_e8.Translation.ZW.m128d_f64[1] = _UNK_151e77bc8;
    this_00 = *(void **)((longlong)this + 0x20);
    local_e8.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_e8.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_e8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_e8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_e8.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_e8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_e8.Translation.XY.m128d_f64[0] = ___xmm_40440000000000000000000000000000;
    local_e8.Translation.XY.m128d_f64[1] = _UNK_151e77bf8;
    pTVar3 = UE::GizmoUtil::GetRotatedBasisTransform(&local_88,&local_e8,param_1);
    pFVar4 = UE::GizmoRenderingUtil::GetDefaultAxisColor(&local_f8,param_1);
    this_01 = __l2::<lambda_1>::operator()
                        (this_00,L"/Engine/InteractiveToolsFramework/Meshes/GizmoPlaneHandle",pFVar4
                         ,pTVar3,WhenCombined,true);
    if (this_01 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
      local_100 = 0;
      local_118 = &
                  ___7__TFunction_OwnedObject_P6A_NAEBVISceneViewInterface_GizmoRenderingUtil_UE__AEBU__TTransform_N_Math_3__Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_110 = CombinedTransformGizmoLocals::ShouldPlaneBeVisible::<lambda>::
                  <lambda_invoker_cdecl>;
      local_128[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&),bool,UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&>
                     ::Call;
      UViewAdjustedStaticMeshGizmoComponent::SetRenderVisibilityFunction
                (this_01,(TFunction<bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
                          *)local_128);
      return (UPrimitiveComponent *)this_01;
    }
  }
  if (param_1 == X) {
    local_140._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    local_140._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    local_140._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    local_158._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_158._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_158._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_168 = FLinearColor::Red.field0_0x0;
  }
  else if (param_1 == Y) {
    local_140._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_140._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_140._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    local_158._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_158._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_158._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_168 = FLinearColor::Green.field0_0x0;
  }
  else if (param_1 == Z) {
    local_140._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_140._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_140._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    local_158._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    local_158._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    local_158._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    local_168 = FLinearColor::Blue.field0_0x0;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253285010>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x92,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UPrimitiveComponent *)(*pcVar1)();
      return pUVar5;
    }
    local_168 = FLinearColor::Red.field0_0x0;
    if ((((param_1 != X) && (local_168 = FLinearColor::Green.field0_0x0, param_1 != Y)) &&
        (local_168 = FLinearColor::Blue.field0_0x0, param_1 != Z)) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4678433611253284974>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                           ,0x6e,"false"), local_168 = FLinearColor::Black.field0_0x0, bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UPrimitiveComponent *)(*pcVar1)();
      return pUVar5;
    }
  }
  this_02 = AGizmoActor::AddDefaultRectangleComponent
                      (*(UWorld **)this,*(AActor **)((longlong)this + 8),
                       *(UGizmoViewContext **)((longlong)this + 0x10),
                       (FLinearColor *)&local_168._s_0,(TVector<double> *)&local_140._s_0,
                       (TVector<double> *)&local_158._s_0);
  this_02->LengthY = 30.0;
  this_02->LengthX = 30.0;
  this_02->SegmentFlags = '\x06';
  this_02->Thickness = *(float *)((longlong)this + 0x18);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_02);
  (**(code **)(this_02->_padding_ + 0x5b0))(this_02);
  return (UPrimitiveComponent *)this_02;
}

// operator() @ 149640cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
`ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_4>::operator()
          (void *this,Type param_1)

{
  void *this_00;
  UObject *pUVar1;
  AActor *this_01;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  UViewAdjustedStaticMeshGizmoComponent *this_02;
  UClass *pUVar6;
  UStaticMesh *pUVar7;
  UViewAdjustedStaticMeshGizmoComponent *pUVar8;
  TVector<double> *pTVar9;
  UPrimitiveComponent *pUVar10;
  UGizmoCircleComponent *this_03;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStackY_218 [32];
  FLinearColor local_1a8;
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> local_168;
  code *local_158 [2];
  undefined **local_148;
  code *local_140;
  undefined8 local_130;
  TVector<double> local_128;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (CombinedTransformGizmoLocals::GizmoDrawMode == 1) {
    UE::GizmoRenderingUtil::GetDefaultAxisColor(&local_1a8,param_1);
    this_00 = *(void **)((longlong)this + 0x20);
    local_108.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_108.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    local_1a8.field0_0x0._s_0.A = 0.75;
    local_108.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_108.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_108.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_108.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_108.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_108.Translation.ZW.m128d_f64[1] = 0.0;
    local_108.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_108.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_108.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_108.Scale3D.ZW.m128d_f64[1] = 0.0;
    pTVar5 = UE::GizmoUtil::GetRotatedBasisTransform(&local_a8,&local_108,param_1);
    this_02 = __l2::<lambda_1>::operator()
                        (this_00,
                         L"/Engine/InteractiveToolsFramework/Meshes/GizmoQuarterCircleHandle",
                         &local_1a8,pTVar5,Always,true);
    if (this_02 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
      local_130 = 0;
      local_148 = &
                  ___7__TFunction_OwnedObject_P6A_NAEBVISceneViewInterface_GizmoRenderingUtil_UE__AEBU__TTransform_N_Math_3__Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_140 = CombinedTransformGizmoLocals::ShouldPlaneBeVisible::<lambda>::
                  <lambda_invoker_cdecl>;
      local_158[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&),bool,UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&>
                     ::Call;
      UViewAdjustedStaticMeshGizmoComponent::SetRenderVisibilityFunction
                (this_02,(TFunction<bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
                          *)local_158);
      local_198 = L"/Engine/InteractiveToolsFramework/Meshes/GizmoFullCircleHandle";
      iStack_190 = 0x3e;
      pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
      local_178._12_4_ = uStack_18c;
      local_178.Size = iStack_190;
      local_188.DataPtr = (wchar_t *)0x0;
      local_188.Size = 0;
      local_188._12_4_ = 0;
      local_178.DataPtr = local_198;
      pUVar7 = (UStaticMesh *)
               StaticLoadObject(pUVar6,(UObject *)0x0,&local_178,&local_188,0,(UPackageMap *)0x0,
                                true,(FLinkerInstancingContext *)0x0);
      if (pUVar7 == (UStaticMesh *)0x0) {
        return (UPrimitiveComponent *)this_02;
      }
      pUVar8 = UE::GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent
                         (pUVar7,*(UGizmoViewContext **)((longlong)this + 0x10),(UObject *)this_02,
                          &local_1a8,false);
      if (pUVar8 == (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
        return (UPrimitiveComponent *)this_02;
      }
      UViewAdjustedStaticMeshGizmoComponent::SetSubstituteInteractionComponent
                (this_02,(UPrimitiveComponent *)pUVar8,&UE::Math::TTransform<double>::Identity);
      UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::AddTransformAdjuster
                (&local_168,pUVar8,*(USceneComponent **)(*(longlong *)((longlong)this + 8) + 0x1b8),
                 false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      return (UPrimitiveComponent *)this_02;
    }
  }
  pTVar9 = CombinedTransformGizmoLocals::AxisToVector(&local_128,param_1);
  if (param_1 == X) {
    uVar11 = FLinearColor::Red.field0_0x0._0_4_;
    uVar12 = FLinearColor::Red.field0_0x0._4_4_;
    uVar13 = FLinearColor::Red.field0_0x0._8_4_;
    uVar14 = FLinearColor::Red.field0_0x0._12_4_;
  }
  else if (param_1 == Y) {
    uVar11 = FLinearColor::Green.field0_0x0._0_4_;
    uVar12 = FLinearColor::Green.field0_0x0._4_4_;
    uVar13 = FLinearColor::Green.field0_0x0._8_4_;
    uVar14 = FLinearColor::Green.field0_0x0._12_4_;
  }
  else if (param_1 == Z) {
    uVar11 = FLinearColor::Blue.field0_0x0._0_4_;
    uVar12 = FLinearColor::Blue.field0_0x0._4_4_;
    uVar13 = FLinearColor::Blue.field0_0x0._8_4_;
    uVar14 = FLinearColor::Blue.field0_0x0._12_4_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253284974>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x6e,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar10 = (UPrimitiveComponent *)(*pcVar2)();
      return pUVar10;
    }
    uVar11 = FLinearColor::Black.field0_0x0._0_4_;
    uVar12 = FLinearColor::Black.field0_0x0._4_4_;
    uVar13 = FLinearColor::Black.field0_0x0._8_4_;
    uVar14 = FLinearColor::Black.field0_0x0._12_4_;
  }
  pUVar1 = *(UObject **)((longlong)this + 0x10);
  this_01 = *(AActor **)((longlong)this + 8);
  if ((pUVar1 == (UObject *)0x0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3467743465075376053>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoActor.cpp"
                         ,0x4b,"GizmoViewContext"), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar10 = (UPrimitiveComponent *)(*pcVar2)();
    return pUVar10;
  }
  this_03 = NewObject<UGizmoCircleComponent>((UObject *)this_01);
  AActor::AddInstanceComponent(this_01,(UActorComponent *)this_03);
  (**(code **)(*(longlong *)this_03 + 0x508))
            (this_03,(this_01->RootComponent).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)&this_03->field_0x570 = pUVar1;
  this_03->field_0x578 = pUVar1 != (UObject *)0x0;
  dVar3 = (pTVar9->field0_0x0)._s_0.Y;
  (this_03->Normal).field0_0x0._s_0.X = (pTVar9->field0_0x0)._s_0.X;
  (this_03->Normal).field0_0x0._s_0.Y = dVar3;
  (this_03->Normal).field0_0x0._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
  *(undefined4 *)&this_03->field_0x550 = uVar11;
  *(undefined4 *)&this_03->field_0x554 = uVar12;
  *(undefined4 *)&this_03->field_0x558 = uVar13;
  *(undefined4 *)&this_03->field_0x55c = uVar14;
  this_03->Radius = 120.0;
  UActorComponent::RegisterComponent((UActorComponent *)this_03);
  this_03->Thickness = *(float *)((longlong)this + 0x18);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_03);
  (**(code **)(*(longlong *)this_03 + 0x5b0))(this_03);
  return (UPrimitiveComponent *)this_03;
}

// operator() @ 149641190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
`ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_5>::operator()
          (void *this,Type param_1,TVector<double> *param_2,bool param_3,
          TObjectPtr<UPrimitiveComponent> *param_4)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<double> *pTVar4;
  FLinearColor *pFVar5;
  UViewAdjustedStaticMeshGizmoComponent *this_00;
  UViewAdjustedStaticMeshGizmoComponent *this_01;
  TVector<double> *pTVar6;
  UPrimitiveComponent *pUVar7;
  UGizmoRectangleComponent *this_02;
  FLinearColor_u_0 FVar8;
  undefined1 auStackY_278 [32];
  FLinearColor_u_0 local_248;
  code *local_238 [2];
  undefined **local_228;
  code *local_220;
  undefined8 local_210;
  FLinearColor local_208;
  FLinearColor local_1f8;
  TVector<double> local_1e8;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_248._0_8_ = param_2;
  if (CombinedTransformGizmoLocals::GizmoDrawMode == 1) {
    pvVar1 = *(void **)((longlong)this + 0x20);
    local_1c8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_1c8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_1c8.Translation.XY.m128d_f64[0] = ___xmm_00000000000000004060400000000000;
    local_1c8.Translation.XY.m128d_f64[1] = _UNK_151e77bd8;
    local_1c8.Translation.ZW.m128d_f64[0] = 0.0;
    local_1c8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1c8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_1c8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    local_1c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003fe999999999999a;
    local_1c8.Scale3D.ZW.m128d_f64[1] = _UNK_151e77bb8;
    local_1c8.Scale3D.XY.m128d_f64[0] = ___xmm_3fe999999999999a3fe999999999999a;
    local_1c8.Scale3D.XY.m128d_f64[1] = _UNK_151e77be8;
    pTVar4 = UE::GizmoUtil::GetRotatedBasisTransform(&local_108,&local_1c8,param_1);
    pFVar5 = UE::GizmoRenderingUtil::GetDefaultAxisColor(&local_208,param_1);
    this_00 = __l2::<lambda_1>::operator()
                        (pvVar1,L"/Engine/InteractiveToolsFramework/Meshes/GizmoBoxHandle",pFVar5,
                         pTVar4,WhenCombined,true);
    if (this_00 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
      local_210 = 0;
      local_228 = &
                  ___7__TFunction_OwnedObject_P6A_NAEBVISceneViewInterface_GizmoRenderingUtil_UE__AEBU__TTransform_N_Math_3__Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_220 = CombinedTransformGizmoLocals::ShouldAxisBeVisible::<lambda>::
                  <lambda_invoker_cdecl>;
      local_238[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&),bool,UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&>
                     ::Call;
      UViewAdjustedStaticMeshGizmoComponent::SetRenderVisibilityFunction
                (this_00,(TFunction<bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
                          *)local_238);
      pvVar1 = *(void **)((longlong)this + 0x20);
      local_168.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
      local_168.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
      local_168.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
      local_168.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
      local_168.Translation.XY.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_168.Translation.XY.m128d_f64[1] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_168.Translation.ZW.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_168.Translation.ZW.m128d_f64[1] = 0.0;
      local_168.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_168.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_168.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_168.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      pTVar4 = UE::GizmoUtil::GetRotatedBasisTransform(&local_a8,&local_168,param_1);
      pFVar5 = UE::GizmoRenderingUtil::GetDefaultAxisColor(&local_1f8,param_1);
      this_01 = __l2::<lambda_1>::operator()
                          (pvVar1,L"/Engine/InteractiveToolsFramework/Meshes/GizmoBoxArrowHandle",
                           pFVar5,pTVar4,WhenCombined,true);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (this_01 == (UViewAdjustedStaticMeshGizmoComponent *)0x0)) {
        (param_4->field0_0x0).DebugPtr = (UPrimitiveComponent *)this_01;
        if (this_01 == (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
          return (UPrimitiveComponent *)this_00;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)this_01);
        (param_4->field0_0x0).DebugPtr = (UPrimitiveComponent *)this_01;
      }
      USceneComponent::SetVisibility((USceneComponent *)this_01,false,DirtyOnly);
      return (UPrimitiveComponent *)this_00;
    }
    param_2 = (TVector<double> *)local_248._0_8_;
  }
  pTVar6 = CombinedTransformGizmoLocals::AxisToVector(&local_1e8,param_1);
  FVar8 = FLinearColor::Red.field0_0x0;
  if ((((param_1 != X) && (FVar8 = FLinearColor::Green.field0_0x0, param_1 != Y)) &&
      (FVar8 = FLinearColor::Blue.field0_0x0, param_1 != Z)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4678433611253284974>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x6e,"false"), FVar8 = FLinearColor::Black.field0_0x0, bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar7 = (UPrimitiveComponent *)(*pcVar2)();
    return pUVar7;
  }
  local_248 = FVar8;
  this_02 = AGizmoActor::AddDefaultRectangleComponent
                      (*(UWorld **)this,*(AActor **)((longlong)this + 8),
                       *(UGizmoViewContext **)((longlong)this + 0x10),
                       (FLinearColor *)&local_248._s_0,pTVar6,param_2);
  this_02->OffsetX = 140.0;
  this_02->OffsetY = -10.0;
  this_02->LengthX = 7.0;
  this_02->LengthY = 20.0;
  this_02->Thickness = *(float *)((longlong)this + 0x18);
  this_02->bOrientYAccordingToCamera = !param_3;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_02);
  (**(code **)(this_02->_padding_ + 0x5b0))(this_02);
  this_02->SegmentFlags = '\a';
  return (UPrimitiveComponent *)this_02;
}

// operator() @ 1496414b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
`ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_7>::operator()
          (void *this,Type param_1)

{
  void *this_00;
  code *pcVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FLinearColor *pFVar4;
  UViewAdjustedStaticMeshGizmoComponent *this_01;
  UPrimitiveComponent *pUVar5;
  UGizmoRectangleComponent *this_02;
  undefined1 auStackY_198 [32];
  FLinearColor_u_0 local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  code *local_128 [2];
  undefined **local_118;
  code *local_110;
  undefined8 local_100;
  FLinearColor local_f8;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (CombinedTransformGizmoLocals::GizmoDrawMode == 1) {
    this_00 = *(void **)((longlong)this + 0x20);
    local_e8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_e8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    local_e8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_e8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_e8.Translation.XY.m128d_f64[0] =
         CombinedTransformGizmoLocals::CornerScalePositionCombined.field0_0x0._s_0.X;
    local_e8.Translation.XY.m128d_f64[1] =
         CombinedTransformGizmoLocals::CornerScalePositionCombined.field0_0x0._s_0.Y;
    local_e8.Translation.ZW.m128d_f64[0] =
         CombinedTransformGizmoLocals::CornerScalePositionCombined.field0_0x0._s_0.Z;
    local_e8.Translation.ZW.m128d_f64[1] = 0.0;
    local_e8.Scale3D.ZW.m128d_f64[0] = CombinedTransformGizmoLocals::CornerScaleHandleScale;
    local_e8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84(CombinedTransformGizmoLocals::CornerScaleHandleScale,0);
    local_e8.Scale3D.XY.m128d_f64[0] = CombinedTransformGizmoLocals::CornerScaleHandleScale;
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)CombinedTransformGizmoLocals::CornerScaleHandleScale >> 0x20);
    pTVar3 = UE::GizmoUtil::GetRotatedBasisTransform(&local_88,&local_e8,param_1);
    pFVar4 = UE::GizmoRenderingUtil::GetDefaultAxisColor(&local_f8,param_1);
    this_01 = __l2::<lambda_1>::operator()
                        (this_00,L"/Engine/InteractiveToolsFramework/Meshes/GizmoCornerHandle",
                         pFVar4,pTVar3,Always,true);
    if (this_01 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
      local_100 = 0;
      local_118 = &
                  ___7__TFunction_OwnedObject_P6A_NAEBVISceneViewInterface_GizmoRenderingUtil_UE__AEBU__TTransform_N_Math_3__Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_110 = CombinedTransformGizmoLocals::ShouldPlaneBeVisible::<lambda>::
                  <lambda_invoker_cdecl>;
      local_128[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&),bool,UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&>
                     ::Call;
      UViewAdjustedStaticMeshGizmoComponent::SetRenderVisibilityFunction
                (this_01,(TFunction<bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
                          *)local_128);
      return (UPrimitiveComponent *)this_01;
    }
  }
  if (param_1 == X) {
    local_140._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    local_140._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    local_140._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    local_158._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_158._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_158._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
LAB_14964170b:
    local_168._s_0.R = (float)FLinearColor::Red.field0_0x0._0_4_;
    local_168._s_0.G = (float)FLinearColor::Red.field0_0x0._4_4_;
    local_168._s_0.B = (float)FLinearColor::Red.field0_0x0._8_4_;
    local_168._s_0.A = (float)FLinearColor::Red.field0_0x0._12_4_;
  }
  else {
    if (param_1 == Y) {
      local_140._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_140._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_140._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      local_158._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_158._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_158._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
LAB_1496416ce:
      local_168._s_0.R = (float)FLinearColor::Green.field0_0x0._0_4_;
      local_168._s_0.G = (float)FLinearColor::Green.field0_0x0._4_4_;
      local_168._s_0.B = (float)FLinearColor::Green.field0_0x0._8_4_;
      local_168._s_0.A = (float)FLinearColor::Green.field0_0x0._12_4_;
      goto LAB_149641712;
    }
    if (param_1 == Z) {
      local_140._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_140._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_140._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      local_158._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      local_158._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_158._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4678433611253285010>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x92,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UPrimitiveComponent *)(*pcVar1)();
        return pUVar5;
      }
      if (param_1 == X) goto LAB_14964170b;
      if (param_1 == Y) goto LAB_1496416ce;
      if (param_1 != Z) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4678433611253284974>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                           ,0x6e,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UPrimitiveComponent *)(*pcVar1)();
          return pUVar5;
        }
        local_168._s_0.R = (float)FLinearColor::Black.field0_0x0._0_4_;
        local_168._s_0.G = (float)FLinearColor::Black.field0_0x0._4_4_;
        local_168._s_0.B = (float)FLinearColor::Black.field0_0x0._8_4_;
        local_168._s_0.A = (float)FLinearColor::Black.field0_0x0._12_4_;
        goto LAB_149641712;
      }
    }
    local_168._s_0.R = (float)FLinearColor::Blue.field0_0x0._0_4_;
    local_168._s_0.G = (float)FLinearColor::Blue.field0_0x0._4_4_;
    local_168._s_0.B = (float)FLinearColor::Blue.field0_0x0._8_4_;
    local_168._s_0.A = (float)FLinearColor::Blue.field0_0x0._12_4_;
  }
LAB_149641712:
  this_02 = AGizmoActor::AddDefaultRectangleComponent
                      (*(UWorld **)this,*(AActor **)((longlong)this + 8),
                       *(UGizmoViewContext **)((longlong)this + 0x10),
                       (FLinearColor *)&local_168._s_0,(TVector<double> *)&local_140._s_0,
                       (TVector<double> *)&local_158._s_0);
  this_02->OffsetY = 120.0;
  this_02->OffsetX = 120.0;
  this_02->LengthY = 20.0;
  this_02->LengthX = 20.0;
  this_02->Thickness = *(float *)((longlong)this + 0x18);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_02);
  (**(code **)(this_02->_padding_ + 0x5b0))(this_02);
  this_02->SegmentFlags = '\x06';
  return (UPrimitiveComponent *)this_02;
}

// ConstructCustom3AxisGizmo @ 14964f2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ACombinedTransformGizmoActor * __cdecl
ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo
          (UWorld *param_1,UGizmoViewContext *param_2,ETransformGizmoSubElements param_3)

{
  code *pcVar1;
  double dVar2;
  FLinearColor FVar3;
  double dVar4;
  bool bVar5;
  UClass *pUVar6;
  UViewAdjustedStaticMeshGizmoComponent *pUVar7;
  FString *pFVar8;
  UPrimitiveComponent *pUVar9;
  UStaticMesh *pUVar10;
  ACombinedTransformGizmoActor *pAVar11;
  UGizmoBoxComponent *pUVar12;
  UGizmoCircleComponent *this;
  int iVar13;
  atomic<unsigned_char> *paVar14;
  longlong *plVar15;
  UViewAdjustedStaticMeshGizmoComponent *this_00;
  UViewAdjustedStaticMeshGizmoComponent *pUVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStackY_4c8 [32];
  char *pcVar23;
  UGizmoViewContext *local_488;
  UViewAdjustedStaticMeshGizmoComponent *local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  TVector<double>_u_0 local_460;
  TVector<double>_u_0 local_448;
  TVector<double>_u_0 local_430;
  wchar_t *local_418;
  undefined8 uStack_410;
  wchar_t *local_408;
  undefined8 uStack_400;
  UWorld *local_3f8;
  UViewAdjustedStaticMeshGizmoComponent *local_3f0;
  UGizmoViewContext *local_3e8;
  undefined4 local_3e0;
  UGizmoViewContext **local_3d8;
  UWorld *local_3d0;
  UViewAdjustedStaticMeshGizmoComponent *local_3c8;
  UGizmoViewContext *local_3c0;
  undefined4 local_3b8;
  UGizmoViewContext **local_3b0;
  UWorld *local_3a8;
  UViewAdjustedStaticMeshGizmoComponent *local_3a0;
  UGizmoViewContext *local_398;
  undefined4 local_390;
  UGizmoViewContext **local_388;
  UWorld *local_380;
  UViewAdjustedStaticMeshGizmoComponent *local_378;
  UGizmoViewContext *local_370;
  undefined4 local_368;
  UGizmoViewContext **local_360;
  UWorld *local_358;
  UViewAdjustedStaticMeshGizmoComponent *local_350;
  UGizmoViewContext *local_348;
  undefined4 local_340;
  UGizmoViewContext **local_338;
  wchar_t *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  wchar_t *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  TStringView<wchar_t> local_308;
  TStringView<wchar_t> local_2f8;
  TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> local_2e8;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_260;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> local_228;
  FString local_218;
  FString local_208 [10];
  TTransform<double> local_168;
  undefined1 local_108 [112];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_108);
  pUVar6 = StaticClass();
  pUVar7 = (UViewAdjustedStaticMeshGizmoComponent *)
           UWorld::SpawnActor(param_1,pUVar6,&UE::Math::TVector<double>::ZeroVector,
                              &UE::Math::TRotator<double>::ZeroRotator,
                              (FActorSpawnParameters *)local_108);
  pUVar16 = (UViewAdjustedStaticMeshGizmoComponent *)0x0;
  this_00 = pUVar16;
  if (pUVar7 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
    pUVar6 = StaticClass();
    iVar13 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar13) ||
       (this_00 = pUVar7,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar13 * 8)
       != &pUVar6->_padding_)) {
      pFVar8 = GetTypeName<ACombinedTransformGizmoActor>(local_208);
      pwVar18 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<AActor>(&local_218,(AActor *)pUVar7);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar18 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar18,pwVar17);
    }
  }
  local_3b0 = &local_488;
  local_3b8 = 0x40400000;
  local_488 = param_2;
  local_480 = this_00;
  local_3d0 = param_1;
  local_3c8 = this_00;
  local_3c0 = param_2;
  if ((param_3 & TranslateAxisX) != None) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_2>::operator()
                       (&local_3d0,X);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 & TranslateAxisY) != None) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_2>::operator()
                       (&local_3d0,Y);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 & TranslateAxisZ) != None) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_2>::operator()
                       (&local_3d0,Z);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  local_3d8 = &local_488;
  local_3e0 = 0x40400000;
  local_3f8 = param_1;
  local_3f0 = this_00;
  local_3e8 = param_2;
  if ((param_3 & TranslatePlaneYZ) != None) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_3>::operator()
                       (&local_3f8,X);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 & TranslatePlaneXZ) != None) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_3>::operator()
                       (&local_3f8,Y);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 & TranslatePlaneXY) != None) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_3>::operator()
                       (&local_3f8,Z);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  dVar4 = __real_4034000000000000;
  dVar2 = __real_4024000000000000;
  dVar19 = ___xmm_40340000000000004034000000000000;
  dVar20 = _UNK_151444f88;
  dVar21 = ___xmm_40240000000000004024000000000000;
  dVar22 = _UNK_15104e4d8;
  if ((param_3 >> 0x11 & 1) != 0) {
    this_00->_padding_ = 0;
    if (CombinedTransformGizmoLocals::GizmoDrawMode == 1) {
      uStack_410._0_4_ = 0;
      uStack_410._4_4_ = 0;
      local_418 = (wchar_t *)0x0;
      local_328 = L"/Engine/InteractiveToolsFramework/Meshes/GizmoSphereHandle";
      iStack_320 = 0x3a;
      pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
      local_238._12_4_ = uStack_31c;
      local_238.Size = iStack_320;
      local_248.DataPtr = local_418;
      local_248.Size = (int)uStack_410;
      local_248._12_4_ = uStack_410._4_4_;
      local_238.DataPtr = local_328;
      pUVar10 = (UStaticMesh *)
                StaticLoadObject(pUVar6,(UObject *)0x0,&local_238,&local_248,0,(UPackageMap *)0x0,
                                 true,(FLinkerInstancingContext *)0x0);
      if (pUVar10 == (UStaticMesh *)0x0) {
        pcVar23 = "Mesh";
        paVar14 = &bGEnsureHasExecuted<4678433611253285218>;
        iVar13 = 0x162;
LAB_14964f5fa:
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (paVar14,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                           ,iVar13,pcVar23);
        pUVar7 = pUVar16;
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pAVar11 = (ACombinedTransformGizmoActor *)(*pcVar1)();
          return pAVar11;
        }
      }
      else {
        pUVar7 = UE::GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent
                           (pUVar10,local_488,(UObject *)local_480,
                            &CombinedTransformGizmoLocals::FreeTranslateColor,true);
        if (pUVar7 == (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
          iVar13 = 0x169;
          pcVar23 = "Component";
          paVar14 = &bGEnsureHasExecuted<4678433611253285225>;
          goto LAB_14964f5fa;
        }
        AActor::AddInstanceComponent((AActor *)local_480,(UActorComponent *)pUVar7);
        local_478 = 0;
        (**(code **)(pUVar7->_padding_ + 0x508))(pUVar7,local_480->_padding_);
        USceneComponent::SetRelativeTransform
                  ((USceneComponent *)pUVar7,&UE::Math::TTransform<double>::Identity,false,
                   (FHitResult *)0x0,None);
        UActorComponent::RegisterComponent((UActorComponent *)pUVar7);
        UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::AddTransformAdjuster
                  (&local_228,pUVar7,(USceneComponent *)local_480->_padding_,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_228.SharedReferenceCount.ReferenceController);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UViewAdjustedStaticMeshGizmoComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      this_00->_padding_ = (longlong)pUVar7;
      dVar19 = ___xmm_40340000000000004034000000000000;
      dVar20 = _UNK_151444f88;
      dVar21 = ___xmm_40240000000000004024000000000000;
      dVar22 = _UNK_15104e4d8;
      if (pUVar7 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) goto LAB_14964f788;
    }
    dVar20 = _UNK_151444f88;
    dVar19 = ___xmm_40340000000000004034000000000000;
    dVar22 = _UNK_15104e4d8;
    dVar21 = ___xmm_40240000000000004024000000000000;
    local_2d8._s_0.Z = dVar4;
    local_2c0._s_0.Z = dVar2;
    local_2d8._s_0.X = ___xmm_40340000000000004034000000000000;
    local_2d8._s_0.Y = _UNK_151444f88;
    local_2c0._s_0.X = ___xmm_40240000000000004024000000000000;
    local_2c0._s_0.Y = _UNK_15104e4d8;
    pUVar12 = AGizmoActor::AddDefaultBoxComponent
                        (param_1,(AActor *)this_00,param_2,&FLinearColor::Gray,
                         (TVector<double> *)&local_2c0._s_0,(TVector<double> *)&local_2d8._s_0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UGizmoBoxComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    this_00->_padding_ = (longlong)pUVar12;
  }
LAB_14964f788:
  local_388 = &local_488;
  bVar5 = false;
  local_390 = 0x40400000;
  local_3a8 = param_1;
  local_3a0 = this_00;
  local_398 = param_2;
  if ((char)param_3 < '\0') {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_4>::operator()
                       (&local_3a8,X);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    dVar20 = _UNK_151444f88;
    dVar19 = ___xmm_40340000000000004034000000000000;
    dVar22 = _UNK_15104e4d8;
    dVar21 = ___xmm_40240000000000004024000000000000;
    bVar5 = true;
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 >> 8 & 1) != 0) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_4>::operator()
                       (&local_3a8,Y);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    dVar20 = _UNK_151444f88;
    dVar19 = ___xmm_40340000000000004034000000000000;
    dVar22 = _UNK_15104e4d8;
    dVar21 = ___xmm_40240000000000004024000000000000;
    bVar5 = true;
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 >> 9 & 1) == 0) {
    if (bVar5) goto LAB_14964f87f;
  }
  else {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_4>::operator()
                       (&local_3a8,Z);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    dVar20 = _UNK_151444f88;
    dVar19 = ___xmm_40340000000000004034000000000000;
    dVar22 = _UNK_15104e4d8;
    dVar21 = ___xmm_40240000000000004024000000000000;
    this_00->_padding_ = (longlong)pUVar9;
LAB_14964f87f:
    if (CombinedTransformGizmoLocals::GizmoDrawMode != 1) {
      this = NewObject<UGizmoCircleComponent>((UObject *)this_00);
      AActor::AddInstanceComponent((AActor *)this_00,(UActorComponent *)this);
      local_470 = 0;
      (**(code **)(*(longlong *)this + 0x508))
                (this,this_00->_padding_,&FAttachmentTransformRules::KeepRelativeTransform,0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 != (UGizmoViewContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      *(UGizmoViewContext **)&this->field_0x570 = param_2;
      this->field_0x578 = param_2 != (UGizmoViewContext *)0x0;
      FVar3 = FLinearColor::Gray;
      this->Thickness = 1.0;
      this->Radius = 120.0;
      *(FLinearColor_u_0 *)&this->field_0x550 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
      this->bViewAligned = true;
      UActorComponent::RegisterComponent((UActorComponent *)this);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      dVar20 = _UNK_151444f88;
      dVar19 = ___xmm_40340000000000004034000000000000;
      dVar22 = _UNK_15104e4d8;
      dVar21 = ___xmm_40240000000000004024000000000000;
      this_00->_padding_ = (longlong)this;
    }
  }
  if ((param_3 >> 0x12 & 1) != 0) {
    this_00->_padding_ = 0;
    if (CombinedTransformGizmoLocals::GizmoDrawMode == 1) {
      local_168.Translation.XY.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_168.Translation.XY.m128d_f64[1] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_168.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
      local_168.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
      local_168.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
      local_168.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
      local_168.Scale3D.XY.m128d_f64[0] = ___xmm_40220000000000004022000000000000;
      local_168.Scale3D.XY.m128d_f64[1] = _UNK_150971c58;
      local_168.Translation.ZW.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_168.Translation.ZW.m128d_f64[1] = 0.0;
      local_168.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000004022000000000000;
      local_168.Scale3D.ZW.m128d_f64[1] = _UNK_150b45b68;
      pUVar7 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_1>::
               operator()(&local_488,L"/Engine/InteractiveToolsFramework/Meshes/GizmoSphereHandle",
                          &CombinedTransformGizmoLocals::FreeRotateColor,&local_168,Never,false);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UViewAdjustedStaticMeshGizmoComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      dVar20 = _UNK_151444f88;
      dVar19 = ___xmm_40340000000000004034000000000000;
      dVar22 = _UNK_15104e4d8;
      dVar21 = ___xmm_40240000000000004024000000000000;
      this_00->_padding_ = (longlong)pUVar7;
      if (pUVar7 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) goto LAB_14964faa3;
    }
    local_2a8._s_0.Z = dVar4;
    local_290._s_0.Z = dVar2;
    local_2a8._s_0.X = dVar19;
    local_2a8._s_0.Y = dVar20;
    local_290._s_0.X = dVar21;
    local_290._s_0.Y = dVar22;
    pUVar12 = AGizmoActor::AddDefaultBoxComponent
                        (param_1,(AActor *)this_00,param_2,&FLinearColor::Gray,
                         (TVector<double> *)&local_290._s_0,(TVector<double> *)&local_2a8._s_0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UGizmoBoxComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    dVar20 = _UNK_151444f88;
    dVar19 = ___xmm_40340000000000004034000000000000;
    dVar22 = _UNK_15104e4d8;
    dVar21 = ___xmm_40240000000000004024000000000000;
    this_00->_padding_ = (longlong)pUVar12;
  }
LAB_14964faa3:
  if ((param_3 >> 0x10 & 1) != 0) {
    this_00->_padding_ = 0;
    if (CombinedTransformGizmoLocals::GizmoDrawMode == 1) {
      uStack_400._0_4_ = 0;
      uStack_400._4_4_ = 0;
      local_318 = L"/Engine/InteractiveToolsFramework/Meshes/GizmoBoxHandle";
      local_408 = (wchar_t *)0x0;
      iStack_310 = 0x37;
      pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
      local_2f8._12_4_ = uStack_30c;
      local_2f8.Size = iStack_310;
      local_308.DataPtr = local_408;
      local_308.Size = (int)uStack_400;
      local_308._12_4_ = uStack_400._4_4_;
      local_2f8.DataPtr = local_318;
      pUVar10 = (UStaticMesh *)
                StaticLoadObject(pUVar6,(UObject *)0x0,&local_2f8,&local_308,0,(UPackageMap *)0x0,
                                 true,(FLinkerInstancingContext *)0x0);
      if (pUVar10 == (UStaticMesh *)0x0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4678433611253285218>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                           ,0x162,"Mesh");
        pUVar7 = pUVar16;
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pAVar11 = (ACombinedTransformGizmoActor *)(*pcVar1)();
          return pAVar11;
        }
      }
      else {
        pUVar7 = UE::GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent
                           (pUVar10,local_488,(UObject *)local_480,
                            &CombinedTransformGizmoLocals::UniformScaleColor,true);
        if (pUVar7 == (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4678433611253285225>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                             ,0x169,"Component");
          pUVar7 = pUVar16;
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            pAVar11 = (ACombinedTransformGizmoActor *)(*pcVar1)();
            return pAVar11;
          }
        }
        else {
          AActor::AddInstanceComponent((AActor *)local_480,(UActorComponent *)pUVar7);
          local_468 = 0;
          (**(code **)(pUVar7->_padding_ + 0x508))(pUVar7,local_480->_padding_);
          USceneComponent::SetRelativeTransform
                    ((USceneComponent *)pUVar7,&UE::Math::TTransform<double>::Identity,false,
                     (FHitResult *)0x0,None);
          UActorComponent::RegisterComponent((UActorComponent *)pUVar7);
          UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::AddTransformAdjuster
                    (&local_2e8,pUVar7,(USceneComponent *)local_480->_padding_,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.SharedReferenceCount.ReferenceController);
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UViewAdjustedStaticMeshGizmoComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      this_00->_padding_ = (longlong)pUVar7;
      dVar19 = ___xmm_40340000000000004034000000000000;
      dVar20 = _UNK_151444f88;
      dVar21 = ___xmm_40240000000000004024000000000000;
      dVar22 = _UNK_15104e4d8;
      if (pUVar7 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) goto LAB_14964fced;
    }
    local_278._s_0.Z = dVar4;
    local_260._s_0.Z = dVar2;
    local_278._s_0.X = dVar19;
    local_278._s_0.Y = dVar20;
    local_260._s_0.X = dVar21;
    local_260._s_0.Y = dVar22;
    pUVar12 = AGizmoActor::AddDefaultBoxComponent
                        (param_1,(AActor *)this_00,param_2,&FLinearColor::Black,
                         (TVector<double> *)&local_260._s_0,(TVector<double> *)&local_278._s_0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UGizmoBoxComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    this_00->_padding_ = (longlong)pUVar12;
  }
LAB_14964fced:
  dVar2 = __real_3ff0000000000000;
  local_360 = &local_488;
  local_368 = 0x40400000;
  local_380 = param_1;
  local_378 = this_00;
  local_370 = param_2;
  if ((param_3 >> 10 & 1) != 0) {
    iVar13 = 1;
    if ((param_3 >> 0xb & 1) != 0) {
      iVar13 = 2;
    }
    local_448._s_0.Z = 0.0;
    local_448._s_0.Y = _UNK_15061cbc8;
    local_448._s_0.X = ___xmm_3ff00000000000000000000000000000;
    if ((param_3 >> 0xc & 1) != 0) {
      local_448._s_0.Z = __real_3ff0000000000000;
      local_448._s_0.X = 0.0;
      local_448._s_0.Y = 0.0;
      iVar13 = iVar13 + 1;
    }
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_5>::operator()
                       (&local_380,X,(TVector<double> *)&local_448._s_0,iVar13 == 2,
                        (TObjectPtr<UPrimitiveComponent> *)&this_00->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 & ScaleAxisY) != None) {
    iVar13 = 1;
    if ((param_3 & ScaleAxisX) != None) {
      iVar13 = 2;
    }
    local_430._s_0.Z = 0.0;
    local_430._s_0.Y = _UNK_150689518;
    local_430._s_0.X = ___xmm_00000000000000003ff0000000000000;
    if ((param_3 >> 0xc & 1) != 0) {
      local_430._s_0.Z = dVar2;
      local_430._s_0.X = 0.0;
      local_430._s_0.Y = 0.0;
      iVar13 = iVar13 + 1;
    }
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_5>::operator()
                       (&local_380,Y,(TVector<double> *)&local_430._s_0,iVar13 == 2,
                        (TObjectPtr<UPrimitiveComponent> *)&this_00->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 >> 0xc & 1) != 0) {
    iVar13 = 1;
    local_460._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_460._s_0.Y = _UNK_150689518;
    if ((param_3 & ScaleAxisY) != None) {
      local_460._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_460._s_0.Y = _UNK_15061cbc8;
      iVar13 = 2;
    }
    if ((param_3 & ScaleAxisX) != None) {
      iVar13 = iVar13 + 1;
      local_460._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_460._s_0.Y = _UNK_150689518;
    }
    local_460._s_0.Z = 0.0;
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_5>::operator()
                       (&local_380,Z,(TVector<double> *)&local_460._s_0,iVar13 == 2,
                        (TObjectPtr<UPrimitiveComponent> *)&this_00->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  local_338 = &local_488;
  local_340 = 0x40400000;
  local_358 = param_1;
  local_350 = this_00;
  local_348 = param_2;
  if ((param_3 >> 0xd & 1) != 0) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_7>::operator()
                       (&local_358,X);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 >> 0xe & 1) != 0) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_7>::operator()
                       (&local_358,Y);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  if ((param_3 >> 0xf & 1) != 0) {
    pUVar9 = `ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo'::__l2::<lambda_7>::operator()
                       (&local_358,Z);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this_00->_padding_ = (longlong)pUVar9;
  }
  if (local_108._64_8_ != 0) {
    plVar15 = (longlong *)(local_108 + 0x50);
    if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_108._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  return (ACombinedTransformGizmoActor *)this_00;
}

// ConstructDefault3AxisGizmo @ 149650060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ACombinedTransformGizmoActor * __cdecl
ACombinedTransformGizmoActor::ConstructDefault3AxisGizmo(UWorld *param_1,UGizmoViewContext *param_2)

{
  ACombinedTransformGizmoActor *pAVar1;
  
  pAVar1 = ConstructCustom3AxisGizmo
                     (param_1,param_2,
                      ScaleUniform|ScaleAllPlanes|ScaleAllAxes|RotateAllAxes|TranslateAllPlanes|
                      TranslateAllAxes);
  return pAVar1;
}

// GetPrivateStaticClass @ 149655350

UClass * __cdecl ACombinedTransformGizmoActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACombinedTransformGizmoActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmoActor",
               &Z_Registration_Info_UClass_ACombinedTransformGizmoActor.InnerSingleton,
               StaticRegisterNativesACombinedTransformGizmoActor,0x388,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACombinedTransformGizmoActor>,
               InternalVTableHelperCtorCaller<ACombinedTransformGizmoActor>,local_res8,
               AGizmoActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACombinedTransformGizmoActor.InnerSingleton;
}

// ReplaceSubGizmoComponent @ 149660220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
ACombinedTransformGizmoActor::ReplaceSubGizmoComponent
          (ACombinedTransformGizmoActor *this,ETransformGizmoSubElements param_1,
          UPrimitiveComponent *param_2,TTransform<double> *param_3,UPrimitiveComponent **param_4)

{
  UPrimitiveComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ACombinedTransformGizmoActor *local_28;
  TTransform<double> *local_20;
  UPrimitiveComponent *local_18;
  UPrimitiveComponent **local_10;
  
  if ((param_2 == (UPrimitiveComponent *)0x0) ||
     (*(ACombinedTransformGizmoActor **)&param_2->field_0xa8 == this)) {
    local_10 = param_4;
    local_28 = this;
    local_20 = param_3;
    local_18 = param_2;
    if ((int)param_1 < 0x381) {
      if (param_1 == RotateAllAxes) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->RotationSphere);
        return true;
      }
      if ((int)param_1 < 0x21) {
        if (param_1 == TranslatePlaneXZ) {
          `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                    (&local_28,&this->TranslateXZ);
          return true;
        }
        if (param_1 == TranslateAxisX) {
          `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                    (&local_28,&this->TranslateX);
          return true;
        }
        if (param_1 == TranslateAxisY) {
          `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                    (&local_28,&this->TranslateY);
          return true;
        }
        if (param_1 == TranslateAxisZ) {
          `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                    (&local_28,&this->TranslateZ);
          return true;
        }
        if (param_1 == TranslatePlaneXY) {
          `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                    (&local_28,&this->TranslateXY);
          return true;
        }
      }
      else {
        if (param_1 == TranslatePlaneYZ) {
          `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                    (&local_28,&this->TranslateYZ);
          return true;
        }
        if (param_1 == RotateAxisX) {
          `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                    (&local_28,&this->RotateX);
          return true;
        }
        if (param_1 == RotateAxisY) {
          `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                    (&local_28,&this->RotateY);
          return true;
        }
        if (param_1 == RotateAxisZ) {
          `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                    (&local_28,&this->RotateZ);
          return true;
        }
      }
    }
    else if ((int)param_1 < 0x4001) {
      if (param_1 == ScalePlaneXZ) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->PlaneScaleXZ);
        return true;
      }
      if (param_1 == ScaleAxisX) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->AxisScaleX);
        pUVar1 = (this->FullAxisScaleX).field0_0x0.DebugPtr;
        if (pUVar1 == (UPrimitiveComponent *)0x0) {
          return true;
        }
        (**(code **)(*(longlong *)pUVar1 + 0x4a0))(pUVar1,0);
        (this->FullAxisScaleX).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
        return true;
      }
      if (param_1 == ScaleAxisY) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->AxisScaleY);
        pUVar1 = (this->FullAxisScaleY).field0_0x0.DebugPtr;
        if (pUVar1 == (UPrimitiveComponent *)0x0) {
          return true;
        }
        (**(code **)(*(longlong *)pUVar1 + 0x4a0))(pUVar1,0);
        (this->FullAxisScaleY).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
        return true;
      }
      if (param_1 == ScaleAxisZ) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->AxisScaleZ);
        pUVar1 = (this->FullAxisScaleZ).field0_0x0.DebugPtr;
        if (pUVar1 == (UPrimitiveComponent *)0x0) {
          return true;
        }
        (**(code **)(*(longlong *)pUVar1 + 0x4a0))(pUVar1,0);
        (this->FullAxisScaleZ).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
        return true;
      }
      if (param_1 == ScalePlaneYZ) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->PlaneScaleYZ);
        return true;
      }
    }
    else {
      if (param_1 == ScalePlaneXY) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->PlaneScaleXY);
        return true;
      }
      if (param_1 == ScaleUniform) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->UniformScale);
        return true;
      }
      if (param_1 == FreeTranslate) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->FreeTranslateHandle);
        return true;
      }
      if (param_1 == FreeRotate) {
        `ACombinedTransformGizmoActor::ReplaceSubGizmoComponent'::__l2::<lambda_1>::operator()
                  (&local_28,&this->FreeRotateHandle);
        return true;
      }
    }
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253285068>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0xcc,"NewComponent->GetOwner() == this");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// StaticRegisterNativesACombinedTransformGizmoActor @ 149664950

void __cdecl ACombinedTransformGizmoActor::StaticRegisterNativesACombinedTransformGizmoActor(void)

{
  return;
}

