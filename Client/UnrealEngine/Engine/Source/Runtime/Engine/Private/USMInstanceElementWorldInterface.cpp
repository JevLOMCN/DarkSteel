// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 147b2a7f0

UClass * __cdecl USMInstanceElementWorldInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementWorldInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementWorldInterface",
               &Z_Registration_Info_UClass_USMInstanceElementWorldInterface.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementWorldInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USMInstanceElementWorldInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementWorldInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementWorldInterface.InnerSingleton;
}

// USMInstanceElementWorldInterface @ 147b3b960

USMInstanceElementWorldInterface * __thiscall
USMInstanceElementWorldInterface::USMInstanceElementWorldInterface
          (USMInstanceElementWorldInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementWorldInterface__;
  return this;
}

// USMInstanceElementWorldInterface @ 147b3b9a0

USMInstanceElementWorldInterface * __thiscall
USMInstanceElementWorldInterface::USMInstanceElementWorldInterface
          (USMInstanceElementWorldInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementWorldInterface__;
  return this;
}

// ~USMInstanceElementWorldInterface @ 147b3da90

void __thiscall
USMInstanceElementWorldInterface::~USMInstanceElementWorldInterface
          (USMInstanceElementWorldInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementWorldInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanEditElement @ 147b4a620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementWorldInterface::CanEditElement
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1)

{
  char cVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    cVar1 = (**(code **)((longlong)*local_28.InstanceManager + 0x20))
                      (local_28.InstanceManager,&local_28);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// CanMoveElement @ 147b4a9b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementWorldInterface::CanMoveElement
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1,
          ETypedElementWorldType param_2)

