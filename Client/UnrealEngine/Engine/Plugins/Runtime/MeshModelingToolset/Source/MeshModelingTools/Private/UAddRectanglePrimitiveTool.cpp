// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbd2f90

UClass * __cdecl UAddRectanglePrimitiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddRectanglePrimitiveTool",
               &Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddRectanglePrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddRectanglePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddRectanglePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.InnerSingleton;
}

// UAddRectanglePrimitiveTool @ 14cbdc550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddRectanglePrimitiveTool * __thiscall
UAddRectanglePrimitiveTool::UAddRectanglePrimitiveTool
          (UAddRectanglePrimitiveTool *this,FVTableHelper *param_1)

{
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  return this;
}

// UAddRectanglePrimitiveTool @ 14cbdc5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddRectanglePrimitiveTool * __thiscall
UAddRectanglePrimitiveTool::UAddRectanglePrimitiveTool
          (UAddRectanglePrimitiveTool *this,FObjectInitializer *param_1)

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
  pUVar5 = UProceduralRectangleToolProperties::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  ::FString::operator=((FString *)&this->field_0x110,L"Rectangle");
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UAddPrimitiveTool",L"RectToolName",L"Create Rectangle");
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

// ~UAddRectanglePrimitiveTool @ 14cbdff50

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
UAddRectanglePrimitiveTool::~UAddRectanglePrimitiveTool(UAddRectanglePrimitiveTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  return;
}

// GenerateMesh @ 14cbed0b0

void __thiscall
UAddRectanglePrimitiveTool::GenerateMesh(UAddRectanglePrimitiveTool *this,FDynamicMesh3 *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 local_108 [240];
  double local_18;
  int local_10;
  
  if (*(longlong *)&this->field_0xe8 != 0) {
    pUVar2 = UProceduralRectangleToolProperties::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->field_0xe8,pUVar2);
    if (bVar1) {
      lVar3 = *(longlong *)&this->field_0xe8;
      goto LAB_14cbed104;
    }
  }
  lVar3 = 0;
LAB_14cbed104:
  if (*(int *)(lVar3 + 0xc0) == 0) {
    UE::Geometry::FRectangleMeshGenerator::FRectangleMeshGenerator
              ((FRectangleMeshGenerator *)local_108);
    local_108._216_4_ = *(int *)(lVar3 + 0xd0) + 1;
    local_108._220_4_ = *(int *)(lVar3 + 0xcc) + 1;
    local_108._200_8_ = (undefined8)*(float *)(lVar3 + 200);
    local_108._208_8_ = (undefined8)*(float *)(lVar3 + 0xc4);
    local_108[0xe1] = *(char *)(*(longlong *)&this->field_0xe8 + 0xb0) != '\x02';
    UE::Geometry::FRectangleMeshGenerator::Generate((FRectangleMeshGenerator *)local_108);
  }
  else {
    if (*(int *)(lVar3 + 0xc0) != 1) {
      return;
    }
    UE::Geometry::FRoundedRectangleMeshGenerator::FRoundedRectangleMeshGenerator
              ((FRoundedRectangleMeshGenerator *)local_108);
    local_108._200_8_ = (undefined8)*(float *)(lVar3 + 200);
    local_108._208_8_ = (undefined8)*(float *)(lVar3 + 0xc4);
    dVar5 = (double)*(float *)(lVar3 + 0xd8);
    local_18 = dVar5;
    if (*(char *)(lVar3 + 0xd4) != '\0') {
      dVar4 = (double)local_108._208_8_;
      if ((double)local_108._200_8_ <= (double)local_108._208_8_) {
        dVar4 = (double)local_108._200_8_;
      }
      local_18 = (dVar4 - __real_3f1a36e2eb1c432d) * __real_3fe0000000000000;
      if (dVar5 <= local_18) {
        local_18 = dVar5;
      }
      if (local_18 <= __real_3f0a36e2eb1c432d) {
        local_18 = __real_3f0a36e2eb1c432d;
      }
      local_108._200_8_ = (double)local_108._200_8_ - (local_18 + local_18);
      local_108._208_8_ = (double)local_108._208_8_ - (local_18 + local_18);
      if ((double)local_108._200_8_ <= __real_3f1a36e2eb1c432d) {
        local_108._200_8_ = __real_3f1a36e2eb1c432d;
      }
      if ((double)local_108._208_8_ <= __real_3f1a36e2eb1c432d) {
        local_108._208_8_ = __real_3f1a36e2eb1c432d;
      }
      if (local_18 != dVar5) {
        *(float *)(lVar3 + 0xd8) = (float)local_18;
        (**(code **)(*(longlong *)this + 0x340))(this,lVar3);
      }
    }
    local_108._216_4_ = *(int *)(lVar3 + 0xd0) + 1;
    local_108._220_4_ = *(int *)(lVar3 + 0xcc) + 1;
    local_108[0xe1] = *(char *)(*(longlong *)&this->field_0xe8 + 0xb0) != '\x02';
    local_10 = *(int *)(lVar3 + 0xdc) + -1;
    UE::Geometry::FRoundedRectangleMeshGenerator::Generate
              ((FRoundedRectangleMeshGenerator *)local_108);
  }
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)local_108);
  local_108._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_108._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._136_8_);
  }
  if ((FScriptContainerElement *)local_108._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._120_8_);
  }
  if ((FScriptContainerElement *)local_108._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._104_8_);
  }
  if ((FScriptContainerElement *)local_108._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._88_8_);
  }
  if ((FScriptContainerElement *)local_108._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._72_8_);
  }
  if ((FScriptContainerElement *)local_108._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._56_8_);
  }
  if ((FScriptContainerElement *)local_108._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._40_8_);
  }
  if ((FScriptContainerElement *)local_108._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._24_8_);
  }
  if ((FScriptContainerElement *)local_108._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._8_8_);
  }
  return;
}

// GetPrivateStaticClass @ 14cbeecc0

UClass * __cdecl UAddRectanglePrimitiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddRectanglePrimitiveTool",
               &Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddRectanglePrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddRectanglePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddRectanglePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.InnerSingleton;
}

// StaticRegisterNativesUAddRectanglePrimitiveTool @ 14cbf6a20

void __cdecl UAddRectanglePrimitiveTool::StaticRegisterNativesUAddRectanglePrimitiveTool(void)

{
  return;
}

