// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 31

// StaticClass @ 14ca41d40

UClass * __cdecl UBaseCreateFromSelectedTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCreateFromSelectedTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseCreateFromSelectedTool",
               &Z_Registration_Info_UClass_UBaseCreateFromSelectedTool.InnerSingleton,
               StaticRegisterNativesUBaseCreateFromSelectedTool,0x130,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseCreateFromSelectedTool>,
               InternalVTableHelperCtorCaller<UBaseCreateFromSelectedTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCreateFromSelectedTool.InnerSingleton;
}

// UBaseCreateFromSelectedTool @ 14ca67400

UBaseCreateFromSelectedTool * __thiscall
UBaseCreateFromSelectedTool::UBaseCreateFromSelectedTool
          (UBaseCreateFromSelectedTool *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UMultiSelectionTool::UMultiSelectionTool((UMultiSelectionTool *)this,param_1);
  this->_padding_ = (longlong)&UMultiSelectionMeshEditingTool::_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&UMultiSelectionMeshEditingTool::_vftable__for__IInputBehaviorSource__
  ;
  this->_padding_ = (longlong)&___7UMultiSelectionMeshEditingTool__6B_;
  this->_padding_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  (this->TransformProperties).field0_0x0.DebugPtr = (UTransformInputsToolProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  (this->HandleSourcesProperties).field0_0x0.DebugPtr =
       (UBaseCreateFromSelectedHandleSourceProperties *)0x0;
  (this->CollisionProperties).field0_0x0.DebugPtr =
       (UBaseCreateFromSelectedCollisionProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->TransformProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformProxies).ArrayNum = 0;
  (this->TransformProxies).ArrayMax = 0;
  (this->TransformGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformGizmos).ArrayNum = 0;
  (this->TransformGizmos).ArrayMax = 0;
  return this;
}

// UBaseCreateFromSelectedTool @ 14ca674e0

UBaseCreateFromSelectedTool * __thiscall
UBaseCreateFromSelectedTool::UBaseCreateFromSelectedTool(UBaseCreateFromSelectedTool *this)

{
  undefined8 local_res8;
  
  UMultiSelectionTool::UMultiSelectionTool((UMultiSelectionTool *)this);
  this->_padding_ = (longlong)&UMultiSelectionMeshEditingTool::_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&UMultiSelectionMeshEditingTool::_vftable__for__IInputBehaviorSource__
  ;
  this->_padding_ = (longlong)&___7UMultiSelectionMeshEditingTool__6B_;
  this->_padding_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  (this->TransformProperties).field0_0x0.DebugPtr = (UTransformInputsToolProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  (this->HandleSourcesProperties).field0_0x0.DebugPtr =
       (UBaseCreateFromSelectedHandleSourceProperties *)0x0;
  (this->CollisionProperties).field0_0x0.DebugPtr =
       (UBaseCreateFromSelectedCollisionProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->TransformProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformProxies).ArrayNum = 0;
  (this->TransformProxies).ArrayMax = 0;
  (this->TransformGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformGizmos).ArrayNum = 0;
  (this->TransformGizmos).ArrayMax = 0;
  return this;
}

// ~UBaseCreateFromSelectedTool @ 14ca6b330

void __thiscall
UBaseCreateFromSelectedTool::~UBaseCreateFromSelectedTool(UBaseCreateFromSelectedTool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  pFVar1 = (this->TransformGizmos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TransformProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  this->_padding_ = (longlong)&UMultiSelectionMeshEditingTool::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMultiSelectionMeshEditingTool::_vftable__for__IInputBehaviorSource__
  ;
  this->_padding_ = (longlong)&___7UMultiSelectionMeshEditingTool__6B_;
  UMultiSelectionTool::~UMultiSelectionTool((UMultiSelectionTool *)this);
  return;
}

// operator() @ 14ca711d0

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

void __thiscall
`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_3>::operator()
          (void *this,EBaseCreateFromSelectedTargetType param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  UPrimitiveComponent *pUVar9;
  FString *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FString *pFVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  FString local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  plVar2 = *(longlong **)this;
  (**(code **)(*plVar2 + 0x338))(plVar2,plVar2[0x1e]);
  lVar3 = *(longlong *)this;
  if (param_1 == NewObject) {
    ::FString::operator=((FString *)(*(longlong *)(lVar3 + 0xf8) + 0xd0),L"");
    (**(code **)(**(longlong **)this + 0x400))();
  }
  else {
    uVar8 = 0;
    uVar11 = uVar8;
    if (*(int *)(*(longlong *)(lVar3 + 0xf8) + 0xb8) != 1) {
      uVar11 = *(int *)(lVar3 + 0xd0) - 1;
    }
    uVar12 = ~uVar11 >> 0x1f;
    uVar7 = uVar8;
    if ((int)uVar11 < *(int *)(lVar3 + 0xd0)) {
      uVar7 = uVar12;
    }
    if (uVar7 == 0) {
      local_b8 = (longlong)(int)uVar11;
      local_b0 = (longlong)*(int *)(lVar3 + 0xd0);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar13 = (longlong)(int)uVar11;
    pUVar9 = UE::ToolTarget::GetTargetComponent
                       (*(UToolTarget **)(*(longlong *)(lVar3 + 200) + lVar13 * 8));
    pFVar10 = UE::Modeling::GetComponentAssetBaseName(&local_a8,(UActorComponent *)pUVar9,false);
    lVar3 = *(longlong *)(*(longlong *)this + 0xf8);
    pFVar14 = (FString *)(lVar3 + 0xd0);
    if (pFVar14 != pFVar10) {
      pFVar4 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar14->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar3 + 0xd8) = (pFVar10->Data).ArrayNum;
      *(int *)(lVar3 + 0xdc) = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    lVar3 = *(longlong *)this;
    iVar1 = *(int *)(lVar3 + 0xd0);
    if ((int)uVar11 < iVar1) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (local_b8 = lVar13, local_b0 = (longlong)iVar1,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::ToolTarget::GetLocalToWorldTransform
              (&local_98,*(UToolTarget **)(*(longlong *)(lVar3 + 200) + lVar13 * 8));
    lVar3 = *(longlong *)this;
    iVar1 = *(int *)(lVar3 + 0x128);
    uVar8 = 0;
    if ((int)uVar11 < iVar1) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (local_b8 = lVar13, local_b0 = (longlong)iVar1,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x120) + lVar13 * 8);
    (**(code **)(*plVar2 + 0x340))(plVar2,&local_98,1);
    (**(code **)(**(longlong **)this + 0x400))();
  }
  return;
}

// CanAccept @ 14ca7d540

bool __thiscall UBaseCreateFromSelectedTool::CanAccept(UBaseCreateFromSelectedTool *this)

{
  UMeshOpPreviewWithBackgroundCompute *pUVar1;
  UPreviewMesh *this_00;
  char cVar2;
  FDynamicMesh3 *pFVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x398))();
  if (((cVar2 != '\0') &&
      (pUVar1 = (this->Preview).field0_0x0.DebugPtr, pUVar1->bResultValid != false)) &&
     (this_00 = (pUVar1->PreviewMesh).field0_0x0.DebugPtr, this_00 != (UPreviewMesh *)0x0)) {
    pFVar3 = UPreviewMesh::GetMesh(this_00);
    if (pFVar3 != (FDynamicMesh3 *)0x0) {
      pFVar3 = UPreviewMesh::GetMesh((pUVar1->PreviewMesh).field0_0x0.DebugPtr);
      if (0 < (pFVar3->TriangleRefCounts).UsedCount) {
        return true;
      }
    }
  }
  return false;
}

// ConvertInputsAndSetPreviewMaterials @ 14ca83530

void __thiscall
UBaseCreateFromSelectedTool::ConvertInputsAndSetPreviewMaterials
          (UBaseCreateFromSelectedTool *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\BaseCreateFromSelectedTool.h"
                     ,0x8d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GenerateAsset @ 14ca89d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
UBaseCreateFromSelectedTool::GenerateAsset
          (UBaseCreateFromSelectedTool *this,FDynamicMeshOpResult *param_1)

{
  __m128d *p_Var1;
  FDynamicMesh3 *this_00;
  UBaseCreateFromSelectedHandleSourceProperties *pUVar2;
  UMaterialInterface **ppUVar3;
  UCreateMeshObjectTypeProperties *pUVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  double *pdVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  TTransform<double> *pTVar16;
  TAxisAlignedBox3<double> *pTVar17;
  FString *pFVar18;
  undefined8 *puVar19;
  UPrimitiveComponent *pUVar20;
  FComponentCollisionSettings FVar21;
  UInteractiveToolManager *pUVar22;
  uint uVar23;
  longlong *plVar24;
  wchar_t *pwVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  double dVar35;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint uVar59;
  uint uVar62;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar63;
  double dVar64;
  undefined4 uVar68;
  undefined1 in_XMM4 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar69;
  undefined4 uVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double adVar79 [2];
  double dVar80;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  undefined1 auStackY_ce8 [32];
  FString local_ca8;
  double local_c98 [2];
  undefined1 local_c88 [16];
  undefined1 local_c78 [16];
  double local_c68;
  double dStack_c60;
  double local_c58;
  double dStack_c50;
  double local_c48 [2];
  double local_c38;
  double dStack_c30;
  FSimpleShapeSet3d local_c28;
  FString local_bd8;
  void *local_bc8 [2];
  void *local_bb8 [2];
  double local_ba8;
  double dStack_ba0;
  double local_b98;
  double local_b90;
  double dStack_b88;
  double local_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  double local_b60;
  double dStack_b58;
  double local_b50;
  double local_b48;
  double dStack_b40;
  double local_b38;
  double local_b30;
  double dStack_b28;
  double local_b20;
  TQuaternion<double>_u_0 local_b18;
  double local_af8;
  double dStack_af0;
  double local_ae8;
  double local_ae0;
  double dStack_ad8;
  double local_ad0;
  TQuaternion<double>_u_0 local_ac8;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  double local_a90;
  double dStack_a88;
  double local_a80;
  FCreateMeshObjectResult local_a78;
  double local_a58;
  double dStack_a50;
  double local_a48;
  double local_a40;
  double dStack_a38;
  double local_a30;
  undefined1 local_a28 [16];
  double local_a18;
  double local_a10;
  double dStack_a08;
  double local_a00;
  TAxisAlignedBox3<double> local_9f8;
  TTransform<double> local_9c8;
  TTransform<double> local_968;
  TTransform<double> local_908;
  TTransform<double> local_8a8;
  FCreateMeshObjectParams local_848;
  TTransform<double> local_198;
  undefined1 local_138 [96];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_ce8;
  this_00 = (param_1->Mesh).Ptr;
  if (this_00 == (FDynamicMesh3 *)0x0) {
    return;
  }
  uVar27 = 0;
  local_c88._8_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_c88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c68 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_c60 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_c78._8_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c58 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c50 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_c48[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c48[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_c38 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_c30 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  if ((int)this->_padding_ == 1) {
    UE::ToolTarget::GetLocalToWorldTransform(&local_8a8,*(UToolTarget **)this->_padding_);
    MeshTransforms::ApplyTransform((param_1->Mesh).Ptr,&param_1->Transform,true,All);
    local_b18._s_0.X = local_8a8.Rotation.XY.m128d_f64[0];
    local_b18._s_0.Z = local_8a8.Rotation.ZW.m128d_f64[0];
    local_b18._s_0.Y = local_8a8.Rotation.XY.m128d_f64[1];
    local_b98 = local_8a8.Translation.ZW.m128d_f64[0];
    local_b18._s_0.W = local_8a8.Rotation.ZW.m128d_f64[1];
    local_ae8 = local_8a8.Translation.ZW.m128d_f64[0];
    local_b80 = local_8a8.Scale3D.ZW.m128d_f64[0];
    local_ba8 = local_8a8.Translation.XY.m128d_f64[0];
    dStack_ba0 = local_8a8.Translation.XY.m128d_f64[1];
    local_ad0 = local_8a8.Scale3D.ZW.m128d_f64[0];
    local_af8 = local_8a8.Translation.XY.m128d_f64[0];
    dStack_af0 = local_8a8.Translation.XY.m128d_f64[1];
    local_b90 = local_8a8.Scale3D.XY.m128d_f64[0];
    dStack_b88 = local_8a8.Scale3D.XY.m128d_f64[1];
    local_ae0 = local_8a8.Scale3D.XY.m128d_f64[0];
    dStack_ad8 = local_8a8.Scale3D.XY.m128d_f64[1];
    MeshTransforms::ApplyTransformInverse
              ((param_1->Mesh).Ptr,(TTransformSRT3<double> *)&local_b18._s_0,true,All);
    if (((int)this->_padding_ < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar16 = UE::ToolTarget::GetLocalToWorldTransform(&local_198,*(UToolTarget **)this->_padding_);
    local_c78 = *(undefined1 (*) [16])(pTVar16->Rotation).ZW.m128d_f64;
    local_c88 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
    local_c48 = *&(pTVar16->Scale3D).XY.m128d_f64;
    p_Var1 = &(pTVar16->Scale3D).ZW;
    uVar59 = *(uint *)p_Var1->m128d_f64;
    uVar62 = *(uint *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 4);
    local_c38 = p_Var1->m128d_f64[0];
    pdVar11 = (pTVar16->Scale3D).ZW.m128d_f64 + 1;
    uVar97 = *(uint *)pdVar11;
    uVar98 = *(uint *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 0xc);
    dStack_c30 = *pdVar11;
    local_c58 = (pTVar16->Translation).ZW.m128d_f64[0];
    dStack_c50 = (pTVar16->Translation).ZW.m128d_f64[1];
    local_c68 = (pTVar16->Translation).XY.m128d_f64[0];
    dStack_c60 = (pTVar16->Translation).XY.m128d_f64[1];
  }
  else {
    pTVar17 = UE::Geometry::FDynamicMesh3::GetBounds(this_00,&local_9f8,false);
    dVar6 = (param_1->Transform).Scale3D.field0_0x0._s_0.X;
    dVar71 = ((pTVar17->Max).field0_0x0._s_0.X + (pTVar17->Min).field0_0x0._s_0.X) *
             __real_3fe0000000000000;
    dVar80 = ((pTVar17->Max).field0_0x0._s_0.Y + (pTVar17->Min).field0_0x0._s_0.Y) *
             __real_3fe0000000000000;
    dVar75 = ((pTVar17->Max).field0_0x0._s_0.Z + (pTVar17->Min).field0_0x0._s_0.Z) *
             __real_3fe0000000000000;
    dVar63 = dVar6 * dVar71;
    dVar35 = dVar6 * dVar80;
    uVar59 = (uint)__xmm_80000000000000008000000000000000;
    uVar62 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_b78 = CONCAT44((uint)((ulonglong)dVar63 >> 0x20) ^ uVar62,SUB84(dVar63,0) ^ uVar59);
    uStack_b70 = CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar62,SUB84(dVar35,0) ^ uVar59);
    local_ac8._s_0.X = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_ac8._s_0.Y = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_ac8._s_0.Z = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_ac8._s_0.W = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    dVar35 = dVar6 * dVar75;
    local_b68 = CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar62,SUB84(dVar35,0) ^ uVar59);
    local_b60 = dVar6;
    dStack_b58 = dVar6;
    local_b50 = dVar6;
    local_aa8 = local_b78;
    uStack_aa0 = uStack_b70;
    local_a98 = local_b68;
    local_a90 = dVar6;
    dStack_a88 = dVar6;
    local_a80 = dVar6;
    local_a58 = dVar6;
    dStack_a50 = dVar6;
    local_a48 = dVar6;
    MeshTransforms::ApplyTransform
              ((param_1->Mesh).Ptr,(TTransformSRT3<double> *)&local_ac8._s_0,true,All);
    local_a28 = *(undefined1 (*) [16])&(param_1->Transform).Translation.field0_0x0;
    local_a18 = (param_1->Transform).Translation.field0_0x0._s_0.Z;
    local_c88 = *(undefined1 (*) [16])&(param_1->Transform).Rotation.field0_0x0;
    dVar63 = local_c88._8_8_;
    local_b38 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_c78 = *(undefined1 (*) [16])((longlong)&(param_1->Transform).Rotation.field0_0x0 + 0x10);
    dVar35 = local_c78._0_8_;
    dVar8 = local_c78._8_8_;
    uVar59 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
    uVar62 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
    uVar97 = 0;
    uVar98 = 0;
    auVar9._4_8_ = extraout_XMM0_Qb;
    auVar9._0_4_ = local_a28._4_4_;
    auVar74._0_8_ = auVar9._0_8_ << 0x20;
    auVar74._8_4_ = local_a28._8_4_;
    auVar74._12_4_ = local_a28._12_4_;
    local_a40 = dVar6 * dVar71;
    local_b48 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_b40 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_c48[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_c48[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_c38 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dStack_c30 = 0.0;
    dStack_a38 = dVar6 * dVar80;
    dVar80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * local_a40;
    dVar64 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dStack_a38;
    local_a30 = dVar6 * dVar75;
    dVar6 = local_a30 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    in_XMM4 = blendpd(local_c88,local_c78,2);
    auVar85._8_4_ = SUB84(dVar64,0);
    auVar85._0_8_ = dVar80;
    uVar68 = (undefined4)((ulonglong)dVar64 >> 0x20);
    auVar85._12_4_ = uVar68;
    auVar36._8_4_ = local_c78._0_4_;
    auVar36._0_8_ = dVar63;
    auVar36._12_4_ = local_c78._4_4_;
    auVar45._8_4_ = SUB84(dVar64,0);
    auVar45._0_8_ = dVar80;
    auVar45._12_4_ = uVar68;
    auVar86._0_8_ = auVar85._8_8_ * local_c88._0_8_ - dVar63 * dVar80;
    auVar86._8_8_ = dVar6 * dVar63 - auVar36._8_8_ * dVar64;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = dVar6;
    auVar50 = blendpd(auVar45,auVar50,2);
    auVar72._8_4_ = SUB84(auVar86._8_8_,0);
    auVar72._0_8_ = auVar86._0_8_;
    auVar72._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
    auVar46._0_8_ = auVar50._0_8_ * dVar35 - in_XMM4._0_8_ * dVar6;
    auVar46._8_8_ = auVar50._8_8_ * dVar8 - in_XMM4._8_8_ * 0.0;
    auVar50 = blendpd(auVar86,auVar46,2);
    dVar71 = auVar72._8_8_ + auVar72._8_8_;
    dVar75 = auVar46._0_8_ + auVar46._0_8_;
    auVar87._0_8_ = auVar50._0_8_ + auVar50._0_8_;
    auVar87._8_8_ = auVar50._8_8_ + auVar50._8_8_;
    uVar68 = SUB84(dVar75,0);
    auVar53._8_4_ = uVar68;
    auVar53._0_8_ = dVar71;
    uVar70 = (undefined4)((ulonglong)dVar75 >> 0x20);
    auVar53._12_4_ = uVar70;
    auVar37._8_4_ = uVar68;
    auVar37._0_8_ = dVar71;
    auVar37._12_4_ = uVar70;
    auVar47._8_4_ = uVar68;
    auVar47._0_8_ = dVar71;
    auVar47._12_4_ = uVar70;
    auVar50 = blendpd(auVar47,auVar87,2);
    auVar54._0_8_ = auVar53._8_8_ * local_c88._0_8_ - dVar71 * dVar63;
    auVar54._8_8_ = auVar87._0_8_ * dVar63 - auVar37._8_8_ * dVar35;
    auVar38._8_4_ = SUB84(auVar87._8_8_,0);
    auVar38._0_8_ = auVar87._0_8_;
    auVar38._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
    auVar48._0_8_ = auVar50._0_8_ * dVar35 - auVar87._0_8_ * in_XMM4._0_8_;
    auVar48._8_8_ = auVar50._8_8_ * dVar8 - auVar38._8_8_ * in_XMM4._8_8_;
    auVar39._8_4_ = SUB84(auVar54._8_8_,0);
    auVar39._0_8_ = auVar54._0_8_;
    auVar39._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
    local_a10 = dVar71 * dVar8 + dVar80 + auVar39._8_8_;
    dStack_a08 = dVar75 * dVar8 + dVar64 + auVar48._0_8_;
    local_c68 = local_a28._0_8_ + local_a10;
    auVar50 = blendpd(auVar54,auVar48,2);
    local_a00 = auVar87._0_8_ * dVar8 + dVar6 + auVar50._0_8_;
    local_c58 = local_a18 + local_a00;
    dStack_c60 = auVar74._8_8_ + dStack_a08;
    dStack_c50 = 0.0;
    local_b30 = local_c68;
    dStack_b28 = dStack_c60;
    local_b20 = local_c58;
  }
  adVar79 = local_c48;
  pUVar2 = (this->HandleSourcesProperties).field0_0x0.DebugPtr;
  iVar15 = (pUVar2->OutputNewName).Data.ArrayNum;
  iVar14 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar14 = 0;
  }
  if (0xfa < iVar14) {
    iVar14 = 0xfa;
  }
  iVar28 = 0;
  if (0 < iVar14) {
    iVar28 = iVar14;
  }
  if (iVar15 == 0) {
    pwVar25 = L"";
  }
  else {
    pwVar25 = (wchar_t *)(pUVar2->OutputNewName).Data.AllocatorInstance.Data;
  }
  local_c98 = local_c48;
  ::FString::ConstructFromPtrSize(&local_ca8,pwVar25,iVar28);
  if (local_ca8.Data.ArrayNum < 2) {
    pFVar18 = (FString *)(**(code **)(this->_padding_ + 0x3d8))(this,local_bc8);
    pFVar18 = PrefixWithSourceNameIfSingleSelection(this,&local_bd8,pFVar18);
    if (&local_ca8 != pFVar18) {
      if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
      }
      local_ca8.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
      (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_ca8.Data.ArrayNum = (pFVar18->Data).ArrayNum;
      local_ca8.Data.ArrayMax = (pFVar18->Data).ArrayMax;
      (pFVar18->Data).ArrayNum = 0;
      (pFVar18->Data).ArrayMax = 0;
    }
    if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
    }
    if (local_bc8[0] != (void *)0x0) {
      FMemory::Free(local_bc8[0]);
    }
  }
  FCreateMeshObjectParams::FCreateMeshObjectParams(&local_848,true);
  local_848.TargetWorld.field0_0x0 =
       (TObjectPtr<UWorld>_u_0)(**(code **)(this->_padding_ + 0x3b0))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_848.TargetWorld.field0_0x0.DebugPtr != (TObjectPtr<UWorld>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_848.TargetWorld.field0_0x0);
  }
  local_848.Transform.Rotation.XY.m128d_f64[0] = (double)local_c88._0_8_;
  local_848.Transform.Rotation.XY.m128d_f64[1] = (double)local_c88._8_8_;
  uVar29 = 0;
  uVar30 = local_ca8.Data.ArrayNum - 1;
  if (local_ca8.Data.ArrayNum == 0) {
    uVar30 = uVar29;
  }
  local_848.Transform.Rotation.ZW.m128d_f64[0] = (double)local_c78._0_8_;
  local_848.Transform.Rotation.ZW.m128d_f64[1] = (double)local_c78._8_8_;
  local_848.Transform.Translation.ZW.m128d_f64[1] = dStack_c50;
  local_848.Transform.Translation.ZW.m128d_f64[0] = local_c58;
  local_848.Transform.Translation.XY.m128d_f64[0] = local_c68;
  local_848.Transform.Translation.XY.m128d_f64[1] = dStack_c60;
  local_848.Transform.Scale3D.XY.m128d_f64 = adVar79;
  local_848.Transform.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar59;
  local_848.Transform.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar62;
  local_848.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar97;
  local_848.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar98;
  ::FString::AssignRange
            (&local_848.BaseName,(wchar_t *)local_ca8.Data.AllocatorInstance.Data,uVar30);
  puVar19 = (undefined8 *)(**(code **)(this->_padding_ + 1000))(this,local_bb8);
  iVar15 = *(int *)(puVar19 + 1);
  ppUVar3 = (UMaterialInterface **)*puVar19;
  local_848.Materials.ArrayNum = iVar15;
  if ((iVar15 == 0) && (local_848.Materials.ArrayMax == 0)) {
    local_848.Materials.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar15,local_848.Materials.ArrayMax,&local_848.Materials.AllocatorInstance,iVar15
               ,&local_848.Materials.ArrayMax);
    ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
              (local_848.Materials.AllocatorInstance.Data,ppUVar3,iVar15);
  }
  if (local_bb8[0] != (void *)0x0) {
    FMemory::Free(local_bb8[0]);
  }
  FCreateMeshObjectParams::SetMesh(&local_848,(param_1->Mesh).Ptr);
  pUVar4 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  iVar15 = (pUVar4->OutputType).Data.ArrayNum;
  if (iVar15 == UCreateMeshObjectTypeProperties::AutoIdentifier.Data.ArrayNum) {
    if (1 < iVar15) {
      iVar15 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pUVar4->OutputType).Data.AllocatorInstance.Data,
                          (wchar_t *)
                          UCreateMeshObjectTypeProperties::AutoIdentifier.Data.AllocatorInstance.
                          Data);
      bVar12 = iVar15 == 0;
      goto LAB_14ca8a4b0;
    }
  }
  else {
    bVar12 = iVar15 + UCreateMeshObjectTypeProperties::AutoIdentifier.Data.ArrayNum == 1;
LAB_14ca8a4b0:
    if (!bVar12) {
      pUVar4 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x2d0))(pUVar4,&local_848);
      goto LAB_14ca8a52f;
    }
  }
  if (((int)this->_padding_ < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::ToolTarget::ConfigureCreateMeshObjectParams(*(UToolTarget **)this->_padding_,&local_848);
LAB_14ca8a52f:
  cVar13 = (**(code **)(this->_padding_ + 0x3f0))(this);
  if ((((cVar13 != '\0') &&
       (((this->CollisionProperties).field0_0x0.DebugPtr)->bTransferCollision != false)) &&
      (local_848.TypeHint != Volume)) &&
     (uVar31 = uVar27, uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar82 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, uVar83 = _UNK_15061cc88,
     uVar84 = _UNK_15061cc8c, 0 < (int)this->_padding_)) {
    do {
      uVar26 = (uint)uVar27;
      cVar13 = (**(code **)(this->_padding_ + 0x3f8))(this);
      if (cVar13 != '\0') {
        uVar23 = uVar29;
        if ((int)uVar26 < (int)this->_padding_) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar20 = UE::ToolTarget::GetTargetComponent(*(UToolTarget **)(this->_padding_ + uVar31));
        bVar12 = UE::Geometry::ComponentTypeSupportsCollision(pUVar20,ReadOnly);
        if (bVar12) {
          local_848.bEnableCollision = true;
          FVar21 = UE::Geometry::GetCollisionSettings(pUVar20);
          local_908.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_908.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_908.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_908.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_908.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_908.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_848.CollisionMode.Value = FVar21.CollisionTypeFlag._0_1_;
          local_c28.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c28.Spheres.ArrayNum = 0;
          local_c28.Spheres.ArrayMax = 0;
          local_c28.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c28.Boxes.ArrayNum = 0;
          local_c28.Boxes.ArrayMax = 0;
          local_c28.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c28.Capsules.ArrayNum = 0;
          local_c28.Capsules.ArrayMax = 0;
          local_c28.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c28.Convexes.ArrayNum = 0;
          local_c28.Convexes.ArrayMax = 0;
          local_c28.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c28.LevelSets.ArrayNum = 0;
          local_c28.LevelSets.ArrayMax = 0;
          if (1 < (int)this->_padding_) {
            uVar23 = uVar29;
            if ((int)uVar26 < (this->TransformProxies).ArrayNum) {
              uVar23 = ~uVar26 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar24 = *(longlong **)((this->TransformProxies).AllocatorInstance.Data + uVar31);
            pTVar16 = (TTransform<double> *)(**(code **)(*plVar24 + 0x2c0))(plVar24,local_138);
            auVar55._0_8_ = (double)CONCAT44(uVar62 & uVar82,uVar59 & uVar30);
            auVar55._8_4_ = uVar97 & uVar83;
            auVar55._12_4_ = uVar98 & uVar84;
            auVar49._8_8_ =
                 -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar55._8_8_);
            auVar49._0_8_ =
                 -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar55._0_8_);
            uVar93 = adVar79[0]._0_4_ & uVar30;
            uVar94 = adVar79[0]._4_4_ & uVar82;
            uVar95 = adVar79[1]._0_4_ & uVar83;
            uVar96 = adVar79[1]._4_4_ & uVar84;
            uVar23 = movmskpd((int)plVar24,auVar49);
            auVar40._8_8_ =
                 -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                  (double)CONCAT44(uVar96,uVar95));
            auVar40._0_8_ =
                 -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                  (double)CONCAT44(uVar94,uVar93));
            iVar15 = movmskpd((int)pTVar16,auVar40);
            if ((uVar23 & 0x3fffffff) == 0 && iVar15 == 0) {
              local_9c8.Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              local_9c8.Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              local_9c8.Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              local_9c8.Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              local_9c8.Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              local_9c8.Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            }
            else {
              auVar10._4_8_ = in_XMM4._8_8_;
              auVar10._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
              auVar65._0_8_ = auVar10._0_8_ << 0x20;
              auVar65._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              auVar65._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              auVar66._8_8_ = auVar65._8_8_;
              auVar66._4_4_ = uVar62;
              auVar66._0_4_ = uVar59;
              dVar71 = (double)local_c88._0_8_ *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar75 = (double)local_c88._8_8_ *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              uVar91 = SUB84(dVar75,0);
              uVar92 = (undefined4)((ulonglong)dVar75 >> 0x20);
              dVar63 = (double)local_c78._0_8_ *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dVar8 = (double)local_c78._8_8_ *
                      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              uVar89 = SUB84(dVar8,0);
              uVar90 = (undefined4)((ulonglong)dVar8 >> 0x20);
              lVar32 = -(ulonglong)
                        ((double)CONCAT44(uVar82 & uVar62,uVar30 & uVar59) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
              auVar73._8_4_ = uVar91;
              auVar73._0_8_ = dVar71;
              auVar73._12_4_ = uVar92;
              auVar50 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              (undefined1  [16])adVar79);
              lVar33 = -(ulonglong)
                        ((double)CONCAT44(uVar94,uVar93) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
              lVar34 = -(ulonglong)
                        ((double)CONCAT44(uVar96,uVar95) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
              local_9c8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar33 & auVar50._0_4_;
              local_9c8.Scale3D.XY.m128d_f64[0]._4_4_ =
                   ~(uint)((ulonglong)lVar33 >> 0x20) & auVar50._4_4_;
              local_9c8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar34 & auVar50._8_4_;
              local_9c8.Scale3D.XY.m128d_f64[1]._4_4_ =
                   ~(uint)((ulonglong)lVar34 >> 0x20) & auVar50._12_4_;
              auVar50 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar66);
              auVar81._8_4_ = uVar89;
              auVar81._0_8_ = dVar63;
              auVar81._12_4_ = uVar90;
              dVar6 = local_c68 *
                      (double)CONCAT44(local_9c8.Scale3D.XY.m128d_f64[0]._4_4_,
                                       local_9c8.Scale3D.XY.m128d_f64[0]._0_4_);
              dVar35 = dStack_c60 *
                       (double)CONCAT44(local_9c8.Scale3D.XY.m128d_f64[1]._4_4_,
                                        local_9c8.Scale3D.XY.m128d_f64[1]._0_4_);
              uVar68 = (undefined4)((ulonglong)dVar35 >> 0x20);
              local_9c8.Scale3D.ZW.m128d_f64[0] =
                   (double)CONCAT44(~(uint)((ulonglong)lVar32 >> 0x20) & auVar50._4_4_,
                                    ~(uint)lVar32 & auVar50._0_4_);
              auVar56._8_4_ = uVar91;
              auVar56._0_8_ = dVar71;
              auVar56._12_4_ = uVar92;
              dVar80 = auVar56._8_8_;
              auVar41._8_4_ = SUB84(dVar63,0);
              auVar41._0_8_ = dVar80;
              auVar41._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
              auVar88._0_8_ = local_c58 * local_9c8.Scale3D.ZW.m128d_f64[0];
              auVar88._8_8_ = dStack_c50 * 0.0;
              auVar7._8_4_ = uVar89;
              auVar7._0_8_ = dVar63;
              auVar7._12_4_ = uVar90;
              auVar74 = blendpd(auVar73,auVar7,2);
              auVar76._8_4_ = SUB84(dVar35,0);
              auVar76._0_8_ = dVar6;
              auVar76._12_4_ = uVar68;
              auVar51._8_4_ = SUB84(dVar35,0);
              auVar51._0_8_ = dVar6;
              auVar51._12_4_ = uVar68;
              auVar50 = blendpd(auVar51,auVar88,2);
              auVar77._0_8_ = auVar76._8_8_ * dVar71 - dVar80 * dVar6;
              auVar77._8_8_ = auVar88._0_8_ * dVar75 - auVar41._8_8_ * dVar35;
              auVar67._8_4_ = SUB84(auVar77._8_8_,0);
              auVar67._0_8_ = auVar77._0_8_;
              auVar67._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
              auVar52._0_8_ = auVar50._0_8_ * dVar63 - auVar74._0_8_ * auVar88._0_8_;
              auVar52._8_8_ = auVar50._8_8_ * dVar8 - auVar74._8_8_ * auVar88._8_8_;
              dVar64 = auVar67._8_8_ + auVar67._8_8_;
              dVar69 = auVar52._0_8_ + auVar52._0_8_;
              auVar50 = blendpd(auVar77,auVar52,2);
              auVar78._0_8_ = auVar50._0_8_ + auVar50._0_8_;
              auVar78._8_8_ = auVar50._8_8_ + auVar50._8_8_;
              uVar68 = SUB84(dVar69,0);
              auVar60._8_4_ = uVar68;
              auVar60._0_8_ = dVar64;
              uVar70 = (undefined4)((ulonglong)dVar69 >> 0x20);
              auVar60._12_4_ = uVar70;
              auVar42._8_4_ = uVar68;
              auVar42._0_8_ = dVar64;
              auVar42._12_4_ = uVar70;
              auVar57._8_4_ = uVar68;
              auVar57._0_8_ = dVar64;
              auVar57._12_4_ = uVar70;
              auVar50 = blendpd(auVar57,auVar78,2);
              auVar61._0_8_ = auVar60._8_8_ * dVar71 - dVar64 * dVar80;
              auVar61._8_8_ = auVar78._0_8_ * dVar75 - auVar42._8_8_ * dVar63;
              auVar43._8_4_ = SUB84(auVar78._8_8_,0);
              auVar43._0_8_ = auVar78._0_8_;
              auVar43._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
              auVar58._0_8_ = auVar50._0_8_ * dVar63 - auVar78._0_8_ * auVar74._0_8_;
              auVar58._8_8_ = auVar50._8_8_ * dVar8 - auVar43._8_8_ * auVar74._8_8_;
              auVar44._8_4_ = SUB84(auVar61._8_8_,0);
              auVar44._0_8_ = auVar61._0_8_;
              auVar44._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
              auVar50 = blendpd(auVar61,auVar58,2);
              in_XMM4._0_8_ = dVar64 * auVar81._8_8_ + dVar6 + auVar44._8_8_;
              in_XMM4._8_8_ = dVar69 * dVar8 + dVar35 + auVar58._0_8_;
              local_9c8.Rotation.XY.m128d_f64[1]._0_4_ = uVar91;
              local_9c8.Rotation.XY.m128d_f64[0] = dVar71;
              local_9c8.Rotation.XY.m128d_f64[1]._4_4_ = uVar92;
              local_9c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar89;
              local_9c8.Rotation.ZW.m128d_f64[0] = dVar63;
              local_9c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar90;
              local_9c8.Translation.XY.m128d_f64[1] = 0.0 - in_XMM4._8_8_;
              local_9c8.Translation.XY.m128d_f64[0] = 0.0 - in_XMM4._0_8_;
              local_9c8.Translation.ZW.m128d_f64[1] = 0.0;
              local_9c8.Translation.ZW.m128d_f64[0] =
                   0.0 - (auVar78._0_8_ * auVar81._8_8_ + auVar88._0_8_ + auVar50._0_8_);
              local_9c8.Scale3D.ZW.m128d_f64[1] = 0.0;
              adVar79 = local_c98;
              uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar82 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              uVar83 = _UNK_15061cc88;
              uVar84 = _UNK_15061cc8c;
            }
            local_968.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_968.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_968.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_968.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_968.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_968.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_968.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_968.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_968.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_968.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_968.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_968.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply(&local_968,pTVar16,&local_9c8);
            local_908.Rotation.XY.m128d_f64[1] = local_968.Rotation.XY.m128d_f64[1];
            local_908.Rotation.XY.m128d_f64[0] = local_968.Rotation.XY.m128d_f64[0];
            local_908.Rotation.ZW.m128d_f64[1] = local_968.Rotation.ZW.m128d_f64[1];
            local_908.Rotation.ZW.m128d_f64[0] = local_968.Rotation.ZW.m128d_f64[0];
            local_908.Translation.XY.m128d_f64[1] = local_968.Translation.XY.m128d_f64[1];
            local_908.Translation.XY.m128d_f64[0] = local_968.Translation.XY.m128d_f64[0];
            local_908.Translation.ZW.m128d_f64[1] = local_968.Translation.ZW.m128d_f64[1];
            local_908.Translation.ZW.m128d_f64[0] = local_968.Translation.ZW.m128d_f64[0];
            local_908.Scale3D.ZW.m128d_f64[1] = local_968.Scale3D.ZW.m128d_f64[1];
            local_908.Scale3D.ZW.m128d_f64[0] = local_968.Scale3D.ZW.m128d_f64[0];
            local_908.Scale3D.XY.m128d_f64[1] = local_968.Scale3D.XY.m128d_f64[1];
            local_908.Scale3D.XY.m128d_f64[0] = local_968.Scale3D.XY.m128d_f64[0];
          }
          bVar12 = UE::Geometry::GetCollisionShapes(pUVar20,&local_c28);
          if (bVar12) {
            if (local_848.CollisionShapeSet.bIsSet == false) {
              local_848.CollisionShapeSet.bIsSet = true;
              local_848.CollisionShapeSet.TypedValue.Spheres.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_848.CollisionShapeSet.TypedValue.Spheres.ArrayNum = 0;
              local_848.CollisionShapeSet.TypedValue.Spheres.ArrayMax = 0;
              local_848.CollisionShapeSet.TypedValue.Boxes.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_848.CollisionShapeSet.TypedValue.Boxes.ArrayNum = 0;
              local_848.CollisionShapeSet.TypedValue.Boxes.ArrayMax = 0;
              local_848.CollisionShapeSet.TypedValue.Capsules.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_848.CollisionShapeSet.TypedValue.Capsules.ArrayNum = 0;
              local_848.CollisionShapeSet.TypedValue.Capsules.ArrayMax = 0;
              local_848.CollisionShapeSet.TypedValue.Convexes.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_848.CollisionShapeSet.TypedValue.Convexes.ArrayNum = 0;
              local_848.CollisionShapeSet.TypedValue.Convexes.ArrayMax = 0;
              local_848.CollisionShapeSet.TypedValue.LevelSets.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_848.CollisionShapeSet.TypedValue.LevelSets.ArrayNum = 0;
              local_848.CollisionShapeSet.TypedValue.LevelSets.ArrayMax = 0;
            }
            UE::Geometry::FSimpleShapeSet3d::Append
                      (&local_848.CollisionShapeSet.TypedValue,&local_c28,&local_908);
          }
          DestructItems<UE::Geometry::FLevelSetShape3d,int>
                    ((FLevelSetShape3d *)local_c28.LevelSets.AllocatorInstance.Data,
                     local_c28.LevelSets.ArrayNum);
          if ((FLevelSetShape3d *)local_c28.LevelSets.AllocatorInstance.Data !=
              (FLevelSetShape3d *)0x0) {
            FMemory::Free(local_c28.LevelSets.AllocatorInstance.Data);
          }
          DestructItems<UE::Geometry::FConvexShape3d,int>
                    ((FConvexShape3d *)local_c28.Convexes.AllocatorInstance.Data,
                     local_c28.Convexes.ArrayNum);
          if (local_c28.Convexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c28.Convexes.AllocatorInstance.Data);
          }
          if (local_c28.Capsules.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c28.Capsules.AllocatorInstance.Data);
          }
          if (local_c28.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c28.Boxes.AllocatorInstance.Data);
          }
          if (local_c28.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c28.Spheres.AllocatorInstance.Data);
          }
        }
      }
      uVar27 = (ulonglong)(uVar26 + 1);
      uVar31 = uVar31 + 8;
    } while ((int)(uVar26 + 1) < (int)this->_padding_);
  }
  pUVar22 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UE::Modeling::CreateMeshObject(&local_a78,pUVar22,&local_848);
  if ((local_a78.ResultCode == Ok) &&
     (local_a78.NewActor.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
    pUVar22 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    ToolSelectionUtil::SetNewActorSelection(pUVar22,(AActor *)local_a78.NewActor.field0_0x0);
  }
  if (local_848.DynamicMesh.bIsSet != false) {
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_848.DynamicMesh.TypedValue);
  }
  if (local_848.MeshDescription.bIsSet != false) {
    FMeshDescription::~FMeshDescription(&local_848.MeshDescription.TypedValue);
  }
  DestructItems<FNaniteAssemblyNode,int>
            ((FNaniteAssemblyNode *)
             local_848.NaniteSettings.NaniteAssemblyData.Nodes.AllocatorInstance.Data,
             local_848.NaniteSettings.NaniteAssemblyData.Nodes.ArrayNum);
  if ((FNaniteAssemblyNode *)
      local_848.NaniteSettings.NaniteAssemblyData.Nodes.AllocatorInstance.Data !=
      (FNaniteAssemblyNode *)0x0) {
    FMemory::Free(local_848.NaniteSettings.NaniteAssemblyData.Nodes.AllocatorInstance.Data);
  }
  DestructItems<FNaniteAssemblyPart,int>
            ((FNaniteAssemblyPart *)
             local_848.NaniteSettings.NaniteAssemblyData.Parts.AllocatorInstance.Data,
             local_848.NaniteSettings.NaniteAssemblyData.Parts.ArrayNum);
  if ((FNaniteAssemblyPart *)
      local_848.NaniteSettings.NaniteAssemblyData.Parts.AllocatorInstance.Data !=
      (FNaniteAssemblyPart *)0x0) {
    FMemory::Free(local_848.NaniteSettings.NaniteAssemblyData.Parts.AllocatorInstance.Data);
  }
  if (local_848.NaniteSettings.DisplacementMaps.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.NaniteSettings.DisplacementMaps.AllocatorInstance.Data);
  }
  if (local_848.CollisionShapeSet.bIsSet != false) {
    UE::Geometry::FSimpleShapeSet3d::~FSimpleShapeSet3d(&local_848.CollisionShapeSet.TypedValue);
  }
  if (local_848.AssetMaterials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.AssetMaterials.AllocatorInstance.Data);
  }
  if (local_848.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Materials.AllocatorInstance.Data);
  }
  if (local_848.BaseName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.BaseName.Data.AllocatorInstance.Data);
  }
  if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetActionName @ 14ca8d900

FText * __thiscall
UBaseCreateFromSelectedTool::GetActionName
          (UBaseCreateFromSelectedTool *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UBaseCreateFromSelectedTool",L"BaseCreateFromSelectedTool",
             L"Generated Mesh");
  return __return_storage_ptr__;
}

// GetCreatedAssetName @ 14ca8e7a0

FString * __thiscall
UBaseCreateFromSelectedTool::GetCreatedAssetName
          (UBaseCreateFromSelectedTool *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Generated");
  return __return_storage_ptr__;
}

// GetHiddenGizmoIndex @ 14ca8fec0

int __thiscall UBaseCreateFromSelectedTool::GetHiddenGizmoIndex(UBaseCreateFromSelectedTool *this)

{
  EBaseCreateFromSelectedTargetType EVar1;
  
  EVar1 = ((this->HandleSourcesProperties).field0_0x0.DebugPtr)->OutputWriteTo;
  if (EVar1 == NewObject) {
    return -1;
  }
  if (EVar1 == FirstInputObject) {
    return 0;
  }
  return (int)this->_padding_ + -1;
}

// GetOutputMaterials @ 14ca908e0

TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> * __thiscall
UBaseCreateFromSelectedTool::GetOutputMaterials
          (UBaseCreateFromSelectedTool *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  UMeshOpPreviewWithBackgroundCompute *pUVar2;
  FScriptContainerElement *_Src;
  
  pUVar2 = (this->Preview).field0_0x0.DebugPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (pUVar2->StandardMaterials).ArrayNum;
  _Src = (pUVar2->StandardMaterials).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14ca90cc0

UClass * __cdecl UBaseCreateFromSelectedTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCreateFromSelectedTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseCreateFromSelectedTool",
               &Z_Registration_Info_UClass_UBaseCreateFromSelectedTool.InnerSingleton,
               StaticRegisterNativesUBaseCreateFromSelectedTool,0x130,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseCreateFromSelectedTool>,
               InternalVTableHelperCtorCaller<UBaseCreateFromSelectedTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCreateFromSelectedTool.InnerSingleton;
}

// HasAccept @ 14ca94a40

bool __thiscall UBaseCreateFromSelectedTool::HasAccept(UBaseCreateFromSelectedTool *this)

{
  return true;
}

// HasCancel @ 14ca94b40

bool __thiscall UBaseCreateFromSelectedTool::HasCancel(UBaseCreateFromSelectedTool *this)

{
  return true;
}

// KeepCollisionFrom @ 14ca97a00

bool __thiscall
UBaseCreateFromSelectedTool::KeepCollisionFrom(UBaseCreateFromSelectedTool *this,int param_1)

{
  return true;
}

// MakeNewOperator @ 14ca987b0

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UBaseCreateFromSelectedTool::MakeNewOperator(UBaseCreateFromSelectedTool *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar3;
  FDynamicMeshOperator *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\BaseCreateFromSelectedTool.h"
                     ,0xb3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FDynamicMeshOperator *)(*pcVar1)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// OnPropertyModified @ 14ca9b000

void __thiscall
UBaseCreateFromSelectedTool::OnPropertyModified
          (UBaseCreateFromSelectedTool *this,UObject *param_1,FProperty *param_2)

{
  FName FVar1;
  UBaseCreateFromSelectedHandleSourceProperties *pUVar2;
  bool bVar3;
  FName *pFVar4;
  FName FVar5;
  FName local_res18;
  
  if (param_2 != (FProperty *)0x0) {
    pFVar4 = ::FName::FName(&local_res18,0x13,L"bShowTransformGizmo",FNAME_Add);
    FVar1 = *pFVar4;
    bVar3 = IsThisNotNull(param_2,"FField::GetFName");
    if (bVar3) {
      FVar5 = (FName)param_2->_padding_;
    }
    else {
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
    }
    if (FVar5 == FVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014ca9b07f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x400))(this);
      return;
    }
    pUVar2 = (this->HandleSourcesProperties).field0_0x0.DebugPtr;
    if (pUVar2 == (UBaseCreateFromSelectedHandleSourceProperties *)0x0) {
      bVar3 = param_1 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar2 == (UBaseCreateFromSelectedHandleSourceProperties *)param_1;
    }
    if (bVar3) {
      return;
    }
  }
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  return;
}

// OnShutdown @ 14ca9b410

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UBaseCreateFromSelectedTool::OnShutdown(UBaseCreateFromSelectedTool *this,EToolShutdownType param_1)

{
  uchar *puVar1;
  EBaseCreateFromSelectedTargetType EVar2;
  UBaseCreateFromSelectedHandleSourceProperties *pUVar3;
  code *pcVar4;
  UBaseCreateFromSelectedCollisionProperties *pUVar5;
  UCreateMeshObjectTypeProperties *pUVar6;
  UTransformInputsToolProperties *pUVar7;
  longlong *plVar8;
  ITextData *pIVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  UPrimitiveComponent *pUVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar18;
  undefined8 uVar19;
  FText *pFVar20;
  FText *pFVar21;
  FTextFormat *pFVar22;
  FComponentCollisionSettings FVar23;
  AActor *pAVar24;
  UInteractiveToolManager *pUVar25;
  UInteractiveGizmoManager *pUVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar30;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 auStackY_5b8 [32];
  undefined1 local_567 [7];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_560;
  AActor *local_550;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_548;
  UPrimitiveComponent *local_538;
  FSimpleShapeSet3d local_528;
  FSimpleShapeSet3d local_4d8;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FTextFormat local_3f8;
  FText local_3e8;
  FFormatArgumentValue local_3d8;
  longlong *local_3b8 [2];
  FText local_3a8;
  longlong *local_398 [2];
  double local_388;
  double dStack_380;
  double local_378;
  double local_370;
  double dStack_368;
  double local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  TQuaternion<double>_u_0 local_328;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  undefined1 local_2d8 [16];
  FTextFormat local_2c8;
  FDynamicMeshOpResult local_2b8;
  TTransformSequence3<double> local_258;
  TTransform<double> local_1a8;
  TTransformSequence3<double> local_148;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  (**(code **)(this->_padding_ + 0x3c8))();
  pUVar3 = (this->HandleSourcesProperties).field0_0x0.DebugPtr;
  pcVar4 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString(&local_438,L"");
  (*pcVar4)(pUVar3,this,&local_438);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  cVar10 = (**(code **)(this->_padding_ + 0x3f0))(this);
  if (cVar10 != '\0') {
    pUVar5 = (this->CollisionProperties).field0_0x0.DebugPtr;
    pcVar4 = *(code **)(pUVar5->_padding_ + 0x2b0);
    ::FString::FString(&local_428,L"");
    (*pcVar4)(pUVar5,this,&local_428);
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
  }
  pUVar6 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  pcVar4 = *(code **)(pUVar6->_padding_ + 0x2b0);
  ::FString::FString(&local_418,L"OutputTypeFromInputTool");
  (*pcVar4)(pUVar6,this,&local_418);
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  pUVar7 = (this->TransformProperties).field0_0x0.DebugPtr;
  pcVar4 = *(code **)(pUVar7->_padding_ + 0x2b0);
  ::FString::FString(&local_408,L"");
  (*pcVar4)(pUVar7,this,&local_408);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  UMeshOpPreviewWithBackgroundCompute::Shutdown((this->Preview).field0_0x0.DebugPtr,&local_2b8);
  uVar33 = 0;
  uVar32 = 0;
  uVar34 = uVar33;
  uVar27 = uVar33;
  if (0 < (int)this->_padding_) {
    do {
      uVar28 = (uint)uVar34;
      uVar29 = uVar32;
      if ((int)uVar28 < (int)this->_padding_) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::ToolTarget::ShowSourceObject(*(UToolTarget **)(this->_padding_ + uVar27));
      uVar34 = (ulonglong)(uVar28 + 1);
      uVar27 = uVar27 + 8;
    } while ((int)(uVar28 + 1) < (int)this->_padding_);
  }
  if (param_1 != Accept) goto LAB_14ca9c36e;
  bVar11 = false;
  cVar10 = (**(code **)(this->_padding_ + 0x3f0))(this);
  if (((cVar10 == '\0') ||
      (EVar2 = ((this->HandleSourcesProperties).field0_0x0.DebugPtr)->OutputWriteTo,
      EVar2 == NewObject)) || (iVar14 = (int)this->_padding_, iVar14 < 2)) {
LAB_14ca9c05b:
    lVar17 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar4 = *(code **)(*(longlong *)(lVar17 + 0x28) + 0x10);
    uVar19 = (**(code **)(this->_padding_ + 0x3e0))(this,local_398);
    (*pcVar4)(lVar17 + 0x28,uVar19);
    if (local_398[0] != (longlong *)0x0) {
      (**(code **)(*local_398[0] + 0x10))();
    }
  }
  else {
    uVar29 = uVar32;
    if (EVar2 != FirstInputObject) {
      uVar29 = iVar14 - 1;
    }
    if ((int)uVar29 < (int)this->_padding_) {
      uVar32 = ~uVar29 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar34 = (ulonglong)(int)uVar29;
    pUVar15 = UE::ToolTarget::GetTargetComponent(*(UToolTarget **)(this->_padding_ + uVar34 * 8));
    local_538 = pUVar15;
    if ((((this->CollisionProperties).field0_0x0.DebugPtr)->bTransferCollision == false) ||
       (bVar12 = UE::Geometry::ComponentTypeSupportsCollision(pUVar15,ReadWrite), !bVar12))
    goto LAB_14ca9c05b;
    local_528.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar12 = false;
    local_528.Spheres.ArrayNum = 0;
    local_528.Spheres.ArrayMax = 0;
    local_528.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_528.Boxes.ArrayNum = 0;
    local_528.Boxes.ArrayMax = 0;
    local_528.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_528.Capsules.ArrayNum = 0;
    local_528.Capsules.ArrayMax = 0;
    local_528.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_528.Convexes.ArrayNum = 0;
    local_528.Convexes.ArrayMax = 0;
    local_528.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_528.LevelSets.ArrayNum = 0;
    local_528.LevelSets.ArrayMax = 0;
    UE::Geometry::GetCollisionShapes(pUVar15,&local_528);
    uVar32 = 0;
    if ((int)uVar29 < (int)this->_padding_) {
      uVar32 = ~uVar29 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::ToolTarget::GetLocalToWorldTransform
              (&local_1a8,*(UToolTarget **)(this->_padding_ + uVar34 * 8));
    local_328._s_0.X = local_1a8.Rotation.XY.m128d_f64[0];
    local_328._s_0.Z = local_1a8.Rotation.ZW.m128d_f64[0];
    local_328._s_0.Y = local_1a8.Rotation.XY.m128d_f64[1];
    local_378 = local_1a8.Translation.ZW.m128d_f64[0];
    local_328._s_0.W = local_1a8.Rotation.ZW.m128d_f64[1];
    local_2f8 = local_1a8.Translation.ZW.m128d_f64[0];
    local_360 = local_1a8.Scale3D.ZW.m128d_f64[0];
    local_388 = local_1a8.Translation.XY.m128d_f64[0];
    dStack_380 = local_1a8.Translation.XY.m128d_f64[1];
    local_2e0 = local_1a8.Scale3D.ZW.m128d_f64[0];
    local_308 = local_1a8.Translation.XY.m128d_f64[0];
    dStack_300 = local_1a8.Translation.XY.m128d_f64[1];
    local_148.Transforms.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
    local_148.Transforms.ArrayNum = 0;
    local_148.Transforms.ArrayMax = 2;
    local_370 = local_1a8.Scale3D.XY.m128d_f64[0];
    dStack_368 = local_1a8.Scale3D.XY.m128d_f64[1];
    local_2f0 = local_1a8.Scale3D.XY.m128d_f64[0];
    dStack_2e8 = local_1a8.Scale3D.XY.m128d_f64[1];
    UE::Geometry::TTransformSequence3<double>::AppendInverse
              (&local_148,(TTransformSRT3<double> *)&local_328._s_0,__real_3e45798ee2308c3a);
    uVar27 = uVar33;
    if (0 < (int)this->_padding_) {
      do {
        uVar32 = (uint)uVar27;
        if ((uVar33 != uVar34) &&
           (cVar10 = (**(code **)(this->_padding_ + 0x3f8))(this), cVar10 != '\0')) {
          uVar29 = 0;
          if ((int)uVar32 < (int)this->_padding_) {
            uVar29 = ~uVar32 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar15 = UE::ToolTarget::GetTargetComponent
                              (*(UToolTarget **)(this->_padding_ + uVar33 * 8));
          local_4d8.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4d8.Spheres.ArrayNum = 0;
          local_4d8.Spheres.ArrayMax = 0;
          local_4d8.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4d8.Boxes.ArrayNum = 0;
          local_4d8.Boxes.ArrayMax = 0;
          local_4d8.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4d8.Capsules.ArrayNum = 0;
          local_4d8.Capsules.ArrayMax = 0;
          local_4d8.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4d8.Convexes.ArrayNum = 0;
          local_4d8.Convexes.ArrayMax = 0;
          local_4d8.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4d8.LevelSets.ArrayNum = 0;
          local_4d8.LevelSets.ArrayMax = 0;
          bVar11 = UE::Geometry::ComponentTypeSupportsCollision(pUVar15,ReadOnly);
          if ((bVar11) && (bVar11 = UE::Geometry::GetCollisionShapes(pUVar15,&local_4d8), bVar11)) {
            bVar12 = true;
            local_258.Transforms.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
            uVar29 = 0;
            if ((int)uVar32 < (this->TransformProxies).ArrayNum) {
              uVar29 = ~uVar32 >> 0x1f;
            }
            local_258.Transforms.ArrayNum = 0;
            local_258.Transforms.ArrayMax = 2;
            if ((uVar29 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar8 = *(longlong **)((this->TransformProxies).AllocatorInstance.Data + uVar33 * 8);
            puVar16 = (undefined8 *)(**(code **)(*plVar8 + 0x2c0))(plVar8,local_98);
            local_488 = *puVar16;
            uStack_480 = puVar16[1];
            local_478 = puVar16[2];
            uStack_470 = puVar16[3];
            local_458 = puVar16[6];
            local_468 = puVar16[4];
            uStack_460 = puVar16[5];
            uStack_440 = puVar16[10];
            FVar30 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_258;
            if (local_258.Transforms.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
              FVar30 = local_258.Transforms.AllocatorInstance.SecondaryData;
            }
            uStack_450 = puVar16[8];
            uStack_448 = puVar16[9];
            local_358 = local_468;
            uStack_350 = uStack_460;
            local_348 = local_458;
            local_340 = uStack_450;
            uStack_338 = uStack_448;
            local_330 = uStack_440;
            if ((ulonglong)FVar30 <= &local_488) {
              FVar30 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_258;
              if (local_258.Transforms.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                FVar30 = local_258.Transforms.AllocatorInstance.SecondaryData;
              }
              if ((&local_488 <
                   (undefined8 *)((longlong)local_258.Transforms.ArrayMax * 0x50 + (longlong)FVar30)
                  ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            if (local_258.Transforms.ArrayNum == local_258.Transforms.ArrayMax) {
              local_258.Transforms.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                             (0x850,(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                                    &local_258,&local_258.Transforms.ArrayMax);
            }
            FVar30 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_258;
            if (local_258.Transforms.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
              FVar30 = local_258.Transforms.AllocatorInstance.SecondaryData;
            }
            lVar17 = (longlong)local_258.Transforms.ArrayNum;
            puVar16 = (undefined8 *)((longlong)FVar30 + lVar17 * 0x50);
            local_258.Transforms.ArrayNum = local_258.Transforms.ArrayNum + 1;
            *puVar16 = local_488;
            puVar16[1] = uStack_480;
            *(undefined8 *)((uchar *)((longlong)FVar30 + 0x10) + lVar17 * 0x50) = local_478;
            *(undefined8 *)((uchar *)((longlong)FVar30 + 0x10) + lVar17 * 0x50 + 8) = uStack_470;
            *(undefined8 *)((uchar *)((longlong)FVar30 + 0x20) + lVar17 * 0x50) = local_468;
            *(undefined8 *)((uchar *)((longlong)FVar30 + 0x20) + lVar17 * 0x50 + 8) = uStack_460;
            *(undefined8 *)((uchar *)((longlong)FVar30 + 0x30) + lVar17 * 0x50) = local_458;
            *(undefined8 *)((uchar *)((longlong)FVar30 + 0x30) + lVar17 * 0x50 + 8) = uStack_450;
            *(undefined8 *)((uchar *)((longlong)FVar30 + 0x40) + lVar17 * 0x50) = uStack_448;
            *(undefined8 *)((uchar *)((longlong)FVar30 + 0x40) + lVar17 * 0x50 + 8) = uStack_440;
            iVar14 = local_148.Transforms.ArrayNum;
            uVar27 = (ulonglong)local_148.Transforms.ArrayNum;
            FVar30 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_148;
            if (local_148.Transforms.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
              FVar30 = local_148.Transforms.AllocatorInstance.SecondaryData;
            }
            FVar31 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                     (uVar27 * 0x50 + (longlong)FVar30);
            while( true ) {
              if ((uint)uVar27 != iVar14) {
                local_567[0] = 0;
                `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_567);
              }
              if (FVar30 == FVar31) break;
              FVar18 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_258;
              if (local_258.Transforms.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                FVar18 = local_258.Transforms.AllocatorInstance.SecondaryData;
              }
              if ((ulonglong)FVar18 <= (ulonglong)FVar30) {
                FVar18 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_258;
                if (local_258.Transforms.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                  FVar18 = local_258.Transforms.AllocatorInstance.SecondaryData;
                }
                if (((ulonglong)FVar30 <
                     (ulonglong)((longlong)local_258.Transforms.ArrayMax * 0x50 + (longlong)FVar18))
                   && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar11)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              if (local_258.Transforms.ArrayNum == local_258.Transforms.ArrayMax) {
                local_258.Transforms.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                               (0x850,(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                                      &local_258,&local_258.Transforms.ArrayMax);
              }
              uVar19 = *(undefined8 *)((longlong)FVar30 + 8);
              FVar18 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_258;
              if (local_258.Transforms.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                FVar18 = local_258.Transforms.AllocatorInstance.SecondaryData;
              }
              lVar17 = (longlong)local_258.Transforms.ArrayNum;
              puVar16 = (undefined8 *)((longlong)FVar18 + lVar17 * 0x50);
              local_258.Transforms.ArrayNum = local_258.Transforms.ArrayNum + 1;
              *puVar16 = *(undefined8 *)FVar30;
              puVar16[1] = uVar19;
              uVar19 = *(undefined8 *)((longlong)FVar30 + 0x18);
              *(undefined8 *)((uchar *)((longlong)FVar18 + 0x10) + lVar17 * 0x50) =
                   *(undefined8 *)((longlong)FVar30 + 0x10);
              *(undefined8 *)((uchar *)((longlong)FVar18 + 0x10) + lVar17 * 0x50 + 8) = uVar19;
              uVar19 = *(undefined8 *)((longlong)FVar30 + 0x28);
              *(undefined8 *)((uchar *)((longlong)FVar18 + 0x20) + lVar17 * 0x50) =
                   *(undefined8 *)((longlong)FVar30 + 0x20);
              *(undefined8 *)((uchar *)((longlong)FVar18 + 0x20) + lVar17 * 0x50 + 8) = uVar19;
              uVar19 = *(undefined8 *)((longlong)FVar30 + 0x38);
              *(undefined8 *)((uchar *)((longlong)FVar18 + 0x30) + lVar17 * 0x50) =
                   *(undefined8 *)((longlong)FVar30 + 0x30);
              *(undefined8 *)((uchar *)((longlong)FVar18 + 0x30) + lVar17 * 0x50 + 8) = uVar19;
              puVar1 = (uchar *)((longlong)FVar30 + 0x40);
              uVar19 = *(undefined8 *)((longlong)FVar30 + 0x48);
              FVar30 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                       ((longlong)FVar30 + 0x50);
              *(undefined8 *)((uchar *)((longlong)FVar18 + 0x40) + lVar17 * 0x50) =
                   *(undefined8 *)puVar1;
              *(undefined8 *)((uchar *)((longlong)FVar18 + 0x40) + lVar17 * 0x50 + 8) = uVar19;
              uVar27 = (ulonglong)(uint)local_148.Transforms.ArrayNum;
            }
            UE::Geometry::FSimpleShapeSet3d::Append(&local_528,&local_4d8,&local_258);
            if (local_258.Transforms.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
              FMemory::Free((void *)local_258.Transforms.AllocatorInstance.SecondaryData);
            }
          }
          DestructItems<UE::Geometry::FLevelSetShape3d,int>
                    ((FLevelSetShape3d *)local_4d8.LevelSets.AllocatorInstance.Data,
                     local_4d8.LevelSets.ArrayNum);
          if ((FLevelSetShape3d *)local_4d8.LevelSets.AllocatorInstance.Data !=
              (FLevelSetShape3d *)0x0) {
            FMemory::Free(local_4d8.LevelSets.AllocatorInstance.Data);
          }
          DestructItems<UE::Geometry::FConvexShape3d,int>
                    ((FConvexShape3d *)local_4d8.Convexes.AllocatorInstance.Data,
                     local_4d8.Convexes.ArrayNum);
          if (local_4d8.Convexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Convexes.AllocatorInstance.Data);
          }
          if (local_4d8.Capsules.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Capsules.AllocatorInstance.Data);
          }
          if (local_4d8.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Boxes.AllocatorInstance.Data);
          }
          if (local_4d8.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Spheres.AllocatorInstance.Data);
          }
        }
        pUVar15 = local_538;
        uVar33 = uVar33 + 1;
        uVar27 = (ulonglong)(uVar32 + 1);
      } while ((int)(uVar32 + 1) < (int)this->_padding_);
      if (bVar12) {
        if (local_538 != (UPrimitiveComponent *)0x0) {
          Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        }
        lVar17 = (**(code **)(this->_padding_ + 0x2d8))(this);
        pcVar4 = *(code **)(*(longlong *)(lVar17 + 0x28) + 0x10);
        uVar19 = (**(code **)(this->_padding_ + 0x3e0))(this,local_3b8);
        (*pcVar4)(lVar17 + 0x28,uVar19);
        if (local_3b8[0] != (longlong *)0x0) {
          (**(code **)(*local_3b8[0] + 0x10))();
        }
        lVar17 = (**(code **)(this->_padding_ + 0x2d8))(this);
        pcVar4 = *(code **)(*(longlong *)(lVar17 + 0x28) + 0x10);
        pFVar20 = (FText *)(**(code **)(this->_padding_ + 0x3e0))(this,local_2d8);
        pFVar21 = FText::AsLocalizable_Advanced_LocText
                            (&local_3a8,L"UBaseCreateFromSelectedTool",
                             L"SplitTransactionCollisionUpdatePart",L"Update Collision ({0})");
        pFVar22 = FTextFormat::FTextFormat(&local_2c8,pFVar21,Default);
        local_3d8.Type = Text;
        FText::FText((FText *)&local_3d8.TextValue,pFVar20);
        if ((local_3d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_548.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_548.AllocatorInstance,1,&local_548.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_548.AllocatorInstance.Data,&local_3d8,1);
        local_3f8.TextFormatData.Object = (pFVar22->TextFormatData).Object;
        local_3f8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar22->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_3f8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_3f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_3f8.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_3e8,&local_3f8,&local_548);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_548.AllocatorInstance.Data,local_548.ArrayNum);
        if ((FFormatArgumentValue *)local_548.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_548.AllocatorInstance.Data);
        }
        if (local_3d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_3d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar22->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar9 = (pFVar20->TextData).Reference;
        if (pIVar9 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar9 + 0x10))();
        }
        (*pcVar4)(lVar17 + 0x28,&local_3e8);
        if (local_3e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
        }
        if (local_3a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
        }
        FVar23 = UE::Geometry::GetCollisionSettings(pUVar15);
        UE::Geometry::SetSimpleCollision(pUVar15,&local_528,FVar23);
        lVar17 = (**(code **)(this->_padding_ + 0x2d8))(this);
        (**(code **)(*(longlong *)(lVar17 + 0x28) + 0x18))(lVar17 + 0x28);
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
    }
    if (local_148.Transforms.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
      FMemory::Free((void *)local_148.Transforms.AllocatorInstance.SecondaryData);
    }
    DestructItems<UE::Geometry::FLevelSetShape3d,int>
              ((FLevelSetShape3d *)local_528.LevelSets.AllocatorInstance.Data,
               local_528.LevelSets.ArrayNum);
    if ((FLevelSetShape3d *)local_528.LevelSets.AllocatorInstance.Data != (FLevelSetShape3d *)0x0) {
      FMemory::Free(local_528.LevelSets.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FConvexShape3d,int>
              ((FConvexShape3d *)local_528.Convexes.AllocatorInstance.Data,
               local_528.Convexes.ArrayNum);
    if (local_528.Convexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Convexes.AllocatorInstance.Data);
    }
    if (local_528.Capsules.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Capsules.AllocatorInstance.Data);
    }
    if (local_528.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Boxes.AllocatorInstance.Data);
    }
    if (local_528.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Spheres.AllocatorInstance.Data);
    }
    if (!bVar11) goto LAB_14ca9c05b;
  }
  pAVar24 = (AActor *)0x0;
  EVar2 = ((this->HandleSourcesProperties).field0_0x0.DebugPtr)->OutputWriteTo;
  if (EVar2 == NewObject) {
    (**(code **)(this->_padding_ + 0x418))(this,&local_2b8);
  }
  else {
    uVar32 = 0;
    if (EVar2 != FirstInputObject) {
      uVar32 = (int)this->_padding_ - 1;
    }
    uVar29 = 0;
    if ((int)uVar32 < (int)this->_padding_) {
      uVar29 = ~uVar32 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar24 = UE::ToolTarget::GetTargetActor
                        (*(UToolTarget **)(this->_padding_ + (longlong)(int)uVar32 * 8));
    pcVar4 = *(code **)(this->_padding_ + 0x420);
    uVar29 = 0;
    if ((int)uVar32 < (int)this->_padding_) {
      uVar29 = ~uVar32 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*pcVar4)(this,&local_2b8,*(undefined8 *)(this->_padding_ + (longlong)(int)uVar32 * 8));
  }
  uVar27 = 0;
  local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_560.ArrayNum = 0;
  local_560.ArrayMax = 0;
  uVar34 = uVar27;
  if (0 < (int)this->_padding_) {
    do {
      uVar29 = (uint)uVar27;
      uVar32 = 0;
      if ((int)uVar29 < (int)this->_padding_) {
        uVar32 = ~uVar29 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_550 = UE::ToolTarget::GetTargetActor(*(UToolTarget **)(uVar34 + this->_padding_));
      if (((local_560.AllocatorInstance.Data <= (FScriptContainerElement *)&local_550) &&
          ((FScriptContainerElement *)&local_550 <
           local_560.AllocatorInstance.Data + (longlong)local_560.ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar14 = local_560.ArrayNum;
      if (local_560.ArrayNum == local_560.ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_560.AllocatorInstance,&local_560.ArrayMax);
      }
      uVar27 = (ulonglong)(uVar29 + 1);
      local_560.ArrayNum = iVar14 + 1;
      *(AActor **)(local_560.AllocatorInstance.Data + (longlong)iVar14 * 8) = local_550;
      uVar34 = uVar34 + 8;
    } while ((int)(uVar29 + 1) < (int)this->_padding_);
  }
  pUVar3 = (this->HandleSourcesProperties).field0_0x0.DebugPtr;
  pUVar25 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UOnAcceptHandleSourcesPropertiesBase::ApplyMethod
            ((UOnAcceptHandleSourcesPropertiesBase *)pUVar3,&local_560,pUVar25,pAVar24);
  if (pAVar24 != (AActor *)0x0) {
    pUVar25 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    ToolSelectionUtil::SetNewActorSelection(pUVar25,pAVar24);
  }
  lVar17 = (**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*(longlong *)(lVar17 + 0x28) + 0x18))(lVar17 + 0x28);
  if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.AllocatorInstance.Data);
  }
LAB_14ca9c36e:
  pUVar25 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar26 = UInteractiveToolManager::GetPairedGizmoManager(pUVar25);
  (**(code **)(pUVar26->_padding_ + 0x2e8))(pUVar26,this);
  if (local_2b8.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
    (**(code **)(local_2b8.Mesh.Ptr)->_padding_)(local_2b8.Mesh.Ptr,1);
  }
  return;
}

