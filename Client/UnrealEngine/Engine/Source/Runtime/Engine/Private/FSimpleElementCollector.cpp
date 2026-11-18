// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FSimpleElementCollector @ 1484bc2a0

FSimpleElementCollector * __thiscall
FSimpleElementCollector::FSimpleElementCollector(FSimpleElementCollector *this)

{
  this->_padding_ = (longlong)&___7FSimpleElementCollector__6B_;
  this->_padding_ = 0;
  FBatchedElements::FBatchedElements(&this->BatchedElements);
  FBatchedElements::FBatchedElements(&this->TopBatchedElements);
  (this->HitProxyId).Index = -1;
  (this->DynamicResources).AllocatorInstance.Data = (FDynamicPrimitiveResource **)0x0;
  (this->DynamicResources).ArrayNum = 0;
  (this->DynamicResources).ArrayMax = 0;
  return this;
}

// ~FSimpleElementCollector @ 1484bdea0

void __thiscall FSimpleElementCollector::~FSimpleElementCollector(FSimpleElementCollector *this)

{
  FDynamicPrimitiveResource **ppFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  this->_padding_ = (longlong)&___7FSimpleElementCollector__6B_;
  if (0 < (this->DynamicResources).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->DynamicResources).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)
                     (lVar6 + (longlong)(this->DynamicResources).AllocatorInstance.Data) + 8))();
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->DynamicResources).ArrayNum);
  }
  ppFVar1 = (this->DynamicResources).AllocatorInstance.Data;
  if (ppFVar1 != (FDynamicPrimitiveResource **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar1);
  }
  FBatchedElements::~FBatchedElements(&this->TopBatchedElements);
  FBatchedElements::~FBatchedElements(&this->BatchedElements);
  this->_padding_ = (longlong)&___7FPrimitiveDrawInterface__6B_;
  return;
}

// AddAllocationInfo @ 1484c0fc0

void __thiscall
FSimpleElementCollector::AddAllocationInfo(FSimpleElementCollector *this,FAllocationInfo *param_1)

{
  FBatchedElements::AddAllocationInfo(&this->BatchedElements,&param_1->BatchedElements);
  FBatchedElements::AddAllocationInfo(&this->TopBatchedElements,&param_1->TopBatchedElements);
  param_1->NumDynamicResources = param_1->NumDynamicResources + (this->DynamicResources).ArrayNum;
  return;
}

// AddReserveLines @ 1484c2740

void __thiscall
FSimpleElementCollector::AddReserveLines
          (FSimpleElementCollector *this,uchar param_1,int param_2,bool param_3,bool param_4)

{
  return;
}

// Append @ 1484c2f80

void __thiscall
FSimpleElementCollector::Append(FSimpleElementCollector *this,FSimpleElementCollector *param_1)

{
  int *piVar1;
  TArray<FDynamicPrimitiveResource_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FDynamicPrimitiveResource_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar7;
  
  FBatchedElements::Append(&this->BatchedElements,&param_1->BatchedElements);
  FBatchedElements::Append(&this->TopBatchedElements,&param_1->TopBatchedElements);
  pTVar2 = &this->DynamicResources;
  pTVar7 = &param_1->DynamicResources;
  if (pTVar2 == pTVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (param_1->DynamicResources).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
                      (8,8,iVar3,&pTVar2->AllocatorInstance,&(this->DynamicResources).ArrayNum,
                       &(this->DynamicResources).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + iVar6,(pTVar7->AllocatorInstance).Data,
           (longlong)iVar3 << 3);
  }
  piVar1 = &(param_1->DynamicResources).ArrayMax;
  (param_1->DynamicResources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
              (8,8,0,&pTVar7->AllocatorInstance,0,piVar1);
  }
  return;
}

// DrawBatchedElements @ 1484d5430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSimpleElementCollector::DrawBatchedElements
          (FSimpleElementCollector *this,FRHICommandList *param_1,
          FMeshPassProcessorRenderState *param_2,FSceneView *param_3,Type param_4,
          ESceneDepthPriorityGroup param_5,uint param_6)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  if (param_5 != SDPG_World) {
    lVar1 = 0xa8;
  }
  FBatchedElements::Draw
            ((FBatchedElements *)((longlong)&this->_padding_ + lVar1),param_1,param_2,
             param_3->FeatureLevel,param_3,(param_3->Family->EngineShowFlags).HitProxies,
             __real_3f800000,param_4,param_6);
  return;
}

// DrawLine @ 1484d54b0

void __thiscall
FSimpleElementCollector::DrawLine
          (FSimpleElementCollector *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,uchar param_4,float param_5,float param_6,bool param_7)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  if (param_4 != '\0') {
    lVar1 = 0xa8;
  }
  FBatchedElements::AddLine
            ((FBatchedElements *)((longlong)&this->_padding_ + lVar1),param_1,param_2,param_3,
             (FHitProxyId)(this->HitProxyId).Index,param_5,param_6,param_7);
  return;
}

// DrawMesh @ 1484d54f0

int __thiscall FSimpleElementCollector::DrawMesh(FSimpleElementCollector *this,FMeshBatch *param_1)