{
  char cVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    cVar1 = (**(code **)((longlong)*local_28.InstanceManager + 0x28))
                      (local_28.InstanceManager,&local_28,param_2);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// GetBounds @ 147b63fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementWorldInterface::GetBounds
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  double dVar1;
  double dVar2;
  UStaticMesh *this_00;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TBoxSphereBounds<double,double> *pTVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_1f8 [32];
  FSMInstanceManager local_1d8;
  TBoxSphereBounds<double,double> local_1c0;
  TMatrix<double> local_188;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_1d8,param_1,false);
  if (((local_1d8.InstanceId.ISMComponent == (UInstancedStaticMeshComponent *)0x0) ||
      (local_1d8.InstanceId.InstanceIndex == -1)) ||
     (local_1d8.InstanceManager == (ISMInstanceManager *)0x0)) {
    return false;
  }
  this_00 = (UStaticMesh *)(local_1d8.InstanceId.ISMComponent)->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147b64080:
    if (this_00 != (UStaticMesh *)0x0) {
      pTVar11 = UStaticMesh::GetBounds(this_00,&local_1c0);
      dVar1 = (pTVar11->Origin).field0_0x0._s_0.Y;
      (param_2->Origin).field0_0x0._s_0.X = (pTVar11->Origin).field0_0x0._s_0.X;
      (param_2->Origin).field0_0x0._s_0.Y = dVar1;
      dVar1 = (pTVar11->BoxExtent).field0_0x0._s_0.X;
      (param_2->Origin).field0_0x0._s_0.Z = (pTVar11->Origin).field0_0x0._s_0.Z;
      (param_2->BoxExtent).field0_0x0._s_0.X = dVar1;
      dVar1 = (pTVar11->BoxExtent).field0_0x0._s_0.Z;
      (param_2->BoxExtent).field0_0x0._s_0.Y = (pTVar11->BoxExtent).field0_0x0._s_0.Y;
      (param_2->BoxExtent).field0_0x0._s_0.Z = dVar1;
      param_2->SphereRadius = pTVar11->SphereRadius;
      goto LAB_147b640d9;
    }
  }
  else if (this_00 != (UStaticMesh *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_00);
    goto LAB_147b64080;
  }
  (param_2->Origin).field0_0x0._s_0.X = 0.0;
  (param_2->Origin).field0_0x0._s_0.Y = 0.0;
  local_1c0.SphereRadius = 0.0;
  (param_2->Origin).field0_0x0._s_0.Z = 0.0;
  (param_2->BoxExtent).field0_0x0._s_0.X = 0.0;
  (param_2->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (param_2->BoxExtent).field0_0x0._s_0.Z = 0.0;
  param_2->SphereRadius = 0.0;
LAB_147b640d9:
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
  (**(code **)((longlong)*local_1d8.InstanceManager + 0x30))
            (SUB84((double)GlobalVectorConstants::Float1110.m128_f32[2],0),&local_1d8,&local_108,1);
  UE::Math::TTransform<double>::ToMatrixWithScale(&local_108,&local_188);
  dVar8 = (param_2->BoxExtent).field0_0x0._s_0.X;
  dVar12 = (param_2->BoxExtent).field0_0x0._s_0.Y;
  dVar9 = (param_2->Origin).field0_0x0._s_0.X;
  dVar10 = (param_2->Origin).field0_0x0._s_0.Y;
  dVar1 = (param_2->BoxExtent).field0_0x0._s_0.Z;
  dVar2 = (param_2->Origin).field0_0x0._s_0.Z;
  dVar6 = (double)CONCAT44((uint)((ulonglong)(dVar12 * local_188.M[1][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar12 * local_188.M[1][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar8 * local_188.M[0][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8 * local_188.M[0][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar1 * local_188.M[2][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1 * local_188.M[2][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar7 = (double)CONCAT44((uint)((ulonglong)(dVar12 * local_188.M[1][1]) >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar12 * local_188.M[1][1],0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(dVar8 * local_188.M[0][1]) >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar8 * local_188.M[0][1],0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(dVar1 * local_188.M[2][1]) >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar1 * local_188.M[2][1],0) & _UNK_15061cc88);
  dVar8 = (double)CONCAT44((uint)((ulonglong)(dVar12 * local_188.M[1][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar12 * local_188.M[1][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar8 * local_188.M[0][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8 * local_188.M[0][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar1 * local_188.M[2][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1 * local_188.M[2][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_188.M[3][1] =
       local_188.M[1][1] * dVar10 + local_188.M[0][1] * dVar9 + local_188.M[2][1] * dVar2 +
       local_188.M[3][1];
  auVar13._0_8_ =
       local_188.M[1][0] * local_188.M[1][0] + local_188.M[0][0] * local_188.M[0][0] +
       local_188.M[2][0] * local_188.M[2][0];
  auVar13._8_8_ =
       local_188.M[1][1] * local_188.M[1][1] + local_188.M[0][1] * local_188.M[0][1] +
       local_188.M[2][1] * local_188.M[2][1];
  auVar14._8_4_ = SUB84(auVar13._8_8_,0);
  auVar14._0_8_ = auVar13._8_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar13._8_8_ >> 0x20);
  auVar14 = maxpd(auVar13,auVar14);
  dVar1 = local_188.M[1][2] * local_188.M[1][2] + local_188.M[0][2] * local_188.M[0][2] +
          local_188.M[2][2] * local_188.M[2][2];
  dVar12 = SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7);
  auVar5._8_4_ = SUB84(dVar1,0);
  auVar5._0_8_ = dVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar14 = maxpd(auVar14,auVar5);
  dVar1 = SQRT(auVar14._0_8_) * param_2->SphereRadius;
  if (dVar1 <= dVar12) {
    dVar12 = dVar1;
  }
  local_1c0.BoxExtent.field0_0x0._0_4_ = SUB84(dVar6,0);
  local_1c0.BoxExtent.field0_0x0._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar4._8_4_ = SUB84(local_188.M[3][1],0);
  auVar4._0_8_ = local_188.M[1][0] * dVar10 + local_188.M[0][0] * dVar9 + local_188.M[2][0] * dVar2
                 + local_188.M[3][0];
  auVar4._12_4_ = (int)((ulonglong)local_188.M[3][1] >> 0x20);
  *(undefined1 (*) [16])&(param_2->Origin).field0_0x0 = auVar4;
  auVar3._8_4_ = local_1c0.BoxExtent.field0_0x0._0_4_;
  auVar3._0_8_ = local_188.M[1][2] * dVar10 + local_188.M[0][2] * dVar9 + local_188.M[2][2] * dVar2
                 + local_188.M[3][2];
  auVar3._12_4_ = local_1c0.BoxExtent.field0_0x0._4_4_;
  *(undefined1 (*) [16])((longlong)&(param_2->Origin).field0_0x0 + 0x10) = auVar3;
  (param_2->BoxExtent).field0_0x0._s_0.Y = dVar7;
  (param_2->BoxExtent).field0_0x0._s_0.Z = dVar8;
  param_2->SphereRadius = dVar12;
  return true;
}

// GetOwnerLevel @ 147b6a3a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ULevel * __thiscall
USMInstanceElementWorldInterface::GetOwnerLevel
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1)

{
  ULevel *pUVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if ((((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
       (local_28.InstanceId.InstanceIndex != -1)) &&
      (local_28.InstanceManager != (ISMInstanceManager *)0x0)) &&
     ((AActor *)(local_28.InstanceId.ISMComponent)->_padding_ != (AActor *)0x0)) {
    pUVar1 = AActor::GetLevel((AActor *)(local_28.InstanceId.ISMComponent)->_padding_);
    return pUVar1;
  }
  return (ULevel *)0x0;
}

// GetOwnerWorld @ 147b6a690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UWorld * __thiscall
USMInstanceElementWorldInterface::GetOwnerWorld
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1)

{
  UWorld *pUVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent == (UInstancedStaticMeshComponent *)0x0) ||
      (local_28.InstanceId.InstanceIndex == -1)) ||
     (local_28.InstanceManager == (ISMInstanceManager *)0x0)) {
    pUVar1 = (UWorld *)0x0;
  }
  else {
    pUVar1 = (UWorld *)(local_28.InstanceId.ISMComponent)->_padding_;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached
                         ((UActorComponent *)local_28.InstanceId.ISMComponent);
      return pUVar1;
    }
  }
  return pUVar1;
}

// GetPrivateStaticClass @ 147b6c8c0

UClass * __cdecl USMInstanceElementWorldInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementWorldInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementWorldInterface",
               &Z_Registration_Info_UClass_USMInstanceElementWorldInterface.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementWorldInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USMInstanceElementWorldInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementWorldInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementWorldInterface.InnerSingleton;
}

// GetRelativeTransform @ 147b6d5c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementWorldInterface::GetRelativeTransform
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  char cVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    cVar1 = (**(code **)((longlong)*local_28.InstanceManager + 0x30))
                      (local_28.InstanceManager,&local_28,param_2,0);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// GetSelectionElementsFromSelectionFunction @ 147b6f590

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
USMInstanceElementWorldInterface::GetSelectionElementsFromSelectionFunction
          (USMInstanceElementWorldInterface *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTypedElementHandle *param_1,FWorldSelectionElementArgs *param_2,
          TFunction<bool___cdecl(FTypedElementHandle_const_&,FWorldSelectionElementArgs_const_&)>
          *param_3)

{
  code *pcVar1;
  FTypedElementInternalData *this_00;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FTypedElementHandle local_18;
  
  if (((param_2->bBSPSelectionOnly == false) || (param_2->ShowFlags == (FEngineShowFlags *)0x0)) ||
     (param_2->ShowFlags->StaticMeshes != 0)) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar1 = *(code **)param_3;
    plVar4 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_3->field_0x28;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3,param_1,param_2);
    if (cVar2 == '\0') {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      if (param_2->SelectionSet == (UTypedElementSelectionSet *)0x0) {
        this_00 = param_1->DataPtr;
        local_18.DataPtr = (FTypedElementInternalData *)0x0;
        local_18.ReferenceId = -1;
        if (this_00 != (FTypedElementInternalData *)0x0) {
          local_18.DataPtr = this_00;
          local_18.ReferenceId = FTypedElementInternalData::AddRef(this_00,true);
        }
      }
      else {
        UTypedElementSelectionSet::GetSelectionElement
                  (param_2->SelectionSet,&local_18,param_1,param_2->SelectionMethod);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<FTypedElementHandle,FTypedElementHandle,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,&local_18,1);
      if (local_18.DataPtr != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef(local_18.DataPtr,local_18.ReferenceId);
      }
    }
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetWorldTransform @ 147b72d30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementWorldInterface::GetWorldTransform
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  char cVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    cVar1 = (**(code **)((longlong)*local_28.InstanceManager + 0x30))
                      (local_28.InstanceManager,&local_28,param_2,1);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// IsTemplateElement @ 147b785b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementWorldInterface::IsTemplateElement
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1)

{
  bool bVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)local_28.InstanceId.ISMComponent,
                       RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// NotifyMovementEnded @ 147b7a640

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
USMInstanceElementWorldInterface::NotifyMovementEnded
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1)

{
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    (**(code **)((longlong)*local_28.InstanceManager + 0x50))(local_28.InstanceManager,&local_28);
  }
  return;
}

// NotifyMovementOngoing @ 147b7a880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
USMInstanceElementWorldInterface::NotifyMovementOngoing
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1)

{
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    (**(code **)((longlong)*local_28.InstanceManager + 0x48))(local_28.InstanceManager,&local_28);
  }
  return;
}

// NotifyMovementStarted @ 147b7aac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
USMInstanceElementWorldInterface::NotifyMovementStarted
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1)

{
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    (**(code **)((longlong)*local_28.InstanceManager + 0x40))(local_28.InstanceManager,&local_28);
  }
  return;
}

// SetRelativeTransform @ 147b8cef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementWorldInterface::SetRelativeTransform
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  char cVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    cVar1 = (**(code **)((longlong)*local_28.InstanceManager + 0x38))
                      (local_28.InstanceManager,&local_28,param_2,0,1,0);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// SetWorldTransform @ 147b8e0f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementWorldInterface::SetWorldTransform
          (USMInstanceElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  char cVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if (((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      (local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    cVar1 = (**(code **)((longlong)*local_28.InstanceManager + 0x38))
                      (local_28.InstanceManager,&local_28,param_2,1,1,0);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUSMInstanceElementWorldInterface @ 147b8ed20

void __cdecl
USMInstanceElementWorldInterface::StaticRegisterNativesUSMInstanceElementWorldInterface(void)

{
  return;
}

// _getUObject @ 147b92060

UObject * __thiscall
USMInstanceElementWorldInterface::_getUObject(USMInstanceElementWorldInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

