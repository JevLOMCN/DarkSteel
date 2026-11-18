// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 10

// StaticClass @ 14cb58e00

UClass * __cdecl UMeshTopologySelectionMechanicProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshTopologySelectionMechanicProperties",
               &Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.InnerSingleton,
               StaticRegisterNativesUMeshTopologySelectionMechanicProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshTopologySelectionMechanicProperties>,
               InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanicProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.InnerSingleton;
}

// UMeshTopologySelectionMechanicProperties @ 14cb636e0

UMeshTopologySelectionMechanicProperties * __thiscall
UMeshTopologySelectionMechanicProperties::UMeshTopologySelectionMechanicProperties
          (UMeshTopologySelectionMechanicProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bSelectVertices = true;
  this->bSelectEdges = true;
  this->bSelectFaces = true;
  this->bSelectEdgeLoops = false;
  this->_padding_ = (longlong)&___7UMeshTopologySelectionMechanicProperties__6B_;
  (this->Mechanic).WeakPtr = (FWeakObjectPtr)0x0;
  this->bSelectEdgeRings = false;
  this->bHitBackFaces = true;
  this->bEnableMarquee = true;
  this->bMarqueeIgnoreOcclusion = true;
  this->bPreferProjectedElement = true;
  this->bSelectDownRay = true;
  this->bIgnoreOcclusion = false;
  this->bDisplayPolygroupReliantControls = true;
  this->bCanSelectVertices = true;
  this->bCanSelectEdges = true;
  this->bCanSelectFaces = true;
  return this;
}

// UMeshTopologySelectionMechanicProperties @ 14cb63740

UMeshTopologySelectionMechanicProperties * __thiscall
UMeshTopologySelectionMechanicProperties::UMeshTopologySelectionMechanicProperties
          (UMeshTopologySelectionMechanicProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bSelectVertices = true;
  this->bSelectEdges = true;
  this->bSelectFaces = true;
  this->bSelectEdgeLoops = false;
  this->_padding_ = (longlong)&___7UMeshTopologySelectionMechanicProperties__6B_;
  (this->Mechanic).WeakPtr = (FWeakObjectPtr)0x0;
  this->bSelectEdgeRings = false;
  this->bHitBackFaces = true;
  this->bEnableMarquee = true;
  this->bMarqueeIgnoreOcclusion = true;
  this->bPreferProjectedElement = true;
  this->bSelectDownRay = true;
  this->bIgnoreOcclusion = false;
  this->bDisplayPolygroupReliantControls = true;
  this->bCanSelectVertices = true;
  this->bCanSelectEdges = true;
  this->bCanSelectFaces = true;
  return this;
}

// ~UMeshTopologySelectionMechanicProperties @ 14cb652b0

void __thiscall
UMeshTopologySelectionMechanicProperties::~UMeshTopologySelectionMechanicProperties
          (UMeshTopologySelectionMechanicProperties *this)

{
  this->_padding_ = (longlong)&___7UMeshTopologySelectionMechanicProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cb991c0

UClass * __cdecl UMeshTopologySelectionMechanicProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshTopologySelectionMechanicProperties",
               &Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.InnerSingleton,
               StaticRegisterNativesUMeshTopologySelectionMechanicProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshTopologySelectionMechanicProperties>,
               InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanicProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.InnerSingleton;
}

// InvertSelection @ 14cba3e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMeshTopologySelectionMechanicProperties::InvertSelection
          (UMeshTopologySelectionMechanicProperties *this)

{
  bool bVar1;
  UMeshTopologySelectionMechanic *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Mechanic).WeakPtr);
  if (bVar1) {
    this_00 = (UMeshTopologySelectionMechanic *)FWeakObjectPtr::Get(&(this->Mechanic).WeakPtr);
    UMeshTopologySelectionMechanic::InvertSelection(this_00);
    return;
  }
  return;
}

// SelectAll @ 14cbae7b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMeshTopologySelectionMechanicProperties::SelectAll(UMeshTopologySelectionMechanicProperties *this)

{
  bool bVar1;
  UMeshTopologySelectionMechanic *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Mechanic).WeakPtr);
  if (bVar1) {
    this_00 = (UMeshTopologySelectionMechanic *)FWeakObjectPtr::Get(&(this->Mechanic).WeakPtr);
    UMeshTopologySelectionMechanic::SelectAll(this_00);
    return;
  }
  return;
}

// StaticRegisterNativesUMeshTopologySelectionMechanicProperties @ 14cbb45d0

void __cdecl
UMeshTopologySelectionMechanicProperties::
StaticRegisterNativesUMeshTopologySelectionMechanicProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execInvertSelection @ 14cbbd520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMeshTopologySelectionMechanicProperties::execInvertSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UMeshTopologySelectionMechanic *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x20);
  if (bVar1) {
    this = (UMeshTopologySelectionMechanic *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x20);
    UMeshTopologySelectionMechanic::InvertSelection(this);
    return;
  }
  return;
}

// execSelectAll @ 14cbbd570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMeshTopologySelectionMechanicProperties::execSelectAll
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UMeshTopologySelectionMechanic *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x20);
  if (bVar1) {
    this = (UMeshTopologySelectionMechanic *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x20);
    UMeshTopologySelectionMechanic::SelectAll(this);
    return;
  }
  return;
}

