// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 43

// StaticClass @ 14cd94f10

UClass * __cdecl UGeometryScriptLibrary_MeshBakeFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshBakeFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshBakeFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshBakeFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshBakeFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshBakeFunctions @ 14cda5e20

UGeometryScriptLibrary_MeshBakeFunctions * __thiscall
UGeometryScriptLibrary_MeshBakeFunctions::UGeometryScriptLibrary_MeshBakeFunctions
          (UGeometryScriptLibrary_MeshBakeFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBakeFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshBakeFunctions @ 14cda5e50

UGeometryScriptLibrary_MeshBakeFunctions * __thiscall
UGeometryScriptLibrary_MeshBakeFunctions::UGeometryScriptLibrary_MeshBakeFunctions
          (UGeometryScriptLibrary_MeshBakeFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBakeFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshBakeFunctions @ 14cda6a40

void __thiscall
UGeometryScriptLibrary_MeshBakeFunctions::~UGeometryScriptLibrary_MeshBakeFunctions
          (UGeometryScriptLibrary_MeshBakeFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBakeFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdba140

bool __thiscall
`UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures'::__l2::<lambda_2>::
operator()(void *this)

{
  float fVar1;
  float fVar2;
  FDynamicMeshAttributeSet *pFVar3;
  longlong lVar4;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar5;
  FDynamicMeshAttributeSet *this_00;
  ulonglong uVar6;
  uint uVar7;
  FDynamicMeshAttributeSet *pFVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pFVar8 = (FDynamicMeshAttributeSet *)0x0;
  pFVar3 = *(FDynamicMeshAttributeSet **)(*(longlong *)(**(longlong **)this + 0xb8) + 0x208);
  this_00 = pFVar8;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar3;
  }
  pTVar5 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                     (this_00,**(int **)((longlong)this + 8));
  uVar9 = *(int *)&pTVar5->field_0xc + *(int *)&pTVar5->field_0x8 * 0x200;
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar5->field_0x10 - 1U))) {
    pFVar8 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar7 = 1;
    if ((int)uVar9 < 2) goto LAB_14cdba1f9;
    do {
      uVar6 = (ulonglong)((uint)pFVar8 & 0x1ff);
      lVar4 = (*(undefined8 **)&pTVar5->field_0x10)[(ulonglong)pFVar8 >> 9];
      if ((*(short *)(lVar4 + uVar6 * 2) != 0) && (*(short *)(lVar4 + uVar6 * 2) != -1)) break;
      uVar7 = (uint)pFVar8 + 1;
      pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar9);
  }
  uVar7 = (uint)pFVar8;
LAB_14cdba1f9:
  if (uVar7 != uVar9) {
    fVar10 = __real_7f7fffff;
    fVar11 = __real_ff7fffff;
    fVar12 = __real_ff7fffff;
    fVar13 = __real_7f7fffff;
LAB_14cdba210:
    do {
      uVar7 = (uint)pFVar8;
      fVar1 = *(float *)(*(longlong *)
                          (*(longlong *)&pTVar5->field_0x48 +
                          (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
      fVar2 = *(float *)(*(longlong *)
                          (*(longlong *)&pTVar5->field_0x48 +
                          (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
      if (fVar1 < fVar13) {
        fVar13 = fVar1;
      }
      if (fVar12 < fVar1) {
        fVar12 = fVar1;
      }
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
      }
      if (fVar11 < fVar2) {
        fVar11 = fVar2;
      }
      uVar7 = uVar7 + 1;
      pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
      if ((int)uVar7 < (int)uVar9) {
        do {
          uVar6 = (ulonglong)((uint)pFVar8 & 0x1ff);
          lVar4 = *(longlong *)(*(longlong *)&pTVar5->field_0x10 + ((ulonglong)pFVar8 >> 9) * 8);
          if ((*(short *)(lVar4 + uVar6 * 2) != 0) && (*(short *)(lVar4 + uVar6 * 2) != -1))
          goto LAB_14cdba210;
          uVar7 = (uint)pFVar8 + 1;
          pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
        } while ((int)uVar7 < (int)uVar9);
      }
    } while (uVar7 != uVar9);
    if ((fVar13 == fVar12) && (fVar10 == fVar11)) {
      return true;
    }
  }
  return false;
}

// BakeTexture @ 14cdc4e80

TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::BakeTexture
          (TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UDynamicMesh *param_1,TTransform<double> *param_2,
          FGeometryScriptBakeTargetMeshOptions param_3,UDynamicMesh *param_4,
          TTransform<double> *param_5,FGeometryScriptBakeSourceMeshOptions *param_6,
          TArray<FGeometryScriptBakeTypeOptions,TSizedDefaultAllocator<32>_> *param_7,
          FGeometryScriptBakeTextureOptions *param_8,UGeometryScriptDebug *param_9)

{
  UGeometryScriptDebug *pUVar1;
  TObjectPtr<UTexture2D>_u_0 local_128;
  int local_120;
  EGeometryScriptBakeNormalSpace local_11c;
  TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> local_118;
  UTexture2D *local_108;
  EGeometryScriptBakeFilteringType local_100;
  float local_fc;
  undefined1 local_f8;
  TObjectPtr<UTexture2D>_u_0 local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
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
  
  local_118.AllocatorInstance.Data._0_1_ = param_8->Resolution;
  local_118.AllocatorInstance.Data._1_1_ = param_8->BitDepth;
  local_108 = (param_8->SampleFilterMask).field0_0x0.DebugPtr;
  local_118.AllocatorInstance.Data._4_4_ = param_8->GutterSize;
  local_118.ArrayNum._0_1_ = param_8->SamplesPerPixel;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_108 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_108);
  }
  local_100 = param_8->FilteringType;
  local_fc = param_8->ProjectionDistance;
  local_f8 = param_8->bProjectionInWorldSpace;
  local_128 = (TObjectPtr<UTexture2D>_u_0)(param_6->SourceNormalMap).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_128.DebugPtr != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_128.DebugPtr);
  }
  local_120 = param_6->SourceNormalUVLayer;
  local_11c = param_6->SourceNormalSpace;
  local_e8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_5->Rotation).XY.m128d_f64[0];
  dStack_e0 = (param_5->Rotation).XY.m128d_f64[1];
  local_d8 = (param_5->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (param_5->Rotation).ZW.m128d_f64[1];
  local_c8 = (param_5->Translation).XY.m128d_f64[0];
  dStack_c0 = (param_5->Translation).XY.m128d_f64[1];
  local_b8 = (param_5->Translation).ZW.m128d_f64[0];
  dStack_b0 = (param_5->Translation).ZW.m128d_f64[1];
  local_a8 = (param_5->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (param_5->Scale3D).XY.m128d_f64[1];
  local_98 = (param_5->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (param_5->Scale3D).ZW.m128d_f64[1];
  local_88 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_80 = (param_2->Rotation).XY.m128d_f64[1];
  local_78 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
  local_68 = (param_2->Translation).XY.m128d_f64[0];
  dStack_60 = (param_2->Translation).XY.m128d_f64[1];
  local_58 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
  local_48 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
  local_38 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_30 = (param_2->Scale3D).ZW.m128d_f64[1];
  GeometryScriptBakeLocals::BakeTextureImpl
            ((UDynamicMesh *)&param_9,(TTransform<double> *)param_1,
             (FGeometryScriptBakeTargetMeshOptions)(int)&local_88,
             (UDynamicMesh *)(ulonglong)(uint)param_3.TargetUVLayer,(TTransform<double> *)param_4,
             (FGeometryScriptBakeSourceMeshOptions *)&local_e8.ObjectPtr,
             (TArray<FGeometryScriptBakeTypeOptions,TSizedDefaultAllocator<32>_> *)
             &local_128.ObjectPtr,(FGeometryScriptBakeTextureOptions *)param_7,&local_118);
  pUVar1 = param_9;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GeometryScriptBakeLocals::GetTexturesFromBaker
            ((FMeshMapBaker *)param_9,param_8->BitDepth,__return_storage_ptr__);
  if (pUVar1 != (UGeometryScriptDebug *)0x0) {
    (**(code **)pUVar1->_padding_)(pUVar1,1);
  }
  return __return_storage_ptr__;
}

// BakeTextureFromRenderCaptures @ 14cdc5080

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

FGeometryScriptRenderCaptureTextures * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures
          (FGeometryScriptRenderCaptureTextures *__return_storage_ptr__,UDynamicMesh *param_1,
          TTransform<double> *param_2,FGeometryScriptBakeTargetMeshOptions param_3,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_4,
          FGeometryScriptBakeRenderCaptureOptions *param_5,UGeometryScriptDebug *param_6)

{
  FScriptContainerElement *pFVar1;
  TFrame3<double> *this;
  undefined1 uVar2;
  EGeometryScriptBakeSamplesPerPixel EVar3;
  int iVar4;
  UObject *pUVar5;
  FDynamicMeshAttributeSet *pFVar6;
  FDynamicMesh3 *pFVar7;
  code *pcVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  TUniquePtr<UE::Geometry::FSceneCapturePhotoSet,TDefaultDelete<UE::Geometry::FSceneCapturePhotoSet>_>
  TVar13;
  undefined8 uVar14;
  UTexture2D *pUVar15;
  UTexture2D *pUVar16;
  UTexture2D *pUVar17;
  UTexture2D *pUVar18;
  bool bVar19;
  int iVar20;
  FGeometryScriptRenderCaptureTextures *pFVar21;
  FText *pFVar22;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar23;
  FDynamicMeshTangents *this_00;
  FSceneCapturePhotoSet *this_01;
  FDynamicMeshAttributeSet *pFVar24;
  FGeometryScriptBakeRenderCaptureOptions *pFVar25;
  FRenderCaptureTypeFlags *pFVar26;
  FImageDimensions FVar27;
  UWorld *pUVar28;
  FImageDimensions *pFVar29;
  TReferenceControllerBase<1> *pTVar30;
  UTexture2D *pUVar31;
  longlong lVar32;
  FDynamicMeshAttributeSet *this_02;
  longlong *plVar33;
  FScriptContainerElement *pFVar34;
  EBakeTextureSamplesPerPixel EVar35;
  undefined4 uVar36;
  UTexture2D *pUVar37;
  FScriptContainerElement *pFVar38;
  TMeshTangents<double> *this_03;
  double extraout_XMM0_Qa;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  EBakeTextureResolution local_res20 [2];
  undefined1 auStackY_7e8 [32];
  undefined4 in_stack_fffffffffffff864;
  undefined1 local_788;
  bool local_787;
  undefined1 local_786;
  undefined1 local_785;
  undefined1 local_784;
  undefined1 local_783;
  undefined1 local_782;
  undefined1 local_781;
  bool local_780;
  bool bStack_77f;
  UDynamicMesh *local_778;
  UWorld *local_770;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_768;
  TUniquePtr<UE::Geometry::FSceneCapturePhotoSet,TDefaultDelete<UE::Geometry::FSceneCapturePhotoSet>_>
  local_758;
  UTexture2D *local_750;
  TArray<UE::Geometry::FSpatialPhotoParams,TSizedDefaultAllocator<32>_> local_748;
  UObject *local_738;
  undefined8 local_730;
  UTexture2D *local_728;
  int local_720;
  uint uStack_71c;
  double dStack_718;
  double dStack_710;
  FRenderCaptureTypeFlags FStack_708;
  undefined6 uStack_6fe;
  undefined1 local_6f8 [24];
  double dStack_6e0;
  double local_6d8;
  ForAnyElementType FStack_6d0;
  double local_6c8;
  double dStack_6c0;
  ForAnyElementType local_6b8;
  double dStack_6b0;
  undefined8 local_6a8;
  UTexture2D *pUStack_6a0;
  TObjectPtr<UTexture2D>_u_0 local_698;
  UDynamicMesh **local_690;
  TTransform<double> *local_688;
  FRenderCaptureTextures local_678;
  undefined1 local_628 [16];
  FRenderCaptureTypeFlags local_618;
  ForAnyElementType local_608 [2];
  FGeometryScriptBakeRenderCaptureOptions *local_5f8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_5f0;
  undefined1 local_5e8 [40];
  TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> local_5c0;
  TArray<UE::Geometry::FSpatialPhotoParams,TSizedDefaultAllocator<32>_> local_5b0;
  undefined1 local_5a0 [16];
  UDynamicMesh **local_590;
  ForAnyElementType local_588;
  <lambda_3> local_580;
  TQuaternion<double>_u_0 local_570;
  TVector<double>_u_0 local_550;
  TVector<double>_u_0 local_538;
  TVector<double>_u_0 local_520;
  TQuaternion<double>_u_0 local_508;
  FText local_4e8;
  undefined1 local_4d8 [8];
  double local_4d0;
  ForAnyElementType FStack_4c8;
  double local_4c0;
  ForAnyElementType local_4b8;
  double dStack_4b0;
  double local_4a8;
  TVector<double>_u_0 local_4a0;
  FImageDimensions local_488;
  FText local_480;
  FText local_470;
  FText local_460;
  FText local_450;
  TQuaternion<double>_u_0 local_440;
  double local_420;
  FScriptContainerElement *pFStack_418;
  double local_410;
  FScriptContainerElement *local_408;
  double dStack_400;
  double local_3f8;
  TQuaternion<double>_u_0 local_3f0;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  TQuaternion<double>_u_0 local_3a0;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  FRenderCaptureTypeFlags local_350;
  FRenderCaptureTypeFlags local_340 [3];
  double local_320;
  double local_308;
  double local_2f0;
  double local_2d8;
  FRenderCaptureOcclusionHandler local_2c8;
  FDynamicMeshTangents local_278;
  FGeometryScriptBakeRenderCaptureOptions local_258;
  undefined1 local_218 [128];
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_198;
  ulonglong local_d8;
  
  this = (TFrame3<double> *)(local_6f8 + 0x10);
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_7e8;
  local_768.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pUVar37 = (UTexture2D *)(param_4->AllocatorInstance).Data;
  iVar4 = param_4->ArrayNum;
  local_768.ArrayNum = 0;
  local_768.ArrayMax = 0;
  local_5f8 = param_5;
  pUVar28 = (UWorld *)(&pUVar37->_padding_ + iVar4);
  local_5f0 = param_4;
  local_res20[0] = param_3.TargetUVLayer;
  local_778 = param_1;
  local_770 = pUVar28;
  local_750 = (UTexture2D *)__return_storage_ptr__;
  while( true ) {
    if (param_4->ArrayNum != iVar4) {
      local_788 = 0;
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_788);
      pUVar28 = local_770;
    }
    if ((UWorld *)pUVar37 == pUVar28) break;
    pUVar5 = (UObject *)pUVar37->_padding_;
    if (pUVar5 != (UObject *)0x0) {
      local_738 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      if (((local_768.AllocatorInstance.Data <= (FScriptContainerElement *)&local_738) &&
          ((FScriptContainerElement *)&local_738 <
           local_768.AllocatorInstance.Data + (longlong)local_768.ArrayMax * 8)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
        return pFVar21;
      }
      if (local_768.ArrayNum == local_768.ArrayMax) {
        local_768.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_768.AllocatorInstance,&local_768.ArrayMax);
      }
      lVar32 = (longlong)local_768.ArrayNum;
      local_768.ArrayNum = local_768.ArrayNum + 1;
      *(UObject **)(local_768.AllocatorInstance.Data + lVar32 * 8) = local_738;
      pUVar28 = local_770;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_738 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_738);
        pUVar28 = local_770;
      }
    }
    pUVar37 = (UTexture2D *)&pUVar37->_padding_;
  }
  if (local_768.ArrayNum == 0) {
LAB_14cdc520b:
    (__return_storage_ptr__->BaseColorMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    __return_storage_ptr__->bHasBaseColorMap = false;
    (__return_storage_ptr__->NormalMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    __return_storage_ptr__->bHasNormalMap = false;
    (__return_storage_ptr__->PackedMRSMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    __return_storage_ptr__->bHasPackedMRSMap = false;
    (__return_storage_ptr__->MetallicMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    __return_storage_ptr__->bHasMetallicMap = false;
    (__return_storage_ptr__->RoughnessMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    __return_storage_ptr__->bHasRoughnessMap = false;
    (__return_storage_ptr__->SpecularMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    __return_storage_ptr__->bHasSpecularMap = false;
    (__return_storage_ptr__->EmissiveMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    __return_storage_ptr__->bHasEmissiveMap = false;
    (__return_storage_ptr__->OpacityMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    __return_storage_ptr__->bHasOpacityMap = false;
    (__return_storage_ptr__->SubsurfaceColorMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    __return_storage_ptr__->bHasSubsurfaceColorMap = false;
  }
  else {
    if (local_778 == (UDynamicMesh *)0x0) {
      pFVar22 = FText::AsLocalizable_Advanced_LocText
                          (&local_480,L"UGeometryScriptLibrary_MeshBakeFunctions",
                           L"BakeTextureFromRenderCaptures_InvalidTargetMesh",
                           L"BakeTextureFromRenderCaptures: TargetMesh is Null");
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar22);
      if (local_480.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_480.TextData.Reference + 0x10))();
      }
      goto LAB_14cdc520b;
    }
    local_440._s_0.X = (param_2->Rotation).XY.m128d_f64[0];
    local_440._s_0.Y = (param_2->Rotation).XY.m128d_f64[1];
    local_440._s_0.Z = (param_2->Rotation).ZW.m128d_f64[0];
    local_440._s_0.W = (param_2->Rotation).ZW.m128d_f64[1];
    local_4c0 = (param_2->Translation).ZW.m128d_f64[0];
    local_4d0 = (param_2->Translation).XY.m128d_f64[0];
    FStack_4c8.Data = (FScriptContainerElement *)(param_2->Translation).XY.m128d_f64[1];
    local_4a8 = (param_2->Scale3D).ZW.m128d_f64[0];
    local_4b8.Data = (FScriptContainerElement *)(param_2->Scale3D).XY.m128d_f64[0];
    dStack_4b0 = (param_2->Scale3D).XY.m128d_f64[1];
    local_420 = local_4d0;
    pFStack_418 = FStack_4c8.Data;
    local_410 = local_4c0;
    local_408 = local_4b8.Data;
    dStack_400 = dStack_4b0;
    local_3f8 = local_4a8;
    MeshTransforms::ApplyTransform
              ((local_778->Mesh).Ptr,(TTransformSRT3<double> *)&local_440._s_0,false,All);
    local_690 = &local_778;
    pFVar24 = (FDynamicMeshAttributeSet *)0x0;
    local_590 = &local_778;
    local_588.Data = (FScriptContainerElement *)local_res20;
    pFVar6 = (((local_778->Mesh).Ptr)->AttributeSet).Ptr;
    this_02 = pFVar24;
    if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
      this_02 = pFVar6;
    }
    local_688 = param_2;
    pTVar23 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(this_02,local_res20[0]);
    if (pTVar23 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      pFVar22 = FText::AsLocalizable_Advanced_LocText
                          (&local_470,L"UGeometryScriptLibrary_MeshBakeFunctions",
                           L"BakeTextureFromRenderCaptures_TargetMeshMissingUVs",
                           L"BakeTextureFromRenderCaptures: TargetMesh UV layer is missing");
      UE::Geometry::AppendWarning(param_6,InvalidInputs,pFVar22);
      if (local_470.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_470.TextData.Reference + 0x10))();
      }
      (__return_storage_ptr__->BaseColorMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasBaseColorMap = false;
      (__return_storage_ptr__->NormalMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasNormalMap = false;
      (__return_storage_ptr__->PackedMRSMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasPackedMRSMap = false;
      (__return_storage_ptr__->MetallicMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasMetallicMap = false;
      (__return_storage_ptr__->RoughnessMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasRoughnessMap = false;
      (__return_storage_ptr__->SpecularMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasSpecularMap = false;
      (__return_storage_ptr__->EmissiveMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasEmissiveMap = false;
      (__return_storage_ptr__->OpacityMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasOpacityMap = false;
      (__return_storage_ptr__->SubsurfaceColorMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasSubsurfaceColorMap = false;
      local_3f0._s_0.X = (param_2->Rotation).XY.m128d_f64[0];
      local_3f0._s_0.Y = (param_2->Rotation).XY.m128d_f64[1];
      local_3f0._s_0.Z = (param_2->Rotation).ZW.m128d_f64[0];
      local_3f0._s_0.W = (param_2->Rotation).ZW.m128d_f64[1];
      local_3c0 = (param_2->Translation).ZW.m128d_f64[0];
      local_3d0 = (param_2->Translation).XY.m128d_f64[0];
      dStack_3c8 = (param_2->Translation).XY.m128d_f64[1];
      local_3a8 = (param_2->Scale3D).ZW.m128d_f64[0];
      local_3b8 = (param_2->Scale3D).XY.m128d_f64[0];
      dStack_3b0 = (param_2->Scale3D).XY.m128d_f64[1];
      local_320 = local_3c0;
      local_308 = local_3a8;
      MeshTransforms::ApplyTransformInverse
                ((local_778->Mesh).Ptr,(TTransformSRT3<double> *)&local_3f0._s_0,false,All);
    }
    else {
      bVar19 = `UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures'::__l2::
               <lambda_2>::operator()(&local_590);
      if (!bVar19) {
        if (param_5->bNormalMap != false) {
          this_00 = UE::Geometry::FDynamicMeshTangents::FDynamicMeshTangents
                              (&local_278,(local_778->Mesh).Ptr);
          bVar19 = UE::Geometry::FDynamicMeshTangents::HasValidTangents(this_00,true);
          if (!bVar19) {
            pFVar22 = FText::AsLocalizable_Advanced_LocText
                                (&local_450,L"UGeometryScriptLibrary_MeshBakeFunctions",
                                 L"BakeTextureFromRenderCaptures_InvalidMeshTangents",
                                 L"BakeTextureFromRenderCaptures: TargetMesh has invalid tangents so the requested normal map cannot be baked"
                                );
            UE::Geometry::AppendWarning(param_6,InvalidInputs,pFVar22);
            local_460.TextData.Reference = local_450.TextData.Reference;
            goto LAB_14cdc553b;
          }
        }
        this_01 = ::operator_new(0x138);
        if (this_01 != (FSceneCapturePhotoSet *)0x0) {
          pFVar24 = (FDynamicMeshAttributeSet *)
                    UE::Geometry::FSceneCapturePhotoSet::FSceneCapturePhotoSet(this_01);
        }
        local_758.Ptr = (FSceneCapturePhotoSet *)pFVar24;
        pFVar25 = FGeometryScriptBakeRenderCaptureOptions::FGeometryScriptBakeRenderCaptureOptions
                            (&local_258,param_5);
        dStack_718 = (double)___xmm_3ff00000000000004046800000000000;
        dStack_710 = (double)_UNK_1528fb388;
        local_720 = 0x400;
        uStack_71c = uStack_71c & 0xffffff00;
        pFVar26 = UE::Geometry::FRenderCaptureTypeFlags::None(&local_350);
        uVar2 = pFVar26->bDeviceDepth;
        FStack_708.bRoughness = false;
        FStack_708.bMetallic = false;
        FStack_708.bSpecular = false;
        FStack_708.bBaseColor = pFVar25->bBaseColorMap;
        FStack_708.bEmissive = pFVar25->bEmissiveMap;
        FStack_708.bWorldNormal = pFVar25->bNormalMap;
        FStack_708.bOpacity = pFVar25->bOpacityMap;
        FStack_708.bSubsurfaceColor = pFVar25->bSubsurfaceColorMap;
        FStack_708.bCombinedMRS = pFVar25->bPackedMRSMap;
        FStack_708.bDeviceDepth = (bool)uVar2;
        if (pFVar25->bPackedMRSMap == false) {
          FStack_708.bRoughness = pFVar25->bRoughnessMap;
          FStack_708.bMetallic = pFVar25->bMetallicMap;
          FStack_708.bSpecular = pFVar25->bSpecularMap;
        }
        uVar10 = (uint)FStack_708._0_4_ >> 0x10;
        uVar11 = (uint)FStack_708._0_4_ >> 0x18;
        FStack_708.bBaseColor = (bool)(char)FStack_708._0_4_;
        FStack_708.bRoughness = (bool)(char)((uint)FStack_708._0_4_ >> 8);
        FStack_708.bMetallic = (bool)(char)uVar10;
        FStack_708.bSpecular = (bool)(char)uVar11;
        if (pFVar25->CleanupTolerance <= 0.0) {
LAB_14cdc5719:
          FStack_708._0_8_ = FStack_708._0_8_ & 0xffffffffffffff;
        }
        else {
          pFVar26 = UE::Geometry::FRenderCaptureTypeFlags::None(local_340);
          local_618.bBaseColor = pFVar26->bBaseColor;
          local_618.bRoughness = pFVar26->bRoughness;
          local_618.bMetallic = pFVar26->bMetallic;
          local_618.bSpecular = pFVar26->bSpecular;
          local_618.bEmissive = pFVar26->bEmissive;
          local_618.bWorldNormal = pFVar26->bWorldNormal;
          local_618.bCombinedMRS = pFVar26->bCombinedMRS;
          local_618.bDeviceDepth = pFVar26->bDeviceDepth;
          local_618.bOpacity = pFVar26->bOpacity;
          local_618.bSubsurfaceColor = pFVar26->bSubsurfaceColor;
          bVar19 = UE::Geometry::FRenderCaptureTypeFlags::operator!=(&FStack_708,&local_618);
          FStack_708.bDeviceDepth = true;
          if (!bVar19) goto LAB_14cdc5719;
        }
        FVar27 = GeometryScriptBakeLocals::GetDimensions((EGeometryScriptBakeResolution)&local_698);
        uVar36 = FStack_708._0_4_;
        uVar43 = FStack_708._4_4_;
        dStack_718 = pFVar25->FieldOfViewDegrees;
        local_5e8._0_4_ = *(int *)((longlong)FVar27 + 4);
        local_5e8._16_4_ = *(undefined4 *)&pFVar25->NearPlaneDist;
        local_5e8._20_4_ = *(undefined4 *)((longlong)&pFVar25->NearPlaneDist + 4);
        dStack_710 = pFVar25->NearPlaneDist;
        local_5e8._32_8_ =
             CONCAT62(uStack_6fe,CONCAT11(FStack_708.bSubsurfaceColor,FStack_708.bOpacity));
        pFVar34 = (pFVar25->Cameras).AllocatorInstance.Data;
        uStack_71c = CONCAT31(uStack_71c._1_3_,pFVar25->bRenderCaptureAntiAliasing);
        local_5e8._4_4_ = uStack_71c;
        local_5e8._8_4_ = SUB84(dStack_718,0);
        local_5e8._12_4_ = (undefined4)((ulonglong)dStack_718 >> 0x20);
        local_720 = local_5e8._0_4_;
        if (pFVar34 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar34);
        }
        uVar14 = FStack_708._0_8_;
        local_580.SceneCapture = &local_758;
        local_580.Options = (FSceneCaptureConfig *)local_5e8;
        FStack_708.bBaseColor = SUB41(uVar36,0);
        FStack_708.bRoughness = SUB41(uVar36,1);
        FStack_708.bMetallic = SUB41(uVar36,2);
        FStack_708.bSpecular = SUB41(uVar36,3);
        local_5e8[0x18] = FStack_708.bBaseColor;
        local_5e8[0x19] = FStack_708.bRoughness;
        local_5e8[0x1a] = FStack_708.bMetallic;
        local_5e8[0x1b] = FStack_708.bSpecular;
        FStack_708.bEmissive = SUB41(uVar43,0);
        FStack_708.bWorldNormal = SUB41(uVar43,1);
        FStack_708.bCombinedMRS = SUB41(uVar43,2);
        FStack_708.bDeviceDepth = SUB41(uVar43,3);
        local_5e8[0x1c] = FStack_708.bEmissive;
        local_5e8[0x1d] = FStack_708.bWorldNormal;
        local_5e8[0x1e] = FStack_708.bCombinedMRS;
        local_5e8[0x1f] = FStack_708.bDeviceDepth;
        FStack_708._0_8_ = uVar14;
        UE::Geometry::
        ForEachCaptureType<_UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures_::__l25::<lambda_3>_>
                  (&local_580);
        TVar13.Ptr = local_758.Ptr;
        if ((local_768.ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
          return pFVar21;
        }
        pUVar28 = AActor::GetWorld(*(AActor **)local_768.AllocatorInstance.Data);
        UE::Geometry::FSceneCapturePhotoSet::SetCaptureSceneActors(TVar13.Ptr,pUVar28,&local_768);
        pFVar34 = __real_3ff0000000000000;
        iVar4 = (param_5->Cameras).ArrayNum;
        if (iVar4 == 0) {
          pFVar22 = FText::AsLocalizable_Advanced_LocText
                              (&local_4e8,L"UGeometryScriptLibrary_MeshBakeFunctions",
                               L"BakeTextureFromRenderCaptures_EmptyCameraSet",
                               L"BakeTextureFromRenderCaptures: Cameras array was empty so a default camera set was used. Please update your blueprint by providing an explicit array e.g., by using ComputeRenderCaptureCamerasForBox"
                              );
          UE::Geometry::AppendWarning(param_6,InvalidInputs,pFVar22);
          if (local_4e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_4e8.TextData.Reference + 0x10))();
          }
          pFVar29 = UE::Geometry::FImageDimensions::FImageDimensions
                              (&local_488,local_5e8._0_4_,local_5e8._0_4_);
          local_628._0_8_ = (FScriptContainerElement *)0x0;
          local_628._8_8_ = (FScriptContainerElement *)0x0;
          UE::Geometry::ComputeStandardExteriorSpatialPhotoParameters
                    (&local_5b0,(UWorld *)0x0,&local_768,
                     (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)local_628,*pFVar29,
                     (double)CONCAT44(local_5e8._12_4_,local_5e8._8_4_),
                     (double)CONCAT44(local_5e8._20_4_,local_5e8._16_4_),true,true,true,true,true);
          if ((FScriptContainerElement *)local_628._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_628._0_8_);
          }
          UE::Geometry::FSceneCapturePhotoSet::SetSpatialPhotoParams(local_758.Ptr,&local_5b0);
          if (local_5b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5b0.AllocatorInstance.Data);
          }
        }
        else {
          pFVar38 = (param_5->Cameras).AllocatorInstance.Data;
          uVar36 = SUB84(__real_3ff0000000000000,0);
          uVar12 = (ulonglong)__real_3ff0000000000000 >> 0x20;
          local_748.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_748.ArrayNum = 0;
          local_748.ArrayMax = 0;
          pFVar1 = pFVar38 + (longlong)iVar4 * 0x48;
          while( true ) {
            if ((param_5->Cameras).ArrayNum != iVar4) {
              local_787 = false;
              `TCheckedPointerIterator<FGeometryScriptRenderCaptureCamera,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&local_787);
            }
            if (pFVar38 == pFVar1) break;
            local_6a8 = *(undefined8 *)(pFVar38 + 8);
            local_6f8._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_6e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            iVar20 = *(int *)pFVar38;
            if (*(int *)pFVar38 < 1) {
              iVar20 = 1;
            }
            local_6d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_6c8 = 0.0;
            dStack_6c0 = 0.0;
            dStack_6b0 = *(double *)(pFVar38 + 0x40);
            FStack_6d0.Data = (FScriptContainerElement *)0x0;
            local_6b8.Data = pFVar34;
            pUStack_6a0 = (UTexture2D *)0x0;
            uVar43 = uVar36;
            uVar44 = (int)uVar12;
            if (iVar20 < 0) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("WidthIn >= 0 && HeightIn >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageDimensions.h"
                                  ,0x20,L"");
              if (bVar19) {
                pcVar8 = (code *)swi(3);
                pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
                return pFVar21;
              }
              uVar43 = SUB84(local_6b8.Data,0);
              uVar44 = (undefined4)((ulonglong)local_6b8.Data >> 0x20);
            }
            dVar39 = dStack_6c0 + dStack_6c0;
            local_730 = (UTexture2D *)CONCAT44(iVar20,iVar20);
            local_570._s_0.X = 0.0;
            dVar40 = local_6c8 + local_6c8;
            local_570._s_0.W = (double)pFVar34;
            pUStack_6a0 = local_730;
            local_570._s_0.Y = 0.0;
            local_570._s_0.Z = 0.0;
            local_520._s_0.X = (double)pFVar34 - (dVar39 * dStack_6c0 + dVar40 * local_6c8);
            local_520._s_0.Y =
                 dVar39 * (double)CONCAT44(uVar44,uVar43) + dVar40 * (double)FStack_6d0.Data;
            local_520._s_0.Z =
                 dVar39 * (double)FStack_6d0.Data - dVar40 * (double)CONCAT44(uVar44,uVar43);
            UE::Geometry::TQuaternion<double>::SetFromTo
                      ((TQuaternion<double> *)&local_570._s_0,(TVector<double> *)&local_520._s_0,
                       (TVector<double> *)(pFVar38 + 0x28));
            UE::Geometry::TFrame3<double>::Rotate(this,(TQuaternion<double> *)&local_570._s_0);
            dVar42 = dStack_6c0 + dStack_6c0;
            dVar41 = local_6c8 + local_6c8;
            dVar40 = dVar42 * (double)local_6b8.Data + dVar41 * (double)FStack_6d0.Data;
            local_4a0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
            local_4a0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
            local_4a0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            dVar9 = (double)pFVar34 - (dVar42 * dStack_6c0 + dVar41 * local_6c8);
            dVar39 = dVar42 * (double)FStack_6d0.Data - dVar41 * (double)local_6b8.Data;
            local_538._s_0.X = dVar41 * (double)local_6b8.Data + dVar42 * (double)FStack_6d0.Data;
            local_538._s_0.Y =
                 dVar42 * local_6c8 -
                 ((double)FStack_6d0.Data + (double)FStack_6d0.Data) * (double)local_6b8.Data;
            local_538._s_0.Z =
                 (double)pFVar34 -
                 (((double)FStack_6d0.Data + (double)FStack_6d0.Data) * (double)FStack_6d0.Data +
                 dVar41 * local_6c8);
            local_550._s_0.X = dVar9;
            local_550._s_0.Y = dVar40;
            local_550._s_0.Z = dVar39;
            UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
                      ((TVector<double> *)&local_538._s_0,(TVector<double> *)&local_4a0._s_0,
                       (TVector<double> *)&local_550._s_0);
            __libm_sse2_sincos_();
            local_508._s_0.Y = extraout_XMM0_Qa * dVar40;
            local_508._s_0.X = extraout_XMM0_Qa * dVar9;
            local_508._s_0.Z = extraout_XMM0_Qa * dVar39;
            UE::Geometry::TFrame3<double>::Rotate(this,(TQuaternion<double> *)&local_508._s_0);
            local_6f8._16_8_ = *(undefined8 *)(pFVar38 + 0x10);
            dStack_6e0 = *(double *)(pFVar38 + 0x18);
            local_6d8 = *(double *)(pFVar38 + 0x20);
            if (((local_748.AllocatorInstance.Data <= this) &&
                (this < (TFrame3<double> *)
                        (local_748.AllocatorInstance.Data + (longlong)local_748.ArrayMax * 0x50)))
               && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar19)) {
              pcVar8 = (code *)swi(3);
              pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
              return pFVar21;
            }
            iVar20 = local_748.ArrayNum;
            if (local_748.ArrayNum == local_748.ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&local_748.AllocatorInstance,&local_748.ArrayMax);
            }
            local_748.ArrayNum = iVar20 + 1;
            lVar32 = (longlong)iVar20;
            pFVar38 = pFVar38 + 0x48;
            *(undefined8 *)(local_748.AllocatorInstance.Data + lVar32 * 0x50) = local_6f8._16_8_;
            *(double *)(local_748.AllocatorInstance.Data + lVar32 * 0x50 + 8) = dStack_6e0;
            *(double *)(local_748.AllocatorInstance.Data + lVar32 * 0x50 + 0x10) = local_6d8;
            *(FScriptContainerElement **)
             (local_748.AllocatorInstance.Data + lVar32 * 0x50 + 0x10 + 8) = FStack_6d0.Data;
            *(double *)(local_748.AllocatorInstance.Data + lVar32 * 0x50 + 0x20) = local_6c8;
            *(double *)(local_748.AllocatorInstance.Data + lVar32 * 0x50 + 0x20 + 8) = dStack_6c0;
            *(FScriptContainerElement **)(local_748.AllocatorInstance.Data + lVar32 * 0x50 + 0x30) =
                 local_6b8.Data;
            *(double *)(local_748.AllocatorInstance.Data + lVar32 * 0x50 + 0x30 + 8) = dStack_6b0;
            *(undefined8 *)(local_748.AllocatorInstance.Data + lVar32 * 0x50 + 0x40) = local_6a8;
            *(UTexture2D **)(local_748.AllocatorInstance.Data + lVar32 * 0x50 + 0x40 + 8) =
                 pUStack_6a0;
          }
          UE::Geometry::FSceneCapturePhotoSet::SetSpatialPhotoParams(local_758.Ptr,&local_748);
          __return_storage_ptr__ = (FGeometryScriptRenderCaptureTextures *)local_750;
          if ((TFrame3<double> *)local_748.AllocatorInstance.Data != (TFrame3<double> *)0x0) {
            FMemory::Free(local_748.AllocatorInstance.Data);
          }
        }
        pUVar37 = (UTexture2D *)0x0;
        UE::Geometry::FSceneCapturePhotoSet::Compute(local_758.Ptr);
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_198,(local_778->Mesh).Ptr,true);
        pFVar7 = (local_778->Mesh).Ptr;
        pTVar30 = ::operator_new(0x48);
        EVar35 = Sample16;
        if (pTVar30 == (TReferenceControllerBase<1> *)0x0) {
          this_03 = (TMeshTangents<double> *)&DAT_00000010;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_750 = (UTexture2D *)0x0;
        }
        else {
          pTVar30[1]._padding_ = (longlong)pFVar7;
          pTVar30->SharedReferenceCount = (atomic<int>)0x1;
          this_03 = (TMeshTangents<double> *)(pTVar30 + 1);
          pTVar30->WeakReferenceCount = (atomic<int>)0x1;
          pTVar30->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__TMeshTangents_N_Geometry_UE___00_SharedPointerInternals__6B_
          ;
          pTVar30[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar30[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar30[2]._padding_ = 0;
          pTVar30[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar30[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar30[3]._padding_ = 0;
          pTVar30[3].SharedReferenceCount = (atomic<int>)0x0;
          pTVar30[3].WeakReferenceCount = (atomic<int>)0x0;
          pTVar30[4]._padding_ = 0;
          if ((this_03 == (TMeshTangents<double> *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
            return pFVar21;
          }
          LOCK();
          pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
          UNLOCK();
          local_750 = (UTexture2D *)pTVar30;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar30);
          pUVar37 = (UTexture2D *)pTVar30;
          if ((this_03 == (TMeshTangents<double> *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
            return pFVar21;
          }
        }
        UE::Geometry::TMeshTangents<double>::CopyTriVertexTangents(this_03,(local_778->Mesh).Ptr);
        pUVar31 = ::operator_new(0x20);
        if (pUVar31 == (UTexture2D *)0x0) {
          pUVar31 = (UTexture2D *)0x0;
          local_770 = (UWorld *)&DAT_00000010;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_728 = (UTexture2D *)0x0;
          pUVar28 = (UWorld *)&DAT_00000010;
        }
        else {
          ((TReferenceControllerBase<1> *)pUVar31)->SharedReferenceCount = (atomic<int>)0x1;
          ((TReferenceControllerBase<1> *)pUVar31)->WeakReferenceCount = (atomic<int>)0x1;
          ((TReferenceControllerBase<1> *)pUVar31)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
          ;
          ((TReferenceControllerBase<1> *)((longlong)pUVar31 + 0x10))->_padding_ = 0;
          ((TReferenceControllerBase<1> *)((longlong)pUVar31 + 0x10))->SharedReferenceCount =
               (atomic<int>)0x0;
          ((TReferenceControllerBase<1> *)((longlong)pUVar31 + 0x10))->WeakReferenceCount =
               (atomic<int>)0x0;
          local_770 = (UWorld *)((longlong)pUVar31 + 0x10);
          if ((local_770 == (UWorld *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
            return pFVar21;
          }
          LOCK();
          ((TReferenceControllerBase<1> *)pUVar31)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)pUVar31)->SharedReferenceCount + 1);
          UNLOCK();
          local_728 = pUVar31;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pUVar31);
          pUVar28 = local_770;
          if ((local_770 == (UWorld *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
            return pFVar21;
          }
        }
        UE::Geometry::FMeshMapBaker::ComputeUVCharts
                  ((local_778->Mesh).Ptr,(TArray<int,TSizedDefaultAllocator<32>_> *)pUVar28);
        UE::Geometry::FSceneCapturePhotoSetSampler::FSceneCapturePhotoSetSampler
                  ((FSceneCapturePhotoSetSampler *)local_218,local_758.Ptr,param_5->CleanupTolerance
                   ,(local_778->Mesh).Ptr,&local_198,this_03);
        FVar27 = GeometryScriptBakeLocals::GetDimensions((EGeometryScriptBakeResolution)local_4d8);
        UE::Geometry::FRenderCaptureOcclusionHandler::FRenderCaptureOcclusionHandler
                  (&local_2c8,*(FImageDimensions *)FVar27);
        uVar14 = local_5e8._32_8_;
        EVar3 = param_5->SamplesPerPixel;
        pFVar34 = (FScriptContainerElement *)CONCAT44(local_5e8._28_4_,local_5e8._24_4_);
        local_780 = (bool)local_5e8[0x20];
        bStack_77f = (bool)local_5e8[0x21];
        local_5e8._32_8_ = uVar14;
        if (EVar3 == Sample1) {
LAB_14cdc6002:
          uVar36 = 1;
        }
        else if (EVar3 == Sample4) {
          uVar36 = 4;
        }
        else if (EVar3 == Sample16) {
          uVar36 = 0x10;
        }
        else if (EVar3 == Sample64) {
          uVar36 = 0x40;
        }
        else {
          if (EVar3 != Samples256) {
            bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<2374032242172232671>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshBakeFunctions.cpp"
                                ,0x3df,"false");
            if (bVar19) {
              pcVar8 = (code *)swi(3);
              pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
              return pFVar21;
            }
            goto LAB_14cdc6002;
          }
          uVar36 = 0x100;
        }
        switch(param_5->Resolution) {
        case Resolution16:
          break;
        case Resolution32:
          EVar35 = 0x20;
          break;
        case Resolution64:
          EVar35 = Sample64;
          break;
        case Resolution128:
          EVar35 = 0x80;
          break;
        case Resolution256:
          EVar35 = Sample256;
          break;
        case Resolution512:
          EVar35 = 0x200;
          break;
        case Resolution1024:
          EVar35 = 0x400;
          break;
        case Resolution2048:
          EVar35 = 0x800;
          break;
        case Resolution4096:
          EVar35 = 0x1000;
          break;
        case Resolution8192:
          EVar35 = 0x2000;
          break;
        default:
          bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2374032242172232656>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshBakeFunctions.cpp"
                              ,0x3d0,"false");
          if (bVar19) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryScriptRenderCaptureTextures *)(*pcVar8)();
            return pFVar21;
          }
        }
        local_5a0._0_8_ = local_770;
        if (pUVar31 != (UTexture2D *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)pUVar31)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)pUVar31)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pUVar37 != (UTexture2D *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)pUVar37)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)pUVar37)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_608[1].Data._0_1_ = local_780;
        local_608[1].Data._1_1_ = bStack_77f;
        local_608[0].Data = pFVar34;
        local_5c0.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)this_03;
        local_5c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar37;
        local_5a0._8_8_ = pUVar31;
        UE::Geometry::MakeRenderCaptureBaker
                  ((FDynamicMesh3 *)local_6f8,
                   (TSharedPtr<UE::Geometry::TMeshTangents<double>,1> *)(local_778->Mesh).Ptr,
                   &local_5c0,(FSceneCapturePhotoSet *)local_5a0,
                   (FSceneCapturePhotoSetSampler *)local_758.Ptr,
                   (FRenderCaptureTypeFlags *)local_218,(int)local_608,local_res20[0],EVar35,
                   (FRenderCaptureOcclusionHandler *)CONCAT44(in_stack_fffffffffffff864,uVar36));
        if (CpuChannel->Enabled < 0) {
          UE::Geometry::FMeshMapBaker::Bake((FMeshMapBaker *)local_6f8._0_8_);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1414,
                     "MeshBakeFunctions_BakeTextureFromRenderCaptures_Bake",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshBakeFunctions.cpp"
                     ,0x586);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1414);
          UE::Geometry::FMeshMapBaker::Bake((FMeshMapBaker *)local_6f8._0_8_);
          FCpuProfilerTrace::OutputEndEvent();
          pUVar31 = local_728;
          pUVar37 = local_750;
        }
        local_678.SubsurfaceColorMap = (UTexture2D *)0x0;
        local_678.BaseColorMap = (UTexture2D *)0x0;
        local_678.NormalMap = (UTexture2D *)0x0;
        local_678.PackedMRSMap = (UTexture2D *)0x0;
        local_678.MetallicMap = (UTexture2D *)0x0;
        local_678.RoughnessMap = (UTexture2D *)0x0;
        local_678.SpecularMap = (UTexture2D *)0x0;
        local_678.EmissiveMap = (UTexture2D *)0x0;
        local_678.OpacityMap = (UTexture2D *)0x0;
        UE::Geometry::GetTexturesFromRenderCaptureBaker((FMeshMapBaker *)local_6f8._0_8_,&local_678)
        ;
        if (local_678.BaseColorMap != (UTexture2D *)0x0) {
          UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
                    (local_678.BaseColorMap,Color);
        }
        if (local_678.NormalMap != (UTexture2D *)0x0) {
          UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
                    (local_678.NormalMap,NormalMap);
        }
        if (local_678.PackedMRSMap != (UTexture2D *)0x0) {
          UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
                    (local_678.PackedMRSMap,ColorLinear);
        }
        if (local_678.MetallicMap != (UTexture2D *)0x0) {
          UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
                    (local_678.MetallicMap,Metallic);
        }
        if (local_678.RoughnessMap != (UTexture2D *)0x0) {
          UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
                    (local_678.RoughnessMap,Roughness);
        }
        if (local_678.SpecularMap != (UTexture2D *)0x0) {
          UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
                    (local_678.SpecularMap,Specular);
        }
        if (local_678.EmissiveMap != (UTexture2D *)0x0) {
          UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
                    (local_678.EmissiveMap,EmissiveHDR);
        }
        if (local_678.OpacityMap != (UTexture2D *)0x0) {
          UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
                    (local_678.OpacityMap,ColorLinear);
        }
        if (local_678.SubsurfaceColorMap != (UTexture2D *)0x0) {
          UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
                    (local_678.SubsurfaceColorMap,Color);
        }
        local_698.DebugPtr = local_678.BaseColorMap;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_678.BaseColorMap != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_678.BaseColorMap);
        }
        local_750 = local_678.NormalMap;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_678.NormalMap != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_678.NormalMap);
        }
        local_728 = local_678.PackedMRSMap;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_678.PackedMRSMap != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_678.PackedMRSMap);
        }
        local_730 = local_678.MetallicMap;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_678.MetallicMap != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_678.MetallicMap);
        }
        local_770 = (UWorld *)local_678.RoughnessMap;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_678.RoughnessMap != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_678.RoughnessMap);
        }
        pUVar15 = local_678.SpecularMap;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_678.SpecularMap != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_678.SpecularMap);
        }
        pUVar16 = local_678.EmissiveMap;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_678.EmissiveMap != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_678.EmissiveMap);
        }
        pUVar17 = local_678.OpacityMap;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_678.OpacityMap != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_678.OpacityMap);
        }
        pUVar18 = local_678.SubsurfaceColorMap;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_678.SubsurfaceColorMap != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_678.SubsurfaceColorMap);
        }
        local_787 = local_698.DebugPtr != (UTexture2D *)0x0;
        (((TObjectPtr<UTexture2D> *)&((UTexture2D *)__return_storage_ptr__)->_padding_)->field0_0x0)
        .DebugPtr = (UTexture2D *)local_698;
        local_788 = local_750 != (UTexture2D *)0x0;
        local_786 = local_728 != (UTexture2D *)0x0;
        local_785 = local_730 != (UTexture2D *)0x0;
        local_784 = local_770 != (UWorld *)0x0;
        local_783 = pUVar15 != (UTexture2D *)0x0;
        local_782 = pUVar16 != (UTexture2D *)0x0;
        local_781 = pUVar17 != (UTexture2D *)0x0;
        _local_780 = CONCAT11(bStack_77f,pUVar18 != (UTexture2D *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_698.DebugPtr != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_698.DebugPtr);
        }
        *(bool *)&((UTexture2D *)__return_storage_ptr__)->_padding_ = local_787;
        (((TObjectPtr<UTexture2D> *)&((UTexture2D *)__return_storage_ptr__)->_padding_)->field0_0x0)
        .DebugPtr = local_750;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_750 != (UTexture2D *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)local_750);
        }
        *(undefined1 *)&((UTexture2D *)__return_storage_ptr__)->_padding_ = local_788;
        ((UTexture2D *)__return_storage_ptr__)->_padding_ = (longlong)local_728;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_728 != (UTexture2D *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)local_728);
        }
        *(undefined1 *)&((UTexture2D *)__return_storage_ptr__)->_padding_ = local_786;
        ((UTexture2D *)__return_storage_ptr__)->_padding_ = (longlong)local_730;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_730 != (UTexture2D *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)local_730);
        }
        *(undefined1 *)&((UTexture2D *)__return_storage_ptr__)->_padding_ = local_785;
        ((UTexture2D *)__return_storage_ptr__)->_padding_ = (longlong)local_770;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_770 != (UWorld *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_770);
        }
        *(undefined1 *)&((UTexture2D *)__return_storage_ptr__)->_padding_ = local_784;
        ((UTexture2D *)__return_storage_ptr__)->_padding_ = (longlong)pUVar15;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UTexture2D *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        *(undefined1 *)&((UTexture2D *)__return_storage_ptr__)->_padding_ = local_783;
        ((UTexture2D *)__return_storage_ptr__)->_padding_ = (longlong)pUVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UTexture2D *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        *(undefined1 *)&((UTexture2D *)__return_storage_ptr__)->_padding_ = local_782;
        ((UTexture2D *)__return_storage_ptr__)->_padding_ = (longlong)pUVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UTexture2D *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        *(undefined1 *)&((UTexture2D *)__return_storage_ptr__)->_padding_ = local_781;
        ((UTexture2D *)__return_storage_ptr__)->_padding_ = (longlong)pUVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UTexture2D *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar18);
        }
        *(bool *)&((UTexture2D *)__return_storage_ptr__)->_padding_ = local_780;
        if ((FMeshMapBaker *)local_6f8._0_8_ != (FMeshMapBaker *)0x0) {
          (*(code *)**(undefined8 **)local_6f8._0_8_)(local_6f8._0_8_,1);
        }
        if (local_2c8.Infill.InfillSequence.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_2c8.Infill.InfillSequence.AllocatorInstance.Data);
        }
        if (local_2c8.InfillRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.InfillRequired.AllocatorInstance.Data);
        }
        if (local_2c8.SampleStats.Image.Buffer.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.SampleStats.Image.Buffer.AllocatorInstance.Data);
        }
        if (local_218._80_8_ != 0) {
          plVar33 = (longlong *)(local_218 + 0x60);
          if ((longlong *)local_218._120_8_ != (longlong *)0x0) {
            plVar33 = (longlong *)local_218._120_8_;
          }
          (**(code **)(*plVar33 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pUVar31);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pUVar37);
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
        ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_198);
        TVar13.Ptr = local_758.Ptr;
        if ((FDynamicMeshAttributeSet *)local_758.Ptr != (FDynamicMeshAttributeSet *)0x0) {
          UE::Geometry::FSceneCapturePhotoSet::~FSceneCapturePhotoSet(local_758.Ptr);
          ::operator_delete(TVar13.Ptr,0x138);
        }
        local_3a0._s_0.X = (local_688->Rotation).XY.m128d_f64[0];
        local_3a0._s_0.Y = (local_688->Rotation).XY.m128d_f64[1];
        local_3a0._s_0.Z = (local_688->Rotation).ZW.m128d_f64[0];
        local_3a0._s_0.W = (local_688->Rotation).ZW.m128d_f64[1];
        local_370 = (local_688->Translation).ZW.m128d_f64[0];
        local_380 = (local_688->Translation).XY.m128d_f64[0];
        dStack_378 = (local_688->Translation).XY.m128d_f64[1];
        local_358 = (local_688->Scale3D).ZW.m128d_f64[0];
        local_368 = (local_688->Scale3D).XY.m128d_f64[0];
        dStack_360 = (local_688->Scale3D).XY.m128d_f64[1];
        local_2f0 = local_370;
        local_2d8 = local_358;
        MeshTransforms::ApplyTransformInverse
                  (((*local_690)->Mesh).Ptr,(TTransformSRT3<double> *)&local_3a0._s_0,false,All);
        if (local_768.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_768.AllocatorInstance.Data);
        }
        pFVar34 = (local_5f0->AllocatorInstance).Data;
        if (pFVar34 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar34);
        }
        pFVar34 = (local_5f8->Cameras).AllocatorInstance.Data;
        goto LAB_14cdc66ec;
      }
      pFVar22 = FText::AsLocalizable_Advanced_LocText
                          (&local_460,L"UGeometryScriptLibrary_MeshBakeFunctions",
                           L"BakeTextureFromRenderCaptures_TargetMeshDegenerateUVs",
                           L"BakeTextureFromRenderCaptures: TargetMesh UV layer is degenerate");
      UE::Geometry::AppendWarning(param_6,InvalidInputs,pFVar22);
LAB_14cdc553b:
      if (local_460.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_460.TextData.Reference + 0x10))();
      }
      (__return_storage_ptr__->BaseColorMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasBaseColorMap = false;
      (__return_storage_ptr__->NormalMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasNormalMap = false;
      (__return_storage_ptr__->PackedMRSMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasPackedMRSMap = false;
      (__return_storage_ptr__->MetallicMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasMetallicMap = false;
      (__return_storage_ptr__->RoughnessMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasRoughnessMap = false;
      (__return_storage_ptr__->SpecularMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasSpecularMap = false;
      (__return_storage_ptr__->EmissiveMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasEmissiveMap = false;
      (__return_storage_ptr__->OpacityMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasOpacityMap = false;
      (__return_storage_ptr__->SubsurfaceColorMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
      __return_storage_ptr__->bHasSubsurfaceColorMap = false;
      ScopeExitSupport::
      TScopeGuard<`UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures'::__l2::<lambda_1>_>
      ::
      ~TScopeGuard<_UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures_::__l2::<lambda_1>_>
                (&local_690);
    }
  }
  if (local_768.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.AllocatorInstance.Data);
  }
  pFVar34 = (param_4->AllocatorInstance).Data;
  if (pFVar34 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar34);
  }
  pFVar34 = (param_5->Cameras).AllocatorInstance.Data;
