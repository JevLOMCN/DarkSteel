// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbce310

UClass * __cdecl UAddSpherePrimitiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddSpherePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddSpherePrimitiveTool",
               &Z_Registration_Info_UClass_UAddSpherePrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddSpherePrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddSpherePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddSpherePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddSpherePrimitiveTool.InnerSingleton;
}

// UAddSpherePrimitiveTool @ 14cbdc700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddSpherePrimitiveTool * __thiscall
UAddSpherePrimitiveTool::UAddSpherePrimitiveTool
          (UAddSpherePrimitiveTool *this,FVTableHelper *param_1)

{
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  return this;
}

// UAddSpherePrimitiveTool @ 14cbdc760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddSpherePrimitiveTool * __thiscall
UAddSpherePrimitiveTool::UAddSpherePrimitiveTool
          (UAddSpherePrimitiveTool *this,FObjectInitializer *param_1)

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
  pUVar5 = UProceduralSphereToolProperties::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  ::FString::operator=((FString *)&this->field_0x110,L"Sphere");
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UAddPrimitiveTool",L"SphereToolName",L"Create Sphere");
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

// ~UAddSpherePrimitiveTool @ 14cbdffa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddSpherePrimitiveTool::~UAddSpherePrimitiveTool(UAddSpherePrimitiveTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  return;
}

// GenerateMesh @ 14cbed330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UAddSpherePrimitiveTool::GenerateMesh(UAddSpherePrimitiveTool *this,FDynamicMesh3 *param_1)

