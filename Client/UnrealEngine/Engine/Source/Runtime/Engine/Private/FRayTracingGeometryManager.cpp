// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 45

// FRayTracingGeometryManager @ 148441c20

FRayTracingGeometryManager * __thiscall
FRayTracingGeometryManager::FRayTracingGeometryManager(FRayTracingGeometryManager *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FRayTracingGeometryManager::FStreamingRequest,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRayTracingGeometryManager *pFVar6;
  FCsvProfiler *pFVar7;
  uint uVar8;
  int iVar9;
  <lambda_1> local_res10 [8];
  
  this->_padding_ = (longlong)&___7FRayTracingGeometryManager__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RequestCS,4000);
  *(undefined8 *)&this->GeometryBuildRequests = 0;
  *(undefined8 *)&(this->GeometryBuildRequests).field_0x8 = 0;
  *(undefined8 *)&(this->GeometryBuildRequests).field_0x20 = 0;
  *(undefined4 *)&(this->GeometryBuildRequests).field_0x28 = 0;
  *(undefined4 *)&(this->GeometryBuildRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometryBuildRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometryBuildRequests).field_0x34 = 0;
  (this->SortedRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedRequests).ArrayNum = 0;
  (this->SortedRequests).ArrayMax = 0;
  (this->BuildParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildParams).ArrayNum = 0;
  (this->BuildParams).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MainCS,4000);
  *(undefined8 *)&this->RegisteredGroups = 0;
  *(undefined8 *)&(this->RegisteredGroups).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredGroups).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredGroups).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredGroups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredGroups).field_0x34 = 0;
  *(undefined8 *)&this->RegisteredGeometries = 0;
  *(undefined8 *)&(this->RegisteredGeometries).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredGeometries).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredGeometries).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredGeometries).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredGeometries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredGeometries).field_0x34 = 0;
  *(undefined8 *)&(this->ResidentGeometries).Elements = 0;
  *(undefined8 *)&(this->ResidentGeometries).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ResidentGeometries).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ResidentGeometries).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ResidentGeometries).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ResidentGeometries).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResidentGeometries).Elements.field_0x34 = 0;
  (this->ResidentGeometries).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ResidentGeometries).HashSize = 0;
  *(undefined8 *)&(this->AlwaysResidentGeometries).Elements = 0;
  *(undefined8 *)&(this->AlwaysResidentGeometries).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AlwaysResidentGeometries).Elements.field_0x20 = 0;
  this->TotalResidentSize = 0;
  *(undefined4 *)&(this->AlwaysResidentGeometries).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AlwaysResidentGeometries).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AlwaysResidentGeometries).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AlwaysResidentGeometries).Elements.field_0x34 = 0;
  (this->AlwaysResidentGeometries).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AlwaysResidentGeometries).HashSize = 0;
  this->TotalAlwaysResidentSize = 0;
  *(undefined8 *)&(this->EvictableGeometries).Elements = 0;
  *(undefined8 *)&(this->EvictableGeometries).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EvictableGeometries).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EvictableGeometries).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EvictableGeometries).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EvictableGeometries).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EvictableGeometries).Elements.field_0x34 = 0;
  (this->EvictableGeometries).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EvictableGeometries).HashSize = 0;
  *(undefined8 *)&(this->ReferencedGeometries).Elements = 0;
  *(undefined8 *)&(this->ReferencedGeometries).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedGeometries).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedGeometries).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedGeometries).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedGeometries).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedGeometries).Elements.field_0x34 = 0;
  (this->ReferencedGeometries).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedGeometries).HashSize = 0;
  *(undefined8 *)&(this->ReferencedGeometryGroups).Elements = 0;
  *(undefined8 *)&(this->ReferencedGeometryGroups).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedGeometryGroups).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedGeometryGroups).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedGeometryGroups).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedGeometryGroups).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedGeometryGroups).Elements.field_0x34 = 0;
  (this->ReferencedGeometryGroups).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedGeometryGroups).HashSize = 0;
  this_00 = &this->StreamingRequests;
  *(undefined8 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements = 0;
  piVar1 = &(this->StreamingRequests).ArrayNum;
  *(undefined8 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x8 = 0;
  piVar2 = &(this->StreamingRequests).ArrayMax;
  *(undefined8 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x34 = 0;
  (this->ReferencedGeometryGroupsForDynamicUpdate).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ReferencedGeometryGroupsForDynamicUpdate).HashSize = 0;
  *(undefined8 *)&(this->PendingStreamingRequests).Elements = 0;
  *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x34 = 0;
  (this->PendingStreamingRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingStreamingRequests).HashSize = 0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined8 *)&(this->VisibleGeometryHandles).Elements = 0;
  *(undefined8 *)&(this->VisibleGeometryHandles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisibleGeometryHandles).Elements.field_0x20 = 0;
  this->NumStreamingRequests = 0;
  this->NextStreamingRequestIndex = 0;
  this->TotalStreamingSize = 0;
  *(undefined4 *)&(this->VisibleGeometryHandles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisibleGeometryHandles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisibleGeometryHandles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisibleGeometryHandles).Elements.field_0x34 = 0;
  (this->VisibleGeometryHandles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisibleGeometryHandles).HashSize = 0;
  this->bRenderedFrame = false;
  iVar5 = GRayTracingStreamingMaxPendingRequests;
  iVar9 = *piVar1;
  if (iVar9 < GRayTracingStreamingMaxPendingRequests) {
    iVar9 = GRayTracingStreamingMaxPendingRequests - iVar9;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar9,&this_00->AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<FRayTracingGeometryManager::FStreamingRequest,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x20,iVar9);
  }
  else {
    if (GRayTracingStreamingMaxPendingRequests < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)GRayTracingStreamingMaxPendingRequests);
    }
    if (GRayTracingStreamingMaxPendingRequests < iVar9) {
      uVar8 = iVar9 - GRayTracingStreamingMaxPendingRequests;
      if (((int)(uVar8 | GRayTracingStreamingMaxPendingRequests) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FRayTracingGeometryManager *)(*pcVar3)();
        return pFVar6;
      }
      if (uVar8 != 0) {
        TArray<FRayTracingGeometryManager::FStreamingRequest,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,iVar5,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&this_00->AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  pFVar7 = FCsvProfiler::Get();
  if (pFVar7 != (FCsvProfiler *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FRayTracingGeometryManager::FRayTracingGeometryManager_::__l5::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar7->OnCSVProfileStartDelegate,local_res10);
  }
  return this;
}

// ~FRayTracingGeometryManager @ 148445b10

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::~FRayTracingGeometryManager(FRayTracingGeometryManager *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FRayTracingGeometryManager__6B_;
  if (*(int *)&(this->GeometryBuildRequests).field_0x8 !=
      *(int *)&(this->GeometryBuildRequests).field_0x34) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1717204822035267398>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0xba,"GeometryBuildRequests.IsEmpty()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)&(this->RegisteredGeometries).field_0x8 !=
      *(int *)&(this->RegisteredGeometries).field_0x34) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1717204822035267397>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0xbb,"RegisteredGeometries.IsEmpty()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)&(this->RegisteredGroups).field_0x8 != *(int *)&(this->RegisteredGroups).field_0x34) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1717204822035267395>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0xbd,"RegisteredGroups.IsEmpty()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->VisibleGeometryHandles).HashSize = 0;
  FVar1 = (this->VisibleGeometryHandles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisibleGeometryHandles).Elements);
  DestructItems<FRayTracingGeometryManager::FStreamingRequest,int>
            ((FStreamingRequest *)(this->StreamingRequests).AllocatorInstance.Data,
             (this->StreamingRequests).ArrayNum);
  pFVar2 = (this->StreamingRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->PendingStreamingRequests).HashSize = 0;
  FVar1 = (this->PendingStreamingRequests).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingStreamingRequests).Elements);
  (this->ReferencedGeometryGroupsForDynamicUpdate).HashSize = 0;
  FVar1 = (this->ReferencedGeometryGroupsForDynamicUpdate).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements);
  (this->ReferencedGeometryGroups).HashSize = 0;
  FVar1 = (this->ReferencedGeometryGroups).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedGeometryGroups).Elements);
  (this->ReferencedGeometries).HashSize = 0;
  FVar1 = (this->ReferencedGeometries).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedGeometries).Elements);
  (this->EvictableGeometries).HashSize = 0;
  FVar1 = (this->EvictableGeometries).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EvictableGeometries).Elements);
  (this->AlwaysResidentGeometries).HashSize = 0;
  FVar1 = (this->AlwaysResidentGeometries).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AlwaysResidentGeometries).Elements);
  (this->ResidentGeometries).HashSize = 0;
  FVar1 = (this->ResidentGeometries).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ResidentGeometries).Elements);
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
            (&this->RegisteredGeometries);
  TSparseArray<FRayTracingGeometryManager::FRayTracingGeometryGroup,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FRayTracingGeometryManager::FRayTracingGeometryGroup,FDefaultSparseArrayAllocator>
            (&this->RegisteredGroups);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MainCS);
  DestructItems<FRayTracingGeometryBuildParams,int>
            ((FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data,
             (this->BuildParams).ArrayNum);
  pFVar2 = (this->BuildParams).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SortedRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator>
            (&this->GeometryBuildRequests);
                    /* WARNING: Could not recover jumptable at 0x000148445d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RequestCS);
  return;
}

// AddReferencedGeometry @ 148451970

void __thiscall
FRayTracingGeometryManager::AddReferencedGeometry
          (FRayTracingGeometryManager *this,FRayTracingGeometry *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 local_res18 [8];
  int local_res20 [2];
  
  bVar3 = IsInRenderingThread();
  if (((!bVar3) && (bVar3 = IsInParallelRenderingThread(), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x5d5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = IsRayTracingUsingReferenceBasedResidency();
  if (bVar3) {
    uVar1 = param_1->RayTracingGeometryHandle;
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&(this->RegisteredGeometries).field_0x28)) {
      if ((*(int *)&(this->RegisteredGeometries).field_0x28 <= (int)uVar1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar4 = *(undefined1 **)&(this->RegisteredGeometries).field_0x20;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->RegisteredGeometries).field_0x10;
      }
      if ((*(uint *)(puVar4 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar1 & 0x1f) & 1) != 0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->ReferencedGeometries,local_res20,
                   (bool *)&param_1->RayTracingGeometryHandle);
      }
    }
  }
  else if (*(int *)&(this->ReferencedGeometries).Elements.field_0x8 !=
           *(int *)&(this->ReferencedGeometries).Elements.field_0x34) {
    `FRayTracingGeometryManager::AddReferencedGeometry'::__l17::<lambda_1>::operator()(local_res18);
    return;
  }
  return;
}

// AddReferencedGeometryGroups @ 148451a90

void __thiscall
FRayTracingGeometryManager::AddReferencedGeometryGroups
          (FRayTracingGeometryManager *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res18 [16];
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = IsInParallelRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x5e6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  bVar2 = IsRayTracingUsingReferenceBasedResidency();
  if (bVar2) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (&this->ReferencedGeometryGroups,param_1);
    return;
  }
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    `FRayTracingGeometryManager::AddReferencedGeometryGroups'::__l14::<lambda_1>::operator()
              (local_res18);
  }
  return;
}

// AddReferencedGeometryGroupsForDynamicUpdate @ 148451b20

void __thiscall
FRayTracingGeometryManager::AddReferencedGeometryGroupsForDynamicUpdate
          (FRayTracingGeometryManager *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res18 [16];
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = IsInParallelRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x5f4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  bVar2 = IsRayTracingUsingReferenceBasedResidency();
  if (bVar2) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (&this->ReferencedGeometryGroupsForDynamicUpdate,param_1);
    return;
  }
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    `FRayTracingGeometryManager::AddReferencedGeometryGroupsForDynamicUpdate'::__l14::<lambda_1>::
    operator()(local_res18);
  }
  return;
}

// AddVisibleGeometry @ 148451e90

void __thiscall
FRayTracingGeometryManager::AddVisibleGeometry(FRayTracingGeometryManager *this,int param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->VisibleGeometryHandles,local_res8,(bool *)local_res10);
  return;
}

// BoostPriority @ 148456ee0

void __thiscall
FRayTracingGeometryManager::BoostPriority
          (FRayTracingGeometryManager *this,int param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->RequestCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(float *)(*(longlong *)&this->GeometryBuildRequests + 0xc + (longlong)param_1 * 0x18) =
         param_2 + *(float *)(*(longlong *)&this->GeometryBuildRequests + 0xc +
                             (longlong)param_1 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148456f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CancelStreamingRequest @ 14845b8c0

void __thiscall
FRayTracingGeometryManager::CancelStreamingRequest
          (FRayTracingGeometryManager *this,FRegisteredGeometry *param_1)

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  sVar1 = param_1->StreamingRequestIndex;
  if (sVar1 != -1) {
    uVar5 = 0;
    if ((int)sVar1 < (this->StreamingRequests).ArrayNum) {
      uVar5 = (uint)~(int)sVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->StreamingRequests).AllocatorInstance.Data;
    if (*(int *)(pFVar2 + (longlong)sVar1 * 0x20 + 0x10) !=
        param_1->Geometry->RayTracingGeometryHandle) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamingRequest.GeometryHandle == RegisteredGeometry.Geometry->RayTracingGeometryHandle"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x4c6,
                         L"Ray tracing geometry streaming request owner mismatch (expected %d, got %d)."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2[(longlong)sVar1 * 0x20 + 0x19] = (FScriptContainerElement)0x1;
    *(undefined4 *)(pFVar2 + (longlong)sVar1 * 0x20 + 0x10) = 0xffffffff;
    if (*(longlong **)(pFVar2 + (longlong)sVar1 * 0x20 + 8) != (longlong *)0x0) {
      iVar6 = (**(code **)(**(longlong **)(pFVar2 + (longlong)sVar1 * 0x20 + 8) + 0x20))();
      if ((iVar6 == 1) && (*(longlong **)(pFVar2 + (longlong)sVar1 * 0x20 + 8) != (longlong *)0x0))
      {
        (**(code **)(**(longlong **)(pFVar2 + (longlong)sVar1 * 0x20 + 8) + 0x28))();
      }
    }
    param_1->StreamingRequestIndex = -1;
  }
  return;
}

// CheckIntegrity @ 14845b9c0

void __thiscall FRayTracingGeometryManager::CheckIntegrity(FRayTracingGeometryManager *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  FRayTracingGeometry *this_00;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator> *pTVar5
  ;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator> *pTVar6
  ;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  longlong *plVar14;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
  *pTVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined1 local_res10 [8];
  char local_res18;
  undefined1 local_res20 [8];
  undefined1 local_167 [3];
  uint local_164;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
  *local_160;
  int local_158;
  uint uStack_154;
  undefined1 *puStack_150;
  undefined4 local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  uint uStack_134;
  undefined1 *puStack_130;
  undefined4 local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  uint uStack_114;
  undefined1 *puStack_110;
  undefined4 local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  int local_d0;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  int local_a0;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  
  local_res18 = IsRayTracingEnabled();
  bVar7 = IsRayTracingUsingReferenceBasedResidency();
  if (GRayTracingTestCheckIntegrity != false) {
    pTVar15 = &this->RegisteredGeometries;
    iVar11 = *(int *)&(this->RegisteredGeometries).field_0x28;
    puVar2 = &(this->RegisteredGeometries).field_0x10;
    local_158 = 0;
    uStack_154 = 1;
    iStack_144 = 0;
    iStack_140 = 0;
    if (iVar11 != 0) {
      puVar18 = *(uint **)&(this->RegisteredGeometries).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar2;
      }
      uVar19 = *puVar18;
      iStack_140 = 0;
      local_158 = 0;
      while (uVar19 == 0) {
        iStack_140 = iStack_140 + 0x20;
        lVar12 = (longlong)local_158;
        local_158 = local_158 + 1;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < local_158) goto LAB_14845badc;
        uVar19 = puVar18[lVar12 + 1];
      }
      uStack_154 = -uVar19 & uVar19;
      uVar1 = (ulonglong)uStack_154 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_68 = (int)lVar12;
      iStack_144 = local_68 + -1 + iStack_140;
      if (iVar11 < iStack_144) {
LAB_14845badc:
        iStack_144 = iVar11;
      }
    }
    local_148 = 0xffffffff;
    local_164 = *(uint *)&(this->RegisteredGeometries).field_0x28;
    local_d0 = *(int *)&(this->RegisteredGeometries).field_0x8 -
               *(int *)&(this->RegisteredGeometries).field_0x34;
    local_f0._padding_ = CONCAT44(uStack_154,local_158);
    local_f0.CurrentBitIndex = iStack_144;
    local_f0.UnvisitedBitMask = 0xffffffff;
    local_f0._28_4_ = uStack_13c;
    local_f0.BaseBitIndex = iStack_140;
    iVar16 = (int)local_164 >> 5;
    uVar19 = local_164 & 0xffffffe0;
    bVar10 = (byte)local_164;
    local_160 = pTVar15;
    puStack_150 = puVar2;
    local_f8 = pTVar15;
    local_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)local_164 < 0) || (iVar11 < (int)local_164)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar5 = local_160;
    uVar21 = *(uint *)&(this->RegisteredGeometries).field_0x28;
    uVar20 = local_164;
    if (local_164 != uVar21) {
      puVar17 = *(undefined1 **)&(this->RegisteredGeometries).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar2;
      }
      uVar20 = -1 << (bVar10 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
      while (uVar20 == 0) {
        lVar12 = (longlong)iVar16;
        uVar19 = uVar19 + 0x20;
        iVar16 = iVar16 + 1;
        local_164 = uVar21;
        uVar20 = uVar21;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14845bbe3;
        uVar20 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_64 = (int)lVar12;
      local_164 = local_64 + -1 + uVar19;
      uVar20 = local_164;
      if ((int)uVar21 < (int)local_164) {
        local_164 = uVar21;
        uVar20 = uVar21;
      }
    }
LAB_14845bbe3:
    while( true ) {
      if (*(int *)&pTVar15->field_0x8 - *(int *)&pTVar15->field_0x34 != local_d0) {
        local_res10[0] = 0;
        `TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      pTVar6 = local_160;
      if (((local_f0.CurrentBitIndex == uVar20) &&
          (local_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar15 == pTVar5)
         ) break;
      bVar8 = false;
      puVar22 = (undefined8 *)(*(longlong *)pTVar15 + (longlong)local_f0.CurrentBitIndex * 0x30);
      this_00 = (FRayTracingGeometry *)*puVar22;
      uVar19 = this_00->RayTracingGeometryHandle;
      if (this_00->GroupHandle != -1) {
        bVar8 = *(int *)((longlong)this_00->GroupHandle * 0x70 + 0x10 +
                        *(longlong *)&this->RegisteredGroups) - GRayTracingNumAlwaysResidentLODs <=
                (int)this_00->LODIndex;
      }
      bVar9 = FRayTracingGeometry::IsEvicted(this_00);
      if (((bool)(*(byte *)((longlong)puVar22 + 0x2b) & 1) != bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("RegisteredGeometry.bEvicted == RegisteredGeometry.Geometry->IsEvicted()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                             ,0x3e9,L"Cached bEvicted flag in FRegisteredGeometry is stale"), bVar9)
         ) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((bool)(*(byte *)((longlong)puVar22 + 0x2b) >> 1 & 1) != bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RegisteredGeometry.bAlwaysResident == bAlwaysResident",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                             ,0x3ea,L"Cached bAlwaysResident flag in FRegisteredGeometry is stale"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)&(this->AlwaysResidentGeometries).Elements.field_0x8 !=
          *(int *)&(this->AlwaysResidentGeometries).Elements.field_0x34) {
        FVar3 = (this->AlwaysResidentGeometries).Hash.SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&(this->AlwaysResidentGeometries).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar3;
        }
        iVar11 = *(int *)((longlong)FVar13 +
                         (ulonglong)((this->AlwaysResidentGeometries).HashSize - 1U & uVar19) * 4);
        if (iVar11 != -1) {
          lVar12 = *(longlong *)&(this->AlwaysResidentGeometries).Elements;
          do {
            if (*(uint *)(lVar12 + (longlong)iVar11 * 0xc) == uVar19) goto LAB_14845bd3c;
            iVar11 = *(int *)(lVar12 + 4 + (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
      }
      iVar11 = -1;
LAB_14845bd3c:
      if (((bool)(*(byte *)((longlong)puVar22 + 0x2b) >> 1 & 1) != (iVar11 != -1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RegisteredGeometry.bAlwaysResident == AlwaysResidentGeometries.Contains(GeometryHandle)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                             ,0x3eb,
                             L"Geometry with bAlwaysResident flag set should be in the AlwaysResidentGeometries set."
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
      pTVar15 = local_f8;
    }
    if (local_res18 == '\0') {
      iVar11 = *(int *)&(this->RegisteredGeometries).field_0x28;
      local_138 = 0;
      uStack_134 = 1;
      iStack_124 = 0;
      iStack_120 = 0;
      if (iVar11 != 0) {
        puVar18 = *(uint **)&(this->RegisteredGeometries).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar2;
        }
        uVar19 = *puVar18;
        iStack_120 = 0;
        while (uVar19 == 0) {
          iStack_120 = iStack_120 + 0x20;
          lVar12 = (longlong)local_138;
          local_138 = local_138 + 1;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < local_138)
          goto LAB_14845be3c;
          uVar19 = puVar18[lVar12 + 1];
        }
        uStack_134 = -uVar19 & uVar19;
        uVar1 = (ulonglong)uStack_134 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_60 = (int)lVar12;
        iStack_124 = local_60 + -1 + iStack_120;
        if (iVar11 < iStack_124) {
LAB_14845be3c:
          iStack_124 = iVar11;
        }
      }
      local_128 = 0xffffffff;
      local_c0._padding_ = CONCAT44(uStack_134,local_138);
      local_c0.CurrentBitIndex = iStack_124;
      local_c0.UnvisitedBitMask = 0xffffffff;
      local_c0._28_4_ = uStack_11c;
      local_c0.BaseBitIndex = iStack_120;
      uVar19 = *(uint *)&local_160->field_0x28;
      local_a0 = *(int *)&local_160->field_0x8 - *(int *)&local_160->field_0x34;
      iVar16 = (int)uVar19 >> 5;
      uVar21 = uVar19 & 0xffffffe0;
      local_c8 = local_160;
      puStack_130 = puVar2;
      local_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar20 = *(uint *)&(this->RegisteredGeometries).field_0x28;
      pTVar15 = pTVar6;
      if (uVar19 != uVar20) {
        puVar17 = *(undefined1 **)&(this->RegisteredGeometries).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar2;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
        while (uVar19 == 0) {
          lVar12 = (longlong)iVar16;
          uVar21 = uVar21 + 0x20;
          iVar16 = iVar16 + 1;
          uVar19 = uVar20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14845bf30;
          uVar19 = *(uint *)(puVar17 + lVar12 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_5c = (int)lVar12;
        uVar19 = local_5c + -1 + uVar21;
        if ((int)uVar20 < (int)uVar19) {
          uVar19 = uVar20;
        }
      }
LAB_14845bf30:
      while( true ) {
        if (*(int *)&pTVar15->field_0x8 - *(int *)&pTVar15->field_0x34 != local_a0) {
          local_res20[0] = 0;
          `TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((local_c0.CurrentBitIndex == uVar19) &&
            (local_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar15 == pTVar6)) break;
        plVar14 = (longlong *)(*(longlong *)pTVar15 + (longlong)local_c0.CurrentBitIndex * 0x30);
        bVar7 = FRayTracingGeometry::IsEvicted((FRayTracingGeometry *)*plVar14);
        if (((!bVar7) && (*(longlong *)(*plVar14 + 0xe8) != 0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RegisteredGeometry.Geometry->IsEvicted() || RegisteredGeometry.Geometry->GetRHI() == nullptr"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                               ,0x3f3,
                               L"Ray tracing geometry should be evicted when ray tracing is disabled."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
        pTVar15 = local_c8;
      }
    }
    else if (!bVar7) {
      iVar11 = *(int *)&(this->RegisteredGeometries).field_0x28;
      local_118 = 0;
      uStack_114 = 1;
      iStack_104 = 0;
      iStack_100 = 0;
      if (iVar11 != 0) {
        puVar18 = *(uint **)&(this->RegisteredGeometries).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar2;
        }
        uVar19 = *puVar18;
        iStack_100 = 0;
        while (uVar19 == 0) {
          iStack_100 = iStack_100 + 0x20;
          lVar12 = (longlong)local_118;
          local_118 = local_118 + 1;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < local_118)
          goto LAB_14845c069;
          uVar19 = puVar18[lVar12 + 1];
        }
        uStack_114 = -uVar19 & uVar19;
        uVar1 = (ulonglong)uStack_114 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_58 = (int)lVar12;
        iStack_104 = local_58 + -1 + iStack_100;
        if (iVar11 < iStack_104) {
LAB_14845c069:
          iStack_104 = iVar11;
        }
      }
      local_108 = 0xffffffff;
      local_90._padding_ = CONCAT44(uStack_114,local_118);
      local_90.CurrentBitIndex = iStack_104;
      local_90.UnvisitedBitMask = 0xffffffff;
      local_90._28_4_ = uStack_fc;
      local_90.BaseBitIndex = iStack_100;
      uVar19 = *(uint *)&local_160->field_0x28;
      local_70 = *(int *)&local_160->field_0x8 - *(int *)&local_160->field_0x34;
      iVar16 = (int)uVar19 >> 5;
      uVar21 = uVar19 & 0xffffffe0;
      local_98 = local_160;
      puStack_110 = puVar2;
      local_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar20 = *(uint *)&(this->RegisteredGeometries).field_0x28;
      pTVar15 = pTVar6;
      if (uVar19 != uVar20) {
        puVar17 = *(undefined1 **)&(this->RegisteredGeometries).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar2;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
        while (uVar19 == 0) {
          lVar12 = (longlong)iVar16;
          uVar21 = uVar21 + 0x20;
          iVar16 = iVar16 + 1;
          uVar19 = uVar20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14845c150;
          uVar19 = *(uint *)(puVar17 + lVar12 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_54 = (int)lVar12;
        uVar19 = local_54 + -1 + uVar21;
        if ((int)uVar20 < (int)uVar19) {
          uVar19 = uVar20;
        }
      }
LAB_14845c150:
      while( true ) {
        if (*(int *)&pTVar15->field_0x8 - *(int *)&pTVar15->field_0x34 != local_70) {
          local_167[0] = 0;
          `TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
        }
        if (((local_90.CurrentBitIndex == uVar19) &&
            (local_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar15 == pTVar6)) break;
        bVar7 = FRayTracingGeometry::IsEvicted
                          (*(FRayTracingGeometry **)
                            (*(longlong *)pTVar15 + (longlong)local_90.CurrentBitIndex * 0x30));
        if ((bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!RegisteredGeometry.Geometry->IsEvicted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                               ,0x3fb,
                               L"Ray tracing geometry should not be evicted when ray tracing is enabled."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
        pTVar15 = local_98;
      }
    }
  }
  return;
}

// EvictAllGeometries @ 1484652b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::EvictAllGeometries
          (FRayTracingGeometryManager *this,FRHICommandList *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  FRegisteredGeometry *pFVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res18 [8];
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  uStack_94 = 1;
  local_98 = 0;
  iVar3 = *(int *)&(this->RegisteredGeometries).field_0x28;
  puVar2 = &(this->RegisteredGeometries).field_0x10;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->RegisteredGeometries).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar2;
    }
    uVar9 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar9 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar7 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14846537a;
      uVar9 = puVar12[lVar7 + 1];
    }
    uStack_94 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar3 < iStack_84) {
LAB_14846537a:
      iStack_84 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->RegisteredGeometries).field_0x28;
  local_50 = *(int *)&(this->RegisteredGeometries).field_0x8 -
             *(int *)&(this->RegisteredGeometries).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar8 = (int)uVar9 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar13 = uVar9 & 0xffffffe0;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->RegisteredGeometries).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->RegisteredGeometries).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar13 = uVar13 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_148465463;
      uVar9 = *(uint *)(puVar10 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_148465463:
  while( true ) {
    if (*(int *)&(this->RegisteredGeometries).field_0x8 -
        *(int *)&(this->RegisteredGeometries).field_0x34 != local_50) {
      `TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((local_70.CurrentBitIndex == uVar9) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar11 = (FRegisteredGeometry *)
              ((longlong)local_70.CurrentBitIndex * 0x30 + *(longlong *)&this->RegisteredGeometries)
    ;
    if ((pFVar11->Geometry->RayTracingGeometryRHI).Reference != (FRHIRayTracingGeometry *)0x0) {
      EvictGeometry(this,(FRHICommandListBase *)param_1,pFVar11);
    }
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  return;
}

// EvictGeometry @ 1484654e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::EvictGeometry
          (FRayTracingGeometryManager *this,FRHICommandListBase *param_1,
          FRegisteredGeometry *param_2)

{
  FRHIResourceReplaceBatcher local_28;
  
  CancelStreamingRequest(this,param_2);
  local_28.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Infos.ArrayNum = 0;
  local_28.Infos.ArrayMax = 0;
  local_28.RHICmdList = param_1;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,1,&local_28.Infos.AllocatorInstance,0,&local_28.Infos.ArrayMax);
  if ((param_2->Geometry->GeometryState & StreamedIn) != Invalid) {
    if (param_2->StreamableAsset == (FRayTracingStreamableAsset *)0x0) {
      FRayTracingGeometry::ReleaseRHIForStreaming(param_2->Geometry,&local_28);
    }
    else {
      (**(code **)((longlong)*param_2->StreamableAsset + 0x38))();
    }
  }
  FRayTracingGeometry::Evict(param_2->Geometry);
  param_2->bEvicted = true;
  if (local_28.Infos.ArrayNum != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_28.RHICmdList,&local_28.Infos);
  }
  if (local_28.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Infos.AllocatorInstance.Data);
  }
  return;
}

// ForceBuildIfPending @ 148467540

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::ForceBuildIfPending
          (FRayTracingGeometryManager *this,FRHIComputeCommandList *param_1,
          TArrayView<FRayTracingGeometry_const_*,int> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FRayTracingGeometry **ppFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FRayTracingGeometry *this_00;
  FRayTracingGeometryBuildParams *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  uint uVar11;
  FRHIComputeCommandList *pFVar12;
  bool bVar13;
  ulonglong uVar14;
  FRayTracingGeometry **ppFVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  FRHIComputeCommandList *local_res10;
  TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> local_88;
  FRayTracingGeometryBuildParams *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> local_68;
  FRHIComputeCommandList *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  bVar17 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1276,"FRayTracingGeometryManager::ForceBuildIfPending",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
               ,0x4fc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1276);
  }
  lpCriticalSection = &this->RequestCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = param_2->ArrayNum;
  piVar1 = &(this->BuildParams).ArrayMax;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar11 = uVar4;
  if ((int)uVar4 < *piVar1) {
    uVar11 = *piVar1;
  }
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  if (-1 < (int)uVar11) {
    DestructItems<FRayTracingGeometryBuildParams,int>
              ((FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data,
               (this->BuildParams).ArrayNum);
    (this->BuildParams).ArrayNum = 0;
    if ((this->BuildParams).ArrayMax != uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar11,&(this->BuildParams).AllocatorInstance,0,piVar1);
    }
    ppFVar15 = param_2->DataPtr;
    ppFVar2 = ppFVar15 + (int)uVar4;
    for (; ppFVar15 != ppFVar2; ppFVar15 = ppFVar15 + 1) {
      this_00 = *ppFVar15;
      bVar13 = FRayTracingGeometry::HasPendingBuildRequest(this_00);
      if (bVar13) {
        SetupBuildParams(this,(FBuildRequest *)
                              (*(longlong *)&this->GeometryBuildRequests +
                              (longlong)this_00->RayTracingBuildRequestIndex * 0x18),
                         &this->BuildParams,&local_88,true);
      }
    }
    iVar5 = (this->BuildParams).ArrayNum;
    if (iVar5 != 0) {
      local_78 = (FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data;
      if ((iVar5 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_68._12_4_ = uStack_6c;
      local_68.ArrayNum = iVar5;
      local_68.DataPtr = local_78;
      iStack_70 = iVar5;
      FRHIComputeCommandList::BuildAccelerationStructures(local_res10,&local_68);
    }
    pFVar7 = (FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data;
    iVar5 = (this->BuildParams).ArrayNum;
    if ((this->BuildParams).ArrayMax < 0) {
      DestructItems<FRayTracingGeometryBuildParams,int>(pFVar7,iVar5);
      (this->BuildParams).ArrayNum = 0;
      if ((this->BuildParams).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->BuildParams).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FRayTracingGeometryBuildParams,int>(pFVar7,iVar5);
      (this->BuildParams).ArrayNum = 0;
    }
    pFVar12 = local_res10;
    iVar5 = local_88.ArrayNum;
    uVar14 = (ulonglong)local_88.ArrayNum;
    pFVar3 = local_88.AllocatorInstance.Data + uVar14 * 8;
    FVar16.Data = local_88.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar5) {
        `TCheckedPointerIterator<FRayTracingGeometry_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar16.Data == pFVar3) break;
      local_58 = pFVar12;
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48 = 0;
      iVar6 = *(int *)(*(longlong *)FVar16.Data + 0xf8);
      lVar8 = *(longlong *)&this->RegisteredGeometries;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,1,&local_50,0,(int *)((longlong)&local_48 + 4));
      plVar9 = *(longlong **)((longlong)iVar6 * 0x30 + lVar8 + 0x18);
      (**(code **)(*plVar9 + 0x48))(plVar9,&local_58);
      if ((int)local_48 != 0) {
        (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_58,&local_50);
      }
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      uVar14 = local_88._8_8_ & 0xffffffff;
      FVar16.Data = FVar16.Data + 8;
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
}

// IsAlwaysResidentGeometry @ 1484780a0

bool __cdecl
FRayTracingGeometryManager::IsAlwaysResidentGeometry
          (FRayTracingGeometry *param_1,FRayTracingGeometryGroup *param_2)

{
  return (param_2->GeometryHandles).ArrayNum - GRayTracingNumAlwaysResidentLODs <=
         (int)param_1->LODIndex;
}

// IsGeometryGroupReferenced @ 148478110

bool __thiscall
FRayTracingGeometryManager::IsGeometryGroupReferenced(FRayTracingGeometryManager *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->ReferencedGeometryGroups).Elements.field_0x8 !=
      *(int *)&(this->ReferencedGeometryGroups).Elements.field_0x34) {
    FVar3 = (this->ReferencedGeometryGroups).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->ReferencedGeometryGroups).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->ReferencedGeometryGroups).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ReferencedGeometryGroups).Elements;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0xc) == param_1) goto LAB_14847816f;
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14847816f:
  return iVar2 != -1;
}

// IsGeometryReferenced @ 148478180

bool __thiscall
FRayTracingGeometryManager::IsGeometryReferenced
          (FRayTracingGeometryManager *this,FRayTracingGeometry *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->ReferencedGeometries).Elements.field_0x8 !=
      *(int *)&(this->ReferencedGeometries).Elements.field_0x34) {
    FVar3 = (this->ReferencedGeometries).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->ReferencedGeometries).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((this->ReferencedGeometries).HashSize - 1U & param_1->RayTracingGeometryHandle)
                    * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ReferencedGeometries).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_1->RayTracingGeometryHandle)
        goto LAB_1484781ec;
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_1484781ec:
  return iVar2 != -1;
}

// IsGeometryVisible @ 148478200

bool __thiscall
FRayTracingGeometryManager::IsGeometryVisible(FRayTracingGeometryManager *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->VisibleGeometryHandles).Elements.field_0x8 !=
      *(int *)&(this->VisibleGeometryHandles).Elements.field_0x34) {
    FVar3 = (this->VisibleGeometryHandles).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->VisibleGeometryHandles).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->VisibleGeometryHandles).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->VisibleGeometryHandles).Elements;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0xc) == param_1) goto LAB_14847825f;
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14847825f:
  return iVar2 != -1;
}

// MakeGeometryResident @ 1484795e0

void __thiscall
FRayTracingGeometryManager::MakeGeometryResident
          (FRayTracingGeometryManager *this,FRHICommandList *param_1,FRegisteredGeometry *param_2)

{
  FRayTracingGeometry::MakeResident(param_2->Geometry,param_1);
  param_2->bEvicted = false;
  return;
}

// MakeResidentAllGeometries @ 148479610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::MakeResidentAllGeometries
          (FRayTracingGeometryManager *this,FRHICommandList *param_1)

{
  undefined1 *puVar1;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator> *pTVar2
  ;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FName FVar6;
  code *pcVar7;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator> *pTVar8
  ;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  FNameEntryId FVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  uint local_res20;
  uint uStackX_24;
  int local_b8;
  uint uStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  int local_70;
  int local_68 [2];
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
  *local_60;
  FName local_58;
  FStatMessage local_50;
  FName local_40;
  
  uStack_b4 = 1;
  pTVar2 = &this->RegisteredGeometries;
  local_b8 = 0;
  iVar4 = *(int *)&(this->RegisteredGeometries).field_0x28;
  puVar1 = &(this->RegisteredGeometries).field_0x10;
  iStack_a4 = 0;
  iStack_a0 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->RegisteredGeometries).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar14 == 0) {
      iStack_a0 = iStack_a0 + 0x20;
      lVar12 = (longlong)local_b8;
      local_b8 = local_b8 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b8) goto LAB_1484796de;
      uVar14 = puVar18[lVar12 + 1];
    }
    uStack_b4 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (uint)lVar12;
    iStack_a4 = (local_res20 - 1) + iStack_a0;
    if (iVar4 < iStack_a4) {
LAB_1484796de:
      iStack_a4 = iVar4;
    }
  }
  uVar14 = *(uint *)&(this->RegisteredGeometries).field_0x28;
  local_70 = *(int *)&(this->RegisteredGeometries).field_0x8 -
             *(int *)&(this->RegisteredGeometries).field_0x34;
  local_90._padding_ = CONCAT44(uStack_b4,local_b8);
  local_90.CurrentBitIndex = iStack_a4;
  local_90.UnvisitedBitMask = 0xffffffff;
  local_90._28_4_ = uStack_9c;
  local_90.BaseBitIndex = iStack_a0;
  iVar16 = (int)uVar14 >> 5;
  uVar19 = uVar14 & 0xffffffe0;
  local_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_60 = pTVar2;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_60;
  uVar5 = *(uint *)&(this->RegisteredGeometries).field_0x28;
  if (uVar14 != uVar5) {
    puVar17 = *(undefined1 **)&(this->RegisteredGeometries).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar16;
      uVar19 = uVar19 + 0x20;
      iVar16 = iVar16 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1484797d0;
      uVar14 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_1484797d0:
  while( true ) {
    if (*(int *)&(this->RegisteredGeometries).field_0x8 -
        *(int *)&(this->RegisteredGeometries).field_0x34 != local_70) {
      `TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((local_90.CurrentBitIndex == uVar14) &&
        (local_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar8))
    break;
    plVar13 = (longlong *)(*(longlong *)pTVar2 + (longlong)local_90.CurrentBitIndex * 0x30);
    bVar9 = FRayTracingGeometry::IsEvicted((FRayTracingGeometry *)*plVar13);
    if (bVar9) {
      FRayTracingGeometry::MakeResident((FRayTracingGeometry *)*plVar13,param_1);
      *(byte *)((longlong)plVar13 + 0x2b) = *(byte *)((longlong)plVar13 + 0x2b) & 0xfe;
    }
    bVar9 = RequestRayTracingGeometryStreamIn(this,param_1,*(int *)(*plVar13 + 0xf8));
    if (!bVar9) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->PendingStreamingRequests,local_68,(bool *)(*plVar13 + 0xf8));
      FVar11 = StatPtr_STAT_RayTracingPendingStreamingRequests;
      if (StatPtr_STAT_RayTracingPendingStreamingRequests ==
          (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)0x0) {
        pFVar10 = ::FName::FName(&local_40,"STAT_RayTracingPendingStreamingRequests");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RayTracingPendingStreamingRequests,*pFVar10,
                            L"Pending Streaming Requests","STATGROUP_RayTracingGeometry",
                            "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,
                            false,MCR_Invalid);
      }
      FVar6 = *(FName *)FVar11;
      FVar15 = FVar6.ComparisonIndex.Value;
      uVar19 = FVar6.Number;
      local_res20 = FVar15.Value;
      uStackX_24 = uVar19;
      if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_50.NameAndInfo.Number = uVar19 & 0xffffafff | 0xa000;
        local_50.StatData.Pad[0] = '\x01';
        local_50.StatData.Pad[1] = '\0';
        local_50.StatData.Pad[2] = '\0';
        local_50.StatData.Pad[3] = '\0';
        local_50.StatData.Pad[4] = '\0';
        local_50.StatData.Pad[5] = '\0';
        local_50.StatData.Pad[6] = '\0';
        local_50.StatData.Pad[7] = '\0';
        local_58 = FVar6;
        local_50.NameAndInfo.Index.Value = FVar15.Value;
        FThreadStats::AddStatMessage(this_00,&local_50);
        FStatsTrace::Add(&local_58,1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
  }
  return;
}

// PreRender @ 14847ba40

void __thiscall FRayTracingGeometryManager::PreRender(FRayTracingGeometryManager *this)

{
  this->bRenderedFrame = true;
  return;
}

// ProcessBuildRequests @ 14847bbd0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::ProcessBuildRequests
          (FRayTracingGeometryManager *this,FRHIComputeCommandList *param_1,bool param_2)

{
  TArray<FRayTracingGeometryManager::FBuildRequest,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FBuildRequest *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FRayTracingGeometryBuildParams *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  float fVar11;
  ForElementType<unsigned_int> FVar12;
  bool bVar13;
  bool bVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator> *pTVar18;
  FBuildRequest *pFVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  ForElementType<unsigned_int> FVar25;
  TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator> *pTVar26;
  int iVar27;
  ForAnyElementType FVar28;
  bool bVar29;
  FIdentityFunctor local_res8;
  uint local_188;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182;
  undefined1 local_181;
  undefined1 local_180 [4];
  int local_17c;
  uint local_178;
  TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> local_170;
  FRHIComputeCommandList *local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  int local_148;
  uint uStack_144;
  undefined1 *puStack_140;
  undefined4 local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  uint uStack_124;
  undefined1 *puStack_120;
  undefined4 local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  ForElementType<unsigned_int> local_108;
  TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator> *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  int local_d8;
  TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  int local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator> *local_90;
  LPCRITICAL_SECTION local_88;
  FRayTracingGeometryBuildParams *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> local_68 [2];
  
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1309,"FRayTracingGeometryManager::ProcessBuildRequests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
               ,0x51d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1309);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->RequestCS;
  local_88 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)&(this->GeometryBuildRequests).field_0x8 !=
      *(int *)&(this->GeometryBuildRequests).field_0x34) {
    if (((this->BuildParams).ArrayNum != 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("BuildParams.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                            ,0x526,
                            L"Unexpected entries in BuildParams. The array should\'ve been reset at the end of the previous call."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((this->SortedRequests).ArrayNum != 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("SortedRequests.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                            ,0x527,
                            L"Unexpected entries in SortedRequests. The array should\'ve been reset at the end of the previous call."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    piVar2 = &(this->BuildParams).ArrayMax;
    uVar17 = *(int *)&(this->GeometryBuildRequests).field_0x8 -
             *(int *)&(this->GeometryBuildRequests).field_0x34;
    local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((int)uVar17 < *piVar2) {
      uVar17 = *piVar2;
    }
    local_170.ArrayNum = 0;
    local_170.ArrayMax = 0;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    DestructItems<FRayTracingGeometryBuildParams,int>
              ((FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data,
               (this->BuildParams).ArrayNum);
    (this->BuildParams).ArrayNum = 0;
    if ((this->BuildParams).ArrayMax != uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar17,&(this->BuildParams).AllocatorInstance,0,piVar2);
    }
    pTVar1 = &this->SortedRequests;
    if (GRayTracingMaxBuiltPrimitivesPerFrame < 1) {
      piVar2 = &(this->SortedRequests).ArrayMax;
      (this->SortedRequests).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
      uStack_144 = 1;
      pTVar26 = &this->GeometryBuildRequests;
      local_148 = 0;
      iVar21 = *(int *)&(this->GeometryBuildRequests).field_0x28;
      puStack_140 = &(this->GeometryBuildRequests).field_0x10;
      iStack_134 = 0;
      iStack_130 = 0;
      if (iVar21 != 0) {
        puVar24 = *(uint **)&(this->GeometryBuildRequests).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)puStack_140;
        }
        uVar17 = *puVar24;
        iStack_130 = 0;
        local_148 = 0;
        while (uVar17 == 0) {
          iStack_130 = iStack_130 + 0x20;
          lVar16 = (longlong)local_148;
          local_148 = local_148 + 1;
          if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < local_148)
          goto LAB_14847be38;
          uVar17 = puVar24[lVar16 + 1];
        }
        uStack_144 = -uVar17 & uVar17;
        uVar15 = (ulonglong)uStack_144 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_a0 = (int)lVar16;
        iStack_134 = local_a0 + -1 + iStack_130;
        if (iVar21 < iStack_134) {
LAB_14847be38:
          iStack_134 = iVar21;
        }
      }
      local_138 = 0xffffffff;
      uVar17 = *(uint *)&(this->GeometryBuildRequests).field_0x28;
      local_d8 = *(int *)&(this->GeometryBuildRequests).field_0x8 -
                 *(int *)&(this->GeometryBuildRequests).field_0x34;
      local_f8._padding_ = CONCAT44(uStack_144,local_148);
      iVar27 = (int)uVar17 >> 5;
      local_f8.CurrentBitIndex = iStack_134;
      local_f8.UnvisitedBitMask = 0xffffffff;
      local_f8._28_4_ = uStack_12c;
      local_f8.BaseBitIndex = iStack_130;
      uVar20 = uVar17 & 0xffffffe0;
      local_100 = pTVar26;
      local_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_140;
      if ((((int)uVar17 < 0) || (iVar21 < (int)uVar17)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar22 = *(uint *)&(this->GeometryBuildRequests).field_0x28;
      if (uVar17 != uVar22) {
        puVar23 = *(undefined1 **)&(this->GeometryBuildRequests).field_0x20;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = &(this->GeometryBuildRequests).field_0x10;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar27 * 4);
        while (uVar17 == 0) {
          lVar16 = (longlong)iVar27;
          uVar20 = uVar20 + 0x20;
          iVar27 = iVar27 + 1;
          uVar17 = uVar22;
          if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
          goto LAB_14847bf47;
          uVar17 = *(uint *)(puVar23 + lVar16 * 4 + 4);
        }
        uVar15 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_9c = (int)lVar16;
        uVar17 = local_9c + -1 + uVar20;
        if ((int)uVar22 < (int)uVar17) {
          uVar17 = uVar22;
        }
      }
LAB_14847bf47:
      pTVar18 = pTVar26;
      while( true ) {
        if (*(int *)&pTVar18->field_0x8 - *(int *)&pTVar18->field_0x34 != local_d8) {
          local_184 = 0;
          `TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator>::
          TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_184);
        }
        if (((local_f8.CurrentBitIndex == uVar17) &&
            (local_f8.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->GeometryBuildRequests).field_0x10)) &&
           (pTVar18 == pTVar26)) break;
        SetupBuildParams(this,(FBuildRequest *)
                              (*(longlong *)pTVar18 + (longlong)local_f8.CurrentBitIndex * 0x18),
                         &this->BuildParams,&local_170,false);
        local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
        pTVar18 = local_100;
      }
      *(undefined4 *)&(this->GeometryBuildRequests).field_0x8 = 0;
      if (*(int *)&(this->GeometryBuildRequests).field_0xc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)pTVar26,0,
                   (int *)&(this->GeometryBuildRequests).field_0xc);
      }
      *(undefined4 *)&(this->GeometryBuildRequests).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->GeometryBuildRequests).field_0x34 = 0;
      *(undefined4 *)&(this->GeometryBuildRequests).field_0x28 = 0;
    }
    else {
      uVar17 = (this->SortedRequests).ArrayMax;
      uVar20 = *(int *)&(this->GeometryBuildRequests).field_0x8 -
               *(int *)&(this->GeometryBuildRequests).field_0x34;
      if ((int)uVar20 < (int)uVar17) {
        uVar20 = uVar17;
      }
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      (this->SortedRequests).ArrayNum = 0;
      if (uVar17 != uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar20,&pTVar1->AllocatorInstance,0,&(this->SortedRequests).ArrayMax);
      }
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1345,"SortRequests",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                   ,0x541);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1345);
      }
      local_90 = &this->GeometryBuildRequests;
      uStack_124 = 1;
      iVar21 = *(int *)&(this->GeometryBuildRequests).field_0x28;
      puStack_120 = &(this->GeometryBuildRequests).field_0x10;
      local_128 = 0;
      iStack_114 = 0;
      iStack_110 = 0;
      if (iVar21 != 0) {
        puVar24 = *(uint **)&(this->GeometryBuildRequests).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)puStack_120;
        }
        uVar17 = *puVar24;
        iStack_110 = 0;
        local_128 = 0;
        while (uVar17 == 0) {
          iStack_110 = iStack_110 + 0x20;
          lVar16 = (longlong)local_128;
          local_128 = local_128 + 1;
          if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < local_128)
          goto LAB_14847c138;
          uVar17 = puVar24[lVar16 + 1];
        }
        uStack_124 = -uVar17 & uVar17;
        uVar15 = (ulonglong)uStack_124 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_98 = (int)lVar16;
        iStack_114 = local_98 + -1 + iStack_110;
        if (iVar21 < iStack_114) {
LAB_14847c138:
          iStack_114 = iVar21;
        }
      }
      local_118 = 0xffffffff;
      pTVar26 = &this->GeometryBuildRequests;
      local_a8 = *(int *)&(this->GeometryBuildRequests).field_0x8 -
                 *(int *)&(this->GeometryBuildRequests).field_0x34;
      local_c8._padding_ = CONCAT44(uStack_124,local_128);
      local_188 = *(uint *)&(this->GeometryBuildRequests).field_0x28;
      local_c8.CurrentBitIndex = iStack_114;
      local_c8.UnvisitedBitMask = 0xffffffff;
      local_c8._28_4_ = uStack_10c;
      local_c8.BaseBitIndex = iStack_110;
      local_17c = (int)local_188 >> 5;
      local_178 = local_188 & 0xffffffe0;
      local_108 = (ForElementType<unsigned_int>)puStack_120;
      local_d0 = pTVar26;
      local_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_120;
      if ((((int)local_188 < 0) || (iVar21 < (int)local_188)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar18 = local_90;
      FVar12 = local_108;
      uVar17 = *(int *)((longlong)local_108 + 0x18);
      if (local_188 != uVar17) {
        FVar25 = *(ForElementType<unsigned_int> *)((longlong)local_108 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_108 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar25 = local_108;
        }
        uVar20 = -1 << ((byte)local_188 & 0x1f) &
                 *(uint *)((longlong)FVar25 + (longlong)local_17c * 4);
        iVar21 = local_17c;
        uVar22 = local_178;
        while (uVar20 == 0) {
          lVar16 = (longlong)iVar21;
          uVar22 = uVar22 + 0x20;
          iVar21 = iVar21 + 1;
          local_188 = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_14847c251;
          uVar20 = *(uint *)((undefined1 *)((longlong)FVar25 + 4) + lVar16 * 4);
        }
        uVar15 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_94 = (int)lVar16;
        local_188 = (uVar22 - 1) + local_94;
        if ((int)uVar17 < (int)local_188) {
          local_188 = uVar17;
        }
      }
LAB_14847c251:
      while( true ) {
        if (*(int *)&pTVar26->field_0x8 - *(int *)&pTVar26->field_0x34 != local_a8) {
          local_183 = 0;
          `TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator>::
          TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_183);
        }
        if (((local_c8.CurrentBitIndex == local_188) &&
            ((ForElementType<unsigned_int>)local_c8.Array == FVar12)) && (pTVar26 == pTVar18))
        break;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar4 = (FScriptContainerElement *)
                 (*(longlong *)pTVar26 + (longlong)local_c8.CurrentBitIndex * 0x18);
        if (((pFVar5 <= pFVar4) &&
            (pFVar4 < pFVar5 + (longlong)(this->SortedRequests).ArrayMax * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar21 = (this->SortedRequests).ArrayNum;
        piVar2 = &(this->SortedRequests).ArrayMax;
        if (iVar21 == *piVar2) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->SortedRequests).ArrayNum = iVar21 + 1;
        uVar10 = *(undefined8 *)(pFVar4 + 8);
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        pFVar5 = pFVar6 + (longlong)iVar21 * 0x18;
        *(undefined8 *)pFVar5 = *(undefined8 *)pFVar4;
        *(undefined8 *)(pFVar5 + 8) = uVar10;
        *(undefined8 *)(pFVar6 + (longlong)iVar21 * 0x18 + 0x10) = *(undefined8 *)(pFVar4 + 0x10);
        local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
        pTVar26 = local_d0;
      }
      local_res8 = SUB81(this,0);
      AlgoImpl::
      IntroSortInternal<FRayTracingGeometryManager::FBuildRequest,int,FIdentityFunctor,TDereferenceWrapper<FRayTracingGeometryManager::FBuildRequest,_FRayTracingGeometryManager::ProcessBuildRequests_::__l33::<lambda_1>_>_>
                ((FBuildRequest *)(this->SortedRequests).AllocatorInstance.Data,
                 (this->SortedRequests).ArrayNum,local_res8,(<lambda_1> *)&local_181);
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      fVar11 = __real_3f800000;
      iVar21 = (this->SortedRequests).ArrayNum;
      uVar15 = 0;
      pFVar19 = (FBuildRequest *)(this->SortedRequests).AllocatorInstance.Data;
      bVar13 = true;
      pFVar3 = pFVar19 + iVar21;
      while( true ) {
        if ((this->SortedRequests).ArrayNum != iVar21) {
          local_182 = 0;
          `TCheckedPointerIterator<FRayTracingGeometryManager::FBuildRequest,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_182);
        }
        if (pFVar19 == pFVar3) break;
        if ((bVar13) || (fVar11 <= pFVar19->BuildPriority)) {
          SetupBuildParams(this,pFVar19,&this->BuildParams,&local_170,true);
          uVar15 = uVar15 + (pFVar19->Owner->Initializer).TotalPrimitiveCount;
          if ((!param_2) && ((ulonglong)(longlong)GRayTracingMaxBuiltPrimitivesPerFrame < uVar15)) {
            bVar13 = false;
          }
          pFVar19 = pFVar19 + 1;
        }
        else {
          pFVar19->BuildPriority =
               pFVar19->BuildPriority + GRayTracingPendingBuildPriorityBoostPerFrame;
          pFVar19 = pFVar19 + 1;
        }
      }
      (this->SortedRequests).ArrayNum = 0;
      if ((this->SortedRequests).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->SortedRequests).AllocatorInstance,0,
                   &(this->SortedRequests).ArrayMax);
      }
    }
    iVar21 = (this->BuildParams).ArrayNum;
    if (iVar21 != 0) {
      local_78 = (FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data;
      if ((iVar21 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_68[0]._12_4_ = uStack_6c;
      local_68[0].ArrayNum = iVar21;
      local_68[0].DataPtr = local_78;
      iStack_70 = iVar21;
      FRHIComputeCommandList::BuildAccelerationStructures(param_1,local_68);
    }
    pFVar7 = (FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data;
    iVar21 = (this->BuildParams).ArrayNum;
    if ((this->BuildParams).ArrayMax < 0) {
      DestructItems<FRayTracingGeometryBuildParams,int>(pFVar7,iVar21);
      (this->BuildParams).ArrayNum = 0;
      if ((this->BuildParams).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->BuildParams).AllocatorInstance,0,&(this->BuildParams).ArrayMax);
      }
    }
    else {
      DestructItems<FRayTracingGeometryBuildParams,int>(pFVar7,iVar21);
      (this->BuildParams).ArrayNum = 0;
    }
    iVar21 = local_170.ArrayNum;
    uVar15 = (ulonglong)local_170.ArrayNum;
    pFVar4 = local_170.AllocatorInstance.Data + uVar15 * 8;
    FVar28.Data = local_170.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar15 != iVar21) {
        `TCheckedPointerIterator<FRayTracingGeometry_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_180);
      }
      lpCriticalSection = local_88;
      if (FVar28.Data == pFVar4) break;
      lVar16 = *(longlong *)&this->RegisteredGeometries;
      iVar27 = *(int *)(*(longlong *)FVar28.Data + 0xf8);
      local_158.Data = (FScriptContainerElement *)0x0;
      local_150 = 0;
      local_160 = param_1;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,1,&local_158,0,(int *)((longlong)&local_150 + 4));
      plVar8 = *(longlong **)(lVar16 + 0x18 + (longlong)iVar27 * 0x30);
      (**(code **)(*plVar8 + 0x48))(plVar8,&local_160);
      if ((int)local_150 != 0) {
        (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_160,&local_158);
      }
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      uVar15 = local_170._8_8_ & 0xffffffff;
      FVar28.Data = FVar28.Data + 8;
    }
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessCompletedStreamingRequests @ 14847c850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::ProcessCompletedStreamingRequests
          (FRayTracingGeometryManager *this,FRHICommandList *param_1)

{
  int *piVar1;
  long64 *plVar2;
  BufCore *pBVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ForElementType<FSetElementId> FVar7;
  FName FVar8;
  code *pcVar9;
  int iVar10;
  TConsoleVariableData<bool> *pTVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_RayTracingInflightStreamingRequests> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar18;
  ForElementType<FSetElementId> FVar19;
  FScriptContainerElement *pFVar20;
  FIoBuffer this_02;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  FName local_res20;
  FIoBuffer local_c8;
  FIoBuffer local_c0;
  FRHICommandList *local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  FStatMessage local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  FName local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  FString local_58;
  
  bVar12 = IsRayTracingUsingReferenceBasedResidency();
  pTVar11 = CVarRayTracingOnDemandGeometryBuffersStreaming.Ref;
  if (bVar12) {
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pTVar11->ShadowedValue[1] != false) {
      bVar12 = true;
      goto LAB_14847c8ca;
    }
  }
  bVar12 = false;
LAB_14847c8ca:
  iVar22 = 0;
  iVar23 = 0;
  iVar10 = ((this->NextStreamingRequestIndex - this->NumStreamingRequests) +
           GRayTracingStreamingMaxPendingRequests) % GRayTracingStreamingMaxPendingRequests;
  if (0 < this->NumStreamingRequests) {
    do {
      uVar18 = (iVar10 + iVar23) % GRayTracingStreamingMaxPendingRequests;
      uVar14 = 0;
      if ((int)uVar18 < (this->StreamingRequests).ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar20 = (this->StreamingRequests).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x20;
      if (((*(int *)&pFVar20[0x10].field_0x0 == -1) &&
          (pFVar20[0x19] == (FScriptContainerElement)0x0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("PendingRequest.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                              ,0x478,L"Pending streaming request should be valid."), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((*(longlong **)&pFVar20[8].field_0x0 == (longlong *)0x0) ||
         (uVar14 = (**(code **)(**(longlong **)&pFVar20[8].field_0x0 + 0x20))(), uVar14 < 2)) break;
      iVar22 = iVar22 + 1;
      plVar2 = &this->TotalStreamingSize;
      *plVar2 = *plVar2 - (ulonglong)*(uint *)(pFVar20 + 0x14);
      if ((*plVar2 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TotalStreamingSize >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                              ,0x47f,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (pFVar20[0x19] == (FScriptContainerElement)0x0) {
        plVar21 = (longlong *)
                  ((longlong)*(int *)&pFVar20[0x10].field_0x0 * 0x30 +
                  *(longlong *)&this->RegisteredGeometries);
        *(undefined2 *)(plVar21 + 5) = 0xffff;
        iVar15 = ((FRayTracingGeometry *)*plVar21)->GroupHandle;
        lVar4 = *(longlong *)&this->RegisteredGroups;
        bVar13 = FRayTracingGeometry::IsEvicted((FRayTracingGeometry *)*plVar21);
        if ((!bVar13) &&
           ((int)(uint)*(byte *)((longlong)iVar15 * 0x70 + lVar4 + 0x68) <=
            (int)*(char *)(*plVar21 + 0xe4))) {
          if ((*(longlong **)&pFVar20[8].field_0x0 == (longlong *)0x0) ||
             (iVar15 = (**(code **)(**(longlong **)&pFVar20[8].field_0x0 + 0x20))(), iVar15 != 2)) {
            if (2 < (byte)LogRayTracingGeometryManager._0_1_) {
              FDebugName::ToString((FDebugName *)(*plVar21 + 200),&local_58);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogRayTracingGeometryManager);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            puVar5 = *(undefined8 **)&pFVar20->field_0x0;
            uVar6 = *puVar5;
            uStack_60 = *(undefined4 *)(puVar5 + 1);
            local_88._0_4_ = (undefined4)uVar6;
            local_88._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_80._4_4_ = (uint)*(byte *)(puVar5 + 3);
            local_68 = (undefined4)local_88;
            uStack_64 = local_88._4_4_;
            uStack_5c = uStack_80._4_4_;
            local_88 = uVar6;
            uStack_80 = (ulonglong)CONCAT14(*(byte *)(puVar5 + 3),uStack_60);
            (**(code **)(*(longlong *)plVar21[3] + 0x30))
                      ((longlong *)plVar21[3],param_1,&local_68,pFVar20[0x18].field_0x0);
            if (((GRHIGlobals.RayTracing.SupportsShaders == false) &&
                (GRHIGlobals.RayTracing.RequiresInlineRayTracingSBT == false)) && (bVar12)) {
              if (*(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x8 !=
                  *(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x34) {
                FVar7 = (this->ReferencedGeometryGroupsForDynamicUpdate).Hash.SecondaryData;
                FVar19 = (ForElementType<FSetElementId>)
                         &(this->ReferencedGeometryGroupsForDynamicUpdate).Hash;
                if (FVar7 != (ForElementType<FSetElementId>)0x0) {
                  FVar19 = FVar7;
                }
                iVar15 = *(int *)((longlong)FVar19 +
                                 (ulonglong)
                                 ((this->ReferencedGeometryGroupsForDynamicUpdate).HashSize - 1U &
                                 *(uint *)(*plVar21 + 0xe0)) * 4);
                if (iVar15 != -1) {
                  lVar4 = *(longlong *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements;
                  do {
                    if (*(uint *)(lVar4 + (longlong)iVar15 * 0xc) == *(uint *)(*plVar21 + 0xe0))
                    goto LAB_14847cc9a;
                    iVar15 = *(int *)(lVar4 + 4 + (longlong)iVar15 * 0xc);
                  } while (iVar15 != -1);
                }
              }
              bVar13 = FRayTracingGeometry::HasPendingBuildRequest((FRayTracingGeometry *)*plVar21);
              if (bVar13) {
                *(undefined1 *)
                 (*(longlong *)&this->GeometryBuildRequests + 0x14 +
                 (longlong)*(int *)(*plVar21 + 0xf4) * 0x18) = 1;
                *(undefined1 *)((longlong)plVar21 + 0x2a) = 2;
                goto LAB_14847ccef;
              }
              local_b0.Data = (FScriptContainerElement *)0x0;
              local_a8 = 0;
              local_b8 = param_1;
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,1,&local_b0,0,(int *)((longlong)&local_a8 + 4));
              (**(code **)(*(longlong *)plVar21[3] + 0x48))((longlong *)plVar21[3],&local_b8);
              if ((int)local_a8 != 0) {
                (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_b8);
              }
              if (local_b0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data);
              }
            }
LAB_14847cc9a:
            *(undefined1 *)((longlong)plVar21 + 0x2a) = 2;
          }
        }
LAB_14847ccef:
        pFVar20[0x19] = (FScriptContainerElement)0x0;
        *(undefined4 *)&pFVar20[0x10].field_0x0 = 0xffffffff;
        if (((*(longlong **)&pFVar20[8].field_0x0 != (longlong *)0x0) &&
            (iVar15 = (**(code **)(**(longlong **)&pFVar20[8].field_0x0 + 0x20))(), iVar15 == 1)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Request.IsPending()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\RayTracingGeometryManager.h"
                                ,0xa9,
                                L"Can\'t cancel ray tracing geometry streaming request that is still in-flight."
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar21 = *(longlong **)&pFVar20[8].field_0x0;
        if (plVar21 != (longlong *)0x0) {
          *(undefined8 *)&pFVar20[8].field_0x0 = 0;
          (**(code **)(*plVar21 + 0x10))();
        }
        FIoBuffer::FIoBuffer(&local_c0);
        this_02.CorePtr.Reference = local_c0.CorePtr.Reference;
        if (pFVar20 != (FScriptContainerElement *)&local_c0) {
          pBVar3 = *(BufCore **)&pFVar20->field_0x0;
          *(TRefCountPtr<FIoBuffer::BufCore> *)&pFVar20->field_0x0 = local_c0.CorePtr.Reference;
          local_c0.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
          this_02.CorePtr.Reference =
               (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
          if (pBVar3 != (BufCore *)0x0) {
            FIoBuffer::BufCore::CheckRefCount(pBVar3);
            LOCK();
            piVar1 = &pBVar3->NumRefs;
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            this_02.CorePtr.Reference = local_c0.CorePtr.Reference;
            if (iVar15 == 1) {
              FIoBuffer::BufCore::~BufCore(pBVar3);
              ::operator_delete(pBVar3,0x20);
              this_02.CorePtr.Reference = local_c0.CorePtr.Reference;
            }
          }
        }
      }
      else {
        *(undefined4 *)&pFVar20[0x10].field_0x0 = 0xffffffff;
        pFVar20[0x19] = (FScriptContainerElement)0x0;
        if (((*(longlong **)&pFVar20[8].field_0x0 != (longlong *)0x0) &&
            (iVar15 = (**(code **)(**(longlong **)&pFVar20[8].field_0x0 + 0x20))(), iVar15 == 1)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Request.IsPending()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\RayTracingGeometryManager.h"
                                ,0xa9,
                                L"Can\'t cancel ray tracing geometry streaming request that is still in-flight."
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar21 = *(longlong **)&pFVar20[8].field_0x0;
        if (plVar21 != (longlong *)0x0) {
          *(undefined8 *)&pFVar20[8].field_0x0 = 0;
          (**(code **)(*plVar21 + 0x10))();
        }
        FIoBuffer::FIoBuffer(&local_c8);
        this_02.CorePtr.Reference = local_c8.CorePtr.Reference;
        if (pFVar20 != (FScriptContainerElement *)&local_c8) {
          pBVar3 = *(BufCore **)&pFVar20->field_0x0;
          *(TRefCountPtr<FIoBuffer::BufCore> *)&pFVar20->field_0x0 = local_c8.CorePtr.Reference;
          local_c8.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
          this_02.CorePtr.Reference =
               (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
          if (pBVar3 != (BufCore *)0x0) {
            FIoBuffer::BufCore::CheckRefCount(pBVar3);
            LOCK();
            piVar1 = &pBVar3->NumRefs;
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            this_02.CorePtr.Reference = local_c8.CorePtr.Reference;
            if (iVar15 == 1) {
              FIoBuffer::BufCore::~BufCore(pBVar3);
              ::operator_delete(pBVar3,0x20);
              this_02.CorePtr.Reference = local_c8.CorePtr.Reference;
            }
          }
        }
      }
      if (this_02.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)this_02.CorePtr.Reference);
        LOCK();
        piVar1 = &((BufCore *)this_02.CorePtr.Reference)->NumRefs;
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)this_02.CorePtr.Reference);
          ::operator_delete((void *)this_02.CorePtr.Reference,0x20);
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < this->NumStreamingRequests);
  }
  this->NumStreamingRequests = this->NumStreamingRequests - iVar22;
  FVar17 = StatPtr_STAT_RayTracingInflightStreamingRequests;
  if (StatPtr_STAT_RayTracingInflightStreamingRequests ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingInflightStreamingRequests>)0x0) {
    pFVar16 = ::FName::FName(local_78,"STAT_RayTracingInflightStreamingRequests");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_RayTracingInflightStreamingRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RayTracingInflightStreamingRequests,*pFVar16,
                        L"In-flight Streaming Requests","STATGROUP_RayTracingGeometry",
                        "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar8 = *(FName *)FVar17;
  iVar10 = this->NumStreamingRequests;
  if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_a0.NameAndInfo.Number = FVar8.Number & 0xffff8fff | 0x8000;
    local_res20 = FVar8;
    local_a0.StatData.Pad = (uchar  [8])(longlong)iVar10;
    local_a0.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_a0);
    FStatsTrace::Set(&local_res20,(longlong)iVar10);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// RefreshAlwaysResidentRayTracingGeometries @ 148480490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::RefreshAlwaysResidentRayTracingGeometries
          (FRayTracingGeometryManager *this,FRHICommandList *param_1)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  FRayTracingGeometry *pFVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests> FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
  *pTVar17;
  FRegisteredGeometry *pFVar18;
  ForElementType<unsigned_int> FVar19;
  uint *puVar20;
  uint uVar21;
  FNameEntryId FVar22;
  undefined1 local_res20 [8];
  uint local_c8 [2];
  uint local_c0;
  uint uStack_bc;
  ForElementType<unsigned_int> local_b8;
  int local_b0;
  uint uStack_ac;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  int local_68;
  int local_60;
  int local_5c;
  FName local_58;
  FStatMessage local_50;
  FName local_40;
  
  bVar8 = IsRayTracingUsingReferenceBasedResidency();
  if (bRefreshAlwaysResidentRayTracingGeometries != false) {
    this_00 = &this->AlwaysResidentGeometries;
    bRefreshAlwaysResidentRayTracingGeometries = false;
    bVar9 = 1 < (this->AlwaysResidentGeometries).HashSize;
    if (!bVar9) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    }
    puVar1 = &(this->AlwaysResidentGeometries).Elements.field_0xc;
    *(undefined4 *)&(this->AlwaysResidentGeometries).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->AlwaysResidentGeometries).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->AlwaysResidentGeometries).Elements.field_0x34 = 0;
    iVar13 = *(int *)&(this->AlwaysResidentGeometries).Elements.field_0x2c;
    *(undefined4 *)&(this->AlwaysResidentGeometries).Elements.field_0x28 = 0;
    if ((iVar13 < 0) || (0x80 < iVar13)) {
      *(undefined4 *)&(this->AlwaysResidentGeometries).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->AlwaysResidentGeometries).Elements.field_0x10,0);
    }
    if (bVar9) {
      (this->AlwaysResidentGeometries).HashSize = 1;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
    pTVar17 = &this->RegisteredGeometries;
    this->TotalAlwaysResidentSize = 0;
    iVar13 = *(int *)&(this->RegisteredGeometries).field_0x28;
    local_b8 = (ForElementType<unsigned_int>)&(this->RegisteredGeometries).field_0x10;
    uStack_ac = 1;
    local_b0 = 0;
    iStack_9c = 0;
    iStack_98 = 0;
    if (iVar13 != 0) {
      puVar20 = *(uint **)&(this->RegisteredGeometries).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)local_b8;
      }
      uVar16 = *puVar20;
      iStack_98 = 0;
      local_b0 = 0;
      while (uVar16 == 0) {
        iStack_98 = iStack_98 + 0x20;
        lVar14 = (longlong)local_b0;
        local_b0 = local_b0 + 1;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b0) goto LAB_14848062e;
        uVar16 = (puVar20 + 1)[lVar14];
      }
      uStack_ac = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_c0 = (uint)lVar14;
      iStack_9c = (local_c0 - 1) + iStack_98;
      if (iVar13 < iStack_9c) {
LAB_14848062e:
        iStack_9c = iVar13;
      }
    }
    local_a0 = 0xffffffff;
    uVar16 = *(uint *)&(this->RegisteredGeometries).field_0x28;
    local_68 = *(int *)&(this->RegisteredGeometries).field_0x8 -
               *(int *)&(this->RegisteredGeometries).field_0x34;
    local_88._padding_ = CONCAT44(uStack_ac,local_b0);
    local_88.CurrentBitIndex = iStack_9c;
    local_88.UnvisitedBitMask = 0xffffffff;
    local_88._28_4_ = uStack_94;
    local_88.BaseBitIndex = iStack_98;
    iVar15 = (int)uVar16 >> 5;
    uVar21 = uVar16 & 0xffffffe0;
    puStack_a8 = (undefined1 *)local_b8;
    local_90 = pTVar17;
    local_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
    if ((((int)uVar16 < 0) || (iVar13 < (int)uVar16)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = *(int *)((longlong)local_b8 + 0x18);
    if (uVar16 != uVar4) {
      FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_b8 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_b8 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_b8;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar15 * 4);
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar15;
        uVar21 = uVar21 + 0x20;
        iVar15 = iVar15 + 1;
        uVar16 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_148480730;
        uVar16 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar14 * 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar16 = (int)lVar14 + -1 + uVar21;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
      }
    }
LAB_148480730:
    while( true ) {
      if (*(int *)&pTVar17->field_0x8 - *(int *)&pTVar17->field_0x34 != local_68) {
        `TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((local_88.CurrentBitIndex == uVar16) &&
          ((ForElementType<unsigned_int>)local_88.Array == local_b8)) &&
         (pTVar17 == &this->RegisteredGeometries)) break;
      pFVar18 = (FRegisteredGeometry *)
                (*(longlong *)pTVar17 + (longlong)local_88.CurrentBitIndex * 0x30);
      pFVar5 = pFVar18->Geometry;
      if (pFVar5->GroupHandle == -1) {
        pFVar18->bAlwaysResident = false;
      }
      else {
        cVar3 = pFVar5->LODIndex;
        bVar12 = 0;
        iVar13 = *(int *)((longlong)pFVar5->GroupHandle * 0x70 + 0x10 +
                         *(longlong *)&this->RegisteredGroups) - GRayTracingNumAlwaysResidentLODs;
        if (iVar13 <= cVar3) {
          bVar12 = 2;
        }
        pFVar18->field_0x2b = bVar12 | pFVar18->field_0x2b & 0xfd;
        if (cVar3 < iVar13) {
          if ((bVar8) &&
             ((pFVar5->RayTracingGeometryRHI).Reference != (FRHIRayTracingGeometry *)0x0)) {
            EvictGeometry(this,(FRHICommandListBase *)param_1,pFVar18);
          }
        }
        else {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (this_00,&local_60,(bool *)&pFVar5->RayTracingGeometryHandle);
          this->TotalAlwaysResidentSize = this->TotalAlwaysResidentSize + (ulonglong)pFVar18->Size;
          bVar9 = FRayTracingGeometry::IsEvicted(pFVar18->Geometry);
          if (bVar9) {
            FRayTracingGeometry::MakeResident(pFVar18->Geometry,param_1);
            pFVar18->bEvicted = false;
          }
          bVar9 = RequestRayTracingGeometryStreamIn
                            (this,param_1,pFVar18->Geometry->RayTracingGeometryHandle);
          if (!bVar9) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&this->PendingStreamingRequests,&local_5c,
                       (bool *)&pFVar18->Geometry->RayTracingGeometryHandle);
            FVar11 = StatPtr_STAT_RayTracingPendingStreamingRequests;
            if (StatPtr_STAT_RayTracingPendingStreamingRequests ==
                (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)0x0) {
              pFVar10 = ::FName::FName(&local_40,"STAT_RayTracingPendingStreamingRequests");
              FVar11 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_RayTracingPendingStreamingRequests,*pFVar10,
                                  L"Pending Streaming Requests","STATGROUP_RayTracingGeometry",
                                  "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,
                                  false,false,MCR_Invalid);
            }
            FVar6 = *(FName *)FVar11;
            FVar22 = FVar6.ComparisonIndex.Value;
            uVar21 = FVar6.Number;
            local_c0 = FVar22.Value;
            uStack_bc = uVar21;
            if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_01 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_01 == (FThreadStats *)0x0) {
                this_02 = FThreadStatsPool::Get();
                this_01 = FThreadStatsPool::GetFromPool(this_02);
              }
              local_50.NameAndInfo.Number = uVar21 & 0xffffafff | 0xa000;
              local_50.StatData.Pad[0] = '\x01';
              local_50.StatData.Pad[1] = '\0';
              local_50.StatData.Pad[2] = '\0';
              local_50.StatData.Pad[3] = '\0';
              local_50.StatData.Pad[4] = '\0';
              local_50.StatData.Pad[5] = '\0';
              local_50.StatData.Pad[6] = '\0';
              local_50.StatData.Pad[7] = '\0';
              local_58 = FVar6;
              local_50.NameAndInfo.Index.Value = FVar22.Value;
              FThreadStats::AddStatMessage(this_01,&local_50);
              FStatsTrace::Add(&local_58,1);
              if (this_01->ScopeCount == 0) {
                FThreadStats::Flush(this_01,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_01,false,false);
              }
            }
          }
          local_c8[0] = pFVar18->Geometry->RayTracingGeometryHandle;
          if (*(int *)&(this->EvictableGeometries).Elements.field_0x8 !=
              *(int *)&(this->EvictableGeometries).Elements.field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->EvictableGeometries,local_c8[0],(int *)local_c8);
          }
        }
      }
      local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
      pTVar17 = local_90;
    }
  }
  return;
}

// RefreshRegisteredGeometry @ 148480a30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::RefreshRegisteredGeometry(FRayTracingGeometryManager *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  ForElementType<FSetElementId> FVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  int local_res10 [2];
  char local_res18;
  uint local_res20;
  int local_b8 [2];
  int local_b0 [2];
  int local_a8;
  int local_a4;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [40];
  undefined8 local_58;
  
  lpCriticalSection = &this->MainCS;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((-1 < param_1) && (param_1 < *(int *)&(this->RegisteredGeometries).field_0x28)) {
    if ((*(int *)&(this->RegisteredGeometries).field_0x28 <= param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar12 = *(undefined1 **)&(this->RegisteredGeometries).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->RegisteredGeometries).field_0x10;
    }
    if ((*(uint *)(puVar12 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (param_1 & 0x1fU) & 1) != 0) {
      lVar2 = *(longlong *)&this->RegisteredGeometries;
      lVar14 = (longlong)param_1 * 0x30;
      lVar3 = *(longlong *)(lVar14 + lVar2);
      local_res20 = *(uint *)(lVar14 + 0x10 + lVar2);
      iVar6 = *(int *)(lVar3 + 0x98);
      plVar10 = *(longlong **)(lVar3 + 0x90);
      plVar7 = plVar10 + (longlong)iVar6 * 5;
      local_a0 = plVar7;
      while( true ) {
        if (*(int *)(lVar3 + 0x98) != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
          plVar7 = local_a0;
        }
        if (plVar10 == plVar7) {
          puVar13 = (uint *)(lVar2 + 0x10 + lVar14);
          if (iVar6 < 1) goto LAB_148480b82;
          puVar8 = (uint *)(**(code **)(GDynamicRHI->_padding_ + 0x478))
                                     (GDynamicRHI,local_80,*(longlong *)(lVar14 + lVar2) + 0x70);
          local_58 = *(undefined8 *)(puVar8 + 4);
          lVar3 = *(longlong *)(lVar14 + lVar2);
          *puVar13 = *puVar8;
          if (((*(char *)(lVar3 + 0x86) != '\0') && (*(char *)(lVar3 + 0x84) == '\0')) &&
             (*(char *)(lVar3 + 0x85) == '\0')) {
            local_98 = 0xffffffffffffffff;
            local_90 = 0xffffffffffffffff;
            local_88 = 0xffffffffffffffff;
            if (((((*(int *)(lVar3 + 0xa8) == -1) && (*(int *)(lVar3 + 0xac) == -1)) &&
                 ((*(int *)(lVar3 + 0xb0) == -1 &&
                  ((*(int *)(lVar3 + 0xb4) == -1 && (*(int *)(lVar3 + 0xb8) == -1)))))) &&
                (*(int *)(lVar3 + 0xbc) == -1)) &&
               (GRHIGlobals.RayTracing.SupportsAccelerationStructureCompaction != false)) {
              *puVar13 = (uint)(longlong)((float)*puVar13 * GRayTracingApproximateCompactionRatio);
            }
          }
          goto LAB_148480b88;
        }
        if (*plVar10 == 0) break;
        plVar10 = plVar10 + 5;
      }
      puVar13 = (uint *)(lVar2 + 0x10 + lVar14);
LAB_148480b82:
      *puVar13 = 0;
LAB_148480b88:
      bVar5 = FRayTracingGeometry::IsEvicted(*(FRayTracingGeometry **)(lVar14 + lVar2));
      pbVar1 = (byte *)(lVar14 + 0x2b + lVar2);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(lVar14 + 0x2b + lVar2);
      *pbVar1 = *pbVar1 | bVar5;
      if ((*(byte *)(lVar14 + 0x2b + lVar2) & 2) == 0) {
        uVar11 = (ulonglong)local_res20;
      }
      else {
        if (*(int *)&(this->AlwaysResidentGeometries).Elements.field_0x8 !=
            *(int *)&(this->AlwaysResidentGeometries).Elements.field_0x34) {
          FVar9 = (this->AlwaysResidentGeometries).Hash.SecondaryData;
          if (FVar9 == (ForElementType<FSetElementId>)0x0) {
            FVar9 = (ForElementType<FSetElementId>)&(this->AlwaysResidentGeometries).Hash;
          }
          iVar6 = *(int *)((longlong)FVar9 +
                          (ulonglong)((this->AlwaysResidentGeometries).HashSize - 1U & param_1) * 4)
          ;
          if (iVar6 != -1) {
            lVar3 = *(longlong *)&(this->AlwaysResidentGeometries).Elements;
            do {
              if (*(int *)(lVar3 + (longlong)iVar6 * 0xc) == param_1) goto LAB_148480c31;
              iVar6 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0xc);
            } while (iVar6 != -1);
          }
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AlwaysResidentGeometries.Contains(Handle)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                           ,0x202,
                           L"Geometry with bAlwaysResident flag set should be in the AlwaysResidentGeometries set."
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_148480c31:
        uVar11 = (ulonglong)local_res20;
        this->TotalAlwaysResidentSize = this->TotalAlwaysResidentSize - uVar11;
        this->TotalAlwaysResidentSize = this->TotalAlwaysResidentSize + (ulonglong)*puVar13;
      }
      bVar5 = FRayTracingGeometry::IsValid(*(FRayTracingGeometry **)(lVar14 + lVar2));
      if ((bVar5) && ((*(byte *)(lVar14 + 0x2b + lVar2) & 1) == 0)) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->ResidentGeometries,&local_a8,(bool *)local_res10);
        if (local_res18 != '\0') {
          this->TotalResidentSize = this->TotalResidentSize - uVar11;
        }
        this->TotalResidentSize =
             this->TotalResidentSize + (ulonglong)*(uint *)(lVar14 + 0x10 + lVar2);
        if ((*(byte *)(lVar14 + 0x2b + lVar2) & 2) == 0) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&this->EvictableGeometries,&local_a4,(bool *)local_res10);
        }
      }
      else {
        local_b8[0] = param_1;
        if ((*(int *)&(this->ResidentGeometries).Elements.field_0x8 !=
             *(int *)&(this->ResidentGeometries).Elements.field_0x34) &&
           (iVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                              (&this->ResidentGeometries,param_1,local_b8), 0 < iVar6)) {
          this->TotalResidentSize = this->TotalResidentSize - uVar11;
        }
        local_b0[0] = param_1;
        if (*(int *)&(this->EvictableGeometries).Elements.field_0x8 !=
            *(int *)&(this->EvictableGeometries).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (&this->EvictableGeometries,param_1,local_b0);
        }
      }
      if (*(int *)&(this->AlwaysResidentGeometries).Elements.field_0x8 !=
          *(int *)&(this->AlwaysResidentGeometries).Elements.field_0x34) {
        FVar9 = (this->AlwaysResidentGeometries).Hash.SecondaryData;
        if (FVar9 == (ForElementType<FSetElementId>)0x0) {
          FVar9 = (ForElementType<FSetElementId>)&(this->AlwaysResidentGeometries).Hash;
        }
        iVar6 = *(int *)((longlong)FVar9 +
                        (ulonglong)((this->AlwaysResidentGeometries).HashSize - 1U & param_1) * 4);
        if (iVar6 != -1) {
          lVar3 = *(longlong *)&(this->AlwaysResidentGeometries).Elements;
          do {
            if (*(int *)(lVar3 + (longlong)iVar6 * 0xc) == param_1) {
              if ((((*(byte *)(lVar14 + 0x2b + lVar2) & 1) != 0) &&
                  (bVar5 = IsRayTracingEnabled(), bVar5)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!AlwaysResidentGeometries.Contains(Handle) || !RegisteredGeometry.bEvicted || !IsRayTracingEnabled()"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                                     ,0x225,L"Always resident geometries can\'t be evicted"), bVar5)
                 ) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              break;
            }
            iVar6 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0xc);
          } while (iVar6 != -1);
        }
      }
      if (*(char *)(*(longlong *)(lVar14 + lVar2) + 0x88) == '\x01') {
        *(undefined1 *)(lVar14 + 0x2a + lVar2) = 0;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148480ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RegisterProxyWithCachedRayTracingState @ 1484811b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::RegisterProxyWithCachedRayTracingState
          (FRayTracingGeometryManager *this,FPrimitiveSceneProxy *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  FPrimitiveSceneProxy *local_res10;
  FPrimitiveSceneProxy *local_res18;
  
  local_res10 = param_1;
  bVar2 = IsInRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x5a8,
                         L"Can only access RegisteredGroups on render thread otherwise need a critical section"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsRayTracingAllowed();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsRayTracingAllowed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x5a9,
                         L"Should only register proxies with FRayTracingGeometryManager when ray tracing is allowed"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((-1 < param_2) && (param_2 < *(int *)&(this->RegisteredGroups).field_0x28)) {
    if ((*(int *)&(this->RegisteredGroups).field_0x28 <= param_2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar7 = *(undefined1 **)&(this->RegisteredGroups).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->RegisteredGroups).field_0x10;
    }
    if ((*(uint *)(puVar7 + (ulonglong)((uint)param_2 >> 5) * 4) >> (param_2 & 0x1fU) & 1) != 0)
    goto LAB_1484812ab;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RegisteredGroups.IsValidIndex(InRayTracingGeometryGroupHandle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                     ,0x5aa,L"InRayTracingGeometryGroupHandle must be valid");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1484812ab:
  uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  lVar6 = (longlong)param_2 * 0x70 + *(longlong *)&this->RegisteredGroups;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)(lVar6 + 0x20) != *(int *)(lVar6 + 0x4c)) {
    lVar5 = *(longlong *)(lVar6 + 0x58);
    if (*(longlong *)(lVar6 + 0x58) == 0) {
      lVar5 = lVar6 + 0x50;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar6 + 0x60) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
    ;
    if (iVar3 != -1) {
      do {
        if (*(FPrimitiveSceneProxy **)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar3 * 0x10) ==
            local_res10) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ProxiesSet.Contains(Proxy)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                             ,0x5af,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        iVar3 = *(int *)(*(longlong *)(lVar6 + 0x18) + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  TSet<FPrimitiveSceneProxy_*,DefaultKeyFuncs<FPrimitiveSceneProxy_*,0>,FDefaultSetAllocator>::
  Emplace<FPrimitiveSceneProxy_*_const_&>
            ((TSet<FPrimitiveSceneProxy_*,DefaultKeyFuncs<FPrimitiveSceneProxy_*,0>,FDefaultSetAllocator>
              *)(lVar6 + 0x18),&local_res18,(bool *)&local_res10);
  *(int *)(lVar6 + 0x6c) = *(int *)(lVar6 + 0x6c) + 1;
  return;
}

// RegisterRayTracingGeometry @ 148481390

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FRayTracingGeometryManager::RegisterRayTracingGeometry
          (FRayTracingGeometryManager *this,FRayTracingGeometry *param_1)

{
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>
  *this_00;
  char cVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryCount> FVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint uVar20;
  FNameEntryId FVar21;
  int local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  int local_res18 [2];
  longlong local_res20;
  FName local_c8;
  FName local_c0;
  FStatMessage local_b8;
  FStatMessage local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FSparseArrayAllocationInfo local_68;
  FName local_58;
  FName local_50 [2];
  
  if ((param_1 == (FRayTracingGeometry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGeometry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x127,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  if (&this->MainCS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->MainCS);
  uStack_70 = 0xffff;
  this_00 = &this->RegisteredGeometries;
  local_98 = 0;
  iVar7 = *(int *)&(this->RegisteredGeometries).field_0x34;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (iVar7 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this_00,
                       (int *)&(this->RegisteredGeometries).field_0x8,
                       (int *)&(this->RegisteredGeometries).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredGeometries).field_0x10,
               false);
  }
  else {
    iVar8 = *(int *)&(this->RegisteredGeometries).field_0x30;
    iVar7 = iVar7 + -1;
    iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar8 * 0x30);
    *(int *)&(this->RegisteredGeometries).field_0x30 = iVar2;
    *(int *)&(this->RegisteredGeometries).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<48,8,FDefaultSparseArrayAllocator> *)this_00,&local_68,iVar8);
  if (local_68.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_68.Pointer = local_98;
    *(undefined8 *)((longlong)local_68.Pointer + 8) = uStack_90;
    *(ulonglong *)((longlong)local_68.Pointer + 0x10) = CONCAT44(uStack_84,local_88);
    *(undefined8 *)((longlong)local_68.Pointer + 0x18) = uStack_80;
    *(undefined8 *)((longlong)local_68.Pointer + 0x20) = local_78;
    *(ulonglong *)((longlong)local_68.Pointer + 0x28) = CONCAT44(uStack_6c,uStack_70);
  }
  lVar10 = (longlong)local_68.Index;
  local_res8[0] = local_68.Index;
  lVar18 = *(longlong *)&this_00->field_0x0;
  *(FRayTracingGeometry **)(lVar18 + lVar10 * 0x30) = param_1;
  local_res20 = lVar18 + lVar10 * 0x30;
  *(undefined8 *)(lVar18 + 8 + lVar10 * 0x30) = 0;
  uVar9 = param_1->GroupHandle;
  cVar1 = param_1->LODIndex;
  if (uVar9 == 0xffffffff) goto LAB_1484818c3;
  if (((int)uVar9 < 0) || (*(int *)&(this->RegisteredGroups).field_0x28 <= (int)uVar9)) {
LAB_148481577:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredGroups.IsValidIndex(GroupHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0x136,L"FRayTracingGeometry.GroupHandle must be valid");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  else {
    if ((*(int *)&(this->RegisteredGroups).field_0x28 <= (int)uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    puVar19 = *(undefined1 **)&(this->RegisteredGroups).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->RegisteredGroups).field_0x10;
    }
    if ((*(uint *)(puVar19 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) == 0) goto LAB_148481577;
  }
  lVar18 = (longlong)(int)uVar9 * 0x70 + *(longlong *)&this->RegisteredGroups;
  uVar9 = (uint)cVar1;
  if (((cVar1 < '\0') || (*(int *)(lVar18 + 0x10) <= (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODIndex >= 0 && LODIndex < Group.GeometryHandles.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x13a,
                         L"FRayTracingGeometry assigned to a group must have a valid LODIndex"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  uVar20 = (uint)cVar1;
  uVar16 = 0;
  if ((int)uVar9 < *(int *)(lVar18 + 0x10)) {
    uVar16 = ~uVar9 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  lVar10 = lVar18;
  if (*(longlong *)(lVar18 + 8) != 0) {
    lVar10 = *(longlong *)(lVar18 + 8);
  }
  if ((*(int *)(lVar10 + (longlong)cVar1 * 4) != -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Group.GeometryHandles[LODIndex] == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x13b,
                         L"Each LOD inside a FRayTracingGeometryGroup can only be associated with a single FRayTracingGeometry"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = local_res8[0];
  uVar9 = 0;
  if ((int)uVar20 < *(int *)(lVar18 + 0x10)) {
    uVar9 = ~uVar20 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  lVar10 = local_res20;
  lVar17 = lVar18;
  if (*(longlong *)(lVar18 + 8) != 0) {
    lVar17 = *(longlong *)(lVar18 + 8);
  }
  *(int *)(lVar17 + (longlong)cVar1 * 4) = iVar7;
  *(int *)(lVar18 + 0x6c) = *(int *)(lVar18 + 0x6c) + 1;
  cVar1 = param_1->LODIndex;
  iVar7 = *(int *)(lVar18 + 0x10) - GRayTracingNumAlwaysResidentLODs;
  *(byte *)(local_res20 + 0x2b) = *(byte *)(local_res20 + 0x2b) & 0xfd;
  bVar6 = 0;
  if (iVar7 <= cVar1) {
    bVar6 = 2;
  }
  *(byte *)(local_res20 + 0x2b) = *(byte *)(local_res20 + 0x2b) | bVar6;
  if (iVar7 <= cVar1) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->AlwaysResidentGeometries,(int *)&local_res10,(bool *)local_res8);
  }
  bVar5 = IsRayTracingEnabled();
  if (((bVar5) && ((int)(uint)*(byte *)(lVar18 + 0x68) <= (int)uVar20)) &&
     ((bVar5 = IsRayTracingUsingReferenceBasedResidency(), !bVar5 ||
      ((*(byte *)(lVar10 + 0x2b) & 2) != 0)))) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->PendingStreamingRequests,local_res18,(bool *)local_res8);
    FVar12 = StatPtr_STAT_RayTracingPendingStreamingRequests;
    if (StatPtr_STAT_RayTracingPendingStreamingRequests ==
        (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)0x0) {
      pFVar11 = ::FName::FName(&local_58,"STAT_RayTracingPendingStreamingRequests");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RayTracingPendingStreamingRequests,*pFVar11,
                          L"Pending Streaming Requests","STATGROUP_RayTracingGeometry",
                          "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false
                          ,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar12;
    FVar21 = FVar3.ComparisonIndex.Value;
    uVar9 = FVar3.Number;
    local_res10 = FVar21.Value;
    uStackX_14 = uVar9;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_b8.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
      local_b8.StatData.Pad[0] = '\x01';
      local_b8.StatData.Pad[1] = '\0';
      local_b8.StatData.Pad[2] = '\0';
      local_b8.StatData.Pad[3] = '\0';
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_c8 = FVar3;
      local_b8.NameAndInfo.Index.Value = FVar21.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_b8);
      FStatsTrace::Add(&local_c8,1);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
LAB_1484818c3:
  FVar15 = StatPtr_STAT_RayTracingGeometryCount;
  if (StatPtr_STAT_RayTracingGeometryCount ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryCount>)0x0) {
    pFVar11 = ::FName::FName(local_50,"STAT_RayTracingGeometryCount");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryCount,*pFVar11,
                        L"Geometry Count","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                        L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar15;
  uVar9 = FVar3.Number;
  FVar21 = FVar3.ComparisonIndex.Value;
  local_res10 = FVar21.Value;
  uStackX_14 = uVar9;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_a8.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
    local_a8.StatData.Pad[0] = '\x01';
    local_a8.StatData.Pad[1] = '\0';
    local_a8.StatData.Pad[2] = '\0';
    local_a8.StatData.Pad[3] = '\0';
    local_a8.StatData.Pad[4] = '\0';
    local_a8.StatData.Pad[5] = '\0';
    local_a8.StatData.Pad[6] = '\0';
    local_a8.StatData.Pad[7] = '\0';
    local_c0 = FVar3;
    local_a8.NameAndInfo.Index.Value = FVar21.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_a8);
    FStatsTrace::Add(&local_c0,1);
    if (pFVar13->ScopeCount == 0) {
      FThreadStats::Flush(pFVar13,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar13,false,false);
    }
  }
  (**(code **)(this->_padding_ + 0x58))(this,local_res8[0]);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->MainCS);
  return local_res8[0];
}

// RegisterRayTracingGeometryGroup @ 148481a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FRayTracingGeometryManager::RegisterRayTracingGeometryGroup
          (FRayTracingGeometryManager *this,uint param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSparseArray<FRayTracingGeometryManager::FRayTracingGeometryGroup,FDefaultSparseArrayAllocator>
  *this_00;
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryGroupCount> FVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStackY_148 [32];
  undefined4 local_e8 [2];
  FName local_e0;
  FStatMessage local_d8;
  FSparseArrayAllocationInfo local_c8;
  FName local_b8 [2];
  undefined1 local_a8 [24];
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  uchar local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lpCriticalSection = &this->MainCS;
  uVar11 = (ulonglong)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_80.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_80.MaxBits = _UNK_150631d94;
  uStack_60 = _UNK_150631d98;
  local_a8._8_8_ = (ForElementType<int>)0x0;
  local_a8._20_4_ = 2;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  local_40 = 0xff;
  local_3c = 0;
  local_e8[0] = 0xffffffff;
  if (-1 < (int)param_1) {
    local_a8._16_4_ = 0;
    if ((param_1 == 2) ||
       (UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,param_1,(ForElementType<int> *)local_a8,0,(int *)(local_a8 + 0x14)),
       0 < (int)param_1)) {
      do {
        FVar7 = (ForElementType<int>)local_a8;
        if ((ForElementType<int>)local_a8._8_8_ != (ForElementType<int>)0x0) {
          FVar7 = (ForElementType<int>)local_a8._8_8_;
        }
        if ((ulonglong)FVar7 <= local_e8) {
          FVar7 = (ForElementType<int>)local_a8;
          if ((ForElementType<int>)local_a8._8_8_ != (ForElementType<int>)0x0) {
            FVar7 = (ForElementType<int>)local_a8._8_8_;
          }
          if ((local_e8 < (undefined4 *)((longlong)FVar7 + (longlong)(int)local_a8._20_4_ * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
        }
        if (local_a8._16_4_ == local_a8._20_4_) {
          local_a8._16_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                         (0x404,(ForElementType<int> *)local_a8,(int *)(local_a8 + 0x14));
        }
        lVar10 = (longlong)(int)local_a8._16_4_;
        FVar7 = (ForElementType<int>)local_a8;
        if ((ForElementType<int>)local_a8._8_8_ != (ForElementType<int>)0x0) {
          FVar7 = (ForElementType<int>)local_a8._8_8_;
        }
        local_a8._16_4_ = local_a8._16_4_ + 1;
        *(undefined4 *)((longlong)FVar7 + lVar10 * 4) = local_e8[0];
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    this_00 = &this->RegisteredGroups;
    local_3c = 1;
    iVar5 = *(int *)&(this->RegisteredGroups).field_0x34;
    local_40 = (uchar)param_2;
    if (iVar5 == 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x70,8,1,(ForAnyElementType *)this_00,
                         (int *)&(this->RegisteredGroups).field_0x8,
                         (int *)&(this->RegisteredGroups).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredGroups).field_0x10,false)
      ;
    }
    else {
      iVar6 = *(int *)&(this->RegisteredGroups).field_0x30;
      iVar5 = iVar5 + -1;
      iVar1 = *(int *)((longlong)iVar6 * 0x70 + 4 + *(longlong *)&this_00->field_0x0);
      *(int *)&(this->RegisteredGroups).field_0x30 = iVar1;
      *(int *)&(this->RegisteredGroups).field_0x34 = iVar5;
      if (iVar5 != 0) {
        *(undefined4 *)((longlong)iVar1 * 0x70 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
      }
    }
    TSparseArrayBase<112,8,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<112,8,FDefaultSparseArrayAllocator> *)this_00,&local_c8,iVar6);
    if (local_c8.Pointer != (FRayTracingGeometryGroup *)0x0) {
      FRayTracingGeometryGroup::FRayTracingGeometryGroup
                (local_c8.Pointer,(FRayTracingGeometryGroup *)local_a8);
    }
    FVar9 = StatPtr_STAT_RayTracingGeometryGroupCount;
    if (StatPtr_STAT_RayTracingGeometryGroupCount ==
        (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryGroupCount>)0x0) {
      pFVar8 = ::FName::FName(local_b8,"STAT_RayTracingGeometryGroupCount");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryGroupCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryGroupCount,
                         *pFVar8,L"Geometry Group Count","STATGROUP_RayTracingGeometry",
                         "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar2 = *(FName *)FVar9;
    local_e0 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_d8.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_d8.StatData.Pad[0] = '\x01';
      local_d8.StatData.Pad[1] = '\0';
      local_d8.StatData.Pad[2] = '\0';
      local_d8.StatData.Pad[3] = '\0';
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_e0 = FVar2;
      local_d8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_d8);
      FStatsTrace::Add(&local_e0,1);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    uVar11 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    if ((int)uVar11 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_90,0,(int *)((longlong)&local_88 + 4));
    }
    iVar5 = local_80.MaxBits;
    uStack_60 = 0xffffffff;
    local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
    if (0x80 < (uint)iVar5) {
      local_80.NumBits = 0;
      local_80.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
    }
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    if ((ForElementType<int>)local_a8._8_8_ != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_a8._8_8_);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return local_c8.Index;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// ReleaseRayTracingGeometryGroup @ 148483950

void __thiscall
FRayTracingGeometryManager::ReleaseRayTracingGeometryGroup
          (FRayTracingGeometryManager *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->MainCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ReleaseRayTracingGeometryGroupReference(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148483995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReleaseRayTracingGeometryGroupReference @ 1484839b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::ReleaseRayTracingGeometryGroupReference
          (FRayTracingGeometryManager *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryGroupCount> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res10 [8];
  int local_res18 [4];
  FName local_58;
  FName local_50;
  FStatMessage local_48;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->RegisteredGroups).field_0x28)) {
    if (*(int *)&(this->RegisteredGroups).field_0x28 <= param_1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar10 = *(undefined1 **)&(this->RegisteredGroups).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->RegisteredGroups).field_0x10;
    }
    if ((*(uint *)(puVar10 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_148483a47;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("RegisteredGroups.IsValidIndex(Handle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                     ,0x10e,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_148483a47:
  piVar9 = (int *)((longlong)param_1 * 0x70 + *(longlong *)&this->RegisteredGroups);
  piVar8 = piVar9 + 0x1b;
  *piVar8 = *piVar8 + -1;
  if (*piVar8 == 0) {
    iVar2 = piVar9[4];
    piVar8 = *(int **)(piVar9 + 2);
    if (*(int **)(piVar9 + 2) == (int *)0x0) {
      piVar8 = piVar9;
    }
    piVar1 = piVar8 + iVar2;
    while( true ) {
      if (piVar9[4] != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (piVar8 == piVar1) break;
      if (*piVar8 != -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GeometryHandle == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                           ,0x118,
                           L"All FRayTracingGeometry in a group must be unregistered before releasing the group."
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      piVar8 = piVar8 + 1;
    }
    if (piVar9[8] != piVar9[0x13]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Group.ProxiesWithCachedRayTracingState.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x11b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TSparseArray<FRayTracingGeometryManager::FRayTracingGeometryGroup,FDefaultSparseArrayAllocator>
    ::RemoveAt(&this->RegisteredGroups,param_1,1);
    local_res8 = param_1;
    if (*(int *)&(this->ReferencedGeometryGroups).Elements.field_0x8 !=
        *(int *)&(this->ReferencedGeometryGroups).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&this->ReferencedGeometryGroups,param_1,(int *)&local_res8);
    }
    local_res18[0] = param_1;
    if (*(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x8 !=
        *(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&this->ReferencedGeometryGroupsForDynamicUpdate,param_1,local_res18);
    }
    FVar7 = StatPtr_STAT_RayTracingGeometryGroupCount;
    if (StatPtr_STAT_RayTracingGeometryGroupCount ==
        (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryGroupCount>)0x0) {
      pFVar6 = ::FName::FName(&local_50,"STAT_RayTracingGeometryGroupCount");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryGroupCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryGroupCount,
                         *pFVar6,L"Geometry Group Count","STATGROUP_RayTracingGeometry",
                         "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar3 = *(FName *)FVar7;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3.ComparisonIndex.Value.Value;
      uStackX_c = FVar3.Number;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_48.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_48.StatData.Pad[0] = '\x01';
      local_48.StatData.Pad[1] = '\0';
      local_48.StatData.Pad[2] = '\0';
      local_48.StatData.Pad[3] = '\0';
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_58 = FVar3;
      local_48.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_48);
      FStatsTrace::Add(&local_58,-1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ReleaseRayTracingGeometryHandle @ 148483ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::ReleaseRayTracingGeometryHandle
          (FRayTracingGeometryManager *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryCount> FVar11;
  longlong lVar12;
  FNameEntryId FVar13;
  undefined1 *puVar14;
  FRegisteredGeometry *pFVar15;
  longlong lVar16;
  uint local_res8;
  uint uStackX_c;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_98 [2];
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_70;
  FStatMessage local_60 [2];
  
  if (param_1 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0x157,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lpCriticalSection = &this->MainCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar15 = (FRegisteredGeometry *)
            ((longlong)param_1 * 0x30 + *(longlong *)&this->RegisteredGeometries);
  CancelStreamingRequest(this,pFVar15);
  uVar6 = pFVar15->Geometry->GroupHandle;
  if (uVar6 == 0xffffffff) goto LAB_148483f6d;
  if (((int)uVar6 < 0) || (*(int *)&(this->RegisteredGroups).field_0x28 <= (int)uVar6)) {
LAB_148483deb:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredGroups.IsValidIndex(RegisteredGeometry.Geometry->GroupHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0x164,L"FRayTracingGeometry.GroupHandle must be valid");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (*(int *)&(this->RegisteredGroups).field_0x28 <= (int)uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar14 = *(undefined1 **)&(this->RegisteredGroups).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->RegisteredGroups).field_0x10;
    }
    if ((*(uint *)(puVar14 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) == 0) goto LAB_148483deb;
  }
  cVar1 = pFVar15->Geometry->LODIndex;
  lVar16 = (longlong)pFVar15->Geometry->GroupHandle * 0x70 + *(longlong *)&this->RegisteredGroups;
  if ((cVar1 < '\0') || (*(int *)(lVar16 + 0x10) <= (int)cVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredGeometry.Geometry->LODIndex >= 0 && RegisteredGeometry.Geometry->LODIndex < Group.GeometryHandles.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0x168,L"FRayTracingGeometry assigned to a group must have a valid LODIndex")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar1 = pFVar15->Geometry->LODIndex;
  uVar6 = 0;
  if ((int)cVar1 < *(int *)(lVar16 + 0x10)) {
    uVar6 = (uint)~(int)cVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar12 = lVar16;
  if (*(longlong *)(lVar16 + 8) != 0) {
    lVar12 = *(longlong *)(lVar16 + 8);
  }
  if (*(int *)(lVar12 + (longlong)cVar1 * 4) != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Group.GeometryHandles[RegisteredGeometry.Geometry->LODIndex] == Handle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0x169,
                       L"Unexpected mismatch of FRayTracingGeometry in FRayTracingGeometryGroup");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar1 = pFVar15->Geometry->LODIndex;
  uVar6 = 0;
  if ((int)cVar1 < *(int *)(lVar16 + 0x10)) {
    uVar6 = (uint)~(int)cVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(lVar16 + 8) != 0) {
    lVar16 = *(longlong *)(lVar16 + 8);
  }
  *(undefined4 *)(lVar16 + (longlong)cVar1 * 4) = 0xffffffff;
  ReleaseRayTracingGeometryGroupReference(this,pFVar15->Geometry->GroupHandle);
LAB_148483f6d:
  local_res10[0] = param_1;
  if (*(int *)&(this->ResidentGeometries).Elements.field_0x8 !=
      *(int *)&(this->ResidentGeometries).Elements.field_0x34) {
    iVar5 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->ResidentGeometries,param_1,local_res10);
    if (0 < iVar5) {
      this->TotalResidentSize = this->TotalResidentSize - (ulonglong)pFVar15->Size;
    }
  }
  local_res8 = param_1;
  if (*(int *)&(this->AlwaysResidentGeometries).Elements.field_0x8 !=
      *(int *)&(this->AlwaysResidentGeometries).Elements.field_0x34) {
    iVar5 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->AlwaysResidentGeometries,param_1,(int *)&local_res8);
    if (0 < iVar5) {
      if (!pFVar15->bAlwaysResident) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredGeometry.bAlwaysResident",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                           ,0x17e,
                           L"Geometry should have the bAlwaysResident flag enabled since it was in the AlwaysResidentGeometries set."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this->TotalAlwaysResidentSize = this->TotalAlwaysResidentSize - (ulonglong)pFVar15->Size;
    }
  }
  local_res18[0] = param_1;
  if (*(int *)&(this->EvictableGeometries).Elements.field_0x8 !=
      *(int *)&(this->EvictableGeometries).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (&this->EvictableGeometries,param_1,local_res18);
  }
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator>::
  RemoveAt(&this->RegisteredGeometries,param_1,1);
  local_res20[0] = param_1;
  if (*(int *)&(this->ReferencedGeometries).Elements.field_0x8 !=
      *(int *)&(this->ReferencedGeometries).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (&this->ReferencedGeometries,param_1,local_res20);
  }
  local_98[0] = param_1;
  if (*(int *)&(this->PendingStreamingRequests).Elements.field_0x8 !=
      *(int *)&(this->PendingStreamingRequests).Elements.field_0x34) {
    iVar5 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->PendingStreamingRequests,param_1,local_98);
    if (0 < iVar5) {
      FVar8 = StatPtr_STAT_RayTracingPendingStreamingRequests;
      if (StatPtr_STAT_RayTracingPendingStreamingRequests ==
          (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)0x0) {
        pFVar7 = ::FName::FName(&local_80,"STAT_RayTracingPendingStreamingRequests");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_RayTracingPendingStreamingRequests,*pFVar7,
                           L"Pending Streaming Requests","STATGROUP_RayTracingGeometry",
                           "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,
                           false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar8;
      FVar13 = FVar2.ComparisonIndex.Value;
      uVar6 = FVar2.Number;
      local_res8 = FVar13.Value;
      uStackX_c = uVar6;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        local_70.NameAndInfo.Number = uVar6 & 0xffffbfff | 0xb000;
        local_70.StatData.Pad[0] = '\x01';
        local_70.StatData.Pad[1] = '\0';
        local_70.StatData.Pad[2] = '\0';
        local_70.StatData.Pad[3] = '\0';
        local_70.StatData.Pad[4] = '\0';
        local_70.StatData.Pad[5] = '\0';
        local_70.StatData.Pad[6] = '\0';
        local_70.StatData.Pad[7] = '\0';
        local_90 = FVar2;
        local_70.NameAndInfo.Index.Value = FVar13.Value;
        FThreadStats::AddStatMessage(pFVar9,&local_70);
        FStatsTrace::Add(&local_90,-1);
        if (pFVar9->ScopeCount == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
    }
  }
  FVar11 = StatPtr_STAT_RayTracingGeometryCount;
  if (StatPtr_STAT_RayTracingGeometryCount ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryCount>)0x0) {
    pFVar7 = ::FName::FName(&local_78,"STAT_RayTracingGeometryCount");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryCount,*pFVar7,
                        L"Geometry Count","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                        L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar11;
  uVar6 = FVar2.Number;
  FVar13 = FVar2.ComparisonIndex.Value;
  local_res8 = FVar13.Value;
  uStackX_c = uVar6;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar9 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    local_60[0].NameAndInfo.Number = uVar6 & 0xffffbfff | 0xb000;
    local_60[0].StatData.Pad[0] = '\x01';
    local_60[0].StatData.Pad[1] = '\0';
    local_60[0].StatData.Pad[2] = '\0';
    local_60[0].StatData.Pad[3] = '\0';
    local_60[0].StatData.Pad[4] = '\0';
    local_60[0].StatData.Pad[5] = '\0';
    local_60[0].StatData.Pad[6] = '\0';
    local_60[0].StatData.Pad[7] = '\0';
    local_88 = FVar2;
    local_60[0].NameAndInfo.Index.Value = FVar13.Value;
    FThreadStats::AddStatMessage(pFVar9,local_60);
    FStatsTrace::Add(&local_88,-1);
    if (pFVar9->ScopeCount == 0) {
      FThreadStats::Flush(pFVar9,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar9,false,false);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001484842ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveBuildRequest @ 1484866f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::RemoveBuildRequest(FRayTracingGeometryManager *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives> FVar6;
  uchar auVar7 [8];
  FName local_res8;
  FStatMessage local_38;
  
  lpCriticalSection = &this->RequestCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar3 = StatPtr_STAT_RayTracingPendingBuilds;
  if (StatPtr_STAT_RayTracingPendingBuilds ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_RayTracingPendingBuilds");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingPendingBuilds,*pFVar2,
                       L"Pending Builds","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                       L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_38);
    FStatsTrace::Add(&local_res8,-1);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  auVar7[4] = '\0';
  auVar7[5] = '\0';
  auVar7[6] = '\0';
  auVar7[7] = '\0';
  auVar7._0_4_ = *(uint *)(*(longlong *)
                            (*(longlong *)&this->GeometryBuildRequests + (longlong)param_1 * 0x18) +
                          0x80);
  if (auVar7 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_RayTracingPendingBuildPrimitives;
    if (StatPtr_STAT_RayTracingPendingBuildPrimitives ==
        (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_RayTracingPendingBuildPrimitives");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingPendingBuildPrimitives
                         ,*pFVar2,L"Pending Build Primitives","STATGROUP_RayTracingGeometry",
                         "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->GeometryBuildRequests,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x000148486a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RequestBuildAccelerationStructure @ 148487920

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FRayTracingGeometryManager::RequestBuildAccelerationStructure
          (FRayTracingGeometryManager *this,FRayTracingGeometry *param_1,
          ERTAccelerationStructureBuildPriority param_2,EAccelerationStructureBuildMode param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives> FVar12;
  uchar auVar13 [8];
  FName local_res8;
  FName local_res10;
  FName local_98;
  FName local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FSparseArrayAllocationInfo local_68;
  FRayTracingGeometry *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint uStack_44;
  
  if ((param_1->RayTracingBuildRequestIndex != -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGeometry->RayTracingBuildRequestIndex == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0xd3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uStack_50 = 0xffffffff;
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_4c = __real_3f800000;
  if ((((param_2 != Immediate) && (uStack_4c = __real_3f000000, param_2 != High)) &&
      (uStack_4c = __real_3e75c28f, param_2 != Normal)) &&
     (uStack_4c = __real_3c23d70a, param_2 != Low)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0xcb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    uStack_4c = 0;
  }
  lpCriticalSection = &this->RequestCS;
  local_48 = 0;
  local_58 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = *(int *)&(this->GeometryBuildRequests).field_0x34;
  if (iVar6 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)&this->GeometryBuildRequests,
                       (int *)&(this->GeometryBuildRequests).field_0x8,
                       (int *)&(this->GeometryBuildRequests).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GeometryBuildRequests).field_0x10,
               false);
  }
  else {
    iVar7 = *(int *)&(this->GeometryBuildRequests).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->GeometryBuildRequests;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar7 * 0x18);
    *(int *)&(this->GeometryBuildRequests).field_0x30 = iVar1;
    *(int *)&(this->GeometryBuildRequests).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)&this->GeometryBuildRequests,
             &local_68,iVar7);
  if (local_68.Pointer != (undefined8 *)0x0) {
    *(FRayTracingGeometry **)local_68.Pointer = local_58;
    *(ulonglong *)((longlong)local_68.Pointer + 8) = CONCAT44(uStack_4c,uStack_50);
    *(ulonglong *)((longlong)local_68.Pointer + 0x10) = CONCAT44(uStack_44,local_48);
  }
  *(int *)(*(longlong *)&this->GeometryBuildRequests + 8 + (longlong)local_68.Index * 0x18) =
       local_68.Index;
  FVar9 = StatPtr_STAT_RayTracingPendingBuilds;
  if (StatPtr_STAT_RayTracingPendingBuilds ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds>)0x0) {
    pFVar8 = ::FName::FName(&local_98,"STAT_RayTracingPendingBuilds");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingPendingBuilds,*pFVar8,
                       L"Pending Builds","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                       L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar9;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_88.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_88.StatData.Pad[0] = '\x01';
    local_88.StatData.Pad[1] = '\0';
    local_88.StatData.Pad[2] = '\0';
    local_88.StatData.Pad[3] = '\0';
    local_88.StatData.Pad[4] = '\0';
    local_88.StatData.Pad[5] = '\0';
    local_88.StatData.Pad[6] = '\0';
    local_88.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_88.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_88);
    FStatsTrace::Add(&local_res8,1);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  auVar13[4] = '\0';
  auVar13[5] = '\0';
  auVar13[6] = '\0';
  auVar13[7] = '\0';
  auVar13._0_4_ = (param_1->Initializer).TotalPrimitiveCount;
  if (auVar13 != (uchar  [8])0x0) {
    FVar12 = StatPtr_STAT_RayTracingPendingBuildPrimitives;
    if (StatPtr_STAT_RayTracingPendingBuildPrimitives ==
        (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives>)0x0) {
      pFVar8 = ::FName::FName(&local_90,"STAT_RayTracingPendingBuildPrimitives");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RayTracingPendingBuildPrimitives,*pFVar8,
                          L"Pending Build Primitives","STATGROUP_RayTracingGeometry",
                          "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false
                          ,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar12;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_78.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res10 = FVar3;
      local_78.StatData.Pad = auVar13;
      local_78.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar13);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  param_1->RayTracingBuildRequestIndex = local_68.Index;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return local_68.Index;
}

// RequestRayTracingGeometryStreamIn @ 148487eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

bool __thiscall
FRayTracingGeometryManager::RequestRayTracingGeometryStreamIn
          (FRayTracingGeometryManager *this,FRHICommandList *param_1,int param_2)

{
  int *piVar1;
  ERayTracingGeometryInitializerType EVar2;
  FRayTracingGeometry *this_00;
  longlong lVar3;
  FName FVar4;
  FRayTracingGeometrySegment *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_RayTracingInflightStreamingRequests> FVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FIoBuffer *pFVar13;
  EGeometryStateFlags EVar14;
  int iVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  longlong *plVar18;
  FNameEntryId FVar19;
  FScriptContainerElement *this_03;
  undefined1 auStackY_178 [32];
  FRHIRayTracingGeometry *local_110;
  FRHIResourceReplaceBatcher local_108;
  uint local_f0;
  uint uStack_ec;
  FName local_e8;
  FIoBuffer local_e0;
  FRHICommandListBase *local_d8;
  FStatMessage local_d0;
  FName local_c0;
  FRHIBuffer *local_b8;
  uint local_b0;
  ERayTracingGeometryType local_ac;
  uint local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  ERayTracingGeometryInitializerType local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  FRHIRayTracingGeometry *local_68;
  FName local_60;
  uint local_58;
  FName local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  plVar18 = (longlong *)((longlong)param_2 * 0x30 + *(longlong *)&this->RegisteredGeometries);
  this_00 = (FRayTracingGeometry *)*plVar18;
  if (*(char *)((longlong)plVar18 + 0x2a) != '\x01') {
    EVar2 = (this_00->Initializer).Type;
    local_d8 = (FRHICommandListBase *)param_1;
    if (EVar2 == StreamingDestination) {
LAB_148487fb7:
      if ((this_00->GroupHandle == -1) ||
         ((int)(uint)*(byte *)((longlong)this_00->GroupHandle * 0x70 + 0x68 +
                              *(longlong *)&this->RegisteredGroups) <= (int)this_00->LODIndex)) {
        if ((*(int *)((longlong)plVar18 + 0x24) == 0) && ((int)plVar18[4] == 0)) {
          *(undefined1 *)((longlong)plVar18 + 0x2a) = 2;
        }
        else {
          if (GRayTracingStreamingMaxPendingRequests <= this->NumStreamingRequests) {
            return false;
          }
          if (((short)plVar18[5] != -1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("RegisteredGeometry.StreamingRequestIndex == INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                                 ,0x430,
                                 L"Ray Tracing Geometry already has a streaming request in-flight"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          *(short *)(plVar18 + 5) = (short)this->NextStreamingRequestIndex;
          uVar17 = this->NextStreamingRequestIndex;
          uVar10 = 0;
          if ((int)uVar17 < (this->StreamingRequests).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          this_03 = (this->StreamingRequests).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x20;
          if (((*(int *)&this_03[0x10].field_0x0 != -1) ||
              (this_03[0x19] != (FScriptContainerElement)0x0)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!StreamingRequest.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                                 ,0x434,
                                 L"Unused streaming request are expected to be in invalid state."),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          iVar15 = (this->NextStreamingRequestIndex + 1) % GRayTracingStreamingMaxPendingRequests;
          this->NumStreamingRequests = this->NumStreamingRequests + 1;
          this->NextStreamingRequestIndex = iVar15;
          FVar12 = StatPtr_STAT_RayTracingInflightStreamingRequests;
          if (StatPtr_STAT_RayTracingInflightStreamingRequests ==
              (FThreadSafeStaticStat<FStat_STAT_RayTracingInflightStreamingRequests>)0x0) {
            pFVar11 = ::FName::FName(&local_c0,"STAT_RayTracingInflightStreamingRequests");
            FVar12 = (FThreadSafeStaticStat<FStat_STAT_RayTracingInflightStreamingRequests>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_RayTracingInflightStreamingRequests,*pFVar11,
                                L"In-flight Streaming Requests","STATGROUP_RayTracingGeometry",
                                "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false
                                ,false,MCR_Invalid);
          }
          FVar4 = *(FName *)FVar12;
          FVar19 = FVar4.ComparisonIndex.Value;
          uVar17 = FVar4.Number;
          local_f0 = FVar19.Value;
          uStack_ec = uVar17;
          if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_01 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_01 == (FThreadStats *)0x0) {
              this_02 = FThreadStatsPool::Get();
              this_01 = FThreadStatsPool::GetFromPool(this_02);
            }
            local_d0.NameAndInfo.Number = uVar17 & 0xffffafff | 0xa000;
            local_d0.StatData.Pad[0] = '\x01';
            local_d0.StatData.Pad[1] = '\0';
            local_d0.StatData.Pad[2] = '\0';
            local_d0.StatData.Pad[3] = '\0';
            local_d0.StatData.Pad[4] = '\0';
            local_d0.StatData.Pad[5] = '\0';
            local_d0.StatData.Pad[6] = '\0';
            local_d0.StatData.Pad[7] = '\0';
            local_e8 = FVar4;
            local_d0.NameAndInfo.Index.Value = FVar19.Value;
            FThreadStats::AddStatMessage(this_01,&local_d0);
            FStatsTrace::Add(&local_e8,1);
            if (this_01->ScopeCount == 0) {
              FThreadStats::Flush(this_01,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_01,false,false);
            }
          }
          uVar17 = *(uint *)((longlong)plVar18 + 0x24);
          if (EVar2 == StreamingDestination) {
            cVar7 = (**(code **)(*(longlong *)plVar18[3] + 0x20))();
            if ((cVar7 != '\0') &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!RegisteredGeometry.StreamableAsset->IsBVHStreamedIn()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                                   ,0x443,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            uVar17 = uVar17 + (int)plVar18[4];
          }
          *(int *)&this_03[0x10].field_0x0 = param_2;
          *(int *)(this_03 + 0x14) = (int)plVar18[2];
          this_03[0x18].field_0x0 = EVar2 != StreamingDestination;
          pFVar13 = FIoBuffer::FIoBuffer(&local_e0,(ulonglong)uVar17);
          FIoBuffer::operator=((FIoBuffer *)this_03,pFVar13);
          if (local_e0.CorePtr.Reference != (BufCore *)0x0) {
            FIoBuffer::BufCore::CheckRefCount((BufCore *)local_e0.CorePtr.Reference);
            LOCK();
            piVar1 = (int *)((longlong)local_e0.CorePtr.Reference + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FIoBuffer::BufCore::~BufCore((BufCore *)local_e0.CorePtr.Reference);
              ::operator_delete((void *)local_e0.CorePtr.Reference,0x20);
            }
          }
          (**(code **)(*(longlong *)plVar18[3] + 0x28))
                    ((longlong *)plVar18[3],this_03 + 8,this_03,this_03[0x18].field_0x0);
          *(undefined1 *)((longlong)plVar18 + 0x2a) = 1;
          this->TotalStreamingSize = this->TotalStreamingSize + (ulonglong)*(uint *)(this_03 + 0x14)
          ;
          param_1 = (FRHICommandList *)local_d8;
        }
        if (*(char *)((longlong)plVar18 + 0x2a) == '\x02') {
          local_108.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Infos.ArrayNum = 0;
          local_108.Infos.ArrayMax = 0;
          local_108.RHICmdList = (FRHICommandListBase *)param_1;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,&local_108.Infos.AllocatorInstance,0,&local_108.Infos.ArrayMax);
          local_b8 = (this_00->Initializer).IndexBuffer.Reference;
          if (local_b8 != (FRHIBuffer *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_b8);
          }
          local_b0 = (this_00->Initializer).IndexBufferOffset;
          iVar15 = (this_00->Initializer).Segments.ArrayNum;
          pFVar5 = (FRayTracingGeometrySegment *)
                   (this_00->Initializer).Segments.AllocatorInstance.Data;
          local_ac = (this_00->Initializer).GeometryType;
          local_a8 = (this_00->Initializer).TotalPrimitiveCount;
          local_a4 = (this_00->Initializer).bFastBuild;
          local_a3 = (this_00->Initializer).bAllowUpdate;
          local_a2 = (this_00->Initializer).bAllowCompaction;
          local_a1 = (this_00->Initializer).bTemplate;
          local_a0 = (this_00->Initializer).Type;
          local_98.Data = (FScriptContainerElement *)0x0;
          local_90 = iVar15;
          if (iVar15 == 0) {
            local_8c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,iVar15,0,&local_98,iVar15,&local_8c);
            ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                      (local_98.Data,pFVar5,iVar15);
          }
          local_68 = (this_00->Initializer).SourceGeometry;
          local_80 = *(undefined8 *)(this_00->Initializer).OfflineDataHeader.Reserved;
          uStack_78 = *(undefined8 *)((this_00->Initializer).OfflineDataHeader.Reserved + 2);
          local_70 = *(undefined8 *)((this_00->Initializer).OfflineDataHeader.Reserved + 4);
          local_58 = (this_00->Initializer).DebugName.Number;
          local_54 = (this_00->Initializer).OwnerName;
          local_60 = (this_00->Initializer).DebugName.Name;
          local_a0 = 2;
          local_88 = 0;
          (**(code **)(GDynamicRHI->_padding_ + 0x490))(GDynamicRHI,&local_110,param_1,&local_b8);
          if ((local_88 == 0) ||
             (cVar7 = (**(code **)(local_110->_padding_ + 0x18))(), cVar7 != '\0')) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          EVar14 = this_00->GeometryState | RequiresBuild;
          if (!bVar8) {
            EVar14 = this_00->GeometryState & ~RequiresBuild;
          }
          this_00->GeometryState = EVar14;
          FRayTracingGeometry::InitRHIForStreaming(this_00,local_110,&local_108);
          if (local_110 != (FRHIRayTracingGeometry *)0x0) {
            FRHIResource::Release((FRHIResource *)local_110);
          }
          DestructItems<FRayTracingGeometrySegment,int>
                    ((FRayTracingGeometrySegment *)local_98.Data,local_90);
          if ((FRayTracingGeometrySegment *)local_98.Data != (FRayTracingGeometrySegment *)0x0) {
            FMemory::Free(local_98.Data);
          }
          if (local_b8 != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)local_b8);
          }
          if (local_108.Infos.ArrayNum != 0) {
            (**(code **)(GDynamicRHI->_padding_ + 0x138))
                      (GDynamicRHI,local_108.RHICmdList,&local_108.Infos);
          }
          if (local_108.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Infos.AllocatorInstance.Data);
          }
          FRayTracingGeometry::RequestBuildIfNeeded(this_00,(FRHICommandListBase *)param_1,Normal);
        }
      }
    }
    else if (((*(int *)((longlong)plVar18 + 0x24) != 0) &&
             (cVar7 = (**(code **)(*(longlong *)plVar18[3] + 0x18))(), cVar7 == '\0')) &&
            (*(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x8 !=
             *(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x34)) {
      FVar16 = (this->ReferencedGeometryGroupsForDynamicUpdate).Hash.SecondaryData;
      if (FVar16 == (ForElementType<FSetElementId>)0x0) {
        FVar16 = (ForElementType<FSetElementId>)
                 &(this->ReferencedGeometryGroupsForDynamicUpdate).Hash;
      }
      iVar15 = *(int *)((longlong)FVar16 +
                       (ulonglong)
                       ((this->ReferencedGeometryGroupsForDynamicUpdate).HashSize - 1U &
                       *(uint *)(*plVar18 + 0xe0)) * 4);
      if (iVar15 != -1) {
        lVar3 = *(longlong *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements;
        do {
          if (*(uint *)(lVar3 + (longlong)iVar15 * 0xc) == *(uint *)(*plVar18 + 0xe0)) {
            if (iVar15 == -1) {
              return true;
            }
            goto LAB_148487fb7;
          }
          iVar15 = *(int *)(lVar3 + 4 + (longlong)iVar15 * 0xc);
        } while (iVar15 != -1);
      }
    }
  }
  return true;
}

// RequestUpdateCachedRenderState @ 148488560

void __thiscall
FRayTracingGeometryManager::RequestUpdateCachedRenderState
          (FRayTracingGeometryManager *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x5c7,
                         L"Can only access RegisteredGroups on render thread otherwise need a critical section"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = IsRayTracingAllowed();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsRayTracingAllowed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x5c8,
                         L"Should only register proxies with FRayTracingGeometryManager when ray tracing is allowed"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((-1 < param_1) && (param_1 < *(int *)&(this->RegisteredGroups).field_0x28)) {
    if ((*(int *)&(this->RegisteredGroups).field_0x28 <= param_1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar14 = *(undefined1 **)&(this->RegisteredGroups).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->RegisteredGroups).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_148488666;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("RegisteredGroups.IsValidIndex(InRayTracingGeometryGroupHandle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                     ,0x5c9,L"InRayTracingGeometryGroupHandle must be valid");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148488666:
  iVar11 = 0;
  uVar5 = 1;
  lVar15 = (longlong)param_1 * 0x70 + *(longlong *)&this->RegisteredGroups;
  iVar8 = *(int *)(lVar15 + 0x40);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar15 + 0x28);
  iVar13 = 0;
  iVar6 = 0;
  if (iVar8 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x38);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x38) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar6 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1484886fd;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar7 * 4 + 4);
    }
    uVar5 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar13;
    if (iVar8 < iVar6) {
      iVar6 = iVar8;
    }
  }
LAB_1484886fd:
  uVar10 = *(uint *)(lVar15 + 0x40);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar5,iVar11);
  TStack_50.CurrentBitIndex = iVar6;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar10 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,*(int *)(lVar15 + 0x20) - *(int *)(lVar15 + 0x4c));
  TStack_50.Array = pTVar1;
  if (((int)uVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)(lVar15 + 0x40);
  if (uVar10 != uVar5) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x38);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x38) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar8;
      uVar9 = uVar9 + 0x20;
      iVar8 = iVar8 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1484887f0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar10 = (int)lVar7 + -1 + uVar9;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_1484887f0:
  while( true ) {
    if (*(int *)(lVar15 + 0x20) - *(int *)(lVar15 + 0x4c) != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<FPrimitiveSceneProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) && (TStack_50.Array == pTVar1)) break;
    (**(code **)(**(longlong **)
                   (*(longlong *)
                     (*(longlong *)(lVar15 + 0x18) + (longlong)TStack_50.CurrentBitIndex * 0x10) +
                   0x220) + 0x4f8))();
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ResetVisibleGeometries @ 148489eb0

void __thiscall FRayTracingGeometryManager::ResetVisibleGeometries(FRayTracingGeometryManager *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Empty
            (&this->VisibleGeometryHandles,
             *(int *)&(this->VisibleGeometryHandles).Elements.field_0x8 -
             *(int *)&(this->VisibleGeometryHandles).Elements.field_0x34);
  return;
}

// SetRayTracingGeometryGroupCurrentFirstLODIndex @ 148494270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::SetRayTracingGeometryGroupCurrentFirstLODIndex
          (FRayTracingGeometryManager *this,FRHICommandListBase *param_1,int param_2,uchar param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  code *pcVar2;
  FRayTracingGeometryManager *pFVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  FRegisteredGeometry *pFVar12;
  uint uVar13;
  longlong lVar14;
  FRayTracingGeometryManager *local_res8;
  FName local_78;
  FName local_70;
  FStatMessage local_68;
  FRHIResourceReplaceBatcher local_58;
  
  lpCriticalSection = &this->MainCS;
  uVar9 = (ulonglong)param_3;
  local_res8 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar10 = (longlong)param_2 * 0x70 + *(longlong *)&this->RegisteredGroups;
  uVar13 = (uint)param_3;
  if (*(byte *)(lVar10 + 0x68) < param_3) {
    local_58.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Infos.ArrayNum = 0;
    local_58.Infos.ArrayMax = 0;
    uVar11 = uVar13 - *(byte *)(lVar10 + 0x68);
    local_58.RHICmdList = param_1;
    if (uVar11 != 0) {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if (0 < (int)uVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar11,&local_58.Infos.AllocatorInstance,0,&local_58.Infos.ArrayMax);
      }
    }
    pFVar3 = local_res8;
    uVar9 = (ulonglong)*(byte *)(lVar10 + 0x68);
    if (*(byte *)(lVar10 + 0x68) < uVar13) {
      lVar14 = uVar9 * 4;
      do {
        uVar8 = (uint)uVar9;
        uVar11 = 0;
        if ((int)uVar8 < *(int *)(lVar10 + 0x10)) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar7 = lVar10;
        if (*(longlong *)(lVar10 + 8) != 0) {
          lVar7 = *(longlong *)(lVar10 + 8);
        }
        if (*(int *)(lVar14 + lVar7) != -1) {
          pFVar12 = (FRegisteredGeometry *)
                    ((longlong)*(int *)(lVar14 + lVar7) * 0x30 +
                    *(longlong *)&pFVar3->RegisteredGeometries);
          bVar4 = FRayTracingGeometry::IsEvicted(pFVar12->Geometry);
          if (!bVar4) {
            CancelStreamingRequest(pFVar3,pFVar12);
            if ((pFVar12->Geometry->GeometryState & StreamedIn) != Invalid) {
              if (pFVar12->StreamableAsset == (FRayTracingStreamableAsset *)0x0) {
                FRayTracingGeometry::ReleaseRHIForStreaming(pFVar12->Geometry,&local_58);
              }
              else {
                (**(code **)((longlong)*pFVar12->StreamableAsset + 0x38))();
              }
            }
          }
        }
        uVar9 = (ulonglong)(uVar8 + 1);
        lVar14 = lVar14 + 4;
      } while ((int)(uVar8 + 1) < (int)uVar13);
    }
    if (local_58.Infos.ArrayNum != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_58.RHICmdList,&local_58.Infos)
      ;
    }
    if (local_58.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Infos.AllocatorInstance.Data);
    }
  }
  else {
    bVar4 = IsRayTracingEnabled();
    if (((bVar4) &&
        (bVar4 = IsRayTracingUsingReferenceBasedResidency(), pFVar3 = local_res8, !bVar4)) &&
       (uVar13 < *(byte *)(lVar10 + 0x68))) {
      lVar14 = uVar9 * 4;
      do {
        uVar11 = (uint)uVar9;
        uVar13 = 0;
        if ((int)uVar11 < *(int *)(lVar10 + 0x10)) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar7 = lVar10;
        if (*(longlong *)(lVar10 + 8) != 0) {
          lVar7 = *(longlong *)(lVar10 + 8);
        }
        if (*(int *)(lVar14 + lVar7) != -1) {
          uVar13 = 0;
          if ((int)uVar11 < *(int *)(lVar10 + 0x10)) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar7 = lVar10;
          if (*(longlong *)(lVar10 + 8) != 0) {
            lVar7 = *(longlong *)(lVar10 + 8);
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&pFVar3->PendingStreamingRequests,(int *)&local_res8,
                     (bool *)(lVar7 + (longlong)(int)uVar11 * 4));
          FVar6 = StatPtr_STAT_RayTracingPendingStreamingRequests;
          if (StatPtr_STAT_RayTracingPendingStreamingRequests ==
              (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)0x0) {
            pFVar5 = ::FName::FName(&local_70,"STAT_RayTracingPendingStreamingRequests");
            FVar6 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_RayTracingPendingStreamingRequests,*pFVar5,
                               L"Pending Streaming Requests","STATGROUP_RayTracingGeometry",
                               "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,
                               false,MCR_Invalid);
          }
          FVar1 = *(FName *)FVar6;
          if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            local_68.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
            local_68.StatData.Pad[0] = '\x01';
            local_68.StatData.Pad[1] = '\0';
            local_68.StatData.Pad[2] = '\0';
            local_68.StatData.Pad[3] = '\0';
            local_68.StatData.Pad[4] = '\0';
            local_68.StatData.Pad[5] = '\0';
            local_68.StatData.Pad[6] = '\0';
            local_68.StatData.Pad[7] = '\0';
            local_78 = FVar1;
            local_68.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this_00,&local_68);
            FStatsTrace::Add(&local_78,1);
            if (this_00->ScopeCount == 0) {
              FThreadStats::Flush(this_00,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
            }
          }
        }
        uVar9 = (ulonglong)(uVar11 + 1);
        lVar14 = lVar14 + 4;
      } while ((int)(uVar11 + 1) < (int)(uint)*(byte *)(lVar10 + 0x68));
    }
  }
  *(uchar *)(lVar10 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000148494717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetRayTracingGeometryStreamingData @ 148494740

void __thiscall
FRayTracingGeometryManager::SetRayTracingGeometryStreamingData
          (FRayTracingGeometryManager *this,FRayTracingGeometry *param_1,
          FRayTracingStreamableAsset *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  
  lpCriticalSection = &this->MainCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar1 = param_1->RayTracingGeometryHandle;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&(this->RegisteredGeometries).field_0x28)) {
    if (*(int *)&(this->RegisteredGeometries).field_0x28 <= (int)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar7 = *(undefined1 **)&(this->RegisteredGeometries).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->RegisteredGeometries).field_0x10;
    }
    if ((*(uint *)(puVar7 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_148494813;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("RegisteredGeometries.IsValidIndex(GeometryHandle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                     ,0x196,
                     L"SetRayTracingGeometryStreamingData(...) can only be used with FRayTracingGeometry that has been registered with FRayTracingGeometryManager."
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_148494813:
  lVar6 = (longlong)(int)uVar1 * 0x30 + *(longlong *)&this->RegisteredGeometries;
  *(FRayTracingStreamableAsset **)(lVar6 + 0x18) = param_2;
  uVar4 = (**(code **)((longlong)*param_2 + 8))(param_2);
  *(undefined4 *)(lVar6 + 0x20) = uVar4;
  iVar5 = (**(code **)((longlong)*param_2 + 0x10))(param_2);
  *(int *)(lVar6 + 0x24) = iVar5;
  if ((*(int *)(lVar6 + 0x20) == 0) && (iVar5 == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredGeometry.StreamableBVHSize > 0 || RegisteredGeometry.StreamableBuffersSize > 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0x19d,L"FRayTracingStreamableAsset should have data to stream.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148494886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetupBuildParams @ 1484948c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::SetupBuildParams
          (FRayTracingGeometryManager *this,FBuildRequest *param_1,
          TArray<FRayTracingGeometryBuildParams,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  FRHIRayTracingGeometry *this_00;
  FBuildRequest *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives> FVar10;
  FScriptContainerElement *pFVar11;
  uchar auVar12 [8];
  ulonglong uVar13;
  FName local_res10;
  FRHIRayTracingGeometry *local_a8;
  EAccelerationStructureBuildMode local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FName local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  longlong local_60;
  longlong lStack_58;
  ulonglong local_50;
  FName local_48;
  FName local_40;
  FString local_38;
  
  this_00 = (param_1->Owner->RayTracingGeometryRHI).Reference;
  if (((param_1->RequestIndex == -1) ||
      (param_1->RequestIndex != param_1->Owner->RayTracingBuildRequestIndex)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBuildRequest.RequestIndex != INDEX_NONE && InBuildRequest.RequestIndex == InBuildRequest.Owner->RayTracingBuildRequestIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x57e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this_00 == (FRHIRayTracingGeometry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingGeometryRHI != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x57f,
                         L"Build request for FRayTracingGeometry without valid RHI. Was the FRayTracingGeometry evicted or released without calling RemoveBuildRequest()?"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->BuildMode == Build) {
    uVar13 = this_00->_padding_;
    local_50 = this_00->_padding_;
  }
  else {
    local_60 = this_00->_padding_;
    lStack_58 = this_00->_padding_;
    uVar13 = this_00->_padding_;
    local_50 = uVar13;
  }
  if (uVar13 < 0x80000000) {
    local_a8 = (FRHIRayTracingGeometry *)0x0;
    local_98 = 0;
    uStack_90 = 0;
    if (this_00 != (FRHIRayTracingGeometry *)0x0) {
      local_a8 = this_00;
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    local_a0 = param_1->BuildMode;
    pFVar11 = (param_2->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar11 + (longlong)param_2->ArrayMax * 0x20)) &&
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
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar11 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
    *(undefined8 *)pFVar11 = 0;
    *(FRHIRayTracingGeometry **)pFVar11 = local_a8;
    if (local_a8 != (FRHIRayTracingGeometry *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_a8);
    }
    *(EAccelerationStructureBuildMode *)(pFVar11 + 8) = local_a0;
    *(undefined4 *)(pFVar11 + 0x10) = (undefined4)local_98;
    *(undefined4 *)(pFVar11 + 0x14) = local_98._4_4_;
    *(undefined4 *)(pFVar11 + 0x18) = uStack_90;
    *(undefined4 *)(pFVar11 + 0x1c) = uStack_8c;
    param_1->Owner->RayTracingBuildRequestIndex = -1;
    if (param_1->Owner->GroupHandle != -1) {
      (**(code **)(this->_padding_ + 0x50))(this);
    }
    if (param_1->bReleaseBuffersAfterBuild != false) {
      pFVar1 = (FBuildRequest *)(param_3->AllocatorInstance).Data;
      if (((pFVar1 <= param_1) && (param_1 < (FBuildRequest *)(&pFVar1->Owner + param_3->ArrayMax)))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar5 + 1;
      *(FRayTracingGeometry **)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           param_1->Owner;
    }
    FVar7 = StatPtr_STAT_RayTracingPendingBuilds;
    if (StatPtr_STAT_RayTracingPendingBuilds ==
        (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds>)0x0) {
      pFVar6 = ::FName::FName(&local_48,"STAT_RayTracingPendingBuilds");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingPendingBuilds,*pFVar6,
                         L"Pending Builds","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                         L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar7;
    local_res10 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_80.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_80.StatData.Pad[0] = '\x01';
      local_80.StatData.Pad[1] = '\0';
      local_80.StatData.Pad[2] = '\0';
      local_80.StatData.Pad[3] = '\0';
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_res10 = FVar2;
      local_80.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_80);
      FStatsTrace::Add(&local_res10,-1);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
    auVar12[4] = '\0';
    auVar12[5] = '\0';
    auVar12[6] = '\0';
    auVar12[7] = '\0';
    auVar12._0_4_ = (param_1->Owner->Initializer).TotalPrimitiveCount;
    if (auVar12 != (uchar  [8])0x0) {
      FVar10 = StatPtr_STAT_RayTracingPendingBuildPrimitives;
      if (StatPtr_STAT_RayTracingPendingBuildPrimitives ==
          (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives>)0x0) {
        pFVar6 = ::FName::FName(&local_40,"STAT_RayTracingPendingBuildPrimitives");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RayTracingPendingBuildPrimitives,*pFVar6,
                            L"Pending Build Primitives","STATGROUP_RayTracingGeometry",
                            "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,
                            false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar10;
      local_res10 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_70.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_88 = FVar2;
        local_70.StatData.Pad = auVar12;
        local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_70);
        FStatsTrace::Add(&local_88,-(longlong)auVar12);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    if (param_4) {
      TSparseArray<FRayTracingGeometryManager::FBuildRequest,FDefaultSparseArrayAllocator>::RemoveAt
                (&this->GeometryBuildRequests,param_1->RequestIndex,1);
    }
    if (local_a8 != (FRHIRayTracingGeometry *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a8);
    }
  }
  else if (2 < (byte)LogRayTracingGeometryManager._0_1_) {
    FDebugName::ToString(&(param_1->Owner->Initializer).DebugName,&local_38);
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogRayTracingGeometryManager);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StreamOutGeometry @ 148496110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::StreamOutGeometry
          (FRayTracingGeometryManager *this,FRHIResourceReplaceBatcher *param_1,
          FRegisteredGeometry *param_2)

{
  if ((param_2->Geometry->GeometryState & StreamedIn) == Invalid) {
    return;
  }
  if (param_2->StreamableAsset != (FRayTracingStreamableAsset *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148496128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*param_2->StreamableAsset + 0x38))();
    return;
  }
  FRayTracingGeometry::ReleaseRHIForStreaming(param_2->Geometry,param_1);
  return;
}

// Tick @ 148496150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::Tick(FRayTracingGeometryManager *this,FRHICommandList *param_1)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  FName FVar6;
  code *pcVar7;
  uchar auVar8 [4];
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  FRHICommandList *pFVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRayTracingGeometryManager::Tick(FRHICommandList_&)_::_2_::FStat_STAT_FRayTracingGeometryManager_Tick>
  FVar22;
  FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests> FVar23;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryReferencedMemory> FVar24;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryRequestedMemory> FVar25;
  FThreadStats *pFVar26;
  FThreadStatsPool *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryResidentMemory> FVar28;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryAlwaysResidentMemory> FVar29;
  byte bVar30;
  longlong lVar31;
  FNameEntryId FVar32;
  int iVar33;
  longlong lVar34;
  int iVar35;
  uint *puVar36;
  uint uVar37;
  TBitArray<FDefaultBitArrayAllocator> *pTVar38;
  uchar auVar39 [8];
  uint uVar40;
  undefined1 auStackY_358 [32];
  FName local_2f0;
  undefined1 local_2e8 [8];
  uint local_2e0;
  uint uStack_2dc;
  undefined1 local_2d8;
  undefined1 local_2d7 [7];
  FRHICommandList *local_2d0;
  FColor_u_0 local_2c8;
  int local_2c4;
  int local_2c0 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2b8;
  undefined8 uStack_2b0;
  TBitArray<FDefaultBitArrayAllocator> *local_2a8;
  uint uStack_2a0;
  uint uStack_29c;
  int local_298;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  FName local_288;
  FName local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_250;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  LPCRITICAL_SECTION local_210;
  FStatMessage local_208;
  int local_1f8 [2];
  FStatMessage local_1f0;
  FStatMessage local_1e0;
  FStatMessage local_1d0;
  int local_1c0;
  int local_1bc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108 [4];
  undefined4 local_e4;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint uStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  uchar auStack_a0 [4];
  int iStack_9c;
  ForElementType<FSetElementId> local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_358;
  if (PRIVATE_GIsRunningCommandlet) {
    return;
  }
  local_2d0 = param_1;
  bVar16 = IsInRenderingThread();
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                          ,0x23a,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId572,"FRayTracingGeometryManager::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
               ,0x23c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId572);
  }
  bVar11 = false;
  bVar12 = false;
  lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar31 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRayTracingGeometryManager_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRayTracingGeometryManager::Tick(FRHICommandList_&)_::_2_::FStat_STAT_FRayTracingGeometryManager_Tick>
         )0x0) {
      pFVar21 = ::FName::FName(&local_140,"STAT_FRayTracingGeometryManager_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FRayTracingGeometryManager_Tick,*pFVar21
                 ,L"STAT_FRayTracingGeometryManager_Tick","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar22 = StatPtr_STAT_FRayTracingGeometryManager_Tick;
  if (StatPtr_STAT_FRayTracingGeometryManager_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRayTracingGeometryManager::Tick(FRHICommandList_&)_::_2_::FStat_STAT_FRayTracingGeometryManager_Tick>
       )0x0) {
    pFVar21 = ::FName::FName(&local_110,"STAT_FRayTracingGeometryManager_Tick");
    FVar22 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRayTracingGeometryManager::Tick(FRHICommandList_&)_::_2_::FStat_STAT_FRayTracingGeometryManager_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FRayTracingGeometryManager_Tick
                          ,*pFVar21,L"STAT_FRayTracingGeometryManager_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_2f0 = *(FName *)FVar22;
  local_280.ComparisonIndex.Value = 0;
  local_280.Number = 0;
  bVar15 = false;
  bVar17 = false;
  FVar32 = local_2f0.ComparisonIndex.Value;
  uVar40 = local_2f0.Number;
  if ((FVar32.Value == 0) && (uVar40 == 0)) {
LAB_148496388:
    bVar12 = bVar17;
    bVar11 = bVar15;
    bVar15 = false;
    local_2f0 = local_280;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c8._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_288.ComparisonIndex.Value = FVar32.Value;
        local_288.Number = uVar40;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_288,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                   ,0x23d);
        bVar11 = true;
        bVar12 = true;
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148496388;
    local_2e0 = FVar32.Value;
    uStack_2dc = uVar40;
    FThreadStats::AddMessage(local_2f0,CycleScopeStart);
    bVar15 = true;
  }
  if (__CsvProfilerStat574 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RayTracingGeometryManager_Tick");
    __CsvProfilerStat574 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("RayTracingGeometryManager_Tick","CSV_RayTracingGeometryManager_Tick");
  local_210 = (LPCRITICAL_SECTION)&this->MainCS;
  if (local_210 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_210);
  if ((*(int *)(lVar31 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    PreviousFrameCounter = GFrameCounterRenderThread - 1;
    _Init_thread_footer(&::_TSS1);
  }
  if ((GFrameCounterRenderThread == PreviousFrameCounter) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("GFrameCounterRenderThread != PreviousFrameCounter",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                          ,0x24a,
                          L"FRayTracingGeometryManager::Tick() should only be called once per frame"
                         ), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  PreviousFrameCounter = GFrameCounterRenderThread;
  bVar17 = IsRayTracingEnabled();
  bVar18 = IsRayTracingUsingReferenceBasedResidency();
  if (((!bVar18) &&
      (((*(int *)&(this->ReferencedGeometries).Elements.field_0x8 !=
         *(int *)&(this->ReferencedGeometries).Elements.field_0x34 ||
        (*(int *)&(this->ReferencedGeometryGroups).Elements.field_0x8 !=
         *(int *)&(this->ReferencedGeometryGroups).Elements.field_0x34)) ||
       (*(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x8 !=
        *(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x34)))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("bUsingReferenceBasedResidency || (ReferencedGeometries.IsEmpty() && ReferencedGeometryGroups.IsEmpty() && ReferencedGeometryGroupsForDynamicUpdate.IsEmpty())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                          ,0x252,
                          L"ReferencedGeometryHandles, ReferencedGeometryGroups and ReferencedGeometryGroupsForDynamicUpdate are expected to be empty when not using reference based residency"
                         ), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  RefreshAlwaysResidentRayTracingGeometries(this,param_1);
  CheckIntegrity(this);
  fVar13 = __real_35800000;
  if (bVar17) {
    if (bVar18) {
      if (this->bRenderedFrame == false) {
        if (((*(int *)&(this->ReferencedGeometries).Elements.field_0x8 !=
              *(int *)&(this->ReferencedGeometries).Elements.field_0x34) ||
            (*(int *)&(this->ReferencedGeometryGroups).Elements.field_0x8 !=
             *(int *)&(this->ReferencedGeometryGroups).Elements.field_0x34)) ||
           (*(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x8 !=
            *(int *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x34)) {
          `FRayTracingGeometryManager::Tick'::__l89::<lambda_1>::operator()(&local_2d8);
        }
        goto LAB_1484975ac;
      }
      bVar17 = bHasRayTracingEnableChanged != false;
      this->bRenderedFrame = false;
      if (bVar17) {
        local_250._padding_._4_4_ = 1;
        pTVar38 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(this->AlwaysResidentGeometries).Elements.field_0x10;
        local_250._padding_._0_4_ = 0;
        pTVar2 = &this->AlwaysResidentGeometries;
        local_250.UnvisitedBitMask = 0xffffffff;
        local_250.CurrentBitIndex = 0;
        local_250.BaseBitIndex = 0;
        local_250.Array = pTVar38;
        if (*(int *)&(this->AlwaysResidentGeometries).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_250);
        }
        uStack_2b0 = CONCAT44(local_250._padding_._4_4_,(undefined4)local_250._padding_);
        iStack_290 = *(int *)&(this->AlwaysResidentGeometries).Elements.field_0x8 -
                     *(int *)&(this->AlwaysResidentGeometries).Elements.field_0x34;
        uStack_29c = local_250.CurrentBitIndex;
        uStack_2a0 = local_250.UnvisitedBitMask;
        uStack_294 = local_250._28_4_;
        local_298 = local_250.BaseBitIndex;
        local_2a8 = local_250.Array;
        uVar40 = *(uint *)&(this->AlwaysResidentGeometries).Elements.field_0x28;
        local_270._padding_._0_4_ = (int)uVar40 >> 5;
        bVar30 = (byte)uVar40 & 0x1f;
        local_270._padding_._4_4_ = 1 << bVar30;
        local_270.UnvisitedBitMask = -1 << bVar30;
        local_270.BaseBitIndex = uVar40 & 0xffffffe0;
        uStack_190 = CONCAT44(uStack_28c,iStack_290);
        TStack_1b0.Array = local_250.Array;
        local_2b8 = pTVar2;
        local_270.Array = pTVar38;
        local_270.CurrentBitIndex = uVar40;
        local_1b8 = pTVar2;
        TStack_1b0._padding_ = uStack_2b0;
        TStack_1b0._16_8_ = _uStack_2a0;
        TStack_1b0._24_8_ = _local_298;
        if (((int)uVar40 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar40 != *(uint *)&(this->AlwaysResidentGeometries).Elements.field_0x28) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_270);
          pTVar38 = local_270.Array;
        }
        iVar33 = local_270.CurrentBitIndex;
        while( true ) {
          pTVar2 = local_1b8;
          if (*(int *)&(local_1b8->Elements).field_0x8 - *(int *)&(local_1b8->Elements).field_0x34
              != (int)uStack_190) {
            local_2e8[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2e8);
          }
          if (((TStack_1b0.CurrentBitIndex == iVar33) && (TStack_1b0.Array == pTVar38)) &&
             (param_1 = local_2d0, pTVar2 == &this->AlwaysResidentGeometries)) break;
          lVar31 = *(longlong *)&this->RegisteredGeometries;
          iVar5 = *(int *)(*(longlong *)&pTVar2->Elements +
                          (longlong)TStack_1b0.CurrentBitIndex * 0xc);
          lVar34 = (longlong)iVar5 * 0x30;
          local_2c4 = iVar5;
          bVar17 = FRayTracingGeometry::IsEvicted(*(FRayTracingGeometry **)(lVar34 + lVar31));
          if (bVar17) {
            FRayTracingGeometry::MakeResident(*(FRayTracingGeometry **)(lVar34 + lVar31),local_2d0);
            pbVar4 = (byte *)(lVar34 + 0x2b + lVar31);
            *pbVar4 = *pbVar4 & 0xfe;
          }
          bVar17 = RequestRayTracingGeometryStreamIn(this,local_2d0,iVar5);
          if (!bVar17) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&this->PendingStreamingRequests,local_1f8,(bool *)&local_2c4);
            FVar23 = StatPtr_STAT_RayTracingPendingStreamingRequests;
            if (StatPtr_STAT_RayTracingPendingStreamingRequests ==
                (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)0x0) {
              pFVar21 = ::FName::FName(&local_120,"STAT_RayTracingPendingStreamingRequests");
              FVar23 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_RayTracingPendingStreamingRequests,*pFVar21,
                                  L"Pending Streaming Requests","STATGROUP_RayTracingGeometry",
                                  "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,
                                  false,false,MCR_Invalid);
            }
            FVar6 = *(FName *)FVar23;
            FVar32 = FVar6.ComparisonIndex.Value;
            uVar40 = FVar6.Number;
            local_2e0 = FVar32.Value;
            uStack_2dc = uVar40;
            if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar26 == (FThreadStats *)0x0) {
                pFVar27 = FThreadStatsPool::Get();
                pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
              }
              local_208.NameAndInfo.Number = uVar40 & 0xffffafff | 0xa000;
              local_208.StatData.Pad[0] = '\x01';
              local_208.StatData.Pad[1] = '\0';
              local_208.StatData.Pad[2] = '\0';
              local_208.StatData.Pad[3] = '\0';
              local_208.StatData.Pad[4] = '\0';
              local_208.StatData.Pad[5] = '\0';
              local_208.StatData.Pad[6] = '\0';
              local_208.StatData.Pad[7] = '\0';
              local_230 = FVar6;
              local_208.NameAndInfo.Index.Value = FVar32.Value;
              FThreadStats::AddStatMessage(pFVar26,&local_208);
              FStatsTrace::Add(&local_230,1);
              if (pFVar26->ScopeCount == 0) {
                FThreadStats::Flush(pFVar26,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar26,false,false);
              }
            }
          }
          TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
        }
      }
      UpdateReferenceBasedResidency(this,param_1);
    }
    else {
      if (bHasRayTracingEnableChanged != false) {
        MakeResidentAllGeometries(this,param_1);
      }
      FVar24 = StatPtr_STAT_RayTracingGeometryReferencedMemory;
      if (StatPtr_STAT_RayTracingGeometryReferencedMemory ==
          (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryReferencedMemory>)0x0) {
        pFVar21 = ::FName::FName(&local_118,"STAT_RayTracingGeometryReferencedMemory");
        FVar24 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryReferencedMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RayTracingGeometryReferencedMemory,*pFVar21,
                            L"Referenced Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                            L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar24,Set,0,false);
      FVar25 = StatPtr_STAT_RayTracingGeometryRequestedMemory;
      if (StatPtr_STAT_RayTracingGeometryRequestedMemory ==
          (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryRequestedMemory>)0x0) {
        pFVar21 = ::FName::FName(local_108,"STAT_RayTracingGeometryRequestedMemory");
        FVar25 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryRequestedMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RayTracingGeometryRequestedMemory,*pFVar21,
                            L"Requested Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                            L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar25,Set,this->TotalResidentSize,false);
      if (__CsvProfilerStat674 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("ReferencedSizeMB",_GCsvCategory_RayTracingGeometry.Index);
        __CsvProfilerStat674 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("ReferencedSizeMB",_GCsvCategory_RayTracingGeometry.Index,0,Set);
      if (DAT_15523b66f == '\0') {
        FCsvProfilerTrace::OutputInlineStat
                  ("RequestedSizeMB",_GCsvCategory_RayTracingGeometry.Index);
        DAT_15523b66f = '\x01';
      }
      FCsvProfiler::RecordCustomStat
                ("RequestedSizeMB",_GCsvCategory_RayTracingGeometry.Index,
                 (float)this->TotalResidentSize * fVar13,Set);
    }
  }
  else {
    if (bHasRayTracingEnableChanged != false) {
      EvictAllGeometries(this,param_1);
      pTVar2 = &this->PendingStreamingRequests;
      bVar17 = 1 < (this->PendingStreamingRequests).HashSize;
      if (!bVar17) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
      }
      puVar1 = &(this->PendingStreamingRequests).Elements.field_0xc;
      *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x34 = 0;
      iVar33 = *(int *)&(this->PendingStreamingRequests).Elements.field_0x2c;
      *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x28 = 0;
      if ((iVar33 < 0) || (0x80 < iVar33)) {
        *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->PendingStreamingRequests).Elements.field_0x10,0);
      }
      if (bVar17) {
        (this->PendingStreamingRequests).HashSize = 1;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar2);
      }
      FVar23 = StatPtr_STAT_RayTracingPendingStreamingRequests;
      if (StatPtr_STAT_RayTracingPendingStreamingRequests ==
          (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)0x0) {
        pFVar21 = ::FName::FName(&local_138,"STAT_RayTracingPendingStreamingRequests");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RayTracingPendingStreamingRequests,*pFVar21,
                            L"Pending Streaming Requests","STATGROUP_RayTracingGeometry",
                            "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,
                            false,MCR_Invalid);
      }
      FVar6 = *(FName *)FVar23;
      local_2e0 = (uint)FVar6.ComparisonIndex.Value;
      uStack_2dc = FVar6.Number;
      FThreadStats::AddMessage<__int64>(FVar6,Set,0,false);
    }
    if ((this->TotalResidentSize != 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TotalResidentSize == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                            ,0x269,
                            L"TotalResidentSize should be 0 when ray tracing is disabled but is currently %lld.\nThere\'s likely some issue tracking resident geometries or not all geometries have been evicted."
                           ), bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(int *)&(this->PendingStreamingRequests).Elements.field_0x8 !=
         *(int *)&(this->PendingStreamingRequests).Elements.field_0x34) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("PendingStreamingRequests.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                            ,0x26b,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar24 = StatPtr_STAT_RayTracingGeometryReferencedMemory;
    if (StatPtr_STAT_RayTracingGeometryReferencedMemory ==
        (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryReferencedMemory>)0x0) {
      pFVar21 = ::FName::FName(&local_130,"STAT_RayTracingGeometryReferencedMemory");
      FVar24 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryReferencedMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RayTracingGeometryReferencedMemory,*pFVar21,
                          L"Referenced Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                          L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar6 = *(FName *)FVar24;
    local_2e0 = (uint)FVar6.ComparisonIndex.Value;
    uStack_2dc = FVar6.Number;
    FThreadStats::AddMessage<__int64>(FVar6,Set,0,false);
    FVar25 = StatPtr_STAT_RayTracingGeometryRequestedMemory;
    if (StatPtr_STAT_RayTracingGeometryRequestedMemory ==
        (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryRequestedMemory>)0x0) {
      pFVar21 = ::FName::FName(&local_128,"STAT_RayTracingGeometryRequestedMemory");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryRequestedMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RayTracingGeometryRequestedMemory,*pFVar21,
                          L"Requested Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                          L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar6 = *(FName *)FVar25;
    local_2e0 = (uint)FVar6.ComparisonIndex.Value;
    uStack_2dc = FVar6.Number;
    FThreadStats::AddMessage<__int64>(FVar6,Set,0,false);
    if (__CsvProfilerStat623 == false) {
      FCsvProfilerTrace::OutputInlineStat("ReferencedSizeMB",_GCsvCategory_RayTracingGeometry.Index)
      ;
      __CsvProfilerStat623 = true;
    }
    FCsvProfiler::RecordCustomStat("ReferencedSizeMB",_GCsvCategory_RayTracingGeometry.Index,0,Set);
    if (__CsvProfilerStat624 == false) {
      FCsvProfilerTrace::OutputInlineStat("RequestedSizeMB",_GCsvCategory_RayTracingGeometry.Index);
      __CsvProfilerStat624 = true;
    }
    FCsvProfiler::RecordCustomStat("RequestedSizeMB",_GCsvCategory_RayTracingGeometry.Index,0,Set);
  }
  pTVar2 = &this->PendingStreamingRequests;
  local_a8 = *(undefined4 *)&(this->PendingStreamingRequests).Elements.field_0x30;
  iStack_a4 = *(int *)&(this->PendingStreamingRequests).Elements.field_0x34;
  auVar8 = *&(this->PendingStreamingRequests).Hash.InlineData;
  iVar33 = (this->PendingStreamingRequests).Hash._padding_;
  iVar35 = 0;
  uVar9 = *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x10;
  uVar10 = *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x18;
  local_b8 = *(uint **)&(this->PendingStreamingRequests).Elements.field_0x20;
  _uStack_b0 = *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x28;
  local_d8._0_8_ = *(undefined8 *)&pTVar2->Elements;
  puVar1 = &(this->PendingStreamingRequests).Elements.field_0x8;
  iVar5 = *(int *)puVar1;
  local_d8._8_8_ = *(undefined8 *)puVar1;
  uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
  local_98 = (this->PendingStreamingRequests).Hash.SecondaryData;
  uVar3 = *(ulonglong *)&(this->PendingStreamingRequests).HashSize;
  *(undefined8 *)&pTVar2->Elements = 0;
  *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x10 = local_d8._16_8_;
  *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x18 = local_d8._24_8_;
  *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x20 = 0;
  *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x28 = 0x8000000000;
  *(undefined8 *)&(this->PendingStreamingRequests).Elements.field_0x30 = 0xffffffff;
  (this->PendingStreamingRequests).Hash.InlineData[0] = auStack_a0[0];
  (this->PendingStreamingRequests).Hash.InlineData[1] = auStack_a0[1];
  (this->PendingStreamingRequests).Hash.InlineData[2] = auStack_a0[2];
  (this->PendingStreamingRequests).Hash.InlineData[3] = auStack_a0[3];
  (this->PendingStreamingRequests).Hash._padding_ = iStack_9c;
  (this->PendingStreamingRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(ulonglong *)&(this->PendingStreamingRequests).HashSize = uStack_90;
  local_d8._16_8_ = uVar9;
  local_d8._24_8_ = uVar10;
  auStack_a0 = auVar8;
  iStack_9c = iVar33;
  uStack_90 = uVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve(pTVar2,iVar5 - iStack_a4);
  uVar40 = uStack_b0;
  uVar20 = 1;
  local_298 = 0;
  uStack_29c = 0;
  if (uStack_b0 != 0) {
    puVar36 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar36 = local_b8;
    }
    uVar37 = *puVar36;
    local_298 = 0;
    while (uVar37 == 0) {
      lVar31 = (longlong)iVar35;
      local_298 = local_298 + 0x20;
      iVar35 = iVar35 + 1;
      uStack_29c = uStack_b0;
      if ((int)((uStack_b0 - 1) + ((int)(uStack_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar35)
      goto LAB_148496f13;
      uVar37 = (puVar36 + 1)[lVar31];
    }
    uVar20 = -uVar37 & uVar37;
    uVar3 = (ulonglong)uVar20 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_1c0 = (int)lVar31;
    uStack_29c = local_298 + -1 + local_1c0;
    if ((int)uStack_b0 < (int)uStack_29c) {
      uStack_29c = uStack_b0;
    }
  }
LAB_148496f13:
  local_2b8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8;
  local_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  uVar37 = uStack_b0 & 0xffffffe0;
  iStack_290 = local_d8._8_4_ - iStack_a4;
  uStack_2b0 = CONCAT44(uVar20,iVar35);
  uStack_2a0 = 0xffffffff;
  uStack_294 = local_e4;
  TStack_180._padding_ = uStack_2b0;
  iVar33 = (int)uStack_b0 >> 5;
  uStack_160 = CONCAT44(uStack_28c,iStack_290);
  bVar30 = (byte)_uStack_b0;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  TStack_180.CurrentBitIndex = uStack_29c;
  TStack_180.BaseBitIndex = local_298;
  TStack_180._28_4_ = local_e4;
  local_188 = local_2b8;
  TStack_180.Array = local_2a8;
  if ((int)uStack_b0 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar14 = local_2d0;
  if (uVar40 != uStack_b0) {
    puVar36 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar36 = local_b8;
    }
    uVar40 = -1 << (bVar30 & 0x1f) & puVar36[iVar33];
    while (uVar40 == 0) {
      lVar31 = (longlong)iVar33;
      uVar37 = uVar37 + 0x20;
      iVar33 = iVar33 + 1;
      uVar40 = uStack_b0;
      if ((int)((uStack_b0 - 1) + ((int)(uStack_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
      goto LAB_148497041;
      uVar40 = (puVar36 + 1)[lVar31];
    }
    uVar3 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
    lVar31 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    uVar40 = (uVar37 - 1) + (int)lVar31;
    if ((int)uStack_b0 < (int)uVar40) {
      uVar40 = uStack_b0;
    }
  }
LAB_148497041:
  while( true ) {
    pTVar2 = local_188;
    if (*(int *)&(local_188->Elements).field_0x8 - *(int *)&(local_188->Elements).field_0x34 !=
        (int)uStack_160) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d7);
    }
    if (((TStack_180.CurrentBitIndex == uVar40) &&
        (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (pTVar2 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8)) break;
    local_2c0[0] = *(int *)(*(longlong *)&pTVar2->Elements +
                           (longlong)TStack_180.CurrentBitIndex * 0xc);
    bVar17 = RequestRayTracingGeometryStreamIn(this,pFVar14,local_2c0[0]);
    if (!bVar17) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->PendingStreamingRequests,&local_1bc,(bool *)local_2c0);
    }
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  }
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  FVar23 = StatPtr_STAT_RayTracingPendingStreamingRequests;
  if (StatPtr_STAT_RayTracingPendingStreamingRequests ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)0x0) {
    pFVar21 = ::FName::FName(&local_158,"STAT_RayTracingPendingStreamingRequests");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RayTracingPendingStreamingRequests,*pFVar21,
                        L"Pending Streaming Requests","STATGROUP_RayTracingGeometry",
                        "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar6 = *(FName *)FVar23;
  auVar39 = (uchar  [8])
            (longlong)
            (*(int *)&(this->PendingStreamingRequests).Elements.field_0x8 -
            *(int *)&(this->PendingStreamingRequests).Elements.field_0x34);
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar26 == (FThreadStats *)0x0) {
      pFVar27 = FThreadStatsPool::Get();
      pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
    }
    local_1f0.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
    local_228 = FVar6;
    local_1f0.StatData.Pad = auVar39;
    local_1f0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar26,&local_1f0);
    FStatsTrace::Set(&local_228,(long64)auVar39);
    if (pFVar26->ScopeCount == 0) {
      FThreadStats::Flush(pFVar26,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar26,false,false);
    }
  }
  ProcessCompletedStreamingRequests(this,local_2d0);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->ReferencedGeometries);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->ReferencedGeometryGroups);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&this->ReferencedGeometryGroupsForDynamicUpdate);
  bHasRayTracingEnableChanged = false;
  FVar28 = StatPtr_STAT_RayTracingGeometryResidentMemory;
  if (StatPtr_STAT_RayTracingGeometryResidentMemory ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryResidentMemory>)0x0) {
    pFVar21 = ::FName::FName(&local_150,"STAT_RayTracingGeometryResidentMemory");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryResidentMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryResidentMemory,
                        *pFVar21,L"Resident Memory","STATGROUP_RayTracingGeometry",
                        "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FVar6 = *(FName *)FVar28;
  auVar39 = (uchar  [8])this->TotalResidentSize;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar26 == (FThreadStats *)0x0) {
      pFVar27 = FThreadStatsPool::Get();
      pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
    }
    local_1e0.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
    local_220 = FVar6;
    local_1e0.StatData.Pad = auVar39;
    local_1e0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar26,&local_1e0);
    FStatsTrace::Set(&local_220,(long64)auVar39);
    if (pFVar26->ScopeCount == 0) {
      FThreadStats::Flush(pFVar26,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar26,false,false);
    }
  }
  FVar29 = StatPtr_STAT_RayTracingGeometryAlwaysResidentMemory;
  if (StatPtr_STAT_RayTracingGeometryAlwaysResidentMemory ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryAlwaysResidentMemory>)0x0) {
    pFVar21 = ::FName::FName(&local_148,"STAT_RayTracingGeometryAlwaysResidentMemory");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryAlwaysResidentMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RayTracingGeometryAlwaysResidentMemory,*pFVar21,
                        L"Always Resident Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                        L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar6 = *(FName *)FVar29;
  auVar39 = (uchar  [8])this->TotalAlwaysResidentSize;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar26 == (FThreadStats *)0x0) {
      pFVar27 = FThreadStatsPool::Get();
      pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
    }
    local_1d0.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
    local_218 = FVar6;
    local_1d0.StatData.Pad = auVar39;
    local_1d0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar26,&local_1d0);
    FStatsTrace::Set(&local_218,(long64)auVar39);
    if (pFVar26->ScopeCount == 0) {
      FThreadStats::Flush(pFVar26,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar26,false,false);
    }
  }
  if (__CsvProfilerStat705 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("TotalResidentSizeMB",_GCsvCategory_RayTracingGeometry.Index);
    __CsvProfilerStat705 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TotalResidentSizeMB",_GCsvCategory_RayTracingGeometry.Index,
             (float)this->TotalResidentSize * fVar13,Set);
  if (__CsvProfilerStat706 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("TotalAlwaysResidentSizeMB",_GCsvCategory_RayTracingGeometry.Index);
    __CsvProfilerStat706 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TotalAlwaysResidentSizeMB",_GCsvCategory_RayTracingGeometry.Index,
             (float)this->TotalAlwaysResidentSize * fVar13,Set);
LAB_1484975ac:
  LeaveCriticalSection(local_210);
  FCsvProfiler::EndExclusiveStat("RayTracingGeometryManager_Tick");
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(local_2f0,CycleScopeEnd);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnregisterProxyWithCachedRayTracingState @ 14849b0b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::UnregisterProxyWithCachedRayTracingState
          (FRayTracingGeometryManager *this,FPrimitiveSceneProxy *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0x5b8,
                       L"Can only access RegisteredGroups on render thread otherwise need a critical section"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsRayTracingAllowed();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsRayTracingAllowed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0x5b9,
                       L"Should only register proxies with FRayTracingGeometryManager when ray tracing is allowed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((-1 < param_2) && (param_2 < *(int *)&(this->RegisteredGroups).field_0x28)) {
    if (*(int *)&(this->RegisteredGroups).field_0x28 <= param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar4 = *(undefined1 **)&(this->RegisteredGroups).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->RegisteredGroups).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)((uint)param_2 >> 5) * 4) >> (param_2 & 0x1fU) & 1) != 0)
    goto LAB_14849b1b3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RegisteredGroups.IsValidIndex(InRayTracingGeometryGroupHandle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                     ,0x5ba,L"InRayTracingGeometryGroupHandle must be valid");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14849b1b3:
  iVar3 = TSet<FPrimitiveSceneProxy_*,DefaultKeyFuncs<FPrimitiveSceneProxy_*,0>,FDefaultSetAllocator>
          ::Remove((TSet<FPrimitiveSceneProxy_*,DefaultKeyFuncs<FPrimitiveSceneProxy_*,0>,FDefaultSetAllocator>
                    *)((longlong)param_2 * 0x70 + *(longlong *)&this->RegisteredGroups + 0x18),
                   param_1);
  if (iVar3 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxiesSet.Remove(Proxy) == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                       ,0x5c0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReleaseRayTracingGeometryGroupReference(this,param_2);
  return;
}

// UpdateReferenceBasedResidency @ 14849c090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRayTracingGeometryManager::UpdateReferenceBasedResidency
          (FRayTracingGeometryManager *this,FRHICommandList *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 *puVar4;
  FName FVar5;
  code *pcVar6;
  float fVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryReferencedMemory> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryRequestedMemory> FVar16;
  FText *pFVar17;
  longlong lVar18;
  longlong lVar19;
  FSharedReferencer<1> FVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  byte bVar24;
  uint uVar25;
  uchar auVar26 [8];
  undefined1 *puVar27;
  FRegisteredGeometry *pFVar28;
  ForAnyElementType FVar29;
  uint uVar30;
  uint *puVar31;
  uchar auVar32 [8];
  ulong64 uVar33;
  undefined1 auStackY_368 [32];
  FIdentityFunctor local_308;
  undefined1 local_307 [7];
  ForAnyElementType local_300;
  undefined8 local_2f8;
  uint local_2f0;
  uint local_2ec;
  FName local_2e8;
  uchar local_2e0 [8];
  uchar local_2d8 [8];
  uint local_2d0;
  longlong local_2c8;
  uint local_2c0 [2];
  uint local_2b8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_2b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2a0;
  int iStack_298;
  uint uStack_294;
  undefined1 *local_290;
  undefined4 uStack_288;
  int iStack_284;
  int local_280;
  undefined4 uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  FName local_260;
  FName local_258;
  FStatMessage local_250;
  FStatMessage local_240;
  FString local_230;
  FString local_220;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_210;
  int iStack_208;
  uint uStack_204;
  undefined1 *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  FString local_180;
  TSharedPtr<FCulture,1> local_170;
  TSharedPtr<FCulture,1> local_160;
  FString local_150;
  TSharedPtr<FCulture,1> local_140;
  TSharedPtr<FCulture,1> local_130;
  FName local_120;
  FName local_118;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0 [2];
  undefined4 local_b4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_2e8 = (FName)param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&local_a8,&this->EvictableGeometries);
  uVar30 = *(int *)&(this->RegisteredGeometries).field_0x8 -
           *(int *)&(this->RegisteredGeometries).field_0x34;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f8 = 0;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  if (0 < (int)uVar30) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar30,&local_300,0,(int *)((longlong)&local_2f8 + 4));
  }
  local_2e0 = (uchar  [8])this->TotalAlwaysResidentSize;
  puVar4 = &(this->ReferencedGeometries).Elements.field_0x10;
  iVar10 = *(int *)&(this->ReferencedGeometries).Elements.field_0x28;
  pTVar1 = &this->ReferencedGeometries;
  local_280 = 0;
  local_2d8[0] = '\0';
  local_2d8[1] = '\0';
  local_2d8[2] = '\0';
  local_2d8[3] = '\0';
  local_2d8[4] = '\0';
  local_2d8[5] = '\0';
  local_2d8[6] = '\0';
  local_2d8[7] = '\0';
  local_2c8 = 0;
  uStack_294 = 1;
  iStack_284 = 0;
  iStack_298 = 0;
  if (iVar10 != 0) {
    puVar31 = *(uint **)&(this->ReferencedGeometries).Elements.field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)puVar4;
    }
    uVar30 = *puVar31;
    while (uVar30 == 0) {
      lVar18 = (longlong)iStack_298;
      local_280 = local_280 + 0x20;
      iStack_298 = iStack_298 + 1;
      iStack_284 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_298) goto LAB_14849c21d;
      uVar30 = puVar31[lVar18 + 1];
    }
    uStack_294 = -uVar30 & uVar30;
    uVar11 = (ulonglong)uStack_294 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_270 = (int)lVar18;
    iStack_284 = local_280 + -1 + local_270;
    if (iVar10 < iStack_284) {
      iStack_284 = iVar10;
    }
  }
LAB_14849c21d:
  uVar30 = *(uint *)&(this->ReferencedGeometries).Elements.field_0x28;
  uStack_27c = local_b4;
  uVar25 = uVar30 & 0xffffffe0;
  iStack_278 = *(int *)&(this->ReferencedGeometries).Elements.field_0x8 -
               *(int *)&(this->ReferencedGeometries).Elements.field_0x34;
  TStack_1d8._padding_ = CONCAT44(uStack_294,iStack_298);
  uStack_288 = 0xffffffff;
  TStack_1d8.CurrentBitIndex = iStack_284;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar30 >> 5;
  TStack_1d8._28_4_ = local_b4;
  TStack_1d8.BaseBitIndex = local_280;
  uStack_1b8 = CONCAT44(uStack_274,iStack_278);
  local_2a0 = pTVar1;
  local_290 = puVar4;
  local_1e0 = pTVar1;
  TStack_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar30 < 0) || (iVar10 < (int)uVar30)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar21 = *(uint *)&(this->ReferencedGeometries).Elements.field_0x28;
  lVar18 = local_2c8;
  if (uVar30 != uVar21) {
    puVar27 = *(undefined1 **)&(this->ReferencedGeometries).Elements.field_0x20;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = puVar4;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar22 * 4);
    while (uVar30 == 0) {
      lVar19 = (longlong)iVar22;
      uVar25 = uVar25 + 0x20;
      iVar22 = iVar22 + 1;
      uVar30 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_14849c330;
      uVar30 = *(uint *)(puVar27 + lVar19 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_26c = (int)lVar19;
    uVar30 = local_26c + -1 + uVar25;
    if ((int)uVar21 < (int)uVar30) {
      uVar30 = uVar21;
    }
  }
LAB_14849c330:
  while( true ) {
    local_2c8 = lVar18;
    pTVar8 = local_1e0;
    if (*(int *)&(local_1e0->Elements).field_0x8 - *(int *)&(local_1e0->Elements).field_0x34 !=
        (int)uStack_1b8) {
      local_307[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_307);
    }
    if (((TStack_1d8.CurrentBitIndex == uVar30) &&
        (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar8 == pTVar1))
    break;
    lVar18 = *(longlong *)&this->RegisteredGeometries;
    local_2f0 = *(uint *)(*(longlong *)&pTVar8->Elements +
                         (longlong)TStack_1d8.CurrentBitIndex * 0xc);
    lVar19 = (longlong)(int)local_2f0;
    *(ulong64 *)(lVar18 + 8 + lVar19 * 0x30) = GFrameCounterRenderThread;
    if (((local_300.Data <= (FScriptContainerElement *)&local_2f0) &&
        ((FScriptContainerElement *)&local_2f0 < local_300.Data + (longlong)local_2f8._4_4_ * 4)) &&
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
    iVar10 = (int)local_2f8;
    if ((int)local_2f8 == local_2f8._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_300,(int *)((longlong)&local_2f8 + 4));
    }
    local_2f8 = CONCAT44(local_2f8._4_4_,iVar10 + 1);
    *(uint *)(local_300.Data + (longlong)iVar10 * 4) = local_2f0;
    local_2c0[0] = local_2f0;
    if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&local_a8,local_2f0,(int *)local_2c0);
    }
    uVar11 = (ulonglong)*(uint *)(lVar18 + 0x10 + lVar19 * 0x30);
    local_2d8 = (uchar  [8])((longlong)local_2d8 + uVar11);
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    bVar24 = *(byte *)(lVar18 + 0x2b + lVar19 * 0x30);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
    auVar32 = (uchar  [8])(uVar11 + (longlong)local_2e0);
    if ((bVar24 & 2) != 0) {
      auVar32 = local_2e0;
    }
    local_2e0 = auVar32;
    lVar18 = uVar11 + local_2c8;
    if ((bVar24 & 1) == 0) {
      lVar18 = local_2c8;
    }
  }
  puVar4 = &(this->ReferencedGeometryGroups).Elements.field_0x10;
  iStack_208 = 0;
  iVar10 = *(int *)&(this->ReferencedGeometryGroups).Elements.field_0x28;
  local_210 = &this->ReferencedGeometryGroups;
  local_1f0 = 0;
  uStack_204 = 1;
  iStack_1f4 = 0;
  if (iVar10 != 0) {
    puVar31 = *(uint **)&(this->ReferencedGeometryGroups).Elements.field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)puVar4;
    }
    uVar30 = *puVar31;
    while (uVar30 == 0) {
      lVar18 = (longlong)iStack_208;
      local_1f0 = local_1f0 + 0x20;
      iStack_208 = iStack_208 + 1;
      iStack_1f4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208) goto LAB_14849c53d;
      uVar30 = puVar31[lVar18 + 1];
    }
    uStack_204 = -uVar30 & uVar30;
    uVar11 = (ulonglong)uStack_204 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_268 = (int)lVar18;
    iStack_1f4 = local_1f0 + -1 + local_268;
    if (iVar10 < iStack_1f4) {
      iStack_1f4 = iVar10;
    }
  }
LAB_14849c53d:
  uVar30 = *(uint *)&(this->ReferencedGeometryGroups).Elements.field_0x28;
  iStack_1ec = iStack_284;
  uVar25 = uVar30 & 0xffffffe0;
  iStack_1e8 = *(int *)&(this->ReferencedGeometryGroups).Elements.field_0x8 -
               *(int *)&(this->ReferencedGeometryGroups).Elements.field_0x34;
  TStack_1a8._padding_ = CONCAT44(uStack_204,iStack_208);
  uStack_1f8 = 0xffffffff;
  TStack_1a8.CurrentBitIndex = iStack_1f4;
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar30 >> 5;
  TStack_1a8._28_4_ = iStack_284;
  TStack_1a8.BaseBitIndex = local_1f0;
  uStack_188 = CONCAT44(uStack_1e4,iStack_1e8);
  local_2d0 = uVar30;
  local_200 = puVar4;
  local_1b0 = local_210;
  TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar30 < 0) || (iVar10 < (int)uVar30)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar21 = *(uint *)&(this->ReferencedGeometryGroups).Elements.field_0x28;
  if (uVar30 != uVar21) {
    puVar27 = *(undefined1 **)&(this->ReferencedGeometryGroups).Elements.field_0x20;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = puVar4;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar22 * 4);
    while (uVar30 == 0) {
      lVar18 = (longlong)iVar22;
      uVar25 = uVar25 + 0x20;
      iVar22 = iVar22 + 1;
      uVar30 = uVar21;
      local_2d0 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_14849c660;
      uVar30 = *(uint *)(puVar27 + lVar18 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_264 = (int)lVar18;
    uVar30 = (uVar25 - 1) + local_264;
    local_2d0 = uVar30;
    if ((int)uVar21 < (int)uVar30) {
      uVar30 = uVar21;
      local_2d0 = uVar21;
    }
  }
LAB_14849c660:
  do {
    pTVar1 = local_1b0;
    if (*(int *)&(local_1b0->Elements).field_0x8 - *(int *)&(local_1b0->Elements).field_0x34 !=
        (int)uStack_188) {
      local_308 = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_308);
    }
    if (((TStack_1a8.CurrentBitIndex == uVar30) &&
        (TStack_1a8.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(this->ReferencedGeometryGroups).Elements.field_0x10)) &&
       (pTVar1 == &this->ReferencedGeometryGroups)) {
      iVar10 = FUnitConversion::Convert<int>
                         (GRayTracingResidentGeometryMemoryPoolSizeInMB,Megabytes,Bytes);
      lVar18 = local_2c8;
      uVar33 = (ulong64)iVar10;
      if (this->TotalResidentSize + local_2c8 + this->TotalStreamingSize <= (longlong)uVar33)
      goto LAB_14849caa5;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_a8,&local_2b0);
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l50::<lambda_1>_>
                ((int *)local_2b0.AllocatorInstance.Data,local_2b0.ArrayNum,local_308,
                 (<lambda_1>)this);
      FVar5 = local_2e8;
      uVar30 = 0;
      if (this->TotalStreamingSize + this->TotalResidentSize + lVar18 <= (longlong)uVar33)
      goto LAB_14849ca97;
      lVar19 = 0;
      break;
    }
    uVar25 = *(uint *)(*(longlong *)&pTVar1->Elements + (longlong)TStack_1a8.CurrentBitIndex * 0xc);
    lVar18 = (longlong)(int)uVar25;
    if (((int)uVar25 < 0) || (*(int *)&(this->RegisteredGroups).field_0x28 <= (int)uVar25)) {
LAB_14849c712:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredGroups.IsValidIndex(GroupHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                         ,0x2ee,L"RayTracingGeometryGroupHandle must be valid");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      if ((*(int *)&(this->RegisteredGroups).field_0x28 <= (int)uVar25) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined1 **)&(this->RegisteredGroups).field_0x20;
      puVar27 = &(this->RegisteredGroups).field_0x10;
      if (puVar4 != (undefined1 *)0x0) {
        puVar27 = puVar4;
      }
      uVar21 = uVar25 & 0x1f;
      if ((int)uVar25 < 0) {
        uVar25 = uVar25 + 0x1f;
      }
      if ((*(uint *)(puVar27 + (longlong)((int)uVar25 >> 5) * 4) >> uVar21 & 1) == 0)
      goto LAB_14849c712;
    }
    lVar18 = lVar18 * 0x70 + *(longlong *)&this->RegisteredGroups;
    iVar10 = *(int *)(lVar18 + 0x10);
    auVar32 = local_2d8;
    for (bVar24 = *(byte *)(lVar18 + 0x68); (int)(uint)bVar24 < iVar10; bVar24 = bVar24 + 1) {
      if ((*(int *)(lVar18 + 0x10) <= (int)(uint)bVar24) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar19 = lVar18;
      if (*(longlong *)(lVar18 + 8) != 0) {
        lVar19 = *(longlong *)(lVar18 + 8);
      }
      local_2ec = *(uint *)(lVar19 + (ulonglong)bVar24 * 4);
      lVar19 = (longlong)(int)local_2ec;
      if (local_2ec != 0xffffffff) {
        lVar23 = *(longlong *)&this->RegisteredGeometries;
        *(ulong64 *)(lVar23 + 8 + lVar19 * 0x30) = GFrameCounterRenderThread;
        auVar32 = (uchar  [8])
                  ((longlong)auVar32 + (ulonglong)*(uint *)(lVar23 + 0x10 + lVar19 * 0x30));
        bVar3 = *(byte *)(lVar23 + 0x2b + lVar19 * 0x30);
        if ((bVar3 & 2) == 0) {
          if (((local_300.Data <= (FScriptContainerElement *)&local_2ec) &&
              ((FScriptContainerElement *)&local_2ec <
               local_300.Data + (longlong)local_2f8._4_4_ * 4)) &&
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
          iVar22 = (int)local_2f8;
          if ((int)local_2f8 == local_2f8._4_4_) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_300,(int *)((longlong)&local_2f8 + 4));
          }
          local_2f8 = CONCAT44(local_2f8._4_4_,iVar22 + 1);
          *(uint *)(local_300.Data + (longlong)iVar22 * 4) = local_2ec;
          local_2b8[0] = local_2ec;
          if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&local_a8,local_2ec,(int *)local_2b8);
          }
          uVar11 = (ulonglong)*(uint *)(lVar23 + 0x10 + lVar19 * 0x30);
          local_2e0 = (uchar  [8])((longlong)local_2e0 + uVar11);
          if ((*(byte *)(lVar23 + 0x2b + lVar19 * 0x30) & 1) != 0) {
            local_2c8 = local_2c8 + uVar11;
          }
        }
        else if (((bVar3 & 1) != 0) &&
                (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!RegisteredGeometry.bEvicted",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                                    ,0x300,
                                    L"Always resident ray tracing geometry was unexpectely evicted."
                                   ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar30 = local_2d0;
    }
    TStack_1a8._padding_._4_4_ = (uint)((ulonglong)TStack_1a8._padding_ >> 0x20);
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    local_2d8 = auVar32;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  } while( true );
  while( true ) {
    uVar25 = 0;
    if ((int)uVar30 < local_2b0.ArrayNum) {
      uVar25 = ~uVar30 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar28 = (FRegisteredGeometry *)
              ((longlong)*(int *)(local_2b0.AllocatorInstance.Data + lVar19) * 0x30 +
              *(longlong *)&this->RegisteredGeometries);
    bVar9 = FRayTracingGeometry::IsValid(pFVar28->Geometry);
    if (((!bVar9) || (bVar9 = FRayTracingGeometry::IsEvicted(pFVar28->Geometry), bVar9)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredGeometry.Geometry->IsValid() && !RegisteredGeometry.Geometry->IsEvicted()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\RayTracingGeometryManager.cpp"
                           ,0x33c,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EvictGeometry(this,(FRHICommandListBase *)FVar5,pFVar28);
    uVar30 = uVar30 + 1;
    lVar19 = lVar19 + 4;
    if (this->TotalStreamingSize + this->TotalResidentSize + lVar18 <= (longlong)uVar33) break;
    if (local_2b0.ArrayNum <= (int)uVar30) break;
  }
LAB_14849ca97:
  if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.AllocatorInstance.Data);
  }
LAB_14849caa5:
  if (this->TotalStreamingSize + this->TotalResidentSize < (longlong)uVar33) {
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l62::<lambda_2>_>
              ((int *)local_300.Data,(int)local_2f8,local_308,(<lambda_2>)this);
    uVar30 = 0;
    if (this->TotalStreamingSize + this->TotalResidentSize < (longlong)uVar33) {
      lVar18 = 0;
      do {
        if ((int)local_2f8 <= (int)uVar30) break;
        uVar25 = 0;
        if ((int)uVar30 < (int)local_2f8) {
          uVar25 = ~uVar30 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar19 = *(longlong *)&this->RegisteredGeometries;
        iVar10 = *(int *)(local_300.Data + lVar18);
        lVar23 = (longlong)iVar10 * 0x30;
        bVar9 = FRayTracingGeometry::IsEvicted(*(FRayTracingGeometry **)(lVar23 + lVar19));
        if (bVar9) {
          FRayTracingGeometry::MakeResident
                    (*(FRayTracingGeometry **)(lVar23 + lVar19),(FRHICommandList *)local_2e8);
          pbVar2 = (byte *)(lVar23 + 0x2b + lVar19);
          *pbVar2 = *pbVar2 & 0xfe;
        }
        RequestRayTracingGeometryStreamIn(this,(FRHICommandList *)local_2e8,iVar10);
        uVar30 = uVar30 + 1;
        lVar18 = lVar18 + 4;
      } while (this->TotalStreamingSize + this->TotalResidentSize < (longlong)uVar33);
    }
  }
  FVar13 = StatPtr_STAT_RayTracingGeometryReferencedMemory;
  if (StatPtr_STAT_RayTracingGeometryReferencedMemory ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryReferencedMemory>)0x0) {
    pFVar12 = ::FName::FName(&local_120,"STAT_RayTracingGeometryReferencedMemory");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryReferencedMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RayTracingGeometryReferencedMemory,*pFVar12,
                        L"Referenced Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
                        L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar5 = *(FName *)FVar13;
  auVar32 = local_2d8;
  local_2e8 = FVar5;
  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    auVar32 = local_2d8;
    local_250.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
    local_250.StatData.Pad[0] = local_2d8[0];
    local_250.StatData.Pad[1] = local_2d8[1];
    local_250.StatData.Pad[2] = local_2d8[2];
    local_250.StatData.Pad[3] = local_2d8[3];
    local_250.StatData.Pad[4] = local_2d8[4];
    local_250.StatData.Pad[5] = local_2d8[5];
    local_250.StatData.Pad[6] = local_2d8[6];
    local_250.StatData.Pad[7] = local_2d8[7];
    local_260 = FVar5;
    local_250.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_250);
    FStatsTrace::Set(&local_260,(long64)auVar32);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  FVar16 = StatPtr_STAT_RayTracingGeometryRequestedMemory;
  if (StatPtr_STAT_RayTracingGeometryRequestedMemory ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryRequestedMemory>)0x0) {
    pFVar12 = ::FName::FName(&local_118,"STAT_RayTracingGeometryRequestedMemory");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryRequestedMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryRequestedMemory
                        ,*pFVar12,L"Requested Memory","STATGROUP_RayTracingGeometry",
                        "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FVar5 = *(FName *)FVar16;
  auVar26 = local_2e0;
  local_2e8 = FVar5;
  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    auVar26 = local_2e0;
    local_240.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
    local_240.StatData.Pad[0] = local_2e0[0];
    local_240.StatData.Pad[1] = local_2e0[1];
    local_240.StatData.Pad[2] = local_2e0[2];
    local_240.StatData.Pad[3] = local_2e0[3];
    local_240.StatData.Pad[4] = local_2e0[4];
    local_240.StatData.Pad[5] = local_2e0[5];
    local_240.StatData.Pad[6] = local_2e0[6];
    local_240.StatData.Pad[7] = local_2e0[7];
    local_258 = FVar5;
    local_240.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_240);
    FStatsTrace::Set(&local_258,(long64)auVar26);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  if (__CsvProfilerStat871 == false) {
    FCsvProfilerTrace::OutputInlineStat("ReferencedSizeMB",_GCsvCategory_RayTracingGeometry.Index);
    __CsvProfilerStat871 = true;
  }
  fVar7 = __real_35800000;
  FCsvProfiler::RecordCustomStat
            ("ReferencedSizeMB",_GCsvCategory_RayTracingGeometry.Index,
             (float)(longlong)auVar32 * __real_35800000,Set);
  if (__CsvProfilerStat872 == false) {
    FCsvProfilerTrace::OutputInlineStat("RequestedSizeMB",_GCsvCategory_RayTracingGeometry.Index);
    __CsvProfilerStat872 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("RequestedSizeMB",_GCsvCategory_RayTracingGeometry.Index,
             (float)(longlong)auVar26 * fVar7,Set);
  if (GRayTracingShowOnScreenWarnings != false) {
    if ((longlong)uVar33 < this->TotalAlwaysResidentSize) {
      local_160.Object = (FCulture *)0x0;
      local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar17 = FText::AsMemory(&local_100,uVar33,(FNumberFormattingOptions *)0x0,&local_160,IEC);
      FText::ToString(pFVar17);
      local_170.Object = (FCulture *)0x0;
      local_170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar17 = FText::AsMemory(&local_110,this->TotalAlwaysResidentSize,
                                (FNumberFormattingOptions *)0x0,&local_170,IEC);
      FText::ToString(pFVar17);
      ::FString::PrintfImpl
                (&local_230,L"RAY TRACING GEOMETRY - ALWAYS RESIDENT MEMORY OVER BUDGET %s / %s");
      FVar29.Data = (FScriptContainerElement *)L"";
      if (local_230.Data.ArrayNum != 0) {
        FVar29.Data = local_230.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_180,(wchar_t *)FVar29.Data);
      UEngine::AddOnScreenDebugMessage
                (GEngine,(ulong64)this,__real_3f800000,FColor::Red,&local_180,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.SharedReferenceCount.ReferenceController);
      FVar20.ReferenceController = local_160.SharedReferenceCount.ReferenceController;
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
        FVar20.ReferenceController = local_160.SharedReferenceCount.ReferenceController;
      }
    }
    else {
      if ((longlong)auVar26 <= (longlong)uVar33) goto LAB_14849d172;
      local_130.Object = (FCulture *)0x0;
      local_130.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar17 = FText::AsMemory(local_e0,uVar33,(FNumberFormattingOptions *)0x0,&local_130,IEC);
      FText::ToString(pFVar17);
      local_140.Object = (FCulture *)0x0;
      local_140.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar17 = FText::AsMemory(&local_f0,(ulong64)auVar26,(FNumberFormattingOptions *)0x0,
                                &local_140,IEC);
      FText::ToString(pFVar17);
      ::FString::PrintfImpl
                (&local_220,L"RAY TRACING GEOMETRY - REQUESTED MEMORY OVER BUDGET %s / %s");
      FVar29.Data = (FScriptContainerElement *)L"";
      if (local_220.Data.ArrayNum != 0) {
        FVar29.Data = local_220.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_150,(wchar_t *)FVar29.Data);
      UEngine::AddOnScreenDebugMessage
                (GEngine,(ulong64)this,__real_3f800000,FColor::Yellow,&local_150,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.SharedReferenceCount.ReferenceController);
      FVar20.ReferenceController = local_130.SharedReferenceCount.ReferenceController;
      if (local_e0[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0[0].TextData.Reference + 0x10))();
        FVar20.ReferenceController = local_130.SharedReferenceCount.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
  }
LAB_14849d172:
  if (local_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data);
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  return;
}

// operator() @ 15052b090

bool __thiscall
`FRayTracingGeometryManager::AddReferencedGeometry'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1717204822035266080>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1717204822035266080>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15052b0d0

bool __thiscall `FRayTracingGeometryManager::Tick'::__l89::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1717204822035266950>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1717204822035266950>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15052b110

bool __thiscall
`FRayTracingGeometryManager::AddReferencedGeometryGroups'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1717204822035266066>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1717204822035266066>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15052b150

bool __thiscall
`FRayTracingGeometryManager::AddReferencedGeometryGroupsForDynamicUpdate'::__l14::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1717204822035266052>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1717204822035266052>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