LAB_14cdc66ec:
  if (pFVar34 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar34);
  }
  return (FGeometryScriptRenderCaptureTextures *)(UTexture2D *)__return_storage_ptr__;
}

// BakeVertex @ 14cdc7180

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::BakeVertex
          (UDynamicMesh *param_1,TTransform<double> *param_2,
          FGeometryScriptBakeTargetMeshOptions param_3,UDynamicMesh *param_4,
          TTransform<double> *param_5,FGeometryScriptBakeSourceMeshOptions *param_6,
          FGeometryScriptBakeOutputType *param_7,FGeometryScriptBakeVertexOptions *param_8,
          UGeometryScriptDebug *param_9)

{
  FMeshVertexBaker *pFVar1;
  FMeshVertexBaker *local_e8;
  FGeometryScriptBakeOutputType *local_e0;
  TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> local_d8;
  TObjectPtr<UTexture2D>_u_0 local_c8;
  int local_c0;
  EGeometryScriptBakeNormalSpace local_bc;
  FGeometryScriptBakeOutputType local_b8;
  
  local_e8 = (FMeshVertexBaker *)param_5;
  local_e0 = FGeometryScriptBakeOutputType::FGeometryScriptBakeOutputType(&local_b8,param_7);
  local_c8 = (TObjectPtr<UTexture2D>_u_0)(param_6->SourceNormalMap).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c8.DebugPtr != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8.DebugPtr);
  }
  local_c0 = param_6->SourceNormalUVLayer;
  local_d8.AllocatorInstance.Data = *(FScriptContainerElement **)param_8;
  local_bc = param_6->SourceNormalSpace;
  local_d8.ArrayNum = *(int *)&param_8->bProjectionInWorldSpace;
  GeometryScriptBakeLocals::BakeVertexImpl
            ((UDynamicMesh *)&local_e8,(TTransform<double> *)param_1,
             (FGeometryScriptBakeTargetMeshOptions)(int)param_2,
             (UDynamicMesh *)(ulonglong)(uint)param_3.TargetUVLayer,(TTransform<double> *)param_4,
             (FGeometryScriptBakeSourceMeshOptions *)local_e8,
             (FGeometryScriptBakeOutputType *)&local_c8.ObjectPtr,
             (FGeometryScriptBakeVertexOptions *)local_e0,&local_d8);
  pFVar1 = local_e8;
  GeometryScriptBakeLocals::ApplyVertexBakeToMesh(local_e8,param_7,param_1);
  if (pFVar1 != (FMeshVertexBaker *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->A).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->B).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->G).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->R).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->RGBA).Options.SharedReferenceCount.ReferenceController);
  return param_1;
}

