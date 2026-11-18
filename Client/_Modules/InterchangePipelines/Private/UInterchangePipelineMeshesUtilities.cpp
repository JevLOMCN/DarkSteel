// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 63

// StaticClass @ 14e72cdc0

UClass * __cdecl UInterchangePipelineMeshesUtilities::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangePipelineMeshesUtilities",
               &Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.InnerSingleton,
               StaticRegisterNativesUInterchangePipelineMeshesUtilities,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePipelineMeshesUtilities>,
               InternalVTableHelperCtorCaller<UInterchangePipelineMeshesUtilities>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.InnerSingleton;
}

// UInterchangePipelineMeshesUtilities @ 14e768830

UInterchangePipelineMeshesUtilities * __thiscall
UInterchangePipelineMeshesUtilities::UInterchangePipelineMeshesUtilities
          (UInterchangePipelineMeshesUtilities *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangePipelineMeshesUtilities__6B_;
  *(undefined8 *)&this->MeshGeometriesPerMeshUid = 0;
  *(undefined8 *)&(this->MeshGeometriesPerMeshUid).field_0x8 = 0;
  *(undefined8 *)&(this->MeshGeometriesPerMeshUid).field_0x20 = 0;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x28 = 0;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x34 = 0;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MeshGeometriesPerMeshUid).field_0x40 = 0;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x48 = 0;
  *(undefined8 *)&this->MeshInstancesPerMeshInstanceUid = 0;
  *(undefined8 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 = 0;
  *(undefined8 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x20 = 0;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28 = 0;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34 = 0;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x40 = 0;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x48 = 0;
  *(undefined8 *)&this->SkeletonRootUidPerMeshUid = 0;
  *(undefined8 *)&(this->SkeletonRootUidPerMeshUid).field_0x8 = 0;
  *(undefined8 *)&(this->SkeletonRootUidPerMeshUid).field_0x20 = 0;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x28 = 0;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x34 = 0;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkeletonRootUidPerMeshUid).field_0x40 = 0;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x48 = 0;
  *(undefined8 *)&(this->AssemblyMeshUids).Elements = 0;
  *(undefined8 *)&(this->AssemblyMeshUids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AssemblyMeshUids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AssemblyMeshUids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AssemblyMeshUids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssemblyMeshUids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AssemblyMeshUids).Elements.field_0x30 = 0xffffffff;
  (this->AssemblyMeshUids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AssemblyMeshUids).HashSize = 0;
  (this->CurrentDataContext).bIgnoreGeometryCaches = false;
  (this->CurrentDataContext).bConvertStaticMeshToSkeletalMesh = false;
  (this->CurrentDataContext).bConvertSkeletalMeshToStaticMesh = false;
  (this->CurrentDataContext).bConvertStaticsWithMorphTargetsToSkeletals = false;
  (this->CurrentDataContext).bImportMeshesInBoneHierarchy = true;
  (this->CurrentDataContext).bQueryGeometryOnlyIfNoInstance = true;
  (this->CurrentDataContext).bIgnoreStaticMeshes = false;
  return this;
}

// UInterchangePipelineMeshesUtilities @ 14e768960

UInterchangePipelineMeshesUtilities * __thiscall
UInterchangePipelineMeshesUtilities::UInterchangePipelineMeshesUtilities
          (UInterchangePipelineMeshesUtilities *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangePipelineMeshesUtilities__6B_;
  *(undefined8 *)&this->MeshGeometriesPerMeshUid = 0;
  *(undefined8 *)&(this->MeshGeometriesPerMeshUid).field_0x8 = 0;
  *(undefined8 *)&(this->MeshGeometriesPerMeshUid).field_0x20 = 0;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x28 = 0;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x34 = 0;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MeshGeometriesPerMeshUid).field_0x40 = 0;
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x48 = 0;
  *(undefined8 *)&this->MeshInstancesPerMeshInstanceUid = 0;
  *(undefined8 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 = 0;
  *(undefined8 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x20 = 0;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28 = 0;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34 = 0;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x40 = 0;
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x48 = 0;
  *(undefined8 *)&this->SkeletonRootUidPerMeshUid = 0;
  *(undefined8 *)&(this->SkeletonRootUidPerMeshUid).field_0x8 = 0;
  *(undefined8 *)&(this->SkeletonRootUidPerMeshUid).field_0x20 = 0;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x28 = 0;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x34 = 0;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkeletonRootUidPerMeshUid).field_0x40 = 0;
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x48 = 0;
  *(undefined8 *)&(this->AssemblyMeshUids).Elements = 0;
  *(undefined8 *)&(this->AssemblyMeshUids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AssemblyMeshUids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AssemblyMeshUids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AssemblyMeshUids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssemblyMeshUids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AssemblyMeshUids).Elements.field_0x30 = 0xffffffff;
  (this->AssemblyMeshUids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AssemblyMeshUids).HashSize = 0;
  (this->CurrentDataContext).bIgnoreGeometryCaches = false;
  (this->CurrentDataContext).bConvertStaticMeshToSkeletalMesh = false;
  (this->CurrentDataContext).bConvertSkeletalMeshToStaticMesh = false;
  (this->CurrentDataContext).bConvertStaticsWithMorphTargetsToSkeletals = false;
  (this->CurrentDataContext).bImportMeshesInBoneHierarchy = true;
  (this->CurrentDataContext).bQueryGeometryOnlyIfNoInstance = true;
  (this->CurrentDataContext).bIgnoreStaticMeshes = false;
  return this;
}

// ~UInterchangePipelineMeshesUtilities @ 14e76c340

void __thiscall
UInterchangePipelineMeshesUtilities::~UInterchangePipelineMeshesUtilities
          (UInterchangePipelineMeshesUtilities *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangePipelineMeshesUtilities__6B_;
  (this->AssemblyMeshUids).HashSize = 0;
  FVar1 = (this->AssemblyMeshUids).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AssemblyMeshUids).Elements);
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkeletonRootUidPerMeshUid).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkeletonRootUidPerMeshUid);
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MeshInstancesPerMeshInstanceUid).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshInstancesPerMeshInstanceUid);
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MeshGeometriesPerMeshUid).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshGeometriesPerMeshUid);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14e76de80

void __thiscall
`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_1>::
operator()(void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  EInterchangeNodeContainerType EVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FInterchangeMeshGeometry *this_00;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_01;
  undefined1 local_38 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_30;
  
  EVar5 = UInterchangeBaseNode::GetNodeContainerType(param_2);
  if ((EVar5 == TranslatedAsset) && (param_2 != (UInterchangeBaseNode *)0x0)) {
    pUVar9 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
    iVar8 = (int)pUVar9->_padding_;
    if ((iVar8 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar9->_padding_)) {
      lVar2 = **(longlong **)this;
      iVar8 = (param_1->Data).ArrayNum;
      if (iVar8 == 0) {
        pwVar10 = L"";
        iVar8 = 0;
      }
      else {
        pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        iVar8 = iVar8 + -1;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
      this_00 = TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
                            *)(lVar2 + 0x28),uVar7,param_1);
      ::FString::operator=(&this_00->MeshUid,param_1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      (this_00->MeshNode).field0_0x0.DebugPtr = (UInterchangeMeshNode *)param_2;
      iVar8 = UInterchangeMeshNode::GetAssemblyPartDependenciesCount
                        ((UInterchangeMeshNode *)param_2);
      if (0 < iVar8) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                   (**(longlong **)this + 0x118),(FString *)&stack0x00000020,(bool *)param_1);
        local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_30.ArrayNum = 0;
        local_30.ArrayMax = 0;
        UInterchangeMeshNode::GetAssemblyPartDependencies((UInterchangeMeshNode *)param_2,&local_30)
        ;
        FVar11.Data = local_30.AllocatorInstance.Data;
        iVar8 = local_30.ArrayNum;
        lVar12 = (longlong)local_30.ArrayNum;
        lVar2 = **(longlong **)this;
        this_01 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0x118);
        if ((local_30.ArrayNum < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = *(int *)(lVar2 + 0x120) - *(int *)(lVar2 + 0x14c);
        uVar13 = uVar7 + iVar8;
        if (uVar7 < uVar13) {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
          }
          TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,uVar13);
          if (uVar13 < 4) {
            iVar8 = 1;
          }
          else {
            uVar1 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar8 = 1 << ((byte)lVar3 & 0x1f);
          }
          if ((*(int *)(lVar2 + 0x160) == 0) || (*(int *)(lVar2 + 0x160) < iVar8)) {
            *(int *)(lVar2 + 0x160) = iVar8;
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(this_01);
          }
        }
        pFVar14 = FVar11.Data + lVar12 * 0x10;
        for (; FVar11.Data != pFVar14; FVar11.Data = FVar11.Data + 0x10) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (this_01,(FString *)local_38,(bool *)FVar11.Data);
        }
        DestructItems<FString,int>((FString *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
        if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// operator() @ 14e7722a0

bool __thiscall
`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_2>::
operator()(void *this,FString *param_1,UInterchangeBaseNode *param_2,FString *param_3)

{
  int *piVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UInterchangeBaseNode *pUVar12;
  UClass *pUVar13;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar14;
  FString *pFVar15;
  UInterchangeSceneNode *this_00;
  TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar16;
  FInterchangeMeshInstance *pFVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  undefined1 *puVar20;
  TObjectPtr<UInterchangeBaseNode_const_>_u_0 *pTVar21;
  uint uVar22;
  TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
  *this_01;
  longlong lVar23;
  uint local_res8 [2];
  UInterchangeSceneNode *local_138;
  FString local_128;
  int local_118;
  int local_114;
  int local_110 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  uint *local_f8;
  TObjectPtr<UInterchangeBaseNode_const_>_u_0 local_f0;
  uint *local_e8;
  TObjectPtr<UInterchangeBaseNode_const_>_u_0 local_e0;
  uint *local_d8;
  TObjectPtr<UInterchangeBaseNode_const_>_u_0 local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pUVar12 = UInterchangeBaseNodeContainer::GetNode
                      ((UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8),
                       param_3);
  if (pUVar12 == (UInterchangeBaseNode *)0x0) {
    return false;
  }
  pUVar13 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
  iVar10 = (int)pUVar13->_padding_;
  if (*(int *)(pUVar12->_padding_ + 0x38) < iVar10) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar10 * 8)
      != &pUVar13->_padding_) {
    return false;
  }
  pTVar14 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                    *)(**(longlong **)this + 0x28),param_3);
  if ((pTVar14 == (TTuple<FString,FInterchangeMeshGeometry> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pUVar2 = (UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8);
  pFVar15 = UInterchangeBaseNode::GetParentUid(param_2,&local_c8);
  this_00 = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(pUVar2,pFVar15);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_138 = (UInterchangeSceneNode *)0x0;
  local_res8[0] = 0;
  uVar9 = local_res8[0];
  if (this_00 == (UInterchangeSceneNode *)0x0) goto LAB_14e77252c;
  pTVar3 = *(TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             **)((longlong)this + 0x10);
  pFVar15 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_b8);
  iVar10 = (pFVar15->Data).ArrayNum;
  if (iVar10 == 0) {
    pwVar18 = L"";
    iVar10 = 0;
  }
  else {
    pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    iVar10 = iVar10 + -1;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar18);
  iVar10 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>(pTVar3,uVar9,pFVar15);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (iVar10 != -1) {
    pTVar3 = *(TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               **)((longlong)this + 0x10);
    pFVar15 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_a8);
    pTVar16 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Find(pTVar3,pFVar15);
    if ((pTVar16 == (TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    iVar10 = *(int *)&pTVar16->field_0x18;
    uVar22 = 0;
    uVar9 = local_res8[0];
    local_138 = this_00;
    if (0 < iVar10) {
      lVar23 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar22 < iVar10) {
          uVar9 = ~uVar22 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        lVar19 = *(longlong *)&pTVar16->field_0x10;
        pFVar15 = UInterchangeBaseNode::GetUniqueID(param_2,&local_98);
        iVar10 = *(int *)(lVar19 + 8 + lVar23);
        iVar11 = (pFVar15->Data).ArrayNum;
        if (iVar10 == iVar11) {
          if (iVar10 < 2) {
            bVar6 = true;
          }
          else {
            iVar10 = wcscmp(*(wchar_t **)(lVar19 + lVar23),
                            (wchar_t *)(pFVar15->Data).AllocatorInstance.Data);
            bVar6 = iVar10 == 0;
          }
        }
        else {
          bVar6 = iVar11 + iVar10 == 1;
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        uVar9 = uVar22;
        if (bVar6) break;
        iVar10 = *(int *)&pTVar16->field_0x18;
        uVar22 = uVar22 + 1;
        lVar23 = lVar23 + 0x10;
        uVar9 = local_res8[0];
      } while ((int)uVar22 < iVar10);
    }
    goto LAB_14e77252c;
  }
  pUVar13 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
  iVar10 = (int)pUVar13->_padding_;
  uVar9 = local_res8[0];
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar10) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8)
      != &pUVar13->_padding_)) goto LAB_14e77252c;
  UInterchangeBaseNode::GetUniqueID(param_2,&local_128);
  do {
    pFVar15 = UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
    bVar6 = UInterchangeSceneNode::IsSpecializedTypeContains(this_00,pFVar15);
    if (bVar6) {
      pUVar2 = (UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8);
      pFVar15 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_68);
      UInterchangeBaseNodeContainer::GetNodeChildrenUids(pUVar2,&local_108,pFVar15);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar22 = 0;
      iVar10 = local_108.ArrayNum;
      uVar9 = local_res8[0];
      if (local_108.ArrayNum < 1) goto LAB_14e772775;
      lVar23 = 0;
      goto LAB_14e7726e0;
    }
    pFVar15 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_88);
    if (&local_128 != pFVar15) {
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      local_128.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = (pFVar15->Data).ArrayNum;
      local_128.Data.ArrayMax = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pUVar2 = (UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8);
    pFVar15 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)this_00,&local_78);
    this_00 = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(pUVar2,pFVar15);
    if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e77267b:
      this_00 = (UInterchangeSceneNode *)0x0;
    }
    else {
      pUVar13 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar10 = (int)pUVar13->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar13->_padding_)) goto LAB_14e77267b;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  } while (this_00 != (UInterchangeSceneNode *)0x0);
  goto LAB_14e77278e;
  while( true ) {
    if (bVar6) break;
    uVar22 = uVar22 + 1;
    lVar23 = lVar23 + 0x10;
    uVar9 = local_res8[0];
    if (iVar10 <= (int)uVar22) break;
LAB_14e7726e0:
    uVar9 = 0;
    if ((int)uVar22 < iVar10) {
      uVar9 = ~uVar22 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar10 = local_108.ArrayNum, bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar11 = *(int *)(local_108.AllocatorInstance.Data + lVar23 + 8);
    uVar9 = uVar22;
    if (iVar11 == local_128.Data.ArrayNum) {
      if (iVar11 < 2) break;
      iVar11 = wcscmp(*(wchar_t **)(local_108.AllocatorInstance.Data + lVar23),
                      (wchar_t *)local_128.Data.AllocatorInstance.Data);
      bVar6 = iVar11 == 0;
    }
    else {
      bVar6 = iVar11 + local_128.Data.ArrayNum == 1;
    }
  }
LAB_14e772775:
  local_res8[0] = uVar9;
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,iVar10);
  local_138 = this_00;
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
LAB_14e77278e:
  uVar9 = local_res8[0];
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
    uVar9 = local_res8[0];
  }
