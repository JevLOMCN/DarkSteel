// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 20

// StaticClass @ 14639a760

UClass * __cdecl UGeometryCollectionISMPoolRenderer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionISMPoolRenderer",
               &Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionISMPoolRenderer,0xe0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCollectionISMPoolRenderer>,
               InternalVTableHelperCtorCaller<UGeometryCollectionISMPoolRenderer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer.InnerSingleton;
}

// UGeometryCollectionISMPoolRenderer @ 1463a46a0

UGeometryCollectionISMPoolRenderer * __thiscall
UGeometryCollectionISMPoolRenderer::UGeometryCollectionISMPoolRenderer
          (UGeometryCollectionISMPoolRenderer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGeometryCollectionExternalRenderInterface__;
  (this->CachedISMPoolComponent).field0_0x0.DebugPtr = (UISMPoolComponent *)0x0;
  (this->LocalISMPoolComponent).field0_0x0.DebugPtr = (UISMPoolComponent *)0x0;
  *&(this->ComponentTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ComponentTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ComponentTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ComponentTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ComponentTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ComponentTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->MergedMeshGroup).MeshIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MergedMeshGroup).MeshIds.ArrayNum = 0;
  (this->MergedMeshGroup).MeshIds.ArrayMax = 0;
  (this->InstancesGroup).MeshIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancesGroup).MeshIds.ArrayNum = 0;
  (this->InstancesGroup).MeshIds.ArrayMax = 0;
  (this->OwningLevel).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsRegistered = false;
  (this->MergedMeshGroup).GroupIndex = -1;
  (this->InstancesGroup).GroupIndex = -1;
  return this;
}

// UGeometryCollectionISMPoolRenderer @ 1463a4770

UGeometryCollectionISMPoolRenderer * __thiscall
UGeometryCollectionISMPoolRenderer::UGeometryCollectionISMPoolRenderer
          (UGeometryCollectionISMPoolRenderer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGeometryCollectionExternalRenderInterface__;
  (this->CachedISMPoolComponent).field0_0x0.DebugPtr = (UISMPoolComponent *)0x0;
  (this->LocalISMPoolComponent).field0_0x0.DebugPtr = (UISMPoolComponent *)0x0;
  *&(this->ComponentTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ComponentTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ComponentTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ComponentTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ComponentTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ComponentTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->MergedMeshGroup).MeshIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MergedMeshGroup).MeshIds.ArrayNum = 0;
  (this->MergedMeshGroup).MeshIds.ArrayMax = 0;
  (this->InstancesGroup).MeshIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancesGroup).MeshIds.ArrayNum = 0;
  (this->InstancesGroup).MeshIds.ArrayMax = 0;
  (this->OwningLevel).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsRegistered = false;
  (this->MergedMeshGroup).GroupIndex = -1;
  (this->InstancesGroup).GroupIndex = -1;
  return this;
}

// ~UGeometryCollectionISMPoolRenderer @ 1463a5d80

void __thiscall
UGeometryCollectionISMPoolRenderer::~UGeometryCollectionISMPoolRenderer
          (UGeometryCollectionISMPoolRenderer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGeometryCollectionExternalRenderInterface__;
  pFVar1 = (this->InstancesGroup).MeshIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MergedMeshGroup).MeshIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IGeometryCollectionExternalRenderInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetISMPoolComponent @ 1463b5ee0

UISMPoolComponent * __thiscall
UGeometryCollectionISMPoolRenderer::GetISMPoolComponent(UGeometryCollectionISMPoolRenderer *this)

{
  UISMPoolComponent *pUVar1;
  
  if (this->bIsRegistered == false) {
    return (UISMPoolComponent *)0x0;
  }
  pUVar1 = (this->LocalISMPoolComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UISMPoolComponent *)0x0) {
    pUVar1 = (this->CachedISMPoolComponent).field0_0x0.DebugPtr;
  }
  return pUVar1;
}

// GetOrCreateISMPoolComponent @ 1463b7140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UISMPoolComponent * __thiscall
UGeometryCollectionISMPoolRenderer::GetOrCreateISMPoolComponent
          (UGeometryCollectionISMPoolRenderer *this)

{
  int iVar1;
  UISMPoolComponent *pUVar2;
  bool bVar3;
  longlong lVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UISMPoolSubSystem *this_00;
  ULevel *pUVar7;
  AISMPoolActor *pAVar8;
  
  if (this->bIsRegistered == false) {
    return (UISMPoolComponent *)0x0;
  }
  pUVar2 = (this->LocalISMPoolComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UISMPoolComponent *)0x0) {
    return pUVar2;
  }
  if (((this->CachedISMPoolComponent).field0_0x0.DebugPtr != (UISMPoolComponent *)0x0) ||
     (lVar4 = (**(code **)(this->_padding_ + 0x180))(), lVar4 == 0)) goto LAB_1463b7248;
  pUVar5 = Z_Construct_UClass_UISMPoolSubSystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_1463b71b5;
