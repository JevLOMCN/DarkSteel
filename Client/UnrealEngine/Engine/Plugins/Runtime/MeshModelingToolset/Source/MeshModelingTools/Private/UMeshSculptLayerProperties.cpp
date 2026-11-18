// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 28

// StaticClass @ 14cc8fa90

UClass * __cdecl UMeshSculptLayerProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSculptLayerProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSculptLayerProperties",
               &Z_Registration_Info_UClass_UMeshSculptLayerProperties.InnerSingleton,
               StaticRegisterNativesUMeshSculptLayerProperties,0x68,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMeshSculptLayerProperties>,
               InternalVTableHelperCtorCaller<UMeshSculptLayerProperties>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSculptLayerProperties.InnerSingleton;
}

// UMeshSculptLayerProperties @ 14ccbc800

UMeshSculptLayerProperties * __thiscall
UMeshSculptLayerProperties::UMeshSculptLayerProperties
          (UMeshSculptLayerProperties *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshSculptLayerProperties__6B_;
  this->ActiveLayer = 0;
  (this->LayerWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerWeights).ArrayNum = 0;
  (this->LayerWeights).ArrayMax = 0;
  this->bCanEditLayers = false;
  this->Tool = (IModelingToolExternalDynamicMeshUpdateAPI *)0x0;
  this->NumLockedBaseLayers = 0;
  (this->InitialMesh).Object = (FDynamicMesh3 *)0x0;
  (this->InitialMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMeshSculptLayerProperties @ 14ccbc850

UMeshSculptLayerProperties * __thiscall
UMeshSculptLayerProperties::UMeshSculptLayerProperties
          (UMeshSculptLayerProperties *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshSculptLayerProperties__6B_;
  this->ActiveLayer = 0;
  (this->LayerWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerWeights).ArrayNum = 0;
  (this->LayerWeights).ArrayMax = 0;
  this->bCanEditLayers = false;
  this->Tool = (IModelingToolExternalDynamicMeshUpdateAPI *)0x0;
  this->NumLockedBaseLayers = 0;
  (this->InitialMesh).Object = (FDynamicMesh3 *)0x0;
  (this->InitialMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMeshSculptLayerProperties @ 14ccc3db0

void __thiscall
UMeshSculptLayerProperties::~UMeshSculptLayerProperties(UMeshSculptLayerProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshSculptLayerProperties__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InitialMesh).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->LayerWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14ccc7430

void __thiscall
`UMeshSculptLayerProperties::AddLayer'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,FDynamicMeshSculptLayers *param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDynamicMeshAttributeSet *this_00;
  undefined8 local_18 [2];
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableSculptLayers
            (this_00,(param_2->Layers).Array.ArrayNum + 1);
  lVar2 = *(longlong *)this;
  local_18[0] = __real_3ff0000000000000;
  if ((*(undefined8 **)(lVar2 + 0x30) <= local_18) &&
     (local_18 < *(undefined8 **)(lVar2 + 0x30) + *(int *)(lVar2 + 0x3c))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0x38);
  if (iVar5 == *(int *)(lVar2 + 0x3c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar2 + 0x30),(int *)(lVar2 + 0x3c));
  }
  *(int *)(lVar2 + 0x38) = iVar5 + 1;
  *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// operator() @ 14ccce090

void __thiscall
`UMeshSculptLayerProperties::RemoveLayer'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,FDynamicMeshSculptLayers *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  bVar2 = UE::Geometry::FDynamicMeshSculptLayers::DiscardSculptLayer
                    (param_2,*(int *)(*(longlong *)this + 0x28));
  if (bVar2) {
    UMeshSculptLayerProperties::UpdateSettingsFromMesh(*(UMeshSculptLayerProperties **)this,param_2)
    ;
    lVar7 = *(longlong *)this;
    if (*(int *)(lVar7 + 0x28) < *(int *)(lVar7 + 0x50)) {
      uVar5 = 0;
      if (0 < *(int *)(lVar7 + 0x38)) {
        lVar6 = 0;
        do {
          uVar3 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x38)) {
            uVar3 = ~uVar5 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(double *)(*(longlong *)(lVar7 + 0x30) + lVar6) != 0.0) {
            if (uVar5 != 0xffffffff) goto LAB_14ccce1b7;
            break;
          }
          lVar7 = *(longlong *)this;
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 8;
        } while ((int)uVar5 < *(int *)(lVar7 + 0x38));
      }
      lVar7 = *(longlong *)this;
      if ((*(int *)(lVar7 + 0x38) < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = 0;
      **(undefined8 **)(lVar7 + 0x30) = 0x3ff0000000000000;
      UMeshSculptLayerProperties::SetLayerWeights(*(UMeshSculptLayerProperties **)this,param_2);
LAB_14ccce1b7:
      iVar4 = UE::Geometry::FDynamicMeshSculptLayers::SetActiveLayer
                        (param_2,*(int *)(*(longlong *)this + 0x50) + uVar5);
      *(int *)(*(longlong *)this + 0x28) = iVar4;
      **(undefined1 **)((longlong)this + 8) = 1;
    }
  }
  return;
}

// operator() @ 14cccfa70

TUniquePtr<FMeshRegionChangeBase,TDefaultDelete<FMeshRegionChangeBase>_> __thiscall
`UMeshSculptLayerProperties::EditSculptLayers'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  longlong lVar1;
  FDynamicMeshAttributeSet *pFVar2;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar3;
  FDynamicMesh3 **ppFVar4;
  FDynamicMeshSculptLayers *pFVar5;
  FMeshReplacementChange *this_00;
  FMeshReplacementChange *pFVar6;
  undefined8 *puVar7;
  undefined4 in_register_00000084;
  FDynamicMesh3 *pFVar8;
  int in_R9D;
  FMeshReplacementChange *pFVar9;
  TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> local_68;
  FDynamicMesh3 *local_58;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_38;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_28;
  
  pFVar8 = (FDynamicMesh3 *)CONCAT44(in_register_00000084,param_2);
  pFVar6 = (FMeshReplacementChange *)0x0;
  if (in_R9D < 1) {
    if (*(longlong *)(*(longlong *)this + 0x58) == 0) {
      pTVar3 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3_&>
                         (&local_38,pFVar8);
      local_50.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
      local_58 = pTVar3->Object;
      if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar1 = *(longlong *)this;
      ppFVar4 = (FDynamicMesh3 **)(lVar1 + 0x58);
      if (ppFVar4 != &local_58) {
        *ppFVar4 = local_58;
        local_58 = (FDynamicMesh3 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar1 + 0x60),&local_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    pFVar2 = (pFVar8->AttributeSet).Ptr;
    if ((pFVar2 != (FDynamicMeshAttributeSet *)0x0) &&
       (pFVar5 = &pFVar2->SculptLayers, pFVar5 != (FDynamicMeshSculptLayers *)0x0)) {
      local_68.Object = (FDynamicMesh3 *)pFVar5;
      (*(code *)**(undefined8 **)((longlong)this + 8))
                ((*(undefined8 **)((longlong)this + 8))[1],pFVar8,&local_68);
    }
    if (*(char *)((longlong)this + 0x10) == '\0') {
      param_1->_padding_ = 0;
    }
    else {
      this_00 = ::operator_new(0x60);
      pFVar9 = pFVar6;
      if (this_00 != (FMeshReplacementChange *)0x0) {
        pTVar3 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3_&>
                           (&local_28,pFVar8);
        local_68.Object = pTVar3->Object;
        local_68.SharedReferenceCount.ReferenceController =
             (pTVar3->SharedReferenceCount).ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_38.Object = *(FDynamicMesh3 **)(*(longlong *)this + 0x58);
        local_38.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x60);
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar6 = FMeshReplacementChange::FMeshReplacementChange
                           (this_00,(TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)&local_38,
                            &local_68);
        pFVar9 = (FMeshReplacementChange *)&DAT_00000001;
      }
      if (pFVar9 != (FMeshReplacementChange *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
      }
      lVar1 = *(longlong *)this;
      puVar7 = (undefined8 *)(lVar1 + 0x58);
      local_48 = 0;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (puVar7 != &local_48) {
        *puVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar1 + 0x60),&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      param_1->_padding_ = (longlong)pFVar6;
    }
  }
  else {
    param_1->_padding_ = 0;
  }
  return (TUniquePtr<FMeshRegionChangeBase,TDefaultDelete<FMeshRegionChangeBase>_>)
         (FMeshRegionChangeBase *)param_1;
}

// operator() @ 14ccd02d0

void __thiscall
`UMeshSculptLayerProperties::RemoveLayerAtIndex'::__l28::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,FDynamicMeshSculptLayers *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  TArrayView<double_const_,int> local_28 [2];
  
  bVar2 = UE::Geometry::FDynamicMeshSculptLayers::DiscardSculptLayer
                    (param_2,**(int **)((longlong)this + 8));
  if (bVar2) {
    if (**(int **)((longlong)this + 0x10) < *(int *)(*(longlong *)this + 0x28)) {
      local_28[0].DataPtr = (double *)(param_2->LayerWeights).AllocatorInstance.Data;
      iVar3 = (param_2->LayerWeights).ArrayNum;
      if ((iVar3 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_28[0].ArrayNum = iVar3;
      pdVar5 = TArrayView<double_const_,int>::operator[]
                         (local_28,*(int *)(*(longlong *)this + 0x28) + -1);
      lVar8 = *(longlong *)this;
      if (*pdVar5 == 0.0) {
        uVar6 = 0;
        if (0 < *(int *)(lVar8 + 0x38)) {
          lVar7 = 0;
          do {
            uVar4 = 0;
            if ((int)uVar6 < *(int *)(lVar8 + 0x38)) {
              uVar4 = ~uVar6 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(double *)(*(longlong *)(lVar8 + 0x30) + lVar7) != 0.0) {
              if (uVar6 != 0xffffffff) goto LAB_14ccd0457;
              break;
            }
            lVar8 = *(longlong *)this;
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 8;
          } while ((int)uVar6 < *(int *)(lVar8 + 0x38));
        }
        lVar8 = *(longlong *)this;
        if ((*(int *)(lVar8 + 0x38) < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar6 = 0;
        **(undefined8 **)(lVar8 + 0x30) = 0x3ff0000000000000;
        UMeshSculptLayerProperties::SetLayerWeights(*(UMeshSculptLayerProperties **)this,param_2);
LAB_14ccd0457:
        iVar3 = UE::Geometry::FDynamicMeshSculptLayers::SetActiveLayer
                          (param_2,*(int *)(*(longlong *)this + 0x50) + uVar6);
      }
      else {
        iVar3 = UE::Geometry::FDynamicMeshSculptLayers::SetActiveLayer
                          (param_2,*(int *)(lVar8 + 0x28) + -1);
      }
      *(int *)(*(longlong *)this + 0x28) = iVar3;
    }
    UMeshSculptLayerProperties::UpdateSettingsFromMesh(*(UMeshSculptLayerProperties **)this,param_2)
    ;
    **(undefined1 **)((longlong)this + 0x18) = 1;
  }
  return;
}

// AddLayer @ 14ccde1a0

void __thiscall UMeshSculptLayerProperties::AddLayer(UMeshSculptLayerProperties *this)

{
  UMeshSculptLayerProperties *local_res8 [4];
  code *local_18;
  UMeshSculptLayerProperties **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshSculptLayerProperties::AddLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
             ::Call;
  local_res8[0] = this;
  EditSculptLayers(this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                         *)&local_18,true);
  return;
}

// EditSculptLayers @ 14ccf8350

void __thiscall
UMeshSculptLayerProperties::EditSculptLayers
          (UMeshSculptLayerProperties *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
          *param_1,bool param_2)

{
  char cVar1;
  code *local_38;
  UMeshSculptLayerProperties **local_30;
  UMeshSculptLayerProperties *local_28;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
  *local_20;
  undefined1 local_18;
  
  if (this->Tool != (IModelingToolExternalDynamicMeshUpdateAPI *)0x0) {
    cVar1 = (**(code **)((longlong)*this->Tool + 0x10))();
    if (cVar1 != '\0') {
      local_30 = &local_28;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptLayerProperties::EditSculptLayers'::__l5::<lambda_1>,TUniquePtr<FMeshRegionChangeBase,TDefaultDelete<FMeshRegionChangeBase>_>,UE::Geometry::FDynamicMesh3_&,int>
                 ::Call;
      local_28 = this;
      local_20 = param_1;
      local_18 = param_2;
      (**(code **)((longlong)*this->Tool + 0x18))(this->Tool,&local_38);
    }
  }
  return;
}

// GetLayerName @ 14ccfe540

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
UMeshSculptLayerProperties::GetLayerName(UMeshSculptLayerProperties *this,int param_1)

{
  uint in_register_00000014;
  FName FVar1;
  int in_R8D;
  undefined8 local_res8 [2];
  undefined1 local_res18 [16];
  code *local_38;
  UMeshSculptLayerProperties **local_30;
  UMeshSculptLayerProperties *local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  if ((-1 < in_R8D) && (in_R8D < (this->LayerWeights).ArrayNum)) {
    local_res8[0] = 0;
    local_20 = local_res18;
    local_18 = local_res8;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshSculptLayerProperties::GetLayerName'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
               ::Call;
    local_28 = this;
    EditSculptLayers(this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                           *)&local_38,false);
    *(undefined8 *)FVar1 = local_res8[0];
    return FVar1;
  }
  if (2 < (byte)LogSculptLayerProps._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
  }
  *(undefined8 *)FVar1 = 0;
  return FVar1;
}

// GetPrivateStaticClass @ 14cd00140

UClass * __cdecl UMeshSculptLayerProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSculptLayerProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSculptLayerProperties",
               &Z_Registration_Info_UClass_UMeshSculptLayerProperties.InnerSingleton,
               StaticRegisterNativesUMeshSculptLayerProperties,0x68,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMeshSculptLayerProperties>,
               InternalVTableHelperCtorCaller<UMeshSculptLayerProperties>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSculptLayerProperties.InnerSingleton;
}

// Init @ 14cd03fa0

void __thiscall
UMeshSculptLayerProperties::Init
          (UMeshSculptLayerProperties *this,IModelingToolExternalDynamicMeshUpdateAPI *param_1,
          int param_2)

{
  UMeshSculptLayerProperties *local_res8;
  code *local_18;
  UMeshSculptLayerProperties **local_10;
  
  this->bCanEditLayers = true;
  (this->LayerWeights).ArrayNum = 0;
  if ((this->LayerWeights).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LayerWeights).AllocatorInstance,0,&(this->LayerWeights).ArrayMax);
  }
  this->Tool = param_1;
  if (param_1 != (IModelingToolExternalDynamicMeshUpdateAPI *)0x0) {
    this->NumLockedBaseLayers = param_2;
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshSculptLayerProperties::Init'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&,int>
               ::Call;
    local_res8 = this;
    (**(code **)((longlong)*param_1 + 0x20))(param_1,&local_18);
  }
  return;
}

// MoveLayer @ 14cd0c2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshSculptLayerProperties::MoveLayer(UMeshSculptLayerProperties *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_res10 [2];
  int local_res18 [4];
  code *local_38;
  UMeshSculptLayerProperties **local_30;
  UMeshSculptLayerProperties *local_28;
  int *local_20;
  int *local_18;
  
  iVar1 = (this->LayerWeights).ArrayNum;
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  local_res18[0] = 0;
  if (0 < iVar2) {
    local_res18[0] = iVar2;
  }
  if ((param_1 < 0) || (iVar1 <= param_1)) {
    if (2 < (byte)LogSculptLayerProps._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
    }
  }
  else if ((local_res18[0] < 0) || (iVar1 <= local_res18[0])) {
    if (2 < (byte)LogSculptLayerProps._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
      return;
    }
  }
  else {
    if (param_1 != local_res18[0]) {
      local_res10[0] = this->NumLockedBaseLayers + param_1;
      local_res18[0] = this->NumLockedBaseLayers + local_res18[0];
      local_20 = local_res10;
      local_18 = local_res18;
      local_30 = &local_28;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptLayerProperties::MoveLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
                 ::Call;
      local_28 = this;
      EditSculptLayers(this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                             *)&local_38,true);
      return;
    }
    if (2 < (byte)LogSculptLayerProps._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
      return;
    }
  }
  return;
}

