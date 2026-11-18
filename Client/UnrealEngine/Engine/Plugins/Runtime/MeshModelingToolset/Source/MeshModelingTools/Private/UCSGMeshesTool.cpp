// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 20

// StaticClass @ 14cc025d0

UClass * __cdecl UCSGMeshesTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCSGMeshesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CSGMeshesTool",
               &Z_Registration_Info_UClass_UCSGMeshesTool.InnerSingleton,
               StaticRegisterNativesUCSGMeshesTool,0x188,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCSGMeshesTool>,
               InternalVTableHelperCtorCaller<UCSGMeshesTool>,local_res8,
               UBaseCreateFromSelectedTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCSGMeshesTool.InnerSingleton;
}

// UCSGMeshesTool @ 14cc1c270

UCSGMeshesTool * __thiscall
UCSGMeshesTool::UCSGMeshesTool(UCSGMeshesTool *this,FVTableHelper *param_1)

{
  UBaseCreateFromSelectedTool::UBaseCreateFromSelectedTool
            ((UBaseCreateFromSelectedTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->CSGProperties).field0_0x0.DebugPtr = (UCSGMeshesToolProperties *)0x0;
  (this->TrimProperties).field0_0x0.DebugPtr = (UTrimMeshesToolProperties *)0x0;
  (this->OriginalDynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalDynamicMeshes).ArrayNum = 0;
  (this->OriginalDynamicMeshes).ArrayMax = 0;
  (this->OriginalMeshPreviews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalMeshPreviews).ArrayNum = 0;
  (this->OriginalMeshPreviews).ArrayMax = 0;
  (this->PreviewsGhostMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->DrawnLineSet).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  (this->CreatedBoundaryEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreatedBoundaryEdges).ArrayNum = 0;
  (this->CreatedBoundaryEdges).ArrayMax = 0;
  this->bTrimMode = false;
  return this;
}

// ~UCSGMeshesTool @ 14cc224b0

void __thiscall UCSGMeshesTool::~UCSGMeshesTool(UCSGMeshesTool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  pFVar1 = (this->CreatedBoundaryEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OriginalMeshPreviews).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,int>
            ((TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)
             (this->OriginalDynamicMeshes).AllocatorInstance.Data,
             (this->OriginalDynamicMeshes).ArrayNum);
  pFVar1 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBaseCreateFromSelectedTool::~UBaseCreateFromSelectedTool((UBaseCreateFromSelectedTool *)this);
  return;
}

// ConvertInputsAndSetPreviewMaterials @ 14cc4db80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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

void __thiscall
UCSGMeshesTool::ConvertInputsAndSetPreviewMaterials(UCSGMeshesTool *this,bool param_1)

{
  TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UPreviewMesh>,TSizedDefaultAllocator<32>_> *pTVar2;
  short sVar3;
  UObjectBaseUtility *this_00;
  FDynamicMeshAttributeSet *pFVar4;
  longlong lVar5;
  UPreviewMesh *this_01;
  UMeshOpPreviewWithBackgroundCompute *this_02;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  UCSGMeshesTool *pUVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FComponentMaterialSet *pFVar15;
  UClass *pUVar16;
  longlong *plVar17;
  TReferenceControllerBase<1> *pTVar18;
  FDynamicMesh3 *pFVar19;
  FDynamicMeshAttributeSet *this_03;
  longlong lVar20;
  UObject *pUVar21;
  TTransform<double> *pTVar22;
  UWorld *pUVar23;
  UInteractiveToolManager *pUVar24;
  UMaterialInterface *pUVar25;
  int *piVar26;
  ForElementType<FSetElementId> FVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  FSharedReferencer<1> FVar31;
  ulonglong uVar32;
  longlong *plVar33;
  TReferenceControllerBase<1> *pTVar34;
  uint uVar35;
  ForAnyElementType FVar36;
  longlong lVar37;
  uint uVar38;
  longlong lVar39;
  undefined1 auStackY_4e8 [32];
  undefined1 local_498;
  char local_497;
  int local_494;
  int local_490;
  uint local_48c;
  FComponentMaterialSet local_488;
  undefined4 local_478 [2];
  UCSGMeshesTool *local_470;
  uint local_468;
  longlong local_460;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_458;
  ulonglong local_448;
  UObject *local_440;
  TReferenceControllerBase<1> *local_438;
  FSharedReferencer<1> FStack_430;
  int *local_428;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_420;
  FGetMeshParameters local_410;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  FComponentMaterialSet local_3e8;
  TPairInitializer<UMaterialInterface_*_const_&,int_const_&> local_3d8;
  ulonglong *local_3c8;
  int *local_3c0;
  FComponentMaterialSet local_3b8;
  FDynamicMesh3 local_3a8;
  undefined1 local_178 [128];
  TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
  local_f8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  uVar38 = (uint)this->_padding_;
  pTVar1 = &this->OriginalDynamicMeshes;
  piVar26 = &(this->OriginalDynamicMeshes).ArrayNum;
  iVar12 = *piVar26;
  lVar37 = 0x10;
  local_497 = param_1;
  local_470 = this;
  local_428 = piVar26;
  local_3d8.Value = (int *)pTVar1;
  if (iVar12 < (int)uVar38) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar38 - iVar12,&pTVar1->AllocatorInstance,piVar26,
                        &(this->OriginalDynamicMeshes).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x10,0,
           (longlong)(int)(uVar38 - iVar12) << 4);
  }
  else {
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
    }
    if ((int)uVar38 < iVar12) {
      uVar13 = iVar12 - uVar38;
      if (((int)(uVar38 | uVar13) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar13 != 0) {
        TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (pTVar1,uVar38,uVar13);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar1->AllocatorInstance,*piVar26,
                   &(this->OriginalDynamicMeshes).ArrayMax);
      }
    }
  }
  plVar33 = (longlong *)0x0;
  local_f8.Elements._44_4_ = 0x80;
  local_488.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.Materials.ArrayNum = 0;
  local_488.Materials.ArrayMax = 0;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.ArrayNum = 0;
  local_458.ArrayMax = 0;
  local_f8.Elements._48_4_ = 0xffffffff;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_458,(int)this->_padding_,Default);
  if ((this->bTrimMode == false) &&
     (((this->CSGProperties).field0_0x0.DebugPtr)->bUseFirstMeshMaterials != false)) {
    if (((int)this->_padding_ < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar15 = UE::ToolTarget::GetMaterialSet(&local_3b8,*(UToolTarget **)this->_padding_,false);
    if (&local_488 != pFVar15) {
      if (local_488.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_488.Materials.AllocatorInstance.Data);
      }
      local_488.Materials.AllocatorInstance.Data = (pFVar15->Materials).AllocatorInstance.Data;
      (pFVar15->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_488.Materials.ArrayNum = (pFVar15->Materials).ArrayNum;
      local_488.Materials.ArrayMax = (pFVar15->Materials).ArrayMax;
      (pFVar15->Materials).ArrayNum = 0;
      (pFVar15->Materials).ArrayMax = 0;
    }
    if (local_3b8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Materials.AllocatorInstance.Data);
    }
    local_494 = 0;
    if (0 < local_488.Materials.ArrayNum) {
      do {
        if ((local_458.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar36.Data = local_458.AllocatorInstance.Data;
                    /* WARNING: Load size is inaccurate */
        if (((*local_458.AllocatorInstance.Data <= (FScriptContainerElement *)&local_494) &&
            ((FScriptContainerElement *)&local_494 <
             *local_458.AllocatorInstance.Data +
             (longlong)*(int *)(local_458.AllocatorInstance.Data + 0xc) * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)(FVar36.Data + 8);
        if (iVar12 == *(int *)(FVar36.Data + 0xc)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)FVar36.Data,(int *)(FVar36.Data + 0xc));
        }
        *(int *)(FVar36.Data + 8) = iVar12 + 1;
                    /* WARNING: Load size is inaccurate */
        *(int *)(*FVar36.Data + (longlong)iVar12 * 4) = local_494;
        local_494 = local_494 + 1;
      } while (local_494 < local_488.Materials.ArrayNum);
    }
    uVar38 = 1;
    if (1 < (int)this->_padding_) {
      lVar39 = 1;
      do {
        uVar13 = 0;
        if ((int)uVar38 < local_458.ArrayNum) {
          uVar13 = ~uVar38 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar29 = local_458.AllocatorInstance.Data + lVar37;
        uVar13 = 0;
        if ((int)uVar38 < (int)this->_padding_) {
          uVar13 = ~uVar38 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = *(UObjectBaseUtility **)(this->_padding_ + lVar39 * 8);
        plVar17 = plVar33;
        if (this_00 != (UObjectBaseUtility *)0x0) {
          pUVar16 = Z_Construct_UClass_UMaterialProvider_NoRegister();
          plVar17 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar16);
        }
        uVar13 = (**(code **)(*plVar17 + 0x10))();
        uVar32 = (ulonglong)uVar13;
        local_478[0] = 0;
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar32);
        }
        pFVar30 = pFVar29 + 0xc;
        *(undefined4 *)(pFVar29 + 8) = 0;
        if (*(uint *)pFVar30 != uVar13) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar13,(ForAnyElementType *)pFVar29,0,(int *)pFVar30);
        }
        if (0 < (int)uVar13) {
          do {
                    /* WARNING: Load size is inaccurate */
            if (((*pFVar29 <= (FScriptContainerElement *)local_478) &&
                ((FScriptContainerElement *)local_478 <
                 *pFVar29 + (longlong)(int)*(uint *)pFVar30 * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar13 = *(uint *)(pFVar29 + 8);
            if (uVar13 == *(uint *)pFVar30) {
              uVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar29,(int *)pFVar30);
            }
            *(uint *)(pFVar29 + 8) = uVar13 + 1;
                    /* WARNING: Load size is inaccurate */
            *(undefined4 *)(*pFVar29 + (longlong)(int)uVar13 * 4) = local_478[0];
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
        }
        uVar38 = uVar38 + 1;
        lVar39 = lVar39 + 1;
        lVar37 = lVar37 + 0x10;
        this = local_470;
      } while ((int)uVar38 < (int)local_470->_padding_);
    }
  }
  else {
    this = local_470;
    if (0 < (int)local_470->_padding_) {
      local_460 = 0;
      plVar17 = plVar33;
      do {
        lVar37 = local_460;
        pUVar9 = local_470;
        uVar13 = (uint)plVar33;
        uVar38 = 0;
        if ((int)uVar13 < (int)local_470->_padding_) {
          uVar38 = ~uVar13 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        UE::ToolTarget::GetMaterialSet
                  (&local_3e8,*(UToolTarget **)(lVar37 + pUVar9->_padding_),false);
        iVar12 = local_3e8.Materials.ArrayNum;
        pFVar29 = local_3e8.Materials.AllocatorInstance.Data + (longlong)iVar12 * 8;
        FVar36.Data = local_3e8.Materials.AllocatorInstance.Data;
        while( true ) {
          if (local_3e8.Materials.ArrayNum != iVar12) {
            local_498 = 0;
            `TCheckedPointerIterator<UMaterialInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_498);
          }
          if (FVar36.Data == pFVar29) break;
          local_448 = *(ulonglong *)FVar36.Data;
          uVar38 = ((uint)(local_448 >> 0x14) & 0xffff ^ (uint)(local_448 >> 4)) * -0x7a143595;
          uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
          if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
            FVar27 = (ForElementType<FSetElementId>)&local_f8.Hash;
            if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar27 = local_f8.Hash.SecondaryData;
            }
            iVar11 = *(int *)((longlong)FVar27 +
                             (ulonglong)(local_f8.HashSize - 1U & (uVar38 >> 0x10 ^ uVar38)) * 4);
            while (iVar11 != -1) {
              lVar37 = local_f8.Elements._0_8_ + (longlong)iVar11 * 0x18;
              if (*(ulonglong *)(local_f8.Elements._0_8_ + (longlong)iVar11 * 0x18) == local_448) {
                piVar26 = (int *)(lVar37 + 8);
                if (lVar37 == 0) {
                  piVar26 = (int *)0x0;
                }
                if (piVar26 != (int *)0x0) {
                  local_490 = *piVar26;
                  goto LAB_14cc4e2d0;
                }
                break;
              }
              iVar11 = *(int *)(lVar37 + 0x10);
            }
          }
          if (((local_488.Materials.AllocatorInstance.Data <= (FScriptContainerElement *)&local_448)
              && ((FScriptContainerElement *)&local_448 <
                  local_488.Materials.AllocatorInstance.Data +
                  (longlong)local_488.Materials.ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = local_488.Materials.ArrayNum;
          if (local_488.Materials.ArrayNum == local_488.Materials.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)&local_488,&local_488.Materials.ArrayMax)
            ;
          }
          local_488.Materials.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_488.Materials.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               local_448;
          local_3c8 = &local_448;
          local_3c0 = &local_490;
          local_490 = iVar11;
          TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UMaterialInterface_*_const_&,int_const_&>_>
                    (&local_f8,&local_3d8,(bool *)&local_3c8);
LAB_14cc4e2d0:
          uVar38 = 0;
          if ((int)uVar13 < local_458.ArrayNum) {
            uVar38 = ~uVar13 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar30 = local_458.AllocatorInstance.Data + (longlong)plVar17;
                    /* WARNING: Load size is inaccurate */
          if (((*pFVar30 <= (FScriptContainerElement *)&local_490) &&
              ((FScriptContainerElement *)&local_490 <
               *pFVar30 + (longlong)*(int *)(pFVar30 + 0xc) * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = *(int *)(pFVar30 + 8);
          if (iVar11 == *(int *)(pFVar30 + 0xc)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar30,(int *)(pFVar30 + 0xc));
          }
          *(int *)(pFVar30 + 8) = iVar11 + 1;
          FVar36.Data = FVar36.Data + 8;
                    /* WARNING: Load size is inaccurate */
          *(int *)(*pFVar30 + (longlong)iVar11 * 4) = local_490;
        }
        if (local_3e8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Materials.AllocatorInstance.Data);
        }
        plVar33 = (longlong *)(ulonglong)(uVar13 + 1);
        local_460 = local_460 + 8;
        plVar17 = plVar17 + 2;
        this = local_470;
      } while ((int)(uVar13 + 1) < (int)local_470->_padding_);
    }
  }
  UpdatePreviewsMaterial(this);
  pTVar8 = _UNK_150651568;
  pTVar7 = ___xmm_00000000000000000000000000000010;
  local_48c = 0;
  if (0 < (int)this->_padding_) {
    local_460 = 0;
    local_3f0 = 0;
    do {
      lVar39 = local_3f0;
      lVar37 = local_460;
      uVar38 = local_48c;
      pTVar18 = ::operator_new(0x240);
      if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        FVar31.ReferenceController = pTVar8;
        pTVar34 = pTVar7;
      }
      else {
        pTVar18->SharedReferenceCount = (atomic<int>)0x1;
        pTVar18->WeakReferenceCount = (atomic<int>)0x1;
        pTVar18->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
        ;
        UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(pTVar18 + 1));
        if ((pTVar18 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        FVar31.ReferenceController = pTVar18;
        pTVar34 = pTVar18 + 1;
      }
      uVar13 = ~uVar38 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar38 < *local_428) {
        uVar28 = uVar13;
      }
      local_468 = uVar13;
      local_438 = pTVar34;
      FStack_430.ReferenceController = FVar31.ReferenceController;
      if ((uVar28 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar29 = ((ForAnyElementType *)local_3d8.Value)->Data + lVar39;
      if (pFVar29 != (FScriptContainerElement *)&local_438) {
        *(TReferenceControllerBase<1> **)pFVar29 = pTVar34;
        local_438 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar29 + 8),&FStack_430);
        FVar31.ReferenceController = FStack_430.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar31.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      pUVar9 = local_470;
      local_410.bHaveRequestLOD = false;
      local_410._1_3_ = 0;
      local_410.RequestLOD = Default;
      local_410.bWantMeshTangents = false;
      local_410._9_3_ = 0;
      uVar28 = 0;
      if ((int)uVar38 < (int)local_470->_padding_) {
        uVar28 = uVar13;
      }
      if ((uVar28 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar19 = UE::ToolTarget::GetDynamicMeshCopy
                          (&local_3a8,*(UToolTarget **)(pUVar9->_padding_ + lVar37 * 8),&local_410);
      uVar28 = 0;
      if ((int)uVar38 < *local_428) {
        uVar28 = uVar13;
      }
      if ((uVar28 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar1 = &pUVar9->OriginalDynamicMeshes;
      pFVar29 = (pTVar1->AllocatorInstance).Data;
      lVar39 = lVar37 * 0x10;
      local_3f8 = lVar39;
      if ((*(longlong *)(pFVar29 + lVar39) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)(pFVar29 + lVar39),pFVar19);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_3a8);
      uVar28 = 0;
      if ((int)uVar38 < (pUVar9->OriginalDynamicMeshes).ArrayNum) {
        uVar28 = uVar13;
      }
      if ((uVar28 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar29 = (pTVar1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar29 + lVar39) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Geometry::FDynamicMesh3::EnableAttributes(*(FDynamicMesh3 **)(pFVar29 + lVar39));
      uVar28 = 0;
      if ((int)uVar38 < (pUVar9->OriginalDynamicMeshes).ArrayNum) {
        uVar28 = uVar13;
      }
      if ((uVar28 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar29 = (pTVar1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar29 + lVar39) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = *(FDynamicMeshAttributeSet **)(*(longlong *)(pFVar29 + lVar39) + 0x208);
      this_03 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
        this_03 = pFVar4;
      }
      UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_03);
      uVar28 = 0;
      if ((int)uVar38 < (pUVar9->OriginalDynamicMeshes).ArrayNum) {
        uVar28 = uVar13;
      }
      if ((uVar28 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar29 = (pTVar1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar29 + lVar39) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)(*(longlong *)(pFVar29 + lVar39) + 0x208);
      lVar20 = 0;
      if (lVar5 != 0) {
        lVar20 = lVar5;
      }
      local_400 = *(longlong *)(lVar20 + 0x48);
      uVar28 = 0;
      if ((int)uVar38 < (pUVar9->OriginalDynamicMeshes).ArrayNum) {
        uVar28 = uVar13;
      }
      if ((uVar28 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar29 = (pTVar1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar29 + lVar39) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)(pFVar29 + lVar39);
      uVar28 = 0;
      uVar35 = *(int *)(lVar5 + 0x144) + *(int *)(lVar5 + 0x140) * 0x200;
      if ((uVar35 == 0) || ((ushort)(*(short *)**(undefined8 **)(lVar5 + 0x148) - 1U) < 0xfffe)) {
LAB_14cc4e91e:
        bVar10 = uVar28 == uVar35;
      }
      else {
        uVar28 = 1;
        bVar10 = uVar35 == 1;
        if (1 < (int)uVar35) {
          do {
            sVar3 = *(short *)((*(undefined8 **)(lVar5 + 0x148))[uVar28 >> 9] +
                              (ulonglong)(uVar28 & 0x1ff) * 2);
            uVar38 = local_48c;
            if ((sVar3 != 0) && (sVar3 != -1)) break;
            uVar28 = uVar28 + 1;
          } while ((int)uVar28 < (int)uVar35);
          goto LAB_14cc4e91e;
        }
      }
      if (!bVar10) {
LAB_14cc4e92a:
        do {
          uVar14 = 0;
          if ((int)uVar38 < local_458.ArrayNum) {
            uVar14 = uVar13;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar29 = local_458.AllocatorInstance.Data + lVar39;
          lVar37 = (ulonglong)(uVar28 >> 9) * 8;
          lVar39 = (ulonglong)(uVar28 & 0x1ff) * 4;
          uVar38 = *(uint *)(lVar39 + *(longlong *)(lVar37 + *(longlong *)(local_400 + 0x20)));
          uVar13 = 0;
          if ((int)uVar38 < *(int *)(pFVar29 + 8)) {
            uVar13 = ~uVar38 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar28 = uVar28 + 1;
          *(undefined4 *)(lVar39 + *(longlong *)(lVar37 + *(longlong *)(local_400 + 0x20))) =
               *(undefined4 *)(*(longlong *)pFVar29 + (longlong)(int)uVar38 * 4);
          uVar38 = local_48c;
          lVar39 = local_3f8;
          uVar13 = local_468;
          if ((int)uVar28 < (int)uVar35) {
            do {
              lVar37 = (ulonglong)(uVar28 >> 9) * 8;
              lVar20 = (ulonglong)(uVar28 & 0x1ff) * 2;
              if ((*(short *)(lVar20 + *(longlong *)(*(longlong *)(lVar5 + 0x148) + lVar37)) != 0)
                 && (*(short *)(lVar20 + *(longlong *)(lVar37 + *(longlong *)(lVar5 + 0x148))) != -1
                    )) goto LAB_14cc4e92a;
              uVar28 = uVar28 + 1;
            } while ((int)uVar28 < (int)uVar35);
          }
          lVar37 = local_460;
        } while (uVar28 != uVar35);
      }
      this = local_470;
      if (local_497 != '\0') {
        pTVar2 = &local_470->OriginalMeshPreviews;
        pUVar21 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar21,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar16 = Z_Construct_UClass_UPreviewMesh_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_178,pUVar16);
        local_178._8_8_ = pUVar21;
        pUVar21 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_178);
        if (local_178._64_8_ != 0) {
          plVar33 = (longlong *)(local_178 + 0x50);
          if ((longlong *)local_178._104_8_ != (longlong *)0x0) {
            plVar33 = (longlong *)local_178._104_8_;
          }
          (**(code **)(*plVar33 + 0x10))(plVar33);
        }
        local_440 = pUVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar21);
        }
        pFVar29 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar29 <= (FScriptContainerElement *)&local_440) &&
            ((FScriptContainerElement *)&local_440 <
             pFVar29 + (longlong)(this->OriginalMeshPreviews).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = (this->OriginalMeshPreviews).ArrayNum;
        piVar26 = &(this->OriginalMeshPreviews).ArrayMax;
        if (iVar12 == *piVar26) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar26);
        }
        (this->OriginalMeshPreviews).ArrayNum = iVar12 + 1;
        pFVar29 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8;
        *(UObject **)pFVar29 = local_440;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_440 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_440);
        }
        this_01 = *(UPreviewMesh **)pFVar29;
        uVar28 = 0;
        if ((int)uVar38 < (int)this->_padding_) {
          uVar28 = uVar13;
        }
        if ((uVar28 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar22 = UE::ToolTarget::GetLocalToWorldTransform
                            (&local_a8,*(UToolTarget **)(this->_padding_ + lVar37 * 8));
        pUVar23 = (UWorld *)(**(code **)(this->_padding_ + 0x3b0))(this);
        UPreviewMesh::CreateInWorld(this_01,pUVar23,pTVar22);
        uVar28 = 0;
        if ((int)uVar38 < *local_428) {
          uVar28 = uVar13;
        }
        if ((uVar28 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        UPreviewMesh::UpdatePreview
                  (this_01,*(FDynamicMesh3 **)
                            ((this->OriginalDynamicMeshes).AllocatorInstance.Data + lVar37 * 0x10),
                   FullUpdate,AllVertexAttribs);
        UPreviewMesh::SetMaterial
                  (this_01,0,(UMaterialInterface *)(this->PreviewsGhostMaterial).field0_0x0.DebugPtr
                  );
        UPreviewMesh::SetVisible(this_01,false);
        uVar28 = 0;
        if ((int)uVar38 < (int)this->_padding_) {
          uVar28 = uVar13;
        }
        if ((uVar28 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar33 = *(longlong **)(this->_padding_ + lVar37 * 8);
        (**(code **)(*plVar33 + 0x2b0))
                  (plVar33,(this_01->DynamicMeshComponent).field0_0x0.DebugPtr,1);
      }
      local_3f0 = local_3f0 + 0x10;
      local_48c = uVar38 + 1;
      local_460 = lVar37 + 1;
    } while ((int)local_48c < (int)this->_padding_);
  }
  this_02 = (UMeshOpPreviewWithBackgroundCompute *)this->_padding_;
  pUVar24 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar25 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar24);
  FVar36.Data = local_488.Materials.AllocatorInstance.Data;
  lVar37 = (longlong)local_488.Materials.ArrayNum;
  local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_420.ArrayNum = local_488.Materials.ArrayNum;
  if (local_488.Materials.ArrayNum == 0) {
    local_420.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_488.Materials.ArrayNum,0,&local_420.AllocatorInstance,
               local_488.Materials.ArrayNum,&local_420.ArrayMax);
    memcpy(local_420.AllocatorInstance.Data,FVar36.Data,lVar37 << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (this_02,&local_420,pUVar25,(UMaterialInterface *)0x0);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_458.AllocatorInstance.Data,
             local_458.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_458.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_458.AllocatorInstance.Data);
  }
  local_f8.HashSize = 0;
  if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  if (local_488.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Materials.AllocatorInstance.Data);
  }
  return;
}

// EnableTrimMode @ 14cc54a40

void __thiscall UCSGMeshesTool::EnableTrimMode(UCSGMeshesTool *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->OriginalDynamicMeshes).ArrayNum == 0) {
    this->bTrimMode = true;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("OriginalDynamicMeshes.Num() == 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\CSGMeshesTool.cpp"
                     ,0x17,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bTrimMode = true;
  return;
}

// GetActionName @ 14cc5a7c0

FText * __thiscall UCSGMeshesTool::GetActionName(UCSGMeshesTool *this,FText *__return_storage_ptr__)

{
  if (this->bTrimMode != false) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"UCSGMeshesTool",L"TrimActionName",L"Trim Meshes");
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UCSGMeshesTool",L"BooleanActionName",L"Boolean Meshes");
  return __return_storage_ptr__;
}

// GetCreatedAssetName @ 14cc5b2a0

FString * __thiscall
UCSGMeshesTool::GetCreatedAssetName(UCSGMeshesTool *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"Trim";
  if (this->bTrimMode == false) {
    pwVar1 = L"Boolean";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// GetHiddenGizmoIndex @ 14cc5b320

int __thiscall UCSGMeshesTool::GetHiddenGizmoIndex(UCSGMeshesTool *this)

{
  ECSGOperation EVar1;
  int iVar2;
  
  iVar2 = UBaseCreateFromSelectedTool::GetHiddenGizmoIndex((UBaseCreateFromSelectedTool *)this);
  if (iVar2 == -1) {
    if (this->bTrimMode != false) {
      return (uint)(((this->TrimProperties).field0_0x0.DebugPtr)->WhichMesh != TrimA);
    }
    EVar1 = ((this->CSGProperties).field0_0x0.DebugPtr)->Operation;
    if (EVar1 == DifferenceAB) {
      return 0;
    }
    iVar2 = -1;
    if (EVar1 == DifferenceBA) {
      iVar2 = 1;
    }
  }
  return iVar2;
}

// GetPrivateStaticClass @ 14cc5b930

UClass * __cdecl UCSGMeshesTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCSGMeshesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CSGMeshesTool",
               &Z_Registration_Info_UClass_UCSGMeshesTool.InnerSingleton,
               StaticRegisterNativesUCSGMeshesTool,0x188,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCSGMeshesTool>,
               InternalVTableHelperCtorCaller<UCSGMeshesTool>,local_res8,
               UBaseCreateFromSelectedTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCSGMeshesTool.InnerSingleton;
}

// KeepCollisionFrom @ 14cc62680

bool __thiscall UCSGMeshesTool::KeepCollisionFrom(UCSGMeshesTool *this,int param_1)

{
  ECSGOperation EVar1;
  
  if (this->bTrimMode != false) {
    return (uint)((this->TrimProperties).field0_0x0.DebugPtr)->WhichMesh == param_1;
  }
  EVar1 = ((this->CSGProperties).field0_0x0.DebugPtr)->Operation;
  if (EVar1 == DifferenceAB) {
    return param_1 == 0;
  }
  if (EVar1 == DifferenceBA) {
    return param_1 == 1;
  }
  return true;
}

// MakeNewOperator @ 14cc63c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UCSGMeshesTool::MakeNewOperator(UCSGMeshesTool *this)

{
  int *piVar1;
  TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  FBooleanMeshesOp *pFVar10;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FDynamicMeshOperator *in_RDX;
  int iVar15;
  int *piVar16;
  undefined1 auStackY_198 [32];
  undefined8 local_158;
  FSharedReferencer<1> local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  FDynamicMeshOperator *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_f8 = in_RDX;
  pFVar10 = ::operator_new(0xd8);
  if (pFVar10 == (FBooleanMeshesOp *)0x0) {
    pFVar10 = (FBooleanMeshesOp *)0x0;
  }
  else {
    memset(pFVar10,0,0xd8);
    pFVar10 = UE::Geometry::FBooleanMeshesOp::FBooleanMeshesOp(pFVar10);
  }
  pFVar10->bTrimMode = SUB81(this->_padding_,0);
  if ((char)this->_padding_ == '\0') {
    pFVar10->WindingThreshold = (double)*(float *)(this->_padding_ + 0xb4);
    pFVar10->CSGOperation = *(ECSGOperation *)(this->_padding_ + 0xb0);
    pFVar10->bAttemptFixHoles = *(bool *)(this->_padding_ + 0xb1);
    uVar7 = *(undefined1 *)(this->_padding_ + 0xb2);
  }
  else {
    pFVar10->WindingThreshold = (double)*(float *)(this->_padding_ + 0xb4);
    pFVar10->TrimOperation = *(ETrimOperation *)(this->_padding_ + 0xb0);
    uVar7 = false;
    pFVar10->TrimSide = *(ETrimSide *)(this->_padding_ + 0xb1);
    pFVar10->bAttemptFixHoles = false;
  }
  pFVar10->bTryCollapseExtraEdges = (bool)uVar7;
  if (((int)this->_padding_ != 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalDynamicMeshes.Num() == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\CSGMeshesTool.cpp"
                         ,0x13a,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  if ((this[-1].CreatedBoundaryEdges.ArrayNum != 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Targets.Num() == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\CSGMeshesTool.cpp"
                         ,0x13b,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  pTVar2 = &pFVar10->Transforms;
  iVar15 = (pFVar10->Transforms).ArrayNum;
  piVar1 = &(pFVar10->Transforms).ArrayNum;
  if (iVar15 < 2) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,2 - iVar15,&pTVar2->AllocatorInstance,piVar1,
                       &(pFVar10->Transforms).ArrayMax);
    DefaultConstructItems<UE::Geometry::TTransformSRT3<double>,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x50,2 - iVar15);
  }
  else if (2 < iVar15) {
    iVar15 = iVar15 + -2;
    if (iVar15 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar11.Ptr;
      }
    }
    else if (iVar15 == 0) goto LAB_14cc63e80;
    pFVar13 = (pTVar2->AllocatorInstance).Data + 0xa0;
    iVar9 = (*piVar1 - iVar15) + -2;
    if (iVar9 != 0) {
      memmove(pFVar13,pFVar13 + (longlong)iVar15 * 0x50,(longlong)iVar9 * 0x50);
    }
    *piVar1 = *piVar1 - iVar15;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,&pTVar2->AllocatorInstance,*piVar1,&(pFVar10->Transforms).ArrayMax);
  }
LAB_14cc63e80:
  this_00 = &pFVar10->Meshes;
  iVar15 = (pFVar10->Meshes).ArrayNum;
  if (iVar15 < 2) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,2 - iVar15,&this_00->AllocatorInstance,&(pFVar10->Meshes).ArrayNum,
                       &(pFVar10->Meshes).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x10,0,(longlong)(2 - iVar15) << 4)
    ;
  }
  else if (2 < iVar15) {
    iVar15 = iVar15 + -2;
    if (iVar15 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar11.Ptr;
      }
    }
    else if (iVar15 == 0) goto LAB_14cc63f52;
    TArray<TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl(this_00,2,iVar15);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this_00->AllocatorInstance,(pFVar10->Meshes).ArrayNum,
               &(pFVar10->Meshes).ArrayMax);
  }
LAB_14cc63f52:
  piVar16 = &(pFVar10->Meshes).ArrayNum;
  if (((int)this->_padding_ < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  local_150.ReferenceController = (TReferenceControllerBase<1> *)((undefined8 *)this->_padding_)[1];
  uVar3 = *(undefined8 *)this->_padding_;
  if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_150.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_150.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158 = uVar3;
  if ((*piVar16 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  pFVar13 = (this_00->AllocatorInstance).Data;
  if (pFVar13 != (FScriptContainerElement *)&local_158) {
    *(undefined8 *)pFVar13 = uVar3;
    local_158 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar13 + 8),&local_150);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.ReferenceController);
  if (((int)this->_padding_ < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  puVar12 = (undefined8 *)
            (**(code **)(**(longlong **)this->_padding_ + 0x2c0))
                      (*(longlong **)this->_padding_,local_b8);
  local_148 = *puVar12;
  uStack_140 = puVar12[1];
  local_138 = puVar12[2];
  uStack_130 = puVar12[3];
  uVar3 = puVar12[4];
  uVar6 = puVar12[5];
  local_118 = puVar12[6];
  uStack_100 = puVar12[10];
  uStack_110 = puVar12[8];
  uStack_108 = puVar12[9];
  local_128 = uVar3;
  uStack_120 = uVar6;
  local_f0 = uVar3;
  uStack_e8 = uVar6;
  local_e0 = local_118;
  local_d8 = uStack_110;
  uStack_d0 = uStack_108;
  local_c8 = uStack_100;
  if ((*piVar1 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  pFVar13 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)pFVar13 = local_148;
  *(undefined8 *)(pFVar13 + 8) = uStack_140;
  *(undefined8 *)(pFVar13 + 0x10) = local_138;
  *(undefined8 *)(pFVar13 + 0x18) = uStack_130;
  *(undefined8 *)(pFVar13 + 0x20) = uVar3;
  *(undefined8 *)(pFVar13 + 0x28) = uVar6;
  *(undefined8 *)(pFVar13 + 0x30) = local_118;
  *(undefined8 *)(pFVar13 + 0x38) = uStack_110;
  *(undefined8 *)(pFVar13 + 0x40) = uStack_108;
  *(undefined8 *)(pFVar13 + 0x48) = uStack_100;
  if (((int)this->_padding_ < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  local_150.ReferenceController = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x18);
  uVar3 = *(undefined8 *)(this->_padding_ + 0x10);
  if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_150.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_150.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158 = uVar3;
  if ((*piVar16 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  pFVar13 = (this_00->AllocatorInstance).Data;
  pFVar14 = pFVar13 + 0x10;
  if (pFVar14 != (FScriptContainerElement *)&local_158) {
    *(undefined8 *)pFVar14 = uVar3;
    local_158 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar13 + 0x18),&local_150);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.ReferenceController);
  if (((int)this->_padding_ < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  plVar4 = *(longlong **)(this->_padding_ + 8);
  puVar12 = (undefined8 *)(**(code **)(*plVar4 + 0x2c0))(plVar4,local_b8);
  local_148 = *puVar12;
  uStack_140 = puVar12[1];
  local_138 = puVar12[2];
  uStack_130 = puVar12[3];
  uVar3 = puVar12[4];
  uVar6 = puVar12[5];
  local_118 = puVar12[6];
  uStack_100 = puVar12[10];
  uStack_110 = puVar12[8];
  uStack_108 = puVar12[9];
  if ((*piVar1 < 2) &&
     (local_128 = uVar3, uStack_120 = uVar6, local_f0 = uVar3, uStack_e8 = uVar6,
     local_e0 = local_118, local_d8 = uStack_110, uStack_d0 = uStack_108, local_c8 = uStack_100,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar11.Ptr;
  }
  pFVar13 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar13 + 0x50) = local_148;
  *(undefined8 *)(pFVar13 + 0x58) = uStack_140;
  *(undefined8 *)(pFVar13 + 0x60) = local_138;
  *(undefined8 *)(pFVar13 + 0x68) = uStack_130;
  *(undefined8 *)(pFVar13 + 0x70) = uVar3;
  *(undefined8 *)(pFVar13 + 0x78) = uVar6;
  *(undefined8 *)(pFVar13 + 0x80) = local_118;
  *(undefined8 *)(pFVar13 + 0x88) = uStack_110;
  *(undefined8 *)(pFVar13 + 0x90) = uStack_108;
  *(undefined8 *)(pFVar13 + 0x98) = uStack_100;
  local_f8->_padding_ = (longlong)pFVar10;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )local_f8;
}

// OnPropertyModified @ 14cc67a50

void __thiscall
UCSGMeshesTool::OnPropertyModified(UCSGMeshesTool *this,UObject *param_1,FProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FName *pFVar4;
  longlong *plVar5;
  FText *pFVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName local_res18;
  FName local_res20;
  FName local_38;
  FName local_30;
  FText local_28;
  
  if (param_2 != (FProperty *)0x0) {
    pFVar4 = ::FName::FName(&local_res18,0x16,L"bUseFirstMeshMaterials",FNAME_Add);
    FVar8 = *pFVar4;
    bVar2 = IsThisNotNull(param_2,"FField::GetFName");
    FVar9.ComparisonIndex.Value = 0;
    FVar9.Number = 0;
    FVar7 = FVar9;
    if (bVar2) {
      FVar7 = (FName)param_2->_padding_;
    }
    if (FVar7 == FVar8) {
      cVar3 = (**(code **)(this->_padding_ + 0x398))(this);
      if (cVar3 != '\0') {
        (**(code **)(this->_padding_ + 0x3b8))(this,0);
        UMeshOpPreviewWithBackgroundCompute::InvalidateResult
                  ((UMeshOpPreviewWithBackgroundCompute *)this->_padding_);
        return;
      }
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
      pcVar1 = *(code **)(*plVar5 + 0x360);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"UCSGMeshesTool",L"InvalidTargets",
                          L"Target meshes are no longer valid");
      (*pcVar1)(plVar5,pFVar6,3);
      if (local_28.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return;
    }
    pFVar4 = ::FName::FName(&local_res18,0x12,L"bShowNewBoundaries",FNAME_Add);
    FVar8 = *pFVar4;
    bVar2 = IsThisNotNull(param_2,"FField::GetFName");
    FVar7 = FVar9;
    if (bVar2) {
      FVar7 = (FName)param_2->_padding_;
    }
    if (FVar7 == FVar8) {
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*plVar5 + 0x368))(plVar5);
      UpdateVisualization(this);
      return;
    }
    if (this->bTrimMode == false) {
      pFVar4 = ::FName::FName(&local_res18,0x13,L"bShowSubtractedMesh",FNAME_Add);
      FVar8 = *pFVar4;
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar7 = FVar9;
      if (bVar2) {
        FVar7 = (FName)param_2->_padding_;
      }
      if (FVar7 == FVar8) {
        return;
      }
      pFVar4 = ::FName::FName(&local_res18,0x13,L"SubtractedMeshColor",FNAME_Add);
      FVar8 = *pFVar4;
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar7 = FVar9;
      if (bVar2) {
        FVar7 = (FName)param_2->_padding_;
      }
      if (FVar7 == FVar8) {
        return;
      }
      pFVar4 = ::FName::FName(&local_res18,0x15,L"SubtractedMeshOpacity",FNAME_Add);
      FVar8 = *pFVar4;
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar7 = FVar9;
      if (bVar2) {
        FVar7 = (FName)param_2->_padding_;
      }
      if (FVar7 == FVar8) {
        return;
      }
      pFVar4 = ::FName::FName(&local_res20,"R");
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar8 = FVar9;
      if (bVar2) {
        FVar8 = (FName)param_2->_padding_;
      }
      if (FVar8 == *pFVar4) {
        return;
      }
      pFVar4 = ::FName::FName((FName *)&local_28,"G");
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar8 = FVar9;
      if (bVar2) {
        FVar8 = (FName)param_2->_padding_;
      }
      if (FVar8 == *pFVar4) {
        return;
      }
      pFVar4 = ::FName::FName(&local_30,"B");
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar8 = FVar9;
      if (bVar2) {
        FVar8 = (FName)param_2->_padding_;
      }
      if (FVar8 == *pFVar4) {
        return;
      }
      pFVar4 = ::FName::FName(&local_38,"A");
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      if (bVar2) {
        FVar9 = (FName)param_2->_padding_;
      }
      if (FVar9 == *pFVar4) {
        return;
      }
    }
    else {
      pFVar4 = ::FName::FName(&local_res18,0x11,L"bShowTrimmingMesh",FNAME_Add);
      FVar8 = *pFVar4;
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar7 = FVar9;
      if (bVar2) {
        FVar7 = (FName)param_2->_padding_;
      }
      if (FVar7 == FVar8) {
        return;
      }
      pFVar4 = ::FName::FName(&local_res18,0x15,L"OpacityOfTrimmingMesh",FNAME_Add);
      FVar8 = *pFVar4;
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar7 = FVar9;
      if (bVar2) {
        FVar7 = (FName)param_2->_padding_;
      }
      if (FVar7 == FVar8) {
        return;
      }
      pFVar4 = ::FName::FName(&local_res18,0x13,L"ColorOfTrimmingMesh",FNAME_Add);
      FVar8 = *pFVar4;
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar7 = FVar9;
      if (bVar2) {
        FVar7 = (FName)param_2->_padding_;
      }
      if (FVar7 == FVar8) {
        return;
      }
      pFVar4 = ::FName::FName(&local_res20,"R");
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar8 = FVar9;
      if (bVar2) {
        FVar8 = (FName)param_2->_padding_;
      }
      if (FVar8 == *pFVar4) {
        return;
      }
      pFVar4 = ::FName::FName(&local_38,"G");
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar8 = FVar9;
      if (bVar2) {
        FVar8 = (FName)param_2->_padding_;
      }
      if (FVar8 == *pFVar4) {
        return;
      }
      pFVar4 = ::FName::FName(&local_30,"B");
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar8 = FVar9;
      if (bVar2) {
        FVar8 = (FName)param_2->_padding_;
      }
      if (FVar8 == *pFVar4) {
        return;
      }
      pFVar4 = ::FName::FName((FName *)&local_28,"A");
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      if (bVar2) {
        FVar9 = (FName)param_2->_padding_;
      }
      if (FVar9 == *pFVar4) {
        return;
      }
    }
  }
  UBaseCreateFromSelectedTool::OnPropertyModified
            ((UBaseCreateFromSelectedTool *)this,param_1,param_2);
  return;
}

// OnShutdown @ 14cc68390

void __thiscall UCSGMeshesTool::OnShutdown(UCSGMeshesTool *this,EToolShutdownType param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPreviewMesh *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UBaseCreateFromSelectedTool::OnShutdown((UBaseCreateFromSelectedTool *)this,param_1);
  pFVar3 = (this->OriginalMeshPreviews).AllocatorInstance.Data;
  iVar2 = (this->OriginalMeshPreviews).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->OriginalMeshPreviews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPreviewMesh>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = *(UPreviewMesh **)pFVar3;
    UPreviewMesh::SetVisible(this_00,false);
    UPreviewMesh::Disconnect(this_00);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SaveProperties @ 14cc748e0

void __thiscall UCSGMeshesTool::SaveProperties(UCSGMeshesTool *this)

{
  code *pcVar1;
  UCSGMeshesToolProperties *pUVar2;
  FString local_18;
  
  if (this->bTrimMode == false) {
    pUVar2 = (this->CSGProperties).field0_0x0.DebugPtr;
  }
  else {
    pUVar2 = (UCSGMeshesToolProperties *)(this->TrimProperties).field0_0x0.DebugPtr;
  }
  pcVar1 = *(code **)(pUVar2->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar1)(pUVar2,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetPreviewCallbacks @ 14cc75a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCSGMeshesTool::SetPreviewCallbacks(UCSGMeshesTool *this)

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
  ::AddLambda<_UCSGMeshesTool::SetPreviewCallbacks_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)(this->_padding_ + 0x48),&local_res10);
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_UCSGMeshesTool::SetPreviewCallbacks_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)(this->_padding_ + 0x28),(<lambda_2> *)&local_res10);
  return;
}

// SetupProperties @ 14cc7f3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCSGMeshesTool::SetupProperties(UCSGMeshesTool *this)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  UClass *pUVar4;
  UTrimMeshesToolProperties *pUVar5;
  void *pvVar6;
  TPropertyWatcher<ETrimOperation> *pTVar7;
  FText *pFVar8;
  longlong *plVar9;
  UCSGMeshesToolProperties *pUVar10;
  TPropertyWatcher<ECSGOperation> *pTVar11;
  undefined ***pppuVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 auStack_138 [32];
  code *local_118 [2];
  undefined **local_108;
  UCSGMeshesTool *local_100;
  undefined ***local_f0;
  FText local_e8;
  code *local_d8 [2];
  code *local_c8 [3];
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_100 = this;
  local_a8._8_8_ = this;
  if (this->bTrimMode == false) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = UCSGMeshesToolProperties::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar4);
    pUVar10 = (UCSGMeshesToolProperties *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar9 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UCSGMeshesToolProperties *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->CSGProperties).field0_0x0.DebugPtr = pUVar10;
    pcVar2 = *(code **)(pUVar10->_padding_ + 0x2b8);
    ::FString::FString((FString *)&local_e8,L"");
    (*pcVar2)(pUVar10,this,&local_e8);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_e8.TextData.Reference);
    }
    (**(code **)(this->_padding_ + 0x318))(this,(this->CSGProperties).field0_0x0.DebugPtr);
    pUVar10 = (this->CSGProperties).field0_0x0.DebugPtr;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCSGMeshesTool::SetupProperties'::`7'::<lambda_5>,0,0>::
                 _vftable_;
    pTVar11 = (TPropertyWatcher<ECSGOperation> *)0x0;
    local_f0 = (undefined ***)0x0;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCSGMeshesTool::SetupProperties'::__l7::<lambda_5>,void,enum_ECSGOperation_const_&>
                   ::Call;
    pvVar6 = ::operator_new(0xa0);
    if (pvVar6 != (void *)0x0) {
      local_d8[0] = local_118[0];
      local_b0 = 0;
      if (local_118[0] != (code *)0x0) {
        pppuVar12 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar12 = local_f0;
        }
        (*(code *)**pppuVar12)(pppuVar12,local_d8 + 2);
      }
      pTVar11 = FWatchablePropertySet::TPropertyWatcher<enum_ECSGOperation>::
                TPropertyWatcher<enum_ECSGOperation><enum_ECSGOperation,void>
                          (pvVar6,&pUVar10->Operation,
                           (TFunction<void___cdecl(ECSGOperation_const_&)> *)local_d8);
    }
    iVar3 = (int)pUVar10->_padding_;
    piVar1 = (int *)((longlong)&pUVar10->_padding_ + 4);
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&pUVar10->_padding_,piVar1);
    }
    *(int *)&pUVar10->_padding_ = iVar3 + 1;
    *(TPropertyWatcher<ECSGOperation> **)(pUVar10->_padding_ + (longlong)iVar3 * 8) = pTVar11;
    if (local_118[0] != (code *)0x0) {
      pppuVar12 = &local_108;
      if (local_f0 != (undefined ***)0x0) {
        pppuVar12 = local_f0;
      }
      (*(code *)(*pppuVar12)[2])();
    }
    pUVar10 = (this->CSGProperties).field0_0x0.DebugPtr;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCSGMeshesTool::SetupProperties'::`7'::<lambda_6>,0,0>::
                 _vftable_;
    local_f0 = (undefined ***)0x0;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCSGMeshesTool::SetupProperties'::__l7::<lambda_6>,void,bool_const_&>
                   ::Call;
    local_100 = this;
    FWatchablePropertySet::WatchProperty<bool>
              ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->bShowSubtractedMesh,
               (TFunction<void___cdecl(bool_const_&)> *)local_118);
    pUVar10 = (this->CSGProperties).field0_0x0.DebugPtr;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCSGMeshesTool::SetupProperties'::`7'::<lambda_7>,0,0>::
                 _vftable_;
    local_f0 = (undefined ***)0x0;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCSGMeshesTool::SetupProperties'::__l7::<lambda_7>,void,FLinearColor_const_&>
                   ::Call;
    local_100 = this;
    FWatchablePropertySet::WatchProperty<FLinearColor>
              ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->SubtractedMeshColor,
               (TFunction<void___cdecl(FLinearColor_const_&)> *)local_118);
    pUVar10 = (this->CSGProperties).field0_0x0.DebugPtr;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCSGMeshesTool::SetupProperties'::`7'::<lambda_8>,0,0>::
                 _vftable_;
    local_f0 = (undefined ***)0x0;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCSGMeshesTool::SetupProperties'::__l7::<lambda_8>,void,float_const_&>
                   ::Call;
    local_100 = this;
    FWatchablePropertySet::WatchProperty<float>
              ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->SubtractedMeshOpacity,
               (TFunction<void___cdecl(float_const_&)> *)local_118);
    pcVar2 = *(code **)(this->_padding_ + 0x380);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_e8,L"UCSGMeshesTool",L"CSGMeshesToolName",L"Mesh Boolean");
    (*pcVar2)(this,pFVar8);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pwVar14 = 
    L"Perform Boolean operations on the input meshes; any interior faces will be removed. Use the transform gizmos to modify the position and orientation of the input objects."
    ;
    pwVar13 = L"OnStartTool";
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = UTrimMeshesToolProperties::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar4);
    pUVar5 = (UTrimMeshesToolProperties *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar9 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UTrimMeshesToolProperties *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->TrimProperties).field0_0x0.DebugPtr = pUVar5;
    pcVar2 = *(code **)(pUVar5->_padding_ + 0x2b8);
    ::FString::FString((FString *)&local_e8,L"");
    (*pcVar2)(pUVar5,this,&local_e8);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_e8.TextData.Reference);
    }
    (**(code **)(this->_padding_ + 0x318))(this,(this->TrimProperties).field0_0x0.DebugPtr);
    pUVar5 = (this->TrimProperties).field0_0x0.DebugPtr;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCSGMeshesTool::SetupProperties'::`5'::<lambda_1>,0,0>::
                 _vftable_;
    pTVar7 = (TPropertyWatcher<ETrimOperation> *)0x0;
    local_f0 = (undefined ***)0x0;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCSGMeshesTool::SetupProperties'::__l5::<lambda_1>,void,enum_ETrimOperation_const_&>
                   ::Call;
    pvVar6 = ::operator_new(0xa0);
    if (pvVar6 != (void *)0x0) {
      local_d8[0] = local_118[0];
      local_b0 = 0;
      if (local_118[0] != (code *)0x0) {
        pppuVar12 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar12 = local_f0;
        }
        (*(code *)**pppuVar12)(pppuVar12,local_d8 + 2);
      }
      pTVar7 = FWatchablePropertySet::TPropertyWatcher<enum_ETrimOperation>::
               TPropertyWatcher<enum_ETrimOperation><enum_ETrimOperation,void>
                         (pvVar6,&pUVar5->WhichMesh,
                          (TFunction<void___cdecl(ETrimOperation_const_&)> *)local_d8);
    }
    iVar3 = (int)pUVar5->_padding_;
    piVar1 = (int *)((longlong)&pUVar5->_padding_ + 4);
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&pUVar5->_padding_,piVar1);
    }
    *(int *)&pUVar5->_padding_ = iVar3 + 1;
    *(TPropertyWatcher<ETrimOperation> **)(pUVar5->_padding_ + (longlong)iVar3 * 8) = pTVar7;
    if (local_118[0] != (code *)0x0) {
      pppuVar12 = &local_108;
      if (local_f0 != (undefined ***)0x0) {
        pppuVar12 = local_f0;
      }
      (*(code *)(*pppuVar12)[2])();
    }
    pUVar5 = (this->TrimProperties).field0_0x0.DebugPtr;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCSGMeshesTool::SetupProperties'::`5'::<lambda_2>,0,0>::
                 _vftable_;
    local_f0 = (undefined ***)0x0;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCSGMeshesTool::SetupProperties'::__l5::<lambda_2>,void,bool_const_&>
                   ::Call;
    local_100 = this;
    FWatchablePropertySet::WatchProperty<bool>
              ((FWatchablePropertySet *)&pUVar5->_padding_,&pUVar5->bShowTrimmingMesh,
               (TFunction<void___cdecl(bool_const_&)> *)local_118);
    pUVar5 = (this->TrimProperties).field0_0x0.DebugPtr;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCSGMeshesTool::SetupProperties'::`5'::<lambda_3>,0,0>::
                 _vftable_;
    local_f0 = (undefined ***)0x0;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCSGMeshesTool::SetupProperties'::__l5::<lambda_3>,void,FLinearColor_const_&>
                   ::Call;
    local_100 = this;
    FWatchablePropertySet::WatchProperty<FLinearColor>
              ((FWatchablePropertySet *)&pUVar5->_padding_,&pUVar5->ColorOfTrimmingMesh,
               (TFunction<void___cdecl(FLinearColor_const_&)> *)local_118);
    pUVar5 = (this->TrimProperties).field0_0x0.DebugPtr;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCSGMeshesTool::SetupProperties'::`5'::<lambda_4>,0,0>::
                 _vftable_;
    local_f0 = (undefined ***)0x0;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCSGMeshesTool::SetupProperties'::__l5::<lambda_4>,void,float_const_&>
                   ::Call;
    local_100 = this;
    FWatchablePropertySet::WatchProperty<float>
              ((FWatchablePropertySet *)&pUVar5->_padding_,&pUVar5->OpacityOfTrimmingMesh,
               (TFunction<void___cdecl(float_const_&)> *)local_118);
    pcVar2 = *(code **)(this->_padding_ + 0x380);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_e8,L"UCSGMeshesTool",L"TrimMeshesToolName",L"Trim");
    (*pcVar2)(this,pFVar8);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pwVar14 = 
    L"Trim one mesh with another. Use the transform gizmos to tweak the positions of the input objects (can help to resolve errors/failures)"
    ;
    pwVar13 = L"OnStartTrimTool";
  }
  pcVar2 = *(code **)(*plVar9 + 0x360);
  pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_e8,L"UCSGMeshesTool",pwVar13,pwVar14);
  (*pcVar2)(plVar9,pFVar8,2);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return;
}

