// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cc91de0

UClass * __cdecl UMeshVertexSculptToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexSculptToolBuilder",
               &Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshVertexSculptToolBuilder,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexSculptToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshVertexSculptToolBuilder>,local_res8,
               UMeshSurfacePointMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.InnerSingleton;
}

// UMeshVertexSculptToolBuilder @ 14ccbee60

UMeshVertexSculptToolBuilder * __thiscall
UMeshVertexSculptToolBuilder::UMeshVertexSculptToolBuilder
          (UMeshVertexSculptToolBuilder *this,FVTableHelper *param_1)

{
  UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this,param_1);
  this->DefaultPrimaryBrushID = -1;
  this->_padding_ = (longlong)&___7UMeshVertexSculptToolBuilder__6B_;
  return this;
}

// UMeshVertexSculptToolBuilder @ 14ccbee90

UMeshVertexSculptToolBuilder * __thiscall
UMeshVertexSculptToolBuilder::UMeshVertexSculptToolBuilder
          (UMeshVertexSculptToolBuilder *this,FObjectInitializer *param_1)

{
  UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this,param_1);
  this->DefaultPrimaryBrushID = -1;
  this->_padding_ = (longlong)&___7UMeshVertexSculptToolBuilder__6B_;
  return this;
}

// ~UMeshVertexSculptToolBuilder @ 14ccc49b0

void __thiscall
UMeshVertexSculptToolBuilder::~UMeshVertexSculptToolBuilder(UMeshVertexSculptToolBuilder *this)

{
  this->_padding_ = (longlong)&___7UMeshVertexSculptToolBuilder__6B_;
  UMeshSurfacePointMeshEditingToolBuilder::~UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this);
  return;
}

// CreateNewTool @ 14ccf5900

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

UMeshSurfacePointTool * __thiscall
UMeshVertexSculptToolBuilder::CreateNewTool
          (UMeshVertexSculptToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UClass *pUVar2;
  UMeshSurfacePointTool *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = param_1->ToolManager;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UMeshVertexSculptTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UMeshSurfacePointTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x408))(pUVar3,param_1->World);
  *(int *)&pUVar3[0x14]._padding_ = this->DefaultPrimaryBrushID;
  return pUVar3;
}

// GetPrivateStaticClass @ 14cd00c70

UClass * __cdecl UMeshVertexSculptToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexSculptToolBuilder",
               &Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshVertexSculptToolBuilder,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexSculptToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshVertexSculptToolBuilder>,local_res8,
               UMeshSurfacePointMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14cd029e0

FToolTargetTypeRequirements * __thiscall
UMeshVertexSculptToolBuilder::GetTargetRequirements(UMeshVertexSculptToolBuilder *this)

{
  return &VSculptTypeRequirements;
}

// StaticRegisterNativesUMeshVertexSculptToolBuilder @ 14cd2f210

void __cdecl UMeshVertexSculptToolBuilder::StaticRegisterNativesUMeshVertexSculptToolBuilder(void)

{
  return;
}

