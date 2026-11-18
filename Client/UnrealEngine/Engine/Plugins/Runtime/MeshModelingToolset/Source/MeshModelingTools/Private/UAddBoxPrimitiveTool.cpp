// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbd2970

UClass * __cdecl UAddBoxPrimitiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddBoxPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddBoxPrimitiveTool",
               &Z_Registration_Info_UClass_UAddBoxPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddBoxPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddBoxPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddBoxPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddBoxPrimitiveTool.InnerSingleton;
}

// UAddBoxPrimitiveTool @ 14cbdba00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddBoxPrimitiveTool * __thiscall
UAddBoxPrimitiveTool::UAddBoxPrimitiveTool(UAddBoxPrimitiveTool *this,FVTableHelper *param_1)

{
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  return this;
}

// UAddBoxPrimitiveTool @ 14cbdba60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddBoxPrimitiveTool * __thiscall
UAddBoxPrimitiveTool::UAddBoxPrimitiveTool(UAddBoxPrimitiveTool *this,FObjectInitializer *param_1)

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
  pUVar5 = UProceduralBoxToolProperties::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  ::FString::operator=((FString *)&this->field_0x110,L"Box");
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UAddPrimitiveTool",L"BoxToolName",L"Create Box");
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

// ~UAddBoxPrimitiveTool @ 14cbdfd10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddBoxPrimitiveTool::~UAddBoxPrimitiveTool(UAddBoxPrimitiveTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  return;
}

// GenerateMesh @ 14cbec760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UAddBoxPrimitiveTool::GenerateMesh(UAddBoxPrimitiveTool *this,FDynamicMesh3 *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  double dVar4;
  FGridBoxMeshGenerator local_118;
  
  UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator(&local_118);
  if (*(longlong *)&this->field_0xe8 != 0) {
    pUVar2 = UProceduralBoxToolProperties::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->field_0xe8,pUVar2);
    if (bVar1) {
      lVar3 = *(longlong *)&this->field_0xe8;
      goto LAB_14cbec7bd;
    }
  }
  lVar3 = 0;
LAB_14cbec7bd:
  local_118.Box.Frame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_118.Box.Frame.Origin.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_118.Box.Extents.field0_0x0._s_0.X =
       (double)*(float *)(lVar3 + 0xc4) * __real_3fe0000000000000;
  dVar4 = (double)*(float *)(lVar3 + 200) * __real_3fe0000000000000;
  local_118.Box.Frame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
  local_118.Box.Frame.Origin.field0_0x0._16_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  local_118.Box.Frame.Origin.field0_0x0._20_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  local_118.Box.Frame.Rotation.field0_0x0._0_4_ = 0;
  local_118.Box.Frame.Rotation.field0_0x0._4_4_ = 0;
  local_118.Box.Extents.field0_0x0._16_4_ = SUB84(dVar4,0);
  local_118.Box.Extents.field0_0x0._8_8_ =
       (double)*(float *)(lVar3 + 0xc0) * __real_3fe0000000000000;
  local_118.Box.Extents.field0_0x0._20_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_118.Box.Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  local_118.Box.Frame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_118.EdgeVertices.field0_0x0._s_0.A = *(int *)(lVar3 + 0xd0) + 1;
  local_118.EdgeVertices.field0_0x0._s_0.C = *(int *)(lVar3 + 0xd4) + 1;
  local_118.EdgeVertices.field0_0x0._s_0.B = *(int *)(lVar3 + 0xcc) + 1;
  local_118.bPolygroupPerQuad = *(char *)(*(longlong *)&this->field_0xe8 + 0xb0) == '\x02';
  UE::Geometry::FGridBoxMeshGenerator::Generate(&local_118);
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)&local_118);
  local_118._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return;
}

// GetPrivateStaticClass @ 14cbee780

UClass * __cdecl UAddBoxPrimitiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddBoxPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddBoxPrimitiveTool",
               &Z_Registration_Info_UClass_UAddBoxPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddBoxPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddBoxPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddBoxPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddBoxPrimitiveTool.InnerSingleton;
}

// StaticRegisterNativesUAddBoxPrimitiveTool @ 14cbf69b0

void __cdecl UAddBoxPrimitiveTool::StaticRegisterNativesUAddBoxPrimitiveTool(void)

{
  return;
}

