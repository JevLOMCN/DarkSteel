// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 147d525d0

UScriptStruct * __cdecl FISMComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FISMComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FISMComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentDescriptor,(UObject *)pUVar1,
                         L"ISMComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FISMComponentDescriptor.OuterSingleton;
}

// FISMComponentDescriptor @ 147d77b50

FISMComponentDescriptor * __thiscall
FISMComponentDescriptor::FISMComponentDescriptor
          (FISMComponentDescriptor *this,FISMComponentDescriptor *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UStaticMesh *pUVar5;
  FScriptContainerElement *pFVar6;
  UMaterialInterface *pUVar7;
  double dVar8;
  
  FISMComponentDescriptorBase::FISMComponentDescriptorBase
            ((FISMComponentDescriptorBase *)this,(FISMComponentDescriptorBase *)param_1);
  *(undefined ***)this = &___7FISMComponentDescriptor__6B_;
  pUVar5 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  (this->StaticMesh).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar2 = &this->OverrideMaterials;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OverrideMaterials).ArrayMax;
  iVar4 = (param_1->OverrideMaterials).ArrayNum;
  pFVar6 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  (this->OverrideMaterials).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar6,iVar4);
  }
  pUVar7 = (param_1->OverlayMaterial).field0_0x0.DebugPtr;
  (this->OverlayMaterial).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pTVar3 = &this->RuntimeVirtualTextures;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RuntimeVirtualTextures).ArrayMax;
  iVar4 = (param_1->RuntimeVirtualTextures).ArrayNum;
  pFVar6 = (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
  (this->RuntimeVirtualTextures).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TObjectPtr<URuntimeVirtualTexture>,TObjectPtr<URuntimeVirtualTexture>,int>
              ((pTVar3->AllocatorInstance).Data,(TObjectPtr<URuntimeVirtualTexture> *)pFVar6,iVar4);
  }
  dVar8 = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
  (this->LocalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
  (this->LocalTransform).Rotation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  (this->LocalTransform).Translation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
  (this->LocalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Scale3D.XY.m128d_f64[1];
  (this->LocalTransform).Scale3D.XY.m128d_f64[0] = (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
  (this->StaticMeshComponent).WeakPtr = (param_1->StaticMeshComponent).WeakPtr;
  return this;
}

// FISMComponentDescriptor @ 147d77cf0

FISMComponentDescriptor * __thiscall
FISMComponentDescriptor::FISMComponentDescriptor
          (FISMComponentDescriptor *this,FSoftISMComponentDescriptor *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  UStaticMesh *pUVar9;
  UMaterialInterface *pUVar10;
  FISMComponentDescriptor *pFVar11;
  URuntimeVirtualTexture *pUVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  UMaterialInterface *local_b8;
  URuntimeVirtualTexture *local_b0;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *local_a8;
  undefined1 local_a0 [24];
  void *local_88;
  undefined1 local_78 [24];
  void *local_60;
  
  FISMComponentDescriptorBase::FISMComponentDescriptorBase
            ((FISMComponentDescriptorBase *)this,(FISMComponentDescriptorBase *)param_1);
  local_a8 = &this->RuntimeVirtualTextures;
  *(undefined ***)this = &___7FISMComponentDescriptor__6B_;
  pTVar1 = &this->OverrideMaterials;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (local_a8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  *&(this->LocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_res20 = 0;
  *&(this->LocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->StaticMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->StaticMeshComponent).WeakPtr,(FObjectPtr)&local_res20);
  pUVar9 = TSoftObjectPtr<UStaticMesh>::LoadSynchronous(&param_1->StaticMesh);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->StaticMesh).field0_0x0.DebugPtr = pUVar9;
  iVar3 = (param_1->OverrideMaterials).ArrayNum;
  pFVar13 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  pFVar2 = pFVar13 + (longlong)iVar3 * 0x28;
  while( true ) {
    if ((param_1->OverrideMaterials).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar2) break;
    local_a0._0_8_ = *(undefined8 *)pFVar13;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_a0 + 8),(FSoftObjectPath *)(pFVar13 + 8));
    pUVar10 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous
                        ((TSoftObjectPtr<UMaterialInterface> *)local_a0);
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    local_b8 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
       ((FScriptContainerElement *)&local_b8 <
        pFVar4 + (longlong)(this->OverrideMaterials).ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FISMComponentDescriptor *)(*pcVar5)();
        return pFVar11;
      }
    }
    iVar8 = (this->OverrideMaterials).ArrayNum;
    if (iVar8 == (this->OverrideMaterials).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,&(this->OverrideMaterials).ArrayMax);
    }
    (this->OverrideMaterials).ArrayNum = iVar8 + 1;
    *(UMaterialInterface **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_b8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_b8 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8);
    }
    pFVar13 = pFVar13 + 0x28;
  }
  pUVar10 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(&param_1->OverlayMaterial);
  pTVar6 = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->OverlayMaterial).field0_0x0.DebugPtr = pUVar10;
  iVar3 = (param_1->RuntimeVirtualTextures).ArrayNum;
  pFVar13 = (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
  pFVar2 = pFVar13 + (longlong)iVar3 * 0x28;
  while( true ) {
    if ((param_1->RuntimeVirtualTextures).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<URuntimeVirtualTexture>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar13 == pFVar2) break;
    local_78._0_8_ = *(undefined8 *)pFVar13;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_78 + 8),(FSoftObjectPath *)(pFVar13 + 8));
    pUVar12 = TSoftObjectPtr<URuntimeVirtualTexture>::LoadSynchronous
                        ((TSoftObjectPtr<URuntimeVirtualTexture> *)local_78);
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    local_b0 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    pFVar4 = (pTVar6->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_b0) &&
       ((FScriptContainerElement *)&local_b0 < pFVar4 + (longlong)pTVar6->ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FISMComponentDescriptor *)(*pcVar5)();
        return pFVar11;
      }
    }
    iVar8 = pTVar6->ArrayNum;
    if (iVar8 == pTVar6->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar8 + 1;
    *(URuntimeVirtualTexture **)((pTVar6->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_b0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_b0 != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b0);
    }
    pFVar13 = pFVar13 + 0x28;
  }
  *(int *)&this->field_0x8 = (int)param_1->_padding_;
  return this;
}

