// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// StaticClass @ 14925ea70

UClass * __cdecl ANiagaraEditorPreviewActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEditorPreviewActor",
               &Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.InnerSingleton,
               StaticRegisterNativesANiagaraEditorPreviewActor,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANiagaraEditorPreviewActor>,
               InternalVTableHelperCtorCaller<ANiagaraEditorPreviewActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.InnerSingleton;
}

// ANiagaraEditorPreviewActor @ 1492741c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ANiagaraEditorPreviewActor * __thiscall
ANiagaraEditorPreviewActor::ANiagaraEditorPreviewActor
          (ANiagaraEditorPreviewActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  int iVar6;
  FName *pFVar7;
  UClass *pUVar8;
  UArrowComponent *pUVar9;
  UNiagaraComponent *this_00;
  longlong lVar10;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->PlaybackType = Looping;
  this->MotionType = Circle;
  this->_padding_ = (longlong)&___7ANiagaraEditorPreviewActor__6B_;
  pTVar2 = &this->CustomShapePoints;
  this->MotionDuration = 5.0;
  this->ShapeTension = 0.5;
  this->ShapeScale = 1.0;
  dVar5 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ShapeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ShapeRotation).Yaw = dVar5;
  (this->ShapeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CustomShapePoints).ArrayNum = 0;
  (this->CustomShapePoints).ArrayMax = 0;
  (this->CircleEndRadius).bIsSet = false;
  (this->CircleRotationRate).bIsSet = false;
  (this->SquareSize).field0_0x0._s_0.X = 400.0;
  (this->SquareSize).field0_0x0._s_0.Y = 400.0;
  (this->TriangleSize).field0_0x0._s_0.X = 400.0;
  (this->TriangleSize).field0_0x0._s_0.Y = 400.0;
  (this->NiagaraComponent).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  (this->ArrowComponent).field0_0x0.DebugPtr = (UArrowComponent *)0x0;
  this->CircleRadius = 200.0;
  this->RotationMode = DirectionOfTravel;
  pFVar7 = ::FName::FName(&local_res8,L"ArrowComponent0");
  FVar3 = *pFVar7;
  pUVar8 = Z_Construct_UClass_UArrowComponent_NoRegister();
  pUVar9 = (UArrowComponent *)
           UObject::CreateEditorOnlyDefaultSubobjectImpl((UObject *)this,FVar3,pUVar8,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UArrowComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->ArrowComponent).field0_0x0.DebugPtr = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UArrowComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  this->_padding_ = (longlong)(this->ArrowComponent).field0_0x0;
  pFVar7 = ::FName::FName(&local_res8,L"NiagaraComponent0");
  FVar3 = *pFVar7;
  pUVar8 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  this_00 = (UNiagaraComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar8,pUVar8,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->NiagaraComponent).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,
             (USceneComponent *)(this->ArrowComponent).field0_0x0.DebugPtr,(FName)0x0);
  UNiagaraComponent::SetAllowScalability((this->NiagaraComponent).field0_0x0.DebugPtr,false);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  iVar6 = (this->CustomShapePoints).ArrayNum;
  if (iVar6 == (this->CustomShapePoints).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,&(this->CustomShapePoints).ArrayMax);
  }
  (this->CustomShapePoints).ArrayNum = iVar6 + 1;
  lVar10 = (longlong)iVar6;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar10 * 0x18) = 0xc069000000000000;
  *(undefined8 *)(pFVar4 + lVar10 * 0x18 + 8) = 0;
  *(undefined8 *)(pFVar4 + lVar10 * 0x18 + 0x10) = 0;
  iVar6 = (this->CustomShapePoints).ArrayNum;
  if (iVar6 == (this->CustomShapePoints).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,&(this->CustomShapePoints).ArrayMax);
  }
  (this->CustomShapePoints).ArrayNum = iVar6 + 1;
  lVar10 = (longlong)iVar6;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar10 * 0x18 + 8) = 0;
  *(undefined8 *)(pFVar4 + lVar10 * 0x18 + 0x10) = 0;
  *(undefined8 *)(pFVar4 + lVar10 * 0x18) = 0x4069000000000000;
  return this;
}

