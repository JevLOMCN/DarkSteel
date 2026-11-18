// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cc03cf0

UClass * __cdecl UDrawPolygonToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPolygonToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawPolygonToolBuilder",
               &Z_Registration_Info_UClass_UDrawPolygonToolBuilder.InnerSingleton,
               StaticRegisterNativesUDrawPolygonToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawPolygonToolBuilder>,
               InternalVTableHelperCtorCaller<UDrawPolygonToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPolygonToolBuilder.InnerSingleton;
}

// UDrawPolygonToolBuilder @ 14cc1dba0

UDrawPolygonToolBuilder * __thiscall
UDrawPolygonToolBuilder::UDrawPolygonToolBuilder
          (UDrawPolygonToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UDrawPolygonToolBuilder__6B_;
  return this;
}

// UDrawPolygonToolBuilder @ 14cc1dbd0

UDrawPolygonToolBuilder * __thiscall
UDrawPolygonToolBuilder::UDrawPolygonToolBuilder
          (UDrawPolygonToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UDrawPolygonToolBuilder__6B_;
  return this;
}

// ~UDrawPolygonToolBuilder @ 14cc22a90

void __thiscall UDrawPolygonToolBuilder::~UDrawPolygonToolBuilder(UDrawPolygonToolBuilder *this)

{
  *(undefined ***)this = &___7UDrawPolygonToolBuilder__6B_;
  UInteractiveToolBuilder::~UInteractiveToolBuilder((UInteractiveToolBuilder *)this);
  return;
}

// BuildTool @ 14cc43a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

UInteractiveTool * __thiscall
UDrawPolygonToolBuilder::BuildTool(UDrawPolygonToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  double dVar2;
  UClass *pUVar3;
  UInteractiveTool *pUVar4;
  TFrame3<double> *pTVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  TQuaternion<double>_u_0 local_f8;
  TFrame3<double> local_d8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar1 = param_1->ToolManager;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UDrawPolygonTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar1;
  pUVar4 = (UInteractiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  (**(code **)(pUVar4->_padding_ + 0x398))(pUVar4,param_1->World);
  local_f8._s_0.X = 0.0;
  local_f8._s_0.Y = 0.0;
  local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_f8._s_0.W = _UNK_15061cbc8;
  pTVar5 = ToolSetupUtil::GetDefaultWorldReferenceFrame
                     (&local_d8,param_1->ToolManager,(TQuaternion<double> *)&local_f8._s_0,
                      __real_407f400000000000);
  dVar2 = (pTVar5->Origin).field0_0x0._s_0.Y;
  pUVar4[2]._padding_ = (longlong)(pTVar5->Origin).field0_0x0._s_0.X;
  pUVar4[2]._padding_ = (longlong)dVar2;
  dVar2 = (pTVar5->Rotation).field0_0x0._s_0.X;
  pUVar4[2]._padding_ = (longlong)(pTVar5->Origin).field0_0x0._s_0.Z;
  *(double *)&pUVar4[2].OnPropertySetsModified = dVar2;
  dVar2 = (pTVar5->Rotation).field0_0x0._s_0.Z;
  *(double *)&pUVar4[2].OnPropertySetsModified.field_0x8 = (pTVar5->Rotation).field0_0x0._s_0.Y;
  *(double *)&pUVar4[2].OnPropertySetsModified.field_0x10 = dVar2;
  *(double *)&pUVar4[2].OnPropertySetsModified.field_0x18 = (pTVar5->Rotation).field0_0x0._s_0.W;
  return pUVar4;
}

// CanBuildTool @ 14cc479c0

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
UDrawPolygonToolBuilder::CanBuildTool(UDrawPolygonToolBuilder *this,FToolBuilderState *param_1)

{
  return true;
}

// GetPrivateStaticClass @ 14cc5c770

UClass * __cdecl UDrawPolygonToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPolygonToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawPolygonToolBuilder",
               &Z_Registration_Info_UClass_UDrawPolygonToolBuilder.InnerSingleton,
               StaticRegisterNativesUDrawPolygonToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawPolygonToolBuilder>,
               InternalVTableHelperCtorCaller<UDrawPolygonToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPolygonToolBuilder.InnerSingleton;
}

// StaticRegisterNativesUDrawPolygonToolBuilder @ 14cc823f0

void __cdecl UDrawPolygonToolBuilder::StaticRegisterNativesUDrawPolygonToolBuilder(void)

{
  return;
}

