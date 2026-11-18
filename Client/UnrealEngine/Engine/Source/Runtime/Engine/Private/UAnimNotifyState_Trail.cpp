// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1474972f0

UClass * __cdecl UAnimNotifyState_Trail::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_Trail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState_Trail",
               &Z_Registration_Info_UClass_UAnimNotifyState_Trail.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_Trail,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimNotifyState_Trail>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_Trail>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_Trail.InnerSingleton;
}

// UAnimNotifyState_Trail @ 1474b3f50

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimNotifyState_Trail * __thiscall
UAnimNotifyState_Trail::UAnimNotifyState_Trail(UAnimNotifyState_Trail *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState_Trail__6B_;
  (this->PSTemplate).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  (this->FirstSocketName).ComparisonIndex = 0;
  (this->FirstSocketName).Number = 0;
  (this->SecondSocketName).ComparisonIndex = 0;
  (this->SecondSocketName).Number = 0;
  (this->WidthScaleCurve).ComparisonIndex = 0;
  (this->WidthScaleCurve).Number = 0;
  return this;
}

// UAnimNotifyState_Trail @ 1474b3f90

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimNotifyState_Trail * __thiscall
UAnimNotifyState_Trail::UAnimNotifyState_Trail
          (UAnimNotifyState_Trail *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  (this->PSTemplate).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  this->bRecycleSpawnedSystems = 1;
  this->_padding_ = (longlong)&___7UAnimNotifyState_Trail__6B_;
  (this->FirstSocketName).ComparisonIndex = 0;
  (this->FirstSocketName).Number = 0;
  (this->SecondSocketName).ComparisonIndex = 0;
  (this->SecondSocketName).Number = 0;
  (this->WidthScaleMode).Value = '\0';
  (this->WidthScaleCurve).ComparisonIndex = 0;
  (this->WidthScaleCurve).Number = 0;
  return this;
}

// ~UAnimNotifyState_Trail @ 1474b5660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimNotifyState_Trail::~UAnimNotifyState_Trail(UAnimNotifyState_Trail *this)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetCurveWidth @ 1474d8f70

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UAnimNotifyState_Trail::GetCurveWidth(UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1)

{
  float fVar1;
  bool bVar2;
  UAnimInstance *this_00;
  float local_res8 [8];
  
  this_00 = USkeletalMeshComponent::GetAnimInstance(param_1);
  fVar1 = __real_3f800000;
  local_res8[0] = __real_3f800000;
  if ((this->WidthScaleCurve != (FName)0x0) && (this_00 != (UAnimInstance *)0x0)) {
    bVar2 = UAnimInstance::GetCurveValue(this_00,this->WidthScaleCurve,local_res8);
    if (bVar2) {
      return local_res8[0];
    }
  }
  return fVar1;
}

// GetOverridenPSTemplate @ 1474dc640

/* WARNING: Enum "Type": Some values do not have unique names */

UParticleSystem * __thiscall
UAnimNotifyState_Trail::GetOverridenPSTemplate
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *local_28;
  UAnimSequenceBase *local_20;
  UParticleSystem *local_18;
  
  local_18 = (UParticleSystem *)0x0;
  local_28 = param_1;
  local_20 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimNotifyState_Trail_OverridePSTemplate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return local_18;
}

// GetParticleSystemComponent @ 1474dc6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UParticleSystemComponent * __thiscall
UAnimNotifyState_Trail::GetParticleSystemComponent
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1)