// ConvertBakeResolutionToInt @ 14cdcdf20

int __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::ConvertBakeResolutionToInt
          (EGeometryScriptBakeResolution param_1)

{
  undefined4 local_res10;
  
  GeometryScriptBakeLocals::GetDimensions(0x10);
  return local_res10;
}

// GetPrivateStaticClass @ 14cdd8560

UClass * __cdecl UGeometryScriptLibrary_MeshBakeFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshBakeFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshBakeFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshBakeFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshBakeFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions.InnerSingleton;
}

// MakeBakeTypeAmbientOcclusion @ 14cddc0a0

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeAmbientOcclusion
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__,int param_1,float param_2,
          float param_3,float param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FGeometryScriptBakeType_Occlusion *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FGeometryScriptBakeType_Occlusion,1> *pTVar5;
  FGeometryScriptBakeTypeOptions *pFVar6;
  FGeometryScriptBakeType_Occlusion *local_48;
  FSharedReferencer<1> local_40;
  TSharedRef<FGeometryScriptBakeType_Occlusion,1> local_38 [3];
  
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->BakeType = AmbientOcclusion;
  pTVar5 = MakeShared<FGeometryScriptBakeType_Occlusion,1>(local_38);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FGeometryScriptBakeType_Occlusion *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGeometryScriptBakeTypeOptions *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2->OcclusionRays = param_1;
  if (pFVar2 == (FGeometryScriptBakeType_Occlusion *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGeometryScriptBakeTypeOptions *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2->MaxDistance = param_2;
  pFVar2->SpreadAngle = param_3;
  pFVar2->BiasAngle = param_4;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pFVar2;
  local_40.ReferenceController = pTVar1;
  if (&__return_storage_ptr__->Options != (TSharedPtr<FGeometryScriptBakeTypes,1> *)&local_48) {
    (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)pFVar2;
    local_48 = (FGeometryScriptBakeType_Occlusion *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Options).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// MakeBakeTypeBentNormal @ 14cddc200

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeBentNormal
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__,int param_1,float param_2,
          float param_3,EGeometryScriptBakeNormalSpace param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FGeometryScriptBakeType_Occlusion *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FGeometryScriptBakeType_Occlusion,1> *pTVar5;
  FGeometryScriptBakeTypeOptions *pFVar6;
  FGeometryScriptBakeType_Occlusion *local_48;
  FSharedReferencer<1> local_40;
  TSharedRef<FGeometryScriptBakeType_Occlusion,1> local_38 [3];
  
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->BakeType = BentNormal;
  pTVar5 = MakeShared<FGeometryScriptBakeType_Occlusion,1>(local_38);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FGeometryScriptBakeType_Occlusion *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGeometryScriptBakeTypeOptions *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2->OcclusionRays = param_1;
  if (pFVar2 == (FGeometryScriptBakeType_Occlusion *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGeometryScriptBakeTypeOptions *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2->MaxDistance = param_2;
  pFVar2->SpreadAngle = param_3;
  pFVar2->NormalSpace = param_4;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pFVar2;
  local_40.ReferenceController = pTVar1;
  if (&__return_storage_ptr__->Options != (TSharedPtr<FGeometryScriptBakeTypes,1> *)&local_48) {
    (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)pFVar2;
    local_48 = (FGeometryScriptBakeType_Occlusion *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Options).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// MakeBakeTypeConstant @ 14cddc360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeConstant
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__,float param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGeometryScriptBakeTypeOptions *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30 [3];
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->BakeType = Constant;
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    _DAT_00000010 = param_1;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometryScriptBakeType_Constant___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&pTVar3[1]._padding_ = 0;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FGeometryScriptBakeTypeOptions *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FGeometryScriptBakeTypeOptions *)(*pcVar1)();
        return pFVar4;
      }
    }
    *(float *)&pTVar6->_padding_ = param_1;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  local_38 = pTVar6;
  local_30[0].ReferenceController = pTVar5;
  if (&__return_storage_ptr__->Options != (TSharedPtr<FGeometryScriptBakeTypes,1> *)&local_38) {
    (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)pTVar6;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Options).SharedReferenceCount,local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// MakeBakeTypeCurvature @ 14cddc4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeCurvature
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__,
          EGeometryScriptBakeCurvatureTypeMode param_1,EGeometryScriptBakeCurvatureColorMode param_2
          ,float param_3,float param_4,EGeometryScriptBakeCurvatureClampMode param_5)

{
  TSharedPtr<FGeometryScriptBakeTypes,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGeometryScriptBakeTypeOptions *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *local_58;
  FSharedReferencer<1> local_50 [5];
  
  pTVar1 = &__return_storage_ptr__->Options;
  __return_storage_ptr__->BakeType = Curvature;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    _DAT_00000018 = param_4;
    DAT_00000010 = param_1;
    DAT_00000011 = param_2;
    _DAT_00000014 = param_3;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometryScriptBakeType_Curvature___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)((longlong)&pTVar4[1]._padding_ + 4) = 0x3f800000;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar5;
      }
    }
    *(EGeometryScriptBakeCurvatureTypeMode *)&pTVar7->_padding_ = param_1;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar5;
      }
    }
    *(EGeometryScriptBakeCurvatureColorMode *)((longlong)&pTVar4[1]._padding_ + 1) = param_2;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar5;
      }
    }
    *(float *)((longlong)&pTVar4[1]._padding_ + 4) = param_3;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar5;
      }
    }
    pTVar4[1].SharedReferenceCount = (atomic<int>)param_4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar4;
  }
  local_58 = pTVar7;
  local_50[0].ReferenceController = pTVar6;
  if (pTVar1 != (TSharedPtr<FGeometryScriptBakeTypes,1> *)&local_58) {
    pTVar1->Object = (FGeometryScriptBakeTypes *)pTVar7;
    local_58 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Options).SharedReferenceCount,local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// MakeBakeTypeFaceNormal @ 14cddc700

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeFaceNormal
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__)

