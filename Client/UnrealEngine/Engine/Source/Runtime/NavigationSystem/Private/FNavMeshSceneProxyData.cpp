// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 11

// FNavMeshSceneProxyData @ 146dd5970

FNavMeshSceneProxyData * __thiscall
FNavMeshSceneProxyData::FNavMeshSceneProxyData(FNavMeshSceneProxyData *this)

{
  this->bDataGathered = 0;
  this->bNeedsNewData = 1;
  (this->NavMeshDrawOffset).field0_0x0._s_0.Z = 10.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MeshBuilders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshBuilders).ArrayNum = 0;
  (this->MeshBuilders).ArrayMax = 0;
  (this->ThickLineItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThickLineItems).ArrayNum = 0;
  (this->ThickLineItems).ArrayMax = 0;
  (this->TileEdgeLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileEdgeLines).ArrayNum = 0;
  (this->TileEdgeLines).ArrayMax = 0;
  (this->NavMeshEdgeLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavMeshEdgeLines).ArrayNum = 0;
  (this->NavMeshEdgeLines).ArrayMax = 0;
  (this->NavLinkLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavLinkLines).ArrayNum = 0;
  (this->NavLinkLines).ArrayMax = 0;
  (this->ClusterLinkLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusterLinkLines).ArrayNum = 0;
  (this->ClusterLinkLines).ArrayMax = 0;
  (this->AuxLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AuxLines).ArrayNum = 0;
  (this->AuxLines).ArrayMax = 0;
  (this->AuxPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AuxPoints).ArrayNum = 0;
  (this->AuxPoints).ArrayMax = 0;
  (this->AuxBoxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AuxBoxes).ArrayNum = 0;
  (this->AuxBoxes).ArrayMax = 0;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  (this->DebugLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugLabels).ArrayNum = 0;
  (this->DebugLabels).ArrayMax = 0;
  (this->OctreeBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OctreeBounds).ArrayNum = 0;
  (this->OctreeBounds).ArrayMax = 0;
  (this->Bounds).IsValid = '\0';
  (this->NavMeshDrawOffset).field0_0x0._s_0.X = 0.0;
  (this->NavMeshDrawOffset).field0_0x0._s_0.Y = 0.0;
  this->NavDetailFlags = 0;
  return this;
}

// ~FNavMeshSceneProxyData @ 146dd9730

void __thiscall FNavMeshSceneProxyData::~FNavMeshSceneProxyData(FNavMeshSceneProxyData *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->OctreeBounds).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FNavMeshSceneProxyData::FDebugText,int>
            ((FDebugText *)(this->DebugLabels).AllocatorInstance.Data,(this->DebugLabels).ArrayNum);
  pFVar3 = (this->DebugLabels).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FDebugRenderSceneProxy::FMesh,int>
            ((FMesh *)(this->Meshes).AllocatorInstance.Data,(this->Meshes).ArrayNum);
  pFVar3 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AuxBoxes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AuxPoints).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AuxLines).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ClusterLinkLines).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->NavLinkLines).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->NavMeshEdgeLines).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TileEdgeLines).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ThickLineItems).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FNavMeshSceneProxyData::FDebugMeshData,int>
            ((FDebugMeshData *)(this->MeshBuilders).AllocatorInstance.Data,
             (this->MeshBuilders).ArrayNum);
  pFVar3 = (this->MeshBuilders).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146dd9845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// operator= @ 146dda920

FNavMeshSceneProxyData * __thiscall
FNavMeshSceneProxyData::operator=(FNavMeshSceneProxyData *this,FNavMeshSceneProxyData *param_1)

{
  TArray<FNavMeshSceneProxyData::FDebugMeshData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FNavMeshSceneProxyData::FDebugPoint,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDebugRenderSceneProxy::FDebugBox,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FBoxCenterAndExtent,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  undefined4 uVar9;
  FDebugMeshData *pFVar10;
  FScriptContainerElement *pFVar11;
  FMesh *pFVar12;
  FDebugText *pFVar13;
  double dVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uint uVar22;
  
  pTVar1 = &this->MeshBuilders;
  if (pTVar1 != &param_1->MeshBuilders) {
    DestructItems<FNavMeshSceneProxyData::FDebugMeshData,int>
              ((FDebugMeshData *)(pTVar1->AllocatorInstance).Data,(this->MeshBuilders).ArrayNum);
    iVar8 = (param_1->MeshBuilders).ArrayNum;
    piVar2 = &(this->MeshBuilders).ArrayMax;
    pFVar10 = (FDebugMeshData *)(param_1->MeshBuilders).AllocatorInstance.Data;
    (this->MeshBuilders).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar8,*piVar2,&pTVar1->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FNavMeshSceneProxyData::FDebugMeshData,FNavMeshSceneProxyData::FDebugMeshData,int>
                ((pTVar1->AllocatorInstance).Data,pFVar10,iVar8);
    }
  }
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_>::operator=
            (&this->ThickLineItems,&param_1->ThickLineItems);
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_>::operator=
            (&this->TileEdgeLines,&param_1->TileEdgeLines);
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_>::operator=
            (&this->NavMeshEdgeLines,&param_1->NavMeshEdgeLines);
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_>::operator=
            (&this->NavLinkLines,&param_1->NavLinkLines);
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_>::operator=
            (&this->ClusterLinkLines,&param_1->ClusterLinkLines);
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_>::operator=
            (&this->AuxLines,&param_1->AuxLines);
  pTVar3 = &this->AuxPoints;
  if (pTVar3 != &param_1->AuxPoints) {
    iVar8 = (param_1->AuxPoints).ArrayNum;
    piVar2 = &(this->AuxPoints).ArrayMax;
    pFVar11 = (param_1->AuxPoints).AllocatorInstance.Data;
    (this->AuxPoints).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar8,*piVar2,&pTVar3->AllocatorInstance,iVar8,piVar2);
      if (iVar8 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar11,(longlong)iVar8 << 5);
      }
    }
  }
  pTVar4 = &this->AuxBoxes;
  if (pTVar4 != &param_1->AuxBoxes) {
    iVar8 = (param_1->AuxBoxes).ArrayNum;
    piVar2 = &(this->AuxBoxes).ArrayMax;
    pFVar11 = (param_1->AuxBoxes).AllocatorInstance.Data;
    (this->AuxBoxes).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,0x10,iVar8,*piVar2,&pTVar4->AllocatorInstance,iVar8,piVar2);
      if (iVar8 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar11,(longlong)iVar8 * 0xb0);
      }
    }
  }
  pTVar5 = &this->Meshes;
  if (pTVar5 != &param_1->Meshes) {
    DestructItems<FDebugRenderSceneProxy::FMesh,int>
              ((FMesh *)(pTVar5->AllocatorInstance).Data,(this->Meshes).ArrayNum);
    iVar8 = (param_1->Meshes).ArrayNum;
    piVar2 = &(this->Meshes).ArrayMax;
    pFVar12 = (FMesh *)(param_1->Meshes).AllocatorInstance.Data;
    (this->Meshes).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,iVar8,*piVar2,&pTVar5->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FDebugRenderSceneProxy::FMesh,FDebugRenderSceneProxy::FMesh,int>
                ((pTVar5->AllocatorInstance).Data,pFVar12,iVar8);
    }
  }
  pTVar6 = &this->DebugLabels;
  if (pTVar6 != &param_1->DebugLabels) {
    DestructItems<FNavMeshSceneProxyData::FDebugText,int>
              ((FDebugText *)(pTVar6->AllocatorInstance).Data,(this->DebugLabels).ArrayNum);
    iVar8 = (param_1->DebugLabels).ArrayNum;
    piVar2 = &(this->DebugLabels).ArrayMax;
    pFVar13 = (FDebugText *)(param_1->DebugLabels).AllocatorInstance.Data;
    (this->DebugLabels).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar8,*piVar2,&pTVar6->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FNavMeshSceneProxyData::FDebugText,FNavMeshSceneProxyData::FDebugText,int>
                ((pTVar6->AllocatorInstance).Data,pFVar13,iVar8);
    }
  }
  pTVar7 = &this->OctreeBounds;
  if (pTVar7 != &param_1->OctreeBounds) {
    iVar8 = (param_1->OctreeBounds).ArrayNum;
    piVar2 = &(this->OctreeBounds).ArrayMax;
    pFVar11 = (param_1->OctreeBounds).AllocatorInstance.Data;
    (this->OctreeBounds).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar8,*piVar2,&pTVar7->AllocatorInstance,iVar8,piVar2);
      if (iVar8 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar11,(longlong)iVar8 << 6);
      }
    }
  }
  dVar14 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  uVar9 = *(undefined4 *)&this->field_0x120;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar14;
  dVar14 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar14;
  uVar15 = (param_1->Bounds).Pad[0];
  uVar16 = (param_1->Bounds).Pad[1];
  uVar17 = (param_1->Bounds).Pad[2];
  uVar18 = (param_1->Bounds).Pad[3];
  uVar19 = (param_1->Bounds).Pad[4];
  uVar20 = (param_1->Bounds).Pad[5];
  uVar21 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar15;
  (this->Bounds).Pad[1] = uVar16;
  (this->Bounds).Pad[2] = uVar17;
  (this->Bounds).Pad[3] = uVar18;
  (this->Bounds).Pad[4] = uVar19;
  (this->Bounds).Pad[5] = uVar20;
  (this->Bounds).Pad[6] = uVar21;
  dVar14 = (param_1->NavMeshDrawOffset).field0_0x0._s_0.Y;
  (this->NavMeshDrawOffset).field0_0x0._s_0.X = (param_1->NavMeshDrawOffset).field0_0x0._s_0.X;
  (this->NavMeshDrawOffset).field0_0x0._s_0.Y = dVar14;
  (this->NavMeshDrawOffset).field0_0x0._s_0.Z = (param_1->NavMeshDrawOffset).field0_0x0._s_0.Z;
  uVar22 = (ZPULL(uVar9,0,1) ^ param_1->bDataGathered) & 1 ^ uVar9;
  *(uint *)&this->field_0x120 = uVar22;
  *(uint *)&this->field_0x120 = (uVar22 ^ *(uint *)&param_1->field_0x120) & 2 ^ uVar22;
  this->NavDetailFlags = param_1->NavDetailFlags;
  return this;
}

// operator() @ 146ddbb60