{
  longlong *plVar1;
  int iVar2;
  AActor *this_00;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  UParticleSystemComponent *pUVar8;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  code *local_f8;
  UClass **local_f0;
  code *local_e8;
  code **local_e0;
  longlong *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    return (UParticleSystemComponent *)0x0;
  }
  this_00 = (AActor *)param_1->_padding_;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_8c = 8;
  if (this_00 == (AActor *)0x0) {
    local_100 = (UClass *)&stack0xffffffffffffff28;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`GetCandidateSystems'::__l7::<lambda_1>,void,UObject_*>::Call;
    local_f0 = &local_100;
    local_e0 = &local_f8;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
    ForEachObjectWithOuterBreakable
              ((UObjectBase *)param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_e8,false,
               RF_NoFlags,Garbage);
    goto LAB_1474dc824;
  }
  pUVar4 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_1474dc73c;
LAB_1474dc76d:
    pUVar5 = (UClass *)0x0;
  }
  else {
    if (pUVar4 == (UClass *)0x0) goto LAB_1474dc76d;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_1474dc73c:
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar5 == (UClass *)0x0) goto LAB_1474dc76d;
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pUVar5 = pUVar4;
    if (!bVar3) goto LAB_1474dc76d;
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100 = pUVar4;
  if (pUVar5 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UParticleSystemComponent,1,0,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UParticleSystemComponent_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)&stack0xffffffffffffff28);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UParticleSystemComponent,0,0,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UParticleSystemComponent_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)&stack0xffffffffffffff28);
  }
LAB_1474dc824:
  iVar2 = local_90;
  plVar7 = (longlong *)&stack0xffffffffffffff28;
  if (local_98 != (longlong *)0x0) {
    plVar7 = local_98;
  }
  plVar1 = plVar7 + local_90;
  while( true ) {
    if (local_90 != iVar2) {
      `TCheckedPointerIterator<UParticleSystemComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_108);
    }
    if (plVar7 == plVar1) break;
    pUVar8 = (UParticleSystemComponent *)*plVar7;
    if ((pUVar8->field_0x9a & 0x10) != 0) {
      local_48 = (void *)0x0;
      local_40 = 0;
      local_3c = 8;
      (**(code **)(*(longlong *)pUVar8 + 0xba0))(pUVar8,&stack0xffffffffffffff78,this,0);
      if (0 < local_40) {
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        goto LAB_1474dc8b3;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
    }
    plVar7 = plVar7 + 1;
  }
  pUVar8 = (UParticleSystemComponent *)0x0;
LAB_1474dc8b3:
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  return pUVar8;
}

// GetPrivateStaticClass @ 1474dd3d0

UClass * __cdecl UAnimNotifyState_Trail::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_Trail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState_Trail",
               &Z_Registration_Info_UClass_UAnimNotifyState_Trail.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_Trail,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimNotifyState_Trail>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_Trail>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_Trail.InnerSingleton;
}

// NotifyBegin @ 1474edf90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotifyState_Trail::NotifyBegin
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3)

{
  return;
}

// NotifyBegin @ 1474edfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UAnimNotifyState_Trail::NotifyBegin
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3,FAnimNotifyEventReference *param_4)