LAB_1463b71e3:
    pUVar5 = (UClass *)0x0;
  }
  else {
    if (pUVar5 == (UClass *)0x0) goto LAB_1463b71e3;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_1463b71b5:
    pUVar6 = Z_Construct_UClass_UISMPoolSubSystem_NoRegister();
    if (pUVar6 == (UClass *)0x0) goto LAB_1463b71e3;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1463b71e3;
  }
  this_00 = (UISMPoolSubSystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)(lVar4 + 0xac0),pUVar5);
  if (((this_00 != (UISMPoolSubSystem *)0x0) &&
      (pUVar7 = (ULevel *)FWeakObjectPtr::Get(&(this->OwningLevel).WeakPtr), pUVar7 != (ULevel *)0x0
      )) && (pAVar8 = UISMPoolSubSystem::FindISMPoolActor(this_00,pUVar7),
            pAVar8 != (AISMPoolActor *)0x0)) {
    pUVar2 = (pAVar8->ISMPoolComp).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UISMPoolComponent *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->CachedISMPoolComponent).field0_0x0.DebugPtr = pUVar2;
  }
LAB_1463b7248:
  return (this->CachedISMPoolComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 1463b7710

UClass * __cdecl UGeometryCollectionISMPoolRenderer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionISMPoolRenderer",
               &Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionISMPoolRenderer,0xe0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCollectionISMPoolRenderer>,
               InternalVTableHelperCtorCaller<UGeometryCollectionISMPoolRenderer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer.InnerSingleton;
}

// InitInstancesFromGeometryCollection @ 1463ba9f0

void __thiscall
UGeometryCollectionISMPoolRenderer::InitInstancesFromGeometryCollection
          (UGeometryCollectionISMPoolRenderer *this,UGeometryCollection *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  UStaticMesh *this_00;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UMaterialInterface *pUVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_118 [2];
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  FISMPoolComponentDescription local_d0;
  UStaticMesh *local_78;
  UISMPoolComponent *local_70;
  float *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<float_const_,int> local_58;
  
  uVar10 = (param_1->AutoInstanceMeshes).ArrayNum;
  if (uVar10 != 0) {
    local_70 = GetOrCreateISMPoolComponent(this);
    if (local_70 == (UISMPoolComponent *)0x0) {
      (this->InstancesGroup).GroupIndex = -1;
      return;
    }
    iVar7 = UISMPoolComponent::CreateMeshGroup(local_70,false);
    (this->InstancesGroup).GroupIndex = iVar7;
    if (iVar7 != -1) {
      pTVar2 = &(this->InstancesGroup).MeshIds;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      piVar1 = &(this->InstancesGroup).MeshIds.ArrayMax;
      if (*piVar1 < (int)uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar10,&pTVar2->AllocatorInstance,(this->InstancesGroup).MeshIds.ArrayNum,
                   piVar1);
      }
      local_res20 = (param_1->AutoInstanceMeshes).ArrayNum;
      uVar11 = (ulonglong)(int)local_res20;
      pFVar16 = (param_1->AutoInstanceMeshes).AllocatorInstance.Data;
      pFVar15 = pFVar16 + 0x10;
      pFVar14 = pFVar16 + uVar11 * 0x30;
      local_108 = pFVar14;
      while( true ) {
        uVar13 = 0;
        local_110 = pFVar16;
        if ((param_1->AutoInstanceMeshes).ArrayNum != (int)uVar11) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FGeometryCollectionAutoInstanceMesh_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar16 == pFVar14) break;
        this_00 = *(UStaticMesh **)pFVar16;
        if (this_00 != (UStaticMesh *)0x0) {
          bVar6 = false;
          uVar11 = uVar13;
          if (0 < *(int *)pFVar15) {
            do {
              uVar12 = (uint)uVar13;
              pUVar9 = UStaticMesh::GetMaterial(this_00,uVar12);
              uVar10 = 0;
              if ((int)uVar12 < *(int *)pFVar15) {
                uVar10 = ~uVar12 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(UMaterialInterface **)(uVar11 + *(longlong *)(pFVar15 + -8)) ==
                  (UMaterialInterface *)0x0) {
                bVar5 = pUVar9 == (UMaterialInterface *)0x0;
              }
              else {
                bVar5 = *(UMaterialInterface **)(uVar11 + *(longlong *)(pFVar15 + -8)) == pUVar9;
              }
              pFVar16 = local_110;
              if (!bVar5) {
                bVar6 = true;
                break;
              }
              uVar13 = (ulonglong)(uVar12 + 1);
              uVar11 = uVar11 + 8;
            } while ((int)(uVar12 + 1) < *(int *)pFVar15);
          }
          local_f8._0_4_ = 0;
          local_f8._4_4_ = 0;
          local_f0.Data = (FScriptContainerElement *)0x0;
          local_d0.Position.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_d0.Position.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_d0.Position.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_e8 = 0;
          local_e0.Data = (FScriptContainerElement *)0x0;
          local_d8._0_4_ = 0;
          local_d8._4_4_ = 0;
          local_d0.Flags = 0xe0;
          local_d0.NumCustomDataFloats = 0;
          local_d0.StartCullDistance = 0;
          local_d0.EndCullDistance = 0;
          local_d0.MinLod = 0;
          local_d0.GroupHash = 0;
          local_d0.LodScale = 1.0;
          local_d0.Tags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d0.Tags.ArrayNum = 0;
          local_d0.Tags.ArrayMax = 0;
          local_d0.StatsCategory.ComparisonIndex.Value = 0;
          local_d0.StatsCategory.Number = 0;
          local_78 = this_00;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)local_f8,(FObjectPtr)&local_78);
          lVar4 = local_e8;
          iVar7 = 0;
          if (*(int *)(pFVar15 + 8) != 0) {
            iVar7 = *(int *)(pFVar15 + 0x18) / *(int *)(pFVar15 + 8);
          }
          local_d0.NumCustomDataFloats = iVar7;
          if (bVar6) {
            uVar10 = local_e8._4_4_;
            local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
            if ((lVar4 < 0) && (uVar10 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,0,(ForAnyElementType *)(local_f8 + 8),0,(int *)(local_f8 + 0x14));
            }
            if (((FScriptContainerElement *)(local_f8 + 8) == pFVar15 + -8) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)this != (void*)&Source",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x96e,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = *(int *)pFVar15;
            if (iVar7 != 0) {
              iVar8 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,4,iVar7,(ForAnyElementType *)(local_f8 + 8),
                                 (int *)(local_f8 + 0x10),(int *)(local_f8 + 0x14));
              ConstructItems<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,TObjectPtr<UMaterialInterface>,int>
                        (local_f0.Data + (longlong)iVar8 * 8,
                         *(TObjectPtr<UMaterialInterface> **)(pFVar15 + -8),iVar7);
            }
          }
          local_68 = *(float **)(pFVar15 + 0x10);
          iVar7 = *(int *)(pFVar15 + 0x18);
          if ((iVar7 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_58._12_4_ = uStack_5c;
          local_58.ArrayNum = iVar7;
          local_58.DataPtr = local_68;
          iStack_60 = iVar7;
          local_118[0] = UISMPoolComponent::AddMeshToGroup
                                   (local_70,(this->InstancesGroup).GroupIndex,
                                    (FISMPoolStaticMeshInstance *)local_f8,*(int *)(pFVar15 + 8),
                                    &local_58);
          pFVar14 = (pTVar2->AllocatorInstance).Data;
          piVar1 = &(this->InstancesGroup).MeshIds.ArrayMax;
          if (((pFVar14 <= (FScriptContainerElement *)local_118) &&
              ((FScriptContainerElement *)local_118 < pFVar14 + (longlong)*piVar1 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = (this->InstancesGroup).MeshIds.ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->InstancesGroup).MeshIds.ArrayNum = iVar7 + 1;
          *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_118[0];
          if (local_d0.Tags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Tags.AllocatorInstance.Data);
          }
          if (local_e0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data);
          }
          pFVar14 = local_108;
          if (local_f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data);
            pFVar14 = local_108;
          }
        }
        pFVar16 = pFVar16 + 0x30;
        uVar11 = (ulonglong)local_res20;
        pFVar15 = pFVar15 + 0x30;
      }
    }
  }
  return;
}

