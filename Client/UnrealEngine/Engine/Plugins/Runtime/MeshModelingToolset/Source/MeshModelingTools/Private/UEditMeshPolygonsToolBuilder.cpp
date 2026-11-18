// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cc03040

UClass * __cdecl UEditMeshPolygonsToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolBuilder",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolBuilder>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder.InnerSingleton;
}

// UEditMeshPolygonsToolBuilder @ 14cc1fd80

UEditMeshPolygonsToolBuilder * __thiscall
UEditMeshPolygonsToolBuilder::UEditMeshPolygonsToolBuilder
          (UEditMeshPolygonsToolBuilder *this,FVTableHelper *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  this->bTriangleMode = false;
  this->_padding_ = (longlong)&___7UEditMeshPolygonsToolBuilder__6B_;
  return this;
}

// UEditMeshPolygonsToolBuilder @ 14cc1fdb0

UEditMeshPolygonsToolBuilder * __thiscall
UEditMeshPolygonsToolBuilder::UEditMeshPolygonsToolBuilder
          (UEditMeshPolygonsToolBuilder *this,FObjectInitializer *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  this->bTriangleMode = false;
  this->_padding_ = (longlong)&___7UEditMeshPolygonsToolBuilder__6B_;
  return this;
}

// ~UEditMeshPolygonsToolBuilder @ 14cc23310

void __thiscall
UEditMeshPolygonsToolBuilder::~UEditMeshPolygonsToolBuilder(UEditMeshPolygonsToolBuilder *this)

{
  this->_padding_ = (longlong)&___7UEditMeshPolygonsToolBuilder__6B_;
  USingleTargetWithSelectionToolBuilder::~USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this);
  return;
}

// CreateNewTool @ 14cc51e40

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
UEditMeshPolygonsToolBuilder::CreateNewTool
          (UEditMeshPolygonsToolBuilder *this,FToolBuilderState *param_1)

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
  pUVar2 = UEditMeshPolygonsTool::StaticClass();
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

// GetPrivateStaticClass @ 14cc5d2b0

UClass * __cdecl UEditMeshPolygonsToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolBuilder",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolBuilder>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder.InnerSingleton;
}

// InitializeNewTool @ 14cc60ba0

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
UEditMeshPolygonsToolBuilder::InitializeNewTool
          (UEditMeshPolygonsToolBuilder *this,USingleTargetWithSelectionTool *param_1,
          FToolBuilderState *param_2)

{
  code *pcVar1;
  bool bVar2;
  UEditMeshPolygonsTool *pUVar3;
  
  USingleTargetWithSelectionToolBuilder::InitializeNewTool
            ((USingleTargetWithSelectionToolBuilder *)this,param_1,param_2);
  pUVar3 = CastChecked<UEditMeshPolygonsTool,USingleTargetWithSelectionTool>(param_1);
  if (this->bTriangleMode != false) {
    if ((pUVar3->Preview).field0_0x0.DebugPtr != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Preview == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                         ,0x28b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pUVar3->bTriangleMode = true;
  }
  return;
}

// RequiresInputSelection @ 14cc73480

bool __thiscall
UEditMeshPolygonsToolBuilder::RequiresInputSelection(UEditMeshPolygonsToolBuilder *this)

{
  return false;
}

// StaticRegisterNativesUEditMeshPolygonsToolBuilder @ 14cc82570

void __cdecl UEditMeshPolygonsToolBuilder::StaticRegisterNativesUEditMeshPolygonsToolBuilder(void)

{
  return;
}