{
  ForElementType<UParticleSystemComponent_*> FVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ENetMode EVar6;
  UWorld *pUVar7;
  UParticleSystem *pUVar8;
  UClass *pUVar9;
  undefined8 this_00;
  longlong *plVar10;
  undefined8 *puVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  ForElementType<UParticleSystemComponent_*> FVar14;
  undefined8 *puVar15;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [8];
  FName local_230;
  TVector<double>_u_0 local_228;
  FString local_208;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [128];
  undefined8 local_168 [8];
  undefined8 *local_128;
  uint local_120;
  undefined4 local_11c;
  TArray<UParticleSystemComponent_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_118;
  undefined8 local_c8 [8];
  undefined8 *local_88;
  uint local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
  (**(code **)(this->_padding_ + 0x2c8))();
  pUVar7 = (UWorld *)param_1->_padding_;
  if (pUVar7 == (UWorld *)0x0) {
    pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  EVar6 = UWorld::InternalGetNetMode(pUVar7);
  if (EVar6 == NM_DedicatedServer) {
    return;
  }
  pUVar8 = (UParticleSystem *)(**(code **)(this->_padding_ + 0x318))(this,param_1);
  if (pUVar8 != (UParticleSystem *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->PSTemplate).field0_0x0.DebugPtr = pUVar8;
  }
  if ((this->PSTemplate).field0_0x0.DebugPtr != (UParticleSystem *)0x0) {
    local_118.AllocatorInstance.SecondaryData = (ForElementType<UParticleSystemComponent_*>)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 8;
    if ((AActor *)param_1->_padding_ == (AActor *)0x0) {
      local_230 = (FName)&local_118;
      local_1f8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`GetCandidateSystems'::__l7::<lambda_1>,void,UObject_*>::Call;
      local_1f8._8_8_ = &local_230;
      local_228._s_0.Y = (double)local_1f8;
      local_228._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::
                   Call;
      ForEachObjectWithOuterBreakable
                ((UObjectBase *)param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_228._s_0,
                 false,RF_NoFlags,Garbage);
    }
    else {
      AActor::
      GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ((AActor *)param_1->_padding_,&local_118,false);
    }
    (**(code **)(this->_padding_ + 800))(this,param_1);
    iVar4 = local_118.ArrayNum;
    local_228._s_0.Z = 0.0;
    FVar14 = (ForElementType<UParticleSystemComponent_*>)&local_118;
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<UParticleSystemComponent_*>)0x0
       ) {
      FVar14 = local_118.AllocatorInstance.SecondaryData;
    }
    local_228._s_0.X = 0.0;
    local_228._s_0.Y = 0.0;
    FVar1 = (ForElementType<UParticleSystemComponent_*>)
            ((longlong)FVar14 + (longlong)local_118.ArrayNum * 8);
LAB_1474ee1a0:
    do {
      if (local_118.ArrayNum != iVar4) {
        `TCheckedPointerIterator<UParticleSystemComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_238);
      }
      if (FVar14 == FVar1) {
        this_00 = local_228._s_0.X;
        if ((UParticleSystemComponent *)local_228._s_0.X == (UParticleSystemComponent *)0x0) {
          this_00 = local_228._s_0.Z;
          if ((UParticleSystemComponent *)local_228._s_0.Y != (UParticleSystemComponent *)0x0) {
            this_00 = local_228._s_0.Y;
          }
          if ((UParticleSystemComponent *)this_00 != (UParticleSystemComponent *)0x0)
          goto LAB_1474ee2fb;
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)param_1,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar9 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_1e8,pUVar9);
          local_1e8._8_8_ = param_1;
          this_00 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
          if (local_1e8._64_8_ != 0) {
            plVar10 = (longlong *)(local_1e8 + 0x50);
            if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
              plVar10 = (longlong *)local_1e8._104_8_;
            }
            (**(code **)(*plVar10 + 0x10))();
          }
          bVar5 = ~this->bRecycleSpawnedSystems & 1;
        }
        else {
LAB_1474ee2fb:
          bVar5 = 0;
        }
        local_228._s_0.Y = (double)_UNK_150689688;
        local_228._s_0.X = (double)___xmm_3ff00000000000003ff0000000000000;
        this_00->bAutoDestroy = '\0';
        ((UParticleSystemComponent *)this_00)->field_0x57b =
             ((UParticleSystemComponent *)this_00)->field_0x57b | bVar5;
        this_00->bAllowRecycling = '\x01';
        ((UParticleSystemComponent *)this_00)->field_0x9a =
             ((UParticleSystemComponent *)this_00)->field_0x9a & 0xf7;
        this_00->bOverrideLODMethod = '\0';
        local_228._s_0.Z = (double)__real_3ff0000000000000;
        ((UParticleSystemComponent *)this_00)->SecondsBeforeInactive = 0.0;
        USceneComponent::SetRelativeScale3D_Direct
                  ((USceneComponent *)this_00,(TVector<double> *)&local_228._s_0);
        this_00->bAutoManageAttachment = '\x01';
        local_230.ComparisonIndex.Value = 0;
        local_230.Number = 0;
        local_1f8._0_8_ = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=
                  (&(((UParticleSystemComponent *)this_00)->AutoAttachParent).WeakPtr,
                   (FObjectPtr)local_1f8);
        ((UParticleSystemComponent *)this_00)->AutoAttachSocketName = local_230;
        USceneComponent::ConvertAttachLocation
                  (KeepRelativeOffset,&((UParticleSystemComponent *)this_00)->AutoAttachLocationRule
                   ,&((UParticleSystemComponent *)this_00)->AutoAttachRotationRule,
                   &((UParticleSystemComponent *)this_00)->AutoAttachScaleRule);
        pUVar8 = (this->PSTemplate).field0_0x0.DebugPtr;
        if ((((UParticleSystemComponent *)this_00)->Template).field0_0x0.DebugPtr != pUVar8) {
          UParticleSystemComponent::SetTemplate((UParticleSystemComponent *)this_00,pUVar8);
        }
        if ((((UParticleSystemComponent *)this_00)->field_0x98 & 1) == 0) {
          pUVar7 = (UWorld *)param_1->_padding_;
          if (pUVar7 == (UWorld *)0x0) {
            pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
          }
          UActorComponent::RegisterComponentWithWorld
                    ((UActorComponent *)this_00,pUVar7,(FRegisterComponentContext *)0x0);
        }
        local_230.ComparisonIndex.Value = 0;
        local_230.Number = 0;
        (**(code **)(*(longlong *)this_00 + 0x508))
                  (this_00,param_1,&FAttachmentTransformRules::KeepRelativeTransform,0);
        (**(code **)(*(longlong *)this_00 + 0xaf0))(this_00,1);
        local_88 = (undefined8 *)0x0;
        local_80 = 0;
        local_7c = 8;
        (**(code **)(*(longlong *)this_00 + 0xba0))(this_00,local_c8,this,1);
        uVar3 = local_80;
        uVar13 = (ulonglong)(int)local_80;
        puVar15 = local_c8;
        if (local_88 != (undefined8 *)0x0) {
          puVar15 = local_88;
        }
        puVar2 = puVar15 + uVar13;
        while( true ) {
          if ((uint)uVar13 != uVar3) {
            `TCheckedPointerIterator<FParticleAnimTrailEmitterInstance_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_238);
          }
          puVar11 = local_88;
          if (puVar15 == puVar2) break;
          plVar10 = (longlong *)*puVar15;
          (**(code **)(*plVar10 + 0x200))(plVar10);
          (**(code **)(*plVar10 + 0x210))
                    (plVar10,this->FirstSocketName,this->SecondSocketName,
                     (this->WidthScaleMode).Value);
          uVar13 = (ulonglong)local_80;
          puVar15 = puVar15 + 1;
        }
        goto LAB_1474ee525;
      }
      plVar10 = *(longlong **)FVar14;
      if ((*(byte *)((longlong)plVar10 + 0x9a) & 0x10) == 0) {
        if ((*(byte *)((longlong)plVar10 + 0x579) & 0x10) != 0) {
          uVar13 = 2;
          if ((UParticleSystem *)plVar10[0xaa] == (this->PSTemplate).field0_0x0.DebugPtr) {
            uVar13 = (ulonglong)((USkeletalMeshComponent *)plVar10[4] != param_1);
          }
          *(longlong **)((longlong)&local_228 + uVar13 * 8) = plVar10;
        }
      }
      else {
        local_128 = (undefined8 *)0x0;
        local_120 = 0;
        local_11c = 8;
        (**(code **)(*plVar10 + 0xba0))(plVar10,local_168,this,0);
        uVar3 = local_120;
        uVar13 = (ulonglong)(int)local_120;
        if (0 < (int)local_120) goto LAB_1474ee242;
        if (local_128 != (undefined8 *)0x0) {
          FMemory::Free(local_128);
          FVar14 = (ForElementType<UParticleSystemComponent_*>)((longlong)FVar14 + 8);
          goto LAB_1474ee1a0;
        }
      }
      FVar14 = (ForElementType<UParticleSystemComponent_*>)((longlong)FVar14 + 8);
    } while( true );
  }
  if ((byte)LogParticles._0_1_ < 3) {
    return;
  }
  if (param_2 == (UAnimSequenceBase *)0x0) {
    ::FString::FString(&local_208,L"None");
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_208,(UObject *)0x0);
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  FVar12.Data = local_208.Data.AllocatorInstance.Data;
LAB_1474ee571:
  if ((ForElementType<UParticleSystemComponent_*>)FVar12.Data !=
      (ForElementType<UParticleSystemComponent_*>)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
LAB_1474ee242:
  if (((this->PSTemplate).field0_0x0.DebugPtr == (UParticleSystem *)plVar10[0xaa]) ||
     ((USkeletalMeshComponent *)plVar10[4] != param_1)) {
    puVar15 = local_168;
    if (local_128 != (undefined8 *)0x0) {
      puVar15 = local_128;
    }
    puVar2 = puVar15 + uVar13;
    while( true ) {
      if ((uint)uVar13 != uVar3) {
        `TCheckedPointerIterator<FParticleAnimTrailEmitterInstance_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_238);
      }
      puVar11 = local_128;
      if (puVar15 == puVar2) break;
      plVar10 = (longlong *)*puVar15;
      (**(code **)(*plVar10 + 0x200))(plVar10);
      (**(code **)(*plVar10 + 0x210))
                (plVar10,this->FirstSocketName,this->SecondSocketName,(this->WidthScaleMode).Value);
      uVar13 = (ulonglong)local_120;
      puVar15 = puVar15 + 1;
    }
  }
  else {
    (**(code **)(*plVar10 + 0x4a0))(plVar10,0);
    puVar11 = local_128;
  }