FString * __thiscall
`FNavMeshSceneProxyData::GatherData'::__l24::<lambda_2>::operator()
          (void *this,FString *__return_storage_ptr__,Type param_1)

{
  wchar_t *pwVar1;
  
  if (param_1 == Monotone) {
    ::FString::FString(__return_storage_ptr__,L"Monotone");
    return __return_storage_ptr__;
  }
  if (param_1 == Watershed) {
    ::FString::FString(__return_storage_ptr__,L"Watershed");
    return __return_storage_ptr__;
  }
  pwVar1 = L"Unknown";
  if (param_1 == ChunkyMonotone) {
    pwVar1 = L"ChunkyMonotone";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// operator() @ 146ddbbe0

bool __thiscall
`FNavMeshSceneProxyData::GatherData'::__l225::<lambda_4>::operator()
          (void *this,uint param_1,uint param_2,FBoxCenterAndExtent *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  undefined1 auVar12 [16];
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ForAnyElementType *pFVar19;
  FString local_98 [4];
  undefined7 uStack_57;
  
  if (*(char *)this != '\0') {
    lVar18 = *(longlong *)((longlong)this + 8);
    pFVar19 = (ForAnyElementType *)(lVar18 + 0xc0);
    if ((((FBoxCenterAndExtent *)pFVar19->Data <= param_3) &&
        (param_3 < (FBoxCenterAndExtent *)pFVar19->Data + *(int *)(lVar18 + 0xcc))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      uVar14 = (*pcVar10)();
      return (bool)uVar14;
    }
    iVar15 = *(int *)(lVar18 + 200);
    if (iVar15 == *(int *)(lVar18 + 0xcc)) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1040,pFVar19,(int *)(lVar18 + 0xcc));
    }
    *(int *)(lVar18 + 200) = iVar15 + 1;
    dVar2 = (param_3->Center).field0_0x0._s_0.Y;
    pFVar9 = pFVar19->Data;
    lVar18 = (longlong)iVar15 * 0x40;
    *(double *)(pFVar9 + lVar18) = (param_3->Center).field0_0x0._s_0.X;
    *(double *)(pFVar9 + lVar18 + 8) = dVar2;
    dVar2 = (param_3->Center).field0_0x0._s_0.W;
    *(double *)(pFVar9 + lVar18 + 0x10) = (param_3->Center).field0_0x0._s_0.Z;
    *(double *)(pFVar9 + lVar18 + 0x10 + 8) = dVar2;
    dVar2 = (param_3->Extent).field0_0x0._s_0.Y;
    *(double *)(pFVar9 + lVar18 + 0x20) = (param_3->Extent).field0_0x0._s_0.X;
    *(double *)(pFVar9 + lVar18 + 0x20 + 8) = dVar2;
    dVar2 = (param_3->Extent).field0_0x0._s_0.W;
    *(double *)(pFVar9 + lVar18 + 0x30) = (param_3->Extent).field0_0x0._s_0.Z;
    *(double *)(pFVar9 + lVar18 + 0x30 + 8) = dVar2;
    if (*(char *)((longlong)this + 1) != '\0') {
      lVar18 = *(longlong *)((longlong)this + 0x18);
      uVar16 = 0;
      if ((int)param_2 < *(int *)(lVar18 + 0x98)) {
        uVar16 = ~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      iVar15 = *(int *)((longlong)(int)param_2 * 0x490 + 0x488 + *(longlong *)(lVar18 + 0x90));
      if ((iVar15 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + iVar15;
      lVar18 = *(longlong *)((longlong)this + 8);
      ::FString::PrintfImpl(local_98,L"%d elements");
      iVar15 = *(int *)(lVar18 + 0xb8);
      if (iVar15 == *(int *)(lVar18 + 0xbc)) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,(ForAnyElementType *)(lVar18 + 0xb0),(int *)(lVar18 + 0xbc));
      }
      lVar17 = (longlong)iVar15;
      *(int *)(lVar18 + 0xb8) = iVar15 + 1;
      lVar18 = *(longlong *)(lVar18 + 0xb0);
      dVar2 = (param_3->Center).field0_0x0._s_0.Y;
      dVar3 = (param_3->Center).field0_0x0._s_0.Z;
      *(double *)(lVar18 + lVar17 * 0x28) = (param_3->Center).field0_0x0._s_0.X;
      pdVar1 = (double *)(lVar18 + 8 + lVar17 * 0x28);
      *pdVar1 = dVar2;
      pdVar1[1] = dVar3;
      ::FString::FString((FString *)(lVar18 + lVar17 * 0x28 + 0x18),local_98);
      if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
      }
    }
  }
  if (*(char *)((longlong)this + 2) != '\0') {
    dVar2 = (param_3->Center).field0_0x0._s_0.Z;
    dVar3 = (param_3->Center).field0_0x0._s_0.Y;
    pdVar1 = *(double **)((longlong)this + 0x10);
    dVar4 = (param_3->Extent).field0_0x0._s_0.X;
    dVar5 = (param_3->Extent).field0_0x0._s_0.Z;
    dVar6 = (param_3->Center).field0_0x0._s_0.X;
    dVar7 = (param_3->Extent).field0_0x0._s_0.Y;
    dVar11 = dVar5 + (param_3->Center).field0_0x0._s_0.Z;
    dVar8 = (param_3->Center).field0_0x0._s_0.Y;
    *pdVar1 = (param_3->Center).field0_0x0._s_0.X - dVar4;
    pdVar1[1] = dVar3 - dVar7;
    pdVar1[2] = dVar2 - dVar5;
    pdVar1[3] = dVar4 + dVar6;
    auVar12._8_4_ = SUB84(dVar11,0);
    auVar12._0_8_ = dVar7 + dVar8;
    auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])(pdVar1 + 4) = auVar12;
    pdVar1[6] = (double)CONCAT71(uStack_57,1);
  }
  return true;
}

// operator() @ 146ddbeb0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
`FNavMeshSceneProxyData::GatherData'::__l225::<lambda_5>::operator()
          (void *this,uint param_1,FNavigationOctreeElement *param_2)

{
  FScriptContainerElement *pFVar1;
  FNavigationRelevantData *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ForAnyElementType *pFVar11;
  TTransform<double> *pTVar12;
  TTransform<double> *pTVar13;
  undefined1 local_res8 [8];
  TTransform<double> *local_e8;
  ulonglong local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  FRecastGeometryCache local_98;
  FReadAccessScope local_68;
  undefined1 local_50 [24];
  FReadAccessScope local_38;
  
  if ((*(char *)this != '\0') && (*(char *)((longlong)this + 1) != '\0')) {
    local_d8 = (param_2->Bounds).Origin.field0_0x0._s_0.X;
    dStack_d0 = (param_2->Bounds).Origin.field0_0x0._s_0.Y;
    lVar8 = *(longlong *)((longlong)this + 8);
    local_b8 = (param_2->Bounds).BoxExtent.field0_0x0._s_0.X;
    dStack_b0 = (param_2->Bounds).BoxExtent.field0_0x0._s_0.Y;
    pFVar11 = (ForAnyElementType *)(lVar8 + 0xc0);
    local_c8 = (param_2->Bounds).Origin.field0_0x0._s_0.Z;
    local_a8 = (param_2->Bounds).BoxExtent.field0_0x0._s_0.Z;
    uStack_a0 = 0;
    uStack_c0 = 0;
    local_50._16_8_ = local_a8;
    if ((pFVar11->Data <= (FScriptContainerElement *)&local_d8) &&
       (((FScriptContainerElement *)&local_d8 <
         pFVar11->Data + (longlong)*(int *)(lVar8 + 0xcc) * 0x40 &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)(lVar8 + 200);
    if (iVar7 == *(int *)(lVar8 + 0xcc)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1040,pFVar11,(int *)(lVar8 + 0xcc));
    }
    *(int *)(lVar8 + 200) = iVar7 + 1;
    pFVar1 = pFVar11->Data;
    lVar8 = (longlong)iVar7 * 0x40;
    *(double *)(pFVar1 + lVar8) = local_d8;
    *(double *)(pFVar1 + lVar8 + 8) = dStack_d0;
    *(double *)(pFVar1 + lVar8 + 0x10) = local_c8;
    *(undefined8 *)(pFVar1 + lVar8 + 0x10 + 8) = uStack_c0;
    *(double *)(pFVar1 + lVar8 + 0x20) = local_b8;
    *(double *)(pFVar1 + lVar8 + 0x20 + 8) = dStack_b0;
    *(double *)(pFVar1 + lVar8 + 0x30) = local_a8;
    *(undefined8 *)(pFVar1 + lVar8 + 0x30 + 8) = uStack_a0;
  }
  if (*(char *)((longlong)this + 2) != '\0') {
    pFVar2 = (param_2->Data).Object;
    lVar8 = *(longlong *)((longlong)this + 0x10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar2->ShouldUseGeometryDelegate,&local_68);
    if (((*(int *)&(pFVar2->ShouldUseGeometryDelegate).field_0x10 == 0) ||
        (plVar9 = *(longlong **)&(pFVar2->ShouldUseGeometryDelegate).field_0x8,
        plVar9 == (longlong *)0x0)) || (cVar6 = (**(code **)(*plVar9 + 0x38))(), cVar6 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pFVar2 = (param_2->Data).Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar2->ShouldUseGeometryDelegate,&local_38);
      if (*(int *)&(pFVar2->ShouldUseGeometryDelegate).field_0x10 == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)&(pFVar2->ShouldUseGeometryDelegate).field_0x8;
      }
      cVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar8 + 0x2d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      if (cVar6 == '\0') {
        return;
      }
    }
    pFVar2 = (param_2->Data).Object;
    if (*(int *)&(pFVar2->CollisionData).field_0x10 != 0) {
      FRecastGeometryCache::FRecastGeometryCache(&local_98,*(uchar **)&pFVar2->CollisionData);
      pFVar2 = (param_2->Data).Object;
      uVar3 = *(undefined8 *)((longlong)this + 0x28);
      local_e8 = (TTransform<double> *)0x0;
      local_e0 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar2->NavDataPerInstanceTransformDelegate,(FReadAccessScope *)local_50);
      if ((*(int *)&(pFVar2->NavDataPerInstanceTransformDelegate).field_0x10 != 0) &&
         (plVar9 = *(longlong **)&(pFVar2->NavDataPerInstanceTransformDelegate).field_0x8,
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x68))(plVar9,uVar3,&local_e8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_50);
      iVar7 = (int)local_e0;
      uVar10 = (ulonglong)(int)local_e0;
      if ((int)local_e0 == 0) {
        FNavMeshRenderingHelpers::AddRecastGeometry
                  (*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                    ((longlong)this + 0x18),
                   *(TArray<unsigned_int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x20),
                   local_98.Verts,local_98.Header.NumVerts,local_98.Indices,local_98.Header.NumFaces
                   ,&UE::Math::TTransform<double>::Identity);
      }
      else {
        pTVar13 = local_e8 + uVar10;
        pTVar12 = local_e8;
        while( true ) {
          if ((int)uVar10 != iVar7) {
            `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pTVar12 == pTVar13) break;
          FNavMeshRenderingHelpers::AddRecastGeometry
                    (*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                      ((longlong)this + 0x18),
                     *(TArray<unsigned_int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x20),
                     local_98.Verts,local_98.Header.NumVerts,local_98.Indices,
                     local_98.Header.NumFaces,pTVar12);
          uVar10 = local_e0 & 0xffffffff;
          pTVar12 = pTVar12 + 1;
        }
      }
      if (local_e8 != (TTransform<double> *)0x0) {
        FMemory::Free(local_e8);
      }
    }
  }
  return;
}