// RemoveLayer @ 14cd1b520

bool __thiscall UMeshSculptLayerProperties::RemoveLayer(UMeshSculptLayerProperties *this)

{
  undefined1 local_res8 [32];
  UMeshSculptLayerProperties *local_28;
  undefined1 *local_20;
  code *local_18;
  UMeshSculptLayerProperties **local_10;
  
  if ((this->LayerWeights).ArrayNum < 2) {
    return false;
  }
  local_20 = local_res8;
  local_res8[0] = 0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshSculptLayerProperties::RemoveLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
             ::Call;
  local_28 = this;
  EditSculptLayers(this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                         *)&local_18,true);
  return (bool)local_res8[0];
}

// RemoveLayerAtIndex @ 14cd1b580

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMeshSculptLayerProperties::RemoveLayerAtIndex(UMeshSculptLayerProperties *this,int param_1)

{
  int iVar1;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined1 local_res18 [8];
  int local_res20 [2];
  UMeshSculptLayerProperties *local_38;
  int *local_30;
  int *local_28;
  undefined1 *local_20;
  code *local_18;
  UMeshSculptLayerProperties **local_10;
  
  local_res10[0] = param_1;
  if ((param_1 < 0) || (iVar1 = (this->LayerWeights).ArrayNum, iVar1 <= param_1)) {
    if (2 < (byte)LogSculptLayerProps._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
    }
  }
  else {
    local_res20[0] = param_1 + this->NumLockedBaseLayers;
    local_res18[0] = 0;
    local_38 = this;
    if (local_res20[0] != this->ActiveLayer) {
      local_30 = local_res20;
      local_28 = local_res10;
      local_20 = local_res18;
      local_10 = &local_38;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptLayerProperties::RemoveLayerAtIndex'::__l28::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
                 ::Call;
      EditSculptLayers(this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                             *)&local_18,true);
      return (bool)local_res18[0];
    }
    if (1 < iVar1) {
      local_30 = (int *)local_res8;
      local_res8[0] = 0;
      local_10 = &local_38;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptLayerProperties::RemoveLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
                 ::Call;
      EditSculptLayers(this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                             *)&local_18,true);
      return (bool)local_res8[0];
    }
  }
  return false;
}