// ANiagaraEditorPreviewActor @ 149274440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ANiagaraEditorPreviewActor * __thiscall
ANiagaraEditorPreviewActor::ANiagaraEditorPreviewActor
          (ANiagaraEditorPreviewActor *this,FVTableHelper *param_1)

{
  double dVar1;
  
  AActor::AActor((AActor *)this,param_1);
  this->PlaybackType = Looping;
  this->MotionType = Circle;
  this->_padding_ = (longlong)&___7ANiagaraEditorPreviewActor__6B_;
  this->MotionDuration = 5.0;
  this->ShapeTension = 0.5;
  this->ShapeScale = 1.0;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ShapeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ShapeRotation).Yaw = dVar1;
  (this->ShapeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->CircleRadius = 200.0;
  (this->SquareSize).field0_0x0._s_0.X = 400.0;
  (this->SquareSize).field0_0x0._s_0.Y = 400.0;
  (this->TriangleSize).field0_0x0._s_0.X = 400.0;
  (this->TriangleSize).field0_0x0._s_0.Y = 400.0;
  (this->CustomShapePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomShapePoints).ArrayNum = 0;
  (this->CustomShapePoints).ArrayMax = 0;
  (this->CircleEndRadius).bIsSet = false;
  (this->CircleRotationRate).bIsSet = false;
  this->RotationMode = DirectionOfTravel;
  (this->NiagaraComponent).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  (this->ArrowComponent).field0_0x0.DebugPtr = (UArrowComponent *)0x0;
  return this;
}

// ~ANiagaraEditorPreviewActor @ 149279b60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ANiagaraEditorPreviewActor::~ANiagaraEditorPreviewActor(ANiagaraEditorPreviewActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ANiagaraEditorPreviewActor__6B_;
  pFVar1 = (this->CustomShapePoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// CalculateLocation @ 1492874b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ANiagaraEditorPreviewActor::CalculateLocation
          (ANiagaraEditorPreviewActor *this,float param_1,TVector<double> *param_2)

{
  UFunction *pUVar1;
  float local_28 [2];
  double local_20;
  double dStack_18;
  double local_10;
  
  local_20 = (param_2->field0_0x0)._s_0.X;
  dStack_18 = (param_2->field0_0x0)._s_0.Y;
  local_10 = (param_2->field0_0x0)._s_0.Z;
  local_28[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ANiagaraEditorPreviewActor_CalculateLocation);
  AActor::ProcessEvent((AActor *)this,pUVar1,local_28);
  (param_2->field0_0x0)._s_0.X = local_20;
  (param_2->field0_0x0)._s_0.Y = dStack_18;
  (param_2->field0_0x0)._s_0.Z = local_10;
  return;
}

// CalculateRotation @ 149287520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ANiagaraEditorPreviewActor::CalculateRotation
          (ANiagaraEditorPreviewActor *this,float param_1,TQuat<double> *param_2)

{
  UFunction *pUVar1;
  float local_38 [4];
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_28 = param_2->X;
  dStack_20 = param_2->Y;
  local_18 = param_2->Z;
  dStack_10 = param_2->W;
  local_38[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ANiagaraEditorPreviewActor_CalculateRotation);
  AActor::ProcessEvent((AActor *)this,pUVar1,local_38);
  param_2->X = local_28;
  param_2->Y = dStack_20;
  param_2->Z = local_18;
  param_2->W = dStack_10;
  return;
}

// GetPrivateStaticClass @ 1492a5ee0

UClass * __cdecl ANiagaraEditorPreviewActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEditorPreviewActor",
               &Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.InnerSingleton,
               StaticRegisterNativesANiagaraEditorPreviewActor,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANiagaraEditorPreviewActor>,
               InternalVTableHelperCtorCaller<ANiagaraEditorPreviewActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.InnerSingleton;
}

// InternalCalculateLocation @ 1492aca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TOptional<UE::Math::TVector<double>_> * __thiscall
ANiagaraEditorPreviewActor::InternalCalculateLocation
          (ANiagaraEditorPreviewActor *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__,float param_1)