// AddMeshForInternalData @ 146ddd5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavMeshSceneProxyData::AddMeshForInternalData
          (FNavMeshSceneProxyData *this,FRecastInternalDebugData *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  uint *puVar3;
  FDebugMeshData *pFVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FColor_u_0_s_0 FVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  code *pcVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  longlong *plVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  byte bVar30;
  ForAnyElementType FVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  FDebugMeshData *pFVar36;
  FColor_u_0 FVar37;
  uint uVar38;
  ForElementType<unsigned_int> FVar39;
  ulonglong uVar40;
  int *piVar41;
  longlong lVar42;
  longlong lVar43;
  undefined1 auStackY_2c8 [32];
  undefined1 local_26f [3];
  int local_26c;
  int local_268;
  int local_264;
  uint local_260;
  int local_25c;
  FDebugMeshData *local_258;
  FColor_u_0 *local_250;
  FColor_u_0 local_248 [2];
  longlong local_240;
  int local_238;
  uint uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_230;
  undefined4 local_228;
  uint uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  int local_218;
  undefined4 uStack_214;
  int local_210 [3];
  int local_204;
  int local_200;
  int local_1fc;
  longlong *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  longlong *local_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *local_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  FColor_u_0 local_170 [2];
  uint *local_168;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130 [2];
  undefined4 local_fc;
  undefined1 local_f8 [32];
  ForElementType<unsigned_int> local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  FScriptContainerElement local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((param_1->TriangleIndices).ArrayNum < 1) goto LAB_146ddd638;
  iVar28 = (param_1->TriangleColors).ArrayNum;
  if ((param_1->TriangleVertices).ArrayNum != iVar28) {
    bVar25 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5323954688897317460>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\NavMeshRenderingComponent.cpp"
                        ,0x5ac,"Vertices.Num() == Colors.Num()");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    goto LAB_146ddd638;
  }
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (ForElementType<unsigned_int>)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = -1;
  local_c4 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  uVar38 = *(uint *)(param_1->TriangleIndices).AllocatorInstance.Data;
  uVar32 = 0;
  if ((int)uVar38 < iVar28) {
    uVar32 = ~uVar38 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  uStack_214 = 1;
  iVar28 = *(int *)((param_1->TriangleColors).AllocatorInstance.Data + (longlong)(int)uVar38 * 4);
  local_218 = iVar28;
  if (local_c4 == 0) {
    iVar27 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,4,1,(ForAnyElementType *)local_f8,(int *)(local_f8 + 8),
                        (int *)(local_f8 + 0xc));
    iVar26 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),1);
    FVar39 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
    if (local_d8 != (ForElementType<unsigned_int>)0x0) {
      FVar39 = local_d8;
    }
    uVar38 = iVar26 >> 0x1f & 0x1f;
    iVar26 = iVar26 + uVar38;
    puVar3 = (uint *)((longlong)FVar39 + (longlong)(iVar26 >> 5) * 4);
    *puVar3 = *puVar3 & ~(1 << (((byte)iVar26 & 0x1f) - (char)uVar38 & 0x1f));
    iVar26 = local_c8;
  }
  else {
    local_c4 = local_c4 + -1;
    iVar26 = *(int *)(local_f8._0_8_ + (longlong)local_c8 * 0x10 + 4);
    iVar27 = local_c8;
    if (local_c4 != 0) {
      *(undefined4 *)(local_f8._0_8_ + (longlong)iVar26 * 0x10) = 0xffffffff;
    }
  }
  local_c8 = iVar26;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_f8,(FSparseArrayAllocationInfo *)&local_170[0]._s_0,iVar27);
  if (local_168 != (uint *)0x0) {
    *(ulonglong *)local_168 = CONCAT44(uStack_214,local_218);
    local_168[2] = 0xffffffff;
  }
  uVar38 = *local_168;
  if ((local_f8._8_4_ - local_c4 != 1) && (local_f8._8_4_ != local_c4)) {
    FVar31.Data = local_c0;
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FVar31.Data = local_b8.Data;
    }
    for (FVar37 = (FColor_u_0)
                  ((FColor_u_0 *)(FVar31.Data + (ulonglong)(local_b0 - 1 & uVar38) * 4))->Bits;
        FVar37.Bits != 0xffffffff;
        FVar37 = (FColor_u_0)
                 ((FColor_u_0 *)(local_f8._0_8_ + (longlong)(int)FVar37.Bits * 0x10 + 8))->Bits) {
      if (*(uint *)(local_f8._0_8_ + (longlong)(int)FVar37.Bits * 0x10) == uVar38) {
        if (FVar37.Bits != 0xffffffff) {
          *(undefined8 *)(local_f8._0_8_ + (longlong)(int)FVar37.Bits * 0x10) =
               *(undefined8 *)local_168;
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_f8,local_170[0].Bits,1);
          goto LAB_146dddb49;
        }
        break;
      }
    }
  }
  uVar35 = 1;
  uVar32 = local_f8._8_4_ - local_c4;
  if (3 < uVar32) {
    uVar33 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
    lVar42 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_210[2] = (int)lVar42;
    uVar35 = 1 << ((byte)lVar42 & 0x1f);
  }
  FVar37 = local_170[0];
  if (((int)uVar32 < 1) || ((int)uVar35 <= (int)local_b0)) {
    uVar38 = local_b0 - 1 & uVar38;
    local_168[3] = uVar38;
    FVar31.Data = local_c0;
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FVar31.Data = local_b8.Data;
    }
    uVar33 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar38;
    local_168[2] = *(uint *)(FVar31.Data + uVar33 * 4);
    ((FColor_u_0 *)(FVar31.Data + uVar33 * 4))->Bits = (uint)local_170[0];
  }
  else {
    local_b0 = uVar35;
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,4);
    }
    if (uVar35 != 0) {
      uVar38 = uVar35;
      if (uVar35 < 2) {
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          uVar38 = 0;
          goto LAB_146ddd957;
        }
      }
      else {
LAB_146ddd957:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,uVar38,4);
      }
      if (0 < (int)uVar35) {
        uVar33 = 0;
        uVar40 = (ulonglong)uVar35;
        do {
          FVar31.Data = local_c0;
          if (local_b8.Data != (FScriptContainerElement *)0x0) {
            FVar31.Data = local_b8.Data;
          }
          uVar29 = (longlong)(int)uVar35 - 1U & uVar33;
          uVar33 = uVar33 + 1;
          *(undefined4 *)(FVar31.Data + uVar29 * 4) = 0xffffffff;
          uVar40 = uVar40 - 1;
        } while (uVar40 != 0);
      }
    }
    if (local_b0 != 0) {
      pTStack_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
      uStack_234 = 1;
      local_238 = 0;
      uStack_224 = 0;
      iStack_220 = 0;
      if (local_d0 != 0) {
        FVar39 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
        if (local_d8 != (ForElementType<unsigned_int>)0x0) {
          FVar39 = local_d8;
        }
        uVar38 = *(uint *)FVar39;
        iStack_220 = 0;
        local_238 = 0;
        while (uVar38 == 0) {
          iStack_220 = iStack_220 + 0x20;
          lVar42 = (longlong)local_238;
          local_238 = local_238 + 1;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_238)
          goto LAB_146ddda5a;
          uVar38 = ((uint *)((longlong)FVar39 + 4))[lVar42];
        }
        uStack_234 = -uVar38 & uVar38;
        uVar33 = (ulonglong)uStack_234 * 2 + 1;
        lVar42 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar42 == 0; lVar42 = lVar42 + -1) {
          }
        }
        local_204 = (int)lVar42;
        uStack_224 = iStack_220 + -1 + local_204;
        if ((int)local_d0 < (int)uStack_224) {
LAB_146ddda5a:
          uStack_224 = local_d0;
        }
      }
      local_228 = 0xffffffff;
      local_1f8 = (longlong *)local_f8;
      local_1f0._padding_ = CONCAT44(uStack_234,local_238);
      local_1f0.CurrentBitIndex = uStack_224;
      local_1f0.UnvisitedBitMask = 0xffffffff;
      local_1f0._28_4_ = uStack_21c;
      local_1f0.BaseBitIndex = iStack_220;
      uVar38 = uStack_224;
      local_1f0.Array = pTStack_230;
      if ((int)uStack_224 < (int)local_d0) {
        do {
          lVar42 = *local_1f8;
          lVar43 = (longlong)(int)uVar38 * 0x10;
          uVar32 = local_b0 - 1 & *(uint *)(lVar43 + lVar42);
          *(uint *)(lVar43 + 0xc + lVar42) = uVar32;
          FVar31.Data = local_c0;
          if (local_b8.Data != (FScriptContainerElement *)0x0) {
            FVar31.Data = local_b8.Data;
          }
          uVar33 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar32;
          *(undefined4 *)(lVar43 + 8 + lVar42) = *(undefined4 *)(FVar31.Data + uVar33 * 4);
          *(uint *)(FVar31.Data + uVar33 * 4) = uVar38;
          local_1f0.UnvisitedBitMask = local_1f0.UnvisitedBitMask & ~local_1f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f0);
          uVar38 = local_1f0.CurrentBitIndex;
        } while (local_1f0.CurrentBitIndex < (local_1f0.Array)->NumBits);
      }
    }
  }
