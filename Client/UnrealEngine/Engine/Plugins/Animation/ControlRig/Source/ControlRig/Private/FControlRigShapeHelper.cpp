// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// CreateDefaultShapeActor @ 14a24d0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AControlRigShapeActor * __cdecl
FControlRigShapeHelper::CreateDefaultShapeActor
          (UWorld *param_1,FControlShapeActorCreationParam *param_2)

{
  UStaticMeshComponent *this;
  code *pcVar1;
  FName FVar2;
  int iVar3;
  FActorSpawnParameters *pFVar4;
  UClass *pUVar5;
  AControlRigShapeActor *pAVar6;
  UObject *pUVar7;
  UMaterialInterface *pUVar8;
  UMaterialInstanceDynamic *this_00;
  FLinearColor *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  uint uVar12;
  UMaterialInterface *pUVar13;
  wchar_t *pwVar14;
  undefined1 auStack_118 [32];
  FLinearColor_u_0 local_e8;
  TVector<double>_u_0 local_d8;
  FString local_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar4 = GetDefaultSpawnParameter();
  pUVar5 = AControlRigShapeActor::StaticClass();
  pAVar6 = (AControlRigShapeActor *)
           UWorld::SpawnActor(param_1,pUVar5,&param_2->SpawnTransform,pFVar4);
  if (pAVar6 == (AControlRigShapeActor *)0x0) {
    return (AControlRigShapeActor *)0x0;
  }
  pUVar5 = AControlRigShapeActor::StaticClass();
  iVar3 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&pAVar6->field_0x10 + 0x38) < iVar3) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pAVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8)
      != &pUVar5->_padding_)) {
    pFVar10 = GetTypeName<AControlRigShapeActor>(&local_c0);
    pwVar11 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<AActor>((FString *)&local_e8._s_0,(AActor *)pAVar6);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar14);
  }
  pAVar6->ControlRigIndex = param_2->ControlRigIndex;
  local_e8._0_8_ = param_2->ControlRig;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UControlRig *)local_e8._0_8_ != (UControlRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e8._0_8_);
  }
  FWeakObjectPtr::operator=(&(pAVar6->ControlRig).WeakPtr,(FObjectPtr)&local_e8);
  pAVar6->ControlName = param_2->ControlName;
  pAVar6->ShapeName = param_2->ShapeName;
  (**(code **)(*(longlong *)pAVar6 + 0x780))(pAVar6,param_2->bSelectable);
  this = (pAVar6->StaticMeshComponent).field0_0x0.DebugPtr;
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->StaticMesh);
  if (pUVar7 == (UObject *)0x0) {
LAB_14a24d1ee:
    TSoftObjectPtr<UStaticMesh>::LoadSynchronous(&param_2->StaticMesh);
  }
  else {
    pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a24d1ee;
  }
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->StaticMesh);
  pUVar13 = (UMaterialInterface *)0x0;
  if (pUVar7 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar5->_padding_)) {
      pcVar1 = *(code **)(this->_padding_ + 0xb28);
      pUVar8 = (UMaterialInterface *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->StaticMesh);
      if (pUVar8 == (UMaterialInterface *)0x0) {
LAB_14a24d280:
        pUVar8 = pUVar13;
      }
      else {
        pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
        iVar3 = (int)pUVar5->_padding_;
        if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar5->_padding_)) goto LAB_14a24d280;
      }
      (*pcVar1)(this,pUVar8);
      UActorComponent::DestroyPhysicsState((UActorComponent *)this);
      local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_a8,&param_2->MeshTransform,&param_2->ShapeTransform);
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this,&local_a8,false,(FHitResult *)0x0,None);
    }
  }
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->Material);
  if (pUVar7 == (UObject *)0x0) {
LAB_14a24d360:
    TSoftObjectPtr<UMaterial>::LoadSynchronous(&param_2->Material);
  }
  else {
    pUVar5 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a24d360;
  }
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->StaticMesh);
  if (pUVar7 == (UObject *)0x0) {
    return pAVar6;
  }
  pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
  iVar3 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar3) {
    return pAVar6;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar3 * 8)
      != &pUVar5->_padding_) {
    return pAVar6;
  }
  pAVar6->ColorParameterName = param_2->ColorParameterName;
  local_e8._s_0.R = (float)0;
  local_e8._s_0.G = (float)0;
  pUVar8 = (UMaterialInterface *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->Material);
  if (pUVar8 != (UMaterialInterface *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar5->_padding_)) goto LAB_14a24d3fc;
  }
  pUVar8 = pUVar13;