// InitMergedMeshFromGeometryCollection @ 1463baea0

void __thiscall
UGeometryCollectionISMPoolRenderer::InitMergedMeshFromGeometryCollection
          (UGeometryCollectionISMPoolRenderer *this,UGeometryCollection *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong local_res20;
  int local_108;
  FWeakObjectPtr local_104;
  FISMPoolStaticMeshInstance local_f8;
  UObject *local_78;
  UObject *local_70;
  UISMPoolComponent *local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  TArrayView<float_const_,int> local_48;
  
  if ((param_1->RootProxyData).ProxyMeshes.ArrayNum != 0) {
    local_68 = GetOrCreateISMPoolComponent(this);
    if (local_68 == (UISMPoolComponent *)0x0) {
      (this->MergedMeshGroup).GroupIndex = -1;
      return;
    }
    iVar6 = UISMPoolComponent::CreateMeshGroup(local_68,false);
    (this->MergedMeshGroup).GroupIndex = iVar6;
    if (iVar6 != -1) {
      uVar8 = 0;
      lVar12 = (longlong)(param_1->RootProxyData).ProxyMeshes.ArrayNum;
      if (0 < lVar12) {
        local_res20 = 0;
        uVar13 = uVar8;
        do {
          uVar11 = (uint)uVar8;
          uVar10 = 0;
          if ((int)uVar11 < (param_1->RootProxyData).ProxyMeshes.ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar2 = *(UObject **)
                    ((param_1->RootProxyData).ProxyMeshes.AllocatorInstance.Data + local_res20 * 8);
          if (pUVar2 != (UObject *)0x0) {
            local_f8.StaticMesh.WeakPtr.ObjectIndex = 0;
            local_f8.StaticMesh.WeakPtr.ObjectSerialNumber = 0;
            local_f8.MaterialsOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.Desc.Position.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_f8.Desc.Position.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_f8.Desc.Position.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_f8.MaterialsOverrides.ArrayNum = 0;
            local_f8.MaterialsOverrides.ArrayMax = 0;
            local_f8.CustomPrimitiveData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.CustomPrimitiveData.ArrayNum = 0;
            local_f8.CustomPrimitiveData.ArrayMax = 0;
            local_f8.Desc.Flags = 0xe0;
            local_f8.Desc.NumCustomDataFloats = 0;
            local_f8.Desc.StartCullDistance = 0;
            local_f8.Desc.EndCullDistance = 0;
            local_f8.Desc.MinLod = 0;
            local_f8.Desc.GroupHash = 0;
            local_f8.Desc.LodScale = 1.0;
            local_f8.Desc.Tags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.Desc.Tags.ArrayNum = 0;
            local_f8.Desc.Tags.ArrayMax = 0;
            local_f8.Desc.StatsCategory.ComparisonIndex.Value = 0;
            local_f8.Desc.StatsCategory.Number = 0;
            local_78 = pUVar2;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar2);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_f8,(FObjectPtr)&local_78);
            if ((-1 < (int)uVar11) &&
               ((int)uVar11 < (param_1->RootProxyData).MeshOverrideMaterials.ArrayNum)) {
              uVar10 = 0;
              if ((int)uVar11 < (param_1->RootProxyData).MeshOverrideMaterials.ArrayNum) {
                uVar10 = ~uVar11 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = (param_1->RootProxyData).MeshOverrideMaterials.AllocatorInstance.Data;
              uVar10 = 0;
              iVar6 = *(int *)(pFVar3 + uVar13 + 8);
              if (0 < iVar6) {
                lVar9 = 0;
                do {
                  uVar7 = 0;
                  if ((int)uVar10 < iVar6) {
                    uVar7 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pUVar2 = *(UObject **)(lVar9 + *(longlong *)(pFVar3 + uVar13));
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar2 != (UObject *)0x0) {
                      UE::GC::MarkAsReachable(pUVar2);
                    }
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar2 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar2);
                    }
                  }
                  local_104.ObjectIndex = 0;
                  local_104.ObjectSerialNumber = 0;
                  local_70 = pUVar2;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar2 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar2);
                  }
                  FWeakObjectPtr::operator=(&local_104,(FObjectPtr)&local_70);
                  if (((local_f8.MaterialsOverrides.AllocatorInstance.Data <= &local_104) &&
                      (&local_104 <
                       (FWeakObjectPtr *)
                       (local_f8.MaterialsOverrides.AllocatorInstance.Data +
                       (longlong)local_f8.MaterialsOverrides.ArrayMax * 8))) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar6 = local_f8.MaterialsOverrides.ArrayNum;
                  if (local_f8.MaterialsOverrides.ArrayNum == local_f8.MaterialsOverrides.ArrayMax)
                  {
                    iVar6 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x408,&local_f8.MaterialsOverrides.AllocatorInstance,
                                       &local_f8.MaterialsOverrides.ArrayMax);
                  }
                  uVar10 = uVar10 + 1;
                  local_f8.MaterialsOverrides.ArrayNum = iVar6 + 1;
                  lVar9 = lVar9 + 8;
                  *(FWeakObjectPtr *)
                   (local_f8.MaterialsOverrides.AllocatorInstance.Data + (longlong)iVar6 * 8) =
                       local_104;
                  iVar6 = *(int *)(pFVar3 + uVar13 + 8);
                } while ((int)uVar10 < iVar6);
              }
            }
            local_58 = 0;
            uStack_50 = 0;
            local_48._8_8_ = (ulonglong)uStack_4c << 0x20;
            local_48.DataPtr = (float *)0x0;
            local_108 = UISMPoolComponent::AddMeshToGroup
                                  (local_68,(this->MergedMeshGroup).GroupIndex,&local_f8,1,&local_48
                                  );
            pFVar3 = (this->MergedMeshGroup).MeshIds.AllocatorInstance.Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_108) &&
                ((FScriptContainerElement *)&local_108 <
                 pFVar3 + (longlong)(this->MergedMeshGroup).MeshIds.ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = (this->MergedMeshGroup).MeshIds.ArrayNum;
            piVar1 = &(this->MergedMeshGroup).MeshIds.ArrayMax;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&(this->MergedMeshGroup).MeshIds.AllocatorInstance,piVar1);
            }
            (this->MergedMeshGroup).MeshIds.ArrayNum = iVar6 + 1;
            *(int *)((this->MergedMeshGroup).MeshIds.AllocatorInstance.Data + (longlong)iVar6 * 4) =
                 local_108;
            if (local_f8.Desc.Tags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Desc.Tags.AllocatorInstance.Data);
            }
            if (local_f8.CustomPrimitiveData.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.CustomPrimitiveData.AllocatorInstance.Data);
            }
            if ((FWeakObjectPtr *)local_f8.MaterialsOverrides.AllocatorInstance.Data !=
                (FWeakObjectPtr *)0x0) {
              FMemory::Free(local_f8.MaterialsOverrides.AllocatorInstance.Data);
            }
          }
          local_res20 = local_res20 + 1;
          uVar8 = (ulonglong)(uVar11 + 1);
          uVar13 = uVar13 + 0x10;
        } while (local_res20 < lVar12);
      }
    }
  }
  return;
}