// SetActiveLayer @ 14cd1d980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshSculptLayerProperties::SetActiveLayer(UMeshSculptLayerProperties *this,int param_1)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  FField *pFVar4;
  bool bVar5;
  FName *pFVar6;
  int iVar7;
  FName local_28;
  TFieldIterator<FProperty> local_20;
  
  if ((param_1 < 0) || ((this->LayerWeights).ArrayNum <= param_1)) {
    if (2 < (byte)LogSculptLayerProps._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
      return;
    }
  }
  else {
    iVar7 = this->NumLockedBaseLayers;
    iVar1 = iVar7 + param_1;
    if (iVar1 != this->ActiveLayer) {
      iVar2 = (this->LayerWeights).ArrayNum;
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      if (iVar7 < iVar2) {
        iVar7 = iVar2;
      }
      this->ActiveLayer = iVar7;
      pFVar6 = ::FName::FName(&local_28,0xb,L"ActiveLayer",FNAME_Add);
      FVar3 = *pFVar6;
      local_20.Struct = (UStruct *)StaticClass();
      if (FVar3 != (FName)0x0) {
        if ((UClass *)local_20.Struct == (UClass *)0x0) {
          local_20.Field = (FField *)0x0;
        }
        else {
          local_20.Field = (FField *)((UClass *)local_20.Struct)->_padding_;
        }
        local_20.InterfaceIndex = -1;
        local_20.bIncludeSuper = true;
        local_20.bIncludeDeprecated = true;
        local_20.bIncludeInterface = false;
        TFieldIterator<FProperty>::IterateToNext(&local_20);
        pFVar4 = local_20.Field;
        while (pFVar4 != (FField *)0x0) {
          local_20.Field = pFVar4;
          bVar5 = IsThisNotNull(pFVar4,"FField::GetFName");
          if (bVar5) {
            local_28 = pFVar4->NamePrivate;
          }
          else {
            local_28.ComparisonIndex.Value = 0;
            local_28.Number = 0;
          }
          if (local_28 == FVar3) {
            return;
          }
          local_20.Field = pFVar4->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_20);
          pFVar4 = local_20.Field;
        }
      }
    }
  }
  return;
}