LAB_14e77252c:
  local_res8[0] = uVar9;
  pwVar18 = L"";
  lVar23 = *(longlong *)&pTVar14->field_0x20;
  pUVar13 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
  lVar23 = *(longlong *)(lVar23 + 0x10);
  iVar10 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar23 + 0x38) < iVar10) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar10 * 8) !=
      &pUVar13->_padding_)) {
    this_01 = (TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
               *)(**(longlong **)this + 0x78);
    if (local_138 == (UInterchangeSceneNode *)0x0) {
      iVar10 = (param_1->Data).ArrayNum;
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        iVar10 = iVar10 + -1;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar18);
      iVar10 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>(this_01,uVar9,param_1);
      if ((iVar10 == -1) ||
         (lVar23 = (longlong)iVar10 * 0x98 + *(longlong *)&this_01->Elements, lVar23 == 0)) {
        pFVar17 = TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
                  ::EmplaceByHash<FString_const_&>
                            ((TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
                              *)this_01,uVar9,param_1);
      }
      else {
        pFVar17 = (FInterchangeMeshInstance *)(lVar23 + 0x10);
      }
      (pFVar17->LodGroupNode).field0_0x0.DebugPtr = (UInterchangeBaseNode *)0x0;
      ::FString::operator=(&pFVar17->MeshInstanceUid,param_1);
      if (*(int *)&(pFVar17->SceneNodePerLodIndex).field_0x8 !=
          *(int *)&(pFVar17->SceneNodePerLodIndex).field_0x34) {
        puVar20 = *(undefined1 **)&(pFVar17->SceneNodePerLodIndex).field_0x40;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &(pFVar17->SceneNodePerLodIndex).field_0x38;
        }
        iVar10 = *(int *)(puVar20 +
                         (ulonglong)
                         (*(int *)&(pFVar17->SceneNodePerLodIndex).field_0x48 - 1U & local_res8[0])
                         * 4);
        if (iVar10 != -1) {
          lVar23 = *(longlong *)&pFVar17->SceneNodePerLodIndex;
          do {
            if (*(uint *)((longlong)iVar10 * 0x20 + lVar23) == local_res8[0]) {
              if ((iVar10 != -1) && (lVar23 = (longlong)iVar10 * 0x20 + lVar23, lVar23 != 0))
              goto LAB_14e772c8f;
              break;
            }
            iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar23);
          } while (iVar10 != -1);
        }
      }
      local_d8 = local_res8;
      TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
                  *)&pFVar17->SceneNodePerLodIndex,(uint)local_110,
                 (TKeyInitializer<int_const_&> *)(ulonglong)local_res8[0],(bool *)&local_d8);
      lVar23 = (longlong)local_110[0] * 0x20 + *(longlong *)&pFVar17->SceneNodePerLodIndex;
LAB_14e772c8f:
      local_d0.DebugPtr = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 != (UInterchangeBaseNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      pTVar21 = &local_d0;
    }
    else {
      pFVar15 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_138,&local_58);
      iVar10 = (pFVar15->Data).ArrayNum;
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        iVar10 = iVar10 + -1;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar18);
      iVar10 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>(this_01,uVar9,pFVar15);
      if ((iVar10 == -1) ||
         (lVar23 = (longlong)iVar10 * 0x98 + *(longlong *)&this_01->Elements, lVar23 == 0)) {
        pFVar17 = TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
                  ::EmplaceByHash<FString>
                            ((TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
                              *)this_01,uVar9,pFVar15);
      }
      else {
        pFVar17 = (FInterchangeMeshInstance *)(lVar23 + 0x10);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((pFVar17->LodGroupNode).field0_0x0.DebugPtr == (UInterchangeBaseNode *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_138);
        }
        (pFVar17->LodGroupNode).field0_0x0.DebugPtr = (UInterchangeBaseNode *)local_138;
        pFVar15 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_138,&local_48);
        ::FString::operator=(&pFVar17->MeshInstanceUid,pFVar15);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      if (*(int *)&(pFVar17->SceneNodePerLodIndex).field_0x8 !=
          *(int *)&(pFVar17->SceneNodePerLodIndex).field_0x34) {
        puVar20 = *(undefined1 **)&(pFVar17->SceneNodePerLodIndex).field_0x40;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &(pFVar17->SceneNodePerLodIndex).field_0x38;
        }
        iVar10 = *(int *)(puVar20 +
                         (ulonglong)
                         (*(int *)&(pFVar17->SceneNodePerLodIndex).field_0x48 - 1U & local_res8[0])
                         * 4);
        if (iVar10 != -1) {
          lVar23 = *(longlong *)&pFVar17->SceneNodePerLodIndex;
          do {
            if (*(uint *)((longlong)iVar10 * 0x20 + lVar23) == local_res8[0]) {
              if ((iVar10 != -1) && (lVar23 = (longlong)iVar10 * 0x20 + lVar23, lVar23 != 0))
              goto LAB_14e772b72;
              break;
            }
            iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar23);
          } while (iVar10 != -1);
        }
      }
      local_e8 = local_res8;
      TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
                  *)&pFVar17->SceneNodePerLodIndex,(uint)&local_114,
                 (TKeyInitializer<int_const_&> *)(ulonglong)local_res8[0],(bool *)&local_e8);
      lVar23 = (longlong)local_114 * 0x20 + *(longlong *)&pFVar17->SceneNodePerLodIndex;
LAB_14e772b72:
      local_e0.DebugPtr = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 != (UInterchangeBaseNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      pTVar21 = &local_e0;
    }
    TArray<TObjectPtr<UInterchangeBaseNode_const_>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UInterchangeBaseNode_const_>_>
              ((TArray<TObjectPtr<UInterchangeBaseNode_const_>,TSizedDefaultAllocator<32>_> *)
               (lVar23 + 8),(TObjectPtr<UInterchangeBaseNode_const_> *)&pTVar21->ObjectPtr);
    if (((*(FInterchangeMeshInstance **)&pTVar14->field_0x28 <= pFVar17) &&
        (pFVar17 < (FInterchangeMeshInstance *)
                   (&(*(FInterchangeMeshInstance **)&pTVar14->field_0x28)->MeshInstanceUid +
                   *(int *)&pTVar14->field_0x34))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar10 = *(int *)&pTVar14->field_0x30;
    if (iVar10 == *(int *)&pTVar14->field_0x34) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)&pTVar14->field_0x28,
                          (int *)&pTVar14->field_0x34);
    }
    *(int *)&pTVar14->field_0x30 = iVar10 + 1;
    ::FString::FString((FString *)((longlong)iVar10 * 0x10 + *(longlong *)&pTVar14->field_0x28),
                       &pFVar17->MeshInstanceUid);
    pFVar4 = (pFVar17->ReferencingMeshGeometryUids).AllocatorInstance.Data;
    if (((pFVar4 <= param_3) &&
        (param_3 < pFVar4 + (longlong)(pFVar17->ReferencingMeshGeometryUids).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar10 = (pFVar17->ReferencingMeshGeometryUids).ArrayNum;
    piVar1 = &(pFVar17->ReferencingMeshGeometryUids).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(pFVar17->ReferencingMeshGeometryUids).AllocatorInstance,piVar1);
    }
    (pFVar17->ReferencingMeshGeometryUids).ArrayNum = iVar10 + 1;
    ::FString::FString((FString *)
                       ((pFVar17->ReferencingMeshGeometryUids).AllocatorInstance.Data +
                       (longlong)iVar10 * 0x10),param_3);
    bVar6 = pFVar17->bReferenceSkinnedMesh;
    bVar8 = UInterchangeMeshNode::IsSkinnedMesh(*(UInterchangeMeshNode **)&pTVar14->field_0x20);
    pFVar17->bReferenceSkinnedMesh = (bool)(bVar8 | bVar6);
    bVar6 = pFVar17->bReferenceMorphTarget;
    bVar8 = UInterchangeMeshNode::IsMorphTarget(*(UInterchangeMeshNode **)&pTVar14->field_0x20);
    pFVar17->bReferenceMorphTarget = (bool)(bVar8 | bVar6);
    bVar6 = pFVar17->bHasMorphTargets;
    iVar10 = UInterchangeMeshNode::GetMorphTargetDependeciesCount
                       (*(UInterchangeMeshNode **)&pTVar14->field_0x20);
    pFVar17->bHasMorphTargets = (bool)(0 < iVar10 | bVar6);
  }
  else {
    lVar23 = **(longlong **)this;
    iVar10 = (param_1->Data).ArrayNum;
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      pwVar18 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar10 = iVar10 + -1;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar18);
    iVar10 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                         *)(lVar23 + 0x78),uVar9,param_1);
    if ((iVar10 == -1) ||
       (lVar19 = (longlong)iVar10 * 0x98 + *(longlong *)(lVar23 + 0x78), lVar19 == 0)) {
      pFVar17 = TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
                ::EmplaceByHash<FString_const_&>
                          ((TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
                            *)(lVar23 + 0x78),uVar9,param_1);
    }
    else {
      pFVar17 = (FInterchangeMeshInstance *)(lVar19 + 0x10);
    }
    (pFVar17->LodGroupNode).field0_0x0.DebugPtr = (UInterchangeBaseNode *)0x0;
    ::FString::operator=(&pFVar17->MeshInstanceUid,param_1);
    if (*(int *)&(pFVar17->SceneNodePerLodIndex).field_0x8 !=
        *(int *)&(pFVar17->SceneNodePerLodIndex).field_0x34) {
      puVar20 = *(undefined1 **)&(pFVar17->SceneNodePerLodIndex).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(pFVar17->SceneNodePerLodIndex).field_0x38;
      }
      iVar10 = *(int *)(puVar20 +
                       (ulonglong)
                       (*(int *)&(pFVar17->SceneNodePerLodIndex).field_0x48 - 1U & local_res8[0]) *
                       4);
      if (iVar10 != -1) {
        lVar23 = *(longlong *)&pFVar17->SceneNodePerLodIndex;
        do {
          if (*(uint *)((longlong)iVar10 * 0x20 + lVar23) == local_res8[0]) {
            if ((iVar10 != -1) && (lVar23 = (longlong)iVar10 * 0x20 + lVar23, lVar23 != 0))
            goto LAB_14e77289e;
            break;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar23);
        } while (iVar10 != -1);
      }
    }
    local_f8 = local_res8;
    TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
                *)&pFVar17->SceneNodePerLodIndex,(uint)&local_118,
               (TKeyInitializer<int_const_&> *)(ulonglong)local_res8[0],(bool *)&local_f8);
    lVar23 = (longlong)local_118 * 0x20 + *(longlong *)&pFVar17->SceneNodePerLodIndex;
LAB_14e77289e:
    local_f0.DebugPtr = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UInterchangeBaseNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    TArray<TObjectPtr<UInterchangeBaseNode_const_>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UInterchangeBaseNode_const_>_>
              ((TArray<TObjectPtr<UInterchangeBaseNode_const_>,TSizedDefaultAllocator<32>_> *)
               (lVar23 + 8),(TObjectPtr<UInterchangeBaseNode_const_> *)&local_f0.ObjectPtr);
    if (((*(FInterchangeMeshInstance **)&pTVar14->field_0x28 <= pFVar17) &&
        (pFVar17 < (FInterchangeMeshInstance *)
                   (&(*(FInterchangeMeshInstance **)&pTVar14->field_0x28)->MeshInstanceUid +
                   *(int *)&pTVar14->field_0x34))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar10 = *(int *)&pTVar14->field_0x30;
    if (iVar10 == *(int *)&pTVar14->field_0x34) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)&pTVar14->field_0x28,
                          (int *)&pTVar14->field_0x34);
    }
    *(int *)&pTVar14->field_0x30 = iVar10 + 1;
    ::FString::FString((FString *)((longlong)iVar10 * 0x10 + *(longlong *)&pTVar14->field_0x28),
                       &pFVar17->MeshInstanceUid);
    pFVar4 = (pFVar17->ReferencingMeshGeometryUids).AllocatorInstance.Data;
    if (((pFVar4 <= param_3) &&
        (param_3 < pFVar4 + (longlong)(pFVar17->ReferencingMeshGeometryUids).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar10 = (pFVar17->ReferencingMeshGeometryUids).ArrayNum;
    piVar1 = &(pFVar17->ReferencingMeshGeometryUids).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(pFVar17->ReferencingMeshGeometryUids).AllocatorInstance,piVar1);
    }
    (pFVar17->ReferencingMeshGeometryUids).ArrayNum = iVar10 + 1;
    ::FString::FString((FString *)
                       ((pFVar17->ReferencingMeshGeometryUids).AllocatorInstance.Data +
                       (longlong)iVar10 * 0x10),param_3);
    pFVar17->bReferenceSkinnedMesh = false;
    pFVar17->bReferenceMorphTarget = false;
    pFVar17->bHasMorphTargets = false;
    pFVar17->bIsAnimated = true;
  }
  return true;
}

// operator() @ 14e774570