// OnRegisterGeometryCollection @ 1463bd400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UGeometryCollectionISMPoolRenderer::OnRegisterGeometryCollection
          (UGeometryCollectionISMPoolRenderer *this,UGeometryCollectionComponent *param_1)

{
  bool bVar1;
  UWorld *this_00;
  UClass *pUVar2;
  UISMPoolComponent *this_01;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  FWeakObjectPtr local_b8;
  ULevel *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b0 = UActorComponent::GetComponentLevel((UActorComponent *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b0 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b0);
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b0 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b0);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_b0);
  (this->MergedMeshGroup).MeshIds.AllocatorInstance.Data = (FScriptContainerElement *)local_b8;
  this_00 = *(UWorld **)&param_1->field_0xb0;
  if (((this_00 != (UWorld *)0x0) ||
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
      this_00 != (UWorld *)0x0)) && (bVar1 = UWorld::IsGameWorld(this_00), !bVar1)) {
    plVar3 = (longlong *)this->_padding_;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x4a0))(plVar3,0);
    }
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)&this[-1].InstancesGroup,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UISMPoolComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_DuplicateTransient|RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = &this[-1].InstancesGroup;
    this_01 = (UISMPoolComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar3 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UISMPoolComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    this->_padding_ = (longlong)this_01;
    UISMPoolComponent::SetTickablePoolManagement(this_01,false);
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    USceneComponent::SetupAttachment
              ((USceneComponent *)this->_padding_,(USceneComponent *)param_1,(FName)0x0);
    UActorComponent::RegisterComponent((UActorComponent *)this->_padding_);
  }
  *(undefined1 *)&(this->MergedMeshGroup).MeshIds.ArrayNum = 1;
  return;
}

