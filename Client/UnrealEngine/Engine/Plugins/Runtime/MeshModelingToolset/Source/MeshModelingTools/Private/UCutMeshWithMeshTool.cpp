// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 16

// StaticClass @ 14cc04260

UClass * __cdecl UCutMeshWithMeshTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCutMeshWithMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CutMeshWithMeshTool",
               &Z_Registration_Info_UClass_UCutMeshWithMeshTool.InnerSingleton,
               StaticRegisterNativesUCutMeshWithMeshTool,0x3b8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCutMeshWithMeshTool>,
               InternalVTableHelperCtorCaller<UCutMeshWithMeshTool>,local_res8,
               UBaseCreateFromSelectedTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCutMeshWithMeshTool.InnerSingleton;
}

// UCutMeshWithMeshTool @ 14cc1c450

UCutMeshWithMeshTool * __thiscall
UCutMeshWithMeshTool::UCutMeshWithMeshTool(UCutMeshWithMeshTool *this,FVTableHelper *param_1)

{
  UBaseCreateFromSelectedTool::UBaseCreateFromSelectedTool
            ((UBaseCreateFromSelectedTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->CutProperties).field0_0x0.DebugPtr = (UCutMeshWithMeshToolProperties *)0x0;
  (this->IntersectPreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->OriginalTargetMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalTargetMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OriginalCuttingMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalCuttingMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DrawnLineSet).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  (this->CreatedSubtractBoundaryEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreatedSubtractBoundaryEdges).ArrayNum = 0;
  (this->CreatedSubtractBoundaryEdges).ArrayMax = 0;
  (this->CreatedIntersectBoundaryEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreatedIntersectBoundaryEdges).ArrayNum = 0;
  (this->CreatedIntersectBoundaryEdges).ArrayMax = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->IntersectionMesh);
  return this;
}

// ~UCutMeshWithMeshTool @ 14cc22590

void __thiscall UCutMeshWithMeshTool::~UCutMeshWithMeshTool(UCutMeshWithMeshTool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->IntersectionMesh);
  pFVar1 = (this->CreatedIntersectBoundaryEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreatedSubtractBoundaryEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalCuttingMesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalTargetMesh).SharedReferenceCount.ReferenceController);
  UBaseCreateFromSelectedTool::~UBaseCreateFromSelectedTool((UBaseCreateFromSelectedTool *)this);
  return;
}

// operator() @ 14cc2aeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMeshOperator *param_1)

{
  undefined1 auStack_c8 [64];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x168),
             (TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[2].ResultInfo.Warnings);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x178),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(param_1 + 3));
  UE::Geometry::FDynamicMesh3::operator=
            ((FDynamicMesh3 *)(*(longlong *)this + 0x188),
             *(FDynamicMesh3 **)&param_1[2].ResultInfo.Errors.ArrayNum);
  UPreviewMesh::UpdatePreview
            (*(UPreviewMesh **)(*(longlong *)this + 0x138),
             (FDynamicMesh3 *)(*(longlong *)this + 0x188),FullUpdate,AllVertexAttribs);
  local_88.Translation.XY.m128d_f64[0] = (param_1->ResultTransform).Translation.field0_0x0._s_0.X;
  local_88.Translation.XY.m128d_f64[1] = (param_1->ResultTransform).Translation.field0_0x0._s_0.Y;
  local_88.Scale3D.XY.m128d_f64[0] = (param_1->ResultTransform).Scale3D.field0_0x0._s_0.X;
  local_88.Scale3D.XY.m128d_f64[1] = (param_1->ResultTransform).Scale3D.field0_0x0._s_0.Y;
  local_88.Rotation.XY.m128d_f64[0] = (param_1->ResultTransform).Rotation.field0_0x0._s_0.X;
  local_88.Rotation.XY.m128d_f64[1] = (param_1->ResultTransform).Rotation.field0_0x0._s_0.Y;
  local_88.Rotation.ZW.m128d_f64[0]._0_4_ =
       *(undefined4 *)((longlong)&(param_1->ResultTransform).Rotation.field0_0x0 + 0x10);
  local_88.Rotation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(param_1->ResultTransform).Rotation.field0_0x0 + 0x14);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(param_1->ResultTransform).Rotation.field0_0x0 + 0x18);
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
       (undefined4)
       ((ulonglong)*(undefined8 *)((longlong)&(param_1->ResultTransform).Rotation.field0_0x0 + 0x18)
       >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[0] = (param_1->ResultTransform).Scale3D.field0_0x0._s_0.Z;
  local_88.Translation.ZW.m128d_f64[0] = (param_1->ResultTransform).Translation.field0_0x0._s_0.Z;
  local_88.Translation.ZW.m128d_f64[1] = 0.0;
  local_88.Scale3D.ZW.m128d_f64[1] = 0.0;
  UPreviewMesh::SetTransform(*(UPreviewMesh **)(*(longlong *)this + 0x138),&local_88);
  return;
}

