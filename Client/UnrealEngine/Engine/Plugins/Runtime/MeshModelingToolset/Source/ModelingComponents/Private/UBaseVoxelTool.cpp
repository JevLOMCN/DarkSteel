// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// StaticClass @ 14ca3f0e0

UClass * __cdecl UBaseVoxelTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseVoxelTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseVoxelTool",
               &Z_Registration_Info_UClass_UBaseVoxelTool.InnerSingleton,
               StaticRegisterNativesUBaseVoxelTool,0x148,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseVoxelTool>,
               InternalVTableHelperCtorCaller<UBaseVoxelTool>,local_res8,
               UBaseCreateFromSelectedTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseVoxelTool.InnerSingleton;
}

// UBaseVoxelTool @ 14ca677b0

UBaseVoxelTool * __thiscall
UBaseVoxelTool::UBaseVoxelTool(UBaseVoxelTool *this,FVTableHelper *param_1)

{
  UBaseCreateFromSelectedTool::UBaseCreateFromSelectedTool
            ((UBaseCreateFromSelectedTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->VoxProperties).field0_0x0.DebugPtr = (UVoxelProperties *)0x0;
  (this->OriginalDynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalDynamicMeshes).ArrayNum = 0;
  (this->OriginalDynamicMeshes).ArrayMax = 0;
  return this;
}

// UBaseVoxelTool @ 14ca67820

UBaseVoxelTool * __thiscall UBaseVoxelTool::UBaseVoxelTool(UBaseVoxelTool *this)

{
  UBaseCreateFromSelectedTool::UBaseCreateFromSelectedTool((UBaseCreateFromSelectedTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->VoxProperties).field0_0x0.DebugPtr = (UVoxelProperties *)0x0;
  (this->OriginalDynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalDynamicMeshes).ArrayNum = 0;
  (this->OriginalDynamicMeshes).ArrayMax = 0;
  return this;
}

// ~UBaseVoxelTool @ 14ca6b4e0

void __thiscall UBaseVoxelTool::~UBaseVoxelTool(UBaseVoxelTool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  DestructItems<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,int>
            ((TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)
             (this->OriginalDynamicMeshes).AllocatorInstance.Data,
             (this->OriginalDynamicMeshes).ArrayNum);
  pFVar1 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBaseCreateFromSelectedTool::~UBaseCreateFromSelectedTool((UBaseCreateFromSelectedTool *)this);
  return;
}

// ConvertInputsAndSetPreviewMaterials @ 14ca83570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UBaseVoxelTool::ConvertInputsAndSetPreviewMaterials(UBaseVoxelTool *this,bool param_1)

{
  TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  int iVar2;
  UMeshOpPreviewWithBackgroundCompute *this_01;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  FDynamicMesh3 *pFVar9;
  UInteractiveToolManager *pUVar10;
  UMaterialInterface *pUVar11;
  UMaterialInterface *pUVar12;
  FScriptContainerElement *pFVar13;
  FSharedReferencer<1> FVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong local_res8;
  TReferenceControllerBase<1> *local_288;
  FSharedReferencer<1> FStack_280;
  FGetMeshParameters local_278;
  FDynamicMesh3 local_268;
  
  uVar19 = (uint)this->_padding_;
  this_00 = &this->OriginalDynamicMeshes;
  iVar2 = (this->OriginalDynamicMeshes).ArrayNum;
  piVar1 = &(this->OriginalDynamicMeshes).ArrayNum;
  if (iVar2 < (int)uVar19) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar19 - iVar2,&this_00->AllocatorInstance,piVar1,
                       &(this->OriginalDynamicMeshes).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10,0,
           (longlong)(int)(uVar19 - iVar2) << 4);
  }
  else {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if ((int)uVar19 < iVar2) {
      uVar17 = iVar2 - uVar19;
      if (((int)(uVar17 | uVar19) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar17 != 0) {
        TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar19,uVar17);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,
                   &(this->OriginalDynamicMeshes).ArrayMax);
      }
    }
  }
  pTVar5 = _UNK_150651568;
  pTVar4 = ___xmm_00000000000000000000000000000010;
  uVar19 = 0;
  if (0 < (int)this->_padding_) {
    lVar18 = 0;
    local_res8 = 0;
    do {
      pTVar8 = ::operator_new(0x240);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        FVar14.ReferenceController = pTVar5;
        pTVar16 = pTVar4;
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
        ;
        UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(pTVar8 + 1));
        if ((pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        FVar14.ReferenceController = pTVar8;
        pTVar16 = pTVar8 + 1;
      }
      uVar15 = ~uVar19 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar19 < (this->OriginalDynamicMeshes).ArrayNum) {
        uVar17 = uVar15;
      }
      local_288 = pTVar16;
      FStack_280.ReferenceController = FVar14.ReferenceController;
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this_00->AllocatorInstance).Data + lVar18;
      if (pFVar13 != (FScriptContainerElement *)&local_288) {
        *(TReferenceControllerBase<1> **)pFVar13 = pTVar16;
        local_288 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar13 + 8),&FStack_280);
        FVar14.ReferenceController = FStack_280.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar14.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      local_278.bHaveRequestLOD = false;
      local_278._1_3_ = 0;
      local_278.RequestLOD = Default;
      local_278.bWantMeshTangents = false;
      local_278._9_3_ = 0;
      uVar17 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = UE::ToolTarget::GetDynamicMeshCopy
                         (&local_268,*(UToolTarget **)(this->_padding_ + local_res8 * 8),&local_278)
      ;
      uVar17 = 0;
      if ((int)uVar19 < (this->OriginalDynamicMeshes).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this_00->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar13 + lVar18) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)(pFVar13 + lVar18),pFVar9);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
      local_res8 = local_res8 + 1;
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x10;
    } while ((int)uVar19 < (int)this->_padding_);
  }
  this_01 = (UMeshOpPreviewWithBackgroundCompute *)this->_padding_;
  pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar11 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar10);
  pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar12 = ToolSetupUtil::GetDefaultSculptMaterial(pUVar10);
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials(this_01,pUVar12,pUVar11);
  return;
}