{
  __return_storage_ptr__->BakeType = FaceNormal;
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MakeBakeTypeHeight @ 14cddc720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeHeight
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__,
          EGeometryScriptBakeHeightRangeMode param_1,float param_2,float param_3)

{
  TSharedPtr<FGeometryScriptBakeTypes,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGeometryScriptBakeTypeOptions *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> local_40 [5];
  
  pTVar1 = &__return_storage_ptr__->Options;
  __return_storage_ptr__->BakeType = Height;
  pTVar1->Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    DAT_00000010 = param_1;
    _DAT_00000014 = param_2;
    _DAT_00000018 = param_3;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometryScriptBakeType_Height___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar4[1]._padding_ + 4) = 0xbf800000;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x3f800000;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar5;
      }
    }
    *(EGeometryScriptBakeHeightRangeMode *)&pTVar6->_padding_ = param_1;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar5;
      }
    }
    *(float *)((longlong)&pTVar4[1]._padding_ + 4) = param_2;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar5;
      }
    }
    pTVar4[1].SharedReferenceCount = (atomic<int>)param_3;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pTVar6;
  local_40[0].ReferenceController = pTVar4;
  if (pTVar1 != (TSharedPtr<FGeometryScriptBakeTypes,1> *)&local_48) {
    pTVar1->Object = (FGeometryScriptBakeTypes *)pTVar6;
    local_48 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Options).SharedReferenceCount,local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// MakeBakeTypeMaterialID @ 14cddc920

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMaterialID
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__)

