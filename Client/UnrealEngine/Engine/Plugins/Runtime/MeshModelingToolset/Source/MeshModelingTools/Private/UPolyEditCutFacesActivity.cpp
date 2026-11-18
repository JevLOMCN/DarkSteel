// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 24

// StaticClass @ 14cd40bb0

UClass * __cdecl UPolyEditCutFacesActivity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditCutFacesActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditCutFacesActivity",
               &Z_Registration_Info_UClass_UPolyEditCutFacesActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditCutFacesActivity,0xd0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditCutFacesActivity>,
               InternalVTableHelperCtorCaller<UPolyEditCutFacesActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditCutFacesActivity.InnerSingleton;
}

// UPolyEditCutFacesActivity @ 14cd4fbc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditCutFacesActivity * __thiscall
UPolyEditCutFacesActivity::UPolyEditCutFacesActivity
          (UPolyEditCutFacesActivity *this,FVTableHelper *param_1)

{
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this,param_1);
  this->ActivityStamp = 1;
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->bIsRunning = false;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CutProperties).field0_0x0.DebugPtr = (UPolyEditCutProperties *)0x0;
  (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  return this;
}

// UPolyEditCutFacesActivity @ 14cd4fc80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditCutFacesActivity * __thiscall
UPolyEditCutFacesActivity::UPolyEditCutFacesActivity(UPolyEditCutFacesActivity *this)

{
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this);
  this->ActivityStamp = 1;
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->bIsRunning = false;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CutProperties).field0_0x0.DebugPtr = (UPolyEditCutProperties *)0x0;
  (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  return this;
}

// ~UPolyEditCutFacesActivity @ 14cd533b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPolyEditCutFacesActivity::~UPolyEditCutFacesActivity(UPolyEditCutFacesActivity *this)

