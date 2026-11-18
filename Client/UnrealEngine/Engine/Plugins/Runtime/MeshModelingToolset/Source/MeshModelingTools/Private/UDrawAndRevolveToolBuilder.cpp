// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbfd220

UClass * __cdecl UDrawAndRevolveToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawAndRevolveToolBuilder",
               &Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.InnerSingleton,
               StaticRegisterNativesUDrawAndRevolveToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDrawAndRevolveToolBuilder>,
               InternalVTableHelperCtorCaller<UDrawAndRevolveToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.InnerSingleton;
}

// UDrawAndRevolveToolBuilder @ 14cc1d760

UDrawAndRevolveToolBuilder * __thiscall
UDrawAndRevolveToolBuilder::UDrawAndRevolveToolBuilder
          (UDrawAndRevolveToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UDrawAndRevolveToolBuilder__6B_;
  return this;
}

// UDrawAndRevolveToolBuilder @ 14cc1d790

UDrawAndRevolveToolBuilder * __thiscall
UDrawAndRevolveToolBuilder::UDrawAndRevolveToolBuilder
          (UDrawAndRevolveToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UDrawAndRevolveToolBuilder__6B_;
  return this;
}

// ~UDrawAndRevolveToolBuilder @ 14cc229b0

void __thiscall
UDrawAndRevolveToolBuilder::~UDrawAndRevolveToolBuilder(UDrawAndRevolveToolBuilder *this)

{
  *(undefined ***)this = &___7UDrawAndRevolveToolBuilder__6B_;
  UInteractiveToolBuilder::~UInteractiveToolBuilder((UInteractiveToolBuilder *)this);
  return;
}

// BuildTool @ 14cc438f0

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
UDrawAndRevolveToolBuilder::BuildTool(UDrawAndRevolveToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  ITextData *pIVar2;
  FSlateBrush *pFVar3;
  double dVar4;
  UClass *pUVar5;
  UInteractiveTool *pUVar6;
  TQuat<double> *pTVar7;
  TFrame3<double> *pTVar8;
  longlong *plVar9;
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
  pUVar5 = UDrawAndRevolveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar5);
  local_98._8_8_ = pUVar1;
  pUVar6 = (UInteractiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  (**(code **)(pUVar6->_padding_ + 0x398))(pUVar6,param_1->World);
  local_f8._s_0.X = ___xmm_00000000000000004056800000000000;
  local_f8._s_0.Y = _UNK_150b45b78;
  local_f8._s_0.Z = 0.0;
  pTVar7 = UE::Math::TRotator<double>::Quaternion
                     ((TRotator<double> *)&local_f8._s_0,(TQuat<double> *)&local_d8);
  local_f8._s_0.X = pTVar7->X;
  local_f8._s_0.Y = pTVar7->Y;
  local_f8._s_0.Z = pTVar7->Z;
  local_f8._s_0.W = pTVar7->W;
  pTVar8 = ToolSetupUtil::GetDefaultWorldReferenceFrame
                     (&local_d8,param_1->ToolManager,(TQuaternion<double> *)&local_f8._s_0,
                      __real_407f400000000000);
  pIVar2 = (ITextData *)(pTVar8->Origin).field0_0x0._s_0.Y;
  *(double *)&pUVar6[1].DefaultToolInfo.ToolDisplayName.Flags = (pTVar8->Origin).field0_0x0._s_0.X;
  pUVar6[1].DefaultToolInfo.ToolDisplayMessage.TextData.Reference = pIVar2;
  pFVar3 = (FSlateBrush *)(pTVar8->Rotation).field0_0x0._s_0.X;
  *(double *)&pUVar6[1].DefaultToolInfo.ToolDisplayMessage.Flags =
       (pTVar8->Origin).field0_0x0._s_0.Z;
  pUVar6[1].DefaultToolInfo.ToolIcon = pFVar3;
  dVar4 = (pTVar8->Rotation).field0_0x0._s_0.Z;
  pUVar6[2]._padding_ = (longlong)(pTVar8->Rotation).field0_0x0._s_0.Y;
  pUVar6[2]._padding_ = (longlong)dVar4;
  pUVar6[2]._padding_ = (longlong)(pTVar8->Rotation).field0_0x0._s_0.W;
  return pUVar6;
}

// CanBuildTool @ 14cc479b0

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
UDrawAndRevolveToolBuilder::CanBuildTool
          (UDrawAndRevolveToolBuilder *this,FToolBuilderState *param_1)

{
  return true;
}

// GetPrivateStaticClass @ 14cc5c5f0

UClass * __cdecl UDrawAndRevolveToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawAndRevolveToolBuilder",
               &Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.InnerSingleton,
               StaticRegisterNativesUDrawAndRevolveToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDrawAndRevolveToolBuilder>,
               InternalVTableHelperCtorCaller<UDrawAndRevolveToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.InnerSingleton;
}

// StaticRegisterNativesUDrawAndRevolveToolBuilder @ 14cc823d0

void __cdecl UDrawAndRevolveToolBuilder::StaticRegisterNativesUDrawAndRevolveToolBuilder(void)

{
  return;
}