// GetOutputMaterials @ 14ca90980

TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> * __thiscall
UBaseVoxelTool::GetOutputMaterials
          (UBaseVoxelTool *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UObject *local_58 [2];
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iStack_30 = 8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  local_48 = (wchar_t *)0x0;
  local_38 = L"MATERIAL";
  pUVar5 = Z_Construct_UClass_UMaterial_NoRegister();
  local_18._12_4_ = uStack_2c;
  local_18.Size = iStack_30;
  local_28.DataPtr = local_48;
  local_28.Size = (int)uStack_40;
  local_28._12_4_ = uStack_40._4_4_;
  local_18.DataPtr = local_38;
  local_58[0] = StaticLoadObject(pUVar5,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true
                                 ,(FLinkerInstancingContext *)0x0);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_58) &&
     ((FScriptContainerElement *)local_58 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_58[0];
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14ca90fc0

UClass * __cdecl UBaseVoxelTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseVoxelTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseVoxelTool",
               &Z_Registration_Info_UClass_UBaseVoxelTool.InnerSingleton,
               StaticRegisterNativesUBaseVoxelTool,0x148,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseVoxelTool>,
               InternalVTableHelperCtorCaller<UBaseVoxelTool>,local_res8,
               UBaseCreateFromSelectedTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseVoxelTool.InnerSingleton;
}

// HasOpenBoundariesInMeshInputs @ 14ca94d30

bool __thiscall UBaseVoxelTool::HasOpenBoundariesInMeshInputs(UBaseVoxelTool *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->OriginalDynamicMeshes).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->OriginalDynamicMeshes).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar7) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = UE::Geometry::FDynamicMesh3::IsClosed(*(FDynamicMesh3 **)(pFVar1 + lVar7));
      if (!bVar3) {
        uVar5 = 0;
        if ((int)uVar6 < (this->OriginalDynamicMeshes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar7) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (0 < *(int *)(*(longlong *)(pFVar1 + lVar7) + 0x170)) {
          return true;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->OriginalDynamicMeshes).ArrayNum);
  }
  return false;
}

// SaveProperties @ 14caa0670

void __thiscall UBaseVoxelTool::SaveProperties(UBaseVoxelTool *this)

{
  UVoxelProperties *pUVar1;
  code *pcVar2;
  FString local_18;
  
  pUVar1 = (this->VoxProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar2)(pUVar1,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetupProperties @ 14caa6050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBaseVoxelTool::SetupProperties(UBaseVoxelTool *this)

{
  code *pcVar1;
  UClass *pUVar2;
  UVoxelProperties *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  FString local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UVoxelProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = this;
  pUVar3 = (UVoxelProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UVoxelProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->VoxProperties).field0_0x0.DebugPtr = pUVar3;
  pcVar1 = *(code **)(pUVar3->_padding_ + 0x2b8);
  ::FString::FString(&local_a8,L"");
  (*pcVar1)(pUVar3,this,&local_a8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->VoxProperties).field0_0x0.DebugPtr);
  return;
}

// StaticRegisterNativesUBaseVoxelTool @ 14caa70e0

void __cdecl UBaseVoxelTool::StaticRegisterNativesUBaseVoxelTool(void)

{
  return;
}