{
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// ApplyCutFaces @ 14cd5b4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditCutFacesActivity::ApplyCutFaces(UPolyEditCutFacesActivity *this)

{
  uint *puVar1;
  double dVar2;
  UPolyEditActivityContext *pUVar3;
  UPolygonSelectionMechanic *pUVar4;
  TObjectPtr<UCollectSurfacePathMechanic>_u_0 TVar5;
  double *pdVar6;
  FDynamicMeshChange *this_00;
  UPolyEditPreviewMesh *this_01;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  TTransform<double> *pTVar17;
  TVector<double> *pTVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar22;
  FText *pFVar23;
  undefined8 uVar24;
  UObject *this_02;
  UClass *pUVar25;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar26;
  byte bVar27;
  ForAnyElementType FVar28;
  longlong *plVar29;
  longlong *plVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  uint uVar34;
  ForAnyElementType FVar35;
  longlong lVar36;
  uint *puVar37;
  ForElementType<unsigned_int> FVar38;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar39;
  uint uVar40;
  ulonglong uVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auStackY_8a8 [32];
  undefined1 local_868;
  undefined1 local_867 [7];
  undefined4 local_860 [2];
  undefined4 local_858 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_850;
  TVector<double>_u_0 local_840;
  ForAnyElementType local_828;
  int local_820;
  int local_81c;
  undefined1 local_818 [16];
  uint local_808;
  uint uStack_804;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_800;
  undefined4 local_7f8;
  uint uStack_7f4;
  uint uStack_7f0;
  undefined4 uStack_7ec;
  TArray<int,TSizedDefaultAllocator<32>_> local_7e8;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double dStack_7c0;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  undefined4 local_7a0;
  int local_79c;
  int local_798;
  int local_794;
  UPolyEditCutFacesActivity *local_790;
  int local_788 [2];
  TVector<double>_u_0 local_780;
  double local_768;
  double dStack_760;
  undefined8 local_758;
  longlong *local_750;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_748;
  double local_728;
  double dStack_720;
  double local_718;
  FScriptContainerElement *local_708;
  int iStack_700;
  undefined4 uStack_6fc;
  FDynamicMeshChangeTracker *local_6f8;
  undefined1 local_6f0;
  code *local_6e8;
  FDynamicMeshChangeTracker **local_6e0;
  FSparseArrayAllocationInfo local_6d8;
  FScriptContainerElement *local_6c8;
  int iStack_6c0;
  undefined4 uStack_6bc;
  TVector<double>_u_0 local_6b8;
  TVector<double>_u_0 local_6a0;
  TVector<double>_u_0 local_688;
  TVector<double>_u_0 local_670;
  TVector<double>_u_0 local_658;
  TVector<double>_u_0 local_640;
  TVector<double>_u_0 local_628;
  TVector<double>_u_0 local_610;
  undefined1 local_5f8 [16];
  double local_5e8;
  TArrayView<int_const_,int> local_5d8;
  FText local_5c0;
  TArrayView<int_const_,int> local_5a8;
  TQuaternion<double>_u_0 local_598;
  double local_578;
  double dStack_570;
  double local_568;
  undefined1 local_560 [16];
  double local_550;
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined8 local_528;
  undefined8 uStack_520;
  double local_518;
  TVector<double> local_510;
  FDynamicMesh3 *local_4f8;
  undefined1 local_4f0 [32];
  ForElementType<unsigned_int> local_4d0;
  ulonglong local_4c8;
  int iStack_4c0;
  int iStack_4bc;
  FScriptContainerElement local_4b8 [8];
  ForAnyElementType local_4b0;
  uint local_4a8;
  longlong local_498;
  undefined8 uStack_490;
  longlong local_488 [3];
  longlong *plStack_470;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_468;
  undefined **local_418;
  FDynamicMesh3 *local_410;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3f0;
  code *local_3d8;
  undefined8 uStack_3d0;
  undefined **local_3c8;
  FDynamicMesh3 **ppFStack_3c0;
  undefined8 local_3b8;
  longlong *plStack_3b0;
  bool local_3a8;
  bool local_3a7;
  float local_3a4;
  double local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  undefined2 local_380;
  bool local_37e;
  float local_37c;
  bool local_378;
  float local_374;
  ForAnyElementType local_370;
  undefined8 local_368;
  ForAnyElementType local_360;
  undefined8 local_358;
  ForAnyElementType local_350;
  ulonglong local_348;
  ForAnyElementType local_340;
  undefined8 local_338;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_330;
  ForElementType<FSetElementId> local_2f0;
  int local_2e8;
  FGroupTopologySelection local_2d8;
  FDynamicMeshChangeTracker local_1e8;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  local_790 = this;
  if ((((this->SurfacePathMechanic).field0_0x0.DebugPtr == (UCollectSurfacePathMechanic *)0x0) ||
      ((this->EditPreview).field0_0x0.DebugPtr == (UPolyEditPreviewMesh *)0x0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SurfacePathMechanic != nullptr && EditPreview != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditCutFacesActivity.cpp"
                          ,0x83,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  pUVar4 = (pUVar3->SelectionMechanic).field0_0x0.DebugPtr;
  local_850.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_850.ArrayNum = 0;
  local_850.ArrayMax = 0;
  if (((pUVar3->CurrentTopology).Object == (FGroupTopology *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UE::Geometry::FGroupTopology::GetSelectedTriangles
            ((pUVar3->CurrentTopology).Object,(FGroupTopologySelection *)&pUVar4->_padding_,
             &local_850);
  TVar5 = (this->SurfacePathMechanic).field0_0x0;
  if ((((TVar5.DebugPtr)->HitPath).ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pdVar6 = *(double **)((longlong)TVar5 + 0xa8);
  TVar5 = (this->SurfacePathMechanic).field0_0x0;
  local_7d8 = *pdVar6;
  dStack_7d0 = pdVar6[1];
  local_7c8 = pdVar6[2];
  dStack_7c0 = pdVar6[3];
  local_7b8 = pdVar6[4];
  dStack_7b0 = pdVar6[5];
  local_7a8 = pdVar6[6];
  if ((((TVar5.DebugPtr)->HitPath).ArrayNum < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar12 = __real_3ff0000000000000;
  lVar36 = *(longlong *)((longlong)TVar5 + 0xa8);
  local_538 = *(undefined1 (*) [16])(lVar36 + 0x48);
  uVar52 = local_538._0_4_;
  uVar53 = local_538._4_4_;
  local_818 = *(undefined1 (*) [16])(lVar36 + 0x38);
  local_528 = *(undefined8 *)(lVar36 + 0x58);
  uStack_520 = *(undefined8 *)(lVar36 + 0x60);
  local_518 = *(double *)(lVar36 + 0x68);
  dVar46 = local_538._8_8_;
  dVar45 = local_538._0_8_;
  local_548 = local_818;
  if (((this->CutProperties).field0_0x0.DebugPtr)->Orientation == ViewDirection) {
    local_718 = (this->CameraState).Position.field0_0x0._s_0.Z;
    uVar54 = SUB84(dStack_7d0,0);
    uVar55 = (undefined4)((ulonglong)dStack_7d0 >> 0x20);
    local_758 = local_7c8 - local_718;
    dStack_760 = dStack_7d0 - (this->CameraState).Position.field0_0x0._s_0.Y;
    local_768 = local_7d8 - (this->CameraState).Position.field0_0x0._s_0.X;
    UE::Geometry::Normalized<double>
              ((TVector<double> *)&local_6b8._s_0,(TVector<double> *)&local_768,0.0);
    local_718 = (this->CameraState).Position.field0_0x0._s_0.Z;
    local_610._s_0.X = local_818._0_8_ - (this->CameraState).Position.field0_0x0._s_0.X;
    local_610._s_0.Y = local_818._8_8_ - (this->CameraState).Position.field0_0x0._s_0.Y;
    local_610._s_0.Z = dVar45 - local_718;
    UE::Geometry::Normalized<double>
              ((TVector<double> *)&local_6a0._s_0,(TVector<double> *)&local_610._s_0,0.0);
    dVar46 = local_6a0._s_0.Z * local_6b8._s_0.X;
    dVar49 = local_6a0._s_0.Y * local_6b8._s_0.X;
    local_840._s_0.X = local_6b8._s_0.Z * local_6a0._s_0.Y - local_6a0._s_0.Z * local_6b8._s_0.Y;
    dVar48 = local_6b8._s_0.Z * local_6a0._s_0.X;
    dVar45 = local_6a0._s_0.X * local_6b8._s_0.Y;
    uVar50 = local_818._8_4_;
    uVar51 = local_818._12_4_;
    local_818._0_4_ = local_818._0_4_;
    local_818._4_4_ = local_818._4_4_;
  }
  else {
    local_688._s_0.X = local_818._0_8_ - local_7d8;
    auVar44._0_8_ = local_818._4_8_ << 0x20;
    auVar44._8_4_ = local_818._8_4_;
    auVar44._12_4_ = local_818._12_4_;
    local_780._s_0.X = (double)auVar44._8_8_;
    local_688._s_0.Y = local_780._s_0.X - dStack_7d0;
    local_688._s_0.Z = dVar45 - local_7c8;
    local_780._s_0.Y = local_818._8_8_;
    _local_768 = local_538;
    UE::Geometry::Normalized<double>
              ((TVector<double> *)&local_658._s_0,(TVector<double> *)&local_688._s_0,0.0);
    dVar45 = *(double *)(lVar36 + 0x58) + *(double *)(lVar36 + 0x58);
    dVar48 = *(double *)(lVar36 + 0x60) + *(double *)(lVar36 + 0x60);
    local_628._s_0.X =
         local_518 * dVar45 + dVar46 * dVar48 +
         dStack_7c0 * (dStack_7b0 + dStack_7b0) + local_7a8 * (local_7b8 + local_7b8);
    local_628._s_0.Y =
         (*(double *)(lVar36 + 0x58) * dVar48 - local_518 * (dVar46 + dVar46)) +
         (local_7b8 * (dStack_7b0 + dStack_7b0) - local_7a8 * (dStack_7c0 + dStack_7c0));
    local_628._s_0.Z =
         (dVar12 - (*(double *)(lVar36 + 0x58) * dVar45 + dVar46 * (dVar46 + dVar46))) +
         (dVar12 - (local_7b8 * (local_7b8 + local_7b8) + dStack_7c0 * (dStack_7c0 + dStack_7c0)));
    UE::Geometry::Normalized<double>
              ((TVector<double> *)&local_670._s_0,(TVector<double> *)&local_628._s_0,0.0);
    dVar49 = local_658._s_0.Y * local_670._s_0.X;
    dVar46 = local_658._s_0.Z * local_670._s_0.X;
    local_840._s_0.X = local_670._s_0.Z * local_658._s_0.Y - local_658._s_0.Z * local_670._s_0.Y;
    uVar54 = SUB84(dStack_7d0,0);
    uVar55 = (undefined4)((ulonglong)dStack_7d0 >> 0x20);
    dVar48 = local_670._s_0.Z * local_658._s_0.X;
    dVar45 = local_658._s_0.X * local_670._s_0.Y;
    uVar50 = local_780._0_4_;
    uVar51 = local_780._4_4_;
    uVar52 = local_768._0_4_;
    uVar53 = local_768._4_4_;
  }
  local_840._s_0.Z = dVar45 - dVar49;
  local_840._s_0.Y = dVar46 - dVar48;
  dVar46 = ((double)CONCAT44(uVar51,uVar50) + (double)CONCAT44(uVar55,uVar54)) *
           __real_3fe0000000000000;
  local_818._0_8_ =
       ((double)CONCAT44(local_818._4_4_,local_818._0_4_) + local_7d8) * __real_3fe0000000000000;
  dVar48 = ((double)CONCAT44(uVar53,uVar52) + local_7c8) * __real_3fe0000000000000;
  pTVar17 = UPreviewMesh::GetTransform
                      ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                        DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_138);
  local_5f8 = *(undefined1 (*) [16])(pTVar17->Scale3D).XY.m128d_f64;
  local_598._s_0.X = (pTVar17->Rotation).XY.m128d_f64[0];
  local_598._s_0.Y = (pTVar17->Rotation).XY.m128d_f64[1];
  local_598._s_0.Z = (pTVar17->Rotation).ZW.m128d_f64[0];
  local_598._s_0.W = (pTVar17->Rotation).ZW.m128d_f64[1];
  local_718 = (pTVar17->Translation).ZW.m128d_f64[0];
  dVar45 = (pTVar17->Scale3D).ZW.m128d_f64[0];
  local_728 = (pTVar17->Translation).XY.m128d_f64[0];
  dStack_720 = (pTVar17->Translation).XY.m128d_f64[1];
  dVar49 = local_5f8._0_8_;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44(local_5f8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       local_5f8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar11 = dVar12 / dVar49;
  }
  else {
    dVar11 = 0.0;
  }
  dVar8 = local_5f8._8_8_;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44(local_5f8._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       local_5f8._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar10 = dVar12 / dVar8;
  }
  else {
    dVar10 = 0.0;
  }
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar45,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar9 = dVar12 / dVar45;
  }
  else {
    dVar9 = 0.0;
  }
  local_780._s_0.Z = dVar48 - local_718;
  local_780._s_0.X = (double)local_818._0_8_ - local_728;
  local_780._s_0.Y = dVar46 - dStack_720;
  local_5e8 = dVar45;
  local_578 = local_728;
  dStack_570 = dStack_720;
  local_568 = local_718;
  local_560 = local_5f8;
  local_550 = dVar45;
  pTVar18 = UE::Geometry::TQuaternion<double>::InverseMultiply
                      ((TQuaternion<double> *)&local_598._s_0,&local_510,
                       (TVector<double> *)&local_780._s_0);
  dVar46 = (pTVar18->field0_0x0)._s_0.X;
  dVar48 = (pTVar18->field0_0x0)._s_0.Y;
  dVar2 = (pTVar18->field0_0x0)._s_0.Z;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)&local_598._s_0,(TVector<double> *)&local_640._s_0,
             (TVector<double> *)&local_840._s_0);
  dVar49 = dVar49 * local_640._s_0.X;
  dVar8 = dVar8 * local_640._s_0.Y;
  dVar45 = dVar45 * local_640._s_0.Z;
  dVar42 = SQRT(dVar8 * dVar8 + dVar49 * dVar49 + dVar45 * dVar45);
  if (dVar42 <= 0.0) {
    dVar45 = 0.0;
    dVar8 = 0.0;
    dVar42 = 0.0;
  }
  else {
    dVar42 = dVar12 / dVar42;
    dVar45 = dVar42 * dVar45;
    dVar8 = dVar42 * dVar8;
    dVar42 = dVar42 * dVar49;
  }
  auVar43._0_8_ = dVar42 * dVar42;
  auVar43._8_8_ = 0;
  auVar47._0_8_ = dVar8 * dVar8 + auVar43._0_8_ + dVar45 * dVar45;
  auVar47._8_8_ = 0;
  auVar44 = sqrtpd(auVar43,auVar47);
  if (auVar44._0_8_ <= 0.0) {
    dVar45 = 0.0;
    dVar8 = 0.0;
    dVar42 = 0.0;
  }
  else {
    dVar12 = dVar12 / auVar44._0_8_;
    dVar42 = dVar42 * dVar12;
    dVar8 = dVar8 * dVar12;
    dVar45 = dVar45 * dVar12;
  }
  local_840._s_0.X = dVar42;
  local_840._s_0.Y = dVar8;
  local_840._s_0.Z = dVar45;
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker
            (&local_1e8,(((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object);
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_1e8);
  iStack_700 = local_850.ArrayNum;
  local_708 = local_850.AllocatorInstance.Data;
  local_7e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7e8.ArrayNum = 0;
  local_7e8.ArrayMax = 0;
  if ((local_850.ArrayNum < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_5d8._12_4_ = uStack_6fc;
  local_5d8.ArrayNum = iStack_700;
  local_5d8.DataPtr = (int *)local_708;
  UE::Geometry::TriangleToVertexIDs
            ((((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object,&local_5d8,
             &local_7e8);
  FVar35.Data = local_7e8.AllocatorInstance.Data;
  lVar36 = (longlong)local_7e8.ArrayNum;
  local_828.Data = (FScriptContainerElement *)0x0;
  local_820 = local_7e8.ArrayNum;
  if (local_7e8.ArrayNum == 0) {
    local_81c = 0;
    iVar15 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_7e8.ArrayNum,0,&local_828,local_7e8.ArrayNum,&local_81c);
    memcpy(local_828.Data,FVar35.Data,lVar36 << 2);
    iVar15 = local_820;
  }
  pFVar19 = local_828.Data + (longlong)iVar15 * 4;
  FVar35.Data = local_828.Data;
  iVar16 = iVar15;
  while( true ) {
    if (iVar16 != iVar15) {
      local_868 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_868);
    }
    if (FVar35.Data == pFVar19) break;
    local_6f8 = &local_1e8;
    local_6e0 = &local_6f8;
    local_6f0 = 1;
    local_6e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMeshChangeTracker::SaveVertexOneRingTriangles'::__l2::<lambda_1>,void,int>
                ::Call;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (local_1e8.Mesh,*(int *)FVar35.Data,(TFunctionRef<void___cdecl(int)> *)&local_6e8);
    FVar35.Data = FVar35.Data + 4;
    iVar16 = local_820;
  }
  if (local_828.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data);
  }
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_2d8);
  FVar35.Data = local_850.AllocatorInstance.Data;
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  lVar36 = (longlong)local_850.ArrayNum;
  local_3a0 = __real_3e45798ee2308c3a;
  local_388 = __real_3fd0000000000000;
  local_398 = ___xmm_3fb999999999999a3ee4f8b588000000;
  dStack_390 = _UNK_1528d8ad8;
  local_330._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_330._48_4_ = _UNK_150631d98;
  local_330._52_4_ = _UNK_150631d9c;
  local_408._s_0.X = dVar11 * dVar46;
  local_408._s_0.Y = dVar10 * dVar48;
  local_408._s_0.Z = dVar9 * dVar2;
  local_3f0._s_0.X = dVar42;
  local_3f0._s_0.Y = dVar8;
  local_3f0._s_0.Z = dVar45;
  local_418 = &___7FMeshPlaneCut_Geometry_UE__6B_;
  local_410 = (pUVar3->CurrentMesh).Object;
  local_3d8 = (code *)0x0;
  plStack_3b0 = (longlong *)0x0;
  local_3a7 = true;
  local_3a4 = 1.0;
  local_380._0_1_ = true;
  local_380._1_1_ = true;
  local_37e = true;
  local_37c = 1e-06;
  local_374 = 0.01;
  local_370.Data = (FScriptContainerElement *)0x0;
  local_368._0_4_ = 0;
  local_368._4_4_ = 0;
  local_360.Data = (FScriptContainerElement *)0x0;
  local_358._0_4_ = 0;
  local_358._4_4_ = 0;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348 = 0;
  local_340.Data = (FScriptContainerElement *)0x0;
  local_338._0_4_ = 0;
  local_338._4_4_ = 0;
  local_330._0_8_ = 0;
  local_330._8_8_ = 0;
  local_330._32_8_ = 0;
  local_2f0 = (ForElementType<FSetElementId>)0x0;
  local_2e8 = 0;
  local_378 = false;
  local_3a8 = pUVar3->bTriangleMode == false;
  local_4f8 = (pUVar3->CurrentMesh).Object;
  local_4f0._0_8_ = (FScriptContainerElement *)0x0;
  local_4f0._8_8_ = 0;
  local_4d0 = (ForElementType<unsigned_int>)0x0;
  local_4c8 = ___xmm_00000000ffffffff0000008000000000;
  iStack_4c0 = _UNK_150631d98;
  iStack_4bc = _UNK_150631d9c;
  local_4b0.Data = (FScriptContainerElement *)0x0;
  local_4a8 = 0;
  if ((local_850.ArrayNum < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar19 = FVar35.Data + lVar36 * 4;
  local_498 = (longlong)local_3d8;
  uVar24 = uStack_3d0;
  local_488[0] = (longlong)local_3c8;
  local_488[1] = (longlong)ppFStack_3c0;
  uVar13 = local_3b8;
  plStack_470 = plStack_3b0;
  do {
    if (FVar35.Data == pFVar19) {
      pTVar26 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
      local_3d8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPolyEditCutFacesActivity::ApplyCutFaces'::__l2::<lambda_1>,bool,int>
                  ::Call;
      uStack_3d0 = uStack_490;
      local_3b8 = local_488[2];
      plStack_3b0 = (longlong *)0x0;
      local_3c8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UPolyEditCutFacesActivity::ApplyCutFaces'::`2'::<lambda_1>,1,0>
                   ::_vftable_;
      ppFStack_3c0 = &local_4f8;
      uStack_490 = uVar24;
      local_488[2] = uVar13;
      if (local_498 != 0) {
        plVar29 = local_488;
        if (plStack_470 != (longlong *)0x0) {
          plVar29 = plStack_470;
        }
        (**(code **)(*plVar29 + 0x10))();
      }
      local_468.Elements._0_8_ = 0;
      local_468.Elements._8_8_ = 0;
      local_468.Elements._32_8_ = 0;
      local_468.Elements._40_4_ = 0;
      local_468.Elements._44_4_ = 0x80;
      local_468.Elements._48_4_ = 0xffffffff;
      local_468.Elements._52_4_ = 0;
      local_468.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_468.HashSize = 0;
      if (((this->ActivityContext).field0_0x0.DebugPtr)->bTriangleMode != false) {
        iVar15 = local_850.ArrayNum;
        local_6c8 = local_850.AllocatorInstance.Data;
        if ((local_850.ArrayNum < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iStack_6c0 = iVar15;
        local_5a8._12_4_ = uStack_6bc;
        local_5a8.ArrayNum = iVar15;
        local_5a8.DataPtr = (int *)local_6c8;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(&local_468,&local_5a8);
      }
      pTVar39 = &local_468;
      if (((this->ActivityContext).field0_0x0.DebugPtr)->bTriangleMode == false) {
        pTVar39 = pTVar26;
      }
      bVar14 = UE::Geometry::FMeshPlaneCut::SplitEdgesOnlyHelper
                         ((FMeshPlaneCut *)&local_418,true,pTVar39,false);
      if (bVar14) {
        if (((this->ActivityContext).field0_0x0.DebugPtr)->bTriangleMode == false) {
          iVar15 = (int)local_348;
          uVar33 = (ulonglong)(int)local_348;
          pFVar19 = local_350.Data + uVar33 * 0x18;
          FVar35.Data = local_350.Data;
          while( true ) {
            if ((int)uVar33 != iVar15) {
              `TCheckedPointerIterator<UE::Geometry::FMeshPlaneCut::FCutResultRegion,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_867);
            }
            if (FVar35.Data == pFVar19) break;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_2d8.SelectedGroupIDs,&local_794,(bool *)FVar35.Data);
            uVar33 = local_348 & 0xffffffff;
            FVar35.Data = FVar35.Data + 0x18;
          }
        }
        else {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                    (&local_2d8.SelectedGroupIDs,&local_468);
        }
      }
      pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
      TVar22 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_1e8);
      pFVar23 = FText::AsLocalizable_Advanced_LocText
                          (&local_5c0,L"UPolyEditInsetOutsetActivity",L"PolyMeshCutFacesChange",
                           L"Cut Faces");
      UE::Core::Private::Function::CheckCallable(*(void **)&pUVar3->EmitCurrentMeshChangeAndUpdate);
      pcVar7 = *(code **)&pUVar3->EmitCurrentMeshChangeAndUpdate;
      plVar29 = *(longlong **)&(pUVar3->EmitCurrentMeshChangeAndUpdate).field_0x28;
      plVar30 = (longlong *)&(pUVar3->EmitCurrentMeshChangeAndUpdate).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar30 = plVar29;
      }
      uVar24 = (**(code **)(*plVar30 + 8))();
      (*pcVar7)(uVar24,pFVar23,TVar22.Ptr,&local_2d8);
      this_00 = (FDynamicMeshChange *)((TVar22.Ptr)->OldVertices).AllocatorInstance.Data;
      if (this_00 != (FDynamicMeshChange *)0x0) {
        UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
        ::operator_delete(this_00,0x48);
      }
      if (local_5c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_5c0.TextData.Reference + 0x10))();
      }
      this_01 = (this->EditPreview).field0_0x0.DebugPtr;
      if (this_01 != (UPolyEditPreviewMesh *)0x0) {
        UPreviewMesh::Disconnect((UPreviewMesh *)this_01);
        (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
      }
      (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
      (**(code **)(this->_padding_ + 0x2d8))(this,(this->CutProperties).field0_0x0.DebugPtr,0);
      this->bIsRunning = false;
      this_02 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (this_02 != (UObject *)0x0) {
        pUVar25 = Z_Construct_UClass_UToolActivityHost_NoRegister();
        pTVar26 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_02,pUVar25);
      }
      (**(code **)(*(longlong *)&pTVar26->Elements + 0x10))(pTVar26,this);
      local_468.HashSize = 0;
      if (local_468.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_468.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_468.Elements);
      local_4a8 = 0;
      if (local_4b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_4f0);
      UE::Geometry::FMeshPlaneCut::~FMeshPlaneCut((FMeshPlaneCut *)&local_418);
      local_2d8.SelectedEdgeIDs.HashSize = 0;
      if (local_2d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2d8.SelectedEdgeIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_2d8.SelectedEdgeIDs.Elements);
      local_2d8.SelectedCornerIDs.HashSize = 0;
      if (local_2d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2d8.SelectedCornerIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_2d8.SelectedCornerIDs.Elements);
      local_2d8.SelectedGroupIDs.HashSize = 0;
      if (local_2d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2d8.SelectedGroupIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_2d8);
      if (local_7e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.AllocatorInstance.Data);
      }
      UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_1e8);
      if (local_850.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_850.AllocatorInstance.Data);
      }
      return;
    }
    puVar37 = (uint *)0x0;
    uVar33 = (ulonglong)(*(uint *)FVar35.Data & 0x1ff);
    lVar36 = *(longlong *)
              ((local_4f8->TriangleEdges).Blocks.AllocatorInstance.Data +
              (ulonglong)(*(uint *)FVar35.Data >> 9) * 8);
    local_860[0] = *(undefined4 *)(lVar36 + 8 + uVar33 * 0xc);
    local_818._0_8_ = *(undefined8 *)(lVar36 + uVar33 * 0xc);
    local_3d8 = (code *)local_498;
    uStack_3d0 = uVar24;
    local_3c8 = (undefined **)local_488[0];
    ppFStack_3c0 = (FDynamicMesh3 **)local_488[1];
    local_3b8 = uVar13;
    plStack_3b0 = plStack_470;
    if (iStack_4bc == 0) {
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc,4,1,(ForAnyElementType *)local_4f0,(int *)(local_4f0 + 8),
                          (int *)(local_4f0 + 0xc));
      iVar16 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(local_4f0 + 0x10),1);
      FVar38 = (ForElementType<unsigned_int>)((longlong)local_4f0 + 0x10);
      if (local_4d0 != (ForElementType<unsigned_int>)0x0) {
        FVar38 = local_4d0;
      }
      bVar27 = (byte)iVar16 & 0x1f;
      if (iVar16 < 0) {
        iVar16 = iVar16 + 0x1f;
        bVar27 = bVar27 - 0x20;
      }
      puVar1 = (uint *)((longlong)FVar38 + (longlong)(iVar16 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << (bVar27 & 0x1f));
    }
    else {
      iVar15 = iStack_4c0;
      lVar36 = (longlong)iStack_4c0;
      iStack_4bc = iStack_4bc + -1;
      iStack_4c0 = *(int *)(local_4f0._0_8_ + lVar36 * 0xc + 4);
      if (iStack_4bc != 0) {
        *(undefined4 *)
         (local_4f0._0_8_ + (longlong)*(int *)(local_4f0._0_8_ + lVar36 * 0xc + 4) * 0xc) =
             0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_4f0,&local_6d8,iVar15);
    if (local_6d8.Pointer != (uint *)0x0) {
      *(undefined4 *)local_6d8.Pointer = local_818._0_4_;
      *(uint *)((longlong)local_6d8.Pointer + 4) = 0xffffffff;
      puVar37 = local_6d8.Pointer;
    }
    uVar31 = *puVar37;
    if ((local_4f0._8_4_ - iStack_4bc != 1) && (local_4f0._8_4_ != iStack_4bc)) {
      FVar28.Data = local_4b8;
      if (local_4b0.Data != (FScriptContainerElement *)0x0) {
        FVar28.Data = local_4b0.Data;
      }
      for (iVar15 = *(int *)(FVar28.Data + (ulonglong)(local_4a8 - 1 & uVar31) * 4); iVar15 != -1;
          iVar15 = *(int *)(local_4f0._0_8_ + (longlong)iVar15 * 0xc + 4)) {
        if (*(uint *)(local_4f0._0_8_ + (longlong)iVar15 * 0xc) == uVar31) {
          if (iVar15 != -1) {
            *(uint *)(local_4f0._0_8_ + (longlong)iVar15 * 0xc) = uVar31;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_4f0,local_6d8.Index,1);
            goto LAB_14cd5c44b;
          }
          break;
        }
      }
    }
    uVar33 = 0;
    uVar40 = local_4f0._8_4_ - iStack_4bc;
    uVar34 = 1;
    if (3 < uVar40) {
      uVar32 = (ulonglong)((uVar40 >> 1) + 7) * 2 + 1;
      lVar36 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      local_7a0 = (undefined4)lVar36;
      uVar34 = 1 << ((byte)lVar36 & 0x1f);
    }
    if (((int)uVar40 < 1) || ((int)uVar34 <= (int)local_4a8)) {
      uVar31 = local_4a8 - 1 & uVar31;
      puVar37[2] = uVar31;
      FVar28.Data = local_4b8;
      if (local_4b0.Data != (FScriptContainerElement *)0x0) {
        FVar28.Data = local_4b0.Data;
      }
      uVar33 = (longlong)(int)local_4a8 - 1U & (longlong)(int)uVar31;
      puVar37[1] = *(uint *)(FVar28.Data + uVar33 * 4);
      *(int *)(FVar28.Data + uVar33 * 4) = local_6d8.Index;
    }
    else {
      local_4a8 = uVar34;
      if (local_4b0.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_4b0,0,0,4);
      }
      if (uVar34 != 0) {
        uVar31 = uVar34;
        if (uVar34 < 2) {
          if (local_4b0.Data != (FScriptContainerElement *)0x0) {
            uVar31 = 0;
            goto LAB_14cd5c252;
          }
        }
        else {
LAB_14cd5c252:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_4b0,0,uVar31,4);
        }
        if (0 < (int)uVar34) {
          uVar41 = (ulonglong)uVar34;
          uVar32 = uVar33;
          do {
            FVar28.Data = local_4b8;
            if (local_4b0.Data != (FScriptContainerElement *)0x0) {
              FVar28.Data = local_4b0.Data;
            }
            uVar20 = uVar32 & (longlong)(int)uVar34 - 1U;
            uVar32 = uVar32 + 1;
            *(undefined4 *)(FVar28.Data + uVar20 * 4) = 0xffffffff;
            uVar41 = uVar41 - 1;
          } while (uVar41 != 0);
        }
      }
      if (local_4a8 != 0) {
        pTStack_800 = (TBitArray<FDefaultBitArrayAllocator> *)(local_4f0 + 0x10);
        local_808 = 0;
        uStack_804 = 1;
        uStack_7f4 = 0;
        uStack_7f0 = 0;
        if ((uint)local_4c8 != 0) {
          FVar38 = (ForElementType<unsigned_int>)((longlong)local_4f0 + 0x10);
          if (local_4d0 != (ForElementType<unsigned_int>)0x0) {
            FVar38 = local_4d0;
          }
          uVar31 = *(uint *)FVar38;
          uVar32 = uVar33;
          while (uVar31 == 0) {
            uStack_7f0 = (int)uVar32 + 0x20;
            uVar32 = (ulonglong)uStack_7f0;
            iVar15 = (int)uVar33;
            local_808 = iVar15 + 1;
            uVar33 = (ulonglong)local_808;
            if ((int)(((uint)local_4c8 - 1) + ((int)((uint)local_4c8 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_808) goto LAB_14cd5c36d;
            uVar31 = ((uint *)((longlong)FVar38 + 4))[iVar15];
          }
          uStack_804 = -uVar31 & uVar31;
          uVar33 = (ulonglong)uStack_804 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          local_79c = (int)lVar36;
          uStack_7f4 = local_79c + -1 + uStack_7f0;
          uVar33 = (ulonglong)uStack_7f4;
          if ((int)(uint)local_4c8 < (int)uStack_7f4) {
LAB_14cd5c36d:
            uVar33 = local_4c8 & 0xffffffff;
            uStack_7f4 = (uint)local_4c8;
          }
        }
        local_7f8 = 0xffffffff;
        local_750 = (longlong *)local_4f0;
        local_748._padding_ = CONCAT44(uStack_804,local_808);
        local_748.CurrentBitIndex = uStack_7f4;
        local_748.UnvisitedBitMask = 0xffffffff;
        local_748._28_4_ = uStack_7ec;
        local_748.BaseBitIndex = uStack_7f0;
        local_748.Array = pTStack_800;
        if ((int)uVar33 < (int)(uint)local_4c8) {
          do {
            lVar36 = *local_750;
            lVar21 = (longlong)(int)uVar33;
            uVar31 = local_4a8 - 1 & *(uint *)(lVar36 + lVar21 * 0xc);
            *(uint *)(lVar36 + 8 + lVar21 * 0xc) = uVar31;
            FVar28.Data = local_4b8;
            if (local_4b0.Data != (FScriptContainerElement *)0x0) {
              FVar28.Data = local_4b0.Data;
            }
            uVar32 = (longlong)(int)local_4a8 - 1U & (longlong)(int)uVar31;
            *(undefined4 *)(lVar36 + 4 + lVar21 * 0xc) = *(undefined4 *)(FVar28.Data + uVar32 * 4);
            *(int *)(FVar28.Data + uVar32 * 4) = (int)uVar33;
            local_748.UnvisitedBitMask = local_748.UnvisitedBitMask & ~local_748._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_748);
            uVar33 = (ulonglong)(uint)local_748.CurrentBitIndex;
          } while (local_748.CurrentBitIndex < (local_748.Array)->NumBits);
        }
      }
    }
LAB_14cd5c44b:
    local_858[0] = local_818._4_4_;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_4f0,local_788,
               (bool *)local_858);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_4f0,&local_798,
               (bool *)local_860);
    FVar35.Data = FVar35.Data + 4;
    this = local_790;
    local_498 = (longlong)local_3d8;
    uVar24 = uStack_3d0;
    local_488[0] = (longlong)local_3c8;
    local_488[1] = (longlong)ppFStack_3c0;
    uVar13 = local_3b8;
    plStack_470 = plStack_3b0;
  } while( true );
}

// BeginCutFaces @ 14cd5eaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditCutFacesActivity::BeginCutFaces(UPolyEditCutFacesActivity *this)

{
  UPolyEditActivityContext *pUVar1;
  UPolygonSelectionMechanic *pUVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  UInteractiveTool *pUVar11;
  UPolyEditPreviewMesh *this_00;
  UCollectSurfacePathMechanic *pUVar12;
  UObject *pUVar13;
  longlong *plVar14;
  undefined1 auStack_3f8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_3d8 [3];
  FDynamicMesh3 local_3a8;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  pUVar2 = (pUVar1->SelectionMechanic).field0_0x0.DebugPtr;
  local_3d8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d8[0].ArrayNum = 0;
  local_3d8[0].ArrayMax = 0;
  if ((pUVar1->CurrentTopology).Object == (FGroupTopology *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::Geometry::FGroupTopology::GetSelectedTriangles
            ((pUVar1->CurrentTopology).Object,(FGroupTopologySelection *)&pUVar2->_padding_,
             local_3d8);
  UPreviewMesh::GetTransform
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,&local_148);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  pUVar11 = (UInteractiveTool *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = UE::Geometry::PolyEditActivityUtil::CreatePolyEditPreviewMesh(pUVar11,pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UPolyEditPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->EditPreview).field0_0x0.DebugPtr = this_00;
  local_88.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88.Translation.XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
  local_88.Translation.XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
  local_88.Translation.ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
  local_88.Translation.ZW.m128d_f64[1] = 0.0;
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UPreviewMesh::SetTransform((UPreviewMesh *)this_00,&local_88);
  local_e8.Rotation.XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
  local_e8.Rotation.XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
  local_e8.Rotation.ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
  local_e8.Rotation.ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
  local_e8.Scale3D.XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
  local_e8.Scale3D.XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
  local_e8.Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
  local_e8.Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
  local_e8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_e8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_e8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
  UPolyEditPreviewMesh::InitializeStaticType
            ((this->EditPreview).field0_0x0.DebugPtr,
             (((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object,local_3d8,&local_e8
            );
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_3a8);
  UPolyEditPreviewMesh::MakeInsetTypeTargetMesh((this->EditPreview).field0_0x0.DebugPtr,&local_3a8);
  pUVar12 = NewObject<UCollectSurfacePathMechanic>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UCollectSurfacePathMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = pUVar12;
  pcVar3 = *(code **)(*(longlong *)pUVar12 + 0x2b0);
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar3)(pUVar12,pUVar13);
  pUVar12 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar12 + 0x2e0))(pUVar12,&local_3a8);
  pUVar12 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar12 + 0x2f0))(pUVar12,2);
  uStack_150 = (longlong *)0x0;
  ((this->SurfacePathMechanic).field0_0x0.DebugPtr)->bSnapToTargetMeshVertices = true;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditCutFacesActivity::BeginCutFaces'::`2'::<lambda_1>,1,0>
               ::_vftable_;
  uStack_160 = this;
  dVar4 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
  pUVar12 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  local_178 = *(longlong *)&pUVar12->SpatialSnapPointsFunc;
  uVar7 = *(undefined8 *)&(pUVar12->SpatialSnapPointsFunc).field_0x8;
  lVar8 = *(longlong *)&(pUVar12->SpatialSnapPointsFunc).field_0x10;
  uVar9 = *(undefined8 *)&(pUVar12->SpatialSnapPointsFunc).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar12->SpatialSnapPointsFunc).field_0x20;
  plVar6 = *(longlong **)&(pUVar12->SpatialSnapPointsFunc).field_0x28;
  *(code **)&pUVar12->SpatialSnapPointsFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UPolyEditCutFacesActivity::BeginCutFaces'::__l2::<lambda_1>,bool,UE::Math::TVector<double>,UE::Math::TVector<double>_>
       ::Call;
  *(undefined8 *)&(pUVar12->SpatialSnapPointsFunc).field_0x8 = uStack_170;
  *(undefined4 *)&(pUVar12->SpatialSnapPointsFunc).field_0x10 = (undefined4)local_168;
  *(undefined4 *)&(pUVar12->SpatialSnapPointsFunc).field_0x14 = local_168._4_4_;
  *(undefined4 *)&(pUVar12->SpatialSnapPointsFunc).field_0x18 = (undefined4)uStack_160;
  *(undefined4 *)&(pUVar12->SpatialSnapPointsFunc).field_0x1c = uStack_160._4_4_;
  local_158._0_4_ = SUB84(dVar4,0);
  local_158._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
  *(undefined4 *)&(pUVar12->SpatialSnapPointsFunc).field_0x20 = (undefined4)local_158;
  *(undefined4 *)&(pUVar12->SpatialSnapPointsFunc).field_0x24 = local_158._4_4_;
  *(undefined4 *)&(pUVar12->SpatialSnapPointsFunc).field_0x28 = (undefined4)uStack_150;
  *(undefined4 *)&(pUVar12->SpatialSnapPointsFunc).field_0x2c = uStack_150._4_4_;
  local_168 = (undefined **)lVar8;
  uStack_160 = (UPolyEditCutFacesActivity *)uVar9;
  local_158 = uVar5;
  uStack_150 = plVar6;
  uStack_170 = uVar7;
  if (local_178 != 0) {
    plVar14 = &local_168;
    if (plVar6 != (longlong *)0x0) {
      plVar14 = plVar6;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->CutProperties).field0_0x0.DebugPtr,1);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_3a8);
  if (local_3d8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8[0].AllocatorInstance.Data);
  }
  return;
}

// BeginHoverSequenceHitTest @ 14cd5f3d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInputRayHit * __thiscall
UPolyEditCutFacesActivity::BeginHoverSequenceHitTest
          (UPolyEditCutFacesActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  __return_storage_ptr__->bHit = SUB81(this->_padding_,0);
  return __return_storage_ptr__;
}

// CanAccept @ 14cd62f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPolyEditCutFacesActivity::CanAccept(UPolyEditCutFacesActivity *this)

{
  return false;
}

// CanStart @ 14cd63960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPolyEditCutFacesActivity::CanStart(UPolyEditCutFacesActivity *this)

{
  UPolyEditActivityContext *pUVar1;
  UPolygonSelectionMechanic *pUVar2;
  
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (pUVar1 == (UPolyEditActivityContext *)0x0) {
    return false;
  }
  pUVar2 = (pUVar1->SelectionMechanic).field0_0x0.DebugPtr;
  return (int)pUVar2->_padding_ != *(int *)((longlong)&pUVar2->_padding_ + 4);
}

// Clear @ 14cd64890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditCutFacesActivity::Clear(UPolyEditCutFacesActivity *this)

{
  UPolyEditPreviewMesh *this_00;
  
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014cd648c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->CutProperties).field0_0x0.DebugPtr,0);
  return;
}

// End @ 14cd688c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EToolActivityEndResult __thiscall
UPolyEditCutFacesActivity::End(UPolyEditCutFacesActivity *this,EToolShutdownType param_1)

{
  bool bVar1;
  UPolyEditPreviewMesh *this_00;
  
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->CutProperties).field0_0x0.DebugPtr,0);
  bVar1 = this->bIsRunning;
  this->bIsRunning = false;
  return ErrorDuringEnd - (bVar1 != false);
}

// GetPrivateStaticClass @ 14cd6daa0

UClass * __cdecl UPolyEditCutFacesActivity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditCutFacesActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditCutFacesActivity",
               &Z_Registration_Info_UClass_UPolyEditCutFacesActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditCutFacesActivity,0xd0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditCutFacesActivity>,
               InternalVTableHelperCtorCaller<UPolyEditCutFacesActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditCutFacesActivity.InnerSingleton;
}

// IsHitByClick @ 14cd717c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInputRayHit * __thiscall
UPolyEditCutFacesActivity::IsHitByClick
          (UPolyEditCutFacesActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  __return_storage_ptr__->bHit = SUB81(this->_padding_,0);
  return __return_storage_ptr__;
}

// IsRunning @ 14cd71b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPolyEditCutFacesActivity::IsRunning(UPolyEditCutFacesActivity *this)

{
  return this->bIsRunning;
}

// OnBeginHover @ 14cd74650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPolyEditCutFacesActivity::OnBeginHover(UPolyEditCutFacesActivity *this,FInputDeviceRay *param_1)

{
  return;
}

// OnClicked @ 14cd746b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPolyEditCutFacesActivity::OnClicked(UPolyEditCutFacesActivity *this,FInputDeviceRay *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  UObject *pUVar5;
  longlong lVar6;
  FText *pFVar7;
  undefined8 *local_res8;
  FText local_58;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((char)this->_padding_ != '\0') {
    local_48 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    dStack_40 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    local_38 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x10);
    uStack_34 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x14);
    uStack_30 = *(undefined4 *)&(param_1->WorldRay).Direction.field0_0x0;
    uStack_2c = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 4);
    local_28 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 8);
    uStack_24 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0xc);
    uStack_20 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x10);
    uStack_1c = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x14);
    cVar4 = (**(code **)(*(longlong *)this->_padding_ + 800))((longlong *)this->_padding_,&local_48)
    ;
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x330))();
      if (cVar4 != '\0') {
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        ApplyCutFaces((UPolyEditCutFacesActivity *)&this[-1].CameraState.Orientation.Z);
        return;
      }
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].CameraState.field_0x58);
      lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
      pcVar3 = *(code **)(*(longlong *)(lVar6 + 0x28) + 0x20);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"UPolyEditInsetOutsetActivity",L"CutLineStart",
                          L"Cut Line Start");
      local_res8 = ::operator_new(0x10);
      if (local_res8 != (undefined8 *)0x0) {
        uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        *local_res8 = &___7FPolyEditCutFacesActivityFirstPointChange__6B_;
        *(undefined4 *)(local_res8 + 1) = uVar2;
        *(undefined1 *)((longlong)local_res8 + 0xc) = 0;
      }
      (*pcVar3)(lVar6 + 0x28,&this[-1].CameraState.Orientation.Z,&local_res8,pFVar7);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

// OnEndHover @ 14cd74d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditCutFacesActivity::OnEndHover(UPolyEditCutFacesActivity *this)

{
  return;
}

// OnUpdateHover @ 14cd75e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPolyEditCutFacesActivity::OnUpdateHover(UPolyEditCutFacesActivity *this,FInputDeviceRay *param_1)

{
  double local_38;
  double dStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  dStack_30 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_28 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x10);
  uStack_24 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x14);
  uStack_20 = *(undefined4 *)&(param_1->WorldRay).Direction.field0_0x0;
  uStack_1c = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 4);
  local_18 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 8);
  uStack_14 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0xc);
  uStack_10 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x10);
  uStack_c = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x14);
  (**(code **)(*(longlong *)this->_padding_ + 0x318))((longlong *)this->_padding_,&local_38);
  return (bool)(char)this->_padding_;
}

