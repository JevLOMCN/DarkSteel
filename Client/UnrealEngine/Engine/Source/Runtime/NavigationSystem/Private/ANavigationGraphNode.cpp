// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d61430

UClass * __cdecl ANavigationGraphNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationGraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationGraphNode",
               &Z_Registration_Info_UClass_ANavigationGraphNode.InnerSingleton,
               StaticRegisterNativesANavigationGraphNode,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavigationGraphNode>,
               InternalVTableHelperCtorCaller<ANavigationGraphNode>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationGraphNode.InnerSingleton;
}

// ANavigationGraphNode @ 146d72620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavigationGraphNode * __thiscall
ANavigationGraphNode::ANavigationGraphNode(ANavigationGraphNode *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7ANavigationGraphNode__6B_;
  return this;
}

// ANavigationGraphNode @ 146d72650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavigationGraphNode * __thiscall
ANavigationGraphNode::ANavigationGraphNode(ANavigationGraphNode *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7ANavigationGraphNode__6B_;
  return this;
}

// ~ANavigationGraphNode @ 146d780f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavigationGraphNode::~ANavigationGraphNode(ANavigationGraphNode *this)

{
  *(undefined ***)this = &___7ANavigationGraphNode__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 146d9fe50

UClass * __cdecl ANavigationGraphNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationGraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationGraphNode",
               &Z_Registration_Info_UClass_ANavigationGraphNode.InnerSingleton,
               StaticRegisterNativesANavigationGraphNode,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavigationGraphNode>,
               InternalVTableHelperCtorCaller<ANavigationGraphNode>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationGraphNode.InnerSingleton;
}

// StaticRegisterNativesANavigationGraphNode @ 146dba8e0

void __cdecl ANavigationGraphNode::StaticRegisterNativesANavigationGraphNode(void)

{
  return;
}