// OnTick @ 14ca9c530

void __thiscall UBaseCreateFromSelectedTool::OnTick(UBaseCreateFromSelectedTool *this,float param_1)

{
  UMeshOpPreviewWithBackgroundCompute::Tick((this->Preview).field0_0x0.DebugPtr,param_1);
  return;
}

// PrefixWithSourceNameIfSingleSelection @ 14ca9f0e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBaseCreateFromSelectedTool::PrefixWithSourceNameIfSingleSelection
          (UBaseCreateFromSelectedTool *this,FString *__return_storage_ptr__,FString *param_1)

{
  UPrimitiveComponent *pUVar1;
  FString local_18;
  
  if ((int)this->_padding_ == 1) {
    pUVar1 = UE::ToolTarget::GetTargetComponent(*(UToolTarget **)this->_padding_);
    UE::Modeling::GetComponentAssetBaseName(&local_18,(UActorComponent *)pUVar1,true);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s_%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    ::FString::FString(__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// SaveProperties @ 14caa0660

void __thiscall UBaseCreateFromSelectedTool::SaveProperties(UBaseCreateFromSelectedTool *this)

{
  return;
}

// SetPreviewCallbacks @ 14caa42d0

void __thiscall UBaseCreateFromSelectedTool::SetPreviewCallbacks(UBaseCreateFromSelectedTool *this)

{
  return;
}

// SetTransformGizmos @ 14caa43b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UBaseCreateFromSelectedTool::SetTransformGizmos(UBaseCreateFromSelectedTool *this)

{
  TArray<TObjectPtr<UCombinedTransformGizmo>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UTransformProxy>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  UInteractiveToolManager *this_00;
  UClass *pUVar10;
  UCombinedTransformGizmo *pUVar11;
  TTransform<double> *pTVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  longlong lVar15;
  ForElementType<TAlignedBytes<16,16>_> *pFVar16;
  int *piVar17;
  longlong *plVar18;
  uint uVar19;
  undefined1 auStack_278 [32];
  UCombinedTransformGizmo **local_258;
  FScriptContainerElement *local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_228;
  FDelegateAllocation local_220;
  UCombinedTransformGizmo *local_210;
  UCombinedTransformGizmo *local_208 [2];
  FString local_1f8;
  longlong local_1e8;
  UInteractiveGizmoManager *local_1e0;
  UBaseCreateFromSelectedTool *local_1d8 [2];
  code *local_1c8;
  ulonglong uStack_1c0;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  undefined1 local_150 [8];
  FReadAccessScope local_148;
  FReadAccessScope local_130;
  undefined1 local_118 [128];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  this_00 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
  local_1e0 = UInteractiveToolManager::GetPairedGizmoManager(this_00);
  uVar19 = 0;
  if (0 < (int)this->_padding_) {
    local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)_vcall__1040__flat______;
    pTVar1 = &this->TransformGizmos;
    pTVar2 = &this->TransformProxies;
    local_1f8.Data._8_8_ = uStack_1c0 & 0xffffffff00000000;
    local_1c8 = _vcall__1040__flat______;
    uStack_1c0._0_4_ = local_1f8.Data.ArrayNum;
    uStack_1c0._4_4_ = local_1f8.Data.ArrayMax;
    local_1e8 = 0;
    do {
      piVar17 = &(this->TransformProxies).ArrayMax;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar10 = Z_Construct_UClass_UTransformProxy_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_118,pUVar10);
      local_118._8_8_ = this;
      pUVar11 = (UCombinedTransformGizmo *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
      if (local_118._64_8_ != 0) {
        plVar18 = (longlong *)(local_118 + 0x50);
        if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
          plVar18 = (longlong *)local_118._104_8_;
        }
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
      local_210 = pUVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UCombinedTransformGizmo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_210) &&
         ((FScriptContainerElement *)&local_210 < pFVar3 + (longlong)*piVar17 * 8)) {
        local_240 = (longlong)(this->TransformProxies).ArrayNum;
        local_238 = 8;
        local_258 = &local_210;
        local_250 = pFVar3;
        local_248 = (longlong)*piVar17;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = (this->TransformProxies).ArrayNum;
      if (iVar8 == *piVar17) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar17);
      }
      (this->TransformProxies).ArrayNum = iVar8 + 1;
      pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8;
      *(UCombinedTransformGizmo **)pFVar3 = local_210;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_210 != (UCombinedTransformGizmo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_210);
      }
      plVar18 = *(longlong **)pFVar3;
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Data.ArrayNum = 0;
      local_1f8.Data.ArrayMax = 0;
      local_208[0] = UE::TransformGizmoUtil::Create3AxisTransformGizmo(local_1e0,this,&local_1f8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_208[0] != (UCombinedTransformGizmo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_208[0]);
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_208) &&
         (lVar15 = (longlong)(this->TransformGizmos).ArrayMax,
         (FScriptContainerElement *)local_208 < pFVar3 + lVar15 * 8)) {
        local_240 = (longlong)(this->TransformGizmos).ArrayNum;
        local_238 = 8;
        local_258 = local_208;
        local_250 = pFVar3;
        local_248 = lVar15;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = (this->TransformGizmos).ArrayNum;
      if (iVar8 == (this->TransformGizmos).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,&(this->TransformGizmos).ArrayMax);
      }
      (this->TransformGizmos).ArrayNum = iVar8 + 1;
      pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8;
      *(UCombinedTransformGizmo **)pFVar3 = local_208[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_208[0] != (UCombinedTransformGizmo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_208[0]);
      }
      plVar4 = *(longlong **)pFVar3;
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      iVar8 = (int)this->_padding_;
      pcVar5 = *(code **)(*plVar18 + 0x2c8);
      uVar9 = 0;
      if ((int)uVar19 < iVar8) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_258 = (UCombinedTransformGizmo **)(longlong)(int)uVar19;
        local_250 = (FScriptContainerElement *)(longlong)iVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pTVar12 = UE::ToolTarget::GetLocalToWorldTransform
                          (&local_98,*(UToolTarget **)(local_1e8 + this->_padding_));
      (*pcVar5)(plVar18,pTVar12);
      pcVar5 = *(code **)(*plVar4 + 0x330);
      (**(code **)(this->_padding_ + 0x2d8))(this);
      (*pcVar5)(plVar4,plVar18);
      local_228.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_220.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_228,(FWriteAccessScope *)&local_170);
      local_158 = &local_220;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&local_220);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUBaseCreateFromSelectedTool____A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        local_1d8[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)local_1d8);
        puVar13[4] = local_1c8;
        puVar13[5] = uStack_1c0;
      }
      if (local_170.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(plVar18 + 5),
                 (FWriteAccessScope *)&local_1a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_228,&local_148);
      if (((local_220.DelegateSize == 0) ||
          (local_220.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar7 = (**(code **)(*(longlong *)local_220.DelegateAllocator + 0x38))(), cVar7 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_148);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_148);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(plVar18 + 5),true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_228,&local_130);
        if ((local_220.DelegateSize != 0) &&
           (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)local_220.DelegateAllocator + 0x40))
                    (local_220.DelegateAllocator,local_150);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_130);
        iVar8 = (int)plVar18[7];
        if (iVar8 == *(int *)((longlong)plVar18 + 0x3c)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)(plVar18 + 6),
                             (int *)((longlong)plVar18 + 0x3c));
          *(int *)(plVar18 + 7) = iVar8;
        }
        *(int *)(plVar18 + 7) = iVar8 + 1;
        pFVar16 = (ForElementType<TAlignedBytes<16,16>_> *)((longlong)iVar8 * 0x10 + plVar18[6]);
        *pFVar16 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(undefined4 *)(pFVar16 + 1) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_228,(FWriteAccessScope *)&local_1b8);
        if (*pFVar16 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)*pFVar16);
        }
        *pFVar16 = local_220.DelegateAllocator;
        local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar16 + 1) = local_220.DelegateSize;
        local_220.DelegateSize = 0;
        if (local_1b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
        }
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_228,(FWriteAccessScope *)&local_188);
      if ((local_220.DelegateSize != 0) &&
         (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_220.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_220,0,0,0x10);
        local_220.DelegateSize = 0;
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      if (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_220.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_228.AccessDetector);
      local_1e8 = local_1e8 + 8;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < (int)this->_padding_);
  }
  (**(code **)(this->_padding_ + 0x400))(this);
  return;
}