// Render @ 14cd79af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPolyEditCutFacesActivity::Render(UPolyEditCutFacesActivity *this,IToolsContextRenderAPI *param_1)

{
  UCollectSurfacePathMechanic *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  plVar3 = (longlong *)(**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x398))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3,&this->CameraState);
  pUVar1 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  if (pUVar1 != (UCollectSurfacePathMechanic *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,param_1);
  }
  return;
}

// Setup @ 14cd7b9a0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPolyEditCutFacesActivity::Setup(UPolyEditCutFacesActivity *this,UInteractiveTool *param_1)

{
  code *pcVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UPolyEditCutProperties *pUVar4;
  USingleClickInputBehavior *pUVar5;
  UMouseHoverBehavior *pUVar6;
  UInteractiveToolManager *this_00;
  UContextObjectStore *this_01;
  UPolyEditActivityContext *pUVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UPolyEditCutProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar2;
  pUVar4 = (UPolyEditCutProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPolyEditCutProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CutProperties).field0_0x0.DebugPtr = pUVar4;
  pcVar1 = *(code **)(pUVar4->_padding_ + 0x2b8);
  ::FString::FString(&local_b8,L"");
  (*pcVar1)(pUVar4,param_1,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,(this->CutProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->CutProperties).field0_0x0.DebugPtr,0);
  pUVar2 = GetTransientPackageAsObject();
  pUVar5 = NewObject<USingleClickInputBehavior>(pUVar2);
  plVar8 = &this->_padding_;
  if (this == (UPolyEditCutFacesActivity *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  (**(code **)(pUVar5->_padding_ + 0x378))(pUVar5,plVar8);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2,pUVar5,0);
  pUVar2 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UMouseHoverBehavior>(pUVar2);
  plVar8 = &this->_padding_;
  if (this == (UPolyEditCutFacesActivity *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  (**(code **)(*(longlong *)pUVar6 + 800))(pUVar6,plVar8);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2,pUVar6,0);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = (UInteractiveToolManager *)(**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
  this_01 = UInteractiveToolManager::GetContextObjectStore(this_00);
  pUVar7 = UContextObjectStore::FindContext<UPolyEditActivityContext>(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UPolyEditActivityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->ActivityContext).field0_0x0.DebugPtr = pUVar7;
  return;
}

// Shutdown @ 14cd7f520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPolyEditCutFacesActivity::Shutdown(UPolyEditCutFacesActivity *this,EToolShutdownType param_1)

{
  UPolyEditPreviewMesh *this_00;
  UPolyEditCutProperties *pUVar1;
  code *pcVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  FString local_28;
  
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->CutProperties).field0_0x0.DebugPtr,0);
  pUVar1 = (this->CutProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_28,L"");
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar1,pUVar3,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->CutProperties).field0_0x0.DebugPtr = (UPolyEditCutProperties *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  this->_padding_ = (longlong)local_res8;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  return;
}

// Start @ 14cd800d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EToolActivityStartResult __thiscall
UPolyEditCutFacesActivity::Start(UPolyEditCutFacesActivity *this)

{
  code *pcVar1;
  UPolyEditPreviewMesh *this_00;
  UPolyEditActivityContext *pUVar2;
  char cVar3;
  UObject *pUVar4;
  longlong *plVar5;
  FText *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FText local_18;
  
  cVar3 = (**(code **)(this->_padding_ + 0x2e8))();
  if (cVar3 == '\0') {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    plVar5 = (longlong *)(**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
    pcVar1 = *(code **)(*plVar5 + 0x360);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UPolyEditInsetOutsetActivity",L"OnCutFacesFailedMessage",
                        L"Cannot cut without face selection.");
    (*pcVar1)(plVar5,pFVar6,3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    return FailedStart;
  }
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->CutProperties).field0_0x0.DebugPtr,0);
  BeginCutFaces(this);
  this->bIsRunning = true;
  pUVar2 = (this->ActivityContext).field0_0x0.DebugPtr;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UPolyEditInsetOutsetActivity",L"BeginCutFacesActivity",
                      L"Begin Cut Faces");
  UE::Core::Private::Function::CheckCallable(*(void **)&pUVar2->EmitActivityStart);
  pcVar1 = *(code **)&pUVar2->EmitActivityStart;
  plVar5 = *(longlong **)&(pUVar2->EmitActivityStart).field_0x28;
  plVar8 = (longlong *)&(pUVar2->EmitActivityStart).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar1)(uVar7,pFVar6);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return Running;
}

// StaticRegisterNativesUPolyEditCutFacesActivity @ 14cd813f0

void __cdecl UPolyEditCutFacesActivity::StaticRegisterNativesUPolyEditCutFacesActivity(void)

{
  return;
}

// Tick @ 14cd81600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditCutFacesActivity::Tick(UPolyEditCutFacesActivity *this,float param_1)

{
  return;
}

