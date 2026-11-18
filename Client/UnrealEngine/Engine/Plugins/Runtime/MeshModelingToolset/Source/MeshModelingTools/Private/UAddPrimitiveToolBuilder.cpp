// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbd1af0

UClass * __cdecl UAddPrimitiveToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddPrimitiveToolBuilder",
               &Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.InnerSingleton,
               StaticRegisterNativesUAddPrimitiveToolBuilder,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddPrimitiveToolBuilder>,
               InternalVTableHelperCtorCaller<UAddPrimitiveToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.InnerSingleton;
}

// UAddPrimitiveToolBuilder @ 14cbdc4f0

UAddPrimitiveToolBuilder * __thiscall
UAddPrimitiveToolBuilder::UAddPrimitiveToolBuilder
          (UAddPrimitiveToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  this->ShapeType = Box;
  this->_padding_ = (longlong)&___7UAddPrimitiveToolBuilder__6B_;
  return this;
}

// UAddPrimitiveToolBuilder @ 14cbdc520

UAddPrimitiveToolBuilder * __thiscall
UAddPrimitiveToolBuilder::UAddPrimitiveToolBuilder
          (UAddPrimitiveToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  this->ShapeType = Box;
  this->_padding_ = (longlong)&___7UAddPrimitiveToolBuilder__6B_;
  return this;
}

// ~UAddPrimitiveToolBuilder @ 14cbdff30

void __thiscall UAddPrimitiveToolBuilder::~UAddPrimitiveToolBuilder(UAddPrimitiveToolBuilder *this)

{
  this->_padding_ = (longlong)&___7UAddPrimitiveToolBuilder__6B_;
  UInteractiveToolBuilder::~UInteractiveToolBuilder((UInteractiveToolBuilder *)this);
  return;
}

// BuildTool @ 14cbe6cd0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInteractiveTool * __thiscall
UAddPrimitiveToolBuilder::BuildTool(UAddPrimitiveToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UClass *pUVar2;
  UInteractiveTool *pUVar3;
  longlong *plVar4;
  undefined1 auStack_538 [32];
  undefined1 local_518 [128];
  undefined1 local_498 [128];
  undefined1 local_418 [128];
  undefined1 local_398 [128];
  undefined1 local_318 [128];
  undefined1 local_298 [128];
  undefined1 local_218 [128];
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_538;
  pUVar3 = (UInteractiveTool *)0x0;
  switch(this->ShapeType) {
  case Box:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddBoxPrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_518,pUVar2);
    local_518._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_518);
    if (local_518._64_8_ != 0) {
      plVar4 = (longlong *)(local_518 + 0x50);
      if ((longlong *)local_518._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_518._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    break;
  case Cylinder:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddCylinderPrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_498,pUVar2);
    local_498._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_498);
    if (local_498._64_8_ != 0) {
      plVar4 = (longlong *)(local_498 + 0x50);
      if ((longlong *)local_498._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_498._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    break;
  case Cone:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddConePrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_418,pUVar2);
    local_418._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_418);
    if (local_418._64_8_ != 0) {
      plVar4 = (longlong *)(local_418 + 0x50);
      if ((longlong *)local_418._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_418._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    break;
  case Arrow:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddArrowPrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_398,pUVar2);
    local_398._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_398);
    if (local_398._64_8_ != 0) {
      plVar4 = (longlong *)(local_398 + 0x50);
      if ((longlong *)local_398._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_398._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    break;
  case Rectangle:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddRectanglePrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_318,pUVar2);
    local_318._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_318);
    if (local_318._64_8_ != 0) {
      plVar4 = (longlong *)(local_318 + 0x50);
      if ((longlong *)local_318._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_318._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    break;
  case Disc:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddDiscPrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_298,pUVar2);
    local_298._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_298);
    if (local_298._64_8_ != 0) {
      plVar4 = (longlong *)(local_298 + 0x50);
      if ((longlong *)local_298._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_298._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    break;
  case Torus:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddTorusPrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_218,pUVar2);
    local_218._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_218);
    if (local_218._64_8_ != 0) {
      plVar4 = (longlong *)(local_218 + 0x50);
      if ((longlong *)local_218._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_218._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    break;
  case Sphere:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddSpherePrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_198,pUVar2);
    local_198._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_198);
    if (local_198._64_8_ != 0) {
      plVar4 = (longlong *)(local_198 + 0x50);
      if ((longlong *)local_198._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_198._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    break;
  case Stairs:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddStairsPrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_118,pUVar2);
    local_118._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
    if (local_118._64_8_ != 0) {
      plVar4 = (longlong *)(local_118 + 0x50);
      if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_118._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    break;
  case Capsule:
    pUVar1 = param_1->ToolManager;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAddCapsulePrimitiveTool::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar3 = (UInteractiveTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  (**(code **)(pUVar3->_padding_ + 0x398))(pUVar3,param_1->World);
  return pUVar3;
}

// CanBuildTool @ 14cbe8410

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
UAddPrimitiveToolBuilder::CanBuildTool(UAddPrimitiveToolBuilder *this,FToolBuilderState *param_1)

{
  return true;
}

// GetPrivateStaticClass @ 14cbeec00

UClass * __cdecl UAddPrimitiveToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddPrimitiveToolBuilder",
               &Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.InnerSingleton,
               StaticRegisterNativesUAddPrimitiveToolBuilder,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddPrimitiveToolBuilder>,
               InternalVTableHelperCtorCaller<UAddPrimitiveToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.InnerSingleton;
}

// StaticRegisterNativesUAddPrimitiveToolBuilder @ 14cbf6a10

void __cdecl UAddPrimitiveToolBuilder::StaticRegisterNativesUAddPrimitiveToolBuilder(void)

{
  return;
}