// SetLayerName @ 14cd1ebd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshSculptLayerProperties::SetLayerName(UMeshSculptLayerProperties *this,int param_1,FName param_2)

{
  int local_res10 [2];
  FName local_res18 [2];
  code *local_38;
  UMeshSculptLayerProperties **local_30;
  UMeshSculptLayerProperties *local_28;
  int *local_20;
  FName *local_18;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  if ((-1 < param_1) && (param_1 < (this->LayerWeights).ArrayNum)) {
    local_20 = local_res10;
    local_18 = local_res18;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshSculptLayerProperties::SetLayerName'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
               ::Call;
    local_28 = this;
    EditSculptLayers(this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                           *)&local_38,true);
    return;
  }
  if (2 < (byte)LogSculptLayerProps._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
  }
  return;
}

// SetLayerWeight @ 14cd1ec50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshSculptLayerProperties::SetLayerWeight
          (UMeshSculptLayerProperties *this,int param_1,double param_2,uint param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  int local_res10 [2];
  double local_res18;
  code *local_48;
  UMeshSculptLayerProperties **local_40;
  UMeshSculptLayerProperties *local_38;
  int *local_30;
  double *local_28;
  
  local_res18 = param_2;
  if ((param_1 < 0) || ((this->LayerWeights).ArrayNum <= param_1)) {
    if (2 < (byte)LogSculptLayerProps._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
    }
  }
  else {
    local_res10[0] = this->NumLockedBaseLayers + param_1;
    if ((local_res10[0] == this->ActiveLayer) && (param_2 == 0.0)) {
      local_res18 = __real_3fb999999999999a;
    }
    dVar2 = local_res18;
    uVar4 = 0;
    if (param_1 < (this->LayerWeights).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(double *)((this->LayerWeights).AllocatorInstance.Data + (longlong)param_1 * 8) = dVar2;
    local_30 = local_res10;
    local_28 = &local_res18;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshSculptLayerProperties::SetLayerWeight'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
               ::Call;
    local_38 = this;
    EditSculptLayers(this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                           *)&local_48,param_3 != 0x40);
  }
  return;
}