// FISMComponentDescriptor @ 147d780b0

FISMComponentDescriptor * __thiscall
FISMComponentDescriptor::FISMComponentDescriptor(FISMComponentDescriptor *this)

{
  UClass *this_00;
  UHierarchicalInstancedStaticMeshComponent *pUVar1;
  undefined8 local_res8;
  
  *(undefined ***)this = &___7FISMComponentDescriptorBase__6B_;
  *(undefined4 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  this->field_0x1b = this->field_0x1b & 0xf9 | 1;
  FBodyInstance::FBodyInstance((FBodyInstance *)&this->field_0x28);
  local_res8 = 0;
  *(undefined ***)this = &___7FISMComponentDescriptor__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  *&(this->LocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->StaticMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->StaticMeshComponent).WeakPtr,(FObjectPtr)&local_res8);
  this_00 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
  pUVar1 = UClass::GetDefaultObject<UHierarchicalInstancedStaticMeshComponent>(this_00);
  InitFrom(this,(UStaticMeshComponent *)pUVar1,true);
  return this;
}

// ~FISMComponentDescriptor @ 147d7b450

void __thiscall FISMComponentDescriptor::~FISMComponentDescriptor(FISMComponentDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FISMComponentDescriptor__6B_;
  pFVar1 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FISMComponentDescriptorBase__6B_;
  FBodyInstance::~FBodyInstance((FBodyInstance *)&this->field_0x28);
  return;
}

