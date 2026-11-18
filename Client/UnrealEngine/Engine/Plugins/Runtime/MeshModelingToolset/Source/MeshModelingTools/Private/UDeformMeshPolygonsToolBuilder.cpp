// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc04c30

UClass * __cdecl UDeformMeshPolygonsToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DeformMeshPolygonsToolBuilder",
               &Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.InnerSingleton,
               StaticRegisterNativesUDeformMeshPolygonsToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeformMeshPolygonsToolBuilder>,
               InternalVTableHelperCtorCaller<UDeformMeshPolygonsToolBuilder>,local_res8,
               UMeshSurfacePointMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.InnerSingleton;
}

// UDeformMeshPolygonsToolBuilder @ 14cc1cc30

UDeformMeshPolygonsToolBuilder * __thiscall
UDeformMeshPolygonsToolBuilder::UDeformMeshPolygonsToolBuilder
          (UDeformMeshPolygonsToolBuilder *this,FVTableHelper *param_1)

{
  UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UDeformMeshPolygonsToolBuilder__6B_;
  return this;
}

// UDeformMeshPolygonsToolBuilder @ 14cc1cc60

UDeformMeshPolygonsToolBuilder * __thiscall
UDeformMeshPolygonsToolBuilder::UDeformMeshPolygonsToolBuilder
          (UDeformMeshPolygonsToolBuilder *this,FObjectInitializer *param_1)

{
  UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UDeformMeshPolygonsToolBuilder__6B_;
  return this;
}

// ~UDeformMeshPolygonsToolBuilder @ 14cc22790

void __thiscall
UDeformMeshPolygonsToolBuilder::~UDeformMeshPolygonsToolBuilder
          (UDeformMeshPolygonsToolBuilder *this)

{
  *(undefined ***)this = &___7UDeformMeshPolygonsToolBuilder__6B_;
  UMeshSurfacePointMeshEditingToolBuilder::~UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this);
  return;
}

// CreateNewTool @ 14cc51c10

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
UDeformMeshPolygonsToolBuilder::CreateNewTool
          (UDeformMeshPolygonsToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UClass *pUVar2;
  UMeshSurfacePointTool *this_00;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = param_1->ToolManager;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UDeformMeshPolygonsTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this_00 = (UMeshSurfacePointTool *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UMeshSurfacePointTool::SetWorld(this_00,param_1->World);
  return this_00;
}

// GetPrivateStaticClass @ 14cc5be70

UClass * __cdecl UDeformMeshPolygonsToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DeformMeshPolygonsToolBuilder",
               &Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.InnerSingleton,
               StaticRegisterNativesUDeformMeshPolygonsToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeformMeshPolygonsToolBuilder>,
               InternalVTableHelperCtorCaller<UDeformMeshPolygonsToolBuilder>,local_res8,
               UMeshSurfacePointMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.InnerSingleton;
}

// StaticRegisterNativesUDeformMeshPolygonsToolBuilder @ 14cc82300

void __cdecl
UDeformMeshPolygonsToolBuilder::StaticRegisterNativesUDeformMeshPolygonsToolBuilder(void)

{
  return;
}

