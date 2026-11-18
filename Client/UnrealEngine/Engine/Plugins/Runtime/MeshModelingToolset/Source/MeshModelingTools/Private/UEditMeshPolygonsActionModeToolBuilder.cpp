// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cc03600

UClass * __cdecl UEditMeshPolygonsActionModeToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsActionModeToolBuilder",
               &Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsActionModeToolBuilder,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsActionModeToolBuilder>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsActionModeToolBuilder>,local_res8,
               UEditMeshPolygonsToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder.InnerSingleton;
}

// UEditMeshPolygonsActionModeToolBuilder @ 14cc1ef80

UEditMeshPolygonsActionModeToolBuilder * __thiscall
UEditMeshPolygonsActionModeToolBuilder::UEditMeshPolygonsActionModeToolBuilder
          (UEditMeshPolygonsActionModeToolBuilder *this,FVTableHelper *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEditMeshPolygonsActionModeToolBuilder__6B_;
  this->StartupAction = Extrude;
  return this;
}

// UEditMeshPolygonsActionModeToolBuilder @ 14cc1efc0

UEditMeshPolygonsActionModeToolBuilder * __thiscall
UEditMeshPolygonsActionModeToolBuilder::UEditMeshPolygonsActionModeToolBuilder
          (UEditMeshPolygonsActionModeToolBuilder *this,FObjectInitializer *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEditMeshPolygonsActionModeToolBuilder__6B_;
  this->StartupAction = Extrude;
  return this;
}

// ~UEditMeshPolygonsActionModeToolBuilder @ 14cc230e0

void __thiscall
UEditMeshPolygonsActionModeToolBuilder::~UEditMeshPolygonsActionModeToolBuilder
          (UEditMeshPolygonsActionModeToolBuilder *this)

{
  this->_padding_ = (longlong)&___7UEditMeshPolygonsToolBuilder__6B_;
  USingleTargetWithSelectionToolBuilder::~USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this);
  return;
}