LAB_1474ee525:
  if (puVar11 != (undefined8 *)0x0) {
    FMemory::Free(puVar11);
  }
  UAnimNotifyState::Received_NotifyBegin
            ((UAnimNotifyState *)this,param_1,param_2,param_3,
             (FAnimNotifyEventReference *)local_208.Data.AllocatorInstance.Data);
  FVar12.Data = (FScriptContainerElement *)local_118.AllocatorInstance.SecondaryData;
  goto LAB_1474ee571;
}

// NotifyEnd @ 1474ee770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotifyState_Trail::NotifyEnd
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2)

{
  return;
}

// NotifyEnd @ 1474ee780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UAnimNotifyState_Trail::NotifyEnd
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          FAnimNotifyEventReference *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  AActor *this_00;
  longlong *plVar4;
  bool bVar5;
  UAnimNotifyState_Trail *this_01;
  uint uVar6;
  ENetMode EVar7;
  UWorld *this_02;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  UClass *pUVar13;
  longlong *plVar14;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  UClass *local_140;
  UAnimNotifyState_Trail *local_138;
  FAnimNotifyEventReference *local_130;
  UAnimSequenceBase *local_128;
  USkeletalMeshComponent *local_120;
  code *local_118;
  UClass **local_110;
  code *local_108;
  code **local_100;
  longlong *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 *local_68;
  uint local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_138 = this;
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_1;
  (**(code **)(this->_padding_ + 0x2e8))();
  this_02 = (UWorld *)param_1->_padding_;
  if (this_02 == (UWorld *)0x0) {
    this_02 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  EVar7 = UWorld::InternalGetNetMode(this_02);
  if (EVar7 == NM_DedicatedServer) {
    return;
  }
  pUVar10 = (UClass *)0x0;
  pUVar13 = (UClass *)0x0;
  this_00 = (AActor *)param_1->_padding_;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  local_ac = 8;
  if (this_00 == (AActor *)0x0) {
    local_140 = (UClass *)&stack0xffffffffffffff08;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`GetCandidateSystems'::__l7::<lambda_1>,void,UObject_*>::Call;
    local_110 = &local_140;
    local_100 = &local_118;
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
    ForEachObjectWithOuterBreakable
              ((UObjectBase *)param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_108,false,
               RF_NoFlags,Garbage);
    goto LAB_1474ee937;
  }
  pUVar8 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 != (UClass *)0x0) goto LAB_1474ee851;
  }
  else {
    pUVar13 = pUVar10;
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_1474ee851:
      pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar13 = pUVar10;
      if (pUVar9 != (UClass *)0x0) {
        iVar3 = (int)pUVar9->_padding_;
        if (((int)pUVar8->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar9->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar13 = pUVar8;
        }
      }
    }
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_140 = pUVar8;
  if (pUVar13 == pUVar10) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    AActor::
    ForEachComponent_Internal<UParticleSystemComponent,1,0,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_140,
               (TArray<UParticleSystemComponent_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)&stack0xffffffffffffff08);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    AActor::
    ForEachComponent_Internal<UParticleSystemComponent,0,0,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_140,
               (TArray<UParticleSystemComponent_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)&stack0xffffffffffffff08);
  }
LAB_1474ee937:
  iVar3 = local_b0;
  this_01 = local_138;
  plVar14 = (longlong *)&stack0xffffffffffffff08;
  if (local_b8 != (longlong *)0x0) {
    plVar14 = local_b8;
  }
  plVar1 = plVar14 + local_b0;
  while( true ) {
    if (local_b0 != iVar3) {
      `TCheckedPointerIterator<UParticleSystemComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_148);
    }
    if (plVar14 == plVar1) break;
    plVar4 = (longlong *)*plVar14;
    if ((*(byte *)((longlong)plVar4 + 0x9a) & 0x10) != 0) {
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      local_5c = 8;
      (**(code **)(*plVar4 + 0xba0))(plVar4,&stack0xffffffffffffff58,this_01,0);
      uVar6 = local_60;
      uVar11 = (ulonglong)(int)local_60;
      puVar12 = (undefined8 *)&stack0xffffffffffffff58;
      if (local_68 != (undefined8 *)0x0) {
        puVar12 = local_68;
      }
      puVar2 = puVar12 + uVar11;
      while( true ) {
        if ((uint)uVar11 != uVar6) {
          `TCheckedPointerIterator<FParticleAnimTrailEmitterInstance_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_148);
        }
        if (puVar12 == puVar2) break;
        (**(code **)(*(longlong *)*puVar12 + 0x208))();
        uVar11 = (ulonglong)local_60;
        puVar12 = puVar12 + 1;
      }
      if (local_68 != (undefined8 *)0x0) {
        FMemory::Free(local_68);
      }
    }
    plVar14 = plVar14 + 1;
  }
  UAnimNotifyState::Received_NotifyEnd((UAnimNotifyState *)this_01,local_120,local_128,local_130);
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  return;
}

// NotifyTick @ 1474eebf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotifyState_Trail::NotifyTick
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3)

{
  return;
}

// NotifyTick @ 1474eec00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UAnimNotifyState_Trail::NotifyTick
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3,FAnimNotifyEventReference *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  ENetMode EVar6;
  UWorld *this_01;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  UClass *pUVar12;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  UClass *local_150;
  FAnimNotifyEventReference *local_148;
  UAnimSequenceBase *local_140;
  code *local_138;
  UClass **local_130;
  code *local_128;
  code **local_120;
  UClass *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 *local_88;
  uint local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_148 = param_4;
  local_140 = param_2;
  (**(code **)(this->_padding_ + 0x2d8))();
  this_01 = (UWorld *)param_1->_padding_;
  if (this_01 == (UWorld *)0x0) {
    this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  EVar6 = UWorld::InternalGetNetMode(this_01);
  if (EVar6 == NM_DedicatedServer) {
    return;
  }
  pUVar9 = (UClass *)0x0;
  pUVar12 = (UClass *)0x0;
  this_00 = (AActor *)param_1->_padding_;
  local_d8 = (UClass *)0x0;
  local_d0 = 0;
  local_cc = 8;
  if (this_00 == (AActor *)0x0) {
    local_150 = (UClass *)&stack0xfffffffffffffee8;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`GetCandidateSystems'::__l7::<lambda_1>,void,UObject_*>::Call;
    local_130 = &local_150;
    local_120 = &local_138;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
    ForEachObjectWithOuterBreakable
              ((UObjectBase *)param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_128,false,
               RF_NoFlags,Garbage);
    goto LAB_1474eedcb;
  }
  pUVar7 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 != (UClass *)0x0) goto LAB_1474eece0;
  }
  else {
    pUVar12 = pUVar9;
    if (pUVar7 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_1474eece0:
      pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar12 = pUVar9;
      if (pUVar8 != (UClass *)0x0) {
        iVar2 = (int)pUVar8->_padding_;
        if (((int)pUVar7->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar12 = pUVar7;
        }
      }
    }
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_150 = pUVar7;
  if (pUVar12 == pUVar9) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UParticleSystemComponent,1,0,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_150,
               (TArray<UParticleSystemComponent_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)&stack0xfffffffffffffee8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UParticleSystemComponent,0,0,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_150,
               (TArray<UParticleSystemComponent_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)&stack0xfffffffffffffee8);
  }