// OnUnregisterGeometryCollection @ 1463bd5e0

void __thiscall
UGeometryCollectionISMPoolRenderer::OnUnregisterGeometryCollection
          (UGeometryCollectionISMPoolRenderer *this)

{
  longlong *plVar1;
  
  ReleaseGroup((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,
               (FISMPoolGroup *)((this->ComponentTransform).Translation.ZW.m128d_f64 + 1));
  ReleaseGroup((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,
               (FISMPoolGroup *)&(this->ComponentTransform).Scale3D.ZW);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a0))(plVar1,0);
    this->_padding_ = 0;
  }
  *(undefined1 *)&(this->MergedMeshGroup).MeshIds.ArrayNum = 0;
  this->_padding_ = 0;
  return;
}

// ReleaseGroup @ 1463c2170

void __thiscall
UGeometryCollectionISMPoolRenderer::ReleaseGroup
          (UGeometryCollectionISMPoolRenderer *this,FISMPoolGroup *param_1)

{
  int *piVar1;
  UISMPoolComponent *this_00;
  
  if (param_1->GroupIndex != -1) {
    if ((this->bIsRegistered != false) &&
       ((this_00 = (this->LocalISMPoolComponent).field0_0x0.DebugPtr,
        this_00 != (UISMPoolComponent *)0x0 ||
        (this_00 = (this->CachedISMPoolComponent).field0_0x0.DebugPtr,
        this_00 != (UISMPoolComponent *)0x0)))) {
      UISMPoolComponent::DestroyMeshGroup(this_00,param_1->GroupIndex);
    }
    param_1->GroupIndex = -1;
    piVar1 = &(param_1->MeshIds).ArrayMax;
    (param_1->MeshIds).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(param_1->MeshIds).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// StaticRegisterNativesUGeometryCollectionISMPoolRenderer @ 1463c9c30

void __cdecl
UGeometryCollectionISMPoolRenderer::StaticRegisterNativesUGeometryCollectionISMPoolRenderer(void)

{
  return;
}

// UpdateInstanceTransforms @ 1463ceb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGeometryCollectionISMPoolRenderer::UpdateInstanceTransforms
          (UGeometryCollectionISMPoolRenderer *this,UGeometryCollection *param_1,
          TTransform<double> *param_2,TArrayView<UE::Math::TTransform<float>_const_,int> *param_3)

{
  FGeometryCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  TTransform<double> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TTransform<float> *pTVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac;
  longlong local_1a8;
  TTransform<double> *local_1a0;
  TArrayView<UE::Math::TTransform<float>_const_,int> *local_198;
  UGeometryCollectionISMPoolRenderer *local_190;
  UISMPoolComponent *local_188;
  TTransform<double> *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_168;
  FCollectionInstancedMeshFacade local_158;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (((this->InstancesGroup).GroupIndex != -1) &&
     (local_1a0 = param_2, local_198 = param_3, local_190 = this,
     local_188 = GetOrCreateISMPoolComponent(this), local_188 != (UISMPoolComponent *)0x0)) {
    pFVar1 = (param_1->GeometryCollection).Object;
    pTVar2 = (param_1->GeometryCollection).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar1 == (FGeometryCollection *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
              (&local_158,(FManagedArrayCollection *)pFVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    bVar7 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::IsValid(&local_158);
    if (bVar7) {
      pFVar1 = (param_1->GeometryCollection).Object;
      uVar15 = 0;
      uVar8 = 0;
      if (pFVar1 != (FGeometryCollection *)0x0) {
        uVar8 = FManagedArrayCollection::NumElements
                          ((FManagedArrayCollection *)pFVar1,
                           FTransformCollection::TransformAttribute);
      }
      pFVar1 = (param_1->GeometryCollection).Object;
      pTVar2 = (param_1->GeometryCollection).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar1 == (FGeometryCollection *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = 0;
      local_1ac = 0;
      if (0 < (this->InstancesGroup).MeshIds.ArrayNum) {
        local_1a8 = 0;
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        do {
          lVar11 = local_1a8;
          uVar13 = 0;
          local_1b0 = 0;
          if (local_1ac < (int)uVar8) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,uVar8,&local_1b8,0,&local_1ac);
          }
          pTVar6 = local_1a0;
          uVar14 = uVar13;
          if (0 < (int)uVar8) {
            do {
              uVar12 = (uint)uVar13;
              uVar9 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetIndex
                                (&local_158,uVar12);
              if (uVar9 == uVar15) {
                uVar9 = 0;
                if ((int)uVar12 < (int)pFVar1->_padding_) {
                  uVar9 = ~uVar12 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (*(int *)(pFVar1->_padding_ + 8 + uVar14) ==
                    *(int *)(pFVar1->_padding_ + 0x34 + uVar14)) {
                  pTVar10 = TArrayView<UE::Math::TTransform<float>_const_,int>::operator[]
                                      (local_198,uVar12);
                  local_b8.Rotation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)(pTVar10->Rotation).m128_f32[1],0);
                  local_b8.Rotation.XY.m128d_f64[0] = (double)(pTVar10->Rotation).m128_f32[0];
                  local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)(pTVar10->Rotation).m128_f32[1] >> 0x20);
                  local_b8.Rotation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)(pTVar10->Rotation).m128_f32[3],0);
                  local_b8.Rotation.ZW.m128d_f64[0] = (double)(pTVar10->Rotation).m128_f32[2];
                  local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)(pTVar10->Rotation).m128_f32[3] >> 0x20);
                  local_b8.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)(pTVar10->Translation).m128_f32[1],0);
                  local_b8.Translation.XY.m128d_f64[0] = (double)(pTVar10->Translation).m128_f32[0];
                  local_b8.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)(pTVar10->Translation).m128_f32[1] >> 0x20);
                  local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)(pTVar10->Translation).m128_f32[3],0);
                  local_b8.Translation.ZW.m128d_f64[0] = (double)(pTVar10->Translation).m128_f32[2];
                  local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)(pTVar10->Translation).m128_f32[3] >> 0x20);
                  local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)(pTVar10->Scale3D).m128_f32[1],0);
                  local_b8.Scale3D.XY.m128d_f64[0] = (double)(pTVar10->Scale3D).m128_f32[0];
                  local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)(pTVar10->Scale3D).m128_f32[1] >> 0x20);
                  local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)(pTVar10->Scale3D).m128_f32[3],0);
                  local_b8.Scale3D.ZW.m128d_f64[0] = (double)(pTVar10->Scale3D).m128_f32[2];
                  local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)(pTVar10->Scale3D).m128_f32[3] >> 0x20);
                  local_118.Rotation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  local_118.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_118.Rotation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                            );
                  local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  local_118.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                            );
                  local_118.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_118.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_118.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_118.Translation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                  local_118.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_118.Translation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20
                            );
                  local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_118.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  local_118.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply(&local_118,&local_b8,pTVar6);
                  if (((local_1b8.Data <= &local_118) &&
                      (&local_118 <
                       (TTransform<double> *)(local_1b8.Data + (longlong)local_1ac * 0x60))) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (local_1b0 == local_1ac) {
                    local_1b0 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x1060,&local_1b8,&local_1ac);
                  }
                  lVar11 = (longlong)local_1b0 * 0x60;
                  *(double *)&local_1b8.Data[lVar11].field_0x0 = local_118.Rotation.XY.m128d_f64[0];
                  *(double *)(local_1b8.Data + lVar11 + 8) = local_118.Rotation.XY.m128d_f64[1];
                  *(double *)(local_1b8.Data + lVar11 + 0x10) = local_118.Rotation.ZW.m128d_f64[0];
                  *(double *)(local_1b8.Data + lVar11 + 0x10 + 8) =
                       local_118.Rotation.ZW.m128d_f64[1];
                  *(double *)(local_1b8.Data + lVar11 + 0x20) =
                       local_118.Translation.XY.m128d_f64[0];
                  *(double *)(local_1b8.Data + lVar11 + 0x20 + 8) =
                       local_118.Translation.XY.m128d_f64[1];
                  *(double *)(local_1b8.Data + lVar11 + 0x30) =
                       local_118.Translation.ZW.m128d_f64[0];
                  *(double *)(local_1b8.Data + lVar11 + 0x30 + 8) =
                       local_118.Translation.ZW.m128d_f64[1];
                  *(double *)(local_1b8.Data + lVar11 + 0x40) = local_118.Scale3D.XY.m128d_f64[0];
                  *(double *)(local_1b8.Data + lVar11 + 0x40 + 8) =
                       local_118.Scale3D.XY.m128d_f64[1];
                  *(double *)(local_1b8.Data + lVar11 + 0x50) = local_118.Scale3D.ZW.m128d_f64[0];
                  *(double *)(local_1b8.Data + lVar11 + 0x50 + 8) =
                       local_118.Scale3D.ZW.m128d_f64[1];
                  local_1b0 = local_1b0 + 1;
                }
              }
              uVar13 = (ulonglong)(uVar12 + 1);
              lVar11 = local_1a8;
              uVar14 = uVar14 + 0x50;
              this = local_190;
            } while ((int)(uVar12 + 1) < (int)uVar8);
          }
          iVar5 = local_1b0;
          FVar4.Data = local_1b8.Data;
          if ((local_1b0 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_178 = (TTransform<double> *)FVar4.Data;
          iStack_170 = iVar5;
          uVar9 = 0;
          if ((int)uVar15 < (this->InstancesGroup).MeshIds.ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_168._12_4_ = uStack_16c;
          local_168.ArrayNum = iStack_170;
          local_168.DataPtr = local_178;
          UISMPoolComponent::BatchUpdateInstancesTransforms
                    (local_188,(this->InstancesGroup).GroupIndex,
                     *(int *)((this->InstancesGroup).MeshIds.AllocatorInstance.Data + lVar11),0,
                     &local_168,true,false,false);
          local_1a8 = lVar11 + 4;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (this->InstancesGroup).MeshIds.ArrayNum);
      }
      if ((TTransform<double> *)local_1b8.Data != (TTransform<double> *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
    }
  }
  return;
}