{
  __return_storage_ptr__->BakeType = MaterialID;
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MakeBakeTypeMultiTexture @ 14cddc940

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMultiTexture
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__,
          TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FGeometryScriptBakeTypeOptions *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->BakeType = MultiTexture;
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x28);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9 = pTVar6 + 1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometryScriptBakeType_MultiTexture___00_SharedPointerInternals__6B_
    ;
    pTVar6[2]._padding_ = 0;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGeometryScriptBakeTypeOptions *)(*pcVar4)();
        return pFVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pTVar8 = pTVar6;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGeometryScriptBakeTypeOptions *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  aVar2 = (atomic<int>)param_1->ArrayNum;
  paVar1 = &pTVar9->WeakReferenceCount;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pTVar9->SharedReferenceCount = aVar2;
  if ((aVar2 == (atomic<int>)0x0) && (*paVar1 == (atomic<int>)0x0)) {
    *paVar1 = (atomic<int>)0x0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)aVar2,(int)*paVar1,(ForAnyElementType *)pTVar9,(int)aVar2,(int *)paVar1);
    ConstructItems<TObjectPtr<UTexture2D>,UTexture2D_*,int>
              ((void *)pTVar9->_padding_,(UTexture2D **)pFVar3,(int)aVar2);
  }
  *(int *)&pTVar9[1]._padding_ = param_2;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pTVar9;
  local_30.ReferenceController = pTVar8;
  if (&__return_storage_ptr__->Options != (TSharedPtr<FGeometryScriptBakeTypes,1> *)&local_38) {
    (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)pTVar9;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Options).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// MakeBakeTypeObjectNormal @ 14cddcaf0

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeObjectNormal
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__)

{
  __return_storage_ptr__->BakeType = ObjectSpaceNormal;
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MakeBakeTypePosition @ 14cddcb10

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypePosition
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__)

{
  __return_storage_ptr__->BakeType = Position;
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MakeBakeTypeTangentNormal @ 14cddcb30

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTangentNormal
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__)

{
  __return_storage_ptr__->BakeType = TangentSpaceNormal;
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MakeBakeTypeTexture @ 14cddcb50

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTexture
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__,UTexture2D *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGeometryScriptBakeTypeOptions *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  
  __return_storage_ptr__->BakeType = Texture;
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometryScriptBakeType_Texture___00_SharedPointerInternals__6B_
    ;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[1]._padding_ = 0;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FGeometryScriptBakeTypeOptions *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FGeometryScriptBakeTypeOptions *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar5->_padding_ = (longlong)param_1;
  pTVar5->SharedReferenceCount = (atomic<int>)param_2;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pTVar5;
  local_30.ReferenceController = pTVar3;
  if (&__return_storage_ptr__->Options != (TSharedPtr<FGeometryScriptBakeTypes,1> *)&local_38) {
    (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)pTVar5;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Options).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// MakeBakeTypeUVShell @ 14cddccd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeUVShell
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__,int param_1,float param_2,
          FLinearColor *param_3,FLinearColor *param_4,FLinearColor *param_5)

