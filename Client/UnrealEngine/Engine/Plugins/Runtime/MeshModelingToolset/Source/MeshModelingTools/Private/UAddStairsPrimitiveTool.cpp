// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbce490

UClass * __cdecl UAddStairsPrimitiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddStairsPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddStairsPrimitiveTool",
               &Z_Registration_Info_UClass_UAddStairsPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddStairsPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddStairsPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddStairsPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddStairsPrimitiveTool.InnerSingleton;
}

// UAddStairsPrimitiveTool @ 14cbdc8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddStairsPrimitiveTool * __thiscall
UAddStairsPrimitiveTool::UAddStairsPrimitiveTool
          (UAddStairsPrimitiveTool *this,FVTableHelper *param_1)

{
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  return this;
}

// UAddStairsPrimitiveTool @ 14cbdc910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddStairsPrimitiveTool * __thiscall
UAddStairsPrimitiveTool::UAddStairsPrimitiveTool
          (UAddStairsPrimitiveTool *this,FObjectInitializer *param_1)

{
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  pFVar4 = ::FName::FName(&local_res8,L"ShapeSettings");
  FVar1 = *pFVar4;
  pUVar5 = UProceduralStairsToolProperties::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  ::FString::operator=((FString *)&this->field_0x110,L"Stairs");
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UAddPrimitiveTool",L"StairsToolName",L"Create Stairs");
  pIVar2 = *(ITextData **)&this->field_0x98;
  pIVar3 = (pFVar6->TextData).Reference;
  if (pIVar2 != pIVar3) {
    *(ITextData **)&this->field_0x98 = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)&this->field_0xa0 = pFVar6->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UAddStairsPrimitiveTool @ 14cbdfff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddStairsPrimitiveTool::~UAddStairsPrimitiveTool(UAddStairsPrimitiveTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  return;
}

// GenerateMesh @ 14cbed620

void __thiscall
UAddStairsPrimitiveTool::GenerateMesh(UAddStairsPrimitiveTool *this,FDynamicMesh3 *param_1)

{
  undefined1 *this_00;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  undefined **ppuVar5;
  FStairGenerator local_178;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  float local_14;
  
  this_00 = &this->field_0xe8;
  if (*(longlong *)this_00 == 0) {
LAB_14cbed668:
    lVar4 = 0;
  }
  else {
    pUVar3 = UProceduralStairsToolProperties::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (!bVar2) goto LAB_14cbed668;
    lVar4 = *(longlong *)this_00;
  }
  iVar1 = *(int *)(lVar4 + 0xc0);
  if (iVar1 == 0) {
    UE::Geometry::FStairGenerator::FStairGenerator(&local_178);
    local_178.NumSteps = *(int *)(lVar4 + 0xc4);
    local_178.StepWidth = *(float *)(lVar4 + 200);
    local_178.StepHeight = *(float *)(lVar4 + 0xcc);
    local_38 = *(undefined4 *)(lVar4 + 0xd0);
    local_178._padding_ = (longlong)&___7FLinearStairGenerator_Geometry_UE__6B_;
    local_178.StairStyle = Solid;
    local_178.bPolygroupPerQuad = *(char *)(*(longlong *)this_00 + 0xb0) == '\x02';
    UE::Geometry::FStairGenerator::Generate(&local_178);
    UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)&local_178);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        UE::Geometry::FStairGenerator::FStairGenerator(&local_178);
        ppuVar5 = &___7FCurvedStairGenerator_Geometry_UE__6B_;
        local_178.StepWidth = *(float *)(lVar4 + 200);
        local_14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_178.NumSteps = *(int *)(lVar4 + 0xc4);
        local_1c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_178.StepHeight = *(float *)(lVar4 + 0xcc);
        local_34 = *(undefined4 *)(lVar4 + 0xd4);
        local_38 = *(undefined4 *)(lVar4 + 0xdc);
        local_178._padding_ = (longlong)&___7FCurvedStairGenerator_Geometry_UE__6B_;
        local_30 = 1;
        local_2c = 0;
        local_24 = 0;
        local_20 = 0x3f800000;
        local_178.StairStyle = Solid;
        local_178.bPolygroupPerQuad = *(char *)(*(longlong *)this_00 + 0xb0) == '\x02';
        UE::Geometry::FStairGenerator::Generate(&local_178);
        UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)&local_178);
      }
      else {
        if (iVar1 != 3) {
          return;
        }
        UE::Geometry::FStairGenerator::FStairGenerator(&local_178);
        local_178.StepWidth = *(float *)(lVar4 + 200);
        local_14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_178._padding_ = (longlong)&___7FSpiralStairGenerator_Geometry_UE__6B_;
        local_178.NumSteps = *(int *)(lVar4 + 0xc4);
        local_1c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_178.StepHeight = *(float *)(lVar4 + 0xcc);
        local_38 = *(undefined4 *)(lVar4 + 0xdc);
        local_34 = *(undefined4 *)(lVar4 + 0xd8);
        local_30 = 1;
        local_2c = 0;
        local_24 = 0;
        local_20 = 0x3f800000;
        local_178.StairStyle = Floating;
        local_178.bPolygroupPerQuad = *(char *)(*(longlong *)this_00 + 0xb0) == '\x02';
        UE::Geometry::FStairGenerator::Generate(&local_178);
        UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)&local_178);
        ppuVar5 = &___7FCurvedStairGenerator_Geometry_UE__6B_;
      }
      goto LAB_14cbed90c;
    }
    UE::Geometry::FStairGenerator::FStairGenerator(&local_178);
    local_178.StepWidth = *(float *)(lVar4 + 200);
    local_178.StepHeight = *(float *)(lVar4 + 0xcc);
    local_178._padding_ = (longlong)&___7FFloatingStairGenerator_Geometry_UE__6B_;
    local_178.NumSteps = *(int *)(lVar4 + 0xc4);
    local_38 = *(undefined4 *)(lVar4 + 0xd0);
    local_178.StairStyle = Floating;
    local_178.bPolygroupPerQuad = *(char *)(*(longlong *)this_00 + 0xb0) == '\x02';
    UE::Geometry::FStairGenerator::Generate(&local_178);
    UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)&local_178);
  }
  ppuVar5 = &___7FLinearStairGenerator_Geometry_UE__6B_;
LAB_14cbed90c:
  local_178._padding_ = (longlong)ppuVar5;
  UE::Geometry::FStairGenerator::~FStairGenerator(&local_178);
  return;
}

// GetPrivateStaticClass @ 14cbeee40

UClass * __cdecl UAddStairsPrimitiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddStairsPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddStairsPrimitiveTool",
               &Z_Registration_Info_UClass_UAddStairsPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddStairsPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddStairsPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddStairsPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddStairsPrimitiveTool.InnerSingleton;
}

// ShouldCenterXY @ 14cbf6710

bool __thiscall UAddStairsPrimitiveTool::ShouldCenterXY(UAddStairsPrimitiveTool *this)

{
  return true;
}

// StaticRegisterNativesUAddStairsPrimitiveTool @ 14cbf6a40

void __cdecl UAddStairsPrimitiveTool::StaticRegisterNativesUAddStairsPrimitiveTool(void)

{
  return;
}