bool __thiscall
`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_3>::
operator()(void *this,FString *param_1,UInterchangeInstancedStaticMeshComponentNode *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  UInterchangeMeshLODContainerNode *this_00;
  UClass *pUVar11;
  ulonglong uVar12;
  UInterchangeBaseNode *this_01;
  FInterchangeMeshInstance *pFVar13;
  FInterchangeMeshInstance *pFVar14;
  FString *pFVar15;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  undefined1 *puVar20;
  int iVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  longlong lVar25;
  undefined1 local_res20 [8];
  ForAnyElementType local_e8;
  int local_e0 [4];
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  FString local_c0;
  uint local_b0;
  int local_ac;
  FString local_a8;
  int *local_98;
  TObjectPtr<UInterchangeBaseNode_const_>_u_0 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  bVar4 = UInterchangeInstancedStaticMeshComponentNode::GetCustomInstancedAssetUid
                    (param_2,&local_c0);
  if (((bVar4) &&
      (bVar4 = __l2::<lambda_2>::operator()
                         (*(void **)((longlong)this + 0x10),param_1,(UInterchangeBaseNode *)param_2,
                          &local_c0), !bVar4)) &&
     (this_00 = (UInterchangeMeshLODContainerNode *)
                UInterchangeBaseNodeContainer::GetNode
                          ((UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8),
                           &local_c0), this_00 != (UInterchangeMeshLODContainerNode *)0x0)) {
    pUVar11 = Z_Construct_UClass_UInterchangeMeshLODContainerNode_NoRegister();
    iVar8 = (int)pUVar11->_padding_;
    if ((iVar8 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar11->_padding_)) {
      ::FString::FString(&local_78,L"LOD");
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      UInterchangeMeshLODContainerNode::GetMeshLODNodeUids(this_00,&local_d0);
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0[0] = 0;
      local_e0[1] = 0;
      if (local_d0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_d0._8_8_ & 0xffffffff);
      }
      iVar8 = 0;
      if (0 < local_d0.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_d0.ArrayNum,&local_e8,0,local_e0 + 1);
        iVar8 = local_e0[0];
      }
      uVar12 = (ulonglong)local_d0.ArrayNum;
      pFVar23 = local_d0.AllocatorInstance.Data + uVar12 * 0x10;
      local_b0 = local_d0.ArrayNum;
      FVar24.Data = local_d0.AllocatorInstance.Data;
      while( true ) {
        if (local_d0.ArrayNum != (int)uVar12) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
          iVar8 = local_e0[0];
        }
        if (FVar24.Data == pFVar23) break;
        this_01 = UInterchangeBaseNodeContainer::GetNode
                            ((UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8),
                             (FString *)FVar24.Data);
        if (this_01 != (UInterchangeBaseNode *)0x0) {
          UInterchangeBaseNode::GetDisplayLabel(this_01,&local_88);
          if (local_78.Data.ArrayNum == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = local_78.Data.ArrayNum + -1;
          }
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar18.Data = local_78.Data.AllocatorInstance.Data;
          }
          bVar4 = ::FString::StartsWith(&local_88,(wchar_t *)FVar18.Data,iVar8,CaseSensitive);
          if (bVar4) {
            ::FString::RightChop(&local_88,&local_a8,3);
            bVar4 = ::FString::IsNumeric(&local_a8);
            if (bVar4) {
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_a8.Data.ArrayNum != 0) {
                FVar18.Data = local_a8.Data.AllocatorInstance.Data;
              }
              uVar7 = _wtoi((wchar_t *)FVar18.Data);
              if (local_e0[0] <= (int)uVar7) {
                iVar21 = (uVar7 - local_e0[0]) + 1;
                iVar8 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (8,8,iVar21,&local_e8,local_e0,local_e0 + 1);
                memset(local_e8.Data + (longlong)iVar8 * 8,0,(longlong)iVar21 << 3);
              }
              uVar9 = 0;
              if ((int)uVar7 < local_e0[0]) {
                uVar9 = ~uVar7 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              *(UInterchangeBaseNode **)(local_e8.Data + (longlong)(int)uVar7 * 8) = this_01;
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        FVar24.Data = FVar24.Data + 0x10;
        uVar12 = (ulonglong)local_b0;
        iVar8 = local_e0[0];
      }
      iVar21 = iVar8 + -1;
      if (-1 < iVar21) {
        lVar22 = (longlong)iVar21;
        lVar25 = lVar22 * 8;
        do {
          if (iVar8 <= iVar21) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar8 = local_e0[0];
          }
          if (*(longlong *)(local_e8.Data + lVar25) == 0) {
            if (iVar8 <= iVar21) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              iVar8 = local_e0[0];
            }
            iVar10 = (iVar8 - iVar21) + -1;
            if (iVar10 != 0) {
              memmove(local_e8.Data + lVar22 * 8,local_e8.Data + lVar22 * 8 + 8,
                      (longlong)iVar10 << 3);
              iVar8 = local_e0[0];
            }
            iVar8 = iVar8 + -1;
            local_e0[0] = iVar8;
          }
          lVar22 = lVar22 + -1;
          lVar25 = lVar25 + -8;
          iVar21 = iVar21 + -1;
        } while (-1 < iVar21);
      }
      if (local_e0[1] != iVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar8,&local_e8,iVar8,local_e0 + 1);
        iVar8 = local_e0[0];
      }
      if (0 < iVar8) {
        pwVar19 = L"";
        lVar25 = **(longlong **)this;
        if (local_c0.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = local_c0.Data.ArrayNum + -1;
          pwVar19 = (wchar_t *)local_c0.Data.AllocatorInstance.Data;
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar19);
        iVar8 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                            *)(lVar25 + 0x78),uVar7,&local_c0);
        if ((iVar8 == -1) ||
           (lVar22 = (longlong)iVar8 * 0x98 + *(longlong *)(lVar25 + 0x78), lVar22 == 0)) {
          pFVar13 = TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
                    ::EmplaceByHash<FString_const_&>
                              ((TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
                                *)(lVar25 + 0x78),uVar7,&local_c0);
        }
        else {
          pFVar13 = (FInterchangeMeshInstance *)(lVar22 + 0x10);
        }
        if ((pFVar13->LodGroupNode).field0_0x0.DebugPtr == (UInterchangeBaseNode *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          (pFVar13->LodGroupNode).field0_0x0.DebugPtr = (UInterchangeBaseNode *)this_00;
          pFVar14 = (FInterchangeMeshInstance *)
                    UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_68);
          if (pFVar13 != pFVar14) {
            pFVar23 = (pFVar13->MeshInstanceUid).Data.AllocatorInstance.Data;
            if (pFVar23 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar23);
            }
            (pFVar13->MeshInstanceUid).Data.AllocatorInstance.Data =
                 (pFVar14->MeshInstanceUid).Data.AllocatorInstance.Data;
            (pFVar14->MeshInstanceUid).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar13->MeshInstanceUid).Data.ArrayNum = (pFVar14->MeshInstanceUid).Data.ArrayNum;
            (pFVar13->MeshInstanceUid).Data.ArrayMax = (pFVar14->MeshInstanceUid).Data.ArrayMax;
            (pFVar14->MeshInstanceUid).Data.ArrayNum = 0;
            (pFVar14->MeshInstanceUid).Data.ArrayMax = 0;
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        local_e0[2] = 0;
        if (0 < local_e0[0]) {
          do {
            if (*(int *)&(pFVar13->SceneNodePerLodIndex).field_0x8 !=
                *(int *)&(pFVar13->SceneNodePerLodIndex).field_0x34) {
              puVar2 = *(undefined1 **)&(pFVar13->SceneNodePerLodIndex).field_0x40;
              puVar20 = &(pFVar13->SceneNodePerLodIndex).field_0x38;
              if (puVar2 != (undefined1 *)0x0) {
                puVar20 = puVar2;
              }
              iVar8 = *(int *)(puVar20 +
                              (ulonglong)
                              (*(int *)&(pFVar13->SceneNodePerLodIndex).field_0x48 - 1U &
                              local_e0[2]) * 4);
              if (iVar8 != -1) {
                lVar25 = *(longlong *)&pFVar13->SceneNodePerLodIndex;
                do {
                  if (*(uint *)((longlong)iVar8 * 0x20 + lVar25) == local_e0[2]) {
                    if ((iVar8 != -1) &&
                       (lVar25 = (longlong)iVar8 * 0x20 + lVar25, iVar8 = local_e0[0], lVar25 != 0))
                    goto LAB_14e774ad8;
                    break;
                  }
                  iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar25);
                } while (iVar8 != -1);
              }
            }
            local_98 = local_e0 + 2;
            TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                      ((TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
                        *)&pFVar13->SceneNodePerLodIndex,(uint)&local_ac,
                       (TKeyInitializer<int_const_&> *)(ulonglong)(uint)local_e0[2],
                       (bool *)&local_98);
            lVar25 = (longlong)local_ac * 0x20 + *(longlong *)&pFVar13->SceneNodePerLodIndex;
            iVar8 = local_e0[0];
LAB_14e774ad8:
            iVar21 = local_e0[2];
            uVar7 = 0;
            if (local_e0[2] < iVar8) {
              uVar7 = (uint)~local_e0[2] >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            local_90 = (TObjectPtr<UInterchangeBaseNode_const_>_u_0)
                       ((TObjectPtr<UInterchangeBaseNode_const_>_u_0 *)
                       (local_e8.Data + (longlong)iVar21 * 8))->DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_90.DebugPtr != (UInterchangeBaseNode *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_90.DebugPtr);
            }
            TArray<TObjectPtr<UInterchangeBaseNode_const_>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TObjectPtr<UInterchangeBaseNode_const_>_>
                      ((TArray<TObjectPtr<UInterchangeBaseNode_const_>,TSizedDefaultAllocator<32>_>
                        *)(lVar25 + 8),
                       (TObjectPtr<UInterchangeBaseNode_const_> *)&local_90.ObjectPtr);
            lVar22 = (longlong)local_e0[2];
            lVar25 = **(longlong **)this;
            uVar7 = 0;
            if (local_e0[2] < local_e0[0]) {
              uVar7 = (uint)~local_e0[2] >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar15 = UInterchangeBaseNode::GetUniqueID
                                (*(UInterchangeBaseNode **)(local_e8.Data + lVar22 * 8),&local_58);
            pTVar16 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                              *)(lVar25 + 0x28),pFVar15);
            if ((pTVar16 == (TTuple<FString,FInterchangeMeshGeometry> *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (((*(FInterchangeMeshInstance **)&pTVar16->field_0x28 <= pFVar13) &&
                (pFVar13 < (FInterchangeMeshInstance *)
                           (&(*(FInterchangeMeshInstance **)&pTVar16->field_0x28)->MeshInstanceUid +
                           *(int *)&pTVar16->field_0x34))) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar8 = *(int *)&pTVar16->field_0x30;
            if (iVar8 == *(int *)&pTVar16->field_0x34) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,(ForAnyElementType *)&pTVar16->field_0x28,
                                 (int *)&pTVar16->field_0x34);
            }
            *(int *)&pTVar16->field_0x30 = iVar8 + 1;
            ::FString::FString((FString *)
                               ((longlong)iVar8 * 0x10 + *(longlong *)&pTVar16->field_0x28),
                               &pFVar13->MeshInstanceUid);
            lVar25 = (longlong)local_e0[2];
            uVar7 = 0;
            if (local_e0[2] < local_e0[0]) {
              uVar7 = (uint)~local_e0[2] >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar17 = (FScriptContainerElement *)
                      UInterchangeBaseNode::GetUniqueID
                                (*(UInterchangeBaseNode **)(local_e8.Data + lVar25 * 8),&local_48);
            pFVar23 = (pFVar13->ReferencingMeshGeometryUids).AllocatorInstance.Data;
            if (((pFVar23 <= pFVar17) &&
                (pFVar17 < pFVar23 + (longlong)(pFVar13->ReferencingMeshGeometryUids).ArrayMax *
                                     0x10)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar8 = (pFVar13->ReferencingMeshGeometryUids).ArrayNum;
            if (iVar8 == (pFVar13->ReferencingMeshGeometryUids).ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&(pFVar13->ReferencingMeshGeometryUids).AllocatorInstance,
                                 &(pFVar13->ReferencingMeshGeometryUids).ArrayMax);
              (pFVar13->ReferencingMeshGeometryUids).ArrayNum = iVar8 + 1;
            }
            else {
              (pFVar13->ReferencingMeshGeometryUids).ArrayNum = iVar8 + 1;
            }
            pFVar23 = (pFVar13->ReferencingMeshGeometryUids).AllocatorInstance.Data +
                      (longlong)iVar8 * 0x10;
            *(undefined8 *)pFVar23 = 0;
            *(undefined8 *)pFVar23 = *(undefined8 *)&pFVar17->field_0x0;
            *(undefined8 *)&pFVar17->field_0x0 = 0;
            *(undefined4 *)(pFVar23 + 8) = *(undefined4 *)(pFVar17 + 8);
            *(undefined4 *)(pFVar23 + 0xc) = *(undefined4 *)(pFVar17 + 0xc);
            *(undefined8 *)(pFVar17 + 8) = 0;
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            bVar4 = pFVar13->bReferenceSkinnedMesh;
            bVar6 = UInterchangeMeshNode::IsSkinnedMesh
                              (*(UInterchangeMeshNode **)&pTVar16->field_0x20);
            bVar1 = pFVar13->bReferenceMorphTarget;
            pFVar13->bReferenceSkinnedMesh = (bool)(bVar6 | bVar4);
            bVar6 = UInterchangeMeshNode::IsMorphTarget
                              (*(UInterchangeMeshNode **)&pTVar16->field_0x20);
            bVar4 = pFVar13->bHasMorphTargets;
            pFVar13->bReferenceMorphTarget = (bool)(bVar6 | bVar1);
            iVar8 = UInterchangeMeshNode::GetMorphTargetDependeciesCount
                              (*(UInterchangeMeshNode **)&pTVar16->field_0x20);
            local_e0[2] = local_e0[2] + 1;
            pFVar13->bHasMorphTargets = (bool)(0 < iVar8 | bVar4);
          } while (local_e0[2] < local_e0[0]);
        }
      }
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return false;
}

// operator() @ 14e775f00

void __thiscall
`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_4>::
operator()(void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  int *piVar1;
  UInterchangeBaseNodeContainer *this_00;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  EInterchangeNodeContainerType EVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FString *pFVar8;
  UInterchangeSceneNode *this_01;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  EVar4 = UInterchangeBaseNode::GetNodeContainerType(param_2);
  if (EVar4 != TranslatedScene) {
    return;
  }
  if (param_2 == (UInterchangeBaseNode *)0x0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar6) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar6 * 8)
      != &pUVar7->_padding_) {
    return;
  }
  pFVar8 = UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString();
  bVar5 = UInterchangeSceneNode::IsSpecializedTypeContains((UInterchangeSceneNode *)param_2,pFVar8);
  if (!bVar5) goto LAB_14e7760e7;
  this_00 = (UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8);
  pFVar8 = UInterchangeBaseNode::GetParentUid(param_2,&local_38);
  this_01 = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(this_00,pFVar8);
  if (this_01 == (UInterchangeSceneNode *)0x0) {
LAB_14e775fda:
    this_01 = (UInterchangeSceneNode *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) goto LAB_14e775fda;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (this_01 != (UInterchangeSceneNode *)0x0) {
    pFVar8 = UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString();
    bVar5 = UInterchangeSceneNode::IsSpecializedTypeContains(this_01,pFVar8);
    if (bVar5) goto LAB_14e7760e7;
  }
  pFVar2 = *(ForAnyElementType **)((longlong)this + 0x18);
  pFVar9 = (FScriptContainerElement *)UInterchangeBaseNode::GetUniqueID(param_2,&local_28);
  if (((pFVar2->Data <= pFVar9) &&
      (pFVar9 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
    *(int *)&pFVar2[1].Data = iVar6 + 1;
  }
  else {
    *(int *)&pFVar2[1].Data = iVar6 + 1;
  }
  pFVar10 = pFVar2->Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar10 = 0;
  *(undefined8 *)pFVar10 = *(undefined8 *)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar9 + 8);
  *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_14e7760e7:
  bVar5 = IsSceneNodeASocket((UInterchangeSceneNode *)param_2);
  if (bVar5) {
    **(undefined1 **)((longlong)this + 0x20) = 1;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar5 = UInterchangeSceneNode::GetCustomAssetInstanceUid
                    ((UInterchangeSceneNode *)param_2,&local_48);
  if (bVar5) {
    __l2::<lambda_2>::operator()(*(void **)((longlong)this + 0x28),param_1,param_2,&local_48);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14e7762c0

void __thiscall
`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l15::<lambda_5>::
operator()(void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FString local_18;
  
  if (param_2 != (UInterchangeBaseNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(param_2->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
         &pUVar6->_padding_)) &&
       (bVar4 = IsSceneNodeASocket((UInterchangeSceneNode *)param_2), bVar4)) {
      pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
      pFVar7 = (FScriptContainerElement *)UInterchangeBaseNode::GetUniqueID(param_2,&local_18);
      if (((pFVar2->Data <= pFVar7) &&
          (pFVar7 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar2,piVar1);
        *(int *)&pFVar2[1].Data = iVar5 + 1;
      }
      else {
        *(int *)&pFVar2[1].Data = iVar5 + 1;
      }
      pFVar8 = pFVar2->Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
      *(undefined8 *)pFVar7 = 0;
      *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar7 + 8);
      *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar7 + 0xc);
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14e776400

void __thiscall
`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l17::<lambda_6>::
operator()(void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  UInterchangeBaseNodeContainer *pUVar1;
  longlong lVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  FString *pFVar8;
  UInterchangeSceneNode *this_00;
  int iVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  UInterchangeSceneNode *pUVar12;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_2 == (UInterchangeBaseNode *)0x0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
  iVar9 = (int)pUVar7->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar9) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar9 * 8)
      != &pUVar7->_padding_) {
    return;
  }
  bVar5 = IsSceneNodeASocket((UInterchangeSceneNode *)param_2);
  if (!bVar5) {
    return;
  }
  pUVar12 = (UInterchangeSceneNode *)0x0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar5 = UInterchangeSceneNode::GetCustomAssetInstanceUid
                    ((UInterchangeSceneNode *)param_2,&local_58);
  if (bVar5) goto LAB_14e776572;
  pUVar1 = (UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8);
  pFVar8 = UInterchangeBaseNode::GetParentUid(param_2,&local_48);
  this_00 = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(pUVar1,pFVar8);
  if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e7764e3:
    this_00 = pUVar12;
  }
  else {
    pUVar7 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar9 = (int)pUVar7->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar7->_padding_)) goto LAB_14e7764e3;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  while ((this_00 != (UInterchangeSceneNode *)0x0 &&
         (bVar5 = UInterchangeSceneNode::GetCustomAssetInstanceUid(this_00,&local_58), !bVar5))) {
    pUVar1 = (UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8);
    pFVar8 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)this_00,&local_38);
    this_00 = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(pUVar1,pFVar8);
    if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e77655b:
      this_00 = pUVar12;
    }
    else {
      pUVar7 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar9 = (int)pUVar7->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar7->_padding_)) goto LAB_14e77655b;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_14e776572:
  if (1 < local_58.Data.ArrayNum) {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
    lVar2 = **(longlong **)this;
    if (local_58.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = local_58.Data.ArrayNum + -1;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar10.Data);
    iVar9 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                        *)(lVar2 + 0x28),uVar6,&local_58);
    if (((iVar9 == -1) ||
        (pUVar12 = (UInterchangeSceneNode *)((longlong)iVar9 * 0x50 + *(longlong *)(lVar2 + 0x28)),
        pUVar12 == (UInterchangeSceneNode *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = UInterchangeBaseNode::GetUniqueID(param_2,&local_28);
    if ((((FString *)pUVar12->_padding_ <= pFVar8) &&
        (pFVar8 < (FString *)pUVar12->_padding_ + *(int *)((longlong)&pUVar12->_padding_ + 4))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = (int)pUVar12->_padding_;
    piVar4 = (int *)((longlong)&pUVar12->_padding_ + 4);
    if (iVar9 == *piVar4) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&pUVar12->_padding_,piVar4);
      *(int *)&pUVar12->_padding_ = iVar9 + 1;
    }
    else {
      *(int *)&pUVar12->_padding_ = iVar9 + 1;
    }
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + pUVar12->_padding_);
    *puVar11 = 0;
    *puVar11 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar11 + 1) = (pFVar8->Data).ArrayNum;
    *(int *)((longlong)puVar11 + 0xc) = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateInterchangePipelineMeshesUtilities @ 14e797510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangePipelineMeshesUtilities * __cdecl
UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities
          (UInterchangeBaseNodeContainer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UInterchangeMeshNode *pUVar3;
  longlong lVar4;
  code *pcVar5;
  TMap<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UInterchangePipelineMeshesUtilities *pUVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  int *piVar13;
  FString *pFVar14;
  UInterchangeBaseNode *this;
  longlong *plVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  FString *pFVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  undefined1 *puVar25;
  uint *puVar26;
  TMap<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
  *pTVar27;
  FString *pFVar28;
  undefined1 auStackY_348 [32];
  char local_318;
  undefined1 local_317;
  undefined1 local_316 [6];
  UInterchangeBaseNodeContainer *local_310;
  UInterchangePipelineMeshesUtilities *local_308;
  FString local_300;
  FString *local_2f0;
  undefined8 local_2e8;
  TMap<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
  *local_2e0;
  int local_2d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2d0;
  undefined8 local_2c0;
  int local_2b8;
  int local_2b4;
  TPairInitializer<FString_const_&,FString_const_&> local_2b0;
  uint uStack_2a0;
  uint uStack_29c;
  undefined1 *local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  uint local_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  TMap<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
  *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 uStack_250;
  UInterchangePipelineMeshesUtilities **local_248;
  UInterchangeBaseNodeContainer **local_240;
  undefined1 *local_238;
  code *local_230;
  UInterchangePipelineMeshesUtilities ***local_228;
  code *local_220;
  UInterchangePipelineMeshesUtilities ***local_218;
  UInterchangePipelineMeshesUtilities **local_210;
  UInterchangeBaseNodeContainer **local_208;
  code *local_200;
  UInterchangePipelineMeshesUtilities ***local_1f8;
  FString *local_1f0;
  FString *local_1e8;
  UInterchangePipelineMeshesUtilities **local_1e0;
  UInterchangeBaseNodeContainer **local_1d8;
  code *local_1d0;
  UInterchangePipelineMeshesUtilities ***local_1c8;
  code *local_1c0;
  UInterchangePipelineMeshesUtilities ***local_1b8;
  UInterchangePipelineMeshesUtilities **local_1b0;
  UInterchangeBaseNodeContainer **local_1a8;
  UInterchangePipelineMeshesUtilities ***local_1a0;
  UInterchangePipelineMeshesUtilities **local_198;
  UInterchangeBaseNodeContainer **local_190;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_188;
  UInterchangePipelineMeshesUtilities **local_180;
  UInterchangeBaseNodeContainer **local_178;
  undefined1 *local_170;
  FString **local_168;
  char *local_160;
  UInterchangePipelineMeshesUtilities ***local_158;
  FString local_150;
  FString local_140 [2];
  undefined4 local_114;
  undefined1 local_108 [128];
  undefined1 local_88 [64];
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_348;
  uVar20 = 0;
  uVar23 = 0;
  local_2d8 = 0;
  local_310 = param_1;
  if ((param_1 == (UInterchangeBaseNodeContainer *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseNodeContainer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangePipelineMeshesUtilities.cpp"
                         ,0x13b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pUVar10 = (UInterchangePipelineMeshesUtilities *)(*pcVar5)();
    return pUVar10;
  }
  pUVar11 = GetTransientPackage();
  local_2e0 = (TMap<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
               *)0x0;
  local_2c0 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar11,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_108,pUVar12);
  local_108._48_8_ = (FObjectInstancingGraph *)0x0;
  local_108._56_8_ = (UPackage *)0x0;
  local_108._16_4_ = 0;
  local_108._20_4_ = 0;
  local_108._24_4_ = RF_NoFlags;
  local_108._40_8_ = (UObject *)0x0;
  local_108[0x20] = false;
  local_108._8_8_ = pUVar11;
  local_308 = (UInterchangePipelineMeshesUtilities *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_108);
  if (local_108._64_8_ != 0) {
    plVar15 = (longlong *)(local_108 + 0x50);
    if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_108._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  local_308->BaseNodeContainer = local_310;
  local_1e0 = &local_308;
  local_1d8 = &local_310;
  local_1c8 = &local_1e0;
  local_1d0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
              ::Call;
  local_2f0 = (FString *)0x0;
  local_2e8 = 0;
  UInterchangeBaseNodeContainer::IterateNodes
            (local_310,
             (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_1d0);
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  UE::Private::InterchangeMeshPipeline::FindNamedLodGroup
            (local_310,
             (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
              *)local_88);
  local_248 = &local_308;
  local_240 = &local_310;
  local_238 = local_88;
  local_1b0 = &local_308;
  local_1a8 = &local_310;
  local_1b8 = &local_1b0;
  local_1c0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_3>,bool,FString_const_&,UInterchangeInstancedStaticMeshComponentNode_*>
              ::Call;
  local_1a0 = &local_248;
  UInterchangeBaseNodeContainer::
  BreakableIterateNodesOfType<UInterchangeInstancedStaticMeshComponentNode>
            (local_310,
             (TFunctionRef<bool___cdecl(FString_const_&,UInterchangeInstancedStaticMeshComponentNode_*)>
              *)&local_1c0);
  local_180 = &local_308;
  local_178 = &local_310;
  local_318 = '\0';
  local_170 = local_88;
  local_168 = &local_2f0;
  local_160 = &local_318;
  local_228 = &local_180;
  local_230 = UE::Core::Private::Function::
              TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_4>,void,FString_const_&,UInterchangeBaseNode_*>
              ::Call;
  local_158 = &local_248;
  UInterchangeBaseNodeContainer::IterateNodes
            (local_310,
             (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_230);
  if (local_318 != '\0') {
    if (*(int *)&(local_308->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(local_308->MeshGeometriesPerMeshUid).field_0x34 == 1) {
      local_190 = &local_310;
      local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188 = &local_2d0;
      local_218 = &local_198;
      local_220 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l15::<lambda_5>,void,FString_const_&,UInterchangeBaseNode_*>
                  ::Call;
      local_2d0.ArrayNum = 0;
      local_2d0.ArrayMax = 0;
      local_198 = &local_308;
      UInterchangeBaseNodeContainer::IterateNodes
                (local_310,
                 (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_220);
      if (*(int *)&(local_308->MeshGeometriesPerMeshUid).field_0x34 == 0) {
        iVar8 = *(int *)&(local_308->MeshGeometriesPerMeshUid).field_0x8 + -1;
      }
      else {
        piVar24 = *(int **)&(local_308->MeshGeometriesPerMeshUid).field_0x20;
        iVar18 = *(int *)&(local_308->MeshGeometriesPerMeshUid).field_0x28;
        if (piVar24 == (int *)0x0) {
          piVar24 = (int *)&(local_308->MeshGeometriesPerMeshUid).field_0x10;
        }
        uVar22 = iVar18 + 0x1f;
        piVar13 = piVar24;
        uVar16 = uVar20;
        if (uVar22 >> 5 != 0) {
LAB_14e797846:
          if (*piVar13 == 0) goto code_r0x00014e79784a;
          local_2d8 = 0;
          bVar7 = piVar24[uVar16] != 0;
          if (bVar7) {
            for (; ((uint)piVar24[uVar16] >> local_2d8 & 1) == 0; local_2d8 = local_2d8 + 1) {
            }
          }
          iVar8 = 0x20;
          if (bVar7) {
            iVar8 = local_2d8;
          }
          iVar8 = iVar8 + (int)uVar16 * 0x20;
          if (iVar18 <= iVar8) goto LAB_14e797873;
          goto LAB_14e797878;
        }
LAB_14e797873:
        iVar8 = -1;
      }
LAB_14e797878:
      uVar16 = uVar20;
      if (iVar8 != -1) {
        uVar16 = (longlong)iVar8 * 0x50 + *(longlong *)&local_308->MeshGeometriesPerMeshUid;
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(uVar16 + 0x38),&local_2d0);
      DestructItems<FString,int>((FString *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
      if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.AllocatorInstance.Data);
      }
    }
    else {
      local_208 = &local_310;
      local_1f8 = &local_210;
      local_200 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l17::<lambda_6>,void,FString_const_&,UInterchangeBaseNode_*>
                  ::Call;
      local_210 = &local_308;
      UInterchangeBaseNodeContainer::IterateNodes
                (local_310,
                 (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_200);
    }
  }
  pUVar10 = local_308;
  pTVar27 = &local_308->MeshGeometriesPerMeshUid;
  uStack_29c = 1;
  uVar22 = *(uint *)&(local_308->MeshGeometriesPerMeshUid).field_0x28;
  puVar1 = &(local_308->MeshGeometriesPerMeshUid).field_0x10;
  local_288 = 0;
  uStack_28c = local_288;
  if (uVar22 != 0) {
    puVar26 = *(uint **)&(local_308->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar9 = *puVar26;
    uVar16 = uVar20;
    uVar23 = 0;
    local_288 = 0;
    while (uVar9 == 0) {
      uVar23 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar23;
      local_288 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)local_288;
      uStack_28c = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
      goto LAB_14e79796b;
      uVar9 = puVar26[(int)uVar23];
    }
    uStack_29c = -uVar9 & uVar9;
    uVar20 = (ulonglong)uStack_29c * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_2b8 = (int)lVar4;
    uStack_28c = local_2b8 + -1 + local_288;
    if ((int)uVar22 < (int)uStack_28c) {
      uStack_28c = uVar22;
    }
  }
LAB_14e79796b:
  uVar9 = *(uint *)&(local_308->MeshGeometriesPerMeshUid).field_0x28;
  uStack_284 = local_114;
  uVar19 = uVar9 & 0xffffffe0;
  iStack_280 = *(int *)&(local_308->MeshGeometriesPerMeshUid).field_0x8 -
               *(int *)&(local_308->MeshGeometriesPerMeshUid).field_0x34;
  uStack_290 = 0xffffffff;
  TStack_270._padding_ = CONCAT44(uStack_29c,uVar23);
  TStack_270.CurrentBitIndex = uStack_28c;
  TStack_270.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar9 >> 5;
  TStack_270._28_4_ = local_114;
  TStack_270.BaseBitIndex = local_288;
  uStack_250 = CONCAT44(uStack_27c,iStack_280);
  local_2e0 = pTVar27;
  local_2b0.Value = (FString *)pTVar27;
  uStack_2a0 = uVar23;
  local_298 = puVar1;
  local_278 = pTVar27;
  TStack_270.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || ((int)uVar22 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pUVar10 = (UInterchangePipelineMeshesUtilities *)(*pcVar5)();
    return pUVar10;
  }
  uVar23 = *(uint *)&(pUVar10->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar9 != uVar23) {
    puVar2 = *(undefined1 **)&(pUVar10->MeshGeometriesPerMeshUid).field_0x20;
    puVar25 = puVar1;
    if (puVar2 != (undefined1 *)0x0) {
      puVar25 = puVar2;
    }
    uVar22 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar18 * 4);
    while (uVar22 == 0) {
      iVar18 = iVar18 + 1;
      uVar19 = uVar19 + 0x20;
      uVar9 = uVar23;
      if ((int)(((int)(uVar23 - 1) >> 0x1f & 0x1fU) + (uVar23 - 1)) >> 5 < iVar18)
      goto LAB_14e797a6b;
      uVar22 = *(uint *)(puVar25 + (longlong)iVar18 * 4);
    }
    uVar20 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_2b4 = (int)lVar4;
    uVar9 = local_2b4 + -1 + uVar19;
    if ((int)uVar23 < (int)uVar9) {
      uVar9 = uVar23;
    }
  }
LAB_14e797a6b:
  pTVar6 = local_278;
  if (*(int *)&local_278->field_0x8 - *(int *)&local_278->field_0x34 != (int)uStack_250) {
    local_317 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_317);
  }
  pUVar10 = local_308;
  if (((TStack_270.CurrentBitIndex == uVar9) &&
      (TStack_270.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar27))
  {
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    DestructItems<FString,int>(local_2f0,(int)local_2e8);
    if (local_2f0 != (FString *)0x0) {
      FMemory::Free(local_2f0);
    }
    return pUVar10;
  }
  pFVar28 = (FString *)(*(longlong *)pTVar6 + 0x10 + (longlong)TStack_270.CurrentBitIndex * 0x50);
  pUVar3 = (UInterchangeMeshNode *)pFVar28[1].Data.AllocatorInstance.Data;
  if (pUVar3 == (UInterchangeMeshNode *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6734323387994209656>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangePipelineMeshesUtilities.cpp"
                       ,0x288,"MeshGeometry.MeshNode");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UInterchangePipelineMeshesUtilities *)(*pcVar5)();
      return pUVar10;
    }
  }
  else {
    bVar7 = UInterchangeMeshNode::IsSkinnedMesh(pUVar3);
    pUVar10 = local_308;
    if (bVar7) {
      iVar18 = (pFVar28->Data).ArrayNum;
      if (iVar18 == 0) {
        pwVar17 = L"";
        iVar18 = 0;
      }
      else {
        pwVar17 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
        iVar18 = iVar18 + -1;
      }
      uVar23 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar17);
      iVar18 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                           *)&pUVar10->SkeletonRootUidPerMeshUid,uVar23,pFVar28);
      if (((iVar18 == -1) &&
          (pUVar3 = (UInterchangeMeshNode *)pFVar28[1].Data.AllocatorInstance.Data,
          pUVar3 != (UInterchangeMeshNode *)0x0)) &&
         (iVar18 = UInterchangeMeshNode::GetSkeletonDependeciesCount(pUVar3), iVar18 != 0)) {
        local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_300.Data.ArrayNum = 0;
        local_300.Data.ArrayMax = 0;
        UInterchangeMeshNode::GetSkeletonDependency(pUVar3,0,&local_300);
LAB_14e797b80:
        pFVar14 = UInterchangeBaseNode::InvalidNodeUid(local_140);
        iVar8 = local_300.Data.ArrayNum;
        iVar18 = (pFVar14->Data).ArrayNum;
        if (local_300.Data.ArrayNum == iVar18) {
          if (1 < local_300.Data.ArrayNum) {
            iVar18 = wcscmp((wchar_t *)local_300.Data.AllocatorInstance.Data,
                            (wchar_t *)(pFVar14->Data).AllocatorInstance.Data);
            bVar7 = iVar18 == 0;
            goto LAB_14e797bb7;
          }
LAB_14e797c0e:
          bVar7 = false;
        }
        else {
          bVar7 = iVar18 + local_300.Data.ArrayNum == 1;
LAB_14e797bb7:
          if (bVar7) goto LAB_14e797c0e;
          pFVar21 = local_2f0 + (int)local_2e8;
          for (pFVar14 = local_2f0; pFVar14 != pFVar21; pFVar14 = pFVar14 + 1) {
            iVar18 = (pFVar14->Data).ArrayNum;
            if (iVar18 == iVar8) {
              if (iVar18 < 2) goto LAB_14e797c0e;
              iVar18 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                                  (wchar_t *)local_300.Data.AllocatorInstance.Data);
              bVar7 = iVar18 == 0;
              iVar8 = local_300.Data.ArrayNum;
            }
            else {
              bVar7 = iVar18 + iVar8 == 1;
            }
            if (bVar7) goto LAB_14e797c0e;
          }
          bVar7 = true;
        }
        if (local_140[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140[0].Data.AllocatorInstance.Data);
          iVar8 = local_300.Data.ArrayNum;
        }
        if (!bVar7) goto LAB_14e797cc2;
        this = UInterchangeBaseNodeContainer::GetNode(local_310,&local_300);
        if (this == (UInterchangeBaseNode *)0x0) {
          local_316[0] = 0;
          bVar7 = `UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::
                  __l33::<lambda_7>::operator()(local_316);
          if (!bVar7) goto LAB_14e797cbe;
        }
        pFVar14 = UInterchangeBaseNode::GetParentUid(this,&local_150);
        if (&local_300 != pFVar14) {
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data.AllocatorInstance.Data);
          }
          local_300.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
          (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_300.Data.ArrayNum = (pFVar14->Data).ArrayNum;
          local_300.Data.ArrayMax = (pFVar14->Data).ArrayMax;
          (pFVar14->Data).ArrayNum = 0;
          (pFVar14->Data).ArrayMax = 0;
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        goto LAB_14e797b80;
      }
    }
  }
  goto LAB_14e797d48;
code_r0x00014e79784a:
  uVar9 = (int)uVar16 + 1;
  piVar13 = piVar13 + 1;
  uVar16 = (ulonglong)uVar9;
  if ((int)(uVar22 >> 5) <= (int)uVar9) goto LAB_14e797873;
  goto LAB_14e797846;
LAB_14e797cbe:
  iVar8 = local_300.Data.ArrayNum;
LAB_14e797cc2:
  pFVar21 = local_2f0 + (int)local_2e8;
  for (pFVar14 = local_2f0; pFVar14 != pFVar21; pFVar14 = pFVar14 + 1) {
    iVar18 = (pFVar14->Data).ArrayNum;
    if (iVar18 == iVar8) {
      if (1 < iVar18) {
        iVar18 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                            (wchar_t *)local_300.Data.AllocatorInstance.Data);
        bVar7 = iVar18 == 0;
        iVar8 = local_300.Data.ArrayNum;
        goto LAB_14e797cfe;
      }
LAB_14e797d10:
      local_1e8 = &local_300;
      local_1f0 = pFVar28;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)&local_308->SkeletonRootUidPerMeshUid,&local_2b0,(bool *)&local_1f0);
      break;
    }
    bVar7 = iVar18 + iVar8 == 1;
LAB_14e797cfe:
    if (bVar7) goto LAB_14e797d10;
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
LAB_14e797d48:
  TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
  pTVar27 = local_2e0;
  goto LAB_14e797a6b;
}

// GetAllGeometryCacheGeometry @ 14e7b3280

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllGeometryCacheGeometry
          (UInterchangePipelineMeshesUtilities *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  uVar14 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
           *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar13 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  puVar2 = &(this->MeshGeometriesPerMeshUid).field_0x10;
  uVar14 = 1;
  iVar17 = 0;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      iVar13 = iVar13 + 1;
      iVar17 = iVar17 + 0x20;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e7b3371;
      uVar15 = puVar19[iVar13];
    }
    uVar14 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uVar14 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar11 = (int)lVar8 + -1 + iVar17;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14e7b3371:
  uVar15 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar14,iVar13);
  uVar14 = uVar15 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar17;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar15 != uVar5) {
    puVar6 = *(undefined1 **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    puVar18 = puVar2;
    if (puVar6 != (undefined1 *)0x0) {
      puVar18 = puVar6;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      iVar13 = iVar13 + 1;
      uVar14 = uVar14 + 0x20;
      uVar15 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_14e7b3480;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar13 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar15 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14e7b3480:
  while( true ) {
    if (*(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar15) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar16 = (FScriptContainerElement *)
              (*(longlong *)&this->MeshGeometriesPerMeshUid + 0x10 +
              (longlong)TStack_68.CurrentBitIndex * 0x50);
    if (((this->CurrentDataContext).bIgnoreGeometryCaches == false) &&
       (((this->CurrentDataContext).bQueryGeometryOnlyIfNoInstance == false ||
        (*(int *)&pFVar16[0x20].field_0x0 < 1)))) {
      lVar8 = *(longlong *)&pFVar16[0x10].field_0x0;
      pUVar12 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      iVar13 = (int)pUVar12->_padding_;
      if ((iVar13 <= *(int *)(lVar8 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar13 * 8) ==
          &pUVar12->_padding_)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= pFVar16) && (pFVar16 < pFVar7 + (longlong)*piVar1 * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar13 = param_1->ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar13 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10),
                           (FString *)pFVar16);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetAllGeometryCacheInstance @ 14e7b3600

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllGeometryCacheInstance
          (UInterchangePipelineMeshesUtilities *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar11 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
           *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar13 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  puVar2 = &(this->MeshInstancesPerMeshInstanceUid).field_0x10;
  uVar11 = 1;
  iVar4 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e7b36fd;
      uVar12 = puVar17[lVar10 + 1];
    }
    uVar11 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar9 = iVar15 + -1 + local_res20;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14e7b36fd:
  uVar12 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar11,iVar13);
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  if (uVar12 != uVar5) {
    puVar16 = *(undefined1 **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e7b3810;
      uVar12 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14e7b3810:
  while( true ) {
    if (*(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
        *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34 != (int)uStack_40) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar14 = (FScriptContainerElement *)
              (*(longlong *)&this->MeshInstancesPerMeshInstanceUid + 0x10 +
              (longlong)TStack_60.CurrentBitIndex * 0x98);
    if (((this->CurrentDataContext).bIgnoreGeometryCaches == false) &&
       (pFVar14[0x1b] != (FScriptContainerElement)0x0)) {
      pFVar6 = (param_1->AllocatorInstance).Data;
      if ((pFVar6 <= pFVar14) &&
         ((pFVar14 < pFVar6 + (longlong)*piVar1 * 0x10 &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)))) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = param_1->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar13 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10),
                         (FString *)pFVar14);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetAllMeshGeometry @ 14e7b3950

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllMeshGeometry
          (UInterchangePipelineMeshesUtilities *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
              *)&this->MeshGeometriesPerMeshUid,param_1);
  return;
}

// GetAllMeshGeometryNotInstanced @ 14e7b3960

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllMeshGeometryNotInstanced
          (UInterchangePipelineMeshesUtilities *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  uVar11 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
           *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar12 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  puVar3 = &(this->MeshGeometriesPerMeshUid).field_0x10;
  uVar11 = 1;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar17 = *puVar16;
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e7b3a4e;
      uVar17 = puVar16[lVar10 + 1];
    }
    uVar11 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar14 + -1 + (int)lVar10;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14e7b3a4e:
  TStack_68._padding_ = CONCAT44(uVar11,iVar12);
  uVar11 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  uVar17 = uVar11 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar11 != uVar5) {
    puVar15 = *(undefined1 **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e7b3b60;
      uVar11 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar11) {
      uVar11 = uVar5;
    }
  }
LAB_14e7b3b60:
  while( true ) {
    if (*(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar11) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    pFVar13 = (FScriptContainerElement *)
              (*(longlong *)&this->MeshGeometriesPerMeshUid + 0x10 +
              (longlong)TStack_68.CurrentBitIndex * 0x50);
    if (*(int *)&pFVar13[0x20].field_0x0 == 0) {
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar13) && (pFVar13 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar12 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10),
                         (FString *)pFVar13);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetAllMeshInstanceUids @ 14e7b3c90

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllMeshInstanceUids
          (UInterchangePipelineMeshesUtilities *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
              *)&this->MeshInstancesPerMeshInstanceUid,param_1);
  return;
}

// GetAllMeshInstanceUidsUsingMeshGeometryUid @ 14e7b3ca0

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllMeshInstanceUidsUsingMeshGeometryUid
          (UInterchangePipelineMeshesUtilities *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar3;
  
  pTVar3 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                   *)&this->MeshGeometriesPerMeshUid,param_1);
  if (pTVar3 == (TTuple<FString,FInterchangeMeshGeometry> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (param_2,(TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar3->field_0x28);
  return;
}

// GetAllSkinnedMeshGeometry @ 14e7b3d00

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllSkinnedMeshGeometry
          (UInterchangePipelineMeshesUtilities *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FInterchangeMeshGeometry *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FInterchangeMeshGeometry *pFVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar11 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
           *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar13 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  puVar2 = &(this->MeshGeometriesPerMeshUid).field_0x10;
  uVar11 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e7b3def;
      uVar12 = puVar17[lVar10 + 1];
    }
    uVar11 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar9 = iVar15 + -1 + local_res20;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14e7b3def:
  uVar12 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar11,iVar13);
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar12 != uVar5) {
    puVar16 = *(undefined1 **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e7b3f00;
      uVar12 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14e7b3f00:
  while( true ) {
    if (*(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34 != (int)uStack_40) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar14 = (FInterchangeMeshGeometry *)
              (*(longlong *)&this->MeshGeometriesPerMeshUid + 0x10 +
              (longlong)TStack_60.CurrentBitIndex * 0x50);
    bVar8 = FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshGeometry
                      (&this->CurrentDataContext,pFVar14);
    if (bVar8) {
      pFVar6 = (FInterchangeMeshGeometry *)(param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar14) &&
          (pFVar14 < (FInterchangeMeshGeometry *)(&pFVar6->MeshUid + *piVar1))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = param_1->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar13 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10),
                         (FString *)pFVar14);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetAllSkinnedMeshInstance @ 14e7b4040

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllSkinnedMeshInstance
          (UInterchangePipelineMeshesUtilities *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FInterchangeMeshInstance *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FInterchangeMeshInstance *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  bool local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  uVar10 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
           *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar12 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  TStack_68.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->MeshInstancesPerMeshInstanceUid).field_0x10;
  uVar10 = 1;
  iVar3 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_68.Array;
    }
    uVar11 = *puVar16;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e7b4130;
      uVar11 = puVar16[lVar9 + 1];
    }
    uVar10 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res20;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14e7b4130:
  uVar11 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar10,iVar12);
  uVar10 = uVar11 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34);
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  if (uVar11 != uVar4) {
    puVar15 = *(undefined1 **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->MeshInstancesPerMeshInstanceUid).field_0x10;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e7b4250;
      uVar11 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14e7b4250:
  while( true ) {
    if (*(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
        *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar11) &&
       (TStack_68.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->MeshInstancesPerMeshInstanceUid).field_0x10)
       ) break;
    local_res18[0] = false;
    pFVar13 = (FInterchangeMeshInstance *)
              (*(longlong *)&this->MeshInstancesPerMeshInstanceUid +
              (longlong)TStack_68.CurrentBitIndex * 0x98 + 0x10);
    bVar7 = FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshInstance
                      (&this->CurrentDataContext,pFVar13,this->BaseNodeContainer,local_res18);
    if (bVar7) {
      pFVar5 = (FInterchangeMeshInstance *)(param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar13) &&
          (pFVar13 < (FInterchangeMeshInstance *)(&pFVar5->MeshInstanceUid + *piVar1))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar12 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10),
                         (FString *)pFVar13);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetAllStaticMeshGeometry @ 14e7b43b0

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllStaticMeshGeometry
          (UInterchangePipelineMeshesUtilities *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  UInterchangeMeshNode *pUVar7;
  FInterchangeMeshGeometry *pFVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  UClass *pUVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FInterchangeMeshGeometry *pFVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  uVar15 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
           *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar14 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  puVar2 = &(this->MeshGeometriesPerMeshUid).field_0x10;
  uVar15 = 1;
  iVar18 = 0;
  iVar12 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      iVar14 = iVar14 + 1;
      iVar18 = iVar18 + 0x20;
      iVar12 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14e7b449d;
      uVar16 = puVar20[iVar14];
    }
    uVar15 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uVar15 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar12 = local_res20 + -1 + iVar18;
    if (iVar4 < iVar12) {
      iVar12 = iVar4;
    }
  }
LAB_14e7b449d:
  uVar16 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar15,iVar14);
  uVar15 = uVar16 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar12;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_68._28_4_ = iVar12;
  TStack_68.BaseBitIndex = iVar18;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar5 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar16 != uVar5) {
    puVar6 = *(undefined1 **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    puVar19 = puVar2;
    if (puVar6 != (undefined1 *)0x0) {
      puVar19 = puVar6;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      iVar14 = iVar14 + 1;
      uVar15 = uVar15 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar14) goto LAB_14e7b45a0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar14 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar16 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14e7b45a0:
  while( true ) {
    if (*(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34 != (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar16) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar17 = (FInterchangeMeshGeometry *)
              (*(longlong *)&this->MeshGeometriesPerMeshUid + 0x10 +
              (longlong)TStack_68.CurrentBitIndex * 0x50);
    if ((((this->CurrentDataContext).bIgnoreStaticMeshes == false) &&
        (((this->CurrentDataContext).bQueryGeometryOnlyIfNoInstance == false ||
         ((pFVar17->ReferencingMeshInstanceUids).ArrayNum < 1)))) &&
       (bVar11 = UInterchangeMeshNode::IsMorphTarget((pFVar17->MeshNode).field0_0x0.DebugPtr),
       !bVar11)) {
      pUVar7 = (pFVar17->MeshNode).field0_0x0.DebugPtr;
      pUVar13 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
      lVar9 = pUVar7->_padding_;
      iVar14 = (int)pUVar13->_padding_;
      if (((*(int *)(lVar9 + 0x38) < iVar14) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar14 * 8) !=
           &pUVar13->_padding_)) &&
         (bVar11 = FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshGeometry
                             (&this->CurrentDataContext,pFVar17), !bVar11)) {
        pFVar8 = (FInterchangeMeshGeometry *)(param_1->AllocatorInstance).Data;
        if (((pFVar8 <= pFVar17) &&
            (pFVar17 < (FInterchangeMeshGeometry *)(&pFVar8->MeshUid + *piVar1))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar14 = param_1->ArrayNum;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar14 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar14 * 0x10),
                           (FString *)pFVar17);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetAllStaticMeshInstance @ 14e7b4750

void __thiscall
UInterchangePipelineMeshesUtilities::GetAllStaticMeshInstance
          (UInterchangePipelineMeshesUtilities *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FInterchangeMeshInstance *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FInterchangeMeshInstance *pFVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  bool local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  uVar12 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
           *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  TStack_68.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->MeshInstancesPerMeshInstanceUid).field_0x10;
  uVar12 = 1;
  iVar3 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_68.Array;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      iVar14 = iVar14 + 0x20;
      iVar10 = iVar10 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e7b484e;
      uVar13 = puVar16[lVar9 + 1];
    }
    uVar12 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res20;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14e7b484e:
  uVar13 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar12,iVar10);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  iVar10 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34);
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->MeshInstancesPerMeshInstanceUid).field_0x10;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e7b4970;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_14e7b4970:
  while( true ) {
    if (*(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
        *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->MeshInstancesPerMeshInstanceUid).field_0x10)
       ) break;
    pFVar11 = (FInterchangeMeshInstance *)
              (*(longlong *)&this->MeshInstancesPerMeshInstanceUid +
              (longlong)TStack_68.CurrentBitIndex * 0x98 + 0x10);
    if (((this->CurrentDataContext).bIgnoreStaticMeshes == false) && (pFVar11->bIsAnimated == false)
       ) {
      local_res18[0] = false;
      bVar7 = FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshInstance
                        (&this->CurrentDataContext,pFVar11,this->BaseNodeContainer,local_res18);
      if (!bVar7) {
        pFVar5 = (FInterchangeMeshInstance *)(param_1->AllocatorInstance).Data;
        if (((pFVar5 <= pFVar11) &&
            (pFVar11 < (FInterchangeMeshInstance *)(&pFVar5->MeshInstanceUid + *piVar1))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar10 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10),
                           (FString *)pFVar11);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetCombinedSkinnedMeshInstances @ 14e7b5d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangePipelineMeshesUtilities::GetCombinedSkinnedMeshInstances
          (UInterchangePipelineMeshesUtilities *this,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_1,bool param_2)

{
  TMap<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
  *pTVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *_Src;
  FScriptContainerElement *_Src_00;
  UInterchangeBaseNodeContainer *pUVar5;
  code *pcVar6;
  undefined8 _Src_01;
  undefined1 uVar7;
  UInterchangePipelineMeshesUtilities *pUVar8;
  ForAnyElementType _Src_02;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar9;
  bool bVar10;
  int iVar11;
  UInterchangeSourceNode *this_01;
  ulonglong uVar12;
  TTuple<FString,FString> *pTVar13;
  UInterchangeBaseNode *pUVar14;
  UClass *pUVar15;
  UInterchangeSceneNode *pUVar16;
  FString *pFVar17;
  byte bVar18;
  longlong *plVar19;
  uint uVar20;
  wchar_t *pwVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  FInterchangeMeshInstance *pFVar30;
  FScriptContainerElement *pFVar31;
  undefined1 auStackY_2b8 [32];
  bool local_268;
  bool local_267;
  bool local_266 [6];
  undefined1 local_260 [24];
  FString local_248;
  FString local_238;
  UInterchangePipelineMeshesUtilities *local_228;
  int local_220 [2];
  FString local_218;
  TMap<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
  *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  int local_1d4;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_1d0;
  undefined8 *local_1c8;
  FString *local_1c0;
  TMap<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
  *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  undefined1 *local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  uint local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TMap<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  TMap<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
  *local_118;
  undefined8 uStack_110;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_cc;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_260[0x12] = param_2;
  local_228 = this;
  local_1d0 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)param_1;
  if (this->BaseNodeContainer == (UInterchangeBaseNodeContainer *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6734323387994209376>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangePipelineMeshesUtilities.cpp"
                       ,0x3a0,"BaseNodeContainer");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    local_267 = true;
    this_01 = UInterchangeSourceNode::GetUniqueInstance(this->BaseNodeContainer);
    if (this_01 != (UInterchangeSourceNode *)0x0) {
      UInterchangeSourceNode::GetCustomAllowSceneRootAsJoint(this_01,&local_267);
    }
    puVar2 = &(this->MeshInstancesPerMeshInstanceUid).field_0x10;
    iStack_200 = 0;
    iVar11 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
    pTVar1 = &this->MeshInstancesPerMeshInstanceUid;
    local_1e8 = 0;
    iStack_1ec = 0;
    uStack_1fc = 1;
    if (iVar11 != 0) {
      puVar26 = *(uint **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar2;
      }
      uStack_1fc = *puVar26;
      while (uStack_1fc == 0) {
        iStack_200 = iStack_200 + 1;
        local_1e8 = local_1e8 + 0x20;
        iStack_1ec = iVar11;
        uStack_1fc = 1;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200)
        goto LAB_14e7b5ebc;
        uStack_1fc = puVar26[iStack_200];
      }
      uStack_1fc = ~(uStack_1fc - 1) & uStack_1fc;
      uVar12 = (ulonglong)uStack_1fc * 2 + 1;
      lVar23 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_1d8 = (int)lVar23;
      iStack_1ec = local_1d8 + -1 + local_1e8;
      if (iVar11 < iStack_1ec) {
        iStack_1ec = iVar11;
      }
    }
LAB_14e7b5ebc:
    iStack_1e4 = local_cc;
    iStack_1e0 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
                 *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34;
    uVar20 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
    bVar18 = (byte)uVar20 & 0x1f;
    uVar24 = uVar20 & 0xffffffe0;
    TStack_180._padding_ = CONCAT44(uStack_1fc,iStack_200);
    uStack_1f0 = 0xffffffff;
    TStack_180.CurrentBitIndex = iStack_1ec;
    TStack_180.UnvisitedBitMask = 0xffffffff;
    uVar27 = 1 << bVar18;
    TStack_180._28_4_ = local_cc;
    TStack_180.BaseBitIndex = local_1e8;
    uStack_160 = CONCAT44(uStack_1dc,iStack_1e0);
    uVar29 = -1 << bVar18;
    iVar22 = (int)uVar20 >> 5;
    local_208 = pTVar1;
    local_1f8 = puVar2;
    local_188 = pTVar1;
    TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar20 < 0) || (iVar11 < (int)uVar20)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar8 = local_228;
    uVar3 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
    uStack_19c = uVar20;
    if (uVar20 != uVar3) {
      puVar4 = *(undefined1 **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
      puVar25 = puVar2;
      if (puVar4 != (undefined1 *)0x0) {
        puVar25 = puVar4;
      }
      uVar20 = uVar29 & *(uint *)(puVar25 + (longlong)iVar22 * 4);
      while (uVar20 == 0) {
        iVar22 = iVar22 + 1;
        uVar24 = uVar24 + 0x20;
        uStack_19c = uVar3;
        if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar22)
        goto LAB_14e7b5fd0;
        uVar29 = 0xffffffff;
        uVar20 = *(uint *)(puVar25 + (longlong)iVar22 * 4);
      }
      uVar27 = ~(uVar20 - 1) & uVar20;
      uVar12 = (ulonglong)uVar27 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_1d4 = (int)lVar23;
      uStack_19c = local_1d4 + -1 + uVar24;
      if ((int)uVar3 < (int)uStack_19c) {
        uStack_19c = uVar3;
      }
    }
LAB_14e7b5fd0:
    iStack_194 = iStack_1ec;
    uStack_110 = CONCAT44(uVar27,iVar22);
    iStack_190 = *(int *)&(local_228->MeshInstancesPerMeshInstanceUid).field_0x8 -
                 *(int *)&(local_228->MeshInstancesPerMeshInstanceUid).field_0x34;
    uStack_100 = CONCAT44(uStack_19c,uVar29);
    local_f8 = CONCAT44(iStack_1ec,uVar24);
    uStack_f0 = CONCAT44(uStack_18c,iStack_190);
    local_1b8 = pTVar1;
    iStack_1b0 = iVar22;
    uStack_1ac = uVar27;
    local_1a8 = puVar2;
    uStack_1a0 = uVar29;
    local_198 = uVar24;
    local_118 = pTVar1;
    local_108 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    while( true ) {
      pTVar1 = local_188;
      if (*(int *)&local_188->field_0x8 - *(int *)&local_188->field_0x34 != (int)uStack_160) {
        local_260[0x10] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_260 + 0x10);
      }
      if (((TStack_180.CurrentBitIndex == uStack_100._4_4_) && (TStack_180.Array == local_108)) &&
         (pTVar1 == local_118)) break;
      lVar23 = *(longlong *)pTVar1;
      local_268 = false;
      pFVar30 = (FInterchangeMeshInstance *)
                (lVar23 + 0x10 + (longlong)TStack_180.CurrentBitIndex * 0x98);
      local_1c0 = (FString *)((longlong)TStack_180.CurrentBitIndex * 0x98 + lVar23);
      bVar10 = FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshInstance
                         (&pUVar8->CurrentDataContext,pFVar30,pUVar8->BaseNodeContainer,&local_268);
      bVar9 = local_268;
      if (bVar10) {
        iVar11 = (pFVar30->ReferencingMeshGeometryUids).ArrayNum;
        uVar12 = (ulonglong)iVar11;
        local_260[0x13] = pFVar30->bReferenceSkinnedMesh;
        pFVar31 = (pFVar30->ReferencingMeshGeometryUids).AllocatorInstance.Data;
        pFVar28 = pFVar31 + uVar12 * 0x10;
        local_260._0_8_ = (FScriptContainerElement *)0x0;
        local_260._8_4_ = 0;
        local_260._12_4_ = 0;
        local_228 = (UInterchangePipelineMeshesUtilities *)CONCAT44(local_228._4_4_,iVar11);
LAB_14e7b60f0:
        while( true ) {
          uVar7 = local_260[0x13];
          if ((pFVar30->ReferencingMeshGeometryUids).ArrayNum != (int)uVar12) {
            local_260[0x11] = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_260 + 0x11);
          }
          if (pFVar31 == pFVar28) goto LAB_14e7b6204;
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)&pUVar8->SkeletonRootUidPerMeshUid,(FString *)pFVar31);
          if ((pTVar13 != (TTuple<FString,FString> *)0x0) &&
             (puVar2 = &pTVar13->field_0x10, puVar2 != (undefined1 *)0x0)) break;
          if (uVar7 == '\0') {
            if ((FInterchangeMeshInstance *)local_260 != pFVar30) {
              iVar11 = (pFVar30->MeshInstanceUid).Data.ArrayNum;
              _Src_00 = (pFVar30->MeshInstanceUid).Data.AllocatorInstance.Data;
              local_260._8_4_ = iVar11;
              if ((iVar11 == 0) && (local_260._12_4_ == 0)) {
                local_260._8_4_ = 0;
                local_260._12_4_ = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar11,local_260._12_4_,(ForAnyElementType *)local_260,iVar11,
                           (int *)(local_260 + 0xc));
                if (iVar11 != 0) {
                  memcpy((void *)local_260._0_8_,_Src_00,(longlong)iVar11 * 2);
                }
              }
            }
            if (((bVar9 != false) || (pFVar30->bHasMorphTargets == false)) &&
               (pUVar14 = UInterchangeBaseNodeContainer::GetNode
                                    (pUVar8->BaseNodeContainer,(FString *)pFVar30),
               pUVar14 != (UInterchangeBaseNode *)0x0)) {
              pUVar15 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
              iVar11 = (int)pUVar15->_padding_;
              if ((iVar11 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar11 * 8)
                  == &pUVar15->_padding_)) {
                UInterchangeBaseNode::GetParentUid(pUVar14,&local_248);
                _Src_01 = local_260._0_8_;
                lVar23 = (longlong)(int)local_260._8_4_;
                local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_238.Data.ArrayNum = local_260._8_4_;
                if (local_260._8_4_ == 0) {
                  local_238.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_260._8_4_,0,(ForAnyElementType *)&local_238,local_260._8_4_,
                             &local_238.Data.ArrayMax);
                  memcpy(local_238.Data.AllocatorInstance.Data,(void *)_Src_01,lVar23 * 2);
                }
                pUVar16 = (UInterchangeSceneNode *)
                          UInterchangeBaseNodeContainer::GetNode
                                    (pUVar8->BaseNodeContainer,&local_248);
                iVar11 = 0;
                if (pUVar16 != (UInterchangeSceneNode *)0x0) {
                  pUVar15 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                  iVar22 = (int)pUVar15->_padding_;
                  if ((iVar22 <= *(int *)(pUVar16->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
                      &pUVar15->_padding_)) {
                    while( true ) {
                      local_266[0] = false;
                      UInterchangeSceneNode::GetCustomIsSceneRoot(pUVar16,local_266);
                      if ((local_267 == false) && (local_266[0] != false)) break;
                      pFVar17 = UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString
                                          ();
                      bVar10 = UInterchangeSceneNode::IsSpecializedTypeContains(pUVar16,pFVar17);
                      if (bVar10) {
                        iVar22 = local_248.Data.ArrayNum + -1;
                        if (local_248.Data.ArrayNum == 0) {
                          iVar22 = iVar11;
                        }
                        ::FString::AssignRange
                                  ((FString *)local_260,
                                   (wchar_t *)local_248.Data.AllocatorInstance.Data,iVar22);
                      }
                      iVar22 = local_248.Data.ArrayNum + -1;
                      if (local_248.Data.ArrayNum == 0) {
                        iVar22 = iVar11;
                      }
                      ::FString::AssignRange
                                (&local_238,(wchar_t *)local_248.Data.AllocatorInstance.Data,iVar22)
                      ;
                      pFVar17 = UInterchangeBaseNode::GetParentUid
                                          ((UInterchangeBaseNode *)pUVar16,&local_128);
                      if (&local_248 != pFVar17) {
                        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_248.Data.AllocatorInstance.Data);
                        }
                        local_248.Data.AllocatorInstance.Data =
                             (pFVar17->Data).AllocatorInstance.Data;
                        (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_248.Data.ArrayNum = (pFVar17->Data).ArrayNum;
                        local_248.Data.ArrayMax = (pFVar17->Data).ArrayMax;
                        (pFVar17->Data).ArrayNum = 0;
                        (pFVar17->Data).ArrayMax = 0;
                      }
                      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_128.Data.AllocatorInstance.Data);
                      }
                      pUVar16 = (UInterchangeSceneNode *)
                                UInterchangeBaseNodeContainer::GetNode
                                          (pUVar8->BaseNodeContainer,&local_248);
                      if (pUVar16 == (UInterchangeSceneNode *)0x0) break;
                      pUVar15 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                      iVar22 = (int)pUVar15->_padding_;
                      if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar22) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
                          &pUVar15->_padding_)) break;
                    }
                  }
                }
                if (bVar9 == false) {
                  iVar22 = (pFVar30->MeshInstanceUid).Data.ArrayNum;
                  if (local_260._8_4_ == iVar22) {
                    if (1 < (int)local_260._8_4_) {
                      iVar22 = wcscmp((wchar_t *)local_260._0_8_,
                                      (wchar_t *)
                                      (pFVar30->MeshInstanceUid).Data.AllocatorInstance.Data);
                      bVar10 = iVar22 == 0;
                      goto LAB_14e7b64f2;
                    }
LAB_14e7b64f9:
                    iVar22 = local_238.Data.ArrayNum + -1;
                    if (local_238.Data.ArrayNum == 0) {
                      iVar22 = iVar11;
                    }
                    ::FString::AssignRange
                              ((FString *)local_260,(wchar_t *)local_238.Data.AllocatorInstance.Data
                               ,iVar22);
                  }
                  else {
                    bVar10 = local_260._8_4_ + iVar22 == 1;
LAB_14e7b64f2:
                    if (bVar10) goto LAB_14e7b64f9;
                  }
                  if (local_260[0x12] != '\0') {
                    ::FString::FString(&local_158,"_SingleBone_RootNode");
                    ::FString::ConcatFF(&local_218,(FString *)local_260,&local_158);
                    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_158.Data.AllocatorInstance.Data);
                    }
                    pUVar14 = UInterchangeBaseNodeContainer::GetNode
                                        (pUVar8->BaseNodeContainer,&local_218);
                    if (pUVar14 == (UInterchangeBaseNode *)0x0) {
                      pUVar5 = pUVar8->BaseNodeContainer;
                      FObjectInitializer::AssertIfInConstructor
                                ((UObject *)pUVar5,
                                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                );
                      pUVar15 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                                ((FStaticConstructObjectParameters *)local_c8,pUVar15);
                      local_c8._8_8_ = pUVar5;
                      pUVar16 = (UInterchangeSceneNode *)
                                StaticConstructObject_Internal
                                          ((FStaticConstructObjectParameters *)local_c8);
                      if (local_c8._64_8_ != 0) {
                        plVar19 = (longlong *)(local_c8 + 0x50);
                        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                          plVar19 = (longlong *)local_c8._104_8_;
                        }
                        (**(code **)(*plVar19 + 0x10))();
                      }
                      pUVar5 = pUVar8->BaseNodeContainer;
                      ::FString::FString(&local_138,L"");
                      ::FString::FString(&local_148,"Root");
                      UInterchangeBaseNodeContainer::SetupNode
                                (pUVar5,(UInterchangeBaseNode *)pUVar16,&local_218,&local_148,
                                 TranslatedScene,&local_138);
                      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_148.Data.AllocatorInstance.Data);
                      }
                      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_138.Data.AllocatorInstance.Data);
                      }
                      UInterchangeSceneNode::SetCustomLocalTransform
                                (pUVar16,pUVar8->BaseNodeContainer,
                                 &UE::Math::TTransform<double>::Identity,true);
                    }
                    iVar11 = local_218.Data.ArrayNum;
                    _Src_02.Data = local_218.Data.AllocatorInstance.Data;
                    lVar23 = (longlong)local_218.Data.ArrayNum;
                    local_260._8_4_ = local_218.Data.ArrayNum;
                    if ((local_218.Data.ArrayNum == 0) && (local_260._12_4_ == 0)) {
                      local_260._8_4_ = 0;
                      local_260._12_4_ = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,local_218.Data.ArrayNum,local_260._12_4_,
                                 (ForAnyElementType *)local_260,local_218.Data.ArrayNum,
                                 (int *)(local_260 + 0xc));
                      if (iVar11 != 0) {
                        memcpy((void *)local_260._0_8_,_Src_02.Data,lVar23 * 2);
                      }
                    }
                    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_218.Data.AllocatorInstance.Data);
                    }
                  }
                }
                if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_238.Data.AllocatorInstance.Data);
                }
                if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_248.Data.AllocatorInstance.Data);
                }
              }
            }
          }
LAB_14e7b66e1:
          uVar12 = (ulonglong)local_228 & 0xffffffff;
          pFVar31 = pFVar31 + 0x10;
        }
        if ((int)local_260._8_4_ < 2) {
          if (local_260 == puVar2) goto LAB_14e7b66e1;
          iVar11 = *(int *)&pTVar13->field_0x18;
          _Src = *(void **)puVar2;
          local_260._8_4_ = iVar11;
          if ((iVar11 == 0) && (local_260._12_4_ == 0)) {
            uVar12 = (ulonglong)local_228 & 0xffffffff;
            pFVar31 = pFVar31 + 0x10;
            local_260._8_4_ = 0;
            local_260._12_4_ = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar11,local_260._12_4_,(ForAnyElementType *)local_260,iVar11,
                       (int *)(local_260 + 0xc));
            if (iVar11 == 0) goto LAB_14e7b66e1;
            memcpy((void *)local_260._0_8_,_Src,(longlong)iVar11 * 2);
            uVar12 = (ulonglong)local_228 & 0xffffffff;
            pFVar31 = pFVar31 + 0x10;
          }
          goto LAB_14e7b60f0;
        }
        if (local_260._8_4_ == *(int *)&pTVar13->field_0x18) {
          iVar11 = wcscmp((wchar_t *)local_260._0_8_,*(wchar_t **)puVar2);
          bVar10 = iVar11 == 0;
        }
        else {
          bVar10 = local_260._8_4_ + *(int *)&pTVar13->field_0x18 == 1;
        }
        if (bVar10) goto LAB_14e7b66e1;
        ::FString::Empty((FString *)local_260);
LAB_14e7b6204:
        if (1 < (int)local_260._8_4_) {
          pwVar21 = L"";
          if (local_260._8_4_ == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_260._8_4_ + -1;
            pwVar21 = (wchar_t *)local_260._0_8_;
          }
          uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar21);
          this_00 = local_1d0;
          iVar11 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>(local_1d0,uVar20,(FString *)local_260);
          if ((iVar11 == -1) ||
             (lVar23 = *(longlong *)&this_00->Elements + (longlong)iVar11 * 0x28, lVar23 == 0)) {
            local_1c8 = (undefined8 *)local_260;
            TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                      (this_00,(uint)local_220,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar20
                       ,(bool *)&local_1c8);
            lVar23 = *(longlong *)&this_00->Elements + (longlong)local_220[0] * 0x28;
          }
          pFVar17 = local_1c0;
          if (((*(FString **)(lVar23 + 0x10) <= local_1c0) &&
              (local_1c0 < *(FString **)(lVar23 + 0x10) + *(int *)(lVar23 + 0x1c))) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = *(int *)(lVar23 + 0x18);
          if (iVar11 == *(int *)(lVar23 + 0x1c)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)(lVar23 + 0x10),(int *)(lVar23 + 0x1c));
          }
          *(int *)(lVar23 + 0x18) = iVar11 + 1;
          ::FString::FString((FString *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar23 + 0x10)),
                             pFVar17);
        }
        if ((FScriptContainerElement *)local_260._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_260._0_8_);
        }
      }
      TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
    }
  }
  return;
}

// GetMeshGeometryByUid @ 14e7b7a80

FInterchangeMeshGeometry * __thiscall
UInterchangePipelineMeshesUtilities::GetMeshGeometryByUid
          (UInterchangePipelineMeshesUtilities *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar3;
  FInterchangeMeshGeometry *pFVar4;
  
  pTVar3 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                   *)&this->MeshGeometriesPerMeshUid,param_1);
  if (pTVar3 != (TTuple<FString,FInterchangeMeshGeometry> *)0x0) {
    return (FInterchangeMeshGeometry *)&pTVar3->field_0x10;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FInterchangeMeshGeometry *)(*pcVar1)();
    return pFVar4;
  }
  return (FInterchangeMeshGeometry *)&DAT_00000010;
}

// GetMeshGeometrySkeletonRootUid @ 14e7b7ae0

FString * __thiscall
UInterchangePipelineMeshesUtilities::GetMeshGeometrySkeletonRootUid
          (UInterchangePipelineMeshesUtilities *this,FString *__return_storage_ptr__,
          FInterchangeMeshGeometry *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FString,FString> *pTVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (param_1->MeshUid).Data.ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar5 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(param_1->MeshUid).Data.AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  iVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->SkeletonRootUidPerMeshUid,uVar4,&param_1->MeshUid);
  if (iVar5 != -1) {
    pTVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)&this->SkeletonRootUidPerMeshUid,&param_1->MeshUid);
    if ((pTVar6 == (TTuple<FString,FString> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar2)();
      return pFVar7;
    }
    ::FString::operator=(__return_storage_ptr__,(FString *)&pTVar6->field_0x10);
  }
  return __return_storage_ptr__;
}

// GetMeshGeometrySkeletonRootUid @ 14e7b7ba0

FString * __thiscall
UInterchangePipelineMeshesUtilities::GetMeshGeometrySkeletonRootUid
          (UInterchangePipelineMeshesUtilities *this,FString *__return_storage_ptr__,
          FString *param_1)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar6;
  FString *pFVar7;
  TTuple<FString,FString> *pTVar8;
  int iVar9;
  wchar_t *pwVar10;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar5 = (param_1->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar9 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar9 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  iVar5 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                      *)&this->MeshGeometriesPerMeshUid,uVar4,param_1);
  if (iVar5 != -1) {
    pTVar6 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                     *)&this->MeshGeometriesPerMeshUid,param_1);
    if ((pTVar6 == (TTuple<FString,FInterchangeMeshGeometry> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar2)();
      return pFVar7;
    }
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    iVar5 = *(int *)&pTVar6->field_0x18 + -1;
    if (*(int *)&pTVar6->field_0x18 == 0) {
      pwVar10 = L"";
      iVar5 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)&pTVar6->field_0x10;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
    iVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&this->SkeletonRootUidPerMeshUid,uVar4,(FString *)&pTVar6->field_0x10);
    if (iVar5 != -1) {
      pTVar8 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)&this->SkeletonRootUidPerMeshUid,(FString *)&pTVar6->field_0x10);
      if ((pTVar8 == (TTuple<FString,FString> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      if (&local_18 != (FString *)&pTVar8->field_0x10) {
        iVar5 = *(int *)&pTVar8->field_0x18;
        _Src = *(void **)&pTVar8->field_0x10;
        local_18.Data.ArrayNum = iVar5;
        if (((iVar5 != 0) || (local_18.Data.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar5,local_18.Data.ArrayMax,(ForAnyElementType *)&local_18,iVar5,
                       &local_18.Data.ArrayMax), iVar5 != 0)) {
          memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar5 * 2);
        }
      }
    }
    if (__return_storage_ptr__ != &local_18) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetMeshInstanceByUid @ 14e7b7da0

FInterchangeMeshInstance * __thiscall
UInterchangePipelineMeshesUtilities::GetMeshInstanceByUid
          (UInterchangePipelineMeshesUtilities *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FInterchangeMeshInstance> *pTVar3;
  FInterchangeMeshInstance *pFVar4;
  
  pTVar3 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                   *)&this->MeshInstancesPerMeshInstanceUid,param_1);
  if (pTVar3 != (TTuple<FString,FInterchangeMeshInstance> *)0x0) {
    return (FInterchangeMeshInstance *)&pTVar3->field_0x10;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FInterchangeMeshInstance *)(*pcVar1)();
    return pFVar4;
  }
  return (FInterchangeMeshInstance *)&DAT_00000010;
}

// GetMeshInstanceSkeletonRootUid @ 14e7b7e00

FString * __thiscall
UInterchangePipelineMeshesUtilities::GetMeshInstanceSkeletonRootUid
          (UInterchangePipelineMeshesUtilities *this,FString *__return_storage_ptr__,
          FInterchangeMeshInstance *param_1)

{
  UInterchangeSceneNode *this_00;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FInterchangeLodSceneNodeContainer *pFVar6;
  FString *pFVar7;
  UClass *pUVar8;
  longlong lVar9;
  FString local_18;
  
  lVar9 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (*(int *)&(param_1->SceneNodePerLodIndex).field_0x8 !=
      *(int *)&(param_1->SceneNodePerLodIndex).field_0x34) {
    pFVar6 = TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
             ::FindChecked((TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
                            *)&param_1->SceneNodePerLodIndex,0);
    if (0 < (pFVar6->BaseNodes).ArrayNum) {
      pFVar6 = TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
               ::FindChecked((TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
                              *)&param_1->SceneNodePerLodIndex,0);
      if (((pFVar6->BaseNodes).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar1)();
        return pFVar7;
      }
      this_00 = *(UInterchangeSceneNode **)(pFVar6->BaseNodes).AllocatorInstance.Data;
      if (this_00 != (UInterchangeSceneNode *)0x0) {
        pUVar8 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
        iVar5 = (int)pUVar8->_padding_;
        if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar8->_padding_)) {
          local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_18.Data.ArrayNum = 0;
          local_18.Data.ArrayMax = 0;
          bVar3 = UInterchangeSceneNode::GetCustomAssetInstanceUid(this_00,&local_18);
          if (bVar3) {
            iVar5 = local_18.Data.ArrayNum + -1;
            FVar2.Data = local_18.Data.AllocatorInstance.Data;
            if (local_18.Data.ArrayNum == 0) {
              iVar5 = 0;
              FVar2.Data = (FScriptContainerElement *)L"";
            }
            uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
            iVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FString>
                              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                                *)&this->SkeletonRootUidPerMeshUid,uVar4,&local_18);
            if (iVar5 != -1) {
              iVar5 = local_18.Data.ArrayNum + -1;
              FVar2.Data = local_18.Data.AllocatorInstance.Data;
              if (local_18.Data.ArrayNum == 0) {
                iVar5 = 0;
                FVar2.Data = (FScriptContainerElement *)L"";
              }
              uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
              iVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<FString>
                                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                                  *)&this->SkeletonRootUidPerMeshUid,uVar4,&local_18);
              if (((iVar5 == -1) ||
                  (lVar9 = *(longlong *)&this->SkeletonRootUidPerMeshUid + (longlong)iVar5 * 0x28,
                  lVar9 == 0)) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x27b,L""), bVar3)) {
                pcVar1 = (code *)swi(3);
                pFVar7 = (FString *)(*pcVar1)();
                return pFVar7;
              }
              ::FString::operator=(__return_storage_ptr__,(FString *)(lVar9 + 0x10));
            }
          }
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetMeshInstanceSkeletonRootUid @ 14e7b7fd0

FString * __thiscall
UInterchangePipelineMeshesUtilities::GetMeshInstanceSkeletonRootUid
          (UInterchangePipelineMeshesUtilities *this,FString *__return_storage_ptr__,
          FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FString,FInterchangeMeshInstance> *pTVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (param_1->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar9 = L"";
    iVar6 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
  iVar6 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                      *)&this->MeshInstancesPerMeshInstanceUid,uVar5,param_1);
  if (iVar6 != -1) {
    pTVar7 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                     *)&this->MeshInstancesPerMeshInstanceUid,param_1);
    if ((pTVar7 == (TTuple<FString,FInterchangeMeshInstance> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    pFVar8 = GetMeshInstanceSkeletonRootUid
                       (this,&local_18,(FInterchangeMeshInstance *)&pTVar7->field_0x10);
    if (__return_storage_ptr__ != pFVar8) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b9d40

UClass * __cdecl UInterchangePipelineMeshesUtilities::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangePipelineMeshesUtilities",
               &Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.InnerSingleton,
               StaticRegisterNativesUInterchangePipelineMeshesUtilities,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePipelineMeshesUtilities>,
               InternalVTableHelperCtorCaller<UInterchangePipelineMeshesUtilities>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.InnerSingleton;
}

// HasAssemblyMeshDependencies @ 14e7c4990

bool __thiscall
UInterchangePipelineMeshesUtilities::HasAssemblyMeshDependencies
          (UInterchangePipelineMeshesUtilities *this)

{
  return *(int *)&(this->AssemblyMeshUids).Elements.field_0x8 !=
         *(int *)&(this->AssemblyMeshUids).Elements.field_0x34;
}

// IsAssemblyMeshUid @ 14e7c6220

bool __thiscall
UInterchangePipelineMeshesUtilities::IsAssemblyMeshUid
          (UInterchangePipelineMeshesUtilities *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&this->AssemblyMeshUids,uVar2,param_1);
  return iVar3 != -1;
}

// IsValidMeshGeometryUid @ 14e7c7ea0

bool __thiscall
UInterchangePipelineMeshesUtilities::IsValidMeshGeometryUid
          (UInterchangePipelineMeshesUtilities *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                      *)&this->MeshGeometriesPerMeshUid,uVar2,param_1);
  return iVar3 != -1;
}

// IsValidMeshInstanceUid @ 14e7c7f00

bool __thiscall
UInterchangePipelineMeshesUtilities::IsValidMeshInstanceUid
          (UInterchangePipelineMeshesUtilities *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                      *)&this->MeshInstancesPerMeshInstanceUid,uVar2,param_1);
  return iVar3 != -1;
}

// IterateAllGeometryCacheGeometry @ 14e7c7f60

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllGeometryCacheGeometry
          (UInterchangePipelineMeshesUtilities *this,
          TFunctionRef<void___cdecl(FInterchangeMeshGeometry_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar15 = 0;
  puVar1 = &(this->MeshGeometriesPerMeshUid).field_0x10;
  iVar11 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  uVar7 = 1;
  iVar8 = 0;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 0x20;
      iVar8 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14e7c7ffc;
      uVar13 = puVar18[iVar15];
    }
    uVar7 = ~(uVar13 - 1) & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar8 = (int)lVar14 + -1 + iVar17;
    if (iVar11 < iVar8) {
      iVar8 = iVar11;
    }
LAB_14e7c7ffc:
    iVar10 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  }
  uVar13 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar15);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar17;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar13 != uVar7) {
    puVar3 = *(undefined1 **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    puVar16 = puVar1;
    if (puVar3 != (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      iVar11 = iVar11 + 1;
      uVar12 = uVar12 + 0x20;
      uVar13 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar11) goto LAB_14e7c8100;
      uVar13 = *(uint *)(puVar16 + (longlong)iVar11 * 4);
    }
    uVar2 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar13 = (int)lVar14 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14e7c8100:
  while( true ) {
    if (*(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar14 = (longlong)TStack_60.CurrentBitIndex * 0x50 +
             *(longlong *)&this->MeshGeometriesPerMeshUid;
    if (((this->CurrentDataContext).bIgnoreGeometryCaches == false) &&
       (((this->CurrentDataContext).bQueryGeometryOnlyIfNoInstance == false ||
        (*(int *)(lVar14 + 0x30) < 1)))) {
      lVar4 = *(longlong *)(lVar14 + 0x20);
      pUVar9 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar11 = (int)pUVar9->_padding_;
      if ((iVar11 <= *(int *)(lVar4 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar9->_padding_)) {
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar14 + 0x10);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IterateAllGeometryCacheInstance @ 14e7c81c0

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllGeometryCacheInstance
          (UInterchangePipelineMeshesUtilities *this,
          TFunctionRef<void___cdecl(FInterchangeMeshInstance_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->MeshInstancesPerMeshInstanceUid).field_0x10;
  iVar3 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c826e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e7c826e:
  uVar10 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c8370;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e7c8370:
  while( true ) {
    if (*(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
        *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (((this->CurrentDataContext).bIgnoreGeometryCaches == false) &&
       (*(char *)(*(longlong *)&this->MeshInstancesPerMeshInstanceUid +
                  (longlong)TStack_60.CurrentBitIndex * 0x98 + 0x2b) != '\0')) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IterateAllMeshGeometry @ 14e7c8400

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllMeshGeometry
          (UInterchangePipelineMeshesUtilities *this,
          TFunctionRef<void___cdecl(FInterchangeMeshGeometry_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  puVar1 = &(this->MeshGeometriesPerMeshUid).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c849e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e7c849e:
  uVar10 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c85a0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e7c85a0:
  while( true ) {
    if (*(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,
               *(longlong *)&this->MeshGeometriesPerMeshUid + 0x10 +
               (longlong)TStack_60.CurrentBitIndex * 0x50);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IterateAllMeshGeometryNotIntanced @ 14e7c8620

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllMeshGeometryNotIntanced
          (UInterchangePipelineMeshesUtilities *this,
          TFunctionRef<void___cdecl(FInterchangeMeshGeometry_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  puVar1 = &(this->MeshGeometriesPerMeshUid).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c86be;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e7c86be:
  uVar10 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c87c0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e7c87c0:
  while( true ) {
    if (*(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(int *)(*(longlong *)&this->MeshGeometriesPerMeshUid +
                 (longlong)TStack_60.CurrentBitIndex * 0x50 + 0x30) == 0) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IterateAllMeshInstance @ 14e7c8850

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllMeshInstance
          (UInterchangePipelineMeshesUtilities *this,
          TFunctionRef<void___cdecl(FInterchangeMeshInstance_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->MeshInstancesPerMeshInstanceUid).field_0x10;
  iVar3 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c88fd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e7c88fd:
  uVar10 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c8a00;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e7c8a00:
  while( true ) {
    if (*(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
        *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,
               *(longlong *)&this->MeshInstancesPerMeshInstanceUid +
               (longlong)TStack_60.CurrentBitIndex * 0x98 + 0x10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IterateAllMeshInstanceUsingMeshGeometry @ 14e7c8a80

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllMeshInstanceUsingMeshGeometry
          (UInterchangePipelineMeshesUtilities *this,FString *param_1,
          TFunctionRef<void___cdecl(FInterchangeMeshInstance_const_&)> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar4;
  TTuple<FString,FInterchangeMeshInstance> *pTVar5;
  FString *pFVar6;
  FString *pFVar7;
  undefined1 local_res8 [8];
  
  pTVar4 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                   *)&this->MeshGeometriesPerMeshUid,param_1);
  if (pTVar4 == (TTuple<FString,FInterchangeMeshGeometry> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)&pTVar4->field_0x30;
  pFVar6 = *(FString **)&pTVar4->field_0x28;
  pFVar7 = pFVar6 + iVar1;
  while( true ) {
    if (*(int *)&pTVar4->field_0x30 != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pTVar5 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                     *)&this->MeshInstancesPerMeshInstanceUid,pFVar6);
    if (pTVar5 == (TTuple<FString,FInterchangeMeshInstance> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&pTVar5->field_0x10);
    pFVar6 = pFVar6 + 1;
  }
  return;
}

// IterateAllSkinnedMeshGeometry @ 14e7c8b70

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllSkinnedMeshGeometry
          (UInterchangePipelineMeshesUtilities *this,
          TFunctionRef<void___cdecl(FInterchangeMeshGeometry_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  puVar1 = &(this->MeshGeometriesPerMeshUid).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c8c0f;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e7c8c0f:
  uVar10 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c8d10;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e7c8d10:
  while( true ) {
    if (*(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)&this->MeshGeometriesPerMeshUid +
            (longlong)TStack_60.CurrentBitIndex * 0x50;
    bVar5 = FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshGeometry
                      (&this->CurrentDataContext,(FInterchangeMeshGeometry *)(lVar8 + 0x10));
    if (bVar5) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar8 + 0x10);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IterateAllSkinnedMeshInstance @ 14e7c8db0

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllSkinnedMeshInstance
          (UInterchangePipelineMeshesUtilities *this,
          TFunctionRef<void___cdecl(FInterchangeMeshInstance_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  bool local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->MeshInstancesPerMeshInstanceUid).field_0x10;
  iVar3 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c8e5e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar7 = local_res20 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e7c8e5e:
  uVar10 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c8f60;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e7c8f60:
  while( true ) {
    if (*(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
        *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)&this->MeshInstancesPerMeshInstanceUid +
            (longlong)TStack_60.CurrentBitIndex * 0x98;
    bVar5 = FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshInstance
                      (&this->CurrentDataContext,(FInterchangeMeshInstance *)(lVar8 + 0x10),
                       this->BaseNodeContainer,local_res18);
    if (bVar5) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar8 + 0x10);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IterateAllStaticMeshGeometry @ 14e7c9000

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllStaticMeshGeometry
          (UInterchangePipelineMeshesUtilities *this,
          TFunctionRef<void___cdecl(FInterchangeMeshGeometry_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar14 = 0;
  iVar3 = *(int *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  puVar1 = &(this->MeshGeometriesPerMeshUid).field_0x10;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14e7c909f;
      uVar12 = puVar17[iVar14];
    }
    uVar8 = ~(uVar12 - 1) & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iVar9 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14e7c909f:
  uVar12 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
                       *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->MeshGeometriesPerMeshUid).field_0x28;
  if (uVar12 != uVar8) {
    puVar4 = *(undefined1 **)&(this->MeshGeometriesPerMeshUid).field_0x20;
    puVar15 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar15 = puVar4;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      iVar14 = iVar14 + 1;
      uVar11 = uVar11 + 0x20;
      uVar12 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar14) goto LAB_14e7c91a0;
      uVar12 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar2 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar12 = (int)lVar13 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14e7c91a0:
  while( true ) {
    if (*(int *)&(this->MeshGeometriesPerMeshUid).field_0x8 -
        *(int *)&(this->MeshGeometriesPerMeshUid).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar13 = (longlong)TStack_60.CurrentBitIndex * 0x50 +
             *(longlong *)&this->MeshGeometriesPerMeshUid;
    if ((((this->CurrentDataContext).bIgnoreStaticMeshes == false) &&
        (((this->CurrentDataContext).bQueryGeometryOnlyIfNoInstance == false ||
         (*(int *)(lVar13 + 0x30) < 1)))) &&
       (bVar7 = UInterchangeMeshNode::IsMorphTarget(*(UInterchangeMeshNode **)(lVar13 + 0x20)),
       !bVar7)) {
      lVar5 = *(longlong *)(lVar13 + 0x20);
      pUVar10 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      iVar3 = (int)pUVar10->_padding_;
      if (((*(int *)(lVar5 + 0x38) < iVar3) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
           &pUVar10->_padding_)) &&
         (bVar7 = FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshGeometry
                            (&this->CurrentDataContext,(FInterchangeMeshGeometry *)(lVar13 + 0x10)),
         !bVar7)) {
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar13 + 0x10);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IterateAllStaticMeshInstance @ 14e7c9290

void __thiscall
UInterchangePipelineMeshesUtilities::IterateAllStaticMeshInstance
          (UInterchangePipelineMeshesUtilities *this,
          TFunctionRef<void___cdecl(FInterchangeMeshInstance_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  bool local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->MeshInstancesPerMeshInstanceUid).field_0x10;
  iVar3 = *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c933e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar7 = local_res20 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e7c933e:
  uVar10 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
                       *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MeshInstancesPerMeshInstanceUid).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->MeshInstancesPerMeshInstanceUid).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e7c9440;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e7c9440:
  while( true ) {
    if (*(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x8 -
        *(int *)&(this->MeshInstancesPerMeshInstanceUid).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)&this->MeshInstancesPerMeshInstanceUid +
            (longlong)TStack_60.CurrentBitIndex * 0x98;
    if ((((this->CurrentDataContext).bIgnoreStaticMeshes == false) &&
        (*(char *)(lVar8 + 0x2b) == '\0')) &&
       (bVar5 = FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshInstance
                          (&this->CurrentDataContext,(FInterchangeMeshInstance *)(lVar8 + 0x10),
                           this->BaseNodeContainer,local_res18), !bVar5)) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar8 + 0x10);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// StaticRegisterNativesUInterchangePipelineMeshesUtilities @ 14e7e46c0

void __cdecl
UInterchangePipelineMeshesUtilities::StaticRegisterNativesUInterchangePipelineMeshesUtilities(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateInterchangePipelineMeshesUtilities @ 14e7ea0d0

void __cdecl
UInterchangePipelineMeshesUtilities::execCreateInterchangePipelineMeshesUtilities
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangePipelineMeshesUtilities *pUVar2;
  UInterchangeBaseNodeContainer *local_res10;
  
  local_res10 = (UInterchangeBaseNodeContainer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateInterchangePipelineMeshesUtilities(local_res10);
  *(UInterchangePipelineMeshesUtilities **)param_3 = pUVar2;
  return;
}

// execGetAllGeometryCacheGeometry @ 14e7ea4a0

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllGeometryCacheGeometry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllGeometryCacheGeometry((UInterchangePipelineMeshesUtilities *)param_1,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllGeometryCacheInstance @ 14e7ea560

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllGeometryCacheInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllGeometryCacheInstance((UInterchangePipelineMeshesUtilities *)param_1,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllMeshGeometry @ 14e7ea620

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllMeshGeometry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
              *)(param_1 + 1),pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllMeshGeometryNotInstanced @ 14e7ea6e0

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllMeshGeometryNotInstanced
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllMeshGeometryNotInstanced((UInterchangePipelineMeshesUtilities *)param_1,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllMeshInstanceUids @ 14e7ea7a0

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
              *)(param_1 + 3),pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllMeshInstanceUidsUsingMeshGeometryUid @ 14e7ea860

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUidsUsingMeshGeometryUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  lVar7 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = local_18.Data.ArrayNum + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                      *)(param_1 + 1),uVar5,&local_18);
  if (((iVar6 == -1) || (lVar7 = (longlong)iVar6 * 0x50 + *(longlong *)(param_1 + 1), lVar7 == 0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar7 + 0x28));
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetAllSkinnedMeshGeometry @ 14e7ea9f0

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshGeometry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllSkinnedMeshGeometry((UInterchangePipelineMeshesUtilities *)param_1,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllSkinnedMeshInstance @ 14e7eaab0

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllSkinnedMeshInstance((UInterchangePipelineMeshesUtilities *)param_1,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllStaticMeshGeometry @ 14e7eab70

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllStaticMeshGeometry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllStaticMeshGeometry((UInterchangePipelineMeshesUtilities *)param_1,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllStaticMeshInstance @ 14e7eac30

void __cdecl
UInterchangePipelineMeshesUtilities::execGetAllStaticMeshInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllStaticMeshInstance((UInterchangePipelineMeshesUtilities *)param_1,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetMeshGeometryByUid @ 14e7ead20

void __cdecl
UInterchangePipelineMeshesUtilities::execGetMeshGeometryByUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FString local_18;
  
  lVar7 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = local_18.Data.ArrayNum + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                      *)(param_1 + 1),uVar5,&local_18);
  if (((iVar6 == -1) || (lVar7 = (longlong)iVar6 * 0x50 + *(longlong *)(param_1 + 1), lVar7 == 0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::operator=(param_3,(FString *)(lVar7 + 0x10));
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(lVar7 + 0x20) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(lVar7 + 0x20));
  }
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)(lVar7 + 0x20);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_3 + 0x18),
             (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar7 + 0x28));
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_3 + 0x28),
             (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar7 + 0x38));
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetMeshGeometrySkeletonRootUid @ 14e7eae70

void __cdecl
UInterchangePipelineMeshesUtilities::execGetMeshGeometrySkeletonRootUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetMeshGeometrySkeletonRootUid
                     ((UInterchangePipelineMeshesUtilities *)param_1,&local_18,&local_28);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetMeshInstanceByUid @ 14e7eaf60

void __cdecl
UInterchangePipelineMeshesUtilities::execGetMeshInstanceByUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FString local_18;
  
  lVar7 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = local_18.Data.ArrayNum + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                      *)(param_1 + 3),uVar5,&local_18);
  if (((iVar6 == -1) || (lVar7 = (longlong)iVar6 * 0x98 + *(longlong *)(param_1 + 3), lVar7 == 0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FInterchangeMeshInstance::operator=(param_3,(FInterchangeMeshInstance *)(lVar7 + 0x10));
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetMeshInstanceSkeletonRootUid @ 14e7eb080

void __cdecl
UInterchangePipelineMeshesUtilities::execGetMeshInstanceSkeletonRootUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar12 = (FScriptContainerElement *)0x0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  iVar6 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar8 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar9.Data);
  iVar5 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                      *)(param_1 + 3),uVar4,&local_58);
  pFVar10 = pFVar12;
  iVar8 = iVar6;
  if (iVar5 != -1) {
    iVar6 = local_58.Data.ArrayNum + -1;
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar9.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar9.Data);
    iVar6 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                        *)(param_1 + 3),uVar4,&local_58);
    pFVar11 = pFVar12;
    if (((iVar6 == -1) ||
        (pFVar11 = (FScriptContainerElement *)((longlong)iVar6 * 0x98 + *(longlong *)(param_1 + 3)),
        pFVar11 == (FScriptContainerElement *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar7 = GetMeshInstanceSkeletonRootUid
                       ((UInterchangePipelineMeshesUtilities *)param_1,&local_48,
                        (FInterchangeMeshInstance *)(pFVar11 + 0x10));
    iVar6 = 0;
    iVar8 = 0;
    if (&local_38 != pFVar7) {
      pFVar10 = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = (pFVar7->Data).ArrayNum;
      iVar8 = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = pFVar10;
    *(int *)((longlong)param_3 + 8) = iVar6;
    *(int *)((longlong)param_3 + 0xc) = iVar8;
    pFVar10 = pFVar12;
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsValidMeshGeometryUid @ 14e7eb280

void __cdecl
UInterchangePipelineMeshesUtilities::execIsValidMeshGeometryUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
  iVar4 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                      *)(param_1 + 1),uVar3,&local_18);
  *(bool *)param_3 = iVar4 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsValidMeshInstanceUid @ 14e7eb360

void __cdecl
UInterchangePipelineMeshesUtilities::execIsValidMeshInstanceUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
  iVar4 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                      *)(param_1 + 3),uVar3,&local_18);
  *(bool *)param_3 = iVar4 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetContext @ 14e7eb4b0

void __cdecl
UInterchangePipelineMeshesUtilities::execSetContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\x01';
  local_res8[4] = '\x01';
  local_res8[5] = '\0';
  local_res8[6] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  param_1[9].field_0x8 = puVar5[0];
  param_1[9].field_0x9 = uVar2;
  param_1[9].field_0xa = uVar3;
  param_1[9].field_0xb = uVar4;
  uVar2 = puVar5[5];
  param_1[9].field_0xc = puVar5[4];
  param_1[9].field_0xd = uVar2;
  param_1[9].field_0xe = puVar5[6];
  return;
}

// operator() @ 150599c90

bool __thiscall
`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l33::<lambda_7>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6734323387994209637>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6734323387994209637>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