{
  TSharedPtr<FGeometryScriptBakeTypes,1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FGeometryScriptBakeTypeOptions *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_58;
  FSharedReferencer<1> local_50 [5];
  
  pTVar1 = &__return_storage_ptr__->Options;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->BakeType = UVShell;
  pTVar1->Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    _DAT_00000018 = *(undefined8 *)&param_3->field0_0x0;
    _DAT_00000020 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    _DAT_00000028 = *(undefined8 *)&param_4->field0_0x0;
    _DAT_00000030 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    _DAT_00000038 = *(undefined8 *)&param_5->field0_0x0;
    _DAT_00000040 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    _DAT_00000010 = param_1;
    _DAT_00000014 = param_2;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometryScriptBakeType_UVShell___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&pTVar6[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[1]._padding_ + 4) = 0x3f800000;
    *(FLinearColor_u_0 *)&pTVar6[1].SharedReferenceCount =
         (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
    *(FLinearColor_u_0 *)&pTVar6[2].SharedReferenceCount =
         (FLinearColor_u_0_s_0)FLinearColor::Gray.field0_0x0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar9 = pTVar6 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar7;
      }
    }
    *(int *)&pTVar9->_padding_ = param_1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar7;
      }
    }
    *(float *)((longlong)&pTVar6[1]._padding_ + 4) = param_2;
    uVar3 = *(undefined8 *)&param_3->field0_0x0;
    lVar4 = *(longlong *)((longlong)&param_3->field0_0x0 + 8);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar7;
      }
    }
    pTVar6[1].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[2]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&param_4->field0_0x0;
    lVar4 = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar7;
      }
    }
    pTVar6[2].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[3]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&param_5->field0_0x0;
    lVar4 = *(longlong *)((longlong)&param_5->field0_0x0 + 8);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FGeometryScriptBakeTypeOptions *)(*pcVar2)();
        return pFVar7;
      }
    }
    pTVar6[3].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[3].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[4]._padding_ = lVar4;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTVar6;
  }
  local_58 = pTVar9;
  local_50[0].ReferenceController = pTVar8;
  if (pTVar1 != (TSharedPtr<FGeometryScriptBakeTypes,1> *)&local_58) {
    pTVar1->Object = (FGeometryScriptBakeTypes *)pTVar9;
    local_58 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Options).SharedReferenceCount,local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// MakeBakeTypeVertexColor @ 14cddcfa0

FGeometryScriptBakeTypeOptions * __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeVertexColor
          (FGeometryScriptBakeTypeOptions *__return_storage_ptr__)

{
  __return_storage_ptr__->BakeType = VertexColor;
  (__return_storage_ptr__->Options).Object = (FGeometryScriptBakeTypes *)0x0;
  (__return_storage_ptr__->Options).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshBakeFunctions @ 14cde7160

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshBakeFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBakeTexture @ 14cdf40b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execBakeTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  EGeometryScriptBakeBitDepth EVar6;
  undefined1 uVar7;
  UObject *pUVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  FGeometryScriptBakeTextureOptions *pFVar30;
  bool bVar31;
  undefined1 auStackY_3c8 [32];
  uint local_370 [2];
  TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> local_368;
  undefined1 local_358 [32];
  TTransform<double> *local_338;
  FMeshMapBaker *local_330;
  longlong local_328;
  undefined1 local_320 [40];
  UObject *local_2f8;
  undefined1 local_2f0;
  undefined4 local_2ec;
  undefined1 local_2e8;
  TTransform<double> *local_2e0;
  TArray<FGeometryScriptBakeTypeOptions,TSizedDefaultAllocator<32>_> local_2d8;
  undefined1 local_2c8 [16];
  UObject *local_2b8;
  undefined1 local_2b0;
  undefined4 local_2ac;
  undefined1 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*),FDefaultDelegateUserPolicy> local_288;
  undefined1 local_268 [24];
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*),FDefaultDelegateUserPolicy> local_1c8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_330 = (FMeshMapBaker *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_330,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_330);
  }
  local_148._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_148._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_370[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_370,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_370);
  }
  local_338 = (TTransform<double> *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_338,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_338);
  }
  local_1a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_198._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_198._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_198._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_188._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_188._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_178._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_178._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_178._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_168._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_158._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_158._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1a8);
  }
  local_320._8_8_ = (UObject *)0x0;
  local_320._16_4_ = 0;
  local_320[0x14] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_320 + 8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_320 + 8);
  }
  local_358._0_8_ = (FGeometryScriptBakeTypeOptions *)0x0;
  local_358._8_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_358,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_358);
  }
  local_320._24_2_ = 4;
  local_320._28_4_ = 4;
  pFVar30 = (FGeometryScriptBakeTextureOptions *)local_358;
  if ((FGeometryScriptBakeTextureOptions *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptBakeTextureOptions *)0x0) {
    pFVar30 = (FGeometryScriptBakeTextureOptions *)param_2->MostRecentPropertyAddress;
  }
  local_320[0x20] = 0;
  local_2f8 = (UObject *)0x0;
  local_2f0 = 0;
  local_2ec = 0x40400000;
  local_2e8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_320 + 0x18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_320 + 0x18);
  }
  local_358._24_8_ = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_358 + 0x18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_358 + 0x18);
  }
  pUVar8 = local_2f8;
  uVar7 = local_320[0x20];
  local_328 = local_358._24_8_;
  uVar5 = local_320[0x18];
  EVar6 = local_320[0x19];
  local_358._16_4_ = local_320._28_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2f8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_2f8);
  }
  uVar11 = local_2e8;
  uVar10 = local_2ec;
  uVar9 = local_2f0;
  uVar3 = local_320._8_8_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_320._8_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_320._8_8_);
  }
  uVar4 = local_320[0x14];
  uVar2 = local_370[0];
  uVar12 = local_1a8._0_8_;
  uVar13 = local_1a8._8_8_;
  uVar14 = local_198._0_8_;
  uVar15 = local_198._8_8_;
  uVar16 = local_188._0_8_;
  uVar17 = local_188._8_8_;
  uVar18 = local_178._0_8_;
  uVar19 = local_178._8_8_;
  uVar20 = local_168._0_8_;
  uVar21 = local_168._8_8_;
  uVar22 = local_158._0_8_;
  uVar23 = local_158._8_8_;
  uVar24 = local_148._0_8_;
  uVar25 = local_148._8_8_;
  uVar26 = local_138._0_8_;
  uVar27 = local_138._8_8_;
  uVar28 = local_128._0_8_;
  uVar29 = local_128._8_8_;
  local_358._20_4_ = local_320._16_4_;
  local_2e0 = local_338;
  local_320._0_8_ = local_330;
  bVar31 = local_328 == 0;
  local_298 = local_118._0_8_;
  uStack_290 = local_118._8_8_;
  local_288._0_8_ = local_108._0_8_;
  local_288._8_8_ = local_108._8_8_;
  local_328 = local_328 + 0x28;
  if (bVar31) {
    local_328 = 0;
  }
  local_2c8[0] = uVar5;
  local_2c8[1] = EVar6;
  local_2c8._4_4_ = local_358._16_4_;
  local_2c8[8] = uVar7;
  local_288._16_8_ = local_f8._0_8_;
  local_288._24_8_ = local_f8._8_8_;
  local_2b8 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_2a8 = uVar11;
  local_2ac = uVar10;
  local_2b0 = uVar9;
  local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)uVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UObject *)uVar3 != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)uVar3);
  }
  local_2d8.ArrayNum = local_358._20_4_;
  local_2d8.ArrayMax._0_1_ = uVar4;
  local_1d8 = local_298;
  uStack_1d0 = uStack_290;
  local_268._0_8_ = uVar12;
  local_268._8_8_ = uVar13;
  local_268._16_8_ = uVar14;
  uStack_250 = uVar15;
  local_248 = uVar16;
  uStack_240 = uVar17;
  local_238 = uVar18;
  uStack_230 = uVar19;
  local_228 = uVar20;
  uStack_220 = uVar21;
  local_218 = uVar22;
  uStack_210 = uVar23;
  local_208 = uVar24;
  uStack_200 = uVar25;
  local_1f8 = uVar26;
  uStack_1f0 = uVar27;
  local_1e8 = uVar28;
  uStack_1e0 = uVar29;
  local_1c8._0_8_ = local_288._0_8_;
  local_1c8._8_8_ = local_288._8_8_;
  local_1c8._16_8_ = local_288._16_8_;
  local_1c8._24_8_ = local_288._24_8_;
  GeometryScriptBakeLocals::BakeTextureImpl
            ((UDynamicMesh *)local_320,(TTransform<double> *)local_320._0_8_,
             (FGeometryScriptBakeTargetMeshOptions)(int)&local_208,(UDynamicMesh *)(ulonglong)uVar2,
             local_2e0,(FGeometryScriptBakeSourceMeshOptions *)local_268,&local_2d8,pFVar30,
             (TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *)local_2c8);
  uVar3 = local_320._0_8_;
  local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.ArrayNum = 0;
  local_368.ArrayMax = 0;
  GeometryScriptBakeLocals::GetTexturesFromBaker((FMeshMapBaker *)local_320._0_8_,EVar6,&local_368);
  if ((FMeshMapBaker *)uVar3 != (FMeshMapBaker *)0x0) {
    (*(code *)**(undefined8 **)uVar3)(uVar3,1);
  }
  if (param_3 != &local_368) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_368.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_368.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_368.ArrayMax;
    local_368.ArrayNum = 0;
    local_368.ArrayMax = 0;
    local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.AllocatorInstance.Data);
  }
  DestructItems<FGeometryScriptBakeTypeOptions,int>
            ((FGeometryScriptBakeTypeOptions *)local_358._0_8_,local_358._8_4_);
  if ((FGeometryScriptBakeTypeOptions *)local_358._0_8_ != (FGeometryScriptBakeTypeOptions *)0x0) {
    FMemory::Free((void *)local_358._0_8_);
  }
  return;
}

// execBakeTextureFromRenderCaptures @ 14cdf4790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execBakeTextureFromRenderCaptures
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  UGeometryScriptDebug *pUVar3;
  FGeometryScriptRenderCaptureTextures *pFVar4;
  longlong lVar5;
  undefined1 auStackY_288 [32];
  FGeometryScriptBakeTargetMeshOptions local_248 [4];
  void *local_238;
  undefined8 local_230;
  EGeometryScriptBakeResolution local_228;
  double local_220;
  double dStack_218;
  undefined2 local_210;
  undefined1 local_20e;
  float local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_200;
  UGeometryScriptDebug *local_1f8;
  UDynamicMesh *local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_1d8;
  FGeometryScriptBakeRenderCaptureOptions local_1c8;
  TTransform<double> local_188;
  FGeometryScriptRenderCaptureTextures local_128;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_1f0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_248[0].TargetUVLayer = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_248,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_248);
  }
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_220 = ___xmm_3ff00000000000004046800000000000;
  dStack_218 = _UNK_1528fb388;
  local_238 = (void *)0x0;
  local_230 = 0;
  local_228 = Resolution256;
  local_210 = 4;
  local_20e = 0;
  local_20c = 0.0;
  local_208 = 0x10101;
  local_204 = 0x1010000;
  local_200 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  local_1f8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  pUVar3 = local_1f8;
  pvVar2 = local_238;
  local_1c8.Cameras.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_230;
  local_1c8.Cameras.ArrayNum = (int)local_230;
  if ((int)local_230 == 0) {
    local_1c8.Cameras.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,(int)local_230,0,(ForAnyElementType *)&local_1c8,(int)local_230,
               &local_1c8.Cameras.ArrayMax);
    memcpy(local_1c8.Cameras.AllocatorInstance.Data,pvVar2,lVar5 * 0x48);
  }
  pvVar2 = local_1e8;
  lVar5 = (longlong)(int)local_1e0;
  local_1c8.RenderCaptureResolution = local_228;
  local_1c8.Resolution = (EGeometryScriptBakeResolution)local_210;
  local_1c8.SamplesPerPixel = local_210._1_1_;
  local_1c8.bRenderCaptureAntiAliasing = (bool)local_20e;
  local_1c8.bBaseColorMap = (bool)(undefined1)local_208;
  local_1c8.bNormalMap = (bool)local_208._1_1_;
  local_1c8.bPackedMRSMap = (bool)local_208._2_1_;
  local_1c8.bMetallicMap = (bool)local_208._3_1_;
  local_1c8.bRoughnessMap = (bool)(undefined1)local_204;
  local_1c8.bSpecularMap = (bool)local_204._1_1_;
  local_1c8.bEmissiveMap = (bool)local_204._2_1_;
  local_1c8.bOpacityMap = (bool)local_204._3_1_;
  local_1c8.bSubsurfaceColorMap = (bool)local_200;
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = (int)local_1e0;
  local_1c8.FieldOfViewDegrees = local_220;
  local_1c8.NearPlaneDist = dStack_218;
  local_1c8.CleanupTolerance = local_20c;
  if ((int)local_1e0 == 0) {
    local_1d8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_1e0,0,&local_1d8.AllocatorInstance,(int)local_1e0,&local_1d8.ArrayMax)
    ;
    memcpy(local_1d8.AllocatorInstance.Data,pvVar2,lVar5 << 3);
  }
  local_188.Rotation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_188.Rotation.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_188.Rotation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_188.Rotation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_188.Translation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_188.Translation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_188.Translation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_188.Translation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_188.Scale3D.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_188.Scale3D.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_188.Scale3D.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_188.Scale3D.ZW.m128d_f64[1] = (double)local_48._8_8_;
  pFVar4 = BakeTextureFromRenderCaptures
                     (&local_128,local_1f0,&local_188,local_248[0],&local_1d8,&local_1c8,pUVar3);
  FGeometryScriptRenderCaptureTextures::operator=(param_3,pFVar4);
  if (local_238 != (void *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_1e8 != (void *)0x0) {
    FMemory::Free(local_1e8);
  }
  return;
}