// StaticRegisterNativesUCSGMeshesTool @ 14cc82290

void __cdecl UCSGMeshesTool::StaticRegisterNativesUCSGMeshesTool(void)

{
  return;
}

// UpdatePreviewsMaterial @ 14cc860e0

void __thiscall UCSGMeshesTool::UpdatePreviewsMaterial(UCSGMeshesTool *this)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UInteractiveToolManager *pUVar4;
  UMaterialInstanceDynamic *pUVar5;
  UCSGMeshesToolProperties *pUVar6;
  FName *pFVar7;
  FName local_res8;
  FLinearColor_u_0 local_38 [3];
  
  pUVar5 = (this->PreviewsGhostMaterial).field0_0x0.DebugPtr;
  if (pUVar5 == (UMaterialInstanceDynamic *)0x0) {
    pUVar4 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pUVar5 = ToolSetupUtil::GetSimpleCustomMaterial(pUVar4,&FLinearColor::Black,__real_3e4ccccd);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->PreviewsGhostMaterial).field0_0x0.DebugPtr = pUVar5;
  }
  if (this->bTrimMode == false) {
    pUVar6 = (this->CSGProperties).field0_0x0.DebugPtr;
  }
  else {
    pUVar6 = (UCSGMeshesToolProperties *)(this->TrimProperties).field0_0x0.DebugPtr;
  }
  uVar2 = *(undefined8 *)&(pUVar6->SubtractedMeshColor).field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&(pUVar6->SubtractedMeshColor).field0_0x0 + 8);
  fVar1 = pUVar6->SubtractedMeshOpacity;
  pFVar7 = ::FName::FName(&local_res8,L"Color");
  local_38[0]._0_8_ = uVar2;
  local_38[0]._8_8_ = uVar3;
  UMaterialInstanceDynamic::SetVectorParameterValue
            (pUVar5,*pFVar7,(FLinearColor *)&local_38[0]._s_0);
  pUVar5 = (this->PreviewsGhostMaterial).field0_0x0.DebugPtr;
  pFVar7 = ::FName::FName(&local_res8,L"Opacity");
  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar5,*pFVar7,fVar1);
  return;
}

