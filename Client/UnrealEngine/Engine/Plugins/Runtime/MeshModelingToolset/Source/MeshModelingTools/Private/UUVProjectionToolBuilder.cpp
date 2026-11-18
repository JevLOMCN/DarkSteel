// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cd42e60

UClass * __cdecl UUVProjectionToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionToolBuilder",
               &Z_Registration_Info_UClass_UUVProjectionToolBuilder.InnerSingleton,
               StaticRegisterNativesUUVProjectionToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVProjectionToolBuilder>,
               InternalVTableHelperCtorCaller<UUVProjectionToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolBuilder.InnerSingleton;
}

// UUVProjectionToolBuilder @ 14cd51e90

UUVProjectionToolBuilder * __thiscall
UUVProjectionToolBuilder::UUVProjectionToolBuilder
          (UUVProjectionToolBuilder *this,FVTableHelper *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UUVProjectionToolBuilder__6B_;
  return this;
}

// UUVProjectionToolBuilder @ 14cd51ec0

UUVProjectionToolBuilder * __thiscall
UUVProjectionToolBuilder::UUVProjectionToolBuilder
          (UUVProjectionToolBuilder *this,FObjectInitializer *param_1)

{
  USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UUVProjectionToolBuilder__6B_;
  return this;
}

// ~UUVProjectionToolBuilder @ 14cd53ab0

void __thiscall UUVProjectionToolBuilder::~UUVProjectionToolBuilder(UUVProjectionToolBuilder *this)

{
  *(undefined ***)this = &___7UUVProjectionToolBuilder__6B_;
  USingleTargetWithSelectionToolBuilder::~USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this);
  return;
}

// CanBuildTool @ 14cd631d0

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
UUVProjectionToolBuilder::CanBuildTool(UUVProjectionToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  code *local_18;
  undefined1 *local_10;
  
  bVar3 = USingleTargetWithSelectionToolBuilder::CanBuildTool
                    ((USingleTargetWithSelectionToolBuilder *)this,param_1);
  if (bVar3) {
    pUVar1 = param_1->TargetManager;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e8);
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUVProjectionToolBuilder::CanBuildTool'::__l2::<lambda_1>,bool,UActorComponent_&>
               ::Call;
    uVar5 = (**(code **)(*(longlong *)this + 0x2d0))(this);
    iVar4 = (*pcVar2)(pUVar1,param_1,uVar5,&local_18);
    if (0 < iVar4) {
      return true;
    }
  }
  return false;
}

// CreateNewTool @ 14cd67df0

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
UUVProjectionToolBuilder::CreateNewTool(UUVProjectionToolBuilder *this,FToolBuilderState *param_1)

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
  pUVar2 = UUVProjectionTool::StaticClass();
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

// GetPrivateStaticClass @ 14cd6eb10

UClass * __cdecl UUVProjectionToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionToolBuilder",
               &Z_Registration_Info_UClass_UUVProjectionToolBuilder.InnerSingleton,
               StaticRegisterNativesUUVProjectionToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVProjectionToolBuilder>,
               InternalVTableHelperCtorCaller<UUVProjectionToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolBuilder.InnerSingleton;
}

// RequiresInputSelection @ 14cd7b180

bool __thiscall UUVProjectionToolBuilder::RequiresInputSelection(UUVProjectionToolBuilder *this)

{
  return false;
}

// StaticRegisterNativesUUVProjectionToolBuilder @ 14cd81550

void __cdecl UUVProjectionToolBuilder::StaticRegisterNativesUUVProjectionToolBuilder(void)

{
  return;
}