{
  ENiagaraEditorPreviewActorShapeType EVar1;
  ENiagaraEditorPreviewActorPlaybackType EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  UFunction *pUVar7;
  TOptional<UE::Math::TVector<double>_> *pTVar8;
  longlong lVar9;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auStackY_238 [32];
  undefined4 uStack_1fc;
  undefined4 uStack_1ec;
  undefined4 uStack_1dc;
  float local_1d8 [2];
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_1b8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_1a8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_198;
  undefined1 local_188 [48];
  TOptional<UE::Math::TVector<double>_> local_158;
  TOptional<UE::Math::TVector<double>_> local_138;
  TOptional<UE::Math::TVector<double>_> local_118;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b8;
  TVector<double>_u_0 local_a8;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  pTVar8 = &local_138;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  __return_storage_ptr__->bIsSet = false;
  EVar1 = this->MotionType;
  if (EVar1 == Circle) {
    __libm_sse2_sincos_();
    lVar9 = 0x310;
    if ((this->CircleEndRadius).bIsSet == false) {
      lVar9 = 0x308;
    }
    dVar13 = (*(double *)((longlong)&this->_padding_ + lVar9) - this->CircleRadius) *
             (double)param_1 + this->CircleRadius;
    if ((TOptional<UE::Math::TVector<double>_> *)(local_188 + 0x18) == __return_storage_ptr__) {
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X =
         (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar13;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y =
         (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar13;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = 0.0;
    goto LAB_1492acdb3;
  }
  if (EVar1 == Square) {
    local_198.DataPtr = (TVector<double> *)&local_a8;
    local_90 = (this->SquareSize).field0_0x0._s_0.X * __real_3fe0000000000000;
    pTVar10 = &local_198;
    pTVar8 = &local_118;
    local_70 = (this->SquareSize).field0_0x0._s_0.Y * __real_3fe0000000000000;
    local_a8._s_0.Z = 0.0;
    local_a8._s_0.X =
         (double)CONCAT44((uint)((ulonglong)local_90 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_90,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_80 = 0;
    local_68 = 0;
    uVar11 = SUB84(local_70,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)local_70 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    local_50 = 0;
    local_198._12_4_ = uStack_1dc;
    local_198.ArrayNum = 4;
    local_a8._s_0.Y = (double)CONCAT44(uVar12,uVar11);
    local_88 = CONCAT44(uVar12,uVar11);
    local_78 = local_90;
    local_60 = local_a8._s_0.X;
    local_58 = local_70;
LAB_1492acc2b:
    pTVar8 = NiagaraEditorPreviewActorPrivate::InterpolatePoints
                       (pTVar8,param_1,pTVar10,this->PlaybackType,this->ShapeTension);
  }
  else {
    if (EVar1 == Triangle) {
      local_1a8.DataPtr = (TVector<double> *)&local_f8;
      local_d8 = (this->TriangleSize).field0_0x0._s_0.Y * __real_3fe0000000000000;
      pTVar10 = &local_1a8;
      local_e0 = (this->TriangleSize).field0_0x0._s_0.X * __real_3fe0000000000000;
      local_f8._s_0.X = 0.0;
      local_f8._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)local_d8 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(local_d8,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_1a8._12_4_ = uStack_1ec;
      local_1a8.ArrayNum = 3;
      local_c8 = CONCAT44((uint)((ulonglong)local_e0 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_e0,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_f8._s_0.Z = 0.0;
      local_d0 = 0;
      local_b8 = 0;
      local_c0 = local_d8;
      goto LAB_1492acc2b;
    }
    if (EVar1 != Custom) {
      if (EVar1 != Blueprint) {
        return __return_storage_ptr__;
      }
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1d8[0] = param_1;
      pUVar7 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_ANiagaraEditorPreviewActor_CalculateLocation);
      AActor::ProcessEvent((AActor *)this,pUVar7,local_1d8);
      if ((TOptional<UE::Math::TVector<double>_> *)local_188 == __return_storage_ptr__) {
        return __return_storage_ptr__;
      }
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = local_1d0;
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dStack_1c8;
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = local_1c0;
      goto LAB_1492acdb3;
    }
    pFVar4 = (this->CustomShapePoints).AllocatorInstance.Data;
    EVar2 = this->PlaybackType;
    dVar13 = this->ShapeTension;
    iVar3 = (this->CustomShapePoints).ArrayNum;
    if ((iVar3 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar5)();
      return pTVar8;
    }
    local_1b8._12_4_ = uStack_1fc;
    local_1b8.ArrayNum = iVar3;
    local_1b8.DataPtr = (TVector<double> *)pFVar4;
    pTVar8 = NiagaraEditorPreviewActorPrivate::InterpolatePoints
                       (&local_158,param_1,&local_1b8,EVar2,dVar13);
  }
  if (pTVar8 == __return_storage_ptr__) {
    return __return_storage_ptr__;
  }
  if (pTVar8->bIsSet == false) {
    if (__return_storage_ptr__->bIsSet == false) {
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  dVar13 = (pTVar8->TypedValue).field0_0x0._s_0.Y;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = (pTVar8->TypedValue).field0_0x0._s_0.X;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar13;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = (pTVar8->TypedValue).field0_0x0._s_0.Z;
LAB_1492acdb3:
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// PostRegisterAllComponents @ 1492afdf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ANiagaraEditorPreviewActor::PostRegisterAllComponents(ANiagaraEditorPreviewActor *this)

{
  longlong *plVar1;
  undefined1 auStackX_8 [32];
  FReadAccessScope FStack_28;
  
  if ((this->_padding_ & 0x8000000000) == 0) {
    `AActor::PostRegisterAllComponents'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNavigationSystem::Delegates.OnActorRegistered,&FStack_28);
  plVar1 = (longlong *)0x0;
  if (FNavigationSystem::Delegates.OnActorRegistered._16_4_ != 0) {
    plVar1 = (longlong *)FNavigationSystem::Delegates.OnActorRegistered._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  FActorInstanceGuid::ReleaseActorInstanceGuid((AActor *)this);
  return;
}

// PostUnregisterAllComponents @ 1492b0430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ANiagaraEditorPreviewActor::PostUnregisterAllComponents(ANiagaraEditorPreviewActor *this)

{
  longlong *plVar1;
  undefined1 auStackX_8 [32];
  FReadAccessScope FStack_28;
  
  if (*(char *)((longlong)&this->_padding_ + 4) < '\0') {
    `AActor::PostUnregisterAllComponents'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNavigationSystem::Delegates.OnActorUnregistered,&FStack_28);
  plVar1 = (longlong *)0x0;
  if (FNavigationSystem::Delegates.OnActorUnregistered._16_4_ != 0) {
    plVar1 = (longlong *)FNavigationSystem::Delegates.OnActorUnregistered._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// ShouldTickIfViewportsOnly @ 1492b6340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
ANiagaraEditorPreviewActor::ShouldTickIfViewportsOnly(ANiagaraEditorPreviewActor *this)

{
  return true;
}

// StaticRegisterNativesANiagaraEditorPreviewActor @ 1492b6910

void __cdecl ANiagaraEditorPreviewActor::StaticRegisterNativesANiagaraEditorPreviewActor(void)

{
  return;
}

// Tick @ 1492b6ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ANiagaraEditorPreviewActor::Tick(ANiagaraEditorPreviewActor *this,float param_1)

{
  ENiagaraEditorPreviewActorPlaybackType EVar1;
  ENiagaraEditorPreviewActorRotationMode EVar2;
  UNiagaraComponent *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraSystemInstanceController *this_00;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  UWorld *pUVar11;
  UFunction *pUVar12;
  TVector<double> *pTVar13;
  TQuat<double> *pTVar14;
  TRotator<double> *pTVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStackY_218 [32];
  TVector<double>_u_0 local_1e8;
  char local_1d0;
  TVector<double>_u_0 local_1c8;
  char local_1b0;
  undefined1 local_1a8 [32];
  TQuat<double> local_188;
  TQuat<double> local_158;
  undefined8 local_138;
  undefined8 uStack_130;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_218;
  AActor::Tick((AActor *)this,param_1);
  pUVar11 = AActor::GetWorld((AActor *)this);
  if (pUVar11 == (UWorld *)0x0) {
    return;
  }
  pUVar3 = (this->NiagaraComponent).field0_0x0.DebugPtr;
  if ((pUVar3->_padding_ & 0x100000) == 0) {
    (**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3,0);
  }
  pUVar3 = (this->NiagaraComponent).field0_0x0.DebugPtr;
  pTVar4 = (pUVar3->SystemInstanceController).SharedReferenceCount.ReferenceController;
  this_00 = (pUVar3->SystemInstanceController).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (this_00 == (FNiagaraSystemInstanceController *)0x0) goto LAB_1492b7112;
  fVar16 = FNiagaraSystemInstanceController::GetAge<>(this_00);
  fVar19 = __real_3f000000;
  fVar18 = __real_3f800000;
  dVar24 = __real_3ff0000000000000;
  EVar1 = this->PlaybackType;
  dVar22 = __real_3ff0000000000000 / this->MotionDuration;
  fVar27 = (float)((double)fVar16 * dVar22);
  fVar16 = (float)((double)(fVar16 + __real_3dcccccd) * dVar22);
  if (EVar1 == Once) {
    if (__real_3f800000 <= fVar27) {
      fVar27 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar16) {
      fVar16 = __real_3f800000;
    }
    if (fVar27 <= 0.0) {
      fVar27 = 0.0;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
  }
  else if (EVar1 == Looping) {
    fVar18 = (float)truncf(fVar27);
    fVar27 = fVar27 - fVar18;
    fVar18 = (float)truncf(fVar16);
    fVar16 = fVar16 - fVar18;
  }
  else if (EVar1 == PingPong) {
    if (((int)ROUND((fVar27 + fVar27) - __real_3f000000) & 2U) == 0) {
      fVar17 = (float)truncf();
      fVar27 = fVar27 - fVar17;
    }
    else {
      fVar17 = (float)truncf(fVar27);
      fVar27 = fVar18 - (fVar27 - fVar17);
    }
    if (((int)ROUND((fVar16 + fVar16) - fVar19) & 2U) == 0) {
      fVar18 = (float)truncf();
      fVar16 = fVar16 - fVar18;
    }
    else {
      fVar19 = (float)truncf(fVar16);
      fVar16 = fVar18 - (fVar16 - fVar19);
    }
  }
  InternalCalculateLocation(this,(TOptional<UE::Math::TVector<double>_> *)&local_1c8._s_0,fVar27);
  EVar2 = this->RotationMode;
  bVar9 = false;
  uVar20 = UE::Math::TQuat<double>::Identity.X._0_4_;
  uVar21 = UE::Math::TQuat<double>::Identity.X._4_4_;
  uVar28 = UE::Math::TQuat<double>::Identity.Y._0_4_;
  uVar29 = UE::Math::TQuat<double>::Identity.Y._4_4_;
  uVar30 = UE::Math::TQuat<double>::Identity.Z._0_4_;
  uVar31 = UE::Math::TQuat<double>::Identity.Z._4_4_;
  uVar32 = UE::Math::TQuat<double>::Identity.W._0_4_;
  uVar33 = UE::Math::TQuat<double>::Identity.W._4_4_;
  if (EVar2 == None) {
LAB_1492b6ef6:
    bVar9 = true;
  }
  else if (EVar2 == DirectionOfTravel) {
    InternalCalculateLocation(this,(TOptional<UE::Math::TVector<double>_> *)&local_1e8._s_0,fVar16);
    uVar20 = local_188.X._0_4_;
    uVar21 = local_188.X._4_4_;
    uVar28 = local_188.Y._0_4_;
    uVar29 = local_188.Y._4_4_;
    uVar30 = local_188.Z._0_4_;
    uVar31 = local_188.Z._4_4_;
    uVar32 = local_188.W._0_4_;
    uVar33 = local_188.W._4_4_;
    if ((local_1b0 != '\0') && (local_1d0 != '\0')) {
      dVar25 = local_1e8._s_0.X - local_1c8._s_0.X;
      dVar26 = local_1e8._s_0.Y - local_1c8._s_0.Y;
      dVar22 = local_1e8._s_0.Z - local_1c8._s_0.Z;
      dVar23 = dVar26 * dVar26 + dVar25 * dVar25 + dVar22 * dVar22;
      if (__real_3e45798ee0000000 < dVar23) {
        local_118.M[2][0] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        dVar23 = dVar24 / SQRT(dVar23);
        local_118.M[2][1] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_118.M[3][3] = dVar24;
        local_118.M[1][2] =
             dVar23 * dVar26 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
             dVar23 * dVar25 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_118.M[2][2] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        local_118.M[1][0] =
             dVar23 * dVar22 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
             dVar23 * dVar26 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        local_118.M[1][1] =
             dVar23 * dVar25 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
             dVar23 * dVar22 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_118.M[0][0] =
             local_118.M[1][1] * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
             local_118.M[1][2] * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_118.M[0][1] =
             local_118.M[1][2] * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
             local_118.M[1][0] * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        local_118.M[0][3] = 0.0;
        local_118.M[1][3] = 0.0;
        local_118.M[0][2] =
             local_118.M[1][0] * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
             local_118.M[1][1] * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_118.M[2][3] = 0.0;
        local_118.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_118.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_118.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar14 = UE::Math::TMatrix<double>::ToQuat(&local_118,(TQuat<double> *)&local_1e8._s_0);
        uVar20 = local_188.X._0_4_;
        uVar21 = local_188.X._4_4_;
        uVar28 = local_188.Y._0_4_;
        uVar29 = local_188.Y._4_4_;
        uVar30 = local_188.Z._0_4_;
        uVar31 = local_188.Z._4_4_;
        uVar32 = local_188.W._0_4_;
        uVar33 = local_188.W._4_4_;
        if (pTVar14 != &local_188) {
          uVar20 = *(undefined4 *)&pTVar14->X;
          uVar21 = *(undefined4 *)((longlong)&pTVar14->X + 4);
          uVar28 = *(undefined4 *)&pTVar14->Y;
          uVar29 = *(undefined4 *)((longlong)&pTVar14->Y + 4);
          uVar30 = *(undefined4 *)&pTVar14->Z;
          uVar31 = *(undefined4 *)((longlong)&pTVar14->Z + 4);
          uVar32 = *(undefined4 *)&pTVar14->W;
          uVar33 = *(undefined4 *)((longlong)&pTVar14->W + 4);
          goto LAB_1492b6ef6;
        }
      }
    }
  }
  else {
    uVar20 = local_188.X._0_4_;
    uVar21 = local_188.X._4_4_;
    uVar28 = local_188.Y._0_4_;
    uVar29 = local_188.Y._4_4_;
    uVar30 = local_188.Z._0_4_;
    uVar31 = local_188.Z._4_4_;
    uVar32 = local_188.W._0_4_;
    uVar33 = local_188.W._4_4_;
    if (EVar2 == Blueprint) {
      local_158.Z = (double)CONCAT44(UE::Math::TQuat<double>::Identity.X._4_4_,
                                     UE::Math::TQuat<double>::Identity.X._0_4_);
      local_158.W = (double)CONCAT44(UE::Math::TQuat<double>::Identity.Y._4_4_,
                                     UE::Math::TQuat<double>::Identity.Y._0_4_);
      local_138 = CONCAT44(UE::Math::TQuat<double>::Identity.Z._4_4_,
                           UE::Math::TQuat<double>::Identity.Z._0_4_);
      uStack_130 = CONCAT44(UE::Math::TQuat<double>::Identity.W._4_4_,
                            UE::Math::TQuat<double>::Identity.W._0_4_);
      local_158.X._0_4_ = fVar16;
      pUVar12 = UObject::FindFunctionChecked
                          ((UObject *)this,NAME_ANiagaraEditorPreviewActor_CalculateRotation);
      AActor::ProcessEvent((AActor *)this,pUVar12,&local_158);
      uVar20 = local_158.Z._0_4_;
      uVar21 = local_158.Z._4_4_;
      uVar28 = local_158.W._0_4_;
      uVar29 = local_158.W._4_4_;
      uVar30 = (undefined4)local_138;
      uVar31 = local_138._4_4_;
      uVar32 = (undefined4)uStack_130;
      uVar33 = uStack_130._4_4_;
      goto LAB_1492b6ef6;
    }
  }
  if (local_1b0 == '\0') {
    if (!bVar9) goto LAB_1492b7112;
    pUVar3 = (this->NiagaraComponent).field0_0x0.DebugPtr;
    dVar23 = (double)pUVar3->_padding_;
    dVar22 = (double)pUVar3->_padding_;
    dVar24 = (double)pUVar3->_padding_;
  }
  else {
    pTVar13 = UE::Math::TRotator<double>::RotateVector
                        (&this->ShapeRotation,(TVector<double> *)&local_1e8._s_0,
                         (TVector<double> *)&local_1c8._s_0);
    dVar24 = this->ShapeScale;
    dVar23 = dVar24 * (pTVar13->field0_0x0)._s_0.X;
    dVar22 = dVar24 * (pTVar13->field0_0x0)._s_0.Y;
    dVar24 = dVar24 * (pTVar13->field0_0x0)._s_0.Z;
    local_1e8._s_0.Z = dVar24;
  }
  if (bVar9) {
    pTVar14 = UE::Math::TRotator<double>::Quaternion(&this->ShapeRotation,&local_158);
    dVar5 = pTVar14->X;
    dVar6 = pTVar14->Y;
    dVar7 = pTVar14->Z;
    dVar8 = pTVar14->W;
    dVar25 = dVar5 * (double)CONCAT44(uVar31,uVar30) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             (double)CONCAT44(uVar29,uVar28) * dVar8 +
             (double)CONCAT44(uVar33,uVar32) * dVar6 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar7 * (double)CONCAT44(uVar21,uVar20) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar26 = dVar5 * (double)CONCAT44(uVar21,uVar20) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             (double)CONCAT44(uVar33,uVar32) * dVar8 +
             (double)CONCAT44(uVar29,uVar28) * dVar6 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar7 * (double)CONCAT44(uVar31,uVar30) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_1a8._8_4_ = SUB84(dVar25,0);
    local_1a8._0_8_ =
         dVar5 * (double)CONCAT44(uVar33,uVar32) *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         (double)CONCAT44(uVar21,uVar20) * dVar8 +
         (double)CONCAT44(uVar31,uVar30) * dVar6 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar7 * (double)CONCAT44(uVar29,uVar28) *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_1a8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    local_1a8._24_4_ = SUB84(dVar26,0);
    local_1a8._16_8_ =
         dVar5 * (double)CONCAT44(uVar29,uVar28) *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         (double)CONCAT44(uVar31,uVar30) * dVar8 +
         (double)CONCAT44(uVar21,uVar20) * dVar6 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar7 * (double)CONCAT44(uVar33,uVar32) *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_1a8._28_4_ = (int)((ulonglong)dVar26 >> 0x20);
    pTVar15 = UE::Math::TQuat<double>::Rotator
                        ((TQuat<double> *)local_1a8,(TRotator<double> *)&local_1e8._s_0);
    local_1a8._0_4_ = *(undefined4 *)&pTVar15->Pitch;
    local_1a8._4_4_ = *(undefined4 *)((longlong)&pTVar15->Pitch + 4);
    local_1a8._8_4_ = *(undefined4 *)&pTVar15->Yaw;
    local_1a8._12_4_ = *(undefined4 *)((longlong)&pTVar15->Yaw + 4);
    uVar20 = SUB84(pTVar15->Roll,0);
    uVar21 = (undefined4)((ulonglong)pTVar15->Roll >> 0x20);
  }
  else {
    pUVar3 = (this->NiagaraComponent).field0_0x0.DebugPtr;
    local_1a8._0_4_ = (undefined4)pUVar3->_padding_;
    local_1a8._4_4_ = *(undefined4 *)((longlong)&pUVar3->_padding_ + 4);
    local_1a8._8_4_ = (undefined4)pUVar3->_padding_;
    local_1a8._12_4_ = *(undefined4 *)((longlong)&pUVar3->_padding_ + 4);
    uVar20 = (undefined4)pUVar3->_padding_;
    uVar21 = (undefined4)((ulonglong)pUVar3->_padding_ >> 0x20);
  }
  auVar10 = local_1a8._16_16_;
  local_1a8._20_4_ = uVar21;
  local_1a8._16_4_ = uVar20;
  local_1a8._24_8_ = auVar10._8_8_;
  local_1e8._8_4_ = SUB84(dVar22,0);
  local_1e8._s_0.X = dVar23;
  local_1e8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  local_1e8._s_0.Z = dVar24;
  USceneComponent::SetRelativeLocationAndRotation
            ((USceneComponent *)(this->NiagaraComponent).field0_0x0.DebugPtr,
             (TVector<double> *)&local_1e8._s_0,(TRotator<double> *)local_1a8,false,
             (FHitResult *)0x0,None);
LAB_1492b7112:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

