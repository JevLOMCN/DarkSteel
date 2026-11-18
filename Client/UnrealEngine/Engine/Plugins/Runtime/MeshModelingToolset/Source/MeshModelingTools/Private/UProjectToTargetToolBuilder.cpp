// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cc8fc10

UClass * __cdecl UProjectToTargetToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProjectToTargetToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProjectToTargetToolBuilder",
               &Z_Registration_Info_UClass_UProjectToTargetToolBuilder.InnerSingleton,
               StaticRegisterNativesUProjectToTargetToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProjectToTargetToolBuilder>,
               InternalVTableHelperCtorCaller<UProjectToTargetToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProjectToTargetToolBuilder.InnerSingleton;
}

// UProjectToTargetToolBuilder @ 14ccbf400

UProjectToTargetToolBuilder * __thiscall
UProjectToTargetToolBuilder::UProjectToTargetToolBuilder
          (UProjectToTargetToolBuilder *this,FVTableHelper *param_1)

{
  UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UProjectToTargetToolBuilder__6B_;
  return this;
}

// UProjectToTargetToolBuilder @ 14ccbf430

UProjectToTargetToolBuilder * __thiscall
UProjectToTargetToolBuilder::UProjectToTargetToolBuilder
          (UProjectToTargetToolBuilder *this,FObjectInitializer *param_1)

{
  UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UProjectToTargetToolBuilder__6B_;
  return this;
}

// ~UProjectToTargetToolBuilder @ 14ccc4b10

void __thiscall
UProjectToTargetToolBuilder::~UProjectToTargetToolBuilder(UProjectToTargetToolBuilder *this)

{
  *(undefined ***)this = &___7UProjectToTargetToolBuilder__6B_;
  UMultiSelectionMeshEditingToolBuilder::~UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this);
  return;
}

// CanBuildTool @ 14ccebe90

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
UProjectToTargetToolBuilder::CanBuildTool
          (UProjectToTargetToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  pUVar1 = param_1->TargetManager;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2d8);
  uVar4 = (**(code **)(*(longlong *)this + 0x2d0))();
  iVar3 = (*pcVar2)(pUVar1,param_1,uVar4);
  return iVar3 == 2;
}

// CreateNewTool @ 14ccf5a70

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
UProjectToTargetToolBuilder::CreateNewTool
          (UProjectToTargetToolBuilder *this,FToolBuilderState *param_1)

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
  pUVar2 = UProjectToTargetTool::StaticClass();
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

// GetPrivateStaticClass @ 14cd011b0

UClass * __cdecl UProjectToTargetToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProjectToTargetToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProjectToTargetToolBuilder",
               &Z_Registration_Info_UClass_UProjectToTargetToolBuilder.InnerSingleton,
               StaticRegisterNativesUProjectToTargetToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProjectToTargetToolBuilder>,
               InternalVTableHelperCtorCaller<UProjectToTargetToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProjectToTargetToolBuilder.InnerSingleton;
}

// StaticRegisterNativesUProjectToTargetToolBuilder @ 14cd2f280

void __cdecl UProjectToTargetToolBuilder::StaticRegisterNativesUProjectToTargetToolBuilder(void)

{
  return;
}