LAB_14a24d3fc:
  this_00 = UMaterialInstanceDynamic::Create(pUVar8,(UObject *)pAVar6,(FName)local_e8._0_8_);
  FVar2 = param_2->ColorParameterName;
  local_d8._s_0.X = (double)(param_2->Color).field0_0x0._s_0.R;
  local_d8._s_0.Y = (double)(param_2->Color).field0_0x0._s_0.G;
  local_d8._s_0.Z = (double)(param_2->Color).field0_0x0._s_0.B;
  pFVar9 = FLinearColor::FLinearColor((FLinearColor *)&local_c0,(TVector<double> *)&local_d8._s_0);
  local_e8._0_8_ = *(undefined8 *)&pFVar9->field0_0x0;
  local_e8._8_8_ = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
  UMaterialInstanceDynamic::SetVectorParameterValue(this_00,FVar2,(FLinearColor *)&local_e8._s_0);
  iVar3 = (**(code **)(this->_padding_ + 0x810))(this);
  if (0 < iVar3) {
    do {
      (**(code **)(this->_padding_ + 0x6b8))(this,pUVar13,this_00);
      uVar12 = (int)pUVar13 + 1;
      pUVar13 = (UMaterialInterface *)(ulonglong)uVar12;
      iVar3 = (**(code **)(this->_padding_ + 0x810))(this);
    } while ((int)uVar12 < iVar3);
  }
  return pAVar6;
}

// CreateShapeActor @ 14a24d730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

AControlRigShapeActor * __cdecl
FControlRigShapeHelper::CreateShapeActor
          (UWorld *param_1,UStaticMesh *param_2,FControlShapeActorCreationParam *param_3)

{
  UStaticMeshComponent *pUVar1;
  AControlRigShapeActor *pAVar2;
  
  if (param_1 != (UWorld *)0x0) {
    pAVar2 = CreateDefaultShapeActor(param_1,param_3);
    if (pAVar2 != (AControlRigShapeActor *)0x0) {
      if (param_2 != (UStaticMesh *)0x0) {
        pUVar1 = (pAVar2->StaticMeshComponent).field0_0x0.DebugPtr;
        (**(code **)(pUVar1->_padding_ + 0xb28))(pUVar1,param_2);
      }
      return pAVar2;
    }
  }
  return (AControlRigShapeActor *)0x0;
}

// CreateShapeActor @ 14a24d790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

AControlRigShapeActor * __cdecl
FControlRigShapeHelper::CreateShapeActor
          (UWorld *param_1,TSubclassOf<AControlRigShapeActor> param_2,
          FControlShapeActorCreationParam *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FActorSpawnParameters *pFVar4;
  UClass *pUVar5;
  AControlRigShapeActor *this;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  pFVar4 = GetDefaultSpawnParameter();
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar5 = AControlRigShapeActor::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar5 = *(UClass **)param_2.Class.field0_0x0;
        goto LAB_14a24d7f8;
      }
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a24d7f8:
  this = (AControlRigShapeActor *)
         UWorld::SpawnActor(param_1,pUVar5,(TVector<double> *)0x0,(TRotator<double> *)0x0,pFVar4);
  if (this != (AControlRigShapeActor *)0x0) {
    pUVar5 = AControlRigShapeActor::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      pFVar6 = GetTypeName<AControlRigShapeActor>(&local_28);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<AActor>(&local_18,(AActor *)this);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    AActor::SetActorTransform((AActor *)this,&param_3->SpawnTransform,false,(FHitResult *)0x0,None);
  }
  return this;
}

// GetDefaultSpawnParameter @ 14a2621c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorSpawnParameters * __cdecl FControlRigShapeHelper::GetDefaultSpawnParameter(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FActorSpawnParameters::FActorSpawnParameters(&ActorSpawnParameters);
      atexit(`FControlRigShapeHelper::GetDefaultSpawnParameter'::__l2::
             _dynamic_atexit_destructor_for__ActorSpawnParameters__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  ActorSpawnParameters.SpawnCollisionHandlingOverride = AlwaysSpawn;
  ActorSpawnParameters.ObjectFlags = RF_Transient;
  return &ActorSpawnParameters;
}

