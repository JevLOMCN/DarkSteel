// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc8efb0

UClass * __cdecl URemoveOccludedTrianglesToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesToolBuilder",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder.InnerSingleton,
               StaticRegisterNativesURemoveOccludedTrianglesToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URemoveOccludedTrianglesToolBuilder>,
               InternalVTableHelperCtorCaller<URemoveOccludedTrianglesToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder.InnerSingleton;
}

// URemoveOccludedTrianglesToolBuilder @ 14ccbfdc0

URemoveOccludedTrianglesToolBuilder * __thiscall
URemoveOccludedTrianglesToolBuilder::URemoveOccludedTrianglesToolBuilder
          (URemoveOccludedTrianglesToolBuilder *this,FVTableHelper *param_1)

{
  UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7URemoveOccludedTrianglesToolBuilder__6B_;
  return this;
}

// URemoveOccludedTrianglesToolBuilder @ 14ccbfdf0

URemoveOccludedTrianglesToolBuilder * __thiscall
URemoveOccludedTrianglesToolBuilder::URemoveOccludedTrianglesToolBuilder
          (URemoveOccludedTrianglesToolBuilder *this,FObjectInitializer *param_1)

{
  UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7URemoveOccludedTrianglesToolBuilder__6B_;
  return this;
}

// ~URemoveOccludedTrianglesToolBuilder @ 14ccc4e40

void __thiscall
URemoveOccludedTrianglesToolBuilder::~URemoveOccludedTrianglesToolBuilder
          (URemoveOccludedTrianglesToolBuilder *this)

{
  *(undefined ***)this = &___7URemoveOccludedTrianglesToolBuilder__6B_;
  UMultiSelectionMeshEditingToolBuilder::~UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this);
  return;
}

// CreateNewTool @ 14ccf5c50

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

UMultiSelectionMeshEditingTool * __thiscall
URemoveOccludedTrianglesToolBuilder::CreateNewTool
          (URemoveOccludedTrianglesToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UClass *pUVar2;
  UMultiSelectionMeshEditingTool *pUVar3;
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
  pUVar2 = URemoveOccludedTrianglesTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UMultiSelectionMeshEditingTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 14cd01920

UClass * __cdecl URemoveOccludedTrianglesToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesToolBuilder",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder.InnerSingleton,
               StaticRegisterNativesURemoveOccludedTrianglesToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URemoveOccludedTrianglesToolBuilder>,
               InternalVTableHelperCtorCaller<URemoveOccludedTrianglesToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder.InnerSingleton;
}

// StaticRegisterNativesURemoveOccludedTrianglesToolBuilder @ 14cd2f320

void __cdecl
URemoveOccludedTrianglesToolBuilder::StaticRegisterNativesURemoveOccludedTrianglesToolBuilder(void)

{
  return;
}

