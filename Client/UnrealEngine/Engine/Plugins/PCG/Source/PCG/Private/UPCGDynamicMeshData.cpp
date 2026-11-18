// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 26

// StaticClass @ 149859e40

UClass * __cdecl UPCGDynamicMeshData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDynamicMeshData",
               &Z_Registration_Info_UClass_UPCGDynamicMeshData.InnerSingleton,
               StaticRegisterNativesUPCGDynamicMeshData,0x328,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDynamicMeshData>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshData>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshData.InnerSingleton;
}

// UPCGDynamicMeshData @ 14988dd80

UPCGDynamicMeshData * __thiscall
UPCGDynamicMeshData::UPCGDynamicMeshData(UPCGDynamicMeshData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined2 *)&this->_padding_ = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&this->_padding_);
  this->_padding_ = (longlong)&___7UPCGDynamicMeshData__6B_;
  (this->DynamicMesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->DynamicMeshOctree);
  (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  this->bDynamicMeshOctreeIsDirty = true;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DynamicMeshOctreeLock,4000);
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  *(undefined4 *)((this->CachedBounds).Pad + 4) = 0x1000000;
  (this->DynamicMeshBoundsLock).bFlag = (atomic<bool>)0x0;
  return this;
}

// UPCGDynamicMeshData @ 14988deb0