{
  undefined1 *this_00;
  bool bVar1;
  UClass *pUVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_168 [160];
  undefined1 local_c8 [24];
  TQuaternion<double>_u_0 TStack_b0;
  TVector<double>_u_0 TStack_90;
  FIndex3i_u_0 local_78;
  bool local_6b;
  float local_68;
  ESphereProjectionMethod local_64;
  undefined8 local_40;
  undefined8 uStack_38;
  double local_30;
  double dStack_28;
  
  this_00 = &this->field_0xe8;
  lVar4 = 0;
  if (*(longlong *)this_00 != 0) {
    pUVar2 = UProceduralSphereToolProperties::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      lVar4 = *(longlong *)this_00;
    }
  }
  if (*(int *)(lVar4 + 0xc4) == 0) {
    iVar3 = *(int *)(lVar4 + 0xcc) + 1;
    local_168._0_8_ = &___7FSphereGenerator_Geometry_UE__6B_;
    local_c8._0_8_ = (undefined8)*(float *)(lVar4 + 0xc0);
    local_168._8_8_ = (FScriptContainerElement *)0x0;
    local_168._16_8_ = 0;
    local_168._24_8_ = (FScriptContainerElement *)0x0;
    local_168._32_8_ = 0;
    local_168._40_8_ = (FScriptContainerElement *)0x0;
    local_168._48_8_ = 0;
    local_168._56_8_ = (FScriptContainerElement *)0x0;
    local_168._64_8_ = 0;
    local_168._72_8_ = (FScriptContainerElement *)0x0;
    local_168._80_8_ = 0;
    local_168._88_8_ = (FScriptContainerElement *)0x0;
    local_168._96_8_ = 0;
    local_168._104_8_ = (FScriptContainerElement *)0x0;
    local_168._112_8_ = 0;
    local_168._120_8_ = (FScriptContainerElement *)0x0;
    local_168._128_8_ = 0;
    local_168._136_8_ = (FScriptContainerElement *)0x0;
    local_168._144_8_ = 0;
    local_168[0x98] = false;
    local_c8[0x10] = *(char *)(*(longlong *)this_00 + 0xb0) != '\0';
    local_c8._8_4_ = 3;
    if (3 < iVar3) {
      local_c8._8_4_ = iVar3;
    }
    local_c8._12_4_ = 3;
    if (3 < *(int *)(lVar4 + 0xd0)) {
      local_c8._12_4_ = *(int *)(lVar4 + 0xd0);
    }
    iVar5 = (local_c8._8_4_ + -2) * local_c8._12_4_;
    iVar3 = iVar5 + 2;
    UE::Geometry::FMeshShapeGenerator::SetBufferSizes
              ((FMeshShapeGenerator *)local_168,iVar3,iVar5 * 2,
               (local_c8._12_4_ + 1) * (local_c8._8_4_ + -2) + local_c8._12_4_ * 2,iVar3);
    UE::Geometry::FSphereGenerator::GenerateVertices((FSphereGenerator *)local_168);
    UE::Geometry::FSphereGenerator::GenerateUVVertices((FSphereGenerator *)local_168);
    UE::Geometry::FSphereGenerator::OutputEquatorialTriangles((FSphereGenerator *)local_168);
    UE::Geometry::FSphereGenerator::OutputPolarTriangles((FSphereGenerator *)local_168);
  }
  else {
    if (*(int *)(lVar4 + 0xc4) != 1) {
      return;
    }
    UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator((FGridBoxMeshGenerator *)local_168);
    local_68 = *(float *)(lVar4 + 0xc0);
    local_168._0_8_ = &___7FBoxSphereGenerator_Geometry_UE__6B_;
    local_78._s_0.A = *(int *)(lVar4 + 200) + 1;
    local_64 = CubeMapping;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = ___xmm_3ff00000000000000000000000000000;
    dStack_28 = _UNK_15061cbc8;
    local_c8._16_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
    local_c8._20_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
    TStack_b0._0_4_ = 0;
    TStack_b0._4_4_ = 0;
    TStack_b0._s_0.Y = 0.0;
    TStack_b0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    TStack_90._s_0.X = (double)local_78._s_0.A * __real_3fe0000000000000;
    local_c8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_c8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    TStack_90._16_4_ = SUB84(TStack_90._s_0.X,0);
    TStack_90._8_8_ = TStack_90._s_0.X;
    TStack_90._20_4_ = (int)((ulonglong)TStack_90._s_0.X >> 0x20);
    TStack_b0._s_0.W = _UNK_15061cbc8;
    local_6b = *(char *)(*(longlong *)this_00 + 0xb0) == '\x02';
    local_78._s_0.B = local_78._s_0.A;
    local_78._s_0.C = local_78._s_0.A;
    UE::Geometry::FBoxSphereGenerator::Generate((FBoxSphereGenerator *)local_168);
  }
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)local_168);
  local_168._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_168._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._136_8_);
  }
  if ((FScriptContainerElement *)local_168._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._120_8_);
  }
  if ((FScriptContainerElement *)local_168._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._104_8_);
  }
  if ((FScriptContainerElement *)local_168._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._88_8_);
  }
  if ((FScriptContainerElement *)local_168._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._72_8_);
  }
  if ((FScriptContainerElement *)local_168._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._56_8_);
  }
  if ((FScriptContainerElement *)local_168._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._40_8_);
  }
  if ((FScriptContainerElement *)local_168._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._24_8_);
  }
  if ((FScriptContainerElement *)local_168._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._8_8_);
  }
  return;
}

// GetDefaultPolygroupMode @ 14cbee3a0

EMakeMeshPolygroupMode __thiscall
UAddSpherePrimitiveTool::GetDefaultPolygroupMode(UAddSpherePrimitiveTool *this)

{
  return PerFace;
}

// GetPrivateStaticClass @ 14cbeed80

UClass * __cdecl UAddSpherePrimitiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddSpherePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddSpherePrimitiveTool",
               &Z_Registration_Info_UClass_UAddSpherePrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddSpherePrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddSpherePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddSpherePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddSpherePrimitiveTool.InnerSingleton;
}

// StaticRegisterNativesUAddSpherePrimitiveTool @ 14cbf6a30

void __cdecl UAddSpherePrimitiveTool::StaticRegisterNativesUAddSpherePrimitiveTool(void)

{
  return;
}

