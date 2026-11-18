// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cc95290

UClass * __cdecl UMeshAttributePaintToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintToolBuilder",
               &Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshAttributePaintToolBuilder,0x60,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintToolBuilder>,local_res8,
               UMeshSurfacePointMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder.InnerSingleton;
}

// UMeshAttributePaintToolBuilder @ 14ccbbe80

UMeshAttributePaintToolBuilder * __thiscall
UMeshAttributePaintToolBuilder::UMeshAttributePaintToolBuilder
          (UMeshAttributePaintToolBuilder *this,FVTableHelper *param_1)

{
  UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshAttributePaintToolBuilder__6B_;
  *(undefined8 *)&this->ColorMapFactory = 0;
  *(undefined8 *)&(this->ColorMapFactory).field_0x28 = 0;
  return this;
}

// UMeshAttributePaintToolBuilder @ 14ccbbec0

UMeshAttributePaintToolBuilder * __thiscall
UMeshAttributePaintToolBuilder::UMeshAttributePaintToolBuilder
          (UMeshAttributePaintToolBuilder *this,FObjectInitializer *param_1)

{
  UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshAttributePaintToolBuilder__6B_;
  *(undefined8 *)&this->ColorMapFactory = 0;
  *(undefined8 *)&(this->ColorMapFactory).field_0x28 = 0;
  return this;
}

// ~UMeshAttributePaintToolBuilder @ 14ccc3a30

void __thiscall
UMeshAttributePaintToolBuilder::~UMeshAttributePaintToolBuilder
          (UMeshAttributePaintToolBuilder *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7UMeshAttributePaintToolBuilder__6B_;
  if (*(longlong *)&this->ColorMapFactory != 0) {
    plVar1 = *(longlong **)&(this->ColorMapFactory).field_0x28;
    plVar2 = (longlong *)&(this->ColorMapFactory).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UMeshSurfacePointMeshEditingToolBuilder::~UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this);
  return;
}

// CanBuildTool @ 14ccebcb0

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
UMeshAttributePaintToolBuilder::CanBuildTool
          (UMeshAttributePaintToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  code *local_18;
  undefined1 *local_10;
  
  bVar3 = UMeshSurfacePointToolBuilder::CanBuildTool((UMeshSurfacePointToolBuilder *)this,param_1);
  if (bVar3) {
    pUVar1 = param_1->TargetManager;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e8);
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshAttributePaintToolBuilder::CanBuildTool'::__l2::<lambda_1>,bool,UActorComponent_&>
               ::Call;
    uVar5 = (**(code **)(this->_padding_ + 0x2d0))(this);
    iVar4 = (*pcVar2)(pUVar1,param_1,uVar5,&local_18);
    if (0 < iVar4) {
      return true;
    }
  }
  return false;
}

// CreateNewTool @ 14ccf55d0

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
UMeshAttributePaintToolBuilder::CreateNewTool
          (UMeshAttributePaintToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  code *pcVar2;
  code *pcVar3;
  UClass *pUVar4;
  UMeshSurfacePointTool *pUVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar1 = param_1->ToolManager;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UMeshAttributePaintTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar1;
  pUVar5 = (UMeshSurfacePointTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (**(code **)(pUVar5->_padding_ + 0x490))(pUVar5,param_1->World);
  if (*(void **)&this->ColorMapFactory != (void *)0x0) {
    pcVar2 = *(code **)(pUVar5->_padding_ + 0x4a0);
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ColorMapFactory);
    plVar7 = *(longlong **)&(this->ColorMapFactory).field_0x28;
    pcVar3 = *(code **)&this->ColorMapFactory;
    plVar8 = (longlong *)&(this->ColorMapFactory).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar8 = plVar7;
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(local_b8,uVar6);
    (*pcVar2)(pUVar5,local_b8);
  }
  return pUVar5;
}

// GetPrivateStaticClass @ 14ccffb40

UClass * __cdecl UMeshAttributePaintToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintToolBuilder",
               &Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshAttributePaintToolBuilder,0x60,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintToolBuilder>,local_res8,
               UMeshSurfacePointMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14cd02660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
UMeshAttributePaintToolBuilder::GetTargetRequirements(UMeshAttributePaintToolBuilder *this)

