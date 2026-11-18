// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cc03740

UClass * __cdecl UEditMeshPolygonsSelectionModeToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsSelectionModeToolBuilder",
               &Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsSelectionModeToolBuilder,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsSelectionModeToolBuilder>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsSelectionModeToolBuilder>,local_res8,
               UEditMeshPolygonsToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder.InnerSingleton;
}

// UEditMeshPolygonsSelectionModeToolBuilder @ 14cc1f000

UEditMeshPolygonsSelectionModeToolBuilder * __thiscall
UEditMeshPolygonsSelectionModeToolBuilder::UEditMeshPolygonsSelectionModeToolBuilder
          (UEditMeshPolygonsSelectionModeToolBuilder *this,FVTableHelper *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEditMeshPolygonsSelectionModeToolBuilder__6B_;
  this->SelectionMode = Faces;
  return this;
}

// UEditMeshPolygonsSelectionModeToolBuilder @ 14cc1f040

UEditMeshPolygonsSelectionModeToolBuilder * __thiscall
UEditMeshPolygonsSelectionModeToolBuilder::UEditMeshPolygonsSelectionModeToolBuilder
          (UEditMeshPolygonsSelectionModeToolBuilder *this,FObjectInitializer *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEditMeshPolygonsSelectionModeToolBuilder__6B_;
  this->SelectionMode = Faces;
  return this;
}

// ~UEditMeshPolygonsSelectionModeToolBuilder @ 14cc23100

void __thiscall
UEditMeshPolygonsSelectionModeToolBuilder::~UEditMeshPolygonsSelectionModeToolBuilder
          (UEditMeshPolygonsSelectionModeToolBuilder *this)

{
  this->_padding_ = (longlong)&___7UEditMeshPolygonsToolBuilder__6B_;
  USingleTargetWithSelectionToolBuilder::~USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this);
  return;
}