// operator== @ 147d7d0e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FISMComponentDescriptor::operator==(FISMComponentDescriptor *this,FISMComponentDescriptor *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  int iVar10;
  undefined7 extraout_var;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  if (((((*(int *)&this->field_0x8 == 0) || (*(int *)&param_1->field_0x8 == 0)) ||
       (*(int *)&this->field_0x8 == *(int *)&param_1->field_0x8)) &&
      (((this->StaticMesh).field0_0x0.DebugPtr == (param_1->StaticMesh).field0_0x0.DebugPtr &&
       (iVar10 = (this->OverrideMaterials).ArrayNum, iVar10 == (param_1->OverrideMaterials).ArrayNum
       )))) && ((bVar9 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                                   ((TObjectPtr<UMaterialInterface> *)
                                    (this->OverrideMaterials).AllocatorInstance.Data,
                                    (TObjectPtr<UMaterialInterface> *)
                                    (param_1->OverrideMaterials).AllocatorInstance.Data,iVar10),
                bVar9 && (((this->OverlayMaterial).field0_0x0.DebugPtr ==
                           (param_1->OverlayMaterial).field0_0x0.DebugPtr &&
                          (iVar10 = (this->RuntimeVirtualTextures).ArrayNum,
                          iVar10 == (param_1->RuntimeVirtualTextures).ArrayNum)))))) {
    pFVar14 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
    bVar9 = CompareItems<TObjectPtr<URuntimeVirtualTexture>,int>
                      ((TObjectPtr<URuntimeVirtualTexture> *)pFVar14,
                       (TObjectPtr<URuntimeVirtualTexture> *)
                       (param_1->RuntimeVirtualTextures).AllocatorInstance.Data,iVar10);
    if (bVar9) {
      dVar16 = (this->LocalTransform).Translation.ZW.m128d_f64[0] -
               (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
      dVar18 = (this->LocalTransform).Translation.ZW.m128d_f64[1] -
               (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
      dVar20 = (this->LocalTransform).Translation.XY.m128d_f64[0] -
               (param_1->LocalTransform).Translation.XY.m128d_f64[0];
      dVar22 = (this->LocalTransform).Translation.XY.m128d_f64[1] -
               (param_1->LocalTransform).Translation.XY.m128d_f64[1];
      lVar15 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar18,0) & _UNK_15061cc88));
      auVar1._8_4_ = (int)lVar15;
      auVar1._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar16,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar1._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar11 = movmskpd((int)pFVar14,auVar1);
      lVar15 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar22,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar15;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar20,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      iVar10 = movmskpd((int)CONCAT71(extraout_var,bVar9),auVar6);
      if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar20 = (this->LocalTransform).Rotation.ZW.m128d_f64[0];
        dVar22 = (this->LocalTransform).Rotation.ZW.m128d_f64[1];
        dVar16 = (this->LocalTransform).Rotation.XY.m128d_f64[0];
        dVar18 = (this->LocalTransform).Rotation.XY.m128d_f64[1];
        dVar17 = dVar20 - (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
        dVar19 = dVar22 - (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
        dVar20 = dVar20 + (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
        dVar22 = dVar22 + (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
        dVar21 = dVar16 - (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
        dVar23 = dVar18 - (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
        dVar16 = dVar16 + (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
        dVar18 = dVar18 + (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
        lVar15 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar19,0) & _UNK_15061cc88));
        auVar2._8_4_ = (int)lVar15;
        auVar2._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar17,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar2._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
        iVar12 = movmskpd(0,auVar2);
        lVar15 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar23,0) & _UNK_15061cc88));
        auVar3._8_4_ = (int)lVar15;
        auVar3._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar21,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
        uVar11 = movmskpd(iVar10,auVar3);
        uVar13 = iVar12 << 2 | uVar11;
        if (uVar13 != 0) {
          lVar15 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar22,0) & _UNK_15061cc88));
          auVar4._8_4_ = (int)lVar15;
          auVar4._0_8_ = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar20,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar4._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
          uVar13 = movmskpd(uVar13,auVar4);
          lVar15 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar18,0) & _UNK_15061cc88));
          auVar7._8_4_ = (int)lVar15;
          auVar7._0_8_ = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar16,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar7._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
          uVar11 = movmskpd(uVar11,auVar7);
          if ((uVar13 & 0x3fffffff) != 0 || uVar11 != 0) {
            return false;
          }
        }
        dVar16 = (this->LocalTransform).Scale3D.ZW.m128d_f64[0] -
                 (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0];
        dVar18 = (this->LocalTransform).Scale3D.ZW.m128d_f64[1] -
                 (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
        dVar20 = (this->LocalTransform).Scale3D.XY.m128d_f64[0] -
                 (param_1->LocalTransform).Scale3D.XY.m128d_f64[0];
        dVar22 = (this->LocalTransform).Scale3D.XY.m128d_f64[1] -
                 (param_1->LocalTransform).Scale3D.XY.m128d_f64[1];
        lVar15 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar18,0) & _UNK_15061cc88));
        auVar5._8_4_ = (int)lVar15;
        auVar5._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar16,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar5._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
        uVar13 = movmskpd(0,auVar5);
        lVar15 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar22,0) & _UNK_15061cc88));
        auVar8._8_4_ = (int)lVar15;
        auVar8._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar20,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar8._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
        iVar10 = movmskpd(uVar11,auVar8);
        if (((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) &&
           (bVar9 = FISMComponentDescriptorBase::operator==
                              ((FISMComponentDescriptorBase *)this,
                               (FISMComponentDescriptorBase *)param_1), bVar9)) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator!= @ 147d7db60

bool __thiscall
FISMComponentDescriptor::operator!=(FISMComponentDescriptor *this,FISMComponentDescriptor *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// ComputeHash @ 147d8fa70

uint __thiscall FISMComponentDescriptor::ComputeHash(FISMComponentDescriptor *this)

{
  double dVar1;
  double dVar2;
  FArchiveCrc32 local_a8;
  
  FISMComponentDescriptorBase::ComputeHash((FISMComponentDescriptorBase *)this);
  FArchiveCrc32::FArchiveCrc32(&local_a8,*(uint *)&this->field_0x8,(UObject *)0x0);
  (**(code **)(local_a8._padding_ + 0x150))(&local_a8,&this->StaticMesh);
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&this->OverrideMaterials);
  (**(code **)(local_a8._padding_ + 0x150))(&local_a8,&this->OverlayMaterial);
  TArrayPrivateFriend::Serialize<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&this->RuntimeVirtualTextures);
  UE::Math::operator<<((FArchive *)&local_a8,(TQuat<double> *)&this->LocalTransform);
  UE::Math::operator<<((FArchive *)&local_a8,(TVector<double> *)&(this->LocalTransform).Translation)
  ;
  UE::Math::operator<<((FArchive *)&local_a8,(TVector<double> *)&(this->LocalTransform).Scale3D);
  if (((byte)local_a8._padding_ & 1) != 0) {
    dVar1 = (this->LocalTransform).Translation.ZW.m128d_f64[0];
    dVar2 = (this->LocalTransform).Translation.XY.m128d_f64[1];
    (this->LocalTransform).Translation.XY.m128d_f64[0] =
         (this->LocalTransform).Translation.XY.m128d_f64[0];
    (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar2;
    (this->LocalTransform).Translation.ZW.m128d_f64[0] = dVar1;
    (this->LocalTransform).Translation.ZW.m128d_f64[1] = 0.0;
    dVar1 = (this->LocalTransform).Scale3D.ZW.m128d_f64[0];
    dVar2 = (this->LocalTransform).Scale3D.XY.m128d_f64[1];
    (this->LocalTransform).Scale3D.XY.m128d_f64[0] = (this->LocalTransform).Scale3D.XY.m128d_f64[0];
    (this->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar2;
    (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = dVar1;
    (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  *(uint *)&this->field_0x8 = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

// CreateFrom @ 147d941f0

FISMComponentDescriptor * __cdecl
FISMComponentDescriptor::CreateFrom
          (FISMComponentDescriptor *__return_storage_ptr__,
          TSubclassOf<UStaticMeshComponent> *param_1)

{
  int iVar1;
  UStaticMeshComponent *pUVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  FISMComponentDescriptor *pFVar11;
  FArchiveCrc32 local_a8;
  
  FISMComponentDescriptor(__return_storage_ptr__);
  pUVar10 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar10 != (UClass *)0x0) {
    pUVar9 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    if (pUVar9 != (UClass *)0x0) {
      iVar1 = (int)pUVar9->_padding_;
      if (((int)pUVar10->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        pUVar10 = (param_1->Class).field0_0x0.DebugPtr;
        goto LAB_147d9424a;
      }
    }
  }
  pUVar10 = (UClass *)0x0;
LAB_147d9424a:
  if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar10);
  }
  pUVar2 = (UStaticMeshComponent *)(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  lVar3 = pUVar2->_padding_;
  iVar1 = (int)pUVar10->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar10->_padding_)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FISMComponentDescriptor *)(*pcVar4)();
      return pFVar11;
    }
  }
  InitFrom(__return_storage_ptr__,pUVar2,true);
  FISMComponentDescriptorBase::ComputeHash((FISMComponentDescriptorBase *)__return_storage_ptr__);
  FArchiveCrc32::FArchiveCrc32(&local_a8,*(uint *)&__return_storage_ptr__->field_0x8,(UObject *)0x0)
  ;
  (**(code **)(local_a8._padding_ + 0x150))(&local_a8,&__return_storage_ptr__->StaticMesh);
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&__return_storage_ptr__->OverrideMaterials);
  (**(code **)(local_a8._padding_ + 0x150))(&local_a8,&__return_storage_ptr__->OverlayMaterial);
  TArrayPrivateFriend::Serialize<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&__return_storage_ptr__->RuntimeVirtualTextures);
  UE::Math::operator<<
            ((FArchive *)&local_a8,(TQuat<double> *)&__return_storage_ptr__->LocalTransform);
  UE::Math::operator<<
            ((FArchive *)&local_a8,
             (TVector<double> *)&(__return_storage_ptr__->LocalTransform).Translation);
  UE::Math::operator<<
            ((FArchive *)&local_a8,
             (TVector<double> *)&(__return_storage_ptr__->LocalTransform).Scale3D);
  if (((byte)local_a8._padding_ & 1) != 0) {
    dVar5 = (__return_storage_ptr__->LocalTransform).Translation.ZW.m128d_f64[0];
    dVar7 = (__return_storage_ptr__->LocalTransform).Translation.XY.m128d_f64[1];
    dVar6 = (__return_storage_ptr__->LocalTransform).Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->LocalTransform).Translation.XY.m128d_f64[0] =
         (__return_storage_ptr__->LocalTransform).Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->LocalTransform).Translation.XY.m128d_f64[1] = dVar7;
    dVar7 = (__return_storage_ptr__->LocalTransform).Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->LocalTransform).Scale3D.XY.m128d_f64[0] =
         (__return_storage_ptr__->LocalTransform).Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar7;
    (__return_storage_ptr__->LocalTransform).Scale3D.ZW.m128d_f64[0] = dVar6;
    (__return_storage_ptr__->LocalTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
    (__return_storage_ptr__->LocalTransform).Translation.ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->LocalTransform).Translation.ZW.m128d_f64[1] = 0.0;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return __return_storage_ptr__;
}

