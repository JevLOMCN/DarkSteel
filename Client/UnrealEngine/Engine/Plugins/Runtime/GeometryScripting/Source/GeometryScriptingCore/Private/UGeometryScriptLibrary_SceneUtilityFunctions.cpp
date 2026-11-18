// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 17

// StaticClass @ 14cea7980

UClass * __cdecl UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_SceneUtilityFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_SceneUtilityFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_SceneUtilityFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_SceneUtilityFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_SceneUtilityFunctions @ 14ceae870

UGeometryScriptLibrary_SceneUtilityFunctions * __thiscall
UGeometryScriptLibrary_SceneUtilityFunctions::UGeometryScriptLibrary_SceneUtilityFunctions
          (UGeometryScriptLibrary_SceneUtilityFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_SceneUtilityFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_SceneUtilityFunctions @ 14ceae8a0

UGeometryScriptLibrary_SceneUtilityFunctions * __thiscall
UGeometryScriptLibrary_SceneUtilityFunctions::UGeometryScriptLibrary_SceneUtilityFunctions
          (UGeometryScriptLibrary_SceneUtilityFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_SceneUtilityFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_SceneUtilityFunctions @ 14ceaebd0

void __thiscall
UGeometryScriptLibrary_SceneUtilityFunctions::~UGeometryScriptLibrary_SceneUtilityFunctions
          (UGeometryScriptLibrary_SceneUtilityFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_SceneUtilityFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ceb0a70

bool __thiscall
`UGeometryScriptLibrary_SceneUtilityFunctions::DetermineMeshOcclusion'::__l2::<lambda_1>::operator()
          (void *this,TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,TSizedDefaultAllocator<32>_>
          *param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  iVar8 = param_1->ArrayNum;
  uVar11 = 0;
  uVar12 = uVar11;
  if (0 < iVar8) {
    do {
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar9 = *(longlong *)((param_1->AllocatorInstance).Data + uVar12);
      if (lVar9 == 0) {
        return false;
      }
      uVar7 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar1 = *(undefined8 *)(lVar9 + 0xb8);
      iVar8 = param_3->ArrayNum;
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (iVar8 == param_3->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8b8,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar8 + 1;
      lVar9 = (longlong)iVar8 * 0xb8;
      pFVar3 = (param_3->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar9) = uVar1;
      *(undefined8 *)(pFVar3 + lVar9 + 0xa8) = 0;
      *(undefined4 *)(pFVar3 + lVar9 + 0xb0) = 0;
      *(undefined4 *)(pFVar3 + lVar9 + 0xb4) = 2;
      UE::Geometry::TTransformSequence3<double>::Append
                ((TTransformSequence3<double> *)(pFVar3 + lVar9 + 8),
                 (TTransform<double> *)(pFVar2 + (longlong)(int)uVar10 * 0x60));
      iVar8 = param_1->ArrayNum;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar10 + 1) < iVar8);
  }
  return true;
}

// CopyCollisionMeshesFromObject @ 14ceb68b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject
          (UObject *param_1,UDynamicMesh *param_2,bool param_3,TTransform<double> *param_4,
          EGeometryScriptOutcomePins *param_5,bool param_6,int param_7,UGeometryScriptDebug *param_8
          )

{
  int iVar1;
  double dVar2;
  char cVar3;
  FText *pFVar4;
  UClass *pUVar5;
  IInterface_CollisionDataProvider *pIVar6;
  USkeletalMesh *this;
  longlong lVar7;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStackY_498 [32];
  bool local_447 [15];
  TVector<double>_u_0 local_438;
  FDynamicMesh3 *local_418;
  EGeometryScriptOutcomePins *local_410;
  double local_3f8;
  FDynamicMesh3 local_3e8;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  uchar local_178 [4];
  uchar auStack_174 [4];
  uchar auStack_170 [4];
  uchar auStack_16c [4];
  double local_168;
  double dStack_160;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> local_118;
  int local_110;
  int local_10c;
  TTransformSequence3<double> local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_410 = param_5;
  *param_5 = Failure;
  if (param_2 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_438,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                        L"CopyCollisionMeshesFromObject_InvalidInput",
                        L"CopyCollisionMeshesFromObject: ToDynamicMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar4);
    if ((ITextData *)local_438._s_0.X != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_438._s_0.X + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_3e8);
  local_418 = &local_3e8;
  local_438._s_0.Y = (double)&local_418;
  local_438._s_0.X =
       (double)UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
  UDynamicMesh::ProcessMesh
            (param_2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_438);
  *&(param_4->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_4->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_4->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_4->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_4->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_4->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (param_1 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      dVar2 = *(double *)&param_1[0xc].field_0x18;
      (param_4->Rotation).XY.m128d_f64[0] = *(double *)&param_1[0xc].field_0x10;
      (param_4->Rotation).XY.m128d_f64[1] = dVar2;
      dVar2 = *(double *)(param_1 + 0xd);
      (param_4->Rotation).ZW.m128d_f64[0] = *(double *)&param_1[0xc].field_0x20;
      (param_4->Rotation).ZW.m128d_f64[1] = dVar2;
      dVar2 = *(double *)&param_1[0xd].field_0x10;
      (param_4->Translation).XY.m128d_f64[0] = *(double *)&param_1[0xd].field_0x8;
      (param_4->Translation).XY.m128d_f64[1] = dVar2;
      dVar2 = *(double *)&param_1[0xd].field_0x20;
      (param_4->Translation).ZW.m128d_f64[0] = *(double *)&param_1[0xd].field_0x18;
      (param_4->Translation).ZW.m128d_f64[1] = dVar2;
      dVar2 = *(double *)&param_1[0xe].field_0x8;
      (param_4->Scale3D).XY.m128d_f64[0] = *(double *)(param_1 + 0xe);
      (param_4->Scale3D).XY.m128d_f64[1] = dVar2;
      dVar2 = *(double *)&param_1[0xe].field_0x18;
      (param_4->Scale3D).ZW.m128d_f64[0] = *(double *)&param_1[0xe].field_0x10;
      (param_4->Scale3D).ZW.m128d_f64[1] = dVar2;
    }
  }
  if (param_6) {
    if (param_1 == (UObject *)0x0) {
      pIVar6 = (IInterface_CollisionDataProvider *)0x0;
LAB_14ceb6ac8:
      if (param_1 != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar5->_padding_)) &&
           (this = *(USkeletalMesh **)(param_1 + 0x24),
           pIVar6 = (IInterface_CollisionDataProvider *)0x0, this != (USkeletalMesh *)0x0)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
LAB_14ceb6ab0:
          pUVar5 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
          pIVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar5);
        }
      }
LAB_14ceb6b12:
      if (pIVar6 == (IInterface_CollisionDataProvider *)0x0) {
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_438,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                            L"CopyCollisionMeshesFromObject_NoCollisionProvider",
                            L"CopyCollisionMeshesFromObject: Complex Collision Provider is not available for this object type"
                           );
        UE::Geometry::AppendError(param_8,InvalidInputs,pFVar4);
        if ((ITextData *)local_438._s_0.X != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_438._s_0.X + 0x10))();
        }
        goto LAB_14ceb6dcb;
      }
    }
    else {
      pUVar5 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
      pIVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
      if ((pIVar6 == (IInterface_CollisionDataProvider *)0x0) ||
         (cVar3 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,1), cVar3 == '\0')) {
        pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) goto LAB_14ceb6ac8;
        this = USkeletalMeshComponent::GetSkeletalMeshAsset((USkeletalMeshComponent *)param_1);
        pIVar6 = (IInterface_CollisionDataProvider *)0x0;
        if (this != (USkeletalMesh *)0x0) goto LAB_14ceb6ab0;
        goto LAB_14ceb6b12;
      }
    }
    local_118 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
    local_110 = 0;
    local_10c = 2;
    if (param_3) {
      UE::Geometry::TTransformSequence3<double>::Append
                ((TTransformSequence3<double> *)local_1b8,param_4);
    }
    local_447[0] = false;
    UE::Geometry::ConvertComplexCollisionToMeshes
              (pIVar6,&local_3e8,(TTransformSequence3<double> *)local_1b8,local_447,true,true);
    FVar8 = local_118;
  }
  else {
    if (param_1 == (UObject *)0x0) {
LAB_14ceb6d8f:
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_438,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                          L"CopyCollisionMeshesFromObject_NoBodySetup",
                          L"CopyCollisionMeshesFromObject: BodySetup is null or Object type is not supported"
                         );
      UE::Geometry::AppendWarning(param_8,InvalidInputs,pFVar4);
      if ((ITextData *)local_438._s_0.X != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_438._s_0.X + 0x10))();
      }
      goto LAB_14ceb6dcb;
    }
    pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_14ceb6d8f;
      lVar7 = *(longlong *)&param_1[0xb].field_0x20;
    }
    else {
      lVar7 = (**(code **)(*(longlong *)param_1 + 0x800))(param_1);
    }
    if (lVar7 == 0) goto LAB_14ceb6d8f;
    local_108.Transforms.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
    local_108.Transforms.ArrayNum = 0;
    local_108.Transforms.ArrayMax = 2;
    uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
    uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
    uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
    uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
    if (param_3) {
      uVar9 = (param_4->Scale3D).ZW.m128d_f64[0];
      local_1a8 = (param_4->Rotation).ZW.m128d_f64[0];
      dStack_1a0 = (param_4->Rotation).ZW.m128d_f64[1];
      uVar10 = *(undefined4 *)(param_4->Scale3D).XY.m128d_f64;
      uVar11 = *(undefined4 *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 4);
      uVar12 = *(undefined4 *)((param_4->Scale3D).XY.m128d_f64 + 1);
      uVar13 = *(undefined4 *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 0xc);
      local_1b8._0_8_ = (param_4->Rotation).XY.m128d_f64[0];
      local_1b8._8_8_ = (param_4->Rotation).XY.m128d_f64[1];
      local_198 = (param_4->Translation).XY.m128d_f64[0];
      dStack_190 = (param_4->Translation).XY.m128d_f64[1];
      local_188 = (param_4->Translation).ZW.m128d_f64[0];
      dStack_180 = (param_4->Translation).ZW.m128d_f64[1];
      local_168 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      dStack_160 = 0.0;
      local_178[0] = UE::Math::TVector<double>::OneVector.field0_0x0._0_1_;
      local_178[1] = UE::Math::TVector<double>::OneVector.field0_0x0._1_1_;
      local_178[2] = UE::Math::TVector<double>::OneVector.field0_0x0._2_1_;
      local_178[3] = UE::Math::TVector<double>::OneVector.field0_0x0._3_1_;
      auStack_174[0] = UE::Math::TVector<double>::OneVector.field0_0x0._4_1_;
      auStack_174[1] = UE::Math::TVector<double>::OneVector.field0_0x0._5_1_;
      auStack_174[2] = UE::Math::TVector<double>::OneVector.field0_0x0._6_1_;
      auStack_174[3] = UE::Math::TVector<double>::OneVector.field0_0x0._7_1_;
      auStack_170[0] = UE::Math::TVector<double>::OneVector.field0_0x0._8_1_;
      auStack_170[1] = UE::Math::TVector<double>::OneVector.field0_0x0._9_1_;
      auStack_170[2] = UE::Math::TVector<double>::OneVector.field0_0x0._10_1_;
      auStack_170[3] = UE::Math::TVector<double>::OneVector.field0_0x0._11_1_;
      auStack_16c[0] = UE::Math::TVector<double>::OneVector.field0_0x0._12_1_;
      auStack_16c[1] = UE::Math::TVector<double>::OneVector.field0_0x0._13_1_;
      auStack_16c[2] = UE::Math::TVector<double>::OneVector.field0_0x0._14_1_;
      auStack_16c[3] = UE::Math::TVector<double>::OneVector.field0_0x0._15_1_;
      local_438._s_0.Z = (double)uVar9;
      UE::Geometry::TTransformSequence3<double>::Append(&local_108,(TTransform<double> *)local_1b8);
    }
    local_1b8._0_8_ = 0.0;
    dStack_190 = 0.0;
    local_438._4_4_ = uVar11;
    local_438._0_4_ = uVar10;
    local_438._12_4_ = uVar13;
    local_438._8_4_ = uVar12;
    local_438._s_0.Z = (double)uVar9;
    local_3f8 = (double)uVar9;
    UE::Geometry::ConvertSimpleCollisionToMeshes
              ((FKAggregateGeom *)(lVar7 + 0x38),&local_3e8,&local_108,param_7,true,true,
               (TFunction<void___cdecl(int,UE::Geometry::FDynamicMesh3_const_&)> *)local_1b8,false,
               (TVector<double> *)&local_438);
    FVar8 = local_108.Transforms.AllocatorInstance.SecondaryData;
  }
  if (FVar8 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  local_418 = &local_3e8;
  local_438._s_0.Y = (double)&local_418;
  local_438._s_0.X =
       (double)UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
  UDynamicMesh::EditMesh
            (param_2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_438,
             GeneralEdit,Unknown,false);
  *local_410 = Success;
LAB_14ceb6dcb:
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_3e8);
  return param_2;
}

// CopyMeshFromComponent @ 14ceb6e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::CopyMeshFromComponent
          (USceneComponent *param_1,UDynamicMesh *param_2,
          FGeometryScriptCopyMeshFromComponentOptions *param_3,bool param_4,
          TTransform<double> *param_5,EGeometryScriptOutcomePins *param_6,
          UGeometryScriptDebug *param_7)

{
  EGeometryScriptLODType EVar1;
  code *pcVar2;
  EGeometryScriptOutcomePins *pEVar3;
  bool bVar4;
  FText *pFVar5;
  UDynamicMesh *pUVar6;
  FTextFormat *pFVar7;
  FToMeshOptions local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FText local_268;
  FTextFormat local_258;
  FDynamicMesh3 local_248;
  
  pEVar3 = param_6;
  *param_6 = Failure;
  if (param_2 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_288,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                        L"CopyMeshFromComponent_InvalidInput",
                        L"CopyMeshFromComponent: ToDynamicMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar5);
    if (local_288.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  EVar1 = (param_3->RequestedLOD).LODType;
  local_2b8.LODIndex = (param_3->RequestedLOD).LODIndex;
  local_2b8.bUseClosestLOD = false;
  if (EVar1 != MaxAvailable) {
    if (EVar1 == HiResSourceModel) {
      local_2b8.LODType = HiResSourceModel;
      goto LAB_14ceb6eef;
    }
    if (EVar1 == SourceModel) {
      local_2b8.LODType = SourceModel;
      goto LAB_14ceb6eef;
    }
    if (EVar1 == RenderData) {
      local_2b8.LODType = RenderData;
      goto LAB_14ceb6eef;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\SceneUtilityFunctions.cpp"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UDynamicMesh *)(*pcVar2)();
      return pUVar6;
    }
  }
  local_2b8.LODType = MaxAvailable;
LAB_14ceb6eef:
  local_2b8.bWantNormals = param_3->bWantNormals;
  local_2b8.bWantTangents = param_3->bWantTangents;
  local_2b8.bWantInstanceColors = param_3->bWantInstanceColors;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248);
  FText::FText(&local_2a8);
  bVar4 = UE::Conversion::SceneComponentToDynamicMesh
                    (param_1,&local_2b8,param_4,&local_248,param_5,&local_2a8,
                     (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0,
                     (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0);
  if (bVar4) {
    UDynamicMesh::SetMesh(param_2,&local_248);
    *pEVar3 = Success;
  }
  else {
    local_298.TextData.Reference = local_2a8.TextData.Reference;
    if (local_2a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a8.TextData.Reference + 8))
                (local_2a8.TextData.Reference,&param_6);
    }
    local_298.Flags = local_2a8.Flags;
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_268,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                        L"CopyMeshFromComponent_ConversionError",L"CopyMeshFromComponent Error: {0}"
                       );
    pFVar7 = FTextFormat::FTextFormat(&local_258,pFVar5,Default);
    pFVar5 = FText::Format<FText>(&local_278,pFVar7,&local_298);
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar5);
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    if (local_268.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
    }
  }
  if (local_2a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
  return param_2;
}

// CreateDynamicMeshPool @ 14ceb7870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDynamicMeshPool * __cdecl UGeometryScriptLibrary_SceneUtilityFunctions::CreateDynamicMeshPool(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDynamicMeshPool *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDynamicMeshPool_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UDynamicMeshPool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// DetermineMeshOcclusion @ 14ceb88f0

void __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::DetermineMeshOcclusion
          (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_7,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_8,
          FGeometryScriptDetermineMeshOcclusionOptions *param_9,UGeometryScriptDebug *param_10)

{
  bool bVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 local_res8 [8];
  FText local_78;
  FDetectPerDynamicMeshExteriorVisibility local_68;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                        L"DetermineMeshOcclusion_SourceArrayMismatch",
                        L"DetermineMeshOcclusion: SourceMeshes and SourceMeshTransforms arrays must have same length"
                       );
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar2);
    if (local_78.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    return;
  }
  if (param_7->ArrayNum != param_8->ArrayNum) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                        L"DetermineMeshOcclusion_OccludeArrayMismatch",
                        L"DetermineMeshOcclusion: OccludeMeshes and OccludeMeshTransforms arrays must have same length"
                       );
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar2);
    if (local_78.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    return;
  }
  if (param_4->ArrayNum != param_5->ArrayNum) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                        L"DetermineMeshOcclusion_TransparentArrayMismatch",
                        L"DetermineMeshOcclusion: TransparentMeshes and TransparentMeshTransforms arrays must have same length"
                       );
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar2);
    if (local_78.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    return;
  }
  local_68.SamplingParameters.SamplingDensity = __real_3ff0000000000000;
  local_68.Instances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Instances.ArrayNum = 0;
  local_68.Instances.ArrayMax = 0;
  local_68.OccludeInstances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.OccludeInstances.ArrayNum = 0;
  local_68.OccludeInstances.ArrayMax = 0;
  local_68.TransparentInstances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.TransparentInstances.ArrayNum = 0;
  local_68.TransparentInstances.ArrayMax = 0;
  local_68.SamplingParameters.bDoubleSided = false;
  local_68.SamplingParameters.NumSearchDirections = 0x80;
  local_68.SamplingParameters.bMarkDegenerateAsVisible = true;
  bVar1 = `UGeometryScriptLibrary_SceneUtilityFunctions::DetermineMeshOcclusion'::__l2::<lambda_1>::
          operator()(local_res8,param_1,param_2,&local_68.Instances);
  if (bVar1) {
    bVar1 = `UGeometryScriptLibrary_SceneUtilityFunctions::DetermineMeshOcclusion'::__l2::<lambda_1>
            ::operator()(local_res8,param_7,param_8,&local_68.OccludeInstances);
    if (bVar1) {
      bVar1 = `UGeometryScriptLibrary_SceneUtilityFunctions::DetermineMeshOcclusion'::__l2::
              <lambda_1>::operator()(local_res8,param_4,param_5,&local_68.TransparentInstances);
      if (bVar1) {
        local_68.SamplingParameters.bDoubleSided = param_9->bDoubleSided;
        local_68.SamplingParameters.SamplingDensity = param_9->SamplingDensity;
        local_68.SamplingParameters.NumSearchDirections = param_9->NumSearchDirections;
        UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden
                  (&local_68,param_3,param_6);
        goto LAB_14ceb8b18;
      }
      pwVar4 = L"DetermineMeshOcclusion: TransparentMeshes array contained null mesh";
      pwVar3 = L"DetermineMeshOcclusion_InvalidTransparentMesh";
    }
    else {
      pwVar4 = L"DetermineMeshOcclusion: OccludeMeshes array contained null mesh";
      pwVar3 = L"DetermineMeshOcclusion_InvalidOccludeMesh";
    }
  }
  else {
    pwVar4 = L"DetermineMeshOcclusion: SourceMeshes array contained null mesh";
    pwVar3 = L"DetermineMeshOcclusion_InvalidSourceMesh";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UGeometryScriptLibrary_SceneUtilityFunctions",pwVar3,pwVar4);
  UE::Geometry::AppendError(param_10,InvalidInputs,pFVar2);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
LAB_14ceb8b18:
  DestructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
            ((FDynamicMeshInstance *)local_68.TransparentInstances.AllocatorInstance.Data,
             local_68.TransparentInstances.ArrayNum);
  if ((FDynamicMeshInstance *)local_68.TransparentInstances.AllocatorInstance.Data !=
      (FDynamicMeshInstance *)0x0) {
    FMemory::Free(local_68.TransparentInstances.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
            ((FDynamicMeshInstance *)local_68.OccludeInstances.AllocatorInstance.Data,
             local_68.OccludeInstances.ArrayNum);
  if ((FDynamicMeshInstance *)local_68.OccludeInstances.AllocatorInstance.Data !=
      (FDynamicMeshInstance *)0x0) {
    FMemory::Free(local_68.OccludeInstances.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
            ((FDynamicMeshInstance *)local_68.Instances.AllocatorInstance.Data,
             local_68.Instances.ArrayNum);
  if ((FDynamicMeshInstance *)local_68.Instances.AllocatorInstance.Data !=
      (FDynamicMeshInstance *)0x0) {
    FMemory::Free(local_68.Instances.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14cebd1f0

UClass * __cdecl UGeometryScriptLibrary_SceneUtilityFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_SceneUtilityFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_SceneUtilityFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_SceneUtilityFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_SceneUtilityFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions.InnerSingleton;
}

// SetComponentMaterialList @ 14cec2120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::SetComponentMaterialList
          (UPrimitiveComponent *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          UGeometryScriptDebug *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FText *pFVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FText local_18;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                        L"SetComponentMaterialList_InvalidInput1",
                        L"SetComponentMaterialList: FromStaticMeshAsset is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar4);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    iVar5 = param_2->ArrayNum;
    uVar6 = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        pcVar1 = *(code **)(*(longlong *)param_1 + 0x6b8);
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (*pcVar1)(param_1,uVar6,*(undefined8 *)((param_2->AllocatorInstance).Data + lVar7));
        iVar5 = param_2->ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// StaticRegisterNativesUGeometryScriptLibrary_SceneUtilityFunctions @ 14cec2840

void __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::
StaticRegisterNativesUGeometryScriptLibrary_SceneUtilityFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyCollisionMeshesFromObject @ 14cec84d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::execCopyCollisionMeshesFromObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  TTransform<double> *pTVar3;
  FProperty *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  UGeometryScriptDebug *pUVar18;
  UDynamicMesh *this;
  USkeletalMeshComponent *this_00;
  char cVar19;
  FText *pFVar20;
  UClass *pUVar21;
  IInterface_CollisionDataProvider *pIVar22;
  USkeletalMesh *this_01;
  longlong lVar23;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar24;
  undefined8 uVar25;
  TTransform<double> *pTVar26;
  uchar *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_518 [32];
  uchar local_4c8;
  bool local_4c7;
  char local_4c6;
  int local_4c4;
  int local_4c0;
  int local_4bc;
  TVector<double>_u_0 local_4b8;
  int local_498;
  UGeometryScriptDebug *local_490;
  UDynamicMesh *local_488;
  USkeletalMeshComponent *local_480 [2];
  FDynamicMesh3 *local_470 [3];
  double local_458;
  FDynamicMesh3 local_448;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  uchar local_1d8 [4];
  uchar auStack_1d4 [4];
  uchar auStack_1d0 [4];
  uchar auStack_1cc [4];
  double local_1c8;
  double dStack_1c0;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> local_178;
  int local_170;
  int local_16c;
  TTransform<double> local_168;
  TTransformSequence3<double> local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_480[0] = (USkeletalMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_480,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_480);
  }
  local_488 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_488,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_488);
  }
  local_4c4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4c4,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4c4);
  }
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar15 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar16 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_4c6 = local_4c4 != 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_168.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_168.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_168.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_168.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
  local_168.Rotation.ZW.m128d_f64[0] = (double)fVar11;
  local_168.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_168.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_168.Translation.XY.m128d_f64[0] = (double)fVar6;
  local_168.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_168.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar15,0);
  local_168.Translation.ZW.m128d_f64[0] = (double)fVar12;
  local_168.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  local_168.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_168.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_168.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_168.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar16,0);
  local_168.Scale3D.ZW.m128d_f64[0] = (double)fVar13;
  local_168.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pTVar3 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  local_4c8 = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar26 = &local_168;
  if (pTVar3 != (TTransform<double> *)0x0) {
    pTVar26 = pTVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4c8);
  }
  local_4c0 = 0;
  puVar27 = &local_4c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar27 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4c0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4c0);
  }
  local_4c7 = local_4c0 != 0;
  local_4bc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4bc,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4bc);
  }
  local_490 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_490,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_490);
  }
  this_00 = local_480[0];
  this = local_488;
  pUVar18 = local_490;
  iVar2 = local_4bc;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar27 = '\0';
  local_498 = iVar2;
  if (this == (UDynamicMesh *)0x0) {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_4b8._s_0,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                         L"CopyCollisionMeshesFromObject_InvalidInput",
                         L"CopyCollisionMeshesFromObject: ToDynamicMesh is Null");
    UE::Geometry::AppendError(pUVar18,InvalidInputs,pFVar20);
    if ((longlong *)local_4b8._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_4b8._s_0.X + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_448);
  local_470[0] = &local_448;
  local_4b8._s_0.Y = (double)local_470;
  local_4b8._s_0.X =
       (double)UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
  UDynamicMesh::ProcessMesh
            (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_4b8._s_0
            );
  *&(pTVar26->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(pTVar26->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(pTVar26->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(pTVar26->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(pTVar26->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(pTVar26->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar21 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar21->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar21->_padding_)) {
      dVar17 = (double)this_00->_padding_;
      (pTVar26->Rotation).XY.m128d_f64[0] = (double)this_00->_padding_;
      (pTVar26->Rotation).XY.m128d_f64[1] = dVar17;
      dVar17 = (double)this_00->_padding_;
      (pTVar26->Rotation).ZW.m128d_f64[0] = (double)this_00->_padding_;
      (pTVar26->Rotation).ZW.m128d_f64[1] = dVar17;
      dVar17 = (double)this_00->_padding_;
      (pTVar26->Translation).XY.m128d_f64[0] = (double)this_00->_padding_;
      (pTVar26->Translation).XY.m128d_f64[1] = dVar17;
      dVar17 = (double)this_00->_padding_;
      (pTVar26->Translation).ZW.m128d_f64[0] = (double)this_00->_padding_;
      (pTVar26->Translation).ZW.m128d_f64[1] = dVar17;
      dVar17 = (double)this_00->_padding_;
      (pTVar26->Scale3D).XY.m128d_f64[0] = (double)this_00->_padding_;
      (pTVar26->Scale3D).XY.m128d_f64[1] = dVar17;
      dVar17 = (double)this_00->_padding_;
      (pTVar26->Scale3D).ZW.m128d_f64[0] = (double)this_00->_padding_;
      (pTVar26->Scale3D).ZW.m128d_f64[1] = dVar17;
    }
  }
  if (local_4c7 == false) {
    if (this_00 == (USkeletalMeshComponent *)0x0) {
LAB_14cec8bdd:
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)&local_4b8._s_0,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                           L"CopyCollisionMeshesFromObject_NoBodySetup",
                           L"CopyCollisionMeshesFromObject: BodySetup is null or Object type is not supported"
                          );
      UE::Geometry::AppendWarning(pUVar18,InvalidInputs,pFVar20);
LAB_14cec8c09:
      if ((code *)local_4b8._s_0.X != (code *)0x0) {
        (**(code **)(*(longlong *)local_4b8._s_0.X + 0x10))();
      }
      goto LAB_14cec8c19;
    }
    pUVar21 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar2 = (int)pUVar21->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar21->_padding_)) {
      pUVar21 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar2 = (int)pUVar21->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar21->_padding_)) goto LAB_14cec8bdd;
      lVar23 = this_00->_padding_;
    }
    else {
      lVar23 = (**(code **)(this_00->_padding_ + 0x800))(this_00);
    }
    if (lVar23 == 0) goto LAB_14cec8bdd;
    local_108.Transforms.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
    local_108.Transforms.ArrayNum = 0;
    local_108.Transforms.ArrayMax = 2;
    uVar25 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar28 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
    uVar29 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
    uVar30 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
    uVar31 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
    if (local_4c6 != '\0') {
      uVar25 = (pTVar26->Scale3D).ZW.m128d_f64[0];
      local_208 = (pTVar26->Rotation).ZW.m128d_f64[0];
      dStack_200 = (pTVar26->Rotation).ZW.m128d_f64[1];
      uVar28 = *(undefined4 *)(pTVar26->Scale3D).XY.m128d_f64;
      uVar29 = *(undefined4 *)((longlong)(pTVar26->Scale3D).XY.m128d_f64 + 4);
      uVar30 = *(undefined4 *)((pTVar26->Scale3D).XY.m128d_f64 + 1);
      uVar31 = *(undefined4 *)((longlong)(pTVar26->Scale3D).XY.m128d_f64 + 0xc);
      local_218._0_8_ = (pTVar26->Rotation).XY.m128d_f64[0];
      local_218._8_8_ = (pTVar26->Rotation).XY.m128d_f64[1];
      local_1f8 = (pTVar26->Translation).XY.m128d_f64[0];
      dStack_1f0 = (pTVar26->Translation).XY.m128d_f64[1];
      local_1e8 = (pTVar26->Translation).ZW.m128d_f64[0];
      dStack_1e0 = (pTVar26->Translation).ZW.m128d_f64[1];
      local_1c8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      dStack_1c0 = 0.0;
      local_1d8[0] = UE::Math::TVector<double>::OneVector.field0_0x0._0_1_;
      local_1d8[1] = UE::Math::TVector<double>::OneVector.field0_0x0._1_1_;
      local_1d8[2] = UE::Math::TVector<double>::OneVector.field0_0x0._2_1_;
      local_1d8[3] = UE::Math::TVector<double>::OneVector.field0_0x0._3_1_;
      auStack_1d4[0] = UE::Math::TVector<double>::OneVector.field0_0x0._4_1_;
      auStack_1d4[1] = UE::Math::TVector<double>::OneVector.field0_0x0._5_1_;
      auStack_1d4[2] = UE::Math::TVector<double>::OneVector.field0_0x0._6_1_;
      auStack_1d4[3] = UE::Math::TVector<double>::OneVector.field0_0x0._7_1_;
      auStack_1d0[0] = UE::Math::TVector<double>::OneVector.field0_0x0._8_1_;
      auStack_1d0[1] = UE::Math::TVector<double>::OneVector.field0_0x0._9_1_;
      auStack_1d0[2] = UE::Math::TVector<double>::OneVector.field0_0x0._10_1_;
      auStack_1d0[3] = UE::Math::TVector<double>::OneVector.field0_0x0._11_1_;
      auStack_1cc[0] = UE::Math::TVector<double>::OneVector.field0_0x0._12_1_;
      auStack_1cc[1] = UE::Math::TVector<double>::OneVector.field0_0x0._13_1_;
      auStack_1cc[2] = UE::Math::TVector<double>::OneVector.field0_0x0._14_1_;
      auStack_1cc[3] = UE::Math::TVector<double>::OneVector.field0_0x0._15_1_;
      local_4b8._s_0.Z = (double)uVar25;
      UE::Geometry::TTransformSequence3<double>::Append(&local_108,(TTransform<double> *)local_218);
    }
    local_218._0_8_ = 0.0;
    dStack_1f0 = 0.0;
    local_4b8._4_4_ = uVar29;
    local_4b8._0_4_ = uVar28;
    local_4b8._12_4_ = uVar31;
    local_4b8._8_4_ = uVar30;
    local_4b8._s_0.Z = (double)uVar25;
    local_458 = (double)uVar25;
    UE::Geometry::ConvertSimpleCollisionToMeshes
              ((FKAggregateGeom *)(lVar23 + 0x38),&local_448,&local_108,local_498,true,true,
               (TFunction<void___cdecl(int,UE::Geometry::FDynamicMesh3_const_&)> *)local_218,false,
               (TVector<double> *)&local_4b8._s_0);
    FVar24 = local_108.Transforms.AllocatorInstance.SecondaryData;
  }
  else {
    if (this_00 == (USkeletalMeshComponent *)0x0) {
      pIVar22 = (IInterface_CollisionDataProvider *)0x0;
LAB_14cec892f:
      if (this_00 != (USkeletalMeshComponent *)0x0) {
        pUVar21 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar2 = (int)pUVar21->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar21->_padding_)) {
          this_01 = (USkeletalMesh *)this_00->_padding_;
          if (this_01 != (USkeletalMesh *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            goto LAB_14cec8918;
          }
LAB_14cec8976:
          pIVar22 = (IInterface_CollisionDataProvider *)0x0;
        }
      }
LAB_14cec8978:
      if (pIVar22 == (IInterface_CollisionDataProvider *)0x0) {
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            ((FText *)&local_4b8._s_0,
                             L"UGeometryScriptLibrary_SceneUtilityFunctions",
                             L"CopyCollisionMeshesFromObject_NoCollisionProvider",
                             L"CopyCollisionMeshesFromObject: Complex Collision Provider is not available for this object type"
                            );
        UE::Geometry::AppendError(pUVar18,InvalidInputs,pFVar20);
        goto LAB_14cec8c09;
      }
    }
    else {
      pUVar21 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
      pIVar22 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar21);
      if ((pIVar22 == (IInterface_CollisionDataProvider *)0x0) ||
         (cVar19 = (**(code **)((longlong)*pIVar22 + 0x20))(pIVar22,1), cVar19 == '\0')) {
        pUVar21 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar2 = (int)pUVar21->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar21->_padding_)) goto LAB_14cec892f;
        this_01 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
        if (this_01 == (USkeletalMesh *)0x0) goto LAB_14cec8976;