// UpdateMergedMeshTransforms @ 1463cf050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGeometryCollectionISMPoolRenderer::UpdateMergedMeshTransforms
          (UGeometryCollectionISMPoolRenderer *this,TTransform<double> *param_1,
          TArrayView<UE::Math::TTransform<float>_const_,int> *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  UISMPoolComponent *this_00;
  TTransform<float> *pTVar5;
  TArrayView<UE::Math::TTransform<double>_const_,int> *pTVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_198 [32];
  TArrayView<UE::Math::TTransform<double>_const_,int> local_128;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_118;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((this->MergedMeshGroup).GroupIndex != -1) &&
     (this_00 = GetOrCreateISMPoolComponent(this), this_00 != (UISMPoolComponent *)0x0)) {
    iVar7 = (this->MergedMeshGroup).MeshIds.ArrayNum;
    uVar8 = 0;
    if (0 < iVar7) {
      uVar2 = local_128._12_4_;
      lVar9 = 0;
      do {
        if (((int)uVar8 < 0) || (param_2->ArrayNum <= (int)uVar8)) {
          uVar4 = 0;
          if ((int)uVar8 < iVar7) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_128._12_4_ = uVar2;
          local_128.ArrayNum = 1;
          pTVar6 = &local_128;
          local_128.DataPtr = param_1;
        }
        else {
          pTVar5 = TArrayView<UE::Math::TTransform<float>_const_,int>::operator[](param_2,uVar8);
          local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)(pTVar5->Rotation).m128_f32[1],0);
          local_a8.Rotation.XY.m128d_f64[0] = (double)(pTVar5->Rotation).m128_f32[0];
          local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)(pTVar5->Rotation).m128_f32[1] >> 0x20);
          local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)(pTVar5->Rotation).m128_f32[3],0);
          local_a8.Rotation.ZW.m128d_f64[0] = (double)(pTVar5->Rotation).m128_f32[2];
          local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)(pTVar5->Rotation).m128_f32[3] >> 0x20);
          local_a8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)(pTVar5->Translation).m128_f32[1],0);
          local_a8.Translation.XY.m128d_f64[0] = (double)(pTVar5->Translation).m128_f32[0];
          local_a8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)(pTVar5->Translation).m128_f32[1] >> 0x20);
          local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)(pTVar5->Translation).m128_f32[3],0);
          local_a8.Translation.ZW.m128d_f64[0] = (double)(pTVar5->Translation).m128_f32[2];
          local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)(pTVar5->Translation).m128_f32[3] >> 0x20);
          local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)(pTVar5->Scale3D).m128_f32[1],0);
          local_a8.Scale3D.XY.m128d_f64[0] = (double)(pTVar5->Scale3D).m128_f32[0];
          local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)(pTVar5->Scale3D).m128_f32[1] >> 0x20);
          local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)(pTVar5->Scale3D).m128_f32[3],0);
          local_a8.Scale3D.ZW.m128d_f64[0] = (double)(pTVar5->Scale3D).m128_f32[2];
          local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)(pTVar5->Scale3D).m128_f32[3] >> 0x20);
          local_108.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_108.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_108.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_108.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_108.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_108.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_108.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_108.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_108,&local_a8,param_1);
          uVar4 = 0;
          if ((int)uVar8 < (this->MergedMeshGroup).MeshIds.ArrayNum) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_118._12_4_ = uVar2;
          local_118.ArrayNum = 1;
          pTVar6 = &local_118;
          local_118.DataPtr = &local_108;
        }
        UISMPoolComponent::BatchUpdateInstancesTransforms
                  (this_00,(this->MergedMeshGroup).GroupIndex,
                   *(int *)((this->MergedMeshGroup).MeshIds.AllocatorInstance.Data + lVar9),0,pTVar6
                   ,true,false,false);
        iVar7 = (this->MergedMeshGroup).MeshIds.ArrayNum;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      } while ((int)uVar8 < iVar7);
    }
  }
  return;
}