// SetLayerWeights @ 14cd1ed90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshSculptLayerProperties::SetLayerWeights
          (UMeshSculptLayerProperties *this,FDynamicMeshSculptLayers *param_1)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TArray<double,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<double_const_,int> local_28 [2];
  
  iVar2 = (param_1->LayerWeights).ArrayNum;
  _Src = (param_1->LayerWeights).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&local_48.AllocatorInstance,iVar2,&local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
  }
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            (&local_48,(this->LayerWeights).ArrayNum + this->NumLockedBaseLayers,Default);
  uVar6 = 0;
  if (0 < (this->LayerWeights).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->LayerWeights).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = this->NumLockedBaseLayers + uVar6;
      uVar1 = *(undefined8 *)((this->LayerWeights).AllocatorInstance.Data + lVar8);
      uVar5 = 0;
      if ((int)uVar7 < local_48.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 8;
      *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = uVar1;
    } while ((int)uVar6 < (this->LayerWeights).ArrayNum);
  }
  iVar2 = local_48.ArrayNum;
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_30 = iVar2;
  local_28[0]._12_4_ = uStack_2c;
  local_28[0].ArrayNum = iVar2;
  local_28[0].DataPtr = (double *)local_38;
  UE::Geometry::FDynamicMeshSculptLayers::UpdateLayerWeights(param_1,local_28);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMeshSculptLayerProperties @ 14cd2f030

