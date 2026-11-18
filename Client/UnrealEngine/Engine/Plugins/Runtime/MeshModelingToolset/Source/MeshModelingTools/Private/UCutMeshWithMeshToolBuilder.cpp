// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cc049e0

UClass * __cdecl UCutMeshWithMeshToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CutMeshWithMeshToolBuilder",
               &Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.InnerSingleton,
               StaticRegisterNativesUCutMeshWithMeshToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCutMeshWithMeshToolBuilder>,
               InternalVTableHelperCtorCaller<UCutMeshWithMeshToolBuilder>,local_res8,
               UBaseCreateFromSelectedToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.InnerSingleton;
}

// UCutMeshWithMeshToolBuilder @ 14cc1c500

UCutMeshWithMeshToolBuilder * __thiscall
UCutMeshWithMeshToolBuilder::UCutMeshWithMeshToolBuilder
          (UCutMeshWithMeshToolBuilder *this,FVTableHelper *param_1)

{
  UBaseCreateFromSelectedToolBuilder::UBaseCreateFromSelectedToolBuilder
            ((UBaseCreateFromSelectedToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UCutMeshWithMeshToolBuilder__6B_;
  return this;
}

// UCutMeshWithMeshToolBuilder @ 14cc1c530

UCutMeshWithMeshToolBuilder * __thiscall
UCutMeshWithMeshToolBuilder::UCutMeshWithMeshToolBuilder
          (UCutMeshWithMeshToolBuilder *this,FObjectInitializer *param_1)

{
  UBaseCreateFromSelectedToolBuilder::UBaseCreateFromSelectedToolBuilder
            ((UBaseCreateFromSelectedToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UCutMeshWithMeshToolBuilder__6B_;
  return this;
}

// ~UCutMeshWithMeshToolBuilder @ 14cc22630

void __thiscall
UCutMeshWithMeshToolBuilder::~UCutMeshWithMeshToolBuilder(UCutMeshWithMeshToolBuilder *this)

{
  *(undefined ***)this = &___7UCutMeshWithMeshToolBuilder__6B_;
  UBaseCreateFromSelectedToolBuilder::~UBaseCreateFromSelectedToolBuilder
            ((UBaseCreateFromSelectedToolBuilder *)this);
  return;
}

// CreateNewTool @ 14cc51b70

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
UCutMeshWithMeshToolBuilder::CreateNewTool
          (UCutMeshWithMeshToolBuilder *this,FToolBuilderState *param_1)

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
  pUVar2 = UCutMeshWithMeshTool::StaticClass();
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

// GetPrivateStaticClass @ 14cc5bc30

UClass * __cdecl UCutMeshWithMeshToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CutMeshWithMeshToolBuilder",
               &Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.InnerSingleton,
               StaticRegisterNativesUCutMeshWithMeshToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCutMeshWithMeshToolBuilder>,
               InternalVTableHelperCtorCaller<UCutMeshWithMeshToolBuilder>,local_res8,
               UBaseCreateFromSelectedToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.InnerSingleton;
}

// MaxComponentsSupported @ 14cc65500

TOptional<int> __thiscall
UCutMeshWithMeshToolBuilder::MaxComponentsSupported(UCutMeshWithMeshToolBuilder *this)

{
  TOptional<int> in_RDX;
  
  *(undefined4 *)in_RDX = 2;
  *(undefined1 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// MinComponentsSupported @ 14cc65530

int __thiscall
UCutMeshWithMeshToolBuilder::MinComponentsSupported(UCutMeshWithMeshToolBuilder *this)

{
  return 2;
}

// StaticRegisterNativesUCutMeshWithMeshToolBuilder @ 14cc822d0

void __cdecl UCutMeshWithMeshToolBuilder::StaticRegisterNativesUCutMeshWithMeshToolBuilder(void)

{
  return;
}

