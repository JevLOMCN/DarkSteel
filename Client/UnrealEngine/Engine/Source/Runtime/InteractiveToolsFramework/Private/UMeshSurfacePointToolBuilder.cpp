// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 14966bb40

UClass * __cdecl UMeshSurfacePointToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshSurfacePointToolBuilder",
               &Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshSurfacePointToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSurfacePointToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshSurfacePointToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.InnerSingleton;
}

// UMeshSurfacePointToolBuilder @ 149687a00

UMeshSurfacePointToolBuilder * __thiscall
UMeshSurfacePointToolBuilder::UMeshSurfacePointToolBuilder
          (UMeshSurfacePointToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  this->StylusAPI = (IToolStylusStateProviderAPI *)0x0;
  this->_padding_ = (longlong)&___7UMeshSurfacePointToolBuilder__6B_;
  return this;
}

// UMeshSurfacePointToolBuilder @ 149687a30

UMeshSurfacePointToolBuilder * __thiscall
UMeshSurfacePointToolBuilder::UMeshSurfacePointToolBuilder
          (UMeshSurfacePointToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  this->StylusAPI = (IToolStylusStateProviderAPI *)0x0;
  this->_padding_ = (longlong)&___7UMeshSurfacePointToolBuilder__6B_;
  return this;
}

// ~UMeshSurfacePointToolBuilder @ 14968a740

void __thiscall
UMeshSurfacePointToolBuilder::~UMeshSurfacePointToolBuilder(UMeshSurfacePointToolBuilder *this)

{
  this->_padding_ = (longlong)&___7UMeshSurfacePointToolBuilder__6B_;
  UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this);
  return;
}

// BuildTool @ 149694980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveTool * __thiscall
UMeshSurfacePointToolBuilder::BuildTool
          (UMeshSurfacePointToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (UInteractiveTool *)(**(code **)(this->_padding_ + 0x2d8))();
  (**(code **)(this->_padding_ + 0x2e0))(this,pUVar1,param_1);
  return pUVar1;
}

// CanBuildTool @ 149696a00

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
UMeshSurfacePointToolBuilder::CanBuildTool
          (UMeshSurfacePointToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  pUVar1 = param_1->TargetManager;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2d8);
  uVar4 = (**(code **)(this->_padding_ + 0x2d0))();
  iVar3 = (*pcVar2)(pUVar1,param_1,uVar4);
  return iVar3 == 1;
}

// CreateNewTool @ 14969bbe0

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

UMeshSurfacePointTool * __thiscall
UMeshSurfacePointToolBuilder::CreateNewTool
          (UMeshSurfacePointToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UClass *pUVar2;
  UMeshSurfacePointTool *pUVar3;
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
  pUVar2 = UMeshSurfacePointTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UMeshSurfacePointTool *)
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

// GetPrivateStaticClass @ 1496a6f20

UClass * __cdecl UMeshSurfacePointToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshSurfacePointToolBuilder",
               &Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshSurfacePointToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSurfacePointToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshSurfacePointToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 1496a8e90

FToolTargetTypeRequirements * __thiscall
UMeshSurfacePointToolBuilder::GetTargetRequirements(UMeshSurfacePointToolBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  FToolTargetTypeRequirements *pFVar3;
  longlong lVar4;
  UClass *local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_18[0] = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
      TypeRequirements.Interfaces.AllocatorInstance.SecondaryData =
           (ForElementType<UClass_const_*>)0x0;
      TypeRequirements.Interfaces.ArrayNum = 0;
      TypeRequirements.Interfaces.ArrayMax = 5;
      if (((UClass **)0x15528483f < local_18) &&
         (local_18 < &TypeRequirements.Interfaces.AllocatorInstance.SecondaryData)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FToolTargetTypeRequirements *)(*pcVar1)();
          return pFVar3;
        }
      }
      if (TypeRequirements.Interfaces.ArrayNum == TypeRequirements.Interfaces.ArrayMax) {
        TypeRequirements.Interfaces.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_>
                       (0x808,(ForElementType<UClass_const_*> *)&TypeRequirements,
                        &TypeRequirements.Interfaces.ArrayMax);
      }
      lVar4 = (longlong)TypeRequirements.Interfaces.ArrayNum;
      pFVar3 = &TypeRequirements;
      if (TypeRequirements.Interfaces.AllocatorInstance.SecondaryData !=
          (ForElementType<UClass_const_*>)0x0) {
        pFVar3 = (FToolTargetTypeRequirements *)
                 TypeRequirements.Interfaces.AllocatorInstance.SecondaryData;
      }
      TypeRequirements.Interfaces.ArrayNum = TypeRequirements.Interfaces.ArrayNum + 1;
      *(UClass **)((longlong)pFVar3 + lVar4 * 8) = local_18[0];
      atexit(`UMeshSurfacePointToolBuilder::GetTargetRequirements'::__l2::
             _dynamic_atexit_destructor_for__TypeRequirements__);
      _Init_thread_footer(&::_TSS0);
      return &TypeRequirements;
    }
  }
  return &TypeRequirements;
}

// InitializeNewTool @ 1496ac670

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
UMeshSurfacePointToolBuilder::InitializeNewTool
          (UMeshSurfacePointToolBuilder *this,UMeshSurfacePointTool *param_1,
          FToolBuilderState *param_2)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  UWorld *local_res8;
  
  pUVar1 = param_2->TargetManager;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2f0);
  uVar4 = (**(code **)(this->_padding_ + 0x2d0))();
  lVar5 = (*pcVar2)(pUVar1,param_2,uVar4);
  if (lVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseTools\\MeshSurfacePointTool.cpp"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0x398))(param_1,lVar5);
  (**(code **)(param_1->_padding_ + 0x3b0))(param_1,this->StylusAPI);
  local_res8 = param_2->World;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(param_1->TargetWorld).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// StaticRegisterNativesUMeshSurfacePointToolBuilder @ 1496c2cd0

void __cdecl UMeshSurfacePointToolBuilder::StaticRegisterNativesUMeshSurfacePointToolBuilder(void)

{
  return;
}

