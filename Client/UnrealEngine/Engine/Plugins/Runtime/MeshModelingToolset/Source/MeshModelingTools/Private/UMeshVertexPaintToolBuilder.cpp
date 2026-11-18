// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cc93f10

UClass * __cdecl UMeshVertexPaintToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintToolBuilder",
               &Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexPaintToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintToolBuilder>,local_res8,
               UMeshSurfacePointMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder.InnerSingleton;
}

// UMeshVertexPaintToolBuilder @ 14ccbe420

UMeshVertexPaintToolBuilder * __thiscall
UMeshVertexPaintToolBuilder::UMeshVertexPaintToolBuilder
          (UMeshVertexPaintToolBuilder *this,FVTableHelper *param_1)

{
  UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UMeshVertexPaintToolBuilder__6B_;
  return this;
}

// UMeshVertexPaintToolBuilder @ 14ccbe450

UMeshVertexPaintToolBuilder * __thiscall
UMeshVertexPaintToolBuilder::UMeshVertexPaintToolBuilder
          (UMeshVertexPaintToolBuilder *this,FObjectInitializer *param_1)

{
  UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UMeshVertexPaintToolBuilder__6B_;
  return this;
}

// ~UMeshVertexPaintToolBuilder @ 14ccc45e0

void __thiscall
UMeshVertexPaintToolBuilder::~UMeshVertexPaintToolBuilder(UMeshVertexPaintToolBuilder *this)

{
  *(undefined ***)this = &___7UMeshVertexPaintToolBuilder__6B_;
  UMeshSurfacePointMeshEditingToolBuilder::~UMeshSurfacePointMeshEditingToolBuilder
            ((UMeshSurfacePointMeshEditingToolBuilder *)this);
  return;
}

// CanBuildTool @ 14ccebdf0

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
UMeshVertexPaintToolBuilder::CanBuildTool
          (UMeshVertexPaintToolBuilder *this,FToolBuilderState *param_1)

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
               TFunctionRefCaller<`UMeshVertexPaintToolBuilder::CanBuildTool'::__l2::<lambda_1>,bool,UActorComponent_&>
               ::Call;
    uVar5 = (**(code **)(*(longlong *)this + 0x2d0))(this);
    iVar4 = (*pcVar2)(pUVar1,param_1,uVar5,&local_18);
    if (0 < iVar4) {
      return true;
    }
  }
  return false;
}

// CreateNewTool @ 14ccf5840

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
UMeshVertexPaintToolBuilder::CreateNewTool
          (UMeshVertexPaintToolBuilder *this,FToolBuilderState *param_1)

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
  pUVar2 = UMeshVertexPaintTool::StaticClass();
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
  (**(code **)(pUVar3->_padding_ + 0x408))(pUVar3,param_1->World);
  return pUVar3;
}

// GetPrivateStaticClass @ 14cd00970

UClass * __cdecl UMeshVertexPaintToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintToolBuilder",
               &Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexPaintToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintToolBuilder>,local_res8,
               UMeshSurfacePointMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14cd02820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
UMeshVertexPaintToolBuilder::GetTargetRequirements(UMeshVertexPaintToolBuilder *this)

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
    pUStack_30 = Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
    local_28 = Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
    pUStack_20 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
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
    atexit(`UMeshVertexPaintToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// InitializeNewTool @ 14cd064b0

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
UMeshVertexPaintToolBuilder::InitializeNewTool
          (UMeshVertexPaintToolBuilder *this,UMeshSurfacePointTool *param_1,
          FToolBuilderState *param_2)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  UToolTarget *pUVar8;
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
    pUVar6 = UMeshVertexPaintTool::StaticClass();
    iVar3 = (int)pUVar6->_padding_;
    if (((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
         &pUVar6->_padding_)) &&
       (lVar7 = (**(code **)(param_1->_padding_ + 0x3a0))(param_1), lVar7 != 0)) {
      local_88._0_4_ = Face;
      local_88._4_4_ = Triangle;
      local_80._0_8_ = (FScriptContainerElement *)0x0;
      local_80._8_8_ = 0;
      local_60 = (void *)0x0;
      local_58 = ___xmm_00000000ffffffff0000008000000000;
      uStack_50 = _UNK_150631d98;
      local_40 = (ForElementType<FSetElementId>)0x0;
      local_38 = 0;
      pUVar8 = (UToolTarget *)(**(code **)(param_1->_padding_ + 0x3a0))(param_1);
      bVar5 = UE::Geometry::GetCurrentGeometrySelectionForTarget
                        (param_2,pUVar8,(FGeometrySelection *)local_88);
      if ((bVar5) && ((longlong *)local_88 != &param_1[0xf]._padding_)) {
        if (*(char *)((longlong)&param_1[0xf].LastWorldRay.Direction.field0_0x0 + 0x10) != '\0') {
          *(undefined4 *)((longlong)&param_1[0xf].LastWorldRay.Direction.field0_0x0 + 8) = 0;
          pvVar1 = (void *)param_1[0xf].LastWorldRay.Direction.field0_0x0._s_0.X;
          if (pvVar1 != (void *)0x0) {
            FMemory::Free(pvVar1);
          }
          TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&param_1[0xf]._padding_);
        }
        *(undefined4 *)&param_1[0xf]._padding_ = local_88._0_4_;
        *(undefined4 *)((longlong)&param_1[0xf]._padding_ + 4) = local_88._4_4_;
        param_1[0xf]._padding_ = 0;
        param_1[0xf]._padding_ = 0;
        param_1[0xf].bShiftToggle = false;
        param_1[0xf].bCtrlToggle = false;
        *(undefined6 *)&param_1[0xf].field_0xe2 = 0;
        *(undefined4 *)&param_1[0xf].LastWorldRay.Origin.field0_0x0 = 0;
        *(undefined4 *)((longlong)&param_1[0xf].LastWorldRay.Origin.field0_0x0 + 4) = 0x80;
        *(undefined4 *)((longlong)&param_1[0xf].LastWorldRay.Origin.field0_0x0 + 8) = 0xffffffff;
        *(undefined4 *)((longlong)&param_1[0xf].LastWorldRay.Origin.field0_0x0 + 0xc) = 0;
        param_1[0xf].LastWorldRay.Direction.field0_0x0._s_0.X = 0.0;
        *(undefined4 *)((longlong)&param_1[0xf].LastWorldRay.Direction.field0_0x0 + 8) = 0;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)&param_1[0xf]._padding_,
                   (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_80);
        *(undefined1 *)((longlong)&param_1[0xf].LastWorldRay.Direction.field0_0x0 + 0x10) = 1;
      }
      local_38 = 0;
      if (local_40 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_40);
      }
      iVar3 = SUB84(local_80._8_8_,4);
      local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
      }
      uVar4 = local_58._4_4_;
      local_58 = (ulonglong)local_58._4_4_ << 0x20;
      uStack_50 = 0xffffffff;
      if (0x80 < uVar4) {
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
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4776106948590305365>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                     ,0x55,"Tool && Tool->GetTarget()");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// StaticRegisterNativesUMeshVertexPaintToolBuilder @ 14cd2f170

void __cdecl UMeshVertexPaintToolBuilder::StaticRegisterNativesUMeshVertexPaintToolBuilder(void)

{
  return;
}