// operator() @ 14cc2bdf0

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
`UEditMeshPolygonsSelectionModeToolBuilder::InitializeNewTool'::__l5::<lambda_1>::operator()
          (void *this,UEditMeshPolygonsTool *param_1)

{
  int iVar1;
  longlong lVar2;
  
  (**(code **)(param_1->_padding_ + 0x338))
            (param_1,(param_1->EditActions).field0_0x0.DebugPtr,
             *(char *)((longlong)this + 4) == '\0');
  (**(code **)(param_1->_padding_ + 0x338))
            (param_1,(param_1->EditEdgeActions).field0_0x0.DebugPtr,
             *(undefined1 *)((longlong)this + 4));
  (**(code **)(param_1->_padding_ + 0x338))
            (param_1,(param_1->EditUVActions).field0_0x0.DebugPtr,
             *(char *)((longlong)this + 4) == '\0');
  (**(code **)(param_1->_padding_ + 0x338))
            (param_1,(param_1->TopologyProperties).field0_0x0.DebugPtr,0);
  lVar2 = ((param_1->SelectionMechanic).field0_0x0.DebugPtr)->_padding_;
  *(undefined4 *)(lVar2 + 0xb0) = 0;
  *(undefined1 *)(lVar2 + 0xb4) = 0;
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined1 *)(lVar2 + 0xb1) = 1;
      goto LAB_14cc2beab;
    }
    if (iVar1 == 2) {
      *(undefined1 *)(lVar2 + 0xb0) = 1;
      goto LAB_14cc2beab;
    }
  }
  *(undefined1 *)(lVar2 + 0xb2) = 1;
LAB_14cc2beab:
                    /* WARNING: Could not recover jumptable at 0x00014cc2bebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x338))(param_1,lVar2,0);
  return;
}

// CanBuildTool @ 14cc47b00

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
UEditMeshPolygonsSelectionModeToolBuilder::CanBuildTool
          (UEditMeshPolygonsSelectionModeToolBuilder *this,FToolBuilderState *param_1)

{
  bool bVar1;
  int iVar2;
  UContextObjectStore *this_00;
  UGeometrySelectionManager *pUVar3;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_18;
  undefined1 local_14 [12];
  
  bVar1 = USingleTargetWithSelectionToolBuilder::CanBuildTool
                    ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  if (bVar1) {
    this_00 = UInteractiveToolManager::GetContextObjectStore(param_1->ToolManager);
    pUVar3 = UContextObjectStore::FindContext<UGeometrySelectionManager>(this_00);
    if (pUVar3 != (UGeometrySelectionManager *)0x0) {
      iVar2 = (**(code **)(pUVar3->_padding_ + 0x2f0))(pUVar3);
      if (iVar2 == 0) {
        return true;
      }
      local_res20[0] = 1;
      local_18 = 4;
      local_res18[0] = 0;
      (**(code **)(pUVar3->_padding_ + 0x390))(pUVar3,local_res20,&local_18,local_14,local_res18);
      if (local_res20[0] == 2) {
        return local_18 != 1;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14cc5cef0

UClass * __cdecl UEditMeshPolygonsSelectionModeToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsSelectionModeToolBuilder",
               &Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsSelectionModeToolBuilder,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsSelectionModeToolBuilder>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsSelectionModeToolBuilder>,local_res8,
               UEditMeshPolygonsToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder.InnerSingleton;
}

// InitializeNewTool @ 14cc60a10

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
UEditMeshPolygonsSelectionModeToolBuilder::InitializeNewTool
          (UEditMeshPolygonsSelectionModeToolBuilder *this,USingleTargetWithSelectionTool *param_1,
          FToolBuilderState *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  UEditMeshPolygonsTool *pUVar4;
  UContextObjectStore *this_00;
  UGeometrySelectionManager *pUVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_78 [4];
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 local_64 [12];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UEditMeshPolygonsToolBuilder::InitializeNewTool
            ((UEditMeshPolygonsToolBuilder *)this,param_1,param_2);
  pUVar4 = CastChecked<UEditMeshPolygonsTool,USingleTargetWithSelectionTool>(param_1);
  this_00 = UInteractiveToolManager::GetContextObjectStore(param_2->ToolManager);
  pUVar5 = UContextObjectStore::FindContext<UGeometrySelectionManager>(this_00);
  if (pUVar5 != (UGeometrySelectionManager *)0x0) {
    iVar3 = (**(code **)(pUVar5->_padding_ + 0x2f0))(pUVar5);
    if (iVar3 != 0) {
      local_88 = local_78;
      uVar8 = 1;
      local_70 = 4;
      local_74 = 1;
      local_78[0] = 0;
      (**(code **)(pUVar5->_padding_ + 0x390))(pUVar5,&local_74,&local_70,local_64);
      if (local_74 == 2) {
        uVar7 = 0;
        if (local_70 == 2) {
          uVar7 = 1;
        }
        else {
          uVar8 = 0;
          if (local_70 == 1) {
            uVar8 = 2;
          }
        }
        local_58 = *(longlong *)&pUVar4->PostSetupFunction;
        uVar2 = *(undefined8 *)&(pUVar4->PostSetupFunction).field_0x8;
        local_48 = *(longlong *)&(pUVar4->PostSetupFunction).field_0x10;
        uStack_40 = *(undefined8 *)&(pUVar4->PostSetupFunction).field_0x18;
        uVar1 = *(undefined8 *)&(pUVar4->PostSetupFunction).field_0x20;
        plStack_30 = *(longlong **)&(pUVar4->PostSetupFunction).field_0x28;
        uStack_68 = CONCAT31(uStack_68._1_3_,uVar7);
        *(code **)&pUVar4->PostSetupFunction =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UEditMeshPolygonsSelectionModeToolBuilder::InitializeNewTool'::__l5::<lambda_1>,void,UEditMeshPolygonsTool_*>
             ::Call;
        *(undefined8 *)&(pUVar4->PostSetupFunction).field_0x8 = uStack_50;
        *(undefined4 *)&(pUVar4->PostSetupFunction).field_0x10 = 0x52952e20;
        *(undefined4 *)&(pUVar4->PostSetupFunction).field_0x14 = 1;
        *(undefined4 *)&(pUVar4->PostSetupFunction).field_0x18 = uVar8;
        *(undefined4 *)&(pUVar4->PostSetupFunction).field_0x1c = uStack_68;
        *(undefined4 *)&(pUVar4->PostSetupFunction).field_0x20 = (undefined4)local_38;
        *(undefined4 *)&(pUVar4->PostSetupFunction).field_0x24 = local_38._4_4_;
        *(undefined4 *)&(pUVar4->PostSetupFunction).field_0x28 = 0;
        *(undefined4 *)&(pUVar4->PostSetupFunction).field_0x2c = 0;
        local_38 = uVar1;
        if (local_58 != 0) {
          plVar6 = &local_48;
          if (plStack_30 != (longlong *)0x0) {
            plVar6 = plStack_30;
          }
          local_6c = uVar8;
          uStack_50 = uVar2;
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesUEditMeshPolygonsSelectionModeToolBuilder @ 14cc824c0

void __cdecl
UEditMeshPolygonsSelectionModeToolBuilder::
StaticRegisterNativesUEditMeshPolygonsSelectionModeToolBuilder(void)

{
  return;
}