// ConvertInputsAndSetPreviewMaterials @ 14cc4ee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCutMeshWithMeshTool::ConvertInputsAndSetPreviewMaterials(UCutMeshWithMeshTool *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  short sVar2;
  FDynamicMeshAttributeSet *pFVar3;
  UMeshOpPreviewWithBackgroundCompute *this_00;
  UObjectBaseUtility *pUVar4;
  code *pcVar5;
  UCutMeshWithMeshTool *pUVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FDynamicMeshAttributeSet *pFVar12;
  FComponentMaterialSet *pFVar13;
  longlong *plVar14;
  FDynamicMesh3 *pFVar15;
  UInteractiveToolManager *pUVar16;
  UMaterialInterface *pUVar17;
  UClass *pUVar18;
  void *pvVar19;
  longlong *plVar20;
  FText *pFVar21;
  uint uVar22;
  FDynamicMeshAttributeSet *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  ForElementType<FSetElementId> FVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  FDynamicMeshAttributeSet *pFVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  ForAnyElementType FVar32;
  uint uVar33;
  longlong *plVar34;
  longlong lVar35;
  FDynamicMesh3 *this_01;
  undefined1 auStackY_418 [32];
  undefined1 local_3c8 [4];
  int local_3c4;
  int local_3c0 [2];
  FComponentMaterialSet local_3b8;
  undefined4 local_3a8;
  uint local_3a4;
  uint local_3a0;
  UCutMeshWithMeshTool *local_398;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_390;
  longlong local_380;
  ulonglong local_378;
  FDynamicMeshAttributeSet *local_370;
  FScriptContainerElement *local_368;
  FDynamicMesh3 *local_360;
  longlong local_358;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_350;
  FGetMeshParameters local_340;
  TDynamicMeshScalarTriangleAttribute<int> *local_330;
  FComponentMaterialSet local_328;
  TPairInitializer<UMaterialInterface_*_const_&,int_const_&> local_318;
  ulonglong *local_308;
  int *local_300;
  FComponentMaterialSet local_2f8;
  FDynamicMesh3 *local_2e8;
  TReferenceControllerBase<1> *pTStack_2e0;
  FDynamicMesh3 *local_2d8;
  TReferenceControllerBase<1> *pTStack_2d0;
  FText local_2c8;
  FDynamicMesh3 local_2b8;
  TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_398 = this;
  (**(code **)(this->_padding_ + 0x338))(this,this->_padding_,0);
  (**(code **)(this->_padding_ + 0x338))(this,this->_padding_,0);
  plVar20 = (longlong *)0x0;
  local_3b8.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.Materials.ArrayNum = 0;
  local_3b8.Materials.ArrayMax = 0;
  local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.ArrayNum = 0;
  local_390.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_390,(int)this->_padding_,Default);
  if (((this->CutProperties).field0_0x0.DebugPtr)->bUseFirstMeshMaterials == false) {
    local_88.Elements._0_8_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.HashSize = 0;
    if (0 < (int)this->_padding_) {
      local_380 = 0;
      plVar14 = plVar20;
      plVar34 = plVar20;
      do {
        lVar29 = local_380;
        uVar33 = (uint)plVar14;
        uVar22 = 0;
        if ((int)uVar33 < (int)this->_padding_) {
          uVar22 = ~uVar33 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UE::ToolTarget::GetMaterialSet(&local_328,*(UToolTarget **)(this->_padding_ + lVar29),false)
        ;
        iVar10 = local_328.Materials.ArrayNum;
        local_368 = local_328.Materials.AllocatorInstance.Data + (longlong)iVar10 * 8;
        FVar32.Data = local_328.Materials.AllocatorInstance.Data;
        while( true ) {
          pFVar27 = local_368;
          if (local_328.Materials.ArrayNum != iVar10) {
            local_3c8[0] = 0;
            `TCheckedPointerIterator<UMaterialInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_3c8);
          }
          if (FVar32.Data == pFVar27) break;
          local_378 = *(ulonglong *)FVar32.Data;
          uVar22 = ((uint)(local_378 >> 0x14) & 0xffff ^ (uint)(local_378 >> 4)) * -0x7a143595;
          uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar25 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar25 = local_88.Hash.SecondaryData;
            }
            iVar9 = *(int *)((longlong)FVar25 +
                            (ulonglong)(local_88.HashSize - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4);
            while (iVar9 != -1) {
              lVar29 = local_88.Elements._0_8_ + (longlong)iVar9 * 0x18;
              if (*(ulonglong *)(local_88.Elements._0_8_ + (longlong)iVar9 * 0x18) == local_378) {
                plVar14 = (longlong *)(lVar29 + 8);
                if (lVar29 == 0) {
                  plVar14 = plVar20;
                }
                if (plVar14 != (longlong *)0x0) {
                  local_3c4 = (int)*plVar14;
                  goto LAB_14cc4f18e;
                }
                break;
              }
              iVar9 = *(int *)(lVar29 + 0x10);
            }
          }
          if (((local_3b8.Materials.AllocatorInstance.Data <= (FScriptContainerElement *)&local_378)
              && ((FScriptContainerElement *)&local_378 <
                  local_3b8.Materials.AllocatorInstance.Data +
                  (longlong)local_3b8.Materials.ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = local_3b8.Materials.ArrayNum;
          if (local_3b8.Materials.ArrayNum == local_3b8.Materials.ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&local_3b8,&local_3b8.Materials.ArrayMax);
          }
          local_3b8.Materials.ArrayNum = iVar9 + 1;
          *(ulonglong *)(local_3b8.Materials.AllocatorInstance.Data + (longlong)iVar9 * 8) =
               local_378;
          local_308 = &local_378;
          local_300 = &local_3c4;
          local_3c4 = iVar9;
          TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UMaterialInterface_*_const_&,int_const_&>_>
                    (&local_88,&local_318,(bool *)&local_308);
LAB_14cc4f18e:
          uVar22 = 0;
          if ((int)uVar33 < local_390.ArrayNum) {
            uVar22 = ~uVar33 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar27 = local_390.AllocatorInstance.Data + (longlong)plVar34;
                    /* WARNING: Load size is inaccurate */
          if (((*pFVar27 <= (FScriptContainerElement *)&local_3c4) &&
              ((FScriptContainerElement *)&local_3c4 <
               *pFVar27 + (longlong)*(int *)(pFVar27 + 0xc) * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = *(int *)(pFVar27 + 8);
          if (iVar9 == *(int *)(pFVar27 + 0xc)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar27,(int *)(pFVar27 + 0xc));
          }
          *(int *)(pFVar27 + 8) = iVar9 + 1;
          FVar32.Data = FVar32.Data + 8;
                    /* WARNING: Load size is inaccurate */
          *(int *)(*pFVar27 + (longlong)iVar9 * 4) = local_3c4;
        }
        if (local_328.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Materials.AllocatorInstance.Data);
        }
        plVar14 = (longlong *)(ulonglong)(uVar33 + 1);
        local_380 = local_380 + 8;
        plVar34 = plVar34 + 2;
        this = local_398;
      } while ((int)(uVar33 + 1) < (int)local_398->_padding_);
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  else {
    if (((int)this->_padding_ < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar13 = UE::ToolTarget::GetMaterialSet(&local_2f8,*(UToolTarget **)this->_padding_,false);
    if (&local_3b8 != pFVar13) {
      if (local_3b8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Materials.AllocatorInstance.Data);
      }
      local_3b8.Materials.AllocatorInstance.Data = (pFVar13->Materials).AllocatorInstance.Data;
      (pFVar13->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.Materials.ArrayNum = (pFVar13->Materials).ArrayNum;
      local_3b8.Materials.ArrayMax = (pFVar13->Materials).ArrayMax;
      (pFVar13->Materials).ArrayNum = 0;
      (pFVar13->Materials).ArrayMax = 0;
    }
    if (local_2f8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Materials.AllocatorInstance.Data);
    }
    local_3c0[0] = 0;
    if (0 < local_3b8.Materials.ArrayNum) {
      do {
        if ((local_390.ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar32.Data = local_390.AllocatorInstance.Data;
                    /* WARNING: Load size is inaccurate */
        if (((*local_390.AllocatorInstance.Data <= (FScriptContainerElement *)local_3c0) &&
            ((FScriptContainerElement *)local_3c0 <
             *local_390.AllocatorInstance.Data +
             (longlong)*(int *)(local_390.AllocatorInstance.Data + 0xc) * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *(int *)(FVar32.Data + 8);
        if (iVar10 == *(int *)(FVar32.Data + 0xc)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)FVar32.Data,(int *)(FVar32.Data + 0xc));
        }
        *(int *)(FVar32.Data + 8) = iVar10 + 1;
                    /* WARNING: Load size is inaccurate */
        *(int *)(*FVar32.Data + (longlong)iVar10 * 4) = local_3c0[0];
        local_3c0[0] = local_3c0[0] + 1;
      } while (local_3c0[0] < local_3b8.Materials.ArrayNum);
    }
    uVar22 = 1;
    if (1 < (int)this->_padding_) {
      lVar35 = 1;
      lVar29 = 0x10;
      do {
        uVar33 = 0;
        if ((int)uVar22 < local_390.ArrayNum) {
          uVar33 = ~uVar22 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar6 = local_398;
        pFVar27 = local_390.AllocatorInstance.Data + lVar29;
        uVar33 = 0;
        if ((int)uVar22 < (int)local_398->_padding_) {
          uVar33 = ~uVar22 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar4 = *(UObjectBaseUtility **)(pUVar6->_padding_ + lVar35 * 8);
        plVar14 = plVar20;
        if (pUVar4 != (UObjectBaseUtility *)0x0) {
          pUVar18 = Z_Construct_UClass_UMaterialProvider_NoRegister();
          plVar14 = UObjectBaseUtility::GetInterfaceAddress(pUVar4,pUVar18);
        }
        uVar33 = (**(code **)(*plVar14 + 0x10))();
        uVar30 = (ulonglong)uVar33;
        local_3a8 = 0;
        if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar30);
        }
        pFVar1 = pFVar27 + 0xc;
        *(undefined4 *)(pFVar27 + 8) = 0;
        if (*(uint *)pFVar1 != uVar33) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar33,(ForAnyElementType *)pFVar27,0,(int *)pFVar1);
        }
        if (0 < (int)uVar33) {
          do {
                    /* WARNING: Load size is inaccurate */
            if (((*pFVar27 <= (FScriptContainerElement *)&local_3a8) &&
                ((FScriptContainerElement *)&local_3a8 <
                 *pFVar27 + (longlong)(int)*(uint *)pFVar1 * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar33 = *(uint *)(pFVar27 + 8);
            if (uVar33 == *(uint *)pFVar1) {
              uVar33 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar27,(int *)pFVar1);
            }
            *(uint *)(pFVar27 + 8) = uVar33 + 1;
                    /* WARNING: Load size is inaccurate */
            *(undefined4 *)(*pFVar27 + (longlong)(int)uVar33 * 4) = local_3a8;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
        uVar22 = uVar22 + 1;
        lVar35 = lVar35 + 1;
        lVar29 = lVar29 + 0x10;
        this = local_398;
      } while ((int)uVar22 < (int)local_398->_padding_);
    }
  }
  local_3a0 = 0;
  if (0 < (int)this->_padding_) {
    local_380 = 0;
    do {
      pFVar28 = (FDynamicMeshAttributeSet *)0x0;
      uVar22 = (uint)plVar20;
      pFVar12 = ::operator_new(0x240);
      if (pFVar12 == (FDynamicMeshAttributeSet *)0x0) {
        this_01 = (FDynamicMesh3 *)&DAT_00000010;
        local_370 = (FDynamicMeshAttributeSet *)0x0;
        local_360 = (FDynamicMesh3 *)&DAT_00000010;
        pFVar12 = pFVar28;
      }
      else {
        *(undefined4 *)&pFVar12->_padding_ = 1;
        *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = 1;
        pFVar12->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
        ;
        UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)&pFVar12->_padding_);
        this_01 = (FDynamicMesh3 *)&pFVar12->_padding_;
        local_370 = pFVar12;
        local_360 = this_01;
        if ((this_01 == (FDynamicMesh3 *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
      pUVar6 = local_398;
      local_340.bHaveRequestLOD = false;
      local_340._1_3_ = 0;
      local_340.RequestLOD = Default;
      uVar33 = ~uVar22 >> 0x1f;
      local_340.bWantMeshTangents = false;
      local_340._9_3_ = 0;
      uVar11 = 0;
      if ((int)uVar22 < (int)local_398->_padding_) {
        uVar11 = uVar33;
      }
      local_3a4 = uVar33;
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar15 = UE::ToolTarget::GetDynamicMeshCopy
                          (&local_2b8,*(UToolTarget **)(pUVar6->_padding_ + local_380),&local_340);
      if ((this_01 == (FDynamicMesh3 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Geometry::FDynamicMesh3::operator=(this_01,pFVar15);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2b8);
      if ((this_01 == (FDynamicMesh3 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Geometry::FDynamicMesh3::EnableAttributes(this_01);
      if ((this_01 == (FDynamicMesh3 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this_01->AttributeSet).Ptr;
      pFVar23 = pFVar28;
      if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar23 = pFVar3;
      }
      UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar23);
      if ((this_01 == (FDynamicMesh3 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this_01->AttributeSet).Ptr;
      pFVar23 = pFVar28;
      if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar23 = pFVar3;
      }
      local_330 = (pFVar23->MaterialIDAttrib).Ptr;
      if ((this_01 == (FDynamicMesh3 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = local_3a0;
      local_318.Value = (int *)&this_01->TriangleRefCounts;
      uVar31 = (this_01->TriangleRefCounts).RefCounts.CurBlockUsed +
               (((FRefCountVector *)local_318.Value)->RefCounts).CurBlock * 0x200;
      if ((uVar31 == 0) ||
         (pFVar27 = (this_01->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
         pFVar28 = (FDynamicMeshAttributeSet *)0x0, (ushort)(**(short **)pFVar27 - 1U) < 0xfffe)) {
LAB_14cc4f984:
        uVar26 = (uint)pFVar28;
      }
      else {
        pFVar28 = (FDynamicMeshAttributeSet *)&DAT_00000001;
        uVar26 = 1;
        if (1 < (int)uVar31) {
          do {
            sVar2 = *(short *)(*(longlong *)(pFVar27 + ((ulonglong)pFVar28 >> 9) * 8) +
                              (ulonglong)((uint)pFVar28 & 0x1ff) * 2);
            uVar33 = local_3a4;
            local_370 = pFVar12;
            local_360 = this_01;
            if ((sVar2 != 0) && (sVar2 != -1)) break;
            uVar26 = (uint)pFVar28 + 1;
            pFVar28 = (FDynamicMeshAttributeSet *)(ulonglong)uVar26;
          } while ((int)uVar26 < (int)uVar31);
          goto LAB_14cc4f984;
        }
      }
      if (uVar26 != uVar31) {
        local_368 = (FScriptContainerElement *)((longlong)(int)local_3a0 << 4);
LAB_14cc4f9a0:
        do {
          pFVar27 = local_368;
          uVar22 = 0;
          if ((int)uVar11 < local_390.ArrayNum) {
            uVar22 = uVar33;
          }
          if ((uVar22 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar27 = local_390.AllocatorInstance.Data + (longlong)pFVar27;
          lVar29 = ((ulonglong)pFVar28 >> 9) * 8;
          local_358 = (ulonglong)((uint)pFVar28 & 0x1ff) * 4;
          uVar22 = *(uint *)(local_358 + *(longlong *)(*(longlong *)&local_330->field_0x20 + lVar29)
                            );
          uVar33 = 0;
          if ((int)uVar22 < *(int *)(pFVar27 + 8)) {
            uVar33 = ~uVar22 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar26 = (uint)pFVar28 + 1;
          pFVar28 = (FDynamicMeshAttributeSet *)(ulonglong)uVar26;
          *(undefined4 *)(local_358 + *(longlong *)(*(longlong *)&local_330->field_0x20 + lVar29)) =
               *(undefined4 *)(*(longlong *)pFVar27 + (longlong)(int)uVar22 * 4);
          uVar33 = local_3a4;
          if ((int)uVar26 < (int)uVar31) {
            do {
              lVar35 = (ulonglong)((uint)pFVar28 & 0x1ff) * 2;
              lVar29 = *(longlong *)
                        ((((TDynamicVector<unsigned_short,512> *)local_318.Value)->Blocks).
                         AllocatorInstance.Data + ((ulonglong)pFVar28 >> 9) * 8);
              if ((*(short *)(lVar35 + lVar29) != 0) && (*(short *)(lVar35 + lVar29) != -1))
              goto LAB_14cc4f9a0;
              uVar26 = (uint)pFVar28 + 1;
              pFVar28 = (FDynamicMeshAttributeSet *)(ulonglong)uVar26;
            } while ((int)uVar26 < (int)uVar31);
          }
          pFVar12 = local_370;
          this_01 = local_360;
          uVar22 = local_3a0;
        } while (uVar26 != uVar31);
      }
      this = local_398;
      if (uVar22 == 0) {
        if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
          LOCK();
          *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
          UNLOCK();
        }
        local_2e8 = (local_398->OriginalTargetMesh).Object;
        pTVar24 = (local_398->OriginalTargetMesh).SharedReferenceCount.ReferenceController;
        (local_398->OriginalTargetMesh).Object = this_01;
        (local_398->OriginalTargetMesh).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pFVar12;
        pTStack_2e0 = pTVar24;
      }
      else {
        if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
          LOCK();
          *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
          UNLOCK();
        }
        local_2d8 = (local_398->OriginalCuttingMesh).Object;
        pTVar24 = (local_398->OriginalCuttingMesh).SharedReferenceCount.ReferenceController;
        (local_398->OriginalCuttingMesh).Object = this_01;
        (local_398->OriginalCuttingMesh).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pFVar12;
        pTStack_2d0 = pTVar24;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
      local_380 = local_380 + 8;
      local_3a0 = uVar22 + 1;
      plVar20 = (longlong *)(ulonglong)local_3a0;
    } while ((int)local_3a0 < (int)this->_padding_);
  }
  pUVar6 = local_398;
  plVar20 = (longlong *)0x0;
  this_00 = (UMeshOpPreviewWithBackgroundCompute *)this->_padding_;
  pUVar16 = (UInteractiveToolManager *)(**(code **)(local_398->_padding_ + 0x2d8))(local_398);
  pUVar17 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar16);
  FVar32.Data = local_3b8.Materials.AllocatorInstance.Data;
  lVar29 = (longlong)local_3b8.Materials.ArrayNum;
  local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_350.ArrayNum = local_3b8.Materials.ArrayNum;
  if (local_3b8.Materials.ArrayNum == 0) {
    local_350.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_3b8.Materials.ArrayNum,0,&local_350.AllocatorInstance,
               local_3b8.Materials.ArrayNum,&local_350.ArrayMax);
    memcpy(local_350.AllocatorInstance.Data,FVar32.Data,lVar29 << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (this_00,&local_350,pUVar17,(UMaterialInterface *)0x0);
  if (((int)pUVar6->_padding_ < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar4 = *(UObjectBaseUtility **)pUVar6->_padding_;
  if (pUVar4 != (UObjectBaseUtility *)0x0) {
    pUVar18 = Z_Construct_UClass_UAssetBackedTarget_NoRegister();
    pvVar19 = UObjectBaseUtility::GetInterfaceAddress(pUVar4,pUVar18);
    if (pvVar19 != (void *)0x0) {
      if (((int)pUVar6->_padding_ < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar4 = *(UObjectBaseUtility **)pUVar6->_padding_;
      if (pUVar4 != (UObjectBaseUtility *)0x0) {
        pUVar18 = Z_Construct_UClass_UAssetBackedTarget_NoRegister();
        plVar20 = UObjectBaseUtility::GetInterfaceAddress(pUVar4,pUVar18);
      }
      pcVar5 = *(code **)(*plVar20 + 0x18);
      if (((int)pUVar6->_padding_ < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      cVar8 = (*pcVar5)(plVar20,*(undefined8 *)(pUVar6->_padding_ + 8));
      if (cVar8 != '\0') {
        plVar20 = (longlong *)(**(code **)(pUVar6->_padding_ + 0x2d8))(pUVar6);
        pcVar5 = *(code **)(*plVar20 + 0x360);
        pFVar21 = FText::AsLocalizable_Advanced_LocText
                            (&local_2c8,L"UCutMeshWithMeshTool",L"SameSourceError",
                             L"WARNING: Both input meshes have the same Asset; both inputs will be affected."
                            );
        (*pcVar5)(plVar20,pFVar21,3);
        if (local_2c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
        }
      }
    }
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_390.AllocatorInstance.Data,
             local_390.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_390.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_390.AllocatorInstance.Data);
  }
  if (local_3b8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Materials.AllocatorInstance.Data);
  }
  return;
}

// GetActionName @ 14cc5a820

FText * __thiscall
UCutMeshWithMeshTool::GetActionName(UCutMeshWithMeshTool *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UCutMeshWithMeshTool",L"CutMeshWithMeshActionName",L"Cut Mesh"
            );
  return __return_storage_ptr__;
}

// GetCreatedAssetName @ 14cc5b2e0

FString * __thiscall
UCutMeshWithMeshTool::GetCreatedAssetName
          (UCutMeshWithMeshTool *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Boolean");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cc5bb70

UClass * __cdecl UCutMeshWithMeshTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCutMeshWithMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CutMeshWithMeshTool",
               &Z_Registration_Info_UClass_UCutMeshWithMeshTool.InnerSingleton,
               StaticRegisterNativesUCutMeshWithMeshTool,0x3b8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCutMeshWithMeshTool>,
               InternalVTableHelperCtorCaller<UCutMeshWithMeshTool>,local_res8,
               UBaseCreateFromSelectedTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCutMeshWithMeshTool.InnerSingleton;
}

// MakeNewOperator @ 14cc64370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UCutMeshWithMeshTool::MakeNewOperator(UCutMeshWithMeshTool *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  FCutMeshWithMeshOp *pFVar16;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar17;
  double *pdVar18;
  FDynamicMeshOperator *in_RDX;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  FDynamicMesh3 *local_f8;
  FSharedReferencer<1> local_f0;
  FDynamicMesh3 *local_e8;
  FSharedReferencer<1> local_e0;
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  pFVar16 = ::operator_new(0x1b0);
  if (pFVar16 == (FCutMeshWithMeshOp *)0x0) {
    pFVar16 = (FCutMeshWithMeshOp *)0x0;
  }
  else {
    memset(pFVar16,0,0x1b0);
    pFVar16 = FCutMeshWithMeshOp::FCutMeshWithMeshOp(pFVar16);
  }
  local_f0.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_;
  local_f8 = (FDynamicMesh3 *)this->_padding_;
  if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&pFVar16->TargetMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)&local_f8) {
    (pFVar16->TargetMesh).Object = local_f8;
    local_f8 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar16->TargetMesh).SharedReferenceCount,&local_f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.ReferenceController);
  iVar1 = (int)this->_padding_;
  if (iVar1 < 1) {
    local_108 = 0;
    local_100 = (longlong)iVar1;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      TVar17.Ptr = (FDynamicMeshOperator *)(*pcVar3)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar17.Ptr;
    }
  }
  pdVar18 = (double *)
            (**(code **)(**(longlong **)this->_padding_ + 0x2c0))
                      (*(longlong **)this->_padding_,local_d8);
  dVar4 = pdVar18[1];
  dVar5 = pdVar18[2];
  dVar6 = pdVar18[3];
  dVar7 = pdVar18[4];
  dVar8 = pdVar18[5];
  dVar9 = pdVar18[6];
  dVar10 = pdVar18[7];
  dVar11 = pdVar18[8];
  dVar12 = pdVar18[9];
  dVar13 = pdVar18[10];
  dVar14 = pdVar18[0xb];
  (pFVar16->TargetMeshTransform).Rotation.XY.m128d_f64[0] = *pdVar18;
  (pFVar16->TargetMeshTransform).Rotation.XY.m128d_f64[1] = dVar4;
  (pFVar16->TargetMeshTransform).Rotation.ZW.m128d_f64[0] = dVar5;
  (pFVar16->TargetMeshTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  (pFVar16->TargetMeshTransform).Translation.XY.m128d_f64[0] = dVar7;
  (pFVar16->TargetMeshTransform).Translation.XY.m128d_f64[1] = dVar8;
  (pFVar16->TargetMeshTransform).Translation.ZW.m128d_f64[0] = dVar9;
  (pFVar16->TargetMeshTransform).Translation.ZW.m128d_f64[1] = dVar10;
  (pFVar16->TargetMeshTransform).Scale3D.XY.m128d_f64[0] = dVar11;
  (pFVar16->TargetMeshTransform).Scale3D.XY.m128d_f64[1] = dVar12;
  (pFVar16->TargetMeshTransform).Scale3D.ZW.m128d_f64[0] = dVar13;
  (pFVar16->TargetMeshTransform).Scale3D.ZW.m128d_f64[1] = dVar14;
  local_e0.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_;
  local_e8 = (FDynamicMesh3 *)this->_padding_;
  if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&pFVar16->CuttingMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)&local_e8) {
    (pFVar16->CuttingMesh).Object = local_e8;
    local_e8 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar16->CuttingMesh).SharedReferenceCount,&local_e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.ReferenceController);
  iVar1 = (int)this->_padding_;
  if (iVar1 < 2) {
    local_108 = 1;
    local_100 = (longlong)iVar1;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      TVar17.Ptr = (FDynamicMeshOperator *)(*pcVar3)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar17.Ptr;
    }
  }
  plVar2 = *(longlong **)(this->_padding_ + 8);
  pdVar18 = (double *)(**(code **)(*plVar2 + 0x2c0))(plVar2,local_78);
  dVar4 = pdVar18[1];
  dVar5 = pdVar18[2];
  dVar6 = pdVar18[3];
  dVar7 = pdVar18[4];
  dVar8 = pdVar18[5];
  dVar9 = pdVar18[6];
  dVar10 = pdVar18[7];
  dVar11 = pdVar18[8];
  dVar12 = pdVar18[9];
  dVar13 = pdVar18[10];
  dVar14 = pdVar18[0xb];
  (pFVar16->CuttingMeshTransform).Rotation.XY.m128d_f64[0] = *pdVar18;
  (pFVar16->CuttingMeshTransform).Rotation.XY.m128d_f64[1] = dVar4;
  (pFVar16->CuttingMeshTransform).Rotation.ZW.m128d_f64[0] = dVar5;
  (pFVar16->CuttingMeshTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  (pFVar16->CuttingMeshTransform).Translation.XY.m128d_f64[0] = dVar7;
  (pFVar16->CuttingMeshTransform).Translation.XY.m128d_f64[1] = dVar8;
  (pFVar16->CuttingMeshTransform).Translation.ZW.m128d_f64[0] = dVar9;
  (pFVar16->CuttingMeshTransform).Translation.ZW.m128d_f64[1] = dVar10;
  (pFVar16->CuttingMeshTransform).Scale3D.XY.m128d_f64[0] = dVar11;
  (pFVar16->CuttingMeshTransform).Scale3D.XY.m128d_f64[1] = dVar12;
  (pFVar16->CuttingMeshTransform).Scale3D.ZW.m128d_f64[0] = dVar13;
  (pFVar16->CuttingMeshTransform).Scale3D.ZW.m128d_f64[1] = dVar14;
  pFVar16->bAttemptToFixHoles = *(bool *)(this->_padding_ + 0xb0);
  pFVar16->bCollapseExtraEdges = *(bool *)(this->_padding_ + 0xb1);
  pFVar16->WindingThreshold = (double)*(float *)(this->_padding_ + 0xb4);
  in_RDX->_padding_ = (longlong)pFVar16;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// OnPropertyModified @ 14cc67f30

void __thiscall
UCutMeshWithMeshTool::OnPropertyModified
          (UCutMeshWithMeshTool *this,UObject *param_1,FProperty *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FName *pFVar5;
  FName FVar6;
  longlong *plVar7;
  FText *pFVar8;
  FName FVar9;
  FName local_res18 [2];
  FText local_28;
  
  if (param_2 != (FProperty *)0x0) {
    pFVar5 = ::FName::FName(local_res18,0x16,L"bUseFirstMeshMaterials",FNAME_Add);
    FVar1 = *pFVar5;
    bVar3 = IsThisNotNull(param_2,"FField::GetFName");
    FVar9.ComparisonIndex.Value = 0;
    FVar9.Number = 0;
    FVar6 = FVar9;
    if (bVar3) {
      FVar6 = (FName)param_2->_padding_;
    }
    if (FVar6 == FVar1) {
      cVar4 = (**(code **)(this->_padding_ + 0x398))(this);
      if (cVar4 != '\0') {
        (**(code **)(this->_padding_ + 0x3b8))(this,0);
        UMeshOpPreviewWithBackgroundCompute::InvalidateResult
                  ((UMeshOpPreviewWithBackgroundCompute *)this->_padding_);
        return;
      }
      plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
      pcVar2 = *(code **)(*plVar7 + 0x360);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"UCutMeshWithMeshTool",L"InvalidTargets",
                          L"Input meshes are no longer valid");
      (*pcVar2)(plVar7,pFVar8,3);
      if (local_28.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return;
    }
    pFVar5 = ::FName::FName(local_res18,0x12,L"bShowNewBoundaries",FNAME_Add);
    FVar1 = *pFVar5;
    bVar3 = IsThisNotNull(param_2,"FField::GetFName");
    if (bVar3) {
      FVar9 = (FName)param_2->_padding_;
    }
    if (FVar9 == FVar1) {
      plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*plVar7 + 0x368))(plVar7);
      UpdateVisualization(this);
      return;
    }
  }
  UBaseCreateFromSelectedTool::OnPropertyModified
            ((UBaseCreateFromSelectedTool *)this,param_1,param_2);
  return;
}

// OnShutdown @ 14cc68410

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

void __thiscall
UCutMeshWithMeshTool::OnShutdown(UCutMeshWithMeshTool *this,EToolShutdownType param_1)

{
  code *pcVar1;
  UObjectBaseUtility *this_00;
  UMaterialInterface **ppUVar2;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> TVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  void **ppvVar9;
  UClass *pUVar10;
  longlong *plVar11;
  UPrimitiveComponent *pUVar12;
  undefined8 *puVar13;
  UInteractiveToolManager *pUVar14;
  UInteractiveGizmoManager *pUVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStackY_a28 [32];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_9d8;
  TObjectPtr<AActor>_u_0 local_9c8;
  TObjectPtr<AActor>_u_0 local_9c0;
  void *local_9b8;
  void *local_9b0;
  FCommitMeshParameters local_9a8;
  FString local_9a0;
  FString local_990;
  FString local_980;
  FString local_970;
  longlong *local_960 [2];
  void *local_950 [2];
  void *local_940 [2];
  double local_930;
  double dStack_928;
  double local_920;
  double local_918;
  double dStack_910;
  double local_908;
  double local_900;
  double dStack_8f8;
  double local_8f0;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  TQuaternion<double>_u_0 local_8d0;
  double local_8b0;
  double dStack_8a8;
  double local_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  TQuaternion<double>_u_0 local_880;
  double local_860;
  double dStack_858;
  double local_850;
  double local_848;
  double dStack_840;
  double local_838;
  FCreateMeshObjectResult local_830;
  FDynamicMeshOpResult local_808;
  TTransform<double> local_7a8;
  FCreateMeshObjectParams local_748;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_a28;
  (**(code **)(this->_padding_ + 0x3c8))();
  plVar17 = (longlong *)this->_padding_;
  pcVar1 = *(code **)(*plVar17 + 0x2b0);
  ::FString::FString(&local_980,L"");
  (*pcVar1)(plVar17,this,&local_980);
  if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_980.Data.AllocatorInstance.Data);
  }
  plVar17 = (longlong *)this->_padding_;
  pcVar1 = *(code **)(*plVar17 + 0x2b0);
  ::FString::FString(&local_970,L"");
  (*pcVar1)(plVar17,this,&local_970);
  if (local_970.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_970.Data.AllocatorInstance.Data);
  }
  UMeshOpPreviewWithBackgroundCompute::Shutdown
            ((UMeshOpPreviewWithBackgroundCompute *)this->_padding_,&local_808);
  plVar11 = (longlong *)0x0;
  plVar17 = plVar11;
  plVar18 = plVar11;
  if (0 < (int)this->_padding_) {
    do {
      uVar16 = (uint)plVar17;
      uVar5 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar5 = ~uVar16 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::ToolTarget::ShowSourceObject(*(UToolTarget **)(this->_padding_ + (longlong)plVar18));
      plVar17 = (longlong *)(ulonglong)(uVar16 + 1);
      plVar18 = plVar18 + 1;
    } while ((int)(uVar16 + 1) < (int)this->_padding_);
  }
  if (param_1 == Accept) {
    lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar1 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x10);
    uVar8 = (**(code **)(this->_padding_ + 0x3e0))(this,local_960);
    (*pcVar1)(lVar7 + 0x28,uVar8);
    if (local_960[0] != (longlong *)0x0) {
      (**(code **)(*local_960[0] + 0x10))();
    }
    local_9d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9d8.ArrayNum = 0;
    local_9d8.ArrayMax = 0;
    local_9b8 = (void *)0x0;
    local_9b0 = (void *)0x0;
    ppvVar9 = (void **)(**(code **)(this->_padding_ + 1000))(this,local_950);
    if (&local_9b8 != ppvVar9) {
      if (local_9b8 != (void *)0x0) {
        FMemory::Free(local_9b8);
      }
      local_9b8 = *ppvVar9;
      *ppvVar9 = (void *)0x0;
      local_9b0 = ppvVar9[1];
      ppvVar9[1] = (void *)0x0;
    }
    if (local_950[0] != (void *)0x0) {
      FMemory::Free(local_950[0]);
    }
    if (((int)this->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::ToolTarget::GetLocalToWorldTransform(&local_7a8,*(UToolTarget **)this->_padding_);
    if (0 < ((local_808.Mesh.Ptr)->TriangleRefCounts).UsedCount) {
      MeshTransforms::ApplyTransform(local_808.Mesh.Ptr,&local_808.Transform,true,All);
      local_8d0._s_0.X = local_7a8.Rotation.XY.m128d_f64[0];
      local_8d0._s_0.Z = local_7a8.Rotation.ZW.m128d_f64[0];
      local_8d0._s_0.Y = local_7a8.Rotation.XY.m128d_f64[1];
      local_920 = local_7a8.Translation.ZW.m128d_f64[0];
      local_8d0._s_0.W = local_7a8.Rotation.ZW.m128d_f64[1];
      local_8a0 = local_7a8.Translation.ZW.m128d_f64[0];
      local_908 = local_7a8.Scale3D.ZW.m128d_f64[0];
      local_930 = local_7a8.Translation.XY.m128d_f64[0];
      dStack_928 = local_7a8.Translation.XY.m128d_f64[1];
      local_888 = local_7a8.Scale3D.ZW.m128d_f64[0];
      local_8b0 = local_7a8.Translation.XY.m128d_f64[0];
      dStack_8a8 = local_7a8.Translation.XY.m128d_f64[1];
      local_918 = local_7a8.Scale3D.XY.m128d_f64[0];
      dStack_910 = local_7a8.Scale3D.XY.m128d_f64[1];
      local_898 = local_7a8.Scale3D.XY.m128d_f64[0];
      dStack_890 = local_7a8.Scale3D.XY.m128d_f64[1];
      MeshTransforms::ApplyTransformInverse
                (local_808.Mesh.Ptr,(TTransformSRT3<double> *)&local_8d0._s_0,true,All);
      TVar3.Ptr = local_808.Mesh.Ptr;
      local_9a8.bHaveTargetLOD = false;
      local_9a8._1_3_ = 0;
      local_9a8.TargetLOD = Default;
      if (((int)this->_padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::ToolTarget::CommitMeshDescriptionUpdateViaDynamicMesh
                (*(UToolTarget **)this->_padding_,TVar3.Ptr,true,&local_9a8);
      if (((int)this->_padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(UObjectBaseUtility **)this->_padding_;
      if (this_00 != (UObjectBaseUtility *)0x0) {
        pUVar10 = Z_Construct_UClass_UMaterialProvider_NoRegister();
        plVar11 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar10);
      }
      (**(code **)(*plVar11 + 0x28))(plVar11,&local_9b8,1);
    }
    if (((int)this->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_9c8.DebugPtr = UE::ToolTarget::GetTargetActor(*(UToolTarget **)this->_padding_);
    if (((local_9d8.AllocatorInstance.Data <= &local_9c8) &&
        (&local_9c8 <
         (TObjectPtr<AActor>_u_0 *)
         (local_9d8.AllocatorInstance.Data + (longlong)local_9d8.ArrayMax * 8))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar6 = local_9d8.ArrayNum;
    if (local_9d8.ArrayNum == local_9d8.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_9d8.AllocatorInstance,&local_9d8.ArrayMax);
    }
    local_9d8.ArrayNum = iVar6 + 1;
    ((TObjectPtr<AActor>_u_0 *)(local_9d8.AllocatorInstance.Data + (longlong)iVar6 * 8))->DebugPtr =
         (AActor *)local_9c8;
    if (0 < (this->IntersectionMesh).TriangleRefCounts.UsedCount) {
      MeshTransforms::ApplyTransform(&this->IntersectionMesh,&local_808.Transform,true,All);
      local_880._s_0.X = local_7a8.Rotation.XY.m128d_f64[0];
      local_880._s_0.Z = local_7a8.Rotation.ZW.m128d_f64[0];
      local_880._s_0.Y = local_7a8.Rotation.XY.m128d_f64[1];
      local_8f0 = local_7a8.Translation.ZW.m128d_f64[0];
      local_880._s_0.W = local_7a8.Rotation.ZW.m128d_f64[1];
      local_850 = local_7a8.Translation.ZW.m128d_f64[0];
      local_8d8 = local_7a8.Scale3D.ZW.m128d_f64[0];
      local_900 = local_7a8.Translation.XY.m128d_f64[0];
      dStack_8f8 = local_7a8.Translation.XY.m128d_f64[1];
      local_838 = local_7a8.Scale3D.ZW.m128d_f64[0];
      local_860 = local_7a8.Translation.XY.m128d_f64[0];
      dStack_858 = local_7a8.Translation.XY.m128d_f64[1];
      local_8e8 = local_7a8.Scale3D.XY.m128d_f64[0];
      dStack_8e0 = local_7a8.Scale3D.XY.m128d_f64[1];
      local_848 = local_7a8.Scale3D.XY.m128d_f64[0];
      dStack_840 = local_7a8.Scale3D.XY.m128d_f64[1];
      MeshTransforms::ApplyTransformInverse
                (&this->IntersectionMesh,(TTransformSRT3<double> *)&local_880._s_0,true,All);
      if (((int)this->_padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar12 = UE::ToolTarget::GetTargetComponent(*(UToolTarget **)this->_padding_);
      UE::Modeling::GetComponentAssetBaseName(&local_990,(UActorComponent *)pUVar12,true);
      ::FString::PrintfImpl(&local_9a0,L"%s_%s");
      FCreateMeshObjectParams::FCreateMeshObjectParams(&local_748,true);
      local_748.TargetWorld.field0_0x0 =
           (TObjectPtr<UWorld>_u_0)(**(code **)(this->_padding_ + 0x3b0))(this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_748.TargetWorld.field0_0x0.DebugPtr != (TObjectPtr<UWorld>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_748.TargetWorld.field0_0x0);
      }
      local_748.Transform.Rotation.XY.m128d_f64[0] = local_7a8.Rotation.XY.m128d_f64[0];
      local_748.Transform.Rotation.XY.m128d_f64[1] = local_7a8.Rotation.XY.m128d_f64[1];
      local_748.Transform.Rotation.ZW.m128d_f64[0] = local_7a8.Rotation.ZW.m128d_f64[0];
      local_748.Transform.Rotation.ZW.m128d_f64[1] = local_7a8.Rotation.ZW.m128d_f64[1];
      uVar5 = local_9a0.Data.ArrayNum - 1;
      if (local_9a0.Data.ArrayNum == 0) {
        uVar5 = 0;
      }
      local_748.Transform.Translation.XY.m128d_f64[0] = local_7a8.Translation.XY.m128d_f64[0];
      local_748.Transform.Translation.XY.m128d_f64[1] = local_7a8.Translation.XY.m128d_f64[1];
      local_748.Transform.Translation.ZW.m128d_f64[0] = local_7a8.Translation.ZW.m128d_f64[0];
      local_748.Transform.Translation.ZW.m128d_f64[1] = local_7a8.Translation.ZW.m128d_f64[1];
      local_748.Transform.Scale3D.XY.m128d_f64[0] = local_7a8.Scale3D.XY.m128d_f64[0];
      local_748.Transform.Scale3D.XY.m128d_f64[1] = local_7a8.Scale3D.XY.m128d_f64[1];
      local_748.Transform.Scale3D.ZW.m128d_f64[0] = local_7a8.Scale3D.ZW.m128d_f64[0];
      local_748.Transform.Scale3D.ZW.m128d_f64[1] = local_7a8.Scale3D.ZW.m128d_f64[1];
      ::FString::AssignRange
                (&local_748.BaseName,(wchar_t *)local_9a0.Data.AllocatorInstance.Data,uVar5);
      puVar13 = (undefined8 *)(**(code **)(this->_padding_ + 1000))(this,local_940);
      iVar6 = *(int *)(puVar13 + 1);
      ppUVar2 = (UMaterialInterface **)*puVar13;
      local_748.Materials.ArrayNum = iVar6;
      if ((iVar6 == 0) && (local_748.Materials.ArrayMax == 0)) {
        local_748.Materials.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar6,local_748.Materials.ArrayMax,&local_748.Materials.AllocatorInstance,
                   iVar6,&local_748.Materials.ArrayMax);
        ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
                  (local_748.Materials.AllocatorInstance.Data,ppUVar2,iVar6);
      }
      if (local_940[0] != (void *)0x0) {
        FMemory::Free(local_940[0]);
      }
      FCreateMeshObjectParams::SetMesh(&local_748,&this->IntersectionMesh);
      if (((int)this->_padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::ToolTarget::ConfigureCreateMeshObjectParams(*(UToolTarget **)this->_padding_,&local_748);
      pUVar14 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
      UE::Modeling::CreateMeshObject(&local_830,pUVar14,&local_748);
      if ((local_830.ResultCode == Ok) &&
         (local_830.NewActor.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
        local_9c0 = local_830.NewActor.field0_0x0;
        if ((local_9d8.AllocatorInstance.Data <= &local_9c0) &&
           ((&local_9c0 <
             (TObjectPtr<AActor>_u_0 *)
             (local_9d8.AllocatorInstance.Data + (longlong)local_9d8.ArrayMax * 8) &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = local_9d8.ArrayNum;
        if (local_9d8.ArrayNum == local_9d8.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_9d8.AllocatorInstance,&local_9d8.ArrayMax);
        }
        local_9d8.ArrayNum = iVar6 + 1;
        ((TObjectPtr<AActor>_u_0 *)(local_9d8.AllocatorInstance.Data + (longlong)iVar6 * 8))->
        DebugPtr = (AActor *)local_9c0;
      }
      FCreateMeshObjectParams::~FCreateMeshObjectParams(&local_748);
      if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
      }
      if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_990.Data.AllocatorInstance.Data);
      }
    }
    pUVar14 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    ToolSelectionUtil::SetNewActorSelection(pUVar14,&local_9d8);
    lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x18))(lVar7 + 0x28);
    if (local_9b8 != (void *)0x0) {
      FMemory::Free(local_9b8);
    }
    if ((TObjectPtr<AActor>_u_0 *)local_9d8.AllocatorInstance.Data != (TObjectPtr<AActor>_u_0 *)0x0)
    {
      FMemory::Free(local_9d8.AllocatorInstance.Data);
    }
  }
  pUVar14 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar15 = UInteractiveToolManager::GetPairedGizmoManager(pUVar14);
  (**(code **)(pUVar15->_padding_ + 0x2e8))(pUVar15,this);
  if (local_808.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
    (**(code **)(local_808.Mesh.Ptr)->_padding_)(local_808.Mesh.Ptr,1);
  }
  return;
}

// SaveProperties @ 14cc74960

void __thiscall UCutMeshWithMeshTool::SaveProperties(UCutMeshWithMeshTool *this)

{
  UCutMeshWithMeshToolProperties *pUVar1;
  code *pcVar2;
  FString local_18;
  
  pUVar1 = (this->CutProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar2)(pUVar1,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UPreviewMesh::Disconnect((this->IntersectPreviewMesh).field0_0x0.DebugPtr);
  return;
}

// SetPreviewCallbacks @ 14cc75b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCutMeshWithMeshTool::SetPreviewCallbacks(UCutMeshWithMeshTool *this)

{
  ULineSetComponent *pUVar1;
  UInteractiveToolManager *pUVar2;
  UMaterialInterface *pUVar3;
  <lambda_1> local_res10;
  
  pUVar1 = NewObject<ULineSetComponent>(*(UObject **)(*(longlong *)(this->_padding_ + 0x68) + 0x50))
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (ULineSetComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DrawnLineSet).field0_0x0.DebugPtr = pUVar1;
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar1,
             *(USceneComponent **)(*(longlong *)(this->_padding_ + 0x68) + 0x50),(FName)0x0);
  pUVar1 = (this->DrawnLineSet).field0_0x0.DebugPtr;
  pUVar2 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar3 = ToolSetupUtil::GetDefaultLineComponentMaterial(pUVar2,true);
  ULineSetComponent::SetLineMaterial(pUVar1,pUVar3);
  UActorComponent::RegisterComponent((UActorComponent *)(this->DrawnLineSet).field0_0x0.DebugPtr);
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_UCutMeshWithMeshTool::SetPreviewCallbacks_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)(this->_padding_ + 0x48),&local_res10);
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_UCutMeshWithMeshTool::SetPreviewCallbacks_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)(this->_padding_ + 0x28),(<lambda_2> *)&local_res10);
  return;
}

// SetupProperties @ 14cc7f9c0

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

void __thiscall UCutMeshWithMeshTool::SetupProperties(UCutMeshWithMeshTool *this)

{
  code *pcVar1;
  UClass *pUVar2;
  UCutMeshWithMeshToolProperties *pUVar3;
  FText *pFVar4;
  longlong *plVar5;
  UPreviewMesh *pUVar6;
  UWorld *pUVar7;
  UInteractiveToolManager *pUVar8;
  UMaterialInstanceDynamic *pUVar9;
  undefined1 auStack_c8 [32];
  FText local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UCutMeshWithMeshToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = this;
  pUVar3 = (UCutMeshWithMeshToolProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UCutMeshWithMeshToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->CutProperties).field0_0x0.DebugPtr = pUVar3;
  pcVar1 = *(code **)(pUVar3->_padding_ + 0x2b8);
  ::FString::FString((FString *)&local_a8,L"");
  (*pcVar1)(pUVar3,this,&local_a8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_a8.TextData.Reference);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->CutProperties).field0_0x0.DebugPtr);
  pcVar1 = *(code **)(this->_padding_ + 0x380);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"UCutMeshWithMeshTool",L"CutMeshWithMeshToolName",L"Cut With Mesh")
  ;
  (*pcVar1)(this,pFVar4);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar1 = *(code **)(*plVar5 + 0x360);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"UCutMeshWithMeshTool",L"OnStartTool",
                      L"Cut the first input mesh with the second input mesh. Use the transform gizmos to modify the position and orientation of the input objects."
                     );
  (*pcVar1)(plVar5,pFVar4,2);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  pUVar6 = NewObject<UPreviewMesh>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->IntersectPreviewMesh).field0_0x0.DebugPtr = pUVar6;
  pUVar7 = (UWorld *)(**(code **)(this->_padding_ + 0x3b0))(this);
  UPreviewMesh::CreateInWorld(pUVar6,pUVar7,&UE::Math::TTransform<double>::Identity);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((this->IntersectPreviewMesh).field0_0x0.DebugPtr,(UToolTarget *)0x0);
  UPreviewMesh::SetVisible((this->IntersectPreviewMesh).field0_0x0.DebugPtr,true);
  pUVar6 = (this->IntersectPreviewMesh).field0_0x0.DebugPtr;
  pUVar8 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar9 = ToolSetupUtil::GetDefaultBrushVolumeMaterial(pUVar8);
  UPreviewMesh::SetMaterial(pUVar6,(UMaterialInterface *)pUVar9);
  return;
}

// StaticRegisterNativesUCutMeshWithMeshTool @ 14cc822c0

void __cdecl UCutMeshWithMeshTool::StaticRegisterNativesUCutMeshWithMeshTool(void)

{
  return;
}

// UpdateVisualization @ 14cc88a80

void __thiscall UCutMeshWithMeshTool::UpdateVisualization(UCutMeshWithMeshTool *this)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  longlong lVar7;
  FDynamicMesh3 *pFVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  ULineSetComponent::Clear((this->DrawnLineSet).field0_0x0.DebugPtr);
  if (((this->CutProperties).field0_0x0.DebugPtr)->bShowNewBoundaries != false) {
    pFVar8 = UPreviewMesh::GetMesh(*(UPreviewMesh **)(this->_padding_ + 0x68));
    pFVar10 = (this->CreatedSubtractBoundaryEdges).AllocatorInstance.Data;
    iVar4 = (this->CreatedSubtractBoundaryEdges).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar4 * 4;
    while( true ) {
      if ((this->CreatedSubtractBoundaryEdges).ArrayNum != iVar4) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      pFVar5 = (pFVar8->Vertices).Blocks.AllocatorInstance.Data;
      local_28 = 0xfff00f0f;
      local_24 = 0x40000000;
      local_20 = 0x40000000;
      uVar6 = *(ulonglong *)
               (*(longlong *)
                 ((pFVar8->Edges).Blocks.AllocatorInstance.Data +
                 (ulonglong)(*(uint *)pFVar10 >> 9) * 8) +
               (ulonglong)(*(uint *)pFVar10 & 0x1ff) * 0x10);
      uVar9 = (ulonglong)((uint)uVar6 & 0x1ff);
      lVar7 = *(longlong *)(pFVar5 + ((uVar6 & 0xffffffff) >> 9) * 8);
      pdVar2 = (double *)(lVar7 + uVar9 * 0x18);
      local_58._s_0.X = *pdVar2;
      local_58._s_0.Y = pdVar2[1];
      local_58._s_0.Z = *(double *)(lVar7 + 0x10 + uVar9 * 0x18);
      uVar9 = (ulonglong)((uint)(uVar6 >> 0x20) & 0x1ff);
      lVar7 = *(longlong *)(pFVar5 + (uVar6 >> 0x29) * 8);
      puVar3 = (undefined8 *)(lVar7 + uVar9 * 0x18);
      local_40 = *puVar3;
      uStack_38 = puVar3[1];
      local_30 = *(undefined8 *)(lVar7 + 0x10 + uVar9 * 0x18);
      ULineSetComponent::AddLine
                ((this->DrawnLineSet).field0_0x0.DebugPtr,(FRenderableLine *)&local_58._s_0);
      pFVar10 = pFVar10 + 4;
    }
    pFVar10 = (this->CreatedIntersectBoundaryEdges).AllocatorInstance.Data;
    iVar4 = (this->CreatedIntersectBoundaryEdges).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar4 * 4;
    while( true ) {
      if ((this->CreatedIntersectBoundaryEdges).ArrayNum != iVar4) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      pFVar5 = (this->IntersectionMesh).Vertices.Blocks.AllocatorInstance.Data;
      local_28 = 0xfff00f0f;
      local_24 = 0x40000000;
      local_20 = 0x40000000;
      uVar6 = *(ulonglong *)
               (*(longlong *)
                 ((this->IntersectionMesh).Edges.Blocks.AllocatorInstance.Data +
                 (ulonglong)(*(uint *)pFVar10 >> 9) * 8) +
               (ulonglong)(*(uint *)pFVar10 & 0x1ff) * 0x10);
      uVar9 = (ulonglong)((uint)uVar6 & 0x1ff);
      lVar7 = *(longlong *)(pFVar5 + ((uVar6 & 0xffffffff) >> 9) * 8);
      pdVar2 = (double *)(lVar7 + uVar9 * 0x18);
      local_58._s_0.X = *pdVar2;
      local_58._s_0.Y = pdVar2[1];
      local_58._s_0.Z = *(double *)(lVar7 + 0x10 + uVar9 * 0x18);
      uVar9 = (ulonglong)((uint)(uVar6 >> 0x20) & 0x1ff);
      lVar7 = *(longlong *)(pFVar5 + (uVar6 >> 0x29) * 8);
      puVar3 = (undefined8 *)(lVar7 + uVar9 * 0x18);
      local_40 = *puVar3;
      uStack_38 = puVar3[1];
      local_30 = *(undefined8 *)(lVar7 + 0x10 + uVar9 * 0x18);
      ULineSetComponent::AddLine
                ((this->DrawnLineSet).field0_0x0.DebugPtr,(FRenderableLine *)&local_58._s_0);
      pFVar10 = pFVar10 + 4;
    }
  }
  return;
}