LAB_146dddb49:
  iVar27 = (param_1->TriangleIndices).ArrayNum;
  uVar38 = 3;
  if (3 < iVar27) {
    lVar42 = 0xc;
    do {
      uVar32 = 0;
      if ((int)uVar38 < iVar27) {
        uVar32 = ~uVar38 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      uVar32 = *(uint *)((param_1->TriangleIndices).AllocatorInstance.Data + lVar42);
      uVar35 = 0;
      if ((int)uVar32 < (param_1->TriangleColors).ArrayNum) {
        uVar35 = ~uVar32 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      iVar27 = *(int *)((param_1->TriangleColors).AllocatorInstance.Data + (longlong)(int)uVar32 * 4
                       );
      if (iVar27 == iVar28) {
        *(int *)(local_f8._0_8_ + (longlong)(int)FVar37.Bits * 0x10 + 4) =
             *(int *)(local_f8._0_8_ + (longlong)(int)FVar37.Bits * 0x10 + 4) + 1;
      }
      else {
        local_210[1] = 1;
        local_210[0] = iVar27;
        TSet<FNavMeshRenderingHelpers::FUniqueColor,DefaultKeyFuncs<FNavMeshRenderingHelpers::FUniqueColor,0>,FDefaultSetAllocator>
        ::Emplace<FNavMeshRenderingHelpers::FUniqueColor>
                  ((TSet<FNavMeshRenderingHelpers::FUniqueColor,DefaultKeyFuncs<FNavMeshRenderingHelpers::FUniqueColor,0>,FDefaultSetAllocator>
                    *)local_f8,(FUniqueColor *)&local_248[0]._s_0,(bool *)local_210);
        iVar28 = iVar27;
        FVar37 = local_248[0];
      }
      iVar27 = (param_1->TriangleIndices).ArrayNum;
      uVar38 = uVar38 + 3;
      lVar42 = lVar42 + 0xc;
    } while ((int)uVar38 < iVar27);
  }
  uVar38 = local_d0;
  iStack_1c8 = 0;
  local_1b0 = 0;
  uStack_1c4 = 1;
  uStack_1b4 = 0;
  if (local_d0 != 0) {
    FVar39 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
    if (local_d8 != (ForElementType<unsigned_int>)0x0) {
      FVar39 = local_d8;
    }
    uVar32 = *(uint *)FVar39;
    while (uVar32 == 0) {
      lVar42 = (longlong)iStack_1c8;
      local_1b0 = local_1b0 + 0x20;
      iStack_1c8 = iStack_1c8 + 1;
      uStack_1b4 = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1c8)
      goto LAB_146dddce0;
      uVar32 = ((uint *)((longlong)FVar39 + 4))[lVar42];
    }
    uStack_1c4 = -uVar32 & uVar32;
    uVar33 = (ulonglong)uStack_1c4 * 2 + 1;
    lVar42 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_200 = (int)lVar42;
    uStack_1b4 = local_1b0 + -1 + local_200;
    if ((int)local_d0 < (int)uStack_1b4) {
      uStack_1b4 = local_d0;
    }
  }
LAB_146dddce0:
  local_1d0 = (longlong *)local_f8;
  uStack_1ac = local_fc;
  local_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  uVar32 = local_d0 & 0xffffffe0;
  iStack_1a8 = local_f8._8_4_ - local_c4;
  uStack_1b8 = 0xffffffff;
  TStack_198.CurrentBitIndex = uStack_1b4;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  TStack_198._padding_ = CONCAT44(uStack_1c4,iStack_1c8);
  iVar28 = (int)local_d0 >> 5;
  TStack_198._28_4_ = local_fc;
  TStack_198.BaseBitIndex = local_1b0;
  uStack_178 = CONCAT44(uStack_1a4,iStack_1a8);
  bVar30 = (byte)local_d0;
  local_260 = local_d0;
  local_1a0 = local_1d0;
  TStack_198.Array = local_1c0;
  if (((int)local_d0 < 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar25)) {
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  if (uVar38 != local_d0) {
    FVar39 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
    if (local_d8 != (ForElementType<unsigned_int>)0x0) {
      FVar39 = local_d8;
    }
    uVar38 = -1 << (bVar30 & 0x1f) & *(uint *)((longlong)FVar39 + (longlong)iVar28 * 4);
    while (uVar38 == 0) {
      lVar42 = (longlong)iVar28;
      uVar32 = uVar32 + 0x20;
      iVar28 = iVar28 + 1;
      local_260 = local_d0;
      uVar38 = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_146ddde10;
      uVar38 = ((uint *)((longlong)FVar39 + 4))[lVar42];
    }
    uVar33 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
    lVar42 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_1fc = (int)lVar42;
    local_260 = (uVar32 - 1) + local_1fc;
    uVar38 = local_260;
    if ((int)local_d0 < (int)local_260) {
      local_260 = local_d0;
      uVar38 = local_d0;
    }
  }
LAB_146ddde10:
  while( true ) {
    plVar24 = local_1a0;
    if ((int)local_1a0[1] - *(int *)((longlong)local_1a0 + 0x34) != (int)uStack_178) {
      local_26f[0] = 0;
      `TSparseArray<TSparseSetElement<FNavMeshRenderingHelpers::FUniqueColor>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_26f);
    }
    if (((TStack_198.CurrentBitIndex == uVar38) &&
        (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
       (plVar24 == (longlong *)local_f8)) break;
    piVar41 = &(this->MeshBuilders).ArrayMax;
    local_250 = (FColor_u_0 *)((longlong)TStack_198.CurrentBitIndex * 0x10 + *plVar24);
    uVar38 = local_250[1].Bits * 3;
    iVar28 = (this->MeshBuilders).ArrayNum;
    if (iVar28 == *piVar41) {
      iVar28 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(this->MeshBuilders).AllocatorInstance,piVar41);
    }
    (this->MeshBuilders).ArrayNum = iVar28 + 1;
    pFVar4 = (FDebugMeshData *)
             ((this->MeshBuilders).AllocatorInstance.Data + (longlong)iVar28 * 0x28);
    local_258 = pFVar4;
    DefaultConstructItems<FNavMeshSceneProxyData::FDebugMeshData,int>(pFVar4,1);
    pTVar1 = &pFVar4->Indices;
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
    }
    piVar41 = &(pFVar4->Indices).ArrayMax;
    if ((pFVar4->Indices).ArrayMax < (int)uVar38) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar38,&pTVar1->AllocatorInstance,(pFVar4->Indices).ArrayNum,piVar41);
    }
    if ((pFVar4->Vertices).ArrayMax < (int)uVar38) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,uVar38,(ForAnyElementType *)pFVar4,(pFVar4->Vertices).ArrayNum,
                 &(pFVar4->Vertices).ArrayMax);
    }
    iVar28 = (param_1->TriangleIndices).ArrayNum;
    uVar38 = 0;
    pFVar36 = pFVar4;
    if (0 < iVar28) {
      local_240 = 0;
      do {
        lVar42 = local_240;
        uVar32 = 0;
        if ((int)uVar38 < iVar28) {
          uVar32 = ~uVar38 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        uVar32 = *(uint *)((param_1->TriangleIndices).AllocatorInstance.Data + lVar42);
        uVar35 = 0;
        if ((int)uVar32 < (param_1->TriangleColors).ArrayNum) {
          uVar35 = ~uVar32 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        FVar17 = ((FColor_u_0 *)
                 ((param_1->TriangleColors).AllocatorInstance.Data + (longlong)(int)uVar32 * 4))->
                 _s_0;
        pFVar36 = local_258;
        if (FVar17 == (FColor_u_0_s_0)local_250->Bits) {
          local_25c = (local_258->Vertices).ArrayNum;
          uVar32 = 0;
          if ((int)uVar38 < (param_1->TriangleIndices).ArrayNum) {
            uVar32 = ~uVar38 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          uVar32 = *(uint *)((param_1->TriangleIndices).AllocatorInstance.Data + lVar42);
          lVar42 = (longlong)(int)uVar32;
          uVar35 = 0;
          if ((int)uVar32 < (param_1->TriangleVertices).ArrayNum) {
            uVar35 = ~uVar32 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          pFVar5 = (param_1->TriangleVertices).AllocatorInstance.Data;
          local_160._s_0.X =
               (this->NavMeshDrawOffset).field0_0x0._s_0.X + *(double *)(pFVar5 + lVar42 * 0x18);
          local_160._s_0.Y =
               *(double *)(pFVar5 + lVar42 * 0x18 + 8) + (this->NavMeshDrawOffset).field0_0x0._s_0.Y
          ;
          local_160._s_0.Z =
               *(double *)(pFVar5 + lVar42 * 0x18 + 0x10) +
               (this->NavMeshDrawOffset).field0_0x0._s_0.Z;
          FNavMeshRenderingHelpers::AddVertex
                    (local_258,(TVector<double> *)&local_160._s_0,(FColor)FVar17);
          uVar32 = 0;
          if ((int)(uVar38 + 1) < (param_1->TriangleIndices).ArrayNum) {
            uVar32 = ~(uVar38 + 1) >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          uVar32 = *(uint *)((param_1->TriangleIndices).AllocatorInstance.Data + local_240 + 4);
          lVar42 = (longlong)(int)uVar32;
          uVar35 = 0;
          if ((int)uVar32 < (param_1->TriangleVertices).ArrayNum) {
            uVar35 = ~uVar32 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          pFVar5 = (param_1->TriangleVertices).AllocatorInstance.Data;
          local_148._s_0.X =
               (this->NavMeshDrawOffset).field0_0x0._s_0.X + *(double *)(pFVar5 + lVar42 * 0x18);
          local_148._s_0.Y =
               *(double *)(pFVar5 + lVar42 * 0x18 + 8) + (this->NavMeshDrawOffset).field0_0x0._s_0.Y
          ;
          local_148._s_0.Z =
               *(double *)(pFVar5 + lVar42 * 0x18 + 0x10) +
               (this->NavMeshDrawOffset).field0_0x0._s_0.Z;
          FNavMeshRenderingHelpers::AddVertex
                    (local_258,(TVector<double> *)&local_148._s_0,(FColor)FVar17);
          uVar32 = 0;
          if ((int)(uVar38 + 2) < (param_1->TriangleIndices).ArrayNum) {
            uVar32 = ~(uVar38 + 2) >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          lVar42 = local_240;
          uVar32 = *(uint *)((param_1->TriangleIndices).AllocatorInstance.Data + local_240 + 8);
          lVar43 = (longlong)(int)uVar32;
          uVar35 = 0;
          if ((int)uVar32 < (param_1->TriangleVertices).ArrayNum) {
            uVar35 = ~uVar32 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          pFVar36 = local_258;
          pFVar5 = (param_1->TriangleVertices).AllocatorInstance.Data;
          local_130[0]._0_8_ =
               (this->NavMeshDrawOffset).field0_0x0._s_0.X + *(double *)(pFVar5 + lVar43 * 0x18);
          local_130[0]._8_8_ =
               *(double *)(pFVar5 + lVar43 * 0x18 + 8) + (this->NavMeshDrawOffset).field0_0x0._s_0.Y
          ;
          local_130[0]._16_8_ =
               *(double *)(pFVar5 + lVar43 * 0x18 + 0x10) +
               (this->NavMeshDrawOffset).field0_0x0._s_0.Z;
          FNavMeshRenderingHelpers::AddVertex
                    (local_258,(TVector<double> *)&local_130[0]._s_0,(FColor)FVar17);
          iVar28 = local_25c;
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          local_26c = local_25c;
          if (((pFVar5 <= (FScriptContainerElement *)&local_26c) &&
              ((FScriptContainerElement *)&local_26c < pFVar5 + (longlong)*piVar41 * 4)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          iVar27 = (pFVar4->Indices).ArrayNum;
          if (iVar27 == *piVar41) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar1->AllocatorInstance,piVar41);
          }
          (pFVar4->Indices).ArrayNum = iVar27 + 1;
          *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar27 * 4) = local_26c;
          local_268 = iVar28 + 1;
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_268) &&
              ((FScriptContainerElement *)&local_268 < pFVar5 + (longlong)*piVar41 * 4)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          iVar27 = (pFVar4->Indices).ArrayNum;
          if (iVar27 == *piVar41) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar1->AllocatorInstance,piVar41);
          }
          (pFVar4->Indices).ArrayNum = iVar27 + 1;
          *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar27 * 4) = local_268;
          local_264 = iVar28 + 2;
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_264) &&
              ((FScriptContainerElement *)&local_264 < pFVar5 + (longlong)*piVar41 * 4)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          iVar28 = (pFVar4->Indices).ArrayNum;
          if (iVar28 == *piVar41) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar1->AllocatorInstance,piVar41);
          }
          (pFVar4->Indices).ArrayNum = iVar28 + 1;
          *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar28 * 4) = local_264;
        }
        iVar28 = (param_1->TriangleIndices).ArrayNum;
        local_240 = lVar42 + 0xc;
        uVar38 = uVar38 + 3;
      } while ((int)uVar38 < iVar28);
    }
    (pFVar36->ClusterColor).field0_0x0 = *local_250;
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
    uVar38 = local_260;
  }
  local_b0 = 0;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  TSparseArray<TSparseSetElement<FNavMeshRenderingHelpers::FUniqueColor>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNavMeshRenderingHelpers::FUniqueColor>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FNavMeshRenderingHelpers::FUniqueColor>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
LAB_146ddd638:
  iVar28 = (param_1->LineVertices).ArrayNum;
  if (0 < iVar28) {
    if (iVar28 == (param_1->LineColors).ArrayNum) {
      uVar38 = 0;
      if (0 < iVar28) {
        lVar43 = 0;
        lVar42 = 0;
        do {
          uVar32 = 0;
          if ((int)uVar38 < (param_1->LineColors).ArrayNum) {
            uVar32 = ~uVar38 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          pFVar5 = (param_1->LineColors).AllocatorInstance.Data;
          uVar32 = 0;
          if ((int)(uVar38 + 1) < (param_1->LineVertices).ArrayNum) {
            uVar32 = ~(uVar38 + 1) >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          pFVar18 = (param_1->LineVertices).AllocatorInstance.Data;
          dVar15 = (this->NavMeshDrawOffset).field0_0x0._s_0.X;
          dVar16 = *(double *)(pFVar18 + lVar42 + 0x20);
          dVar23 = *(double *)(pFVar18 + lVar42 + 0x28);
          dVar6 = *(double *)(pFVar18 + lVar42 + 0x18);
          dVar7 = (this->NavMeshDrawOffset).field0_0x0._s_0.Y;
          dVar8 = (this->NavMeshDrawOffset).field0_0x0._s_0.Z;
          uVar32 = 0;
          if ((int)uVar38 < (param_1->LineVertices).ArrayNum) {
            uVar32 = ~uVar38 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          pFVar18 = (param_1->LineVertices).AllocatorInstance.Data;
          piVar41 = &(this->AuxLines).ArrayMax;
          dVar9 = (this->NavMeshDrawOffset).field0_0x0._s_0.X;
          dVar10 = *(double *)(pFVar18 + lVar42 + 8);
          dVar11 = *(double *)(pFVar18 + lVar42 + 0x10);
          dVar12 = *(double *)(pFVar18 + lVar42);
          iVar28 = (this->AuxLines).ArrayNum;
          dVar13 = (this->NavMeshDrawOffset).field0_0x0._s_0.Y;
          dVar14 = (this->NavMeshDrawOffset).field0_0x0._s_0.Z;
          if (iVar28 == *piVar41) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&(this->AuxLines).AllocatorInstance,piVar41);
          }
          uVar38 = uVar38 + 2;
          (this->AuxLines).ArrayNum = iVar28 + 1;
          lVar42 = lVar42 + 0x30;
          pFVar18 = (this->AuxLines).AllocatorInstance.Data;
          lVar34 = (longlong)iVar28 * 0x38;
          *(double *)(pFVar18 + lVar34) = dVar9 + dVar12;
          *(double *)(pFVar18 + lVar34 + 8) = dVar10 + dVar13;
          *(double *)(pFVar18 + lVar34 + 0x10) = dVar11 + dVar14;
          *(double *)(pFVar18 + lVar34 + 0x18) = dVar15 + dVar6;
          *(double *)(pFVar18 + lVar34 + 0x20) = dVar16 + dVar7;
          *(double *)(pFVar18 + lVar34 + 0x28) = dVar23 + dVar8;
          lVar2 = lVar43 * 4;
          lVar43 = lVar43 + 2;
          *(undefined4 *)(pFVar18 + lVar34 + 0x30) = *(undefined4 *)(pFVar5 + lVar2);
          *(undefined4 *)(pFVar18 + lVar34 + 0x34) = 0;
        } while ((int)uVar38 < (param_1->LineVertices).ArrayNum);
      }
    }
    else {
      bVar25 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5323954688897317409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\NavMeshRenderingComponent.cpp"
                          ,0x5df,"Vertices.Num() == Colors.Num()");
      if (bVar25) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
    }
  }
  iVar28 = (param_1->PointVertices).ArrayNum;
  if (0 < iVar28) {
    if (iVar28 == (param_1->PointColors).ArrayNum) {
      uVar38 = 0;
      if (0 < iVar28) {
        lVar43 = 0;
        lVar42 = 0;
        do {
          uVar32 = 0;
          if ((int)uVar38 < (param_1->PointColors).ArrayNum) {
            uVar32 = ~uVar38 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          pFVar5 = (param_1->PointColors).AllocatorInstance.Data;
          uVar32 = 0;
          if ((int)uVar38 < (param_1->PointVertices).ArrayNum) {
            uVar32 = ~uVar38 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          piVar41 = &(this->AuxPoints).ArrayMax;
          pFVar19 = (param_1->PointVertices).AllocatorInstance.Data;
          iVar28 = (this->AuxPoints).ArrayNum;
          pFVar18 = pFVar19 + lVar42 + 8;
          dVar6 = *(double *)pFVar18;
          dVar7 = (this->NavMeshDrawOffset).field0_0x0._s_0.Y;
          dVar15 = *(double *)(pFVar19 + lVar42);
          dVar16 = (this->NavMeshDrawOffset).field0_0x0._s_0.X;
          dVar23 = *(double *)(pFVar18 + 8) + (this->NavMeshDrawOffset).field0_0x0._s_0.Z;
          if (iVar28 == *piVar41) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&(this->AuxPoints).AllocatorInstance,piVar41);
          }
          uVar38 = uVar38 + 1;
          (this->AuxPoints).ArrayNum = iVar28 + 1;
          lVar42 = lVar42 + 0x18;
          pFVar18 = (this->AuxPoints).AllocatorInstance.Data;
          lVar34 = (longlong)iVar28 * 0x20;
          *(double *)(pFVar18 + lVar34) = dVar15 + dVar16;
          auVar22._8_4_ = SUB84(dVar23,0);
          auVar22._0_8_ = dVar6 + dVar7;
          auVar22._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          *(undefined1 (*) [16])(pFVar18 + lVar34 + 8) = auVar22;
          lVar2 = lVar43 * 4;
          lVar43 = lVar43 + 1;
          *(undefined4 *)(pFVar18 + lVar34 + 0x18) = *(undefined4 *)(pFVar5 + lVar2);
          *(undefined4 *)(pFVar18 + lVar34 + 0x1c) = 0x40a00000;
        } while ((int)uVar38 < (param_1->PointVertices).ArrayNum);
      }
    }
    else {
      bVar25 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5323954688897317396>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\NavMeshRenderingComponent.cpp"
                          ,0x5ec,"Vertices.Num() == Colors.Num()");
      if (bVar25) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
    }
  }
  if ((0 < (param_1->LabelVertices).ArrayNum) && (uVar38 = 0, 0 < (param_1->LabelVertices).ArrayNum)
     ) {
    lVar42 = 0;
    lVar43 = 0;
    do {
      uVar32 = 0;
      if ((int)uVar38 < (param_1->Labels).ArrayNum) {
        uVar32 = ~uVar38 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      local_250 = (FColor_u_0 *)(param_1->Labels).AllocatorInstance.Data;
      uVar32 = 0;
      if ((int)uVar38 < (param_1->LabelVertices).ArrayNum) {
        uVar32 = ~uVar38 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      pFVar18 = (param_1->LabelVertices).AllocatorInstance.Data;
      iVar28 = (this->DebugLabels).ArrayNum;
      pFVar5 = pFVar18 + lVar43 + 8;
      dVar6 = *(double *)pFVar5;
      dVar7 = (this->NavMeshDrawOffset).field0_0x0._s_0.Y;
      dVar15 = *(double *)(pFVar18 + lVar43);
      dVar16 = (this->NavMeshDrawOffset).field0_0x0._s_0.X;
      dVar23 = *(double *)(pFVar5 + 8) + (this->NavMeshDrawOffset).field0_0x0._s_0.Z;
      if (iVar28 == (this->DebugLabels).ArrayMax) {
        iVar28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&(this->DebugLabels).AllocatorInstance,
                            &(this->DebugLabels).ArrayMax);
      }
      (this->DebugLabels).ArrayNum = iVar28 + 1;
      pFVar5 = (this->DebugLabels).AllocatorInstance.Data;
      lVar2 = (longlong)iVar28 * 5 + 3;
      *(double *)(pFVar5 + lVar2 * 8 + -0x18) = dVar15 + dVar16;
      auVar21._8_4_ = SUB84(dVar23,0);
      auVar21._0_8_ = dVar6 + dVar7;
      auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      *(undefined1 (*) [16])(pFVar5 + lVar2 * 8 + -0x10) = auVar21;
      ::FString::FString((FString *)(pFVar5 + lVar2 * 8),(FString *)((longlong)local_250 + lVar42));
      uVar38 = uVar38 + 1;
      lVar43 = lVar43 + 0x18;
      lVar42 = lVar42 + 0x10;
    } while ((int)uVar38 < (param_1->LabelVertices).ArrayNum);
  }
  return;
}

// GatherData @ 146df65f0

void __thiscall
FNavMeshSceneProxyData::GatherData
          (FNavMeshSceneProxyData *this,ARecastNavMesh *param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// GetAllocatedSize @ 146e00150

uint __thiscall FNavMeshSceneProxyData::GetAllocatedSize(FNavMeshSceneProxyData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (longlong)(this->AuxBoxes).ArrayMax * 0xb0 +
          ((longlong)(this->AuxLines).ArrayMax + (longlong)(this->ClusterLinkLines).ArrayMax +
           (longlong)(this->NavLinkLines).ArrayMax + (longlong)(this->NavMeshEdgeLines).ArrayMax +
           (longlong)(this->TileEdgeLines).ArrayMax + (longlong)(this->ThickLineItems).ArrayMax) *
          0x38 + ((longlong)(this->AuxPoints).ArrayMax + (longlong)(this->OctreeBounds).ArrayMax * 2
                 ) * 0x20 +
          ((longlong)(this->DebugLabels).ArrayMax + (longlong)(this->MeshBuilders).ArrayMax) * 0x28;
  if (uVar4 != (uVar4 & 0xffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)uVar4;
}

// Reset @ 146e21be0

void __thiscall FNavMeshSceneProxyData::Reset(FNavMeshSceneProxyData *this)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  FDebugMeshData *pFVar4;
  FDebugText *pFVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  
  piVar1 = &(this->MeshBuilders).ArrayMax;
  pFVar4 = (FDebugMeshData *)(this->MeshBuilders).AllocatorInstance.Data;
  iVar3 = (this->MeshBuilders).ArrayNum;
  if ((this->MeshBuilders).ArrayMax < 0) {
    DestructItems<FNavMeshSceneProxyData::FDebugMeshData,int>(pFVar4,iVar3);
    (this->MeshBuilders).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->MeshBuilders).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNavMeshSceneProxyData::FDebugMeshData,int>(pFVar4,iVar3);
    (this->MeshBuilders).ArrayNum = 0;
  }
  (this->ThickLineItems).ArrayNum = 0;
  if ((this->ThickLineItems).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->ThickLineItems).AllocatorInstance,0,&(this->ThickLineItems).ArrayMax
              );
  }
  (this->TileEdgeLines).ArrayNum = 0;
  if ((this->TileEdgeLines).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->TileEdgeLines).AllocatorInstance,0,&(this->TileEdgeLines).ArrayMax);
  }
  (this->NavMeshEdgeLines).ArrayNum = 0;
  if ((this->NavMeshEdgeLines).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->NavMeshEdgeLines).AllocatorInstance,0,
               &(this->NavMeshEdgeLines).ArrayMax);
  }
  (this->NavLinkLines).ArrayNum = 0;
  if ((this->NavLinkLines).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->NavLinkLines).AllocatorInstance,0,&(this->NavLinkLines).ArrayMax);
  }
  (this->ClusterLinkLines).ArrayNum = 0;
  if ((this->ClusterLinkLines).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->ClusterLinkLines).AllocatorInstance,0,
               &(this->ClusterLinkLines).ArrayMax);
  }
  (this->AuxLines).ArrayNum = 0;
  if ((this->AuxLines).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->AuxLines).AllocatorInstance,0,&(this->AuxLines).ArrayMax);
  }
  (this->AuxPoints).ArrayNum = 0;
  if ((this->AuxPoints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->AuxPoints).AllocatorInstance,0,&(this->AuxPoints).ArrayMax);
  }
  (this->AuxBoxes).ArrayNum = 0;
  if ((this->AuxBoxes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&(this->AuxBoxes).AllocatorInstance,0,&(this->AuxBoxes).ArrayMax);
  }
  piVar1 = &(this->DebugLabels).ArrayMax;
  pFVar5 = (FDebugText *)(this->DebugLabels).AllocatorInstance.Data;
  iVar3 = (this->DebugLabels).ArrayNum;
  if ((this->DebugLabels).ArrayMax < 0) {
    DestructItems<FNavMeshSceneProxyData::FDebugText,int>(pFVar5,iVar3);
    (this->DebugLabels).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->DebugLabels).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNavMeshSceneProxyData::FDebugText,int>(pFVar5,iVar3);
    (this->DebugLabels).ArrayNum = 0;
  }
  (this->OctreeBounds).ArrayNum = 0;
  if ((this->OctreeBounds).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->OctreeBounds).AllocatorInstance,0,&(this->OctreeBounds).ArrayMax)
    ;
  }
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bounds).Max.field0_0x0._s_0.Y = (double)uVar8;
  (this->Bounds).Max.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar6 = (this->Bounds).Max.field0_0x0._s_0.X;
  dVar7 = (this->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).IsValid = '\0';
  dVar2 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Min.field0_0x0._s_0.X = dVar6;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar7;
  (this->Bounds).Min.field0_0x0._s_0.Z = dVar2;
  this->NavDetailFlags = 0;
  this->bDataGathered = 0;
  this->bNeedsNewData = 1;
  return;
}

// Serialize @ 146e22b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNavMeshSceneProxyData::Serialize(FNavMeshSceneProxyData *this,FArchive *param_1)

{
  int *piVar1;
  TArray<FNavMeshSceneProxyData::FDebugPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDebugRenderSceneProxy::FDebugBox,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FBoxCenterAndExtent,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  uint *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  TVector<double>_u_0 *pTVar9;
  undefined4 *puVar10;
  int *piVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  bool bVar25;
  int iVar26;
  FArchive *pFVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  longlong lVar30;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *pTVar31;
  uint uVar32;
  FNavMeshSceneProxyData *pFVar33;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> **ppTVar34;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar35;
  uint uVar36;
  uint uVar37;
  undefined1 auStackY_368 [32];
  uint local_318;
  uint local_314;
  uint local_310;
  uint local_30c;
  uint local_308;
  uint local_304;
  uint local_300 [2];
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> **local_2f8;
  FNavMeshSceneProxyData *local_2f0;
  uint local_2e8 [2];
  undefined8 local_2e0;
  undefined8 local_2d8;
  uint local_2d0 [2];
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270 [2];
  double local_268;
  double dStack_260;
  double local_258;
  FColor_u_0 FStack_250;
  uint uStack_24c;
  TVector<float>_u_0 local_248;
  TVector<float>_u_0 local_23c;
  undefined8 local_228;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  <unnamed_type_Vector> local_1dc;
  <unnamed_type_Vector> local_1d8;
  undefined4 uStack_1d4;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *local_1c8;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *local_1c0;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *local_1b8;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *local_1b0;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *local_1a8;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168;
  uint7 uStack_167;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 TStack_140;
  longlong local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [24];
  undefined8 uStack_e0;
  undefined1 local_d8 [24];
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_308 = (this->MeshBuilders).ArrayNum;
  plVar5 = *(longlong **)&param_1->field_0x8;
  local_2f0 = this;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_308,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_308);
    }
  }
  else {
    local_308 = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  uVar32 = local_308;
  if ((param_1->field_0x28 & 1) != 0) {
    iVar29 = (this->MeshBuilders).ArrayNum;
    if (iVar29 < (int)local_308) {
      iVar29 = local_308 - iVar29;
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x28,8,iVar29,&(this->MeshBuilders).AllocatorInstance,
                          &(this->MeshBuilders).ArrayNum,&(this->MeshBuilders).ArrayMax);
      DefaultConstructItems<FNavMeshSceneProxyData::FDebugMeshData,int>
                ((this->MeshBuilders).AllocatorInstance.Data + (longlong)iVar26 * 0x28,iVar29);
    }
    else {
      if ((int)local_308 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_308);
      }
      if ((int)local_308 < iVar29) {
        uVar36 = iVar29 - local_308;
        if (((int)(uVar36 | local_308) < 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (uVar36 != 0) {
          TArray<FNavMeshSceneProxyData::FDebugMeshData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&this->MeshBuilders,uVar32,uVar36);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&(this->MeshBuilders).AllocatorInstance,(this->MeshBuilders).ArrayNum,
                     &(this->MeshBuilders).ArrayMax);
        }
      }
    }
  }
  local_2e0._0_4_ = 0;
  if (0 < (int)local_308) {
    local_2f8 = (TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> **)0x0;
    do {
      uVar32 = (uint)local_2e0;
      ppTVar34 = local_2f8;
      uVar36 = 0;
      if ((int)(uint)local_2e0 < (this->MeshBuilders).ArrayNum) {
        uVar36 = ~(uint)local_2e0 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      plVar5 = *(longlong **)&param_1->field_0x8;
      pTVar35 = (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)
                ((this->MeshBuilders).AllocatorInstance.Data + (longlong)ppTVar34);
      local_30c = pTVar35->ArrayNum;
      piVar1 = &pTVar35->ArrayNum;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_30c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_30c);
        }
      }
      else {
        local_30c = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      uVar36 = local_30c;
      if ((param_1->field_0x28 & 1) != 0) {
        iVar29 = *piVar1;
        if (iVar29 < (int)local_30c) {
          iVar29 = local_30c - iVar29;
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x58,4,iVar29,(ForAnyElementType *)pTVar35,piVar1,&pTVar35->ArrayMax);
          DefaultConstructItems<FDynamicMeshVertex,int>
                    ((pTVar35->AllocatorInstance).Data + (longlong)iVar26 * 0x58,iVar29);
        }
        else {
          if ((int)local_30c < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_30c);
          }
          if ((int)local_30c < iVar29) {
            uVar37 = iVar29 - local_30c;
            if (((int)(uVar37 | local_30c) < 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (uVar37 != 0) {
              TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (pTVar35,uVar36,uVar37);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x58,4,(ForAnyElementType *)pTVar35,*piVar1,&pTVar35->ArrayMax);
            }
          }
        }
      }
      uVar36 = 0;
      if (0 < (int)local_30c) {
        lVar30 = 0;
        do {
          uVar32 = 0;
          if ((int)uVar36 < pTVar35->ArrayNum) {
            uVar32 = ~uVar36 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar28 = (pTVar35->AllocatorInstance).Data;
          plVar5 = *(longlong **)&param_1->field_0x8;
          local_2d8 = *(undefined8 *)(pFVar28 + lVar30);
          local_2d0[0] = *(uint *)(pFVar28 + lVar30 + 8);
          if ((undefined4 *)plVar5[1] < (undefined4 *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2d8,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2d8);
            }
          }
          else {
            uVar23 = (ulonglong)local_2d8 >> 0x20;
            local_2d8 = CONCAT44((int)uVar23,*(undefined4 *)*plVar5);
            *plVar5 = *plVar5 + 4;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((undefined4 *)plVar5[1] < (undefined4 *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))
                        (param_1,(uint *)((longlong)&local_2d8 + 4),4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)((longlong)&local_2d8 + 4));
            }
          }
          else {
            local_2d8 = CONCAT44(*(undefined4 *)*plVar5,(uint)local_2d8);
            *plVar5 = *plVar5 + 4;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_2d0,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,local_2d0);
            }
          }
          else {
            local_2d0[0] = *(uint *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          if ((param_1->field_0x28 & 1) != 0) {
            local_228 = local_2d8;
            uStack_220 = local_2d0[0];
            local_248._0_8_ = 0x3f800000;
            local_248._s_0.Z = 0.0;
            FPackedNormal::FPackedNormal
                      ((FPackedNormal *)&local_1dc._s_0,(TVector<float> *)&local_248._s_0);
            local_23c._0_8_ = 0;
            local_23c._s_0.Z = 1.0;
            FPackedNormal::FPackedNormal
                      ((FPackedNormal *)&local_1d8._s_0,(TVector<float> *)&local_23c._s_0);
            uVar24 = local_228;
            uStack_21c = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
            uStack_218 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
            uVar13 = CONCAT44(uStack_21c,uStack_220);
            uVar14 = CONCAT44(uStack_21c,uStack_218);
            uVar15 = CONCAT44(uStack_21c,uStack_218);
            uVar16 = CONCAT44(uStack_21c,uStack_218);
            uVar17 = CONCAT44(uStack_21c,uStack_218);
            uVar18 = CONCAT44(uStack_21c,uStack_218);
            uVar19 = CONCAT44(uStack_21c,uStack_218);
            uVar20 = CONCAT44(uStack_21c,uStack_218);
            uVar21 = CONCAT44(local_1dc.Packed,uStack_218);
            uStack_1d4 = 0xffffffff;
            uVar32 = 0;
            if ((int)uVar36 < pTVar35->ArrayNum) {
              uVar32 = ~uVar36 >> 0x1f;
            }
            local_1d8._s_0.W = 0x7f;
            uVar22 = CONCAT44(0xffffffff,local_1d8.Packed);
            uStack_214 = uStack_21c;
            uStack_210 = uStack_218;
            uStack_20c = uStack_21c;
            uStack_208 = uStack_218;
            uStack_204 = uStack_21c;
            uStack_200 = uStack_218;
            local_1fc = uStack_21c;
            uStack_1f8 = uStack_218;
            uStack_1f4 = uStack_21c;
            uStack_1f0 = uStack_218;
            uStack_1ec = uStack_21c;
            uStack_1e8 = uStack_218;
            uStack_1e4 = uStack_21c;
            uStack_1e0 = uStack_218;
            if ((uVar32 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar28 = (pTVar35->AllocatorInstance).Data;
            *(undefined8 *)(pFVar28 + lVar30) = uVar24;
            *(undefined8 *)(pFVar28 + lVar30 + 8) = uVar13;
            *(undefined8 *)(pFVar28 + lVar30 + 0x10) = uVar14;
            *(undefined8 *)(pFVar28 + lVar30 + 0x10 + 8) = uVar15;
            *(undefined8 *)(pFVar28 + lVar30 + 0x20) = uVar16;
            *(undefined8 *)(pFVar28 + lVar30 + 0x20 + 8) = uVar17;
            *(undefined8 *)(pFVar28 + lVar30 + 0x30) = uVar18;
            *(undefined8 *)(pFVar28 + lVar30 + 0x30 + 8) = uVar19;
            *(undefined8 *)(pFVar28 + lVar30 + 0x40) = uVar20;
            *(undefined8 *)(pFVar28 + lVar30 + 0x40 + 8) = uVar21;
            *(undefined8 *)(pFVar28 + lVar30 + 0x50) = uVar22;
          }
          uVar36 = uVar36 + 1;
          lVar30 = lVar30 + 0x58;
          uVar32 = (uint)local_2e0;
        } while ((int)uVar36 < (int)local_30c);
      }
      TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
                (param_1,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar35 + 1));
      pTVar35 = pTVar35 + 2;
      puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar35,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar35);
        }
      }
      else {
        *(uint *)&(pTVar35->AllocatorInstance).Data = *puVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      local_2e0._0_4_ = uVar32 + 1;
      local_2f8 = (TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> **)
                  ((longlong)local_2f8 + 0x28);
      this = local_2f0;
    } while ((int)(uint)local_2e0 < (int)local_308);
  }
  local_2e0 = (ulonglong)local_2e0._4_4_ << 0x20;
  local_1c0 = &this->TileEdgeLines;
  pTVar31 = &this->ThickLineItems;
  local_1c8 = pTVar31;
  local_1b8 = &this->NavMeshEdgeLines;
  ppTVar34 = &local_1c8;
  local_1b0 = &this->NavLinkLines;
  local_1a8 = &this->ClusterLinkLines;
  local_1a0 = &this->AuxLines;
  do {
    plVar5 = *(longlong **)&param_1->field_0x8;
    piVar1 = &pTVar31->ArrayNum;
    local_310 = *piVar1;
    local_2f8 = ppTVar34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_310,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_310);
      }
    }
    else {
      local_310 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      if ((int)local_310 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_310);
      }
      *piVar1 = 0;
      if (pTVar31->ArrayMax < (int)local_310) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,local_310,&pTVar31->AllocatorInstance,0,&pTVar31->ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,local_310,&pTVar31->AllocatorInstance,piVar1,&pTVar31->ArrayMax);
      ppTVar34 = local_2f8;
    }
    uVar32 = 0;
    if (0 < (int)local_310) {
      lVar30 = 0;
      do {
        pTVar31 = *ppTVar34;
        uVar37 = ~uVar32 >> 0x1f;
        uVar36 = 0;
        if ((int)uVar32 < pTVar31->ArrayNum) {
          uVar36 = uVar37;
        }
        if ((uVar36 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar28 = (pTVar31->AllocatorInstance).Data + lVar30 + 0x34;
        puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar28,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar28);
          }
        }
        else {
          *(uint *)pFVar28 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar36 = 0;
        if ((int)uVar32 < pTVar31->ArrayNum) {
          uVar36 = uVar37;
        }
        if ((uVar36 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar28 = (pTVar31->AllocatorInstance).Data + lVar30;
        if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
          if (((param_1->field_0x28 & 1) == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ar.IsLoading()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x4e8,L"float -> double conversion applied outside of load!"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_274,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_274);
            }
          }
          else {
            local_274 = *(float *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_27c,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_27c);
            }
          }
          else {
            local_27c = *(float *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_278,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_278);
            }
          }
          else {
            local_278 = *(float *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          *(double *)pFVar28 = (double)local_274;
          *(double *)(pFVar28 + 8) = (double)local_27c;
          *(double *)(pFVar28 + 0x10) = (double)local_278;
        }
        else {
          ::operator<<(param_1,(double *)pFVar28);
          ::operator<<(param_1,(double *)(pFVar28 + 8));
          ::operator<<(param_1,(double *)(pFVar28 + 0x10));
        }
        pTVar31 = *local_2f8;
        uVar36 = 0;
        if ((int)uVar32 < pTVar31->ArrayNum) {
          uVar36 = uVar37;
        }
        if ((uVar36 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar28 = (pTVar31->AllocatorInstance).Data;
        if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
          if (((param_1->field_0x28 & 1) == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ar.IsLoading()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x4e8,L"float -> double conversion applied outside of load!"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2c4,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2c4);
            }
          }
          else {
            local_2c4 = *(float *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_270,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_270);
            }
          }
          else {
            local_270[0] = *(float *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2c8,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2c8);
            }
          }
          else {
            local_2c8 = *(float *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          *(double *)(pFVar28 + lVar30 + 0x18) = (double)local_2c4;
          *(double *)(pFVar28 + lVar30 + 0x20) = (double)local_270[0];
          *(double *)(pFVar28 + lVar30 + 0x28) = (double)local_2c8;
        }
        else {
          ::operator<<(param_1,(double *)(pFVar28 + lVar30 + 0x18));
          ::operator<<(param_1,(double *)(pFVar28 + lVar30 + 0x20));
          ::operator<<(param_1,(double *)(pFVar28 + lVar30 + 0x28));
        }
        ppTVar34 = local_2f8;
        pTVar31 = *local_2f8;
        uVar36 = 0;
        if ((int)uVar32 < pTVar31->ArrayNum) {
          uVar36 = uVar37;
        }
        if ((uVar36 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar28 = (pTVar31->AllocatorInstance).Data + lVar30 + 0x30;
        puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar28,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar28);
          }
        }
        else {
          *(uint *)pFVar28 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar32 = uVar32 + 1;
        lVar30 = lVar30 + 0x38;
      } while ((int)uVar32 < (int)local_310);
    }
    pFVar33 = local_2f0;
    ppTVar34 = ppTVar34 + 1;
    uVar32 = (uint)local_2e0 + 1;
    local_2e0 = CONCAT44(local_2e0._4_4_,uVar32);
    if (5 < uVar32) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_318 = (local_2f0->AuxPoints).ArrayNum;
      local_2f8 = ppTVar34;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_318,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_318);
        }
      }
      else {
        local_318 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if ((param_1->field_0x28 & 1) == 0) {
        uVar32 = 0;
        if (0 < (int)local_318) {
          lVar30 = 0;
          do {
            uVar37 = ~uVar32 >> 0x1f;
            uVar36 = 0;
            if ((int)uVar32 < (pFVar33->AuxPoints).ArrayNum) {
              uVar36 = uVar37;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar28 = (pFVar33->AuxPoints).AllocatorInstance.Data + lVar30;
            if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
              if (((param_1->field_0x28 & 1) == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Ar.IsLoading()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x4e8,L"float -> double conversion applied outside of load!")
                 , bVar25)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              plVar5 = *(longlong **)&param_1->field_0x8;
              if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2ac,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2ac);
                }
              }
              else {
                local_2ac = *(float *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
              plVar5 = *(longlong **)&param_1->field_0x8;
              if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2b4,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2b4);
                }
              }
              else {
                local_2b4 = *(float *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
              plVar5 = *(longlong **)&param_1->field_0x8;
              if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2b0,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2b0);
                }
              }
              else {
                local_2b0 = *(float *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
              *(double *)pFVar28 = (double)local_2ac;
              *(double *)(pFVar28 + 8) = (double)local_2b4;
              *(double *)(pFVar28 + 0x10) = (double)local_2b0;
            }
            else {
              ::operator<<(param_1,(double *)pFVar28);
              ::operator<<(param_1,(double *)(pFVar28 + 8));
              ::operator<<(param_1,(double *)(pFVar28 + 0x10));
            }
            uVar36 = 0;
            if ((int)uVar32 < (pFVar33->AuxPoints).ArrayNum) {
              uVar36 = uVar37;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar28 = (pFVar33->AuxPoints).AllocatorInstance.Data + lVar30 + 0x18;
            puVar10 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
            if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar10 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar28,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar28);
              }
            }
            else {
              *(undefined4 *)pFVar28 = *puVar10;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            uVar36 = 0;
            if ((int)uVar32 < (pFVar33->AuxPoints).ArrayNum) {
              uVar36 = uVar37;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar28 = (pFVar33->AuxPoints).AllocatorInstance.Data + lVar30 + 0x1c;
            puVar10 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
            if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar10 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar28,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar28);
              }
            }
            else {
              *(undefined4 *)pFVar28 = *puVar10;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            uVar32 = uVar32 + 1;
            lVar30 = lVar30 + 0x20;
          } while ((int)uVar32 < (int)local_318);
        }
      }
      else {
        pTVar2 = &pFVar33->AuxPoints;
        FStack_250 = FColor::Black.field0_0x0;
        uStack_24c = 0;
        local_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if ((int)local_318 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_318);
        }
        piVar1 = &(pFVar33->AuxPoints).ArrayMax;
        if ((pFVar33->AuxPoints).ArrayMax < (int)local_318) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,local_318,&pTVar2->AllocatorInstance,(pFVar33->AuxPoints).ArrayNum,
                     piVar1);
        }
        iVar29 = 0;
        if (0 < (int)local_318) {
          do {
            if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
              if (((param_1->field_0x28 & 1) == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Ar.IsLoading()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x4e8,L"float -> double conversion applied outside of load!")
                 , bVar25)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              plVar5 = *(longlong **)&param_1->field_0x8;
              if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2c0,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2c0);
                }
              }
              else {
                local_2c0 = *(float *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
              plVar5 = *(longlong **)&param_1->field_0x8;
              if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2bc,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2bc);
                }
              }
              else {
                local_2bc = *(float *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
              plVar5 = *(longlong **)&param_1->field_0x8;
              if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2b8,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2b8);
                }
              }
              else {
                local_2b8 = *(float *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
              local_268 = (double)local_2c0;
              dStack_260 = (double)local_2bc;
              local_258 = (double)local_2b8;
            }
            else {
              ::operator<<(param_1,&local_268);
              ::operator<<(param_1,&dStack_260);
              ::operator<<(param_1,&local_258);
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((FColor_u_0 *)plVar5[1] < (FColor_u_0 *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&FStack_250,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&FStack_250.Bits);
              }
            }
            else {
              FStack_250 = (FColor_u_0)((FColor_u_0 *)*plVar5)->Bits;
              *plVar5 = *plVar5 + 4;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_24c,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&uStack_24c);
              }
            }
            else {
              uStack_24c = *(uint *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            pFVar28 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar28 <= (FScriptContainerElement *)&local_268) &&
                ((FScriptContainerElement *)&local_268 <
                 pFVar28 + (longlong)(pFVar33->AuxPoints).ArrayMax * 0x20)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar26 = (pFVar33->AuxPoints).ArrayNum;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&pTVar2->AllocatorInstance,piVar1);
            }
            iVar29 = iVar29 + 1;
            (pFVar33->AuxPoints).ArrayNum = iVar26 + 1;
            pFVar7 = (pTVar2->AllocatorInstance).Data;
            pFVar28 = pFVar7 + (longlong)iVar26 * 0x20;
            *(double *)pFVar28 = local_268;
            *(double *)(pFVar28 + 8) = dStack_260;
            pFVar7 = pFVar7 + (longlong)iVar26 * 0x20 + 0x10;
            *(double *)pFVar7 = local_258;
            *(ulonglong *)(pFVar7 + 8) = CONCAT44(uStack_24c,FStack_250.Bits);
          } while (iVar29 < (int)local_318);
        }
      }
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_314 = (pFVar33->AuxBoxes).ArrayNum;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_314,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_314);
        }
      }
      else {
        local_314 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if ((param_1->field_0x28 & 1) == 0) {
        uVar32 = 0;
        if (0 < (int)local_314) {
          lVar30 = 0;
          do {
            pFVar33 = local_2f0;
            uVar37 = ~uVar32 >> 0x1f;
            uVar36 = 0;
            if ((int)uVar32 < (local_2f0->AuxBoxes).ArrayNum) {
              uVar36 = uVar37;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar28 = (pFVar33->AuxBoxes).AllocatorInstance.Data + lVar30;
            pFVar27 = UE::Math::operator<<(param_1,(TVector<double> *)pFVar28);
            pFVar27 = UE::Math::operator<<(pFVar27,(TVector<double> *)(pFVar28 + 0x18));
            puVar8 = (undefined1 *)**(undefined8 **)&pFVar27->field_0x8;
            if ((undefined1 *)(*(undefined8 **)&pFVar27->field_0x8)[1] < puVar8 + 1) {
              (**(code **)(*(longlong *)pFVar27 + 0x188))(pFVar27,pFVar28 + 0x30,1);
            }
            else {
              pFVar28[0x30].field_0x0 = *puVar8;
              **(longlong **)&pFVar27->field_0x8 = **(longlong **)&pFVar27->field_0x8 + 1;
            }
            pFVar33 = local_2f0;
            uVar36 = 0;
            if ((int)uVar32 < (local_2f0->AuxBoxes).ArrayNum) {
              uVar36 = uVar37;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar28 = (pFVar33->AuxBoxes).AllocatorInstance.Data + lVar30 + 0x38;
            puVar10 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
            if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar10 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar28,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar28);
              }
            }
            else {
              *(undefined4 *)pFVar28 = *puVar10;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            uVar36 = 0;
            if ((int)uVar32 < (pFVar33->AuxBoxes).ArrayNum) {
              uVar36 = uVar37;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar28 = (pFVar33->AuxBoxes).AllocatorInstance.Data;
            UE::Math::operator<<(param_1,(TQuat<double> *)(pFVar28 + lVar30 + 0x40));
            UE::Math::operator<<(param_1,(TVector<double> *)(pFVar28 + lVar30 + 0x60));
            UE::Math::operator<<(param_1,(TVector<double> *)(pFVar28 + lVar30 + 0x80));
            if ((param_1->field_0x28 & 1) != 0) {
              *(undefined8 *)(pFVar28 + lVar30 + 0x60) = *(undefined8 *)(pFVar28 + lVar30 + 0x60);
              *(undefined8 *)(pFVar28 + lVar30 + 0x68) = *(undefined8 *)(pFVar28 + lVar30 + 0x68);
              *(undefined8 *)(pFVar28 + lVar30 + 0x70) = *(undefined8 *)(pFVar28 + lVar30 + 0x70);
              *(undefined8 *)(pFVar28 + lVar30 + 0x70 + 8) = 0;
              *(undefined8 *)(pFVar28 + lVar30 + 0x80) = *(undefined8 *)(pFVar28 + lVar30 + 0x80);
              *(undefined8 *)(pFVar28 + lVar30 + 0x88) = *(undefined8 *)(pFVar28 + lVar30 + 0x88);
              *(undefined8 *)(pFVar28 + lVar30 + 0x90) = *(undefined8 *)(pFVar28 + lVar30 + 0x90);
              *(undefined8 *)(pFVar28 + lVar30 + 0x90 + 8) = 0;
            }
            uVar32 = uVar32 + 1;
            lVar30 = lVar30 + 0xb0;
            pFVar33 = local_2f0;
          } while ((int)uVar32 < (int)local_314);
        }
      }
      else {
        pTVar3 = &pFVar33->AuxBoxes;
        local_158._s_0.X = local_198;
        local_158._s_0.Y = dStack_190;
        local_168 = 0;
        uStack_120 = 0;
        local_b8 = 3;
        local_158._s_0.Z = local_188;
        TStack_140._s_0.X = dStack_180;
        local_128 = (ulonglong)uStack_167 << 8;
        TStack_140._s_0.Y = local_178;
        TStack_140._s_0.Z = dStack_170;
        local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_118._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_108._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_108._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_f8._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        unique0x100009fa = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_f8._16_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        unique0x100009fe =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_d8._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        unique0x10000a1e = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_d8._16_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        unique0x10000a22 =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        if ((int)local_314 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_314);
        }
        piVar1 = &(pFVar33->AuxBoxes).ArrayMax;
        if ((pFVar33->AuxBoxes).ArrayMax < (int)local_314) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xb0,0x10,local_314,&pTVar3->AllocatorInstance,(pFVar33->AuxBoxes).ArrayNum,
                     piVar1);
        }
        iVar29 = 0;
        if (0 < (int)local_314) {
          do {
            pFVar27 = UE::Math::operator<<(param_1,(TVector<double> *)&local_158._s_0);
            pFVar27 = UE::Math::operator<<(pFVar27,(TVector<double> *)&TStack_140._s_0);
            puVar8 = (undefined1 *)**(undefined8 **)&pFVar27->field_0x8;
            if ((undefined1 *)(*(undefined8 **)&pFVar27->field_0x8)[1] < puVar8 + 1) {
              (**(code **)(*(longlong *)pFVar27 + 0x188))(pFVar27,&local_128,1);
            }
            else {
              local_128 = CONCAT71(local_128._1_7_,*puVar8);
              **(longlong **)&pFVar27->field_0x8 = **(longlong **)&pFVar27->field_0x8 + 1;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((undefined4 *)plVar5[1] < (undefined4 *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_120,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&uStack_120);
              }
            }
            else {
              uStack_120 = CONCAT44(uStack_120._4_4_,*(undefined4 *)*plVar5);
              *plVar5 = *plVar5 + 4;
            }
            UE::Math::operator<<(param_1,(TQuat<double> *)local_118);
            UE::Math::operator<<(param_1,(TVector<double> *)local_f8);
            UE::Math::operator<<(param_1,(TVector<double> *)local_d8);
            if ((param_1->field_0x28 & 1) != 0) {
              uStack_e0 = 0;
              uStack_c0 = 0;
            }
            pTVar9 = (TVector<double>_u_0 *)(pTVar3->AllocatorInstance).Data;
            if (((pTVar9 <= &local_158) &&
                (&local_158 <
                 (TVector<double>_u_0 *)
                 ((longlong)pTVar9 + (longlong)(pFVar33->AuxBoxes).ArrayMax * 0xb0))) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar26 = (pFVar33->AuxBoxes).ArrayNum;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10b0,&pTVar3->AllocatorInstance,piVar1);
            }
            iVar29 = iVar29 + 1;
            (pFVar33->AuxBoxes).ArrayNum = iVar26 + 1;
            pFVar28 = (pTVar3->AllocatorInstance).Data + (longlong)iVar26 * 0xb0;
            *(double *)pFVar28 = local_158._s_0.X;
            *(double *)(pFVar28 + 8) = local_158._s_0.Y;
            *(double *)(pFVar28 + 0x10) = local_158._s_0.Z;
            *(double *)(pFVar28 + 0x18) = TStack_140._s_0.X;
            *(double *)(pFVar28 + 0x20) = TStack_140._s_0.Y;
            *(double *)(pFVar28 + 0x28) = TStack_140._s_0.Z;
            *(longlong *)(pFVar28 + 0x30) = local_128;
            *(undefined8 *)(pFVar28 + 0x38) = uStack_120;
            *(undefined8 *)(pFVar28 + 0x40) = local_118._0_8_;
            *(undefined8 *)(pFVar28 + 0x48) = local_118._8_8_;
            *(undefined8 *)(pFVar28 + 0x50) = local_108._0_8_;
            *(undefined8 *)(pFVar28 + 0x58) = local_108._8_8_;
            *(undefined8 *)(pFVar28 + 0x60) = local_f8._0_8_;
            *(undefined8 *)(pFVar28 + 0x68) = local_f8._8_8_;
            *(undefined8 *)(pFVar28 + 0x70) = local_f8._16_8_;
            *(undefined8 *)(pFVar28 + 0x78) = uStack_e0;
            *(undefined8 *)(pFVar28 + 0x80) = local_d8._0_8_;
            *(undefined8 *)(pFVar28 + 0x88) = local_d8._8_8_;
            *(undefined8 *)(pFVar28 + 0x90) = local_d8._16_8_;
            *(undefined8 *)(pFVar28 + 0x98) = uStack_c0;
            *(ulonglong *)(pFVar28 + 0xa0) = CONCAT44(uStack_b4,local_b8);
            *(undefined8 *)(pFVar28 + 0xa8) = uStack_b0;
          } while (iVar29 < (int)local_314);
        }
      }
      plVar5 = *(longlong **)&param_1->field_0x8;
      piVar1 = &(pFVar33->DebugLabels).ArrayNum;
      local_304 = *piVar1;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_304,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_304);
        }
      }
      else {
        local_304 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      uVar32 = local_304;
      if ((param_1->field_0x28 & 1) != 0) {
        this_00 = &pFVar33->DebugLabels;
        iVar29 = (pFVar33->DebugLabels).ArrayNum;
        if (iVar29 < (int)local_304) {
          iVar29 = local_304 - iVar29;
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x28,8,iVar29,&this_00->AllocatorInstance,piVar1,
                              &(pFVar33->DebugLabels).ArrayMax);
          DefaultConstructItems<FNavMeshSceneProxyData::FDebugText,int>
                    ((this_00->AllocatorInstance).Data + (longlong)iVar26 * 0x28,iVar29);
        }
        else {
          if ((int)local_304 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_304);
          }
          if ((int)local_304 < iVar29) {
            uVar36 = iVar29 - local_304;
            if (((int)(uVar36 | local_304) < 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (uVar36 != 0) {
              TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (this_00,uVar32,uVar36);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,&this_00->AllocatorInstance,(pFVar33->DebugLabels).ArrayNum,
                         &(pFVar33->DebugLabels).ArrayMax);
            }
          }
        }
      }
      uVar32 = 0;
      if (0 < (int)local_304) {
        lVar30 = 0;
        do {
          uVar36 = 0;
          if ((int)uVar32 < (pFVar33->DebugLabels).ArrayNum) {
            uVar36 = ~uVar32 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar28 = (pFVar33->DebugLabels).AllocatorInstance.Data + lVar30;
          if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
            if (((param_1->field_0x28 & 1) == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Ar.IsLoading()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                    ,0x4e8,L"float -> double conversion applied outside of load!"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2a0,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2a0);
              }
            }
            else {
              local_2a0 = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2a8,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2a8);
              }
            }
            else {
              local_2a8 = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2a4,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_2a4);
              }
            }
            else {
              local_2a4 = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            *(double *)pFVar28 = (double)local_2a0;
            *(double *)(pFVar28 + 8) = (double)local_2a8;
            *(double *)(pFVar28 + 0x10) = (double)local_2a4;
          }
          else {
            ::operator<<(param_1,(double *)pFVar28);
            ::operator<<(param_1,(double *)(pFVar28 + 8));
            ::operator<<(param_1,(double *)(pFVar28 + 0x10));
          }
          uVar36 = 0;
          if ((int)uVar32 < (pFVar33->DebugLabels).ArrayNum) {
            uVar36 = ~uVar32 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          ::operator<<(param_1,(FString *)
                               ((pFVar33->DebugLabels).AllocatorInstance.Data + lVar30 + 0x18));
          uVar32 = uVar32 + 1;
          lVar30 = lVar30 + 0x28;
        } while ((int)uVar32 < (int)local_304);
      }
      plVar5 = *(longlong **)&param_1->field_0x8;
      piVar1 = &(pFVar33->OctreeBounds).ArrayNum;
      local_300[0] = *piVar1;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_300,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_300);
        }
      }
      else {
        local_300[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      uVar32 = local_300[0];
      if ((param_1->field_0x28 & 1) != 0) {
        lVar30 = (longlong)(int)local_300[0];
        pTVar4 = &pFVar33->OctreeBounds;
        iVar29 = (pFVar33->OctreeBounds).ArrayNum;
        if (iVar29 < (int)local_300[0]) {
          iVar29 = local_300[0] - iVar29;
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40,0x10,iVar29,&pTVar4->AllocatorInstance,piVar1,
                              &(pFVar33->OctreeBounds).ArrayMax);
          DefaultConstructItems<FBoxCenterAndExtent,int>
                    ((pTVar4->AllocatorInstance).Data + (longlong)iVar26 * 0x40,iVar29);
        }
        else {
          if ((int)local_300[0] < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_300[0]);
          }
          if ((int)local_300[0] < iVar29) {
            uVar36 = iVar29 - local_300[0];
            if (((int)(uVar36 | local_300[0]) < 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (uVar36 != 0) {
              pFVar28 = (pTVar4->AllocatorInstance).Data + lVar30 * 0x40;
              iVar29 = ((pFVar33->OctreeBounds).ArrayNum - uVar32) - uVar36;
              if (iVar29 != 0) {
                memmove(pFVar28,pFVar28 + (longlong)(int)uVar36 * 0x40,(longlong)iVar29 << 6);
              }
              iVar29 = (pFVar33->OctreeBounds).ArrayNum - uVar36;
              (pFVar33->OctreeBounds).ArrayNum = iVar29;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,&pTVar4->AllocatorInstance,iVar29,
                         &(pFVar33->OctreeBounds).ArrayMax);
            }
          }
        }
      }
      uVar32 = 0;
      if (0 < (int)local_300[0]) {
        local_2f8 = (TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> **)0x0;
        local_2e0 = 0;
        pFVar33 = local_2f0;
        do {
          lVar30 = local_2e0;
          uVar36 = 0;
          if ((int)uVar32 < (pFVar33->OctreeBounds).ArrayNum) {
            uVar36 = ~uVar32 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar28 = (pFVar33->OctreeBounds).AllocatorInstance.Data + lVar30;
          if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
            if (((param_1->field_0x28 & 1) == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Ar.IsLoading()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                    ,0x272,L"float -> double conversion applied outside of load!"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_290,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_290);
              }
            }
            else {
              local_290 = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_29c,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_29c);
              }
            }
            else {
              local_29c = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_298,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_298);
              }
            }
            else {
              local_298 = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_294,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_294);
              }
            }
            else {
              local_294 = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            *(double *)pFVar28 = (double)local_290;
            *(double *)(pFVar28 + 8) = (double)local_29c;
            *(double *)(pFVar28 + 0x10) = (double)local_298;
            *(double *)(pFVar28 + 0x18) = (double)local_294;
          }
          else {
            pFVar27 = ::operator<<(param_1,(double *)pFVar28);
            pFVar27 = ::operator<<(pFVar27,(double *)(pFVar28 + 8));
            pFVar27 = ::operator<<(pFVar27,(double *)(pFVar28 + 0x10));
            ::operator<<(pFVar27,(double *)(pFVar28 + 0x18));
            pFVar33 = local_2f0;
            lVar30 = local_2e0;
          }
          uVar36 = 0;
          if ((int)uVar32 < (pFVar33->OctreeBounds).ArrayNum) {
            uVar36 = ~uVar32 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar28 = (pFVar33->OctreeBounds).AllocatorInstance.Data;
          if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
            if (((param_1->field_0x28 & 1) == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Ar.IsLoading()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                    ,0x272,L"float -> double conversion applied outside of load!"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_280,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_280);
              }
            }
            else {
              local_280 = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28c,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_28c);
              }
            }
            else {
              local_28c = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_288,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_288);
              }
            }
            else {
              local_288 = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            plVar5 = *(longlong **)&param_1->field_0x8;
            if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_284,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_284);
              }
            }
            else {
              local_284 = *(float *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            *(double *)(pFVar28 + lVar30 + 0x20) = (double)local_280;
            *(double *)(pFVar28 + lVar30 + 0x28) = (double)local_28c;
            *(double *)(pFVar28 + lVar30 + 0x30) = (double)local_288;
            *(double *)(pFVar28 + lVar30 + 0x38) = (double)local_284;
          }
          else {
            pFVar27 = ::operator<<(param_1,(double *)(pFVar28 + lVar30 + 0x20));
            pFVar27 = ::operator<<(pFVar27,(double *)(pFVar28 + lVar30 + 0x28));
            pFVar27 = ::operator<<(pFVar27,(double *)(pFVar28 + lVar30 + 0x30));
            ::operator<<(pFVar27,(double *)(pFVar28 + lVar30 + 0x38));
            pFVar33 = local_2f0;
            lVar30 = local_2e0;
          }
          local_2e0 = lVar30 + 0x40;
          local_2f8 = (TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> **)
                      ((longlong)local_2f8 + 1);
          uVar32 = uVar32 + 1;
        } while ((int)uVar32 < (int)local_300[0]);
      }
      pFVar33 = local_2f0;
      UE::Math::operator<<(param_1,&local_2f0->Bounds);
      UE::Math::operator<<(param_1,&pFVar33->NavMeshDrawOffset);
      piVar1 = &pFVar33->NavDetailFlags;
      piVar11 = (int *)**(undefined8 **)&param_1->field_0x8;
      if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar11 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
        }
      }
      else {
        *piVar1 = *piVar11;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      local_2e8[0] = pFVar33->bNeedsNewData * 2 | pFVar33->bDataGathered;
      plVar5 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_2e8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_2e8);
        }
      }
      else {
        local_2e8[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      pFVar33->bDataGathered = 0;
      pFVar33->bNeedsNewData = 0;
      *(uint *)&pFVar33->field_0x120 = *(uint *)&pFVar33->field_0x120 | local_2e8[0] & 3;
      return;
    }
    pTVar31 = *ppTVar34;
  } while( true );
}