LAB_1474eedcb:
  (**(code **)(this->_padding_ + 800))(this,param_1);
  iVar2 = local_d0;
  pUVar12 = (UClass *)&stack0xfffffffffffffee8;
  if (local_d8 != (UClass *)0x0) {
    pUVar12 = local_d8;
  }
  pUVar9 = (UClass *)(&pUVar12->_padding_ + local_d0);
  local_150 = pUVar9;
  while( true ) {
    if (local_d0 != iVar2) {
      `TCheckedPointerIterator<UParticleSystemComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_158);
    }
    if (pUVar12 == pUVar9) break;
    plVar3 = (longlong *)pUVar12->_padding_;
    if ((*(byte *)((longlong)plVar3 + 0x9a) & 0x10) != 0) {
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      local_7c = 8;
      (**(code **)(*plVar3 + 0xba0))(plVar3,&stack0xffffffffffffff38,this,0);
      uVar5 = local_80;
      uVar10 = (ulonglong)(int)local_80;
      puVar11 = (undefined8 *)&stack0xffffffffffffff38;
      if (local_88 != (undefined8 *)0x0) {
        puVar11 = local_88;
      }
      puVar1 = puVar11 + uVar10;
      while( true ) {
        if ((uint)uVar10 != uVar5) {
          `TCheckedPointerIterator<FParticleAnimTrailEmitterInstance_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_158);
        }
        if (puVar11 == puVar1) break;
        (**(code **)(*(longlong *)*puVar11 + 0x210))
                  ((longlong *)*puVar11,this->FirstSocketName,this->SecondSocketName);
        uVar10 = (ulonglong)local_80;
        puVar11 = puVar11 + 1;
      }
      pUVar9 = local_150;
      if (local_88 != (undefined8 *)0x0) {
        FMemory::Free(local_88);
        pUVar9 = local_150;
      }
    }
    pUVar12 = (UClass *)&pUVar12->_padding_;
  }
  UAnimNotifyState::Received_NotifyTick
            ((UAnimNotifyState *)this,param_1,local_140,param_3,local_148);
  if (local_d8 != (UClass *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}

// OverridePSTemplate @ 1474ef540

/* WARNING: Enum "Type": Some values do not have unique names */

UParticleSystem * __thiscall
UAnimNotifyState_Trail::OverridePSTemplate
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *local_28;
  UAnimSequenceBase *local_20;
  UParticleSystem *local_18;
  
  local_18 = (UParticleSystem *)0x0;
  local_28 = param_1;
  local_20 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimNotifyState_Trail_OverridePSTemplate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return local_18;
}

// StaticRegisterNativesUAnimNotifyState_Trail @ 1474fae50

void __cdecl UAnimNotifyState_Trail::StaticRegisterNativesUAnimNotifyState_Trail(void)

{
  return;
}

// ValidateInput @ 147502500

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAnimNotifyState_Trail::ValidateInput
          (UAnimNotifyState_Trail *this,USkeletalMeshComponent *param_1,bool param_2)

{
  return false;
}