{
  undefined1 local_res18 [16];
  
  if (!`public:_virtual_int___cdecl_FSimpleElementCollector::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'
       ::__l2::bTriggered) {
    `public:_virtual_int___cdecl_FSimpleElementCollector::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'
    ::__l2::bTriggered = true;
    `FSimpleElementCollector::DrawMesh'::__l5::<lambda_1>::operator()(local_res18);
  }
  return 0;
}

// DrawPoint @ 1484d5520

void __thiscall
FSimpleElementCollector::DrawPoint
          (FSimpleElementCollector *this,TVector<double> *param_1,FLinearColor *param_2,
          float param_3,uchar param_4)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  if (param_4 != '\0') {
    lVar1 = 0xa8;
  }
  FBatchedElements::AddPoint
            ((FBatchedElements *)((longlong)&this->_padding_ + lVar1),param_1,param_3,param_2,
             (FHitProxyId)(this->HitProxyId).Index);
  return;
}

// DrawSprite @ 1484d5560

void __thiscall
FSimpleElementCollector::DrawSprite
          (FSimpleElementCollector *this,TVector<double> *param_1,float param_2,float param_3,
          FTexture *param_4,FLinearColor *param_5,uchar param_6,float param_7,float param_8,
          float param_9,float param_10,uchar param_11,float param_12)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  if (param_6 != '\0') {
    lVar1 = 0xa8;
  }
  FBatchedElements::AddSprite
            ((FBatchedElements *)((longlong)&this->_padding_ + lVar1),param_1,param_2,param_3,
             param_4,param_5,(FHitProxyId)(this->HitProxyId).Index,param_7,param_8,param_9,param_10,
             param_11,param_12);
  return;
}

// DrawTranslucentLine @ 1484d55a0

void __thiscall
FSimpleElementCollector::DrawTranslucentLine
          (FSimpleElementCollector *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,uchar param_4,float param_5,float param_6,bool param_7)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  if (param_4 != '\0') {
    lVar1 = 0xa8;
  }
  FBatchedElements::AddTranslucentLine
            ((FBatchedElements *)((longlong)&this->_padding_ + lVar1),param_1,param_2,param_3,
             (FHitProxyId)(this->HitProxyId).Index,param_5,param_6,param_7);
  return;
}

// IsHitTesting @ 1484e0930

bool __thiscall FSimpleElementCollector::IsHitTesting(FSimpleElementCollector *this)

{
  undefined1 local_res10 [24];
  
  if (!`public:_virtual_bool___cdecl_FSimpleElementCollector::IsHitTesting(void)___ptr64'::__l2::
       bTriggered) {
    `public:_virtual_bool___cdecl_FSimpleElementCollector::IsHitTesting(void)___ptr64'::__l2::
    bTriggered = true;
    `FSimpleElementCollector::IsHitTesting'::__l5::<lambda_1>::operator()(local_res10);
  }
  return false;
}

// RegisterDynamicResource @ 1484ef700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSimpleElementCollector::RegisterDynamicResource
          (FSimpleElementCollector *this,FDynamicPrimitiveResource *param_1)

{
  int *piVar1;
  TArray<FDynamicPrimitiveResource_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  FDynamicPrimitiveResource **ppFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDynamicPrimitiveResource *local_res10 [3];
  
  pTVar2 = &this->DynamicResources;
  ppFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((ppFVar3 <= local_res10) && (local_res10 < ppFVar3 + (this->DynamicResources).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->DynamicResources).ArrayNum;
  piVar1 = &(this->DynamicResources).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->DynamicResources).ArrayNum = iVar6 + 1;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_res10[0];
  pcVar4 = *(code **)*local_res10[0];
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*pcVar4)(local_res10[0],0x154be5ed0);
  return;
}

// Reserve @ 1484f1810

void __thiscall
FSimpleElementCollector::Reserve(FSimpleElementCollector *this,FAllocationInfo *param_1)

{
  uint uVar1;
  
  FBatchedElements::Reserve(&this->BatchedElements,&param_1->BatchedElements);
  FBatchedElements::Reserve(&this->TopBatchedElements,&param_1->TopBatchedElements);
  uVar1 = param_1->NumDynamicResources;
  if (-1 < (int)uVar1) {
    if ((this->DynamicResources).ArrayMax < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
                (8,8,uVar1,&(this->DynamicResources).AllocatorInstance,
                 (this->DynamicResources).ArrayNum,&(this->DynamicResources).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// SetHitProxy @ 1484fbf00

void __thiscall
FSimpleElementCollector::SetHitProxy(FSimpleElementCollector *this,HHitProxy *param_1)

{
  if (param_1 != (HHitProxy *)0x0) {
    (this->HitProxyId).Index = (param_1->Id).Index;
    return;
  }
  (this->HitProxyId).Index = -1;
  return;
}

// operator() @ 15052bb70

bool __thiscall `FSimpleElementCollector::DrawMesh'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2660184206339996308>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2660184206339996308>,
                       &`public:___cdecl_`public:_virtual_int___cdecl_FSimpleElementCollector::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15052bbb0

bool __thiscall `FSimpleElementCollector::IsHitTesting'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2660184206339996322>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2660184206339996322>,
                       &`public:___cdecl_`public:_virtual_bool___cdecl_FSimpleElementCollector::IsHitTesting(void)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

