// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cc043e0

UClass * __cdecl UCSGMeshesToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCSGMeshesToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CSGMeshesToolBuilder",
               &Z_Registration_Info_UClass_UCSGMeshesToolBuilder.InnerSingleton,
               StaticRegisterNativesUCSGMeshesToolBuilder,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCSGMeshesToolBuilder>,
               InternalVTableHelperCtorCaller<UCSGMeshesToolBuilder>,local_res8,
               UBaseCreateFromSelectedToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCSGMeshesToolBuilder.InnerSingleton;
}

// UCSGMeshesToolBuilder @ 14cc1c310

UCSGMeshesToolBuilder * __thiscall
UCSGMeshesToolBuilder::UCSGMeshesToolBuilder(UCSGMeshesToolBuilder *this,FVTableHelper *param_1)

{
  UBaseCreateFromSelectedToolBuilder::UBaseCreateFromSelectedToolBuilder
            ((UBaseCreateFromSelectedToolBuilder *)this,param_1);
  this->bTrimMode = false;
  this->_padding_ = (longlong)&___7UCSGMeshesToolBuilder__6B_;
  return this;
}

// UCSGMeshesToolBuilder @ 14cc1c340

UCSGMeshesToolBuilder * __thiscall
UCSGMeshesToolBuilder::UCSGMeshesToolBuilder
          (UCSGMeshesToolBuilder *this,FObjectInitializer *param_1)

{
  UBaseCreateFromSelectedToolBuilder::UBaseCreateFromSelectedToolBuilder
            ((UBaseCreateFromSelectedToolBuilder *)this,param_1);
  this->bTrimMode = false;
  this->_padding_ = (longlong)&___7UCSGMeshesToolBuilder__6B_;
  return this;
}

// ~UCSGMeshesToolBuilder @ 14cc22550

void __thiscall UCSGMeshesToolBuilder::~UCSGMeshesToolBuilder(UCSGMeshesToolBuilder *this)

{
  this->_padding_ = (longlong)&___7UCSGMeshesToolBuilder__6B_;
  UBaseCreateFromSelectedToolBuilder::~UBaseCreateFromSelectedToolBuilder
            ((UBaseCreateFromSelectedToolBuilder *)this);
  return;
}

// CreateNewTool @ 14cc51a80

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
UCSGMeshesToolBuilder::CreateNewTool(UCSGMeshesToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UMultiSelectionMeshEditingTool *pUVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = param_1->ToolManager;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UCSGMeshesTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar1;
  pUVar5 = (UMultiSelectionMeshEditingTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (this->bTrimMode != false) {
    if ((int)pUVar5[1]._padding_ != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalDynamicMeshes.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\CSGMeshesTool.cpp"
                         ,0x17,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMultiSelectionMeshEditingTool *)(*pcVar2)();
        return pUVar5;
      }
    }
    *(undefined1 *)&pUVar5[1]._padding_ = 1;
  }
  return pUVar5;
}

// GetPrivateStaticClass @ 14cc5b9f0

UClass * __cdecl UCSGMeshesToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCSGMeshesToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CSGMeshesToolBuilder",
               &Z_Registration_Info_UClass_UCSGMeshesToolBuilder.InnerSingleton,
               StaticRegisterNativesUCSGMeshesToolBuilder,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCSGMeshesToolBuilder>,
               InternalVTableHelperCtorCaller<UCSGMeshesToolBuilder>,local_res8,
               UBaseCreateFromSelectedToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCSGMeshesToolBuilder.InnerSingleton;
}

// MaxComponentsSupported @ 14cc654e0

TOptional<int> __thiscall UCSGMeshesToolBuilder::MaxComponentsSupported(UCSGMeshesToolBuilder *this)

{
  TOptional<int> in_RDX;
  
  *(undefined4 *)in_RDX = 2;
  *(undefined1 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// MinComponentsSupported @ 14cc65520

int __thiscall UCSGMeshesToolBuilder::MinComponentsSupported(UCSGMeshesToolBuilder *this)

{
  return 2;
}

// StaticRegisterNativesUCSGMeshesToolBuilder @ 14cc822a0

void __cdecl UCSGMeshesToolBuilder::StaticRegisterNativesUCSGMeshesToolBuilder(void)

{
  return;
}