{
  ForAnyElementType _Src;
  int iVar1;
  FToolTargetTypeRequirements *_Dst;
  longlong lVar2;
  undefined1 auStackY_88 [32];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  UClass *local_38;
  UClass *pUStack_30;
  UClass *local_28;
  UClass *pUStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_38 = Z_Construct_UClass_UMaterialProvider_NoRegister();
    pUStack_30 = Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
    local_28 = Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
    pUStack_20 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    local_40 = 4;
    local_48.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,4,0,&local_48,4,&local_3c);
    iVar1 = local_40;
    _Src.Data = local_48.Data;
    *(UClass **)local_48.Data = local_38;
    *(UClass **)(local_48.Data + 8) = pUStack_30;
    *(UClass **)(local_48.Data + 0x10) = local_28;
    *(UClass **)(local_48.Data + 0x18) = pUStack_20;
    lVar2 = (longlong)local_40;
    TypeRequirements.Interfaces.AllocatorInstance.SecondaryData =
         (ForElementType<UClass_const_*>)0x0;
    TypeRequirements.Interfaces.ArrayMax = 5;
    TypeRequirements.Interfaces.ArrayNum = local_40;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_>
              (8,8,local_40,5,(ForElementType<UClass_const_*> *)&TypeRequirements,local_40,
               &TypeRequirements.Interfaces.ArrayMax);
    _Dst = &TypeRequirements;
    if (TypeRequirements.Interfaces.AllocatorInstance.SecondaryData !=
        (ForElementType<UClass_const_*>)0x0) {
      _Dst = (FToolTargetTypeRequirements *)
             TypeRequirements.Interfaces.AllocatorInstance.SecondaryData;
    }
    if (iVar1 != 0) {
      memcpy(_Dst,_Src.Data,lVar2 << 3);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    atexit(`UMeshAttributePaintToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// InitializeNewTool @ 14cd062a0

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

void __thiscall
UMeshAttributePaintToolBuilder::InitializeNewTool
          (UMeshAttributePaintToolBuilder *this,UMeshSurfacePointTool *param_1,
          FToolBuilderState *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  UToolTarget *pUVar7;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  UMeshSurfacePointToolBuilder::InitializeNewTool
            ((UMeshSurfacePointToolBuilder *)this,param_1,param_2);
  if (param_1 != (UMeshSurfacePointTool *)0x0) {
    pUVar5 = UMeshAttributePaintTool::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if (((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar5->_padding_)) &&
       (lVar6 = (**(code **)(param_1->_padding_ + 0x3a0))(param_1), lVar6 != 0)) {
      local_88._0_4_ = Face;
      local_88._4_4_ = Triangle;
      local_80._0_8_ = (FScriptContainerElement *)0x0;
      local_80._8_8_ = 0;
      local_60 = (void *)0x0;
      local_58 = ___xmm_00000000ffffffff0000008000000000;
      uStack_50 = _UNK_150631d98;
      local_40 = (ForElementType<FSetElementId>)0x0;
      local_38 = 0;
      pUVar7 = (UToolTarget *)(**(code **)(param_1->_padding_ + 0x3a0))(param_1);
      bVar4 = UE::Geometry::GetCurrentGeometrySelectionForTarget
                        (param_2,pUVar7,(FGeometrySelection *)local_88);
      if ((bVar4) && ((bool *)local_88 != &param_1[7].bShiftToggle)) {
        if ((char)param_1[8]._padding_ != '\0') {
          *(undefined4 *)&param_1[8]._padding_ = 0;
          if ((void *)param_1[8]._padding_ != (void *)0x0) {
            FMemory::Free((void *)param_1[8]._padding_);
          }
          TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&param_1[7].LastWorldRay);
        }
        param_1[7].bShiftToggle = (bool)local_88[0];
        param_1[7].bCtrlToggle = (bool)local_88[1];
        *(undefined2 *)&param_1[7].field_0xe2 = local_88._2_2_;
        *(undefined4 *)&param_1[7].field_0xe4 = local_88._4_4_;
        param_1[7].LastWorldRay.Origin.field0_0x0._s_0.X = 0.0;
        param_1[7].LastWorldRay.Origin.field0_0x0._s_0.Y = 0.0;
        param_1[7].LastWorldRay.Direction.field0_0x0._s_0.Y = 0.0;
        *(undefined4 *)((longlong)&param_1[7].LastWorldRay.Direction.field0_0x0 + 0x10) = 0;
        *(undefined4 *)((longlong)&param_1[7].LastWorldRay.Direction.field0_0x0 + 0x14) = 0x80;
        *(undefined4 *)&param_1[7].StylusAPI = 0xffffffff;
        *(undefined4 *)((longlong)&param_1[7].StylusAPI + 4) = 0;
        param_1[8]._padding_ = 0;
        *(undefined4 *)&param_1[8]._padding_ = 0;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)&param_1[7].LastWorldRay,
                   (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_80);
        *(undefined1 *)&param_1[8]._padding_ = 1;
      }
      local_38 = 0;
      if (local_40 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_40);
      }
      iVar2 = SUB84(local_80._8_8_,4);
      local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
      }
      uVar3 = local_58._4_4_;
      local_58 = (ulonglong)local_58._4_4_ << 0x20;
      uStack_50 = 0xffffffff;
      if (0x80 < uVar3) {
        local_58 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      if ((FScriptContainerElement *)local_80._0_8_ == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free((void *)local_80._0_8_);
      return;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_968098766823358198>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshAttributePaintTool.cpp"
                     ,0x10a,"Tool && Tool->GetTarget()");
  if (!bVar4) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// StaticRegisterNativesUMeshAttributePaintToolBuilder @ 14cd2ef50

void __cdecl
UMeshAttributePaintToolBuilder::StaticRegisterNativesUMeshAttributePaintToolBuilder(void)

{
  return;
}

