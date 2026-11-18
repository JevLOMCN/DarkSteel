// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cd427b0

UClass * __cdecl UWeldMeshEdgesToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesToolBuilder",
               &Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.InnerSingleton,
               StaticRegisterNativesUWeldMeshEdgesToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWeldMeshEdgesToolBuilder>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.InnerSingleton;
}

// UWeldMeshEdgesToolBuilder @ 14cd52400

UWeldMeshEdgesToolBuilder * __thiscall
UWeldMeshEdgesToolBuilder::UWeldMeshEdgesToolBuilder
          (UWeldMeshEdgesToolBuilder *this,FVTableHelper *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UWeldMeshEdgesToolBuilder__6B_;
  return this;
}

// UWeldMeshEdgesToolBuilder @ 14cd52430

UWeldMeshEdgesToolBuilder * __thiscall
UWeldMeshEdgesToolBuilder::UWeldMeshEdgesToolBuilder
          (UWeldMeshEdgesToolBuilder *this,FObjectInitializer *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UWeldMeshEdgesToolBuilder__6B_;
  return this;
}

// ~UWeldMeshEdgesToolBuilder @ 14cd53bb0

void __thiscall
UWeldMeshEdgesToolBuilder::~UWeldMeshEdgesToolBuilder(UWeldMeshEdgesToolBuilder *this)

{
  *(undefined ***)this = &___7UWeldMeshEdgesToolBuilder__6B_;
  USingleTargetWithSelectionToolBuilder::~USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this);
  return;
}

// CreateNewTool @ 14cd67e90

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

USingleTargetWithSelectionTool * __thiscall
UWeldMeshEdgesToolBuilder::CreateNewTool(UWeldMeshEdgesToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UClass *pUVar2;
  USingleTargetWithSelectionTool *pUVar3;
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
  pUVar2 = UWeldMeshEdgesTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (USingleTargetWithSelectionTool *)
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

// GetPrivateStaticClass @ 14cd6eec0

UClass * __cdecl UWeldMeshEdgesToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesToolBuilder",
               &Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.InnerSingleton,
               StaticRegisterNativesUWeldMeshEdgesToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWeldMeshEdgesToolBuilder>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.InnerSingleton;
}

// RequiresInputSelection @ 14cd7b190

bool __thiscall UWeldMeshEdgesToolBuilder::RequiresInputSelection(UWeldMeshEdgesToolBuilder *this)

{
  return false;
}

// StaticRegisterNativesUWeldMeshEdgesToolBuilder @ 14cd815d0

void __cdecl UWeldMeshEdgesToolBuilder::StaticRegisterNativesUWeldMeshEdgesToolBuilder(void)

{
  return;
}