// operator() @ 14cc2a490

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
`UEditMeshPolygonsActionModeToolBuilder::InitializeNewTool'::__l2::<lambda_1>::operator()
          (void *this,UEditMeshPolygonsTool *param_1)

{
  UEditMeshPolygonsToolActions *pUVar1;
  UEditMeshPolygonsToolEdgeActions *pUVar2;
  UEditMeshPolygonsToolUVActions *pUVar3;
  
  pUVar1 = (param_1->EditActions).field0_0x0.DebugPtr;
  if (pUVar1 != (UEditMeshPolygonsToolActions *)0x0) {
    (**(code **)(param_1->_padding_ + 0x338))(param_1,pUVar1,0);
  }
  pUVar2 = (param_1->EditEdgeActions).field0_0x0.DebugPtr;
  if (pUVar2 != (UEditMeshPolygonsToolEdgeActions *)0x0) {
    (**(code **)(param_1->_padding_ + 0x338))(param_1,pUVar2,0);
  }
  pUVar3 = (param_1->EditUVActions).field0_0x0.DebugPtr;
  if (pUVar3 != (UEditMeshPolygonsToolUVActions *)0x0) {
    (**(code **)(param_1->_padding_ + 0x338))(param_1,pUVar3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014cc2a503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x3f0))(param_1,*(undefined4 *)this);
  return;
}

// CanBuildTool @ 14cc479d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UEditMeshPolygonsActionModeToolBuilder::CanBuildTool
          (UEditMeshPolygonsActionModeToolBuilder *this,FToolBuilderState *param_1)

{
  EEditMeshPolygonsToolActions EVar1;
  bool bVar2;
  int iVar3;
  UContextObjectStore *this_00;
  UGeometrySelectionManager *pUVar4;
  int iVar5;
  char local_res18 [8];
  int local_res20 [2];
  int local_18;
  undefined1 local_14 [12];
  
  bVar2 = USingleTargetWithSelectionToolBuilder::CanBuildTool
                    ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  if (!bVar2) {
    return false;
  }
  this_00 = UInteractiveToolManager::GetContextObjectStore(param_1->ToolManager);
  pUVar4 = UContextObjectStore::FindContext<UGeometrySelectionManager>(this_00);
  if (pUVar4 == (UGeometrySelectionManager *)0x0) {
    return false;
  }
  local_18 = 1;
  local_res20[0] = 4;
  local_res18[0] = '\0';
  (**(code **)(pUVar4->_padding_ + 0x390))(pUVar4,&local_18,local_res20,local_14,local_res18);
  iVar3 = (**(code **)(pUVar4->_padding_ + 0x2f0))();
  iVar5 = 2;
  if (iVar3 != 0) {
    iVar5 = local_18;
  }
  EVar1 = this->StartupAction;
  if (((EVar1 == Extrude) || (EVar1 - PushPull < 4)) || (EVar1 == CutFaces)) {
    if (iVar5 != 2) {
      return false;
    }
    bVar2 = local_res20[0] == 4;
  }
  else {
    if (EVar1 == BevelAuto) {
      if (iVar5 != 2) {
        return false;
      }
      if (local_res20[0] == 1) {
        return false;
      }
      goto LAB_14cc47ac9;
    }
    if (EVar1 != ExtrudeEdges) {
      if ((EVar1 != SimplifyByGroups) && (1 < EVar1 - InsertEdge)) {
        return false;
      }
      return iVar5 == 2;
    }
    bVar2 = local_res20[0] == 2;
  }
  if (!bVar2) {
    return false;
  }
LAB_14cc47ac9:
  return local_res18[0] == '\0';
}

// GetPrivateStaticClass @ 14cc5ce30

UClass * __cdecl UEditMeshPolygonsActionModeToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsActionModeToolBuilder",
               &Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsActionModeToolBuilder,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsActionModeToolBuilder>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsActionModeToolBuilder>,local_res8,
               UEditMeshPolygonsToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder.InnerSingleton;
}

// InitializeNewTool @ 14cc608d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEditMeshPolygonsActionModeToolBuilder::InitializeNewTool
          (UEditMeshPolygonsActionModeToolBuilder *this,USingleTargetWithSelectionTool *param_1,
          FToolBuilderState *param_2)

{
  EEditMeshPolygonsToolActions EVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  UContextObjectStore *this_00;
  UGeometrySelectionManager *pUVar6;
  UClass *pUVar7;
  UEditMeshPolygonsTool *pUVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  UEditMeshPolygonsToolBuilder::InitializeNewTool
            ((UEditMeshPolygonsToolBuilder *)this,param_1,param_2);
  this_00 = UInteractiveToolManager::GetContextObjectStore(param_2->ToolManager);
  pUVar6 = UContextObjectStore::FindContext<UGeometrySelectionManager>(this_00);
  if (pUVar6 != (UGeometrySelectionManager *)0x0) {
    iVar5 = (**(code **)(pUVar6->_padding_ + 0x2f0))(pUVar6);
    if ((iVar5 == 1) && (param_1 != (USingleTargetWithSelectionTool *)0x0)) {
      pUVar7 = UEditMeshPolygonsTool::StaticClass();
      iVar5 = (int)pUVar7->_padding_;
      if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar7->_padding_)) {
        UEditMeshPolygonsTool::EnableTriangleMode((UEditMeshPolygonsTool *)param_1);
      }
    }
  }
  pUVar8 = CastChecked<UEditMeshPolygonsTool,USingleTargetWithSelectionTool>(param_1);
  EVar1 = this->StartupAction;
  local_58 = *(longlong *)&pUVar8->PostSetupFunction;
  uVar4 = *(undefined8 *)&(pUVar8->PostSetupFunction).field_0x8;
  local_48 = *(longlong *)&(pUVar8->PostSetupFunction).field_0x10;
  uStack_40 = *(undefined4 *)&(pUVar8->PostSetupFunction).field_0x18;
  uVar2 = *(undefined4 *)&(pUVar8->PostSetupFunction).field_0x1c;
  uVar3 = *(undefined8 *)&(pUVar8->PostSetupFunction).field_0x20;
  plStack_30 = *(longlong **)&(pUVar8->PostSetupFunction).field_0x28;
  *(code **)&pUVar8->PostSetupFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsActionModeToolBuilder::InitializeNewTool'::__l2::<lambda_1>,void,UEditMeshPolygonsTool_*>
       ::Call;
  *(undefined8 *)&(pUVar8->PostSetupFunction).field_0x8 = uStack_50;
  *(undefined4 *)&(pUVar8->PostSetupFunction).field_0x10 = 0x52952e00;
  *(undefined4 *)&(pUVar8->PostSetupFunction).field_0x14 = 1;
  *(EEditMeshPolygonsToolActions *)&(pUVar8->PostSetupFunction).field_0x18 = EVar1;
  *(undefined4 *)&(pUVar8->PostSetupFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(pUVar8->PostSetupFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(pUVar8->PostSetupFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(pUVar8->PostSetupFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar8->PostSetupFunction).field_0x2c = 0;
  uStack_3c = uVar2;
  local_38 = uVar3;
  if (local_58 != 0) {
    plVar9 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar9 = plStack_30;
    }
    uStack_50 = uVar4;
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// StaticRegisterNativesUEditMeshPolygonsActionModeToolBuilder @ 14cc824b0

void __cdecl
UEditMeshPolygonsActionModeToolBuilder::StaticRegisterNativesUEditMeshPolygonsActionModeToolBuilder
          (void)

{
  return;
}