// UpdatePreviewsVisibility @ 14cc861e0

void __thiscall UCSGMeshesTool::UpdatePreviewsVisibility(UCSGMeshesTool *this)

{
  ECSGOperation EVar1;
  UTrimMeshesToolProperties *pUVar2;
  UCSGMeshesToolProperties *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar8 = 0;
  uVar7 = 0xffffffff;
  if (this->bTrimMode == false) {
    pUVar3 = (this->CSGProperties).field0_0x0.DebugPtr;
    if (pUVar3->bShowSubtractedMesh != false) {
      EVar1 = pUVar3->Operation;
      if (EVar1 == DifferenceAB) {
        uVar7 = (this->OriginalMeshPreviews).ArrayNum - 1;
      }
      else {
        uVar7 = 0xffffffff;
        if (EVar1 == DifferenceBA) {
          uVar7 = 0;
        }
      }
    }
  }
  else {
    pUVar2 = (this->TrimProperties).field0_0x0.DebugPtr;
    if ((pUVar2->bShowTrimmingMesh != false) && (uVar7 = 0, pUVar2->WhichMesh == TrimA)) {
      uVar7 = (this->OriginalMeshPreviews).ArrayNum - 1;
    }
  }
  uVar10 = uVar8;
  if (0 < (this->OriginalMeshPreviews).ArrayNum) {
    do {
      uVar9 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar9 < (this->OriginalMeshPreviews).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UPreviewMesh::SetVisible
                (*(UPreviewMesh **)((this->OriginalMeshPreviews).AllocatorInstance.Data + uVar10),
                 uVar7 == uVar9);
      uVar8 = (ulonglong)(uVar9 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar9 + 1) < (this->OriginalMeshPreviews).ArrayNum);
  }
  return;
}

// UpdateVisualization @ 14cc88910

void __thiscall UCSGMeshesTool::UpdateVisualization(UCSGMeshesTool *this)

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
  
  pFVar8 = UPreviewMesh::GetMesh(*(UPreviewMesh **)(this->_padding_ + 0x68));
  ULineSetComponent::Clear((this->DrawnLineSet).field0_0x0.DebugPtr);
  if ((this->bTrimMode == false) &&
     (((this->CSGProperties).field0_0x0.DebugPtr)->bShowNewBoundaries != false)) {
    iVar4 = (this->CreatedBoundaryEdges).ArrayNum;
    pFVar10 = (this->CreatedBoundaryEdges).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar4 * 4;
    while( true ) {
      if ((this->CreatedBoundaryEdges).ArrayNum != iVar4) {
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
  }
  return;
}