// UpdateRootTransform @ 1463cf590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGeometryCollectionISMPoolRenderer::UpdateRootTransform
          (UGeometryCollectionISMPoolRenderer *this,UGeometryCollection *param_1,
          TTransform<double> *param_2)

{
  undefined1 auStack_a8 [32];
  TArrayView<UE::Math::TTransform<float>_const_,int> local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.DataPtr = (TTransform<float> *)0x0;
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  local_78.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_78,param_2,(TTransform<double> *)&this->_padding_);
  UpdateMergedMeshTransforms
            ((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,&local_78,&local_88);
  return;
}

// UpdateRootTransforms @ 1463cf6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGeometryCollectionISMPoolRenderer::UpdateRootTransforms
          (UGeometryCollectionISMPoolRenderer *this,UGeometryCollection *param_1,
          TTransform<double> *param_2,TArrayView<UE::Math::TTransform<float>_const_,int> *param_3)

{
  undefined1 auStack_a8 [32];
  TArrayView<UE::Math::TTransform<float>_const_,int> local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_78,param_2,(TTransform<double> *)&this->_padding_);
  local_88.DataPtr = param_3->DataPtr;
  local_88.ArrayNum = param_3->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&param_3->field_0xc;
  UpdateMergedMeshTransforms
            ((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,&local_78,&local_88);
  return;
}

