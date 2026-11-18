// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbd2d50

UClass * __cdecl UAddConePrimitiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddConePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddConePrimitiveTool",
               &Z_Registration_Info_UClass_UAddConePrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddConePrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddConePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddConePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddConePrimitiveTool.InnerSingleton;
}

// UAddConePrimitiveTool @ 14cbdbd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddConePrimitiveTool * __thiscall
UAddConePrimitiveTool::UAddConePrimitiveTool(UAddConePrimitiveTool *this,FVTableHelper *param_1)

{
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  return this;
}

// UAddConePrimitiveTool @ 14cbdbdc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddConePrimitiveTool * __thiscall
UAddConePrimitiveTool::UAddConePrimitiveTool
          (UAddConePrimitiveTool *this,FObjectInitializer *param_1)

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
  pUVar5 = UProceduralConeToolProperties::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  ::FString::operator=((FString *)&this->field_0x110,L"Cone");
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UAddPrimitiveTool",L"ConeToolName",L"Create Cone");
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

// ~UAddConePrimitiveTool @ 14cbdfdb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddConePrimitiveTool::~UAddConePrimitiveTool(UAddConePrimitiveTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  return;
}

// GenerateMesh @ 14cbecb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAddConePrimitiveTool::GenerateMesh(UAddConePrimitiveTool *this,FDynamicMesh3 *param_1)

{
  undefined1 *this_00;
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [160];
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined4 local_40;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar3 = 0;
  local_77 = 1;
  this_00 = &this->field_0xe8;
  local_118._8_8_ = (FScriptContainerElement *)0x0;
  local_118._16_8_ = 0;
  local_118._24_8_ = (FScriptContainerElement *)0x0;
  local_118._32_8_ = 0;
  local_118._40_8_ = (FScriptContainerElement *)0x0;
  local_118._48_8_ = 0;
  local_118._56_8_ = (FScriptContainerElement *)0x0;
  local_118._64_8_ = 0;
  local_118._72_8_ = (FScriptContainerElement *)0x0;
  local_118._80_8_ = 0;
  local_118._88_8_ = (FScriptContainerElement *)0x0;
  local_118._96_8_ = 0;
  local_118._104_8_ = (FScriptContainerElement *)0x0;
  local_118._112_8_ = 0;
  local_118._120_8_ = (FScriptContainerElement *)0x0;
  local_118._128_8_ = 0;
  local_118._136_8_ = (FScriptContainerElement *)0x0;
  local_118._144_8_ = 0;
  local_118[0x98] = false;
  local_43 = 1;
  local_40 = 2;
  local_118._0_8_ = &___7FCylinderGenerator_Geometry_UE__6B_;
  if (*(longlong *)this_00 != 0) {
    pUVar2 = UProceduralConeToolProperties::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      lVar3 = *(longlong *)this_00;
    }
  }
  local_38 = *(float *)(lVar3 + 0xc0);
  local_34 = 0.01;
  local_30 = *(float *)(lVar3 + 0xc4);
  local_48 = *(undefined4 *)(lVar3 + 200);
  local_2c = *(int *)(lVar3 + 0xcc) + -1;
  local_44 = 1;
  local_78 = *(char *)(*(longlong *)this_00 + 0xb0) == '\x02';
  UE::Geometry::FCylinderGenerator::Generate((FCylinderGenerator *)local_118);
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)local_118);
  local_118._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_118._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._136_8_);
  }
  if ((FScriptContainerElement *)local_118._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._120_8_);
  }
  if ((FScriptContainerElement *)local_118._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._104_8_);
  }
  if ((FScriptContainerElement *)local_118._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._88_8_);
  }
  if ((FScriptContainerElement *)local_118._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._72_8_);
  }
  if ((FScriptContainerElement *)local_118._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._56_8_);
  }
  if ((FScriptContainerElement *)local_118._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._40_8_);
  }
  if ((FScriptContainerElement *)local_118._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._24_8_);
  }
  if ((FScriptContainerElement *)local_118._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._8_8_);
  }
  return;
}

// GetPrivateStaticClass @ 14cbee900

UClass * __cdecl UAddConePrimitiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddConePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddConePrimitiveTool",
               &Z_Registration_Info_UClass_UAddConePrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddConePrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddConePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddConePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddConePrimitiveTool.InnerSingleton;
}

// StaticRegisterNativesUAddConePrimitiveTool @ 14cbf69d0

void __cdecl UAddConePrimitiveTool::StaticRegisterNativesUAddConePrimitiveTool(void)

{
  return;
}