UPCGDynamicMeshData * __thiscall
UPCGDynamicMeshData::UPCGDynamicMeshData(UPCGDynamicMeshData *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UDynamicMesh *pUVar4;
  FName local_res8;
  
  UPCGSpatialData::UPCGSpatialData((UPCGSpatialData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDynamicMeshData__6B_;
  (this->DynamicMesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->DynamicMeshOctree);
  (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  this->bDynamicMeshOctreeIsDirty = true;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DynamicMeshOctreeLock,4000);
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  *(undefined4 *)((this->CachedBounds).Pad + 4) = 0x1000000;
  (this->DynamicMeshBoundsLock).bFlag = (atomic<bool>)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"DynamicMesh");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UDynamicMesh_NoRegister();
  pUVar4 = (UDynamicMesh *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->DynamicMesh).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UPCGDynamicMeshData @ 149891580

void __thiscall UPCGDynamicMeshData::~UPCGDynamicMeshData(UPCGDynamicMeshData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGDynamicMeshData__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DynamicMeshOctreeLock);
  UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->DynamicMeshOctree);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  DestructItems<FString,int>((FString *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// operator() @ 1498966c0

void __thiscall
`UPCGDynamicMeshData::ToBasePointData'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  short sVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar13 = (param_1->VertexRefCounts).UsedCount;
  pFVar4 = *(ForAnyElementType **)this;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar13,pFVar4,*(int *)&pFVar4[1].Data,piVar1);
  }
  uVar14 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar13 = 0;
  if ((uVar14 != 0) &&
     (pFVar5 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar14) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 2);
        if ((sVar3 != 0) && (uVar13 = uVar12, sVar3 != -1)) break;
        uVar12 = uVar12 + 1;
        uVar13 = uVar12;
      } while ((int)uVar12 < (int)uVar14);
    }
  }
joined_r0x000149896779:
  do {
    if (uVar13 == uVar14) {
      return;
    }
    while( true ) {
      pFVar4 = *(ForAnyElementType **)this;
      lVar6 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      local_28 = *(undefined8 *)(lVar6 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
      if (((pFVar4->Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,pFVar4,piVar1);
      }
      uVar13 = uVar13 + 1;
      *(int *)&pFVar4[1].Data = iVar11 + 1;
      pFVar7 = pFVar4->Data;
      pFVar5 = pFVar7 + (longlong)iVar11 * 0x18;
      *(undefined8 *)pFVar5 = local_38;
      *(undefined8 *)(pFVar5 + 8) = uStack_30;
      *(undefined8 *)(pFVar7 + (longlong)iVar11 * 0x18 + 0x10) = local_28;
      if ((int)uVar14 <= (int)uVar13) break;
      pFVar5 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar6 = (ulonglong)(uVar13 >> 9) * 8;
        lVar9 = (ulonglong)(uVar13 & 0x1ff) * 2;
        if ((*(short *)(lVar9 + *(longlong *)(pFVar5 + lVar6)) != 0) &&
           (*(short *)(lVar9 + *(longlong *)(pFVar5 + lVar6)) != -1)) break;
        uVar13 = uVar13 + 1;
        if ((int)uVar14 <= (int)uVar13) goto joined_r0x000149896779;
      }
    }
  } while( true );
}

// AddToCrc @ 14989dc00

void __thiscall
UPCGDynamicMeshData::AddToCrc(UPCGDynamicMeshData *this,FArchiveCrc32 *param_1,bool param_2)

{
  longlong *plVar1;
  UClass *this_00;
  undefined1 local_res8 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  if (param_2) {
    plVar1 = (longlong *)this->_padding_;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 200))(plVar1,param_1);
    }
    this_00 = StaticClass();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    ::operator<<((FArchive *)param_1,&local_18);
    UE::Geometry::FDynamicMesh3::Serialize
              ((((this->DynamicMesh).field0_0x0.DebugPtr)->Mesh).Ptr,(FArchive *)param_1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  }
  return;
}

// CopyInternal @ 1498a3f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGDynamicMeshData::CopyInternal(UPCGDynamicMeshData *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UDynamicMesh *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  UPCGSpatialData *pUVar7;
  UObject *pUVar8;
  UPCGDynamicMeshData *this_00;
  FDynamicMesh3 *pFVar9;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar10;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGDynamicMeshData *local_res18;
  ForAnyElementType local_258 [2];
  FDynamicMesh3 local_248;
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar6 = IsInGameThread();
    if ((!bVar6) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar7 = (UPCGSpatialData *)(*pcVar5)();
      return pUVar7;
    }
  }
  else {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749348>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar7 = (UPCGSpatialData *)(*pcVar5)();
        return pUVar7;
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar8 = GetTransientPackageAsObject();
      this_00 = NewObject<UPCGDynamicMeshData>(pUVar8);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if ((this_00 == (UPCGDynamicMeshData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar7 = (UPCGSpatialData *)(*pcVar5)();
        return pUVar7;
      }
      local_res18 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UPCGDynamicMeshData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
      goto LAB_1498a3f90;
    }
  }
  pUVar8 = GetTransientPackageAsObject();
  this_00 = NewObject<UPCGDynamicMeshData>(pUVar8);
LAB_1498a3f90:
  pUVar3 = (this->DynamicMesh).field0_0x0.DebugPtr;
  if (((this_00->DynamicMesh).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDynamicMeshData.cpp"
                         ,0x1d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar7 = (UPCGSpatialData *)(*pcVar5)();
    return pUVar7;
  }
  if (pUVar3 == (UDynamicMesh *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    pFVar9 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248,(pUVar3->Mesh).Ptr);
    if (((this_00->DynamicMesh).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DynamicMesh",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDynamicMeshData.cpp"
                           ,0x32,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar7 = (UPCGSpatialData *)(*pcVar5)();
      return pUVar7;
    }
    UDynamicMesh::SetMesh((this_00->DynamicMesh).field0_0x0.DebugPtr,pFVar9);
    ResetBounds(this_00);
    this_00->bDynamicMeshOctreeIsDirty = true;
    (this_00->Materials).ArrayNum = 0;
    if ((this_00->Materials).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this_00->Materials).AllocatorInstance,0,&(this_00->Materials).ArrayMax);
    }
    if ((&this_00->Materials ==
         (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)local_258) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar7 = (UPCGSpatialData *)(*pcVar5)();
      return pUVar7;
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
  }
  pTVar10 = &this_00->Materials;
  if (pTVar10 != &this->Materials) {
    iVar2 = (this->Materials).ArrayNum;
    piVar1 = &(this_00->Materials).ArrayMax;
    pFVar4 = (this->Materials).AllocatorInstance.Data;
    (this_00->Materials).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,*piVar1,&pTVar10->AllocatorInstance,iVar2,piVar1);
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                ((pTVar10->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar4,iVar2);
    }
  }
  return (UPCGSpatialData *)this_00;
}

// GetBounds @ 1498b5600

TBox<double> * __thiscall
UPCGDynamicMeshData::GetBounds(UPCGDynamicMeshData *this,TBox<double> *__return_storage_ptr__)

{
  atomic<bool> aVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  
  if (this->bDynamicMeshBoundsAreDirty != false) {
    LOCK();
    aVar1 = (this->DynamicMeshBoundsLock).bFlag;
    (this->DynamicMeshBoundsLock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar1 != (atomic<bool>)0x0) {
      aVar1 = (this->DynamicMeshBoundsLock).bFlag;
      while (aVar1 != (atomic<bool>)0x0) {
        aVar1 = (this->DynamicMeshBoundsLock).bFlag;
      }
      LOCK();
      aVar1 = (this->DynamicMeshBoundsLock).bFlag;
      (this->DynamicMeshBoundsLock).bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    if (this->bDynamicMeshBoundsAreDirty != false) {
      ResetBounds(this);
    }
    (this->DynamicMeshBoundsLock).bFlag = (atomic<bool>)0x0;
  }
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  dVar3 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar4 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  dVar5 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar4;
  uVar6 = (this->CachedBounds).IsValid;
  uVar7 = (this->CachedBounds).Pad[0];
  uVar8 = (this->CachedBounds).Pad[1];
  uVar9 = (this->CachedBounds).Pad[2];
  uVar10 = (this->CachedBounds).Pad[3];
  uVar11 = (this->CachedBounds).Pad[4];
  uVar12 = (this->CachedBounds).Pad[5];
  uVar13 = (this->CachedBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->IsValid = uVar6;
  __return_storage_ptr__->Pad[0] = uVar7;
  __return_storage_ptr__->Pad[1] = uVar8;
  __return_storage_ptr__->Pad[2] = uVar9;
  __return_storage_ptr__->Pad[3] = uVar10;
  __return_storage_ptr__->Pad[4] = uVar11;
  __return_storage_ptr__->Pad[5] = uVar12;
  __return_storage_ptr__->Pad[6] = uVar13;
  return __return_storage_ptr__;
}

// GetDataType @ 1498b83c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGDynamicMeshData::GetDataType(UPCGDynamicMeshData *this)

{
  return DynamicMesh;
}

// GetDataTypeId @ 1498b8630

FPCGDataTypeBaseId * __thiscall UPCGDynamicMeshData::GetDataTypeId(UPCGDynamicMeshData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoDynamicMesh::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoDynamicMesh::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoDynamicMesh::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoDynamicMesh::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoDynamicMesh::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoDynamicMesh,(UObject *)pUVar3,
                         L"PCGDataTypeInfoDynamicMesh");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b86b3;
  }
  else {
LAB_1498b86b3:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b870a;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1498b870c;
  }
LAB_1498b870a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b870c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoDynamicMesh::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoDynamicMesh::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoDynamicMesh::AsId(void)'
          ::__l2::Id;
}

// GetDimension @ 1498b99a0

int __thiscall UPCGDynamicMeshData::GetDimension(UPCGDynamicMeshData *this)

{
  return 3;
}

// GetDynamicMeshOctree @ 1498b9fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDynamicMeshOctree3 * __thiscall
UPCGDynamicMeshData::GetDynamicMeshOctree(UPCGDynamicMeshData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FDynamicMeshOctree3 *this_00;
  FDynamicMesh3 *pFVar1;
  FDynamicMesh3 *pFVar2;
  undefined1 auStack_258 [32];
  IndexEnumerable local_238 [2];
  FSparseDynamicOctree3 local_228;
  FDynamicMesh3 *local_58;
  double local_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (((this->DynamicMesh).field0_0x0.DebugPtr != (UDynamicMesh *)0x0) &&
     (this->bDynamicMeshOctreeIsDirty != false)) {
    lpCriticalSection = &this->DynamicMeshOctreeLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bDynamicMeshOctreeIsDirty != false) {
      pFVar1 = (this->DynamicMeshOctree).Mesh;
      this_00 = &this->DynamicMeshOctree;
      pFVar2 = (((this->DynamicMesh).field0_0x0.DebugPtr)->Mesh).Ptr;
      if (pFVar1 == pFVar2) {
        local_238[0].Vector = &pFVar2->TriangleRefCounts;
        UE::Geometry::FDynamicMeshOctree3::
        ReinsertTriangles<UE::Geometry::FRefCountVector::IndexEnumerable>(this_00,local_238);
      }
      else {
        if (pFVar1 != (FDynamicMesh3 *)0x0) {
          memset(&local_228,0,0x1d0);
          UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3(&local_228);
          local_50 = __real_7fefffffffffffff;
          dStack_38 = ___xmm_ffefffffffffffffffefffffffffffff;
          dStack_30 = _UNK_1508ffb58;
          local_28 = __real_ffefffffffffffff;
          local_58 = (FDynamicMesh3 *)0x0;
          dStack_48 = ___xmm_7fefffffffffffff7fefffffffffffff;
          dStack_40 = _UNK_150a9e648;
          UE::Geometry::FSparseDynamicOctree3::operator=
                    ((FSparseDynamicOctree3 *)this_00,&local_228);
          (this->DynamicMeshOctree).Mesh = local_58;
          (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.X = local_50;
          (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.Y = dStack_48;
          (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.Z = dStack_40;
          (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.X = dStack_38;
          (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.Y = dStack_30;
          (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.Z = local_28;
          UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3(&local_228);
        }
        UE::Geometry::FDynamicMeshOctree3::Initialize
                  (this_00,(((this->DynamicMesh).field0_0x0.DebugPtr)->Mesh).Ptr);
      }
      this->bDynamicMeshOctreeIsDirty = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return &this->DynamicMeshOctree;
}

// GetPrivateStaticClass @ 1498bc350

UClass * __cdecl UPCGDynamicMeshData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDynamicMeshData",
               &Z_Registration_Info_UClass_UPCGDynamicMeshData.InnerSingleton,
               StaticRegisterNativesUPCGDynamicMeshData,0x328,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDynamicMeshData>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshData>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshData.InnerSingleton;
}

// Initialize @ 1498cb770

void __thiscall
UPCGDynamicMeshData::Initialize
          (UPCGDynamicMeshData *this,FDynamicMesh3 *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DynamicMesh).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDynamicMeshData.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UDynamicMesh::SetMesh((this->DynamicMesh).field0_0x0.DebugPtr,param_1);
  ResetBounds(this);
  this->bDynamicMeshOctreeIsDirty = true;
  SetMaterials(this,param_2);
  return;
}

// Initialize @ 1498cb800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGDynamicMeshData::Initialize
          (UPCGDynamicMeshData *this,UDynamicMesh *param_1,bool param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  FDynamicMesh3 local_238;
  
  if ((this->DynamicMesh).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDynamicMeshData.cpp"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (UDynamicMesh *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    pFVar3 = (param_1->Mesh).Ptr;
    if (param_2) {
      Initialize(this,pFVar3,param_3);
    }
    else {
      pFVar3 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238,pFVar3);
      Initialize(this,pFVar3,param_3);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
    }
  }
  return;
}

// InitializeDynamicMeshComponentFromData @ 1498ce1b0

void __thiscall
UPCGDynamicMeshData::InitializeDynamicMeshComponentFromData
          (UPCGDynamicMeshData *this,UDynamicMeshComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDynamicMesh3 *pFVar4;
  uint uVar5;
  longlong lVar6;
  FDynamicMesh3 local_238;
  
  if ((param_1 == (UDynamicMeshComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDynamicMeshData.cpp"
                         ,0xed,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(param_1->_padding_ + 0xb28);
  pFVar4 = UE::Geometry::FDynamicMesh3::FDynamicMesh3
                     (&local_238,(((this->DynamicMesh).field0_0x0.DebugPtr)->Mesh).Ptr);
  (*pcVar1)(param_1,pFVar4);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  uVar5 = 0;
  if (0 < (this->Materials).ArrayNum) {
    lVar6 = 0;
    do {
      pcVar1 = *(code **)(param_1->_padding_ + 0x6b8);
      uVar3 = 0;
      if ((int)uVar5 < (this->Materials).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*pcVar1)(param_1,uVar5,*(undefined8 *)((this->Materials).AllocatorInstance.Data + lVar6));
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Materials).ArrayNum);
  }
  return;
}

// ResetBounds @ 1498d7080

void __thiscall UPCGDynamicMeshData::ResetBounds(UPCGDynamicMeshData *this)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  TAxisAlignedBox3<double> *pTVar12;
  TAxisAlignedBox3<double> local_78 [2];
  undefined7 uStack_17;
  
  if ((this->DynamicMesh).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("DynamicMesh",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDynamicMeshData.cpp"
                        ,0x3d,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar12 = UE::Geometry::FDynamicMesh3::GetBounds
                      ((((this->DynamicMesh).field0_0x0.DebugPtr)->Mesh).Ptr,local_78,false);
  dVar6 = (pTVar12->Max).field0_0x0._s_0.X;
  dVar7 = (pTVar12->Max).field0_0x0._s_0.Y;
  dVar2 = (pTVar12->Min).field0_0x0._s_0.Z;
  dVar8 = (pTVar12->Min).field0_0x0._s_0.X;
  dVar9 = (pTVar12->Min).field0_0x0._s_0.Y;
  dVar3 = (pTVar12->Min).field0_0x0._s_0.X;
  dVar4 = (pTVar12->Max).field0_0x0._s_0.Z;
  if ((((pTVar12->Max).field0_0x0._s_0.X <= dVar3 && dVar3 != (pTVar12->Max).field0_0x0._s_0.X) ||
      (dVar3 = (pTVar12->Min).field0_0x0._s_0.Y, pdVar1 = &(pTVar12->Max).field0_0x0._s_0.Y,
      *pdVar1 <= dVar3 && dVar3 != *pdVar1)) ||
     (dVar3 = (pTVar12->Min).field0_0x0._s_0.Z, pdVar1 = &(pTVar12->Max).field0_0x0._s_0.Z,
     *pdVar1 <= dVar3 && dVar3 != *pdVar1)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  this->bDynamicMeshBoundsAreDirty = false;
  (this->CachedBounds).Min.field0_0x0._s_0.X = dVar8;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = dVar9;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = dVar2;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dVar6;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = dVar7;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = dVar4;
  (this->CachedBounds).IsValid = uVar11;
  (this->CachedBounds).Pad[0] = (char)uStack_17;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_17 >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_17 >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_17 >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_17 >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_17 >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_17 >> 0x30);
  return;
}

// SamplePoint @ 1498d8cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPCGDynamicMeshData::SamplePoint
          (UPCGDynamicMeshData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FDynamicMeshOctree3 *this_00;
  FDynamicMesh3 *pFVar1;
  FDynamicMesh3 *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  int iVar7;
  double *pdVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_608 [32];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  double local_5c8;
  double dStack_5c0;
  double dStack_5b8;
  double dStack_5b0;
  undefined1 local_5a8 [16];
  TVector<double>_u_0 local_598;
  double local_580;
  double local_578;
  double local_570;
  UPCGDynamicMeshData *local_568;
  TVector<double>_u_0 *local_560;
  FDynamicMesh3 local_558;
  FSparseDynamicOctree3 local_328;
  FDynamicMesh3 *local_158;
  double local_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double local_128;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_608;
  if ((this->DynamicMesh).field0_0x0.DebugPtr != (UDynamicMesh *)0x0) {
    auVar24 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    dVar5 = auVar24._8_8_;
    dVar12 = (param_2->Max).field0_0x0._s_0.X;
    dVar4 = ((param_2->Max).field0_0x0._s_0.Z + (param_2->Min).field0_0x0._s_0.Z) *
            __real_3fe0000000000000 * (param_1->Scale3D).ZW.m128d_f64[0];
    dVar19 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
    dVar16 = (param_2->Max).field0_0x0._s_0.Y;
    auVar14 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    dVar11 = auVar14._0_8_;
    dVar15 = (param_1->Scale3D).XY.m128d_f64[0] *
             (dVar12 + (param_2->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
    dVar3 = (param_1->Scale3D).XY.m128d_f64[1] *
            (dVar16 + (param_2->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    local_5d8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar13 = blendpd(local_5d8,auVar14,2);
    auVar25._8_4_ = SUB84(dVar3,0);
    auVar25._0_8_ = dVar15;
    auVar25._12_4_ = uVar21;
    auVar26._0_8_ = auVar25._8_8_ * local_5d8._0_8_ - local_5d8._8_8_ * dVar15;
    auVar26._8_8_ = dVar4 * local_5d8._8_8_ - dVar11 * dVar3;
    auVar27._8_4_ = SUB84(dVar3,0);
    auVar27._0_8_ = dVar15;
    auVar27._12_4_ = uVar21;
    auVar9._8_4_ = SUB84(dVar19,0);
    auVar9._0_8_ = dVar4;
    auVar9._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar9 = blendpd(auVar27,auVar9,2);
    auVar10._0_8_ = auVar9._0_8_ * dVar11 - auVar13._0_8_ * dVar4;
    auVar10._8_8_ = auVar9._8_8_ * auVar14._8_8_ - auVar13._8_8_ * dVar19;
    auVar9 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar27 = blendpd(auVar26,auVar10,2);
    dVar19 = auVar26._8_8_ + auVar26._8_8_;
    dVar20 = auVar10._0_8_ + auVar10._0_8_;
    auVar28._0_8_ = auVar27._0_8_ + auVar27._0_8_;
    auVar28._8_8_ = auVar27._8_8_ + auVar27._8_8_;
    auVar22._8_4_ = SUB84(dVar20,0);
    auVar22._0_8_ = dVar19;
    uVar21 = (undefined4)((ulonglong)dVar20 >> 0x20);
    auVar22._12_4_ = uVar21;
    auVar17._8_4_ = SUB84(dVar20,0);
    auVar17._0_8_ = dVar19;
    auVar17._12_4_ = uVar21;
    auVar27 = blendpd(auVar9,auVar14,2);
    auVar23._0_8_ = auVar22._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar19;
    auVar23._8_8_ = auVar28._0_8_ * auVar9._8_8_ - dVar11 * dVar20;
    auVar9 = blendpd(auVar17,auVar28,2);
    auVar13._8_4_ = SUB84(auVar23._8_8_,0);
    auVar13._0_8_ = auVar23._0_8_;
    auVar13._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
    auVar18._0_8_ = auVar9._0_8_ * dVar11 - auVar27._0_8_ * auVar28._0_8_;
    auVar18._8_8_ = auVar9._8_8_ * auVar14._8_8_ - auVar27._8_8_ * auVar28._8_8_;
    auVar14._8_4_ = auVar24._8_4_;
    auVar14._0_8_ = dVar5;
    auVar14._12_4_ = auVar24._12_4_;
    local_580 = dVar5 * dVar19 + dVar15 + auVar13._8_8_ + (param_1->Translation).XY.m128d_f64[0];
    dVar15 = auVar14._8_8_ * dVar20 + dVar3 + auVar18._0_8_ + (param_1->Translation).XY.m128d_f64[1]
    ;
    auVar24 = blendpd(auVar23,auVar18,2);
    local_5c8 = dVar5 * auVar28._0_8_ + dVar4 + auVar24._0_8_ +
                (param_1->Translation).ZW.m128d_f64[0];
    dVar12 = (dVar12 - (param_2->Min).field0_0x0._s_0.X) * __real_3fe0000000000000 *
             (param_1->Scale3D).XY.m128d_f64[0];
    local_578 = (dVar16 - (param_2->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000 *
                (param_1->Scale3D).XY.m128d_f64[1];
    local_598._s_0.X = local_580 - dVar12;
    local_570 = ((param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z) *
                __real_3fe0000000000000 * (param_1->Scale3D).ZW.m128d_f64[0];
    auVar6._4_8_ = (param_1->Scale3D).ZW.m128d_f64[1];
    auVar6._0_4_ = (int)((ulonglong)local_580 >> 0x20);
    auVar24._0_8_ = auVar6._0_8_ << 0x20;
    auVar24._8_4_ = SUB84(dVar15,0);
    auVar24._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    local_580 = local_580 + dVar12;
    local_598._s_0.Y = auVar24._8_8_ - local_578;
    local_578 = auVar24._8_8_ + local_578;
    local_598._s_0.Z = local_5c8 - local_570;
    local_570 = local_5c8 + local_570;
    pdVar8 = (double *)(**(code **)(this->_padding_ + 0x388))();
    if (*(char *)(pdVar8 + 6) == '\0') {
      local_5c8 = ___xmm_ffefffffffffffff7fefffffffffffff;
      dStack_5c0 = _UNK_150a9e6d8;
      dStack_5b8 = ___xmm_ffefffffffffffffffefffffffffffff;
      dStack_5b0 = _UNK_1508ffb58;
      dVar12 = ___xmm_7fefffffffffffff7fefffffffffffff;
      dVar16 = _UNK_150a9e648;
    }
    else {
      local_5c8 = pdVar8[2];
      dStack_5c0 = pdVar8[3];
      dStack_5b8 = pdVar8[4];
      dStack_5b0 = pdVar8[5];
      dVar12 = *pdVar8;
      dVar16 = pdVar8[1];
    }
    if (((((local_598._s_0.X < dStack_5c0) && (dVar12 < local_580)) &&
         (local_598._s_0.Y < dStack_5b8)) &&
        ((dVar16 < local_578 && (local_598._s_0.Z < dStack_5b0)))) && (local_5c8 < local_570)) {
      if (((this->DynamicMesh).field0_0x0.DebugPtr != (UDynamicMesh *)0x0) &&
         (this->bDynamicMeshOctreeIsDirty != false)) {
        lpCriticalSection = &this->DynamicMeshOctreeLock;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (this->bDynamicMeshOctreeIsDirty != false) {
          this_00 = &this->DynamicMeshOctree;
          pFVar1 = (((this->DynamicMesh).field0_0x0.DebugPtr)->Mesh).Ptr;
          pFVar2 = (this->DynamicMeshOctree).Mesh;
          if (pFVar2 == pFVar1) {
            local_5a8._0_8_ = &pFVar1->TriangleRefCounts;
            UE::Geometry::FDynamicMeshOctree3::
            ReinsertTriangles<UE::Geometry::FRefCountVector::IndexEnumerable>
                      (this_00,(IndexEnumerable *)local_5a8);
          }
          else {
            if (pFVar2 != (FDynamicMesh3 *)0x0) {
              memset(&local_328,0,0x1d0);
              UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3(&local_328);
              local_150 = __real_7fefffffffffffff;
              dStack_138 = ___xmm_ffefffffffffffffffefffffffffffff;
              dStack_130 = _UNK_1508ffb58;
              local_128 = __real_ffefffffffffffff;
              local_158 = (FDynamicMesh3 *)0x0;
              dStack_148 = ___xmm_7fefffffffffffff7fefffffffffffff;
              dStack_140 = _UNK_150a9e648;
              UE::Geometry::FSparseDynamicOctree3::operator=
                        ((FSparseDynamicOctree3 *)this_00,&local_328);
              (this->DynamicMeshOctree).Mesh = local_158;
              (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.X = local_150;
              (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.Y = dStack_148;
              (this->DynamicMeshOctree).ModifiedBounds.Min.field0_0x0._s_0.Z = dStack_140;
              (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.X = dStack_138;
              (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.Y = dStack_130;
              (this->DynamicMeshOctree).ModifiedBounds.Max.field0_0x0._s_0.Z = local_128;
              UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3(&local_328);
            }
            UE::Geometry::FDynamicMeshOctree3::Initialize
                      (this_00,(((this->DynamicMesh).field0_0x0.DebugPtr)->Mesh).Ptr);
          }
          this->bDynamicMeshOctreeIsDirty = false;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      local_560 = &local_598;
      local_568 = this;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3
                (&local_558,(((this->DynamicMesh).field0_0x0.DebugPtr)->Mesh).Ptr);
      local_5a8._8_8_ = local_5e8;
      local_5a8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::ParallelOverlapAnyQuery'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
           ::Call;
      local_5d8._8_8_ = &local_568;
      local_5d8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UPCGDynamicMeshData::SamplePoint'::__l2::<lambda_1>,bool,int>::Call;
      iVar7 = UE::Geometry::FSparseDynamicOctree3::ParallelOverlapAnyQuery
                        ((FSparseDynamicOctree3 *)&this->DynamicMeshOctree,
                         (TAxisAlignedBox3<double> *)&local_598._s_0,
                         (TFunctionRef<bool___cdecl(int)> *)local_5d8,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)>
                          *)local_5a8);
      if (iVar7 != -1) {
        dVar12 = (param_1->Rotation).XY.m128d_f64[1];
        (param_3->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
        (param_3->Transform).Rotation.XY.m128d_f64[1] = dVar12;
        dVar12 = (param_1->Rotation).ZW.m128d_f64[1];
        (param_3->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
        (param_3->Transform).Rotation.ZW.m128d_f64[1] = dVar12;
        dVar12 = (param_1->Translation).XY.m128d_f64[1];
        (param_3->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
        (param_3->Transform).Translation.XY.m128d_f64[1] = dVar12;
        dVar12 = (param_1->Translation).ZW.m128d_f64[1];
        (param_3->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
        (param_3->Transform).Translation.ZW.m128d_f64[1] = dVar12;
        dVar12 = (param_1->Scale3D).XY.m128d_f64[1];
        (param_3->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
        (param_3->Transform).Scale3D.XY.m128d_f64[1] = dVar12;
        dVar12 = (param_1->Scale3D).ZW.m128d_f64[1];
        (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
        (param_3->Transform).Scale3D.ZW.m128d_f64[1] = dVar12;
        dVar12 = (param_2->Min).field0_0x0._s_0.Y;
        (param_3->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
        (param_3->BoundsMin).field0_0x0._s_0.Y = dVar12;
        (param_3->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
        dVar12 = (param_2->Max).field0_0x0._s_0.Y;
        (param_3->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
        (param_3->BoundsMax).field0_0x0._s_0.Y = dVar12;
        (param_3->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
        param_3->Density = 1.0;
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_558);
      return iVar7 != -1;
    }
  }
  return false;
}

// SetMaterials @ 1498df290

void __thiscall
UPCGDynamicMeshData::SetMaterials
          (UPCGDynamicMeshData *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  uVar4 = param_1->ArrayNum;
  pTVar3 = &this->Materials;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->Materials).ArrayMax;
  piVar2 = &(this->Materials).ArrayNum;
  *piVar2 = 0;
  if ((this->Materials).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar3->AllocatorInstance,0,piVar1);
  }
  if (pTVar3 == (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar5,&pTVar3->AllocatorInstance,piVar2,piVar1);
    ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8,
               (UMaterialInterface **)(param_1->AllocatorInstance).Data,iVar5);
  }
  return;
}

// StaticRegisterNativesUPCGDynamicMeshData @ 1498f6890

void __cdecl UPCGDynamicMeshData::StaticRegisterNativesUPCGDynamicMeshData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGDynamicMeshData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsFullDataCrc @ 1498f6ca0

bool __thiscall UPCGDynamicMeshData::SupportsFullDataCrc(UPCGDynamicMeshData *this)

{
  return true;
}

// ToBasePointData @ 1498f6e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
UPCGDynamicMeshData::ToBasePointData
          (UPCGDynamicMeshData *this,FPCGContext *param_1,TBox<double> *param_2,
          TSubclassOf<UPCGBasePointData> param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UPCGBasePointData *pUVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  TTransform<double> *pTVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  TVector<double> *pTVar16;
  uint uVar17;
  TVector<double> *pTVar18;
  bool bVar19;
  undefined1 local_217 [7];
  TVector<double> *local_210;
  ulonglong local_208;
  FName local_200;
  UPackage *local_1f8;
  TVector<double> **local_1f0;
  TVector<double> *local_1e8;
  code *local_1e0;
  TVector<double> ***local_1d8;
  FPCGPointValueRanges local_1c8;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId177,"UPCGDynamicMeshData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDynamicMeshData.cpp"
               ,0xb1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId177);
  }
  if (((this->DynamicMesh).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDynamicMeshData.cpp"
                         ,0xb3,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pUVar10 = (UPCGBasePointData *)(*pcVar5)();
    return pUVar10;
  }
  local_1f0 = &local_210;
  local_1d8 = &local_1f0;
  pUVar15 = (UClass *)0x0;
  local_1e0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UPCGDynamicMeshData::ToBasePointData'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
              ::Call;
  local_210 = (TVector<double> *)0x0;
  local_208 = 0;
  UDynamicMesh::ProcessMesh
            ((this->DynamicMesh).field0_0x0.DebugPtr,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_1e0);
  pUVar11 = GetTransientPackage();
  local_1f8 = pUVar11;
  if (param_1 == (FPCGContext *)0x0) {
    bVar7 = IsInGameThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UPCGBasePointData *)(*pcVar5)();
      return pUVar10;
    }
    lVar4 = *(longlong *)param_3.Class.field0_0x0;
    local_200.ComparisonIndex.Value = 0;
    local_200.Number = 0;
    pUVar14 = pUVar15;
    if ((lVar4 != 0) &&
       (pUVar12 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar12 != (UClass *)0x0)) {
      iVar3 = (int)pUVar12->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        pUVar14 = *(UClass **)param_3.Class.field0_0x0;
      }
    }
    pUVar10 = NewObject<UPCGBasePointData>
                        ((UObject *)pUVar11,pUVar14,local_200,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    pUVar10 = FPCGContext::
              NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                        (param_1,&local_1f8,
                         (TSubclassOf<UPCGBasePointData> *)param_3.Class.field0_0x0);
  }
  (**(code **)(pUVar10->_padding_ + 0x490))(pUVar10,local_208 & 0xffffffff);
  (**(code **)(pUVar10->_padding_ + 0x498))(pUVar10,0x41);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_1c8,pUVar10,false);
  iVar3 = (int)local_208;
  local_1e8 = local_210 + (int)local_208;
  pTVar16 = local_210;
  pTVar18 = local_1e8;
  do {
    while( true ) {
      if ((int)local_208 != iVar3) {
        local_217[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_217);
      }
      uVar17 = (uint)pUVar15;
      if (pTVar16 == pTVar18) {
        (**(code **)(pUVar10->_padding_ + 0x490))(pUVar10,pUVar15,1);
        if (5 < (byte)LogPCG._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
        if (local_210 != (TVector<double> *)0x0) {
          FMemory::Free(local_210);
        }
        if (bVar19) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return pUVar10;
      }
      if ((param_2->IsValid == '\0') ||
         (((((dVar2 = (pTVar16->field0_0x0)._s_0.X,
             (param_2->Min).field0_0x0._s_0.X <= dVar2 && dVar2 != (param_2->Min).field0_0x0._s_0.X
             && (dVar2 < (param_2->Max).field0_0x0._s_0.X)) &&
            (dVar2 = (pTVar16->field0_0x0)._s_0.Y, pdVar1 = &(param_2->Min).field0_0x0._s_0.Y,
            *pdVar1 <= dVar2 && dVar2 != *pdVar1)) &&
           ((dVar2 < (param_2->Max).field0_0x0._s_0.Y &&
            (dVar2 = (pTVar16->field0_0x0)._s_0.Z, pdVar1 = &(param_2->Min).field0_0x0._s_0.Z,
            *pdVar1 <= dVar2 && dVar2 != *pdVar1)))) && (dVar2 < (param_2->Max).field0_0x0._s_0.Z)))
         ) break;
LAB_1498f7213:
      pTVar16 = pTVar16 + 1;
    }
    uVar8 = 0;
    if ((int)uVar17 < local_1c8.TransformRange.NumElements) {
      uVar8 = ~uVar17 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UPCGBasePointData *)(*pcVar5)();
      return pUVar10;
    }
    if (uVar17 == (int)uVar17 % local_1c8.TransformRange.ElementView.NumElements) {
      pTVar13 = (TTransform<double> *)
                ((longlong)
                 ((local_1c8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64 +
                (longlong)local_1c8.TransformRange.ElementView.BytesBetweenElements *
                (longlong)((int)uVar17 % local_1c8.TransformRange.ElementView.NumElements));
    }
    else {
      pTVar13 = &local_1c8.TransformRange.StubValue;
    }
    dVar6 = (pTVar16->field0_0x0)._s_0.Y;
    dVar2 = (pTVar16->field0_0x0)._s_0.Z;
    (pTVar13->Translation).XY.m128d_f64[0] = (pTVar16->field0_0x0)._s_0.X;
    (pTVar13->Translation).XY.m128d_f64[1] = dVar6;
    (pTVar13->Translation).ZW.m128d_f64[0] = dVar2;
    (pTVar13->Translation).ZW.m128d_f64[1] = 0.0;
    iVar9 = PCGHelpers::ComputeSeedFromPosition(pTVar16);
    uVar8 = 0;
    if ((int)uVar17 < local_1c8.SeedRange.NumElements) {
      uVar8 = ~uVar17 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UPCGBasePointData *)(*pcVar5)();
      return pUVar10;
    }
    pTVar18 = local_1e8;
    if (uVar17 != (int)uVar17 % local_1c8.SeedRange.ElementView.NumElements) {
      pUVar15 = (UClass *)(ulonglong)(uVar17 + 1);
      local_1c8.SeedRange.StubValue = iVar9;
      goto LAB_1498f7213;
    }
    pUVar15 = (UClass *)(ulonglong)(uVar17 + 1);
    pTVar16 = pTVar16 + 1;
    *(int *)((longlong)local_1c8.SeedRange.ElementView.BytesBetweenElements *
             (longlong)((int)uVar17 % local_1c8.SeedRange.ElementView.NumElements) +
            (longlong)local_1c8.SeedRange.ElementView.FirstElementPtr) = iVar9;
  } while( true );
}

// ToPointArrayData @ 1498f7c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGDynamicMeshData::ToPointArrayData
          (UPCGDynamicMeshData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGBasePointData *pUVar1;
  UPCGPointArrayData *pUVar2;
  UClass *local_res20;
  
  local_res20 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar1 = ToBasePointData(this,param_1,param_2,(TSubclassOf<UPCGBasePointData>)&local_res20);
  pUVar2 = CastChecked<UPCGPointArrayData,UPCGBasePointData_const_>(pUVar1);
  return pUVar2;
}

// ToPointData @ 1498f7f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGDynamicMeshData::ToPointData
          (UPCGDynamicMeshData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGBasePointData *pUVar1;
  UPCGPointData *pUVar2;
  UClass *local_res20;
  
  local_res20 = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar1 = ToBasePointData(this,param_1,param_2,(TSubclassOf<UPCGBasePointData>)&local_res20);
  pUVar2 = CastChecked<UPCGPointData,UPCGBasePointData_const_>(pUVar1);
  return pUVar2;
}

// execK2_Initialize @ 1498feb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGDynamicMeshData::execK2_Initialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FDynamicMesh3 *pFVar6;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int local_res8 [2];
  longlong local_res10;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_268;
  FDynamicMesh3 local_258;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_268,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_268);
  }
  local_res8[0] = 0;
  pTVar7 = &local_268;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  lVar4 = local_res10;
  bVar8 = local_res8[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[3].field_0x20 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDynamicMeshData.cpp"
                       ,0x1d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (lVar4 == 0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    pFVar6 = *(FDynamicMesh3 **)(lVar4 + 0xb8);
    if (bVar8) {
      pFVar6 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_258,pFVar6);
      Initialize((UPCGDynamicMeshData *)param_1,pFVar6,pTVar7);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_258);
    }
    else {
      Initialize((UPCGDynamicMeshData *)param_1,pFVar6,pTVar7);
    }
  }
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  return;
}

// execSetMaterials @ 1498ffae0

void __cdecl UPCGDynamicMeshData::execSetMaterials(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_18;
  
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
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMaterials((UPCGDynamicMeshData *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