// UpdateState @ 1463cfac0

void __thiscall
UGeometryCollectionISMPoolRenderer::UpdateState
          (UGeometryCollectionISMPoolRenderer *this,UGeometryCollection *param_1,
          TTransform<double> *param_2,uint param_3)

{
  double dVar1;
  TObjectPtr<UISMPoolComponent>_u_0 TVar2;
  
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Rotation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  TVar2 = *(TObjectPtr<UISMPoolComponent>_u_0 *)((param_2->Rotation).ZW.m128d_f64 + 1);
  this->_padding_ = (longlong)(param_2->Rotation).ZW.m128d_f64[0];
  (this->CachedISMPoolComponent).field0_0x0 = TVar2;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (this->LocalISMPoolComponent).field0_0x0 =
       (TObjectPtr<UISMPoolComponent>_u_0)(param_2->Translation).XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] = dVar1;
  dVar1 = (param_2->Translation).ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = dVar1;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] = dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = dVar1;
  if ((param_3 & 1) == 0) {
    ReleaseGroup((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,
                 (FISMPoolGroup *)&(this->ComponentTransform).Scale3D.ZW);
    ReleaseGroup((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,
                 (FISMPoolGroup *)((this->ComponentTransform).Translation.ZW.m128d_f64 + 1));
    return;
  }
  if ((param_3 & 2) == 0) {
    if (*(int *)((this->ComponentTransform).Translation.ZW.m128d_f64 + 1) == -1) {
      ReleaseGroup((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,
                   (FISMPoolGroup *)&(this->ComponentTransform).Scale3D.ZW);
      InitMergedMeshFromGeometryCollection
                ((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,param_1);
      return;
    }
  }
  else if (*(int *)(this->ComponentTransform).Scale3D.ZW.m128d_f64 == -1) {
    ReleaseGroup((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,
                 (FISMPoolGroup *)((this->ComponentTransform).Translation.ZW.m128d_f64 + 1));
    InitInstancesFromGeometryCollection
              ((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,param_1);
  }
  return;
}

// UpdateTransforms @ 1463cfce0

void __thiscall
UGeometryCollectionISMPoolRenderer::UpdateTransforms
          (UGeometryCollectionISMPoolRenderer *this,UGeometryCollection *param_1,
          TArrayView<UE::Math::TTransform<float>_const_,int> *param_2)

{
  TArrayView<UE::Math::TTransform<float>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  UpdateInstanceTransforms
            ((UGeometryCollectionISMPoolRenderer *)&this[-1].InstancesGroup,param_1,
             (TTransform<double> *)&this->_padding_,&local_18);
  return;
}

// _getUObject @ 1463d1530

UObject * __thiscall
UGeometryCollectionISMPoolRenderer::_getUObject(UGeometryCollectionISMPoolRenderer *this)

{
  return (UObject *)&this[-1].InstancesGroup;
}