// InitComponent @ 147dab840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMComponentDescriptor::InitComponent
          (FISMComponentDescriptor *this,UInstancedStaticMeshComponent *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  UMaterialInstanceDynamic *pUVar11;
  UMaterialInterface *pUVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  UMaterialInstanceDynamic *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  (**(code **)(param_1->_padding_ + 0xb28))(param_1,(this->StaticMesh).field0_0x0.DebugPtr);
  uVar9 = (this->OverrideMaterials).ArrayNum;
  plVar2 = &param_1->_padding_;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  puVar1 = (uint *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (*puVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,(ForAnyElementType *)plVar2,0,(int *)puVar1);
  }
  pFVar13 = (this->OverrideMaterials).AllocatorInstance.Data;
  iVar3 = (this->OverrideMaterials).ArrayNum;
  local_res10 = pFVar13 + (longlong)iVar3 * 8;
  do {
    pFVar6 = local_res10;
    if ((this->OverrideMaterials).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar6) {
      pUVar11 = (UMaterialInstanceDynamic *)(this->OverlayMaterial).field0_0x0.DebugPtr;
      if (pUVar11 != (UMaterialInstanceDynamic *)0x0) {
        cVar7 = (**(code **)(pUVar11->_padding_ + 0x1c0))(pUVar11);
        if (cVar7 == '\0') {
          pUVar10 = Z_Construct_UClass_UMaterialInstance_NoRegister();
          iVar3 = (int)pUVar10->_padding_;
          if ((iVar3 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar10->_padding_)) {
            cVar7 = (**(code **)(pUVar11->_padding_ + 0x5c0))(pUVar11);
            if (cVar7 != '\0') {
              pUVar11 = (UMaterialInstanceDynamic *)pUVar11->_padding_;
              goto LAB_147dabbc5;
            }
          }
          pUVar11 = (UMaterialInstanceDynamic *)
                    FISMComponentDescriptorBase::DuplicateMaterialInterface
                              ((UMaterialInterface *)pUVar11,(UObject *)param_1);
          if (pUVar11 != (UMaterialInstanceDynamic *)0x0) {
            pUVar10 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
            iVar3 = (int)pUVar10->_padding_;
            if ((iVar3 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
                &pUVar10->_padding_)) {
              local_50 = 0;
              uStack_48 = 0;
              pUVar12 = (UMaterialInterface *)
                        (**(code **)(pUVar11->_padding_ + 0x3a8))(pUVar11,&local_50);
              if (pUVar12 != (UMaterialInterface *)0x0) {
                cVar7 = (**(code **)(pUVar12->_padding_ + 0x1c0))(pUVar12);
                if (cVar7 == '\0') {
                  pUVar12 = FISMComponentDescriptorBase::DuplicateMaterialInterface
                                      (pUVar12,(UObject *)param_1);
                  UMaterialInstanceDynamic::SetNaniteOverride(pUVar11,pUVar12);
                }
              }
            }
          }
        }
      }
LAB_147dabbc5:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      param_1->_padding_ = (longlong)pUVar11;
      TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
                 &param_1->_padding_,&this->RuntimeVirtualTextures);
      FISMComponentDescriptorBase::InitComponent((FISMComponentDescriptorBase *)this,param_1);
      return;
    }
    pUVar11 = *(UMaterialInstanceDynamic **)pFVar13;
    if (pUVar11 != (UMaterialInstanceDynamic *)0x0) {
      cVar7 = (**(code **)(pUVar11->_padding_ + 0x1c0))(pUVar11);
      if (cVar7 == '\0') {
        pUVar10 = Z_Construct_UClass_UMaterialInstance_NoRegister();
        iVar4 = (int)pUVar10->_padding_;
        if ((iVar4 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar10->_padding_)) {
          cVar7 = (**(code **)(pUVar11->_padding_ + 0x5c0))(pUVar11);
          if (cVar7 != '\0') {
            pUVar11 = (UMaterialInstanceDynamic *)pUVar11->_padding_;
            goto LAB_147dab9ed;
          }
        }
        pUVar11 = (UMaterialInstanceDynamic *)
                  FISMComponentDescriptorBase::DuplicateMaterialInterface
                            ((UMaterialInterface *)pUVar11,(UObject *)param_1);
        if (pUVar11 != (UMaterialInstanceDynamic *)0x0) {
          pUVar10 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar4 = (int)pUVar10->_padding_;
          if ((iVar4 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar10->_padding_)) {
            local_60 = 0;
            uStack_58 = 0;
            pUVar12 = (UMaterialInterface *)
                      (**(code **)(pUVar11->_padding_ + 0x3a8))(pUVar11,&local_60);
            if (pUVar12 != (UMaterialInterface *)0x0) {
              cVar7 = (**(code **)(pUVar12->_padding_ + 0x1c0))(pUVar12);
              if (cVar7 == '\0') {
                pUVar12 = FISMComponentDescriptorBase::DuplicateMaterialInterface
                                    (pUVar12,(UObject *)param_1);
                UMaterialInstanceDynamic::SetNaniteOverride(pUVar11,pUVar12);
              }
            }
          }
        }
      }
    }
LAB_147dab9ed:
    local_68 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    if (((UMaterialInstanceDynamic **)*plVar2 <= &local_68) &&
       (&local_68 < (UMaterialInstanceDynamic **)*plVar2 + (int)*puVar1)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar9 = (uint)param_1->_padding_;
    if (uVar9 == *puVar1) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar2,(int *)puVar1);
    }
    *(uint *)&param_1->_padding_ = uVar9 + 1;
    *(UMaterialInstanceDynamic **)(*plVar2 + (longlong)(int)uVar9 * 8) = local_68;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_68 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_68);
    }
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// InitFrom @ 147dac610

void __thiscall
FISMComponentDescriptor::InitFrom
          (FISMComponentDescriptor *this,UStaticMeshComponent *param_1,bool param_2)

{
  UStaticMesh *pUVar1;
  UStaticMeshComponent *local_res8;
  
  pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UStaticMesh *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  (this->StaticMesh).field0_0x0.DebugPtr = pUVar1;
  local_res8 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->StaticMeshComponent).WeakPtr,(FObjectPtr)&local_res8);
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&this->OverrideMaterials,
             (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  (this->OverlayMaterial).field0_0x0 = (TObjectPtr<UMaterialInterface>_u_0)param_1->_padding_;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>::operator=
            (&this->RuntimeVirtualTextures,
             (TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_);
  FISMComponentDescriptorBase::InitFrom((FISMComponentDescriptorBase *)this,param_1,param_2);
  return;
}