LAB_14cec8918:
        pUVar21 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
        pIVar22 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar21);
        goto LAB_14cec8978;
      }
    }
    local_16c = 2;
    local_178 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
    local_170 = 0;
    if (local_4c6 != '\0') {
      UE::Geometry::TTransformSequence3<double>::Append
                ((TTransformSequence3<double> *)local_218,pTVar26);
    }
    local_4c7 = false;
    UE::Geometry::ConvertComplexCollisionToMeshes
              (pIVar22,&local_448,(TTransformSequence3<double> *)local_218,&local_4c7,true,true);
    FVar24 = local_178;
  }
  if (FVar24 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    FMemory::Free((void *)FVar24);
  }
  local_470[0] = &local_448;
  local_4b8._s_0.Y = (double)local_470;
  local_4b8._s_0.X =
       (double)UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
  UDynamicMesh::EditMesh
            (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_4b8._s_0,
             GeneralEdit,Unknown,false);
  *puVar27 = '\x01';
LAB_14cec8c19:
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_448);
  *(UDynamicMesh **)param_3 = this;
  return;
}

// execCopyMeshFromComponent @ 14cec8c60

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::execCopyMeshFromComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TTransform<double> *pTVar1;
  FProperty *pFVar2;
  code *pcVar3;
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
  int iVar14;
  UGeometryScriptDebug *pUVar15;
  UDynamicMesh *this;
  USceneComponent *pUVar16;
  bool bVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  TTransform<double> *pTVar20;
  uchar *puVar21;
  bool bVar22;
  undefined1 auStackY_3d8 [32];
  uchar local_398 [4];
  int local_394;
  undefined2 local_390;
  undefined1 uStack_38e;
  undefined1 uStack_38d;
  undefined4 uStack_38c;
  int iStack_388;
  FToMeshOptions local_380;
  UGeometryScriptDebug *local_370;
  UDynamicMesh *local_368;
  USceneComponent *local_360;
  undefined8 local_358;
  int local_350;
  FText local_348;
  undefined1 local_338 [8];
  FText local_330;
  FText local_320;
  FText local_310;
  FText local_300;
  FTextFormat local_2f0;
  FDynamicMesh3 local_2d8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_360 = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_360,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_360);
  }
  local_368 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_368,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_368);
  }
  local_390 = 0x101;
  uStack_38c = 0;
  iStack_388 = 0;
  uStack_38e = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_390,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_390);
  }
  local_394 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_394,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_394);
  }
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  bVar22 = local_394 != 0;
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_a8.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar4;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar5;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pTVar1 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  local_398[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar20 = &local_a8;
  if (pTVar1 != (TTransform<double> *)0x0) {
    pTVar20 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_398,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_398);
  }
  local_370 = (UGeometryScriptDebug *)0x0;
  puVar21 = local_398;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar21 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_370,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_370);
  }
  pUVar16 = local_360;
  this = local_368;
  pUVar15 = local_370;
  iVar14 = iStack_388;
  local_358 = CONCAT44(uStack_38c,CONCAT13(uStack_38d,CONCAT12(uStack_38e,local_390)));
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_350 = iStack_388;
  *puVar21 = '\0';
  if (this == (UDynamicMesh *)0x0) {
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_320,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                         L"CopyMeshFromComponent_InvalidInput",
                         L"CopyMeshFromComponent: ToDynamicMesh is Null");
    UE::Geometry::AppendError(pUVar15,InvalidInputs,pFVar18);
    if (local_320.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_320.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_380.bUseClosestLOD = false;
  local_380.LODIndex = iVar14;
  if (local_358._4_1_ != '\0') {
    if (local_358._4_1_ == '\x01') {
      local_380.LODType = HiResSourceModel;
      goto LAB_14cec8fc8;
    }
    if (local_358._4_1_ == '\x02') {
      local_380.LODType = SourceModel;
      goto LAB_14cec8fc8;
    }
    if (local_358._4_1_ == '\x03') {
      local_380.LODType = RenderData;
      goto LAB_14cec8fc8;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\SceneUtilityFunctions.cpp"
                        ,0x4c,L"");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_380.LODType = MaxAvailable;
LAB_14cec8fc8:
  local_380.bWantNormals = (bool)(undefined1)local_358;
  local_380.bWantTangents = (bool)local_358._1_1_;
  local_380.bWantInstanceColors = (bool)local_358._2_1_;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2d8);
  FText::FText(&local_348);
  bVar22 = UE::Conversion::SceneComponentToDynamicMesh
                     (pUVar16,&local_380,bVar22,&local_2d8,pTVar20,&local_348,
                      (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0,
                      (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0);
  if (bVar22) {
    UDynamicMesh::SetMesh(this,&local_2d8);
    *puVar21 = '\x01';
  }
  else {
    local_330.TextData.Reference = local_348.TextData.Reference;
    if (local_348.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_348.TextData.Reference + 8))
                (local_348.TextData.Reference,local_338);
    }
    local_330.Flags = local_348.Flags;
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_300,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                         L"CopyMeshFromComponent_ConversionError",
                         L"CopyMeshFromComponent Error: {0}");
    pFVar19 = FTextFormat::FTextFormat(&local_2f0,pFVar18,Default);
    pFVar18 = FText::Format<FText>(&local_310,pFVar19,&local_330);
    UE::Geometry::AppendError(pUVar15,InvalidInputs,pFVar18);
    if (local_310.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
    }
    if (local_300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
    }
  }
  if (local_348.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2d8);
  *(UDynamicMesh **)param_3 = this;
  return;
}