// Setup @ 14caa4c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UBaseCreateFromSelectedTool::Setup(UBaseCreateFromSelectedTool *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  UTransformInputsToolProperties *pUVar9;
  UCreateMeshObjectTypeProperties *pUVar10;
  TPropertyWatcher<FString> *pTVar11;
  TPropertyWatcher<FString> *pTVar12;
  UBaseCreateFromSelectedHandleSourceProperties *pUVar13;
  UBaseCreateFromSelectedCollisionProperties *pUVar14;
  UMeshOpPreviewWithBackgroundCompute *this_00;
  UWorld *pUVar15;
  undefined8 *puVar16;
  UPrimitiveComponent *pUVar17;
  void *pvVar18;
  TPropertyWatcher<FString> *pTVar19;
  longlong *plVar20;
  undefined ***pppuVar21;
  uint uVar22;
  uint uVar23;
  FString *pFVar24;
  uint uVar25;
  TPropertyWatcher<FString> *pTVar26;
  undefined1 auStackY_448 [32];
  FString local_408;
  UBaseCreateFromSelectedTool *local_3f8;
  FString local_3f0;
  code *local_3d8;
  undefined **local_3c8;
  UBaseCreateFromSelectedTool *local_3c0;
  undefined ***local_3b0;
  code *local_3a8;
  undefined **local_398;
  UBaseCreateFromSelectedTool *local_390;
  undefined ***local_380;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  <lambda_2> local_338;
  void *local_330 [3];
  code *local_318 [2];
  code *local_308 [3];
  undefined8 local_2f0;
  code *local_2e8 [2];
  code *local_2d8 [3];
  undefined8 local_2c0;
  undefined1 local_2b8 [128];
  undefined1 local_238 [128];
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_448;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pTVar19 = (TPropertyWatcher<FString> *)0x0;
  uVar25 = 0;
  pTVar12 = pTVar19;
  pTVar11 = pTVar19;
  if (0 < (int)this->_padding_) {
    do {
      uVar22 = (uint)pTVar11;
      uVar23 = uVar25;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::ToolTarget::HideSourceObject
                (*(UToolTarget **)((longlong)&pTVar12->_padding_ + this->_padding_));
      pTVar12 = (TPropertyWatcher<FString> *)&pTVar12->Cached;
      pTVar11 = (TPropertyWatcher<FString> *)(ulonglong)(uVar22 + 1);
    } while ((int)(uVar22 + 1) < (int)this->_padding_);
  }
  (**(code **)(this->_padding_ + 0x3c0))(this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UTransformInputsToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_2b8,pUVar8);
  local_2b8._8_8_ = this;
  pUVar9 = (UTransformInputsToolProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2b8);
  if (local_2b8._64_8_ != 0) {
    plVar20 = (longlong *)(local_2b8 + 0x50);
    if ((longlong *)local_2b8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_2b8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UTransformInputsToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->TransformProperties).field0_0x0.DebugPtr = pUVar9;
  pcVar3 = *(code **)(pUVar9->_padding_ + 0x2b8);
  ::FString::FString(&local_378,L"");
  (*pcVar3)(pUVar9,this,&local_378);
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->TransformProperties).field0_0x0.DebugPtr);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_238,pUVar8);
  local_238._8_8_ = this;
  pUVar10 = (UCreateMeshObjectTypeProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_238);
  if (local_238._64_8_ != 0) {
    plVar20 = (longlong *)(local_238 + 0x50);
    if ((longlong *)local_238._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_238._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UCreateMeshObjectTypeProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->OutputTypeProperties).field0_0x0.DebugPtr = pUVar10;
  UCreateMeshObjectTypeProperties::InitializeDefaultWithAuto(pUVar10);
  ::FString::operator=
            (&((this->OutputTypeProperties).field0_0x0.DebugPtr)->OutputType,
             &UCreateMeshObjectTypeProperties::AutoIdentifier);
  pUVar10 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar10->_padding_ + 0x2b8);
  ::FString::FString(&local_368,L"OutputTypeFromInputTool");
  (*pcVar3)(pUVar10,this,&local_368);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  pUVar10 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  local_3c8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UBaseCreateFromSelectedTool::Setup'::`2'::<lambda_1>,0,0>::
               _vftable_;
  local_3b0 = (undefined ***)0x0;
  local_3d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_1>,void,FString_const_&>
              ::Call;
  local_3c0 = this;
  pTVar11 = ::operator_new(0xb0);
  pTVar12 = pTVar19;
  if (pTVar11 != (TPropertyWatcher<FString> *)0x0) {
    local_318[0] = local_3d8;
    local_2f0 = 0;
    if (local_3d8 != (code *)0x0) {
      pppuVar21 = &local_3c8;
      if (local_3b0 != (undefined ***)0x0) {
        pppuVar21 = local_3b0;
      }
      (*(code *)**pppuVar21)(pppuVar21,local_318 + 2);
    }
    pTVar12 = FWatchablePropertySet::TPropertyWatcher<FString>::
              TPropertyWatcher<FString><FString,void>
                        (pTVar11,&pUVar10->OutputType,
                         (TFunction<void___cdecl(FString_const_&)> *)local_318);
  }
  iVar6 = (int)pUVar10->_padding_;
  piVar1 = (int *)((longlong)&pUVar10->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar10->_padding_,piVar1);
  }
  *(int *)&pUVar10->_padding_ = iVar6 + 1;
  *(TPropertyWatcher<FString> **)(pUVar10->_padding_ + (longlong)iVar6 * 8) = pTVar12;
  if (local_3d8 != (code *)0x0) {
    pppuVar21 = &local_3c8;
    if (local_3b0 != (undefined ***)0x0) {
      pppuVar21 = local_3b0;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->OutputTypeProperties).field0_0x0.DebugPtr);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UBaseCreateFromSelectedHandleSourceProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar8);
  local_1b8._8_8_ = this;
  pUVar13 = (UBaseCreateFromSelectedHandleSourceProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar20 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UBaseCreateFromSelectedHandleSourceProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->HandleSourcesProperties).field0_0x0.DebugPtr = pUVar13;
  pcVar3 = *(code **)(pUVar13->_padding_ + 0x2b8);
  ::FString::FString(&local_358,L"");
  (*pcVar3)(pUVar13,this,&local_358);
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->HandleSourcesProperties).field0_0x0.DebugPtr);
  cVar5 = (**(code **)(this->_padding_ + 0x3f0))(this);
  if (cVar5 != '\0') {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = UBaseCreateFromSelectedCollisionProperties::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar8);
    local_138._8_8_ = this;
    pUVar14 = (UBaseCreateFromSelectedCollisionProperties *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    if (local_138._64_8_ != 0) {
      plVar20 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar14 != (UBaseCreateFromSelectedCollisionProperties *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    (this->CollisionProperties).field0_0x0.DebugPtr = pUVar14;
    pcVar3 = *(code **)(pUVar14->_padding_ + 0x2b8);
    ::FString::FString(&local_348,L"");
    (*pcVar3)(pUVar14,this,&local_348);
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    (**(code **)(this->_padding_ + 0x318))(this,(this->CollisionProperties).field0_0x0.DebugPtr);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = this;
  this_00 = (UMeshOpPreviewWithBackgroundCompute *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar20 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->Preview).field0_0x0.DebugPtr = this_00;
  pUVar15 = (UWorld *)(**(code **)(this->_padding_ + 0x3b0))(this);
  UMeshOpPreviewWithBackgroundCompute::Setup
            (this_00,pUVar15,(IDynamicMeshOperatorFactory *)&this->_padding_);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (UToolTarget *)0x0);
  pTVar12 = pTVar19;
  pTVar11 = pTVar19;
  pTVar26 = pTVar19;
  if (0 < (int)this->_padding_) {
    do {
      uVar23 = (uint)pTVar11;
      uVar25 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar25 = ~uVar23 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = UE::ToolTarget::GetTriangleCount
                        (*(UToolTarget **)((longlong)&pTVar12->_padding_ + this->_padding_));
      uVar25 = (int)pTVar26 + iVar6;
      pTVar12 = (TPropertyWatcher<FString> *)&pTVar12->Cached;
      pTVar11 = (TPropertyWatcher<FString> *)(ulonglong)(uVar23 + 1);
      pTVar26 = (TPropertyWatcher<FString> *)(ulonglong)uVar25;
    } while ((int)(uVar23 + 1) < (int)this->_padding_);
  }
  if ((int)uVar25 < 1) {
    uVar25 = 1;
  }
  iVar7 = (int)(10000000 / (longlong)(int)uVar25);
  iVar6 = 0x14;
  if (iVar7 < 0x14) {
    iVar6 = iVar7;
  }
  iVar7 = 1;
  if (1 < iVar6) {
    iVar7 = iVar6;
  }
  UMeshOpPreviewWithBackgroundCompute::SetMaxActiveBackgroundTasks
            ((this->Preview).field0_0x0.DebugPtr,iVar7);
  (**(code **)(this->_padding_ + 0x3d0))(this);
  local_3f8 = this;
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_UBaseCreateFromSelectedTool::Setup_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((this->Preview).field0_0x0.DebugPtr)->OnMeshUpdated,&local_338);
  (**(code **)(this->_padding_ + 0x408))(this);
  (**(code **)(this->_padding_ + 0x3b8))(this,1);
  puVar16 = (undefined8 *)(**(code **)(this->_padding_ + 0x3d8))(this,local_330);
  if ((int)this->_padding_ == 1) {
    pUVar17 = UE::ToolTarget::GetTargetComponent(*(UToolTarget **)this->_padding_);
    UE::Modeling::GetComponentAssetBaseName(&local_3f0,(UActorComponent *)pUVar17,true);
    ::FString::PrintfImpl(&local_408,L"%s_%s");
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = *(int *)(puVar16 + 1);
    pvVar18 = (void *)*puVar16;
    local_408.Data.ArrayNum = iVar6;
    if (iVar6 == 0) {
      local_408.Data.ArrayNum = 0;
      local_408.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar6,0,(ForAnyElementType *)&local_408,iVar6,&local_408.Data.ArrayMax);
      memcpy(local_408.Data.AllocatorInstance.Data,pvVar18,(longlong)iVar6 * 2);
    }
  }
  pUVar13 = (this->HandleSourcesProperties).field0_0x0.DebugPtr;
  pFVar24 = &pUVar13->OutputNewName;
  if (pFVar24 != &local_408) {
    pFVar2 = (pFVar24->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar24->Data).AllocatorInstance.Data = local_408.Data.AllocatorInstance.Data;
    local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar13->OutputNewName).Data.ArrayNum = local_408.Data.ArrayNum;
    (pUVar13->OutputNewName).Data.ArrayMax = local_408.Data.ArrayMax;
    local_408.Data.ArrayNum = 0;
    local_408.Data.ArrayMax = 0;
  }
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  if (local_330[0] != (void *)0x0) {
    FMemory::Free(local_330[0]);
  }
  pUVar13 = (this->HandleSourcesProperties).field0_0x0.DebugPtr;
  local_398 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UBaseCreateFromSelectedTool::Setup'::`2'::<lambda_3>,0,0>::
               _vftable_;
  local_380 = (undefined ***)0x0;
  local_3a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_3>,void,enum_EBaseCreateFromSelectedTargetType_const_&>
              ::Call;
  local_390 = this;
  pvVar18 = ::operator_new(0xa0);
  if (pvVar18 != (void *)0x0) {
    local_2e8[0] = local_3a8;
    local_2c0 = 0;
    if (local_3a8 != (code *)0x0) {
      pppuVar21 = &local_398;
      if (local_380 != (undefined ***)0x0) {
        pppuVar21 = local_380;
      }
      (*(code *)**pppuVar21)(pppuVar21,local_2e8 + 2);
    }
    pTVar19 = (TPropertyWatcher<FString> *)
              FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::
              TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>
                        (pvVar18,&pUVar13->OutputWriteTo,
                         (TFunction<void___cdecl(EBaseCreateFromSelectedTargetType_const_&)> *)
                         local_2e8);
  }
  iVar6 = (int)pUVar13->_padding_;
  piVar1 = (int *)((longlong)&pUVar13->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar13->_padding_,piVar1);
  }
  *(int *)&pUVar13->_padding_ = iVar6 + 1;
  *(TPropertyWatcher<FString> **)(pUVar13->_padding_ + (longlong)iVar6 * 8) = pTVar19;
  if (local_3a8 != (code *)0x0) {
    pppuVar21 = &local_398;
    if (local_380 != (undefined ***)0x0) {
      pppuVar21 = local_380;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  return;
}

// SetupProperties @ 14caa6040

void __thiscall UBaseCreateFromSelectedTool::SetupProperties(UBaseCreateFromSelectedTool *this)

{
  return;
}

// StaticRegisterNativesUBaseCreateFromSelectedTool @ 14caa70a0

void __cdecl UBaseCreateFromSelectedTool::StaticRegisterNativesUBaseCreateFromSelectedTool(void)

{
  return;
}

// SupportsCollisionTransfer @ 14caa7360

bool __thiscall
UBaseCreateFromSelectedTool::SupportsCollisionTransfer(UBaseCreateFromSelectedTool *this)

{
  return true;
}

// TransformChanged @ 14caa7430

void __thiscall
UBaseCreateFromSelectedTool::TransformChanged
          (UBaseCreateFromSelectedTool *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  return;
}

// UpdateAsset @ 14caa7a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UBaseCreateFromSelectedTool::UpdateAsset
          (UBaseCreateFromSelectedTool *this,FDynamicMeshOpResult *param_1,UToolTarget *param_2)

{
  code *pcVar1;
  bool bVar2;
  void **ppvVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 auStackY_238 [32];
  FConversionToMeshDescriptionOptions local_208;
  void *local_1f8;
  void *local_1f0;
  double local_1d8;
  void *local_1d0 [2];
  TQuaternion<double>_u_0 local_1c0;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  TQuaternion<double>_u_0 local_170;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_110;
  double local_f8;
  double local_e0;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((param_1->Mesh).Ptr == (FDynamicMesh3 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Mesh.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\BaseTools\\BaseCreateFromSelectedTool.cpp"
                       ,0x127,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::ToolTarget::GetLocalToWorldTransform(&local_d8,param_2);
  local_1a0 = (param_1->Transform).Translation.field0_0x0._s_0.X;
  dStack_198 = (param_1->Transform).Translation.field0_0x0._s_0.Y;
  local_188 = (param_1->Transform).Scale3D.field0_0x0._s_0.X;
  dStack_180 = (param_1->Transform).Scale3D.field0_0x0._s_0.Y;
  local_190 = (param_1->Transform).Translation.field0_0x0._s_0.Z;
  local_1d8 = (param_1->Transform).Scale3D.field0_0x0._s_0.Z;
  local_1c0._s_0.X = (param_1->Transform).Rotation.field0_0x0._s_0.X;
  local_1c0._s_0.Y = (param_1->Transform).Rotation.field0_0x0._s_0.Y;
  local_1c0._s_0.Z = (param_1->Transform).Rotation.field0_0x0._s_0.Z;
  local_1c0._s_0.W = (param_1->Transform).Rotation.field0_0x0._s_0.W;
  local_178 = local_1d8;
  local_110 = local_190;
  local_f8 = local_1d8;
  MeshTransforms::ApplyTransform
            ((param_1->Mesh).Ptr,(TTransformSRT3<double> *)&local_1c0._s_0,true,All);
  local_170._s_0.X = local_d8.Rotation.XY.m128d_f64[0];
  local_170._s_0.Z = local_d8.Rotation.ZW.m128d_f64[0];
  local_170._s_0.Y = local_d8.Rotation.XY.m128d_f64[1];
  local_e0 = local_d8.Translation.ZW.m128d_f64[0];
  local_170._s_0.W = local_d8.Rotation.ZW.m128d_f64[1];
  local_140 = local_d8.Translation.ZW.m128d_f64[0];
  local_1d8 = local_d8.Scale3D.ZW.m128d_f64[0];
  local_150 = local_d8.Translation.XY.m128d_f64[0];
  dStack_148 = local_d8.Translation.XY.m128d_f64[1];
  local_128 = local_d8.Scale3D.ZW.m128d_f64[0];
  local_138 = local_d8.Scale3D.XY.m128d_f64[0];
  dStack_130 = local_d8.Scale3D.XY.m128d_f64[1];
  MeshTransforms::ApplyTransformInverse
            ((param_1->Mesh).Ptr,(TTransformSRT3<double> *)&local_170._s_0,true,All);
  plVar5 = (longlong *)0x0;
  local_208.bSetPolyGroups = true;
  local_208.bUpdatePositions = true;
  local_208.bUpdateNormals = true;
  local_208.bUpdateTangents = false;
  local_208.bUpdateUVs = false;
  local_208.bUpdateVtxColors = false;
  local_208.bTransformVtxColorsSRGBToLinear = true;
  local_208.bConvertBackToNonManifold = false;
  local_208.bSetHardEdgesFromNormalSeams = true;
  UE::ToolTarget::CommitDynamicMeshUpdate
            (param_2,(param_1->Mesh).Ptr,true,&local_208,(FComponentMaterialSet *)0x0);
  local_1f8 = (void *)0x0;
  local_1f0 = (void *)0x0;
  ppvVar3 = (void **)(**(code **)(this->_padding_ + 1000))(this,local_1d0);
  if (&local_1f8 != ppvVar3) {
    if (local_1f8 != (void *)0x0) {
      FMemory::Free(local_1f8);
    }
    local_1f8 = *ppvVar3;
    *ppvVar3 = (void *)0x0;
    local_1f0 = ppvVar3[1];
    ppvVar3[1] = (void *)0x0;
  }
  if (local_1d0[0] != (void *)0x0) {
    FMemory::Free(local_1d0[0]);
  }
  if (param_2 == (UToolTarget *)0x0) {
    (**(code **)(_DAT_00000000 + 0x28))(0,&local_1f8,1);
  }
  else {
    pUVar4 = Z_Construct_UClass_UMaterialProvider_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar4);
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_1f8,1);
    pUVar4 = Z_Construct_UClass_UMaterialProvider_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar4);
  }
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_1f8,0);
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  return;
}

// UpdateGizmoVisibility @ 14caa84c0

void __thiscall
UBaseCreateFromSelectedTool::UpdateGizmoVisibility(UBaseCreateFromSelectedTool *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->TransformGizmos).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->TransformGizmos).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)((this->TransformGizmos).AllocatorInstance.Data + lVar7);
      pcVar2 = *(code **)(*plVar1 + 0x360);
      if ((((this->TransformProperties).field0_0x0.DebugPtr)->bShowTransformGizmo == false) ||
         (uVar4 = (**(code **)(this->_padding_ + 0x428))(this), uVar6 == uVar4)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      (*pcVar2)(plVar1,uVar5);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->TransformGizmos).ArrayNum);
  }
  return;
}