// execBakeVertex @ 14cdf4bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execBakeVertex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EGeometryScriptBakeTypes EVar9;
  EGeometryScriptBakeTypes EVar10;
  EGeometryScriptBakeTypes EVar11;
  EGeometryScriptBakeTypes EVar12;
  int iVar13;
  FProperty *pFVar14;
  double dVar15;
  code *pcVar16;
  undefined8 uVar17;
  UObject *pUVar18;
  undefined1 uVar19;
  bool bVar20;
  FGeometryScriptBakeOutputType *pFVar21;
  FGeometryScriptBakeOutputType *pFVar22;
  TVector4<float> *pTVar23;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  FMeshVertexBaker *pFVar29;
  int iVar30;
  TTransform<double> *pTVar31;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  float fVar39;
  undefined1 auStackY_4e8 [32];
  uint local_494;
  float local_490;
  undefined1 local_488 [40];
  uint local_460;
  undefined2 local_458;
  undefined1 uStack_456;
  undefined1 uStack_455;
  undefined4 uStack_454;
  uint local_450;
  float local_448;
  longlong local_440;
  FMeshVertexBaker *local_438;
  TTransform<double> *local_430;
  TTransform<double> *local_428;
  UObject *local_420;
  float local_418;
  undefined1 local_414;
  FGeometryScriptBakeOutputType *local_410;
  undefined8 *local_408;
  UObject *local_400;
  float local_3f8;
  undefined1 local_3f4;
  undefined1 local_3e8 [40];
  FGeometryScriptBakeTypes *local_3c0;
  FSharedReferencer<1> local_3b8;
  EGeometryScriptBakeTypes local_3b0;
  FGeometryScriptBakeTypes *local_3a8;
  FSharedReferencer<1> FStack_3a0;
  EGeometryScriptBakeTypes local_398;
  FGeometryScriptBakeTypes *local_390;
  FSharedReferencer<1> local_388;
  EGeometryScriptBakeTypes local_380;
  FGeometryScriptBakeTypes *local_378;
  FSharedReferencer<1> FStack_370;
  TObjectPtr<UTexture2D>_u_0 local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  double local_338;
  double dStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  FGeometryScriptBakeOutputType local_2a8;
  FGeometryScriptBakeOutputType local_228;
  TObjectPtr<UTexture2D>_u_0 local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_430 = (TTransform<double> *)0x0;
  local_408 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_430,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_430);
  }
  local_148 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_140 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_138 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_130 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_118 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_494 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_494,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_494);
  }
  local_438 = (FMeshVertexBaker *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_438,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_438);
  }
  local_1a8 = (TObjectPtr<UTexture2D>_u_0)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_1a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_198 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_190 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_178 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_170 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_188._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_188._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_158 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_150 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_168._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_420 = (UObject *)0x0;
  local_418 = 0.0;
  local_414 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_420,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_420);
  }
  local_3e8[0] = RGBA;
  local_3e8._16_8_ = (FGeometryScriptBakeTypes *)0x0;
  local_3e8._24_8_ = (FDynamicMesh3 *)0x0;
  local_3a8 = (FGeometryScriptBakeTypes *)0x0;
  FStack_3a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_378 = (FGeometryScriptBakeTypes *)0x0;
  FStack_370.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3e8[8] = None;
  local_3e8[0x20] = None;
  local_3c0 = (FGeometryScriptBakeTypes *)0x0;
  local_3b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3b0 = None;
  local_398 = None;
  local_390 = (FGeometryScriptBakeTypes *)0x0;
  local_388.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_380 = None;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,(FGeometryScriptBakeOutputType *)local_3e8,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(FGeometryScriptBakeOutputType *)local_3e8);
  }
  local_458 = 0;
  uStack_456 = 0;
  uStack_454 = 0x40400000;
  local_450 = local_450 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_458,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_458);
  }
  local_440 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_440,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_440);
  }
  uVar33 = local_450;
  local_488._32_8_ = CONCAT44(uStack_454,CONCAT13(uStack_455,CONCAT12(uStack_456,local_458)));
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_460 = local_450;
  pFVar21 = FGeometryScriptBakeOutputType::FGeometryScriptBakeOutputType
                      (&local_2a8,(FGeometryScriptBakeOutputType *)local_3e8);
  pUVar18 = local_420;
  local_410 = pFVar21;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_420 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_420);
  }
  uVar19 = local_414;
  pTVar31 = local_430;
  uVar32 = local_494;
  local_490 = local_418;
  local_488._0_8_ = local_438;
  local_368 = local_1a8;
  dStack_360 = dStack_1a0;
  local_358 = local_198;
  dStack_350 = dStack_190;
  local_348 = local_188._0_8_;
  uStack_340 = local_188._8_8_;
  local_338 = local_178;
  dStack_330 = dStack_170;
  local_328 = local_168._0_8_;
  uStack_320 = local_168._8_8_;
  local_318 = local_158;
  dStack_310 = dStack_150;
  local_308 = local_148;
  dStack_300 = dStack_140;
  local_2f8 = local_138;
  dStack_2f0 = dStack_130;
  local_2e8 = local_128._0_8_;
  uStack_2e0 = local_128._8_8_;
  local_2d8 = local_118;
  dStack_2d0 = dStack_110;
  local_2c8 = local_108._0_8_;
  uStack_2c0 = local_108._8_8_;
  local_488._8_8_ = local_488._32_8_;
  local_428 = local_430;
  local_2b8 = local_f8;
  dStack_2b0 = dStack_f0;
  local_488._17_3_ = (int3)(local_460 >> 8);
  local_488[0x10] = (char)uVar33;
  pFVar22 = FGeometryScriptBakeOutputType::FGeometryScriptBakeOutputType(&local_228,pFVar21);
  local_400 = pUVar18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar18);
  }
  local_460 = local_488._16_4_;
  local_3f8 = local_490;
  local_3f4 = uVar19;
  local_488._32_8_ = local_488._8_8_;
  GeometryScriptBakeLocals::BakeVertexImpl
            ((UDynamicMesh *)local_488,pTVar31,(FGeometryScriptBakeTargetMeshOptions)(int)&local_308
             ,(UDynamicMesh *)(ulonglong)uVar32,(TTransform<double> *)local_488._0_8_,
             (FGeometryScriptBakeSourceMeshOptions *)&local_368.ObjectPtr,
             (FGeometryScriptBakeOutputType *)&local_400,(FGeometryScriptBakeVertexOptions *)pFVar22
             ,(TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *)(local_488 + 0x20))
  ;
  pFVar29 = (FMeshVertexBaker *)local_488._0_8_;
  if (((FMeshVertexBaker *)local_488._0_8_ != (FMeshVertexBaker *)0x0) &&
     (pTVar31 != (TTransform<double> *)0x0)) {
    if (pFVar21->OutputMode == PerChannel) {
      EVar9 = (pFVar21->R).BakeType;
      uVar34 = 0;
      EVar10 = (pFVar21->G).BakeType;
      EVar11 = (pFVar21->B).BakeType;
      EVar12 = (pFVar21->A).BakeType;
      dVar15 = pTVar31[1].Scale3D.ZW.m128d_f64[1];
      fVar39 = (float)(EVar12 == None);
      local_490 = (float)(EVar12 != None);
      uVar26 = uVar34;
      if (*(ulonglong *)((longlong)dVar15 + 0x208) != 0) {
        uVar26 = *(ulonglong *)((longlong)dVar15 + 0x208);
      }
      iVar13 = *(int *)(*(longlong *)(uVar26 + 0x40) + 0x38);
      local_448 = fVar39;
      local_488._8_8_ =
           UE::Geometry::FMeshVertexBaker::GetBakeResult((FMeshVertexBaker *)local_488._0_8_);
      if ((iVar13 != (((TImageBuilder<UE::Math::TVector4<float>_> *)local_488._8_8_)->Dimensions).
                     Width) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumColors == ImageResult->GetDimensions().GetWidth()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshBakeFunctions.cpp"
                              ,0x3a1,L""), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar17 = local_488._8_8_;
      if (0 < iVar13) {
        uVar36 = 0;
        uVar26 = uVar36;
        uVar37 = uVar34;
        do {
          uVar25 = uVar36;
          if (*(ulonglong *)((longlong)dVar15 + 0x208) != 0) {
            uVar25 = *(ulonglong *)((longlong)dVar15 + 0x208);
          }
          uVar33 = (uint)uVar26;
          uVar32 = (uint)uVar34;
          if (*(longlong *)(uVar25 + 0x40) != 0) {
            lVar38 = *(longlong *)(*(longlong *)(uVar25 + 0x40) + 0x48);
            fVar2 = *(float *)(*(longlong *)(lVar38 + (uVar26 >> 9) * 8) +
                              (ulonglong)(uVar33 & 0x1ff) * 4);
            fVar3 = *(float *)(*(longlong *)(lVar38 + (ulonglong)(uVar33 + 1 >> 9) * 8) +
                              (ulonglong)(uVar33 + 1 & 0x1ff) * 4);
            fVar4 = *(float *)(*(longlong *)(lVar38 + (ulonglong)(uVar33 + 2 >> 9) * 8) +
                              (ulonglong)(uVar33 + 2 & 0x1ff) * 4);
            fVar5 = *(float *)(*(longlong *)(lVar38 + (ulonglong)(uVar33 + 3 >> 9) * 8) +
                              (ulonglong)(uVar33 + 3 & 0x1ff) * 4);
            pTVar23 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                ((TDenseGrid2<UE::Math::TVector4<float>_> *)(uVar17 + 8),uVar37);
            uVar35 = uVar32 * 4;
            fVar6 = (pTVar23->field0_0x0)._s_0.Y;
            fVar7 = (pTVar23->field0_0x0)._s_0.Z;
            fVar8 = (pTVar23->field0_0x0)._s_0.W;
            uVar26 = uVar36;
            if (*(ulonglong *)((longlong)dVar15 + 0x208) != 0) {
              uVar26 = *(ulonglong *)((longlong)dVar15 + 0x208);
            }
            lVar38 = *(longlong *)(uVar26 + 0x40);
            *(float *)(*(longlong *)
                        (*(longlong *)(lVar38 + 0x48) + (ulonglong)((uVar32 & 0x3fffffff) >> 7) * 8)
                      + (ulonglong)(uVar35 & 0x1ff) * 4) =
                 (float)(EVar9 != None) * (pTVar23->field0_0x0)._s_0.X +
                 (float)(EVar9 == None) * fVar2;
            *(float *)(*(longlong *)
                        (*(longlong *)(lVar38 + 0x48) + (ulonglong)((uVar32 & 0x3fffffff) >> 7) * 8)
                      + (ulonglong)(uVar35 + 1 & 0x1ff) * 4) =
                 (float)(EVar10 != None) * fVar6 + (float)(EVar10 == None) * fVar3;
            *(float *)(*(longlong *)
                        (*(longlong *)(lVar38 + 0x48) + (ulonglong)((uVar32 & 0x3fffffff) >> 7) * 8)
                      + (ulonglong)(uVar35 + 2 & 0x1ff) * 4) =
                 (float)(EVar11 != None) * fVar7 + (float)(EVar11 == None) * fVar4;
            *(float *)(*(longlong *)
                        (*(longlong *)(lVar38 + 0x48) + (ulonglong)((uVar32 & 0x3fffffff) >> 7) * 8)
                      + (ulonglong)(uVar35 + 3 & 0x1ff) * 4) = local_490 * fVar8 + fVar39 * fVar5;
            fVar39 = local_448;
          }
          uVar34 = (ulonglong)(uVar32 + 1);
          uVar37 = uVar37 + 1;
          uVar26 = (ulonglong)(uVar33 + 4);
          pFVar29 = (FMeshVertexBaker *)local_488._0_8_;
          pTVar31 = local_428;
          pFVar21 = local_410;
        } while ((int)(uVar32 + 1) < iVar13);
      }
    }
    else {
      dVar15 = pTVar31[1].Scale3D.ZW.m128d_f64[1];
      pTVar24 = UE::Geometry::FMeshVertexBaker::GetBakeResult((FMeshVertexBaker *)local_488._0_8_);
      lVar38 = *(longlong *)((longlong)dVar15 + 0x208);
      lVar27 = 0;
      if (lVar38 != 0) {
        lVar27 = lVar38;
      }
      iVar13 = *(int *)(*(longlong *)(lVar27 + 0x40) + 0x38);
      if ((iVar13 != (pTVar24->Dimensions).Width) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumColors == ImageResult->GetDimensions().GetWidth()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshBakeFunctions.cpp"
                              ,0x3b6,L""), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar30 = 0;
      pTVar31 = local_428;
      if (0 < iVar13) {
        lVar38 = 0;
        uVar26 = 0;
        do {
          pTVar23 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                              (&pTVar24->Image,lVar38);
          lVar27 = *(longlong *)((longlong)dVar15 + 0x208);
          uVar33 = (uint)uVar26;
          lVar28 = 0;
          if (lVar27 != 0) {
            lVar28 = lVar27;
          }
          iVar30 = iVar30 + 1;
          lVar38 = lVar38 + 1;
          lVar27 = *(longlong *)(lVar28 + 0x40);
          *(float *)(*(longlong *)(*(longlong *)(lVar27 + 0x48) + (uVar26 >> 9) * 8) +
                    (ulonglong)(uVar33 & 0x1ff) * 4) = (pTVar23->field0_0x0)._s_0.X;
          *(float *)(*(longlong *)(*(longlong *)(lVar27 + 0x48) + (ulonglong)(uVar33 + 1 >> 9) * 8)
                    + (ulonglong)(uVar33 + 1 & 0x1ff) * 4) = (pTVar23->field0_0x0)._s_0.Y;
          uVar26 = (ulonglong)(uVar33 + 4);
          *(float *)(*(longlong *)(*(longlong *)(lVar27 + 0x48) + (ulonglong)(uVar33 + 2 >> 9) * 8)
                    + (ulonglong)(uVar33 + 2 & 0x1ff) * 4) = (pTVar23->field0_0x0)._s_0.Z;
          *(float *)(*(longlong *)(*(longlong *)(lVar27 + 0x48) + (ulonglong)(uVar33 + 3 >> 9) * 8)
                    + (ulonglong)(uVar33 + 3 & 0x1ff) * 4) = (pTVar23->field0_0x0)._s_0.W;
          pFVar29 = (FMeshVertexBaker *)local_488._0_8_;
          pTVar31 = local_428;
          pFVar21 = local_410;
        } while (iVar30 < iVar13);
      }
    }
  }
  if (pFVar29 != (FMeshVertexBaker *)0x0) {
    (**(code **)pFVar29->_padding_)(pFVar29,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar21->A).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar21->B).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar21->G).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar21->R).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar21->RGBA).Options.SharedReferenceCount.ReferenceController);
  *local_408 = pTVar31;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_370.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3e8._24_8_);
  return;
}

