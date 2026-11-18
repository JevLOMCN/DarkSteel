// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbd2bd0

UClass * __cdecl UAddCapsulePrimitiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddCapsulePrimitiveTool",
               &Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddCapsulePrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAddCapsulePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddCapsulePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.InnerSingleton;
}

// UAddCapsulePrimitiveTool @ 14cbdbbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddCapsulePrimitiveTool * __thiscall
UAddCapsulePrimitiveTool::UAddCapsulePrimitiveTool
          (UAddCapsulePrimitiveTool *this,FVTableHelper *param_1)

{
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  return this;
}

// UAddCapsulePrimitiveTool @ 14cbdbc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddCapsulePrimitiveTool * __thiscall
UAddCapsulePrimitiveTool::UAddCapsulePrimitiveTool
          (UAddCapsulePrimitiveTool *this,FObjectInitializer *param_1)

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
  pUVar5 = UProceduralCapsuleToolProperties::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  ::FString::operator=((FString *)&this->field_0x110,L"Capsule");
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UAddPrimitiveTool",L"CapsuleToolName",L"Create Capsule");
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

// ~UAddCapsulePrimitiveTool @ 14cbdfd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddCapsulePrimitiveTool::~UAddCapsulePrimitiveTool(UAddCapsulePrimitiveTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  return;
}

// GenerateMesh @ 14cbec940

void __thiscall
UAddCapsulePrimitiveTool::GenerateMesh(UAddCapsulePrimitiveTool *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  undefined1 *this_00;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_c8 [160];
  double local_28;
  double local_20;
  int local_18;
  int local_14;
  int local_10;
  bool local_c;
  
  lVar5 = 0;
  this_00 = &this->field_0xe8;
  local_c8._8_8_ = (FScriptContainerElement *)0x0;
  local_c8._16_8_ = 0;
  local_c8._24_8_ = (FScriptContainerElement *)0x0;
  local_c8._32_8_ = 0;
  local_c8._40_8_ = (FScriptContainerElement *)0x0;
  local_c8._48_8_ = 0;
  local_c8._56_8_ = (FScriptContainerElement *)0x0;
  local_c8._64_8_ = 0;
  local_c8._72_8_ = (FScriptContainerElement *)0x0;
  local_c8._80_8_ = 0;
  local_c8._88_8_ = (FScriptContainerElement *)0x0;
  local_c8._96_8_ = 0;
  local_c8._104_8_ = (FScriptContainerElement *)0x0;
  local_c8._112_8_ = 0;
  local_c8._120_8_ = (FScriptContainerElement *)0x0;
  local_c8._128_8_ = 0;
  local_c8._136_8_ = (FScriptContainerElement *)0x0;
  local_c8._144_8_ = 0;
  local_c8[0x98] = false;
  local_c8._0_8_ = &___7FCapsuleGenerator_Geometry_UE__6B_;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = UProceduralCapsuleToolProperties::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar3) {
      lVar5 = *(longlong *)this_00;
    }
  }
  local_28 = (double)*(float *)(lVar5 + 0xc0);
  local_20 = (double)*(float *)(lVar5 + 0xc4);
  local_10 = *(int *)(lVar5 + 0xd0);
  local_c = *(char *)(*(longlong *)this_00 + 0xb0) == '\x02';
  local_18 = 2;
  if (2 < *(int *)(lVar5 + 200)) {
    local_18 = *(int *)(lVar5 + 200);
  }
  local_14 = 3;
  if (3 < *(int *)(lVar5 + 0xcc)) {
    local_14 = *(int *)(lVar5 + 0xcc);
  }
  iVar2 = local_10 + (local_18 + -1) * 2;
  iVar6 = iVar2 * local_14;
  iVar1 = iVar6 + 2;
  UE::Geometry::FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)local_c8,iVar1,iVar6 * 2,(local_14 + 1) * iVar2 + local_14 * 2,
             iVar1);
  UE::Geometry::FCapsuleGenerator::GenerateVertices((FCapsuleGenerator *)local_c8);
  UE::Geometry::FCapsuleGenerator::GenerateUVVertices((FCapsuleGenerator *)local_c8);
  UE::Geometry::FCapsuleGenerator::OutputEquatorialTriangles((FCapsuleGenerator *)local_c8);
  UE::Geometry::FCapsuleGenerator::OutputPolarTriangles((FCapsuleGenerator *)local_c8);
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)local_c8);
  local_c8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_c8._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._136_8_);
  }
  if ((FScriptContainerElement *)local_c8._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._120_8_);
  }
  if ((FScriptContainerElement *)local_c8._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._104_8_);
  }
  if ((FScriptContainerElement *)local_c8._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._88_8_);
  }
  if ((FScriptContainerElement *)local_c8._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._72_8_);
  }
  if ((FScriptContainerElement *)local_c8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._56_8_);
  }
  if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._40_8_);
  }
  if ((FScriptContainerElement *)local_c8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._24_8_);
  }
  if ((FScriptContainerElement *)local_c8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  return;
}

// GetPrivateStaticClass @ 14cbee840

UClass * __cdecl UAddCapsulePrimitiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddCapsulePrimitiveTool",
               &Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddCapsulePrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAddCapsulePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddCapsulePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.InnerSingleton;
}

// StaticRegisterNativesUAddCapsulePrimitiveTool @ 14cbf69c0

void __cdecl UAddCapsulePrimitiveTool::StaticRegisterNativesUAddCapsulePrimitiveTool(void)

{
  return;
}