// execCreateDynamicMeshPool @ 14cec9d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::execCreateDynamicMeshPool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDynamicMeshPool_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(UObject **)param_3 = pUVar1;
  return;
}

// execDetermineMeshOcclusion @ 14ceca670

void __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::execDetermineMeshOcclusion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptDetermineMeshOcclusionOptions *pFVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UGeometryScriptDebug *local_res10 [2];
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *local_res20;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_d8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_c8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_a8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_98;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_88;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_78;
  FGeometryScriptDetermineMeshOcclusionOptions local_68;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_58;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_50;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *local_48;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_48 = &local_78;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_48 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_50 = &local_88;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_50 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
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
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  local_58 = &local_98;
  if ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    local_58 = (TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_res20 = &local_a8;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res20 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
                  param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  pTVar4 = &local_b8;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  pTVar3 = &local_c8;
  if ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  pTVar6 = &local_d8;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_68.SamplingDensity = __real_3ff0000000000000;
  pTVar5 = &local_e8;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_68.bDoubleSided = false;
  local_68.NumSearchDirections = 0x80;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = (UGeometryScriptDebug *)0x0;
  pFVar2 = &local_68;
  if ((FGeometryScriptDetermineMeshOcclusionOptions *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptDetermineMeshOcclusionOptions *)0x0) {
    pFVar2 = (FGeometryScriptDetermineMeshOcclusionOptions *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DetermineMeshOcclusion
            (local_48,local_50,local_58,local_res20,pTVar4,pTVar3,pTVar6,pTVar5,pFVar2,
             local_res10[0]);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execSetComponentMaterialList @ 14ced8110

void __cdecl
UGeometryScriptLibrary_SceneUtilityFunctions::execSetComponentMaterialList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UGeometryScriptDebug *pUVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  void **ppvVar12;
  ulonglong uVar13;
  UGeometryScriptDebug *local_res10 [2];
  longlong *local_res20;
  void *local_48;
  undefined8 local_40;
  FText local_38;
  
  uVar11 = 0;
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = (UGeometryScriptDebug *)0x0;
  ppvVar12 = &local_48;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar12 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar5 = local_res20;
  pUVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_SceneUtilityFunctions",
                        L"SetComponentMaterialList_InvalidInput1",
                        L"SetComponentMaterialList: FromStaticMeshAsset is Null");
    UE::Geometry::AppendError(pUVar4,InvalidInputs,pFVar8);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
    iVar9 = *(int *)(ppvVar12 + 1);
    uVar13 = uVar11;
    if (0 < iVar9) {
      do {
        uVar10 = (uint)uVar11;
        pcVar3 = *(code **)(*plVar5 + 0x6b8);
        uVar7 = 0;
        if ((int)uVar10 < iVar9) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*pcVar3)(plVar5,uVar11,*(undefined8 *)((longlong)*ppvVar12 + uVar13));
        iVar9 = *(int *)(ppvVar12 + 1);
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar13 = uVar13 + 8;
      } while ((int)(uVar10 + 1) < iVar9);
    }
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