// execConvertBakeResolutionToInt @ 14cdf9e10

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execConvertBakeResolutionToInt
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = 0x100;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  case 0:
    *(undefined4 *)param_3 = 0x10;
    return;
  case 1:
    *(undefined4 *)param_3 = 0x20;
    return;
  case 2:
    *(undefined4 *)param_3 = 0x40;
    return;
  case 3:
    *(undefined4 *)param_3 = 0x80;
    return;
  case 5:
    *(undefined4 *)param_3 = 0x200;
    return;
  case 6:
    *(undefined4 *)param_3 = 0x400;
    return;
  case 7:
    *(undefined4 *)param_3 = 0x800;
    return;
  case 8:
    *(undefined4 *)param_3 = 0x1000;
    return;
  case 9:
    uVar2 = 0x2000;
  }
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execMakeBakeTypeAmbientOcclusion @ 14ce0a960

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeAmbientOcclusion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGeometryScriptBakeType_Occlusion *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  bool bVar10;
  TSharedRef<FGeometryScriptBakeType_Occlusion,1> *pTVar11;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  int local_98 [2];
  undefined8 local_90;
  FSharedReferencer<1> local_88;
  TSharedRef<FGeometryScriptBakeType_Occlusion,1> local_80;
  undefined1 local_70;
  FGeometryScriptBakeType_Occlusion *local_68;
  FSharedReferencer<1> local_60 [7];
  
  local_98[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar9 = local_98[0];
  fVar8 = local_res20[0];
  fVar7 = local_res18[0];
  fVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_70 = 7;
  pTVar11 = MakeShared<FGeometryScriptBakeType_Occlusion,1>(&local_80);
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar11->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  if (pFVar4 == (FGeometryScriptBakeType_Occlusion *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4->OcclusionRays = iVar9;
  if (pFVar4 == (FGeometryScriptBakeType_Occlusion *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4->MaxDistance = fVar8;
  pFVar4->SpreadAngle = fVar7;
  pFVar4->BiasAngle = fVar6;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = 0;
  local_88.ReferenceController = pTVar3;
  local_68 = pFVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_60,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined1 *)param_3 = local_70;
  if ((FGeometryScriptBakeType_Occlusion **)((longlong)param_3 + 8) != &local_68) {
    *(FGeometryScriptBakeType_Occlusion **)((longlong)param_3 + 8) = local_68;
    local_68 = (FGeometryScriptBakeType_Occlusion *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60[0].ReferenceController);
  return;
}

// execMakeBakeTypeBentNormal @ 14ce0abc0

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeBentNormal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGeometryScriptBakeType_Occlusion *pFVar4;
  code *pcVar5;
  EGeometryScriptBakeNormalSpace EVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  bool bVar10;
  TSharedRef<FGeometryScriptBakeType_Occlusion,1> *pTVar11;
  EGeometryScriptBakeNormalSpace local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  int local_98 [2];
  undefined8 local_90;
  FSharedReferencer<1> local_88;
  TSharedRef<FGeometryScriptBakeType_Occlusion,1> local_80;
  undefined1 local_70;
  FGeometryScriptBakeType_Occlusion *local_68;
  FSharedReferencer<1> local_60 [5];
  
  local_98[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Tangent;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar9 = local_98[0];
  fVar8 = local_res20[0];
  fVar7 = local_res18[0];
  EVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_70 = 4;
  pTVar11 = MakeShared<FGeometryScriptBakeType_Occlusion,1>(&local_80);
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar11->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  if (pFVar4 == (FGeometryScriptBakeType_Occlusion *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4->OcclusionRays = iVar9;
  if (pFVar4 == (FGeometryScriptBakeType_Occlusion *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4->MaxDistance = fVar8;
  pFVar4->SpreadAngle = fVar7;
  pFVar4->NormalSpace = EVar6;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = 0;
  local_88.ReferenceController = pTVar3;
  local_68 = pFVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_60,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined1 *)param_3 = local_70;
  if ((FGeometryScriptBakeType_Occlusion **)((longlong)param_3 + 8) != &local_68) {
    *(FGeometryScriptBakeType_Occlusion **)((longlong)param_3 + 8) = local_68;
    local_68 = (FGeometryScriptBakeType_Occlusion *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60[0].ReferenceController);
  return;
}

// execMakeBakeTypeConstant @ 14ce0ae10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeConstant
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined4 local_res10 [2];
  FSharedReferencer<1> local_50;
  undefined1 local_48;
  TReferenceControllerBase<1> *local_40;
  FSharedReferencer<1> local_38 [4];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar3 = local_res10[0];
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  local_38[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48 = 0xc;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    _DAT_00000010 = uVar3;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7 = pTVar5 + 1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometryScriptBakeType_Constant___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&pTVar5[1]._padding_ = 0;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)&pTVar7->_padding_ = uVar3;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar5;
  }
  local_50.ReferenceController = pTVar6;
  local_40 = pTVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_38,&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined1 *)param_3 = local_48;
  if ((TReferenceControllerBase<1> **)((longlong)param_3 + 8) != &local_40) {
    *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = local_40;
    local_40 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].ReferenceController);
  return;
}

// execMakeBakeTypeCurvature @ 14ce0afe0

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeCurvature
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSharedPtr<FGeometryScriptBakeTypes,1> *pTVar1;
  FProperty *pFVar2;
  FGeometryScriptBakeTypeOptions *pFVar3;
  EGeometryScriptBakeCurvatureClampMode local_res10 [8];
  EGeometryScriptBakeCurvatureColorMode local_res18 [8];
  EGeometryScriptBakeCurvatureTypeMode local_res20 [8];
  float local_28;
  float local_24;
  FGeometryScriptBakeTypeOptions local_20;
  
  local_res20[0] = Mean;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = Grayscale;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_24 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_24,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_24);
  }
  local_28 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = MakeBakeTypeCurvature
                     (&local_20,local_res20[0],local_res18[0],local_24,local_28,local_res10[0]);
  pTVar1 = &pFVar3->Options;
  *(EGeometryScriptBakeTypes *)param_3 = pFVar3->BakeType;
  if ((TSharedPtr<FGeometryScriptBakeTypes,1> *)((longlong)param_3 + 8) != pTVar1) {
    *(FGeometryScriptBakeTypes **)((longlong)param_3 + 8) = pTVar1->Object;
    pTVar1->Object = (FGeometryScriptBakeTypes *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),
               &(pFVar3->Options).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.Options.SharedReferenceCount.ReferenceController);
  return;
}

// execMakeBakeTypeFaceNormal @ 14ce0b1c0

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeFaceNormal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 local_20;
  FSharedReferencer<1> aFStack_18 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 3;
  local_20 = 0;
  aFStack_18[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_3 + 8) != &local_20) {
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),aFStack_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_18[0].ReferenceController);
  return;
}

// execMakeBakeTypeHeight @ 14ce0b220

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeHeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSharedPtr<FGeometryScriptBakeTypes,1> *pTVar1;
  FProperty *pFVar2;
  FGeometryScriptBakeTypeOptions *pFVar3;
  EGeometryScriptBakeHeightRangeMode local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  FGeometryScriptBakeTypeOptions local_28;
  
  local_res10[0] = Absolute;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = MakeBakeTypeHeight(&local_28,local_res10[0],local_res20[0],local_res18[0]);
  pTVar1 = &pFVar3->Options;
  *(EGeometryScriptBakeTypes *)param_3 = pFVar3->BakeType;
  if ((TSharedPtr<FGeometryScriptBakeTypes,1> *)((longlong)param_3 + 8) != pTVar1) {
    *(FGeometryScriptBakeTypes **)((longlong)param_3 + 8) = pTVar1->Object;
    pTVar1->Object = (FGeometryScriptBakeTypes *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),
               &(pFVar3->Options).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Options.SharedReferenceCount.ReferenceController);
  return;
}

// execMakeBakeTypeMaterialID @ 14ce0b370

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeMaterialID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 local_20;
  FSharedReferencer<1> aFStack_18 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0xb;
  local_20 = 0;
  aFStack_18[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_3 + 8) != &local_20) {
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),aFStack_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_18[0].ReferenceController);
  return;
}

// execMakeBakeTypeMultiTexture @ 14ce0b3d0

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeMultiTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSharedPtr<FGeometryScriptBakeTypes,1> *pTVar1;
  FProperty *pFVar2;
  FGeometryScriptBakeTypeOptions *pFVar3;
  TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *pTVar4;
  int local_res10 [2];
  TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> local_38;
  FGeometryScriptBakeTypeOptions local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar4 = &local_38;
  if ((TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = MakeBakeTypeMultiTexture(&local_28,pTVar4,local_res10[0]);
  pTVar1 = &pFVar3->Options;
  *(EGeometryScriptBakeTypes *)param_3 = pFVar3->BakeType;
  if ((TSharedPtr<FGeometryScriptBakeTypes,1> *)((longlong)param_3 + 8) != pTVar1) {
    *(FGeometryScriptBakeTypes **)((longlong)param_3 + 8) = pTVar1->Object;
    pTVar1->Object = (FGeometryScriptBakeTypes *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),
               &(pFVar3->Options).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Options.SharedReferenceCount.ReferenceController);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execMakeBakeTypeObjectNormal @ 14ce0b510

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeObjectNormal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 local_20;
  FSharedReferencer<1> aFStack_18 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 2;
  local_20 = 0;
  aFStack_18[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_3 + 8) != &local_20) {
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),aFStack_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_18[0].ReferenceController);
  return;
}

// execMakeBakeTypePosition @ 14ce0b570

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypePosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 local_20;
  FSharedReferencer<1> aFStack_18 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 5;
  local_20 = 0;
  aFStack_18[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_3 + 8) != &local_20) {
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),aFStack_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_18[0].ReferenceController);
  return;
}

// execMakeBakeTypeTangentNormal @ 14ce0b5d0

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeTangentNormal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 local_20;
  FSharedReferencer<1> aFStack_18 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 1;
  local_20 = 0;
  aFStack_18[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_3 + 8) != &local_20) {
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),aFStack_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_18[0].ReferenceController);
  return;
}

// execMakeBakeTypeTexture @ 14ce0b630

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  UObject *pUVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  atomic<int> local_res10 [2];
  UObject *local_res18;
  FSharedReferencer<1> local_50;
  undefined1 local_48;
  TReferenceControllerBase<1> *local_40;
  FSharedReferencer<1> local_38 [2];
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = (atomic<int>)0x0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res18;
  aVar3 = local_res10[0];
  local_38[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48 = 8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar6 = ::operator_new(0x20);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7 = pTVar6 + 1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometryScriptBakeType_Texture___00_SharedPointerInternals__6B_
    ;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = 0;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  pTVar7->_padding_ = (longlong)pUVar4;
  pTVar7->SharedReferenceCount = aVar3;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50.ReferenceController = pTVar6;
  local_40 = pTVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_38,&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined1 *)param_3 = local_48;
  if ((TReferenceControllerBase<1> **)((longlong)param_3 + 8) != &local_40) {
    *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = local_40;
    local_40 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].ReferenceController);
  return;
}

// execMakeBakeTypeUVShell @ 14ce0b870

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeUVShell
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSharedPtr<FGeometryScriptBakeTypes,1> *pTVar1;
  FProperty *pFVar2;
  FGeometryScriptBakeTypeOptions *pFVar3;
  float local_res10 [2];
  int local_res18 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48;
  FLinearColor_u_0 local_38;
  FGeometryScriptBakeTypeOptions local_28;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_58._0_8_ = local_88;
  local_58._8_8_ = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48._0_8_ = local_78;
  local_48._8_8_ = uStack_70;
  local_38._0_8_ = local_68;
  local_38._8_8_ = uStack_60;
  pFVar3 = MakeBakeTypeUVShell(&local_28,local_res18[0],local_res10[0],
                               (FLinearColor *)&local_38._s_0,(FLinearColor *)&local_48._s_0,
                               (FLinearColor *)&local_58._s_0);
  pTVar1 = &pFVar3->Options;
  *(EGeometryScriptBakeTypes *)param_3 = pFVar3->BakeType;
  if ((TSharedPtr<FGeometryScriptBakeTypes,1> *)((longlong)param_3 + 8) != pTVar1) {
    *(FGeometryScriptBakeTypes **)((longlong)param_3 + 8) = pTVar1->Object;
    pTVar1->Object = (FGeometryScriptBakeTypes *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),
               &(pFVar3->Options).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Options.SharedReferenceCount.ReferenceController);
  return;
}

// execMakeBakeTypeVertexColor @ 14ce0ba60

void __cdecl
UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeVertexColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 local_20;
  FSharedReferencer<1> aFStack_18 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 10;
  local_20 = 0;
  aFStack_18[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_3 + 8) != &local_20) {
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),aFStack_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_18[0].ReferenceController);
  return;
}