void __cdecl UMeshSculptLayerProperties::StaticRegisterNativesUMeshSculptLayerProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UMeshSculptLayerProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSettingsFromMesh @ 14cd3a2d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshSculptLayerProperties::UpdateSettingsFromMesh
          (UMeshSculptLayerProperties *this,FDynamicMeshSculptLayers *param_1)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar2 = (param_1->LayerWeights).ArrayNum;
  pFVar3 = (param_1->LayerWeights).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = iVar2 - this->NumLockedBaseLayers;
  uVar8 = 0;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&this->LayerWeights,iVar7,Default);
  if (0 < (this->LayerWeights).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = this->NumLockedBaseLayers + uVar8;
      uVar6 = 0;
      if ((int)uVar10 < iVar2) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar10 * 8);
      uVar6 = 0;
      if ((int)uVar8 < (this->LayerWeights).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(undefined8 *)((this->LayerWeights).AllocatorInstance.Data + lVar9) = uVar1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->LayerWeights).ArrayNum);
  }
  this->ActiveLayer = param_1->ActiveLayer;
  return;
}

// execGetLayerName @ 14cd3fc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshSculptLayerProperties::execGetLayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  code *local_48;
  UObject **local_40;
  UObject *local_38;
  int *local_30;
  undefined8 *local_28;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((-1 < local_res8[0]) && (local_res8[0] < *(int *)&param_1[1].field_0x10)) {
    local_30 = local_res10;
    local_res18 = 0;
    local_28 = &local_res18;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshSculptLayerProperties::GetLayerName'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
               ::Call;
    local_38 = param_1;
    EditSculptLayers((UMeshSculptLayerProperties *)param_1,
                     (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                      *)&local_48,false);
    *(undefined8 *)param_3 = local_res18;
    return;
  }
  if (2 < (byte)LogSculptLayerProps._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execMoveLayer @ 14cd3ff40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshSculptLayerProperties::execMoveLayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  int iVar3;
  FStaticBasicLogRecord *pFVar4;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  int local_58 [2];
  code *local_50;
  UObject **local_48;
  UObject *local_40;
  int *local_38;
  int *local_30;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[1].field_0x10;
  iVar3 = iVar1 + -1;
  if (local_res8[0] < iVar1 + -1) {
    iVar3 = local_res8[0];
  }
  local_58[0] = 0;
  if (0 < iVar3) {
    local_58[0] = iVar3;
  }
  if ((local_res10[0] < 0) || (iVar1 <= local_res10[0])) {
    if ((byte)LogSculptLayerProps._0_1_ < 3) {
      return;
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((-1 < local_58[0]) && (local_58[0] < iVar1)) {
      if (local_res10[0] != local_58[0]) {
        local_res20[0] = *(int *)(param_1 + 2) + local_res10[0];
        local_58[0] = *(int *)(param_1 + 2) + local_58[0];
        local_38 = local_res20;
        local_30 = local_58;
        local_48 = &local_40;
        local_50 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UMeshSculptLayerProperties::MoveLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
                   ::Call;
        local_40 = param_1;
        EditSculptLayers((UMeshSculptLayerProperties *)param_1,
                         (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                          *)&local_50,true);
        return;
      }
      if ((byte)LogSculptLayerProps._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
      return;
    }
    if ((byte)LogSculptLayerProps._0_1_ < 3) {
      return;
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&LogSculptLayerProps);
  return;
}

// execRemoveLayerAtIndex @ 14cd40170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshSculptLayerProperties::execRemoveLayerAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_68 [2];
  UObject *local_60;
  int *local_58;
  int *local_50;
  undefined1 *local_48;
  code *local_40;
  UObject **local_38;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_68[0] = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res18[0] < 0) || (*(int *)&param_1[1].field_0x10 <= local_res18[0])) {
    if (2 < (byte)LogSculptLayerProps._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_res20[0] = *(int *)(param_1 + 2) + local_res18[0];
  local_res10[0] = 0;
  local_60 = param_1;
  if (local_res20[0] != *(int *)(param_1 + 1)) {
    local_58 = local_res20;
    local_50 = local_68;
    local_48 = local_res10;
    local_38 = &local_60;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshSculptLayerProperties::RemoveLayerAtIndex'::__l28::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
               ::Call;
    EditSculptLayers((UMeshSculptLayerProperties *)param_1,
                     (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                      *)&local_40,true);
    *(undefined1 *)param_3 = local_res10[0];
    return;
  }
  if (*(int *)&param_1[1].field_0x10 < 2) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_58 = (int *)local_res8;
  local_res8[0] = 0;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshSculptLayerProperties::RemoveLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
             ::Call;
  EditSculptLayers((UMeshSculptLayerProperties *)param_1,
                   (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                    *)&local_40,true);
  *(undefined1 *)param_3 = local_res8[0];
  return;
}

// execSetActiveLayer @ 14cd40340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshSculptLayerProperties::execSetActiveLayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FName FVar3;
  int iVar4;
  FField *pFVar5;
  bool bVar6;
  FName *pFVar7;
  int iVar8;
  int local_38;
  FName local_34;
  TFieldIterator<FProperty> local_28;
  
  local_38 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_38 < 0) || (*(int *)&param_1[1].field_0x10 <= local_38)) {
    if (2 < (byte)LogSculptLayerProps._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 2);
    iVar1 = iVar8 + local_38;
    if (iVar1 != *(int *)(param_1 + 1)) {
      iVar4 = *(int *)&param_1[1].field_0x10;
      if (iVar1 < *(int *)&param_1[1].field_0x10) {
        iVar4 = iVar1;
      }
      if (iVar8 < iVar4) {
        iVar8 = iVar4;
      }
      *(int *)(param_1 + 1) = iVar8;
      pFVar7 = ::FName::FName(&local_34,0xb,L"ActiveLayer",FNAME_Add);
      FVar3 = *pFVar7;
      local_28.Struct = (UStruct *)StaticClass();
      if (FVar3 != (FName)0x0) {
        if ((UClass *)local_28.Struct == (UClass *)0x0) {
          local_28.Field = (FField *)0x0;
        }
        else {
          local_28.Field = (FField *)((UClass *)local_28.Struct)->_padding_;
        }
        local_28.InterfaceIndex = -1;
        local_28.bIncludeSuper = true;
        local_28.bIncludeDeprecated = true;
        local_28.bIncludeInterface = false;
        TFieldIterator<FProperty>::IterateToNext(&local_28);
        if (local_28.Field != (FField *)0x0) {
          while( true ) {
            pFVar5 = local_28.Field;
            bVar6 = IsThisNotNull(local_28.Field,"FField::GetFName");
            if (bVar6) {
              local_34 = pFVar5->NamePrivate;
            }
            else {
              local_34.ComparisonIndex.Value = 0;
              local_34.Number = 0;
            }
            if (local_34 == FVar3) break;
            local_28.Field = pFVar5->Next;
            TFieldIterator<FProperty>::IterateToNext(&local_28);
            if (local_28.Field == (FField *)0x0) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}

// execSetLayerName @ 14cd404e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshSculptLayerProperties::execSetLayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_58;
  code *local_50;
  UObject **local_48;
  UObject *local_40;
  int *local_38;
  undefined8 *local_30;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = local_res8[0];
  local_58 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((-1 < local_res8[0]) && (local_res8[0] < *(int *)&param_1[1].field_0x10)) {
    local_38 = local_res10;
    local_30 = &local_58;
    local_48 = &local_40;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshSculptLayerProperties::SetLayerName'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
               ::Call;
    local_40 = param_1;
    EditSculptLayers((UMeshSculptLayerProperties *)param_1,
                     (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                      *)&local_50,true);
    return;
  }
  if (2 < (byte)LogSculptLayerProps._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
  }
  return;
}

// execSetLayerWeight @ 14cd40640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshSculptLayerProperties::execSetLayerWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_res8 [2];
  uint local_res10 [2];
  int local_res20 [2];
  double local_88;
  double local_80;
  code *local_78;
  UObject **local_70;
  UObject *local_68;
  int *local_60;
  double *local_58;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res8[0] = 0;
  FUInt32Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res8[0];
  uVar8 = SUB84(local_88,0);
  uVar9 = (undefined4)((ulonglong)local_88 >> 0x20);
  local_80 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_res10[0];
  if (((int)local_res10[0] < 0) || (*(int *)&param_1[1].field_0x10 <= (int)local_res10[0])) {
    if (2 < (byte)LogSculptLayerProps._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSculptLayerProps);
    }
  }
  else {
    local_res20[0] = *(int *)(param_1 + 2) + local_res10[0];
    if ((local_res20[0] == *(int *)(param_1 + 1)) && (local_88 == 0.0)) {
      uVar8 = SUB84(__real_3fb999999999999a,0);
      uVar9 = (undefined4)((ulonglong)__real_3fb999999999999a >> 0x20);
      local_80 = __real_3fb999999999999a;
    }
    uVar7 = 0;
    if ((int)local_res10[0] < *(int *)&param_1[1].field_0x10) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(ulonglong *)(*(longlong *)&param_1[1].field_0x8 + lVar6 * 8) = CONCAT44(uVar9,uVar8);
    local_60 = local_res20;
    local_58 = &local_80;
    local_70 = &local_68;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshSculptLayerProperties::SetLayerWeight'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*>
               ::Call;
    local_68 = param_1;
    EditSculptLayers((UMeshSculptLayerProperties *)param_1,
                     (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshSculptLayers_*)>
                      *)&local_78,iVar4 != 0x40);
  }
  return;
}

