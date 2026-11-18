// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// ~TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> @ 147b3bfe0

void __thiscall
TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
~TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
          (TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *this)

{
  FScriptContainerElement *pFVar1;
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *pTVar2;
  TArray<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *pTVar4;
  TArray<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar5;
  longlong lVar6;
  
  this->_padding_ =
       (longlong)
       &___7__TResourcePool_V__TRefCountPtr_VFRHIBuffer____VFGlobalDynamicMeshIndexPolicy__I__6B_;
  DrainPool(this,true);
  pTVar4 = this + 1;
  lVar6 = 3;
  do {
    pTVar2 = pTVar4 + -1;
    pTVar4 = (TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *)
             (pTVar4[-1].SafeResourceBuckets + 2);
    lVar6 = lVar6 + -1;
    DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
              ((FPooledResource *)((ForAnyElementType *)&pTVar4->_padding_)->Data,
               pTVar2->SafeResourceBuckets[2].ArrayNum);
    pFVar1 = ((ForAnyElementType *)&pTVar4->_padding_)->Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  pTVar5 = this->SafeResourceBuckets;
  lVar6 = 0x10;
  do {
    pTVar3 = pTVar5 + -1;
    pTVar5 = pTVar5 + -1;
    lVar6 = lVar6 + -1;
    DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
              ((FPooledResource *)(pTVar5->AllocatorInstance).Data,pTVar3->ArrayNum);
    pFVar1 = (pTVar5->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  return;
}

// ~TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> @ 147b3c080

void __thiscall
TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
~TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
          (TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> *this
          )

{
  FScriptContainerElement *pFVar1;
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> *pTVar2;
  TArray<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> *pTVar4;
  TArray<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar5;
  longlong lVar6;
  
  this->_padding_ =
       (longlong)
       &___7__TResourcePool_V__TRefCountPtr_VFRHIBuffer____VFGlobalDynamicMeshVertexPolicy__I__6B_;
  DrainPool(this,true);
  pTVar4 = this + 1;
  lVar6 = 3;
  do {
    pTVar2 = pTVar4 + -1;
    pTVar4 = (TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> *)
             (pTVar4[-1].SafeResourceBuckets + 2);
    lVar6 = lVar6 + -1;
    DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
              ((FPooledResource *)((ForAnyElementType *)&pTVar4->_padding_)->Data,
               pTVar2->SafeResourceBuckets[2].ArrayNum);
    pFVar1 = ((ForAnyElementType *)&pTVar4->_padding_)->Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  pTVar5 = this->SafeResourceBuckets;
  lVar6 = 0x10;
  do {
    pTVar3 = pTVar5 + -1;
    pTVar5 = pTVar5 + -1;
    lVar6 = lVar6 + -1;
    DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
              ((FPooledResource *)(pTVar5->AllocatorInstance).Data,pTVar3->ArrayNum);
    pFVar1 = (pTVar5->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  return;
}

// CreatePooledResource @ 147b4ec70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
CreatePooledResource
          (TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *this,
          FRHICommandListBase *param_1,uint param_2)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  FRHIResource *this_01;
  code *pcVar6;
  atomic<unsigned_char> *this_02;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TRefCountPtr<FRHIBuffer> TVar10;
  undefined4 in_register_00000084;
  uint in_R9D;
  
  uVar8 = FGlobalDynamicMeshPoolPolicy::GetPoolBucketIndex
                    ((FGlobalDynamicMeshPoolPolicy *)&this->Policy,in_R9D);
  this_00 = &this->CS;
  this_02 = (atomic<unsigned_char> *)0x0;
  if (this->bLocked == false) {
    if ((this_00 == (FMutex *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x3e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      TVar10.Reference = (FRHIBuffer *)(*pcVar6)();
      return (TRefCountPtr<FRHIBuffer>)TVar10.Reference;
    }
    LOCK();
    bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar7) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    this_02 = &this_00->State;
    if (!bVar7) {
      UE::FMutex::LockSlow(this_00);
    }
  }
  iVar9 = this->ResourceBuckets[uVar8].ArrayNum;
  if (iVar9 < 1) {
    if (this_02 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      aVar2 = *this_02;
      *this_02 = (atomic<unsigned_char>)((char)*this_02 + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_02);
      }
    }
    uVar8 = FGlobalDynamicMeshPoolPolicy::GetPoolBucketIndex
                      ((FGlobalDynamicMeshPoolPolicy *)&this->Policy,in_R9D);
    if ((0xf < uVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bucket < NumPoolBucketSizes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
                           ,0x41,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      TVar10.Reference = (FRHIBuffer *)(*pcVar6)();
      return (TRefCountPtr<FRHIBuffer>)TVar10.Reference;
    }
    RHIGetDefaultResourceState(IndexBuffer|Static,false);
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)CONCAT44(in_register_00000084,param_2),
               (FRHIBufferCreateDesc *)param_1);
  }
  else {
    pFVar3 = this->ResourceBuckets[uVar8].AllocatorInstance.Data;
    puVar4 = *(uchar **)(pFVar3 + (longlong)iVar9 * 0x18 + -0x18);
    *(undefined8 *)(pFVar3 + (longlong)iVar9 * 0x18 + -0x18) = 0;
    iVar9 = this->ResourceBuckets[uVar8].ArrayNum;
    pFVar5 = this->ResourceBuckets[uVar8].AllocatorInstance.Data;
    pFVar3 = pFVar5 + (longlong)iVar9 * 0x18;
    this_01 = *(FRHIResource **)(pFVar5 + (longlong)iVar9 * 0x18 + -0x18);
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
    iVar9 = this->ResourceBuckets[uVar8].ArrayNum - iVar9;
    if (iVar9 != 0) {
      memmove(pFVar3 + -0x18,pFVar3,(longlong)iVar9 * 0x18);
    }
    piVar1 = &this->ResourceBuckets[uVar8].ArrayNum;
    *piVar1 = *piVar1 + -1;
    (param_1->MemManager).Top = puVar4;
    if (this_02 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      aVar2 = *this_02;
      *this_02 = (atomic<unsigned_char>)((char)*this_02 + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_02);
      }
    }
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// CreatePooledResource @ 147b4eeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
CreatePooledResource
          (TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> *this
          ,FRHICommandListBase *param_1,uint param_2)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  FRHIResource *this_01;
  code *pcVar6;
  atomic<unsigned_char> *this_02;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TRefCountPtr<FRHIBuffer> TVar10;
  undefined4 in_register_00000084;
  uint in_R9D;
  
  uVar8 = FGlobalDynamicMeshPoolPolicy::GetPoolBucketIndex
                    ((FGlobalDynamicMeshPoolPolicy *)&this->Policy,in_R9D);
  this_00 = &this->CS;
  this_02 = (atomic<unsigned_char> *)0x0;
  if (this->bLocked == false) {
    if ((this_00 == (FMutex *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x3e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      TVar10.Reference = (FRHIBuffer *)(*pcVar6)();
      return (TRefCountPtr<FRHIBuffer>)TVar10.Reference;
    }
    LOCK();
    bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar7) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    this_02 = &this_00->State;
    if (!bVar7) {
      UE::FMutex::LockSlow(this_00);
    }
  }
  iVar9 = this->ResourceBuckets[uVar8].ArrayNum;
  if (iVar9 < 1) {
    if (this_02 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      aVar2 = *this_02;
      *this_02 = (atomic<unsigned_char>)((char)*this_02 + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_02);
      }
    }
    uVar8 = FGlobalDynamicMeshPoolPolicy::GetPoolBucketIndex
                      ((FGlobalDynamicMeshPoolPolicy *)&this->Policy,in_R9D);
    if ((0xf < uVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bucket < NumPoolBucketSizes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
                           ,0x41,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      TVar10.Reference = (FRHIBuffer *)(*pcVar6)();
      return (TRefCountPtr<FRHIBuffer>)TVar10.Reference;
    }
    RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Volatile,false);
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)CONCAT44(in_register_00000084,param_2),
               (FRHIBufferCreateDesc *)param_1);
  }
  else {
    pFVar3 = this->ResourceBuckets[uVar8].AllocatorInstance.Data;
    puVar4 = *(uchar **)(pFVar3 + (longlong)iVar9 * 0x18 + -0x18);
    *(undefined8 *)(pFVar3 + (longlong)iVar9 * 0x18 + -0x18) = 0;
    iVar9 = this->ResourceBuckets[uVar8].ArrayNum;
    pFVar5 = this->ResourceBuckets[uVar8].AllocatorInstance.Data;
    pFVar3 = pFVar5 + (longlong)iVar9 * 0x18;
    this_01 = *(FRHIResource **)(pFVar5 + (longlong)iVar9 * 0x18 + -0x18);
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
    iVar9 = this->ResourceBuckets[uVar8].ArrayNum - iVar9;
    if (iVar9 != 0) {
      memmove(pFVar3 + -0x18,pFVar3,(longlong)iVar9 * 0x18);
    }
    piVar1 = &this->ResourceBuckets[uVar8].ArrayNum;
    *piVar1 = *piVar1 + -1;
    (param_1->MemManager).Top = puVar4;
    if (this_02 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      aVar2 = *this_02;
      *this_02 = (atomic<unsigned_char>)((char)*this_02 + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_02);
      }
    }
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// DrainPool @ 147b51990

void __thiscall
TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::DrainPool
          (TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *this,
          bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_char> aVar4;
  FScriptContainerElement *pFVar5;
  FPooledResource *pFVar6;
  FRHIResource *this_00;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  FMutex *pFVar15;
  int iVar16;
  TArray<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar17;
  longlong lVar18;
  longlong local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_64;
  
  if ((this->bLocked != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                         ,0x5f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar15 = &this->CS;
  if ((pFVar15 == (FMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  LOCK();
  bVar8 = pFVar15->State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    pFVar15->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    UE::FMutex::LockSlow(pFVar15);
  }
  if (param_1) {
    pTVar17 = this->SafeResourceBuckets;
    iVar16 = this->SafeResourceBuckets[0].ArrayNum;
    pFVar12 = (pTVar17->AllocatorInstance).Data;
    pFVar3 = pFVar12 + (longlong)iVar16 * 0x18;
    while( true ) {
      if (this->SafeResourceBuckets[0].ArrayNum != iVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar3) break;
      uVar14 = *(uint *)(pFVar12 + 0x10);
      iVar10 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar1 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar1);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar10 + 1;
      pFVar5 = this->ResourceBuckets[uVar14].AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18) = 0;
      pFVar5 = pFVar5 + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
      *(undefined8 *)pFVar12 = 0;
      *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar12 + 8);
      *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
      pFVar2 = pFVar12 + 0x10;
      pFVar12 = pFVar12 + 0x18;
      *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)pFVar2;
    }
    piVar1 = &this->SafeResourceBuckets[0].ArrayMax;
    pFVar6 = (FPooledResource *)(pTVar17->AllocatorInstance).Data;
    iVar16 = this->SafeResourceBuckets[0].ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[0].ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar17->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[0].ArrayNum = 0;
    }
    pTVar17 = this->SafeResourceBuckets + 1;
    iVar16 = this->SafeResourceBuckets[1].ArrayNum;
    pFVar12 = (pTVar17->AllocatorInstance).Data;
    pFVar3 = pFVar12 + (longlong)iVar16 * 0x18;
    while( true ) {
      if (this->SafeResourceBuckets[1].ArrayNum != iVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar3) break;
      uVar14 = *(uint *)(pFVar12 + 0x10);
      iVar10 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar1 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar1);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar10 + 1;
      pFVar5 = this->ResourceBuckets[uVar14].AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18) = 0;
      pFVar5 = pFVar5 + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
      *(undefined8 *)pFVar12 = 0;
      *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar12 + 8);
      *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
      pFVar2 = pFVar12 + 0x10;
      pFVar12 = pFVar12 + 0x18;
      *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)pFVar2;
    }
    piVar1 = &this->SafeResourceBuckets[1].ArrayMax;
    pFVar6 = (FPooledResource *)(pTVar17->AllocatorInstance).Data;
    iVar16 = this->SafeResourceBuckets[1].ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[1].ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar17->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[1].ArrayNum = 0;
    }
    pTVar17 = this->SafeResourceBuckets + 2;
    iVar16 = this->SafeResourceBuckets[2].ArrayNum;
    pFVar12 = (pTVar17->AllocatorInstance).Data;
    pFVar3 = pFVar12 + (longlong)iVar16 * 0x18;
    while( true ) {
      if (this->SafeResourceBuckets[2].ArrayNum != iVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar3) break;
      uVar14 = *(uint *)(pFVar12 + 0x10);
      iVar10 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar1 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar1);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar10 + 1;
      pFVar5 = this->ResourceBuckets[uVar14].AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18) = 0;
      pFVar5 = pFVar5 + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
      *(undefined8 *)pFVar12 = 0;
      *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar12 + 8);
      *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
      pFVar2 = pFVar12 + 0x10;
      pFVar12 = pFVar12 + 0x18;
      *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)pFVar2;
    }
    piVar1 = &this->SafeResourceBuckets[2].ArrayMax;
    pFVar6 = (FPooledResource *)(pTVar17->AllocatorInstance).Data;
    iVar16 = this->SafeResourceBuckets[2].ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[2].ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar17->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[2].ArrayNum = 0;
    }
  }
  else {
    uVar9 = GFrameNumberRenderThread + 1;
    uVar14 = this->LastSafeFrameNumber;
    if (this->LastSafeFrameNumber == 0xffffffff) {
      this->LastSafeFrameNumber = uVar9;
      uVar14 = uVar9;
    }
    uVar11 = 3;
    if (uVar9 - uVar14 < 3) {
      uVar11 = uVar9 - uVar14;
    }
    uVar14 = 1;
    if (1 < uVar11) {
      uVar14 = uVar11;
    }
    local_64 = 0;
    if (uVar14 != 0) {
      do {
        pTVar17 = this->SafeResourceBuckets + (int)((this->LastSafeFrameNumber + local_64) % 3);
        iVar16 = pTVar17->ArrayNum;
        pFVar12 = (pTVar17->AllocatorInstance).Data;
        pFVar3 = pFVar12 + (longlong)iVar16 * 0x18;
        while( true ) {
          if (pTVar17->ArrayNum != iVar16) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar12 == pFVar3) break;
          uVar11 = *(uint *)(pFVar12 + 0x10);
          iVar10 = this->ResourceBuckets[uVar11].ArrayNum;
          piVar1 = &this->ResourceBuckets[uVar11].ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&this->ResourceBuckets[uVar11].AllocatorInstance,piVar1);
          }
          this->ResourceBuckets[uVar11].ArrayNum = iVar10 + 1;
          pFVar5 = this->ResourceBuckets[uVar11].AllocatorInstance.Data;
          *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18) = 0;
          pFVar5 = pFVar5 + (longlong)iVar10 * 0x18;
          *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
          *(undefined8 *)pFVar12 = 0;
          *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar12 + 8);
          *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
          pFVar2 = pFVar12 + 0x10;
          pFVar12 = pFVar12 + 0x18;
          *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)pFVar2;
        }
        piVar1 = &pTVar17->ArrayMax;
        pFVar6 = (FPooledResource *)(pTVar17->AllocatorInstance).Data;
        if (*piVar1 < 0) {
          DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
                    (pFVar6,pTVar17->ArrayNum);
          pTVar17->ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&pTVar17->AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,int>
                    (pFVar6,pTVar17->ArrayNum);
          pTVar17->ArrayNum = 0;
        }
        local_64 = local_64 + 1;
      } while (local_64 < uVar14);
    }
    this->LastSafeFrameNumber = uVar9;
  }
  pFVar15 = &this->CS;
  iVar16 = 100;
  pTVar17 = this->ResourceBuckets;
  local_res8 = 0;
  do {
    uVar14 = pTVar17->ArrayNum - 1;
    if (-1 < (int)uVar14) {
      lVar18 = (longlong)(int)uVar14 * 0x18;
      do {
        uVar13 = ~uVar14 >> 0x1f;
        uVar11 = 0;
        uVar9 = uVar11;
        if ((int)uVar14 < pTVar17->ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((10 < GFrameNumberRenderThread -
                  *(int *)((pTVar17->AllocatorInstance).Data + lVar18 + 0xc)) || (param_1)) {
          uVar9 = uVar11;
          if ((int)uVar14 < pTVar17->ArrayNum) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          this_00 = *(FRHIResource **)((pTVar17->AllocatorInstance).Data + lVar18);
          if (this_00 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(this_00);
            FRHIResource::Release(this_00);
          }
          if ((int)uVar14 < pTVar17->ArrayNum) {
            uVar11 = uVar13;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TArray<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(pTVar17,uVar14);
          iVar16 = iVar16 + -1;
          if ((!param_1) && (iVar16 == 0)) goto LAB_147b5203e;
        }
        lVar18 = lVar18 + -0x18;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    if ((!param_1) && (iVar16 == 0)) break;
    local_res8 = local_res8 + 1;
    pTVar17 = pTVar17 + 1;
  } while (local_res8 < 0x10);
LAB_147b5203e:
  if (pFVar15 != (FMutex *)0x0) {
    LOCK();
    aVar4 = pFVar15->State;
    pFVar15->State = (atomic<unsigned_char>)((char)pFVar15->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(pFVar15);
    }
  }
  return;
}

// DrainPool @ 147b52070

void __thiscall
TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::DrainPool
          (TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> *this
          ,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_char> aVar4;
  FScriptContainerElement *pFVar5;
  FPooledResource *pFVar6;
  FRHIResource *this_00;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  FMutex *pFVar15;
  int iVar16;
  TArray<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar17;
  longlong lVar18;
  longlong local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_64;
  
  if ((this->bLocked != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                         ,0x5f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar15 = &this->CS;
  if ((pFVar15 == (FMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  LOCK();
  bVar8 = pFVar15->State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    pFVar15->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    UE::FMutex::LockSlow(pFVar15);
  }
  if (param_1) {
    pTVar17 = this->SafeResourceBuckets;
    iVar16 = this->SafeResourceBuckets[0].ArrayNum;
    pFVar12 = (pTVar17->AllocatorInstance).Data;
    pFVar3 = pFVar12 + (longlong)iVar16 * 0x18;
    while( true ) {
      if (this->SafeResourceBuckets[0].ArrayNum != iVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar3) break;
      uVar14 = *(uint *)(pFVar12 + 0x10);
      iVar10 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar1 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar1);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar10 + 1;
      pFVar5 = this->ResourceBuckets[uVar14].AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18) = 0;
      pFVar5 = pFVar5 + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
      *(undefined8 *)pFVar12 = 0;
      *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar12 + 8);
      *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
      pFVar2 = pFVar12 + 0x10;
      pFVar12 = pFVar12 + 0x18;
      *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)pFVar2;
    }
    piVar1 = &this->SafeResourceBuckets[0].ArrayMax;
    pFVar6 = (FPooledResource *)(pTVar17->AllocatorInstance).Data;
    iVar16 = this->SafeResourceBuckets[0].ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[0].ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar17->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[0].ArrayNum = 0;
    }
    pTVar17 = this->SafeResourceBuckets + 1;
    iVar16 = this->SafeResourceBuckets[1].ArrayNum;
    pFVar12 = (pTVar17->AllocatorInstance).Data;
    pFVar3 = pFVar12 + (longlong)iVar16 * 0x18;
    while( true ) {
      if (this->SafeResourceBuckets[1].ArrayNum != iVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar3) break;
      uVar14 = *(uint *)(pFVar12 + 0x10);
      iVar10 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar1 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar1);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar10 + 1;
      pFVar5 = this->ResourceBuckets[uVar14].AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18) = 0;
      pFVar5 = pFVar5 + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
      *(undefined8 *)pFVar12 = 0;
      *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar12 + 8);
      *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
      pFVar2 = pFVar12 + 0x10;
      pFVar12 = pFVar12 + 0x18;
      *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)pFVar2;
    }
    piVar1 = &this->SafeResourceBuckets[1].ArrayMax;
    pFVar6 = (FPooledResource *)(pTVar17->AllocatorInstance).Data;
    iVar16 = this->SafeResourceBuckets[1].ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[1].ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar17->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[1].ArrayNum = 0;
    }
    pTVar17 = this->SafeResourceBuckets + 2;
    iVar16 = this->SafeResourceBuckets[2].ArrayNum;
    pFVar12 = (pTVar17->AllocatorInstance).Data;
    pFVar3 = pFVar12 + (longlong)iVar16 * 0x18;
    while( true ) {
      if (this->SafeResourceBuckets[2].ArrayNum != iVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar3) break;
      uVar14 = *(uint *)(pFVar12 + 0x10);
      iVar10 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar1 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar1);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar10 + 1;
      pFVar5 = this->ResourceBuckets[uVar14].AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18) = 0;
      pFVar5 = pFVar5 + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
      *(undefined8 *)pFVar12 = 0;
      *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar12 + 8);
      *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
      pFVar2 = pFVar12 + 0x10;
      pFVar12 = pFVar12 + 0x18;
      *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)pFVar2;
    }
    piVar1 = &this->SafeResourceBuckets[2].ArrayMax;
    pFVar6 = (FPooledResource *)(pTVar17->AllocatorInstance).Data;
    iVar16 = this->SafeResourceBuckets[2].ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[2].ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar17->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
                (pFVar6,iVar16);
      this->SafeResourceBuckets[2].ArrayNum = 0;
    }
  }
  else {
    uVar9 = GFrameNumberRenderThread + 1;
    uVar14 = this->LastSafeFrameNumber;
    if (this->LastSafeFrameNumber == 0xffffffff) {
      this->LastSafeFrameNumber = uVar9;
      uVar14 = uVar9;
    }
    uVar11 = 3;
    if (uVar9 - uVar14 < 3) {
      uVar11 = uVar9 - uVar14;
    }
    uVar14 = 1;
    if (1 < uVar11) {
      uVar14 = uVar11;
    }
    local_64 = 0;
    if (uVar14 != 0) {
      do {
        pTVar17 = this->SafeResourceBuckets + (int)((this->LastSafeFrameNumber + local_64) % 3);
        iVar16 = pTVar17->ArrayNum;
        pFVar12 = (pTVar17->AllocatorInstance).Data;
        pFVar3 = pFVar12 + (longlong)iVar16 * 0x18;
        while( true ) {
          if (pTVar17->ArrayNum != iVar16) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar12 == pFVar3) break;
          uVar11 = *(uint *)(pFVar12 + 0x10);
          iVar10 = this->ResourceBuckets[uVar11].ArrayNum;
          piVar1 = &this->ResourceBuckets[uVar11].ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&this->ResourceBuckets[uVar11].AllocatorInstance,piVar1);
          }
          this->ResourceBuckets[uVar11].ArrayNum = iVar10 + 1;
          pFVar5 = this->ResourceBuckets[uVar11].AllocatorInstance.Data;
          *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18) = 0;
          pFVar5 = pFVar5 + (longlong)iVar10 * 0x18;
          *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
          *(undefined8 *)pFVar12 = 0;
          *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar12 + 8);
          *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
          pFVar2 = pFVar12 + 0x10;
          pFVar12 = pFVar12 + 0x18;
          *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)pFVar2;
        }
        piVar1 = &pTVar17->ArrayMax;
        pFVar6 = (FPooledResource *)(pTVar17->AllocatorInstance).Data;
        if (*piVar1 < 0) {
          DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
                    (pFVar6,pTVar17->ArrayNum);
          pTVar17->ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&pTVar17->AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,int>
                    (pFVar6,pTVar17->ArrayNum);
          pTVar17->ArrayNum = 0;
        }
        local_64 = local_64 + 1;
      } while (local_64 < uVar14);
    }
    this->LastSafeFrameNumber = uVar9;
  }
  pFVar15 = &this->CS;
  iVar16 = 100;
  pTVar17 = this->ResourceBuckets;
  local_res8 = 0;
  do {
    uVar14 = pTVar17->ArrayNum - 1;
    if (-1 < (int)uVar14) {
      lVar18 = (longlong)(int)uVar14 * 0x18;
      do {
        uVar13 = ~uVar14 >> 0x1f;
        uVar11 = 0;
        uVar9 = uVar11;
        if ((int)uVar14 < pTVar17->ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((10 < GFrameNumberRenderThread -
                  *(int *)((pTVar17->AllocatorInstance).Data + lVar18 + 0xc)) || (param_1)) {
          uVar9 = uVar11;
          if ((int)uVar14 < pTVar17->ArrayNum) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          this_00 = *(FRHIResource **)((pTVar17->AllocatorInstance).Data + lVar18);
          if (this_00 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(this_00);
            FRHIResource::Release(this_00);
          }
          if ((int)uVar14 < pTVar17->ArrayNum) {
            uVar11 = uVar13;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TArray<TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(pTVar17,uVar14);
          iVar16 = iVar16 + -1;
          if ((!param_1) && (iVar16 == 0)) goto LAB_147b5271e;
        }
        lVar18 = lVar18 + -0x18;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    if ((!param_1) && (iVar16 == 0)) break;
    local_res8 = local_res8 + 1;
    pTVar17 = pTVar17 + 1;
  } while (local_res8 < 0x10);
LAB_147b5271e:
  if (pFVar15 != (FMutex *)0x0) {
    LOCK();
    aVar4 = pFVar15->State;
    pFVar15->State = (atomic<unsigned_char>)((char)pFVar15->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(pFVar15);
    }
  }
  return;
}

// ~TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> @ 147cc7e20

void __thiscall
TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
~TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>
          (TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this)

{
  FScriptContainerElement *pFVar1;
  TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *pTVar2;
  TArray<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *pTVar4;
  TArray<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar5;
  longlong lVar6;
  
  this->_padding_ =
       (longlong)&___7__TResourcePool_UFVertexBufferAndSRV__VFBoneBufferPoolPolicy__I__6B_;
  DrainPool(this,true);
  pTVar4 = this + 1;
  lVar6 = 4;
  do {
    pTVar2 = pTVar4 + -1;
    pTVar4 = (TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)
             (pTVar4[-1].SafeResourceBuckets + 3);
    lVar6 = lVar6 + -1;
    DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
              ((FPooledResource *)((ForAnyElementType *)&pTVar4->_padding_)->Data,
               pTVar2->SafeResourceBuckets[3].ArrayNum);
    pFVar1 = ((ForAnyElementType *)&pTVar4->_padding_)->Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  pTVar5 = this->SafeResourceBuckets;
  lVar6 = 0x12;
  do {
    pTVar3 = pTVar5 + -1;
    pTVar5 = pTVar5 + -1;
    lVar6 = lVar6 + -1;
    DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
              ((FPooledResource *)(pTVar5->AllocatorInstance).Data,pTVar3->ArrayNum);
    pFVar1 = (pTVar5->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  return;
}

// ~TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> @ 147cc7ec0

void __thiscall
TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::
~TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>
          (TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this)

{
  FScriptContainerElement *pFVar1;
  TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *pTVar2;
  TArray<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *pTVar4;
  TArray<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar5;
  longlong lVar6;
  
  this->_padding_ =
       (longlong)&___7__TResourcePool_UFVertexBufferAndSRV__VFClothBufferPoolPolicy__I__6B_;
  DrainPool(this,true);
  pTVar4 = this + 1;
  lVar6 = 4;
  do {
    pTVar2 = pTVar4 + -1;
    pTVar4 = (TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)
             (pTVar4[-1].SafeResourceBuckets + 3);
    lVar6 = lVar6 + -1;
    DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
              ((FPooledResource *)((ForAnyElementType *)&pTVar4->_padding_)->Data,
               pTVar2->SafeResourceBuckets[3].ArrayNum);
    pFVar1 = ((ForAnyElementType *)&pTVar4->_padding_)->Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  pTVar5 = this->SafeResourceBuckets;
  lVar6 = 0x12;
  do {
    pTVar3 = pTVar5 + -1;
    pTVar5 = pTVar5 + -1;
    lVar6 = lVar6 + -1;
    DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
              ((FPooledResource *)(pTVar5->AllocatorInstance).Data,pTVar3->ArrayNum);
    pFVar1 = (pTVar5->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  return;
}

// CreatePooledResource @ 147ce9620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVertexBufferAndSRV * __thiscall
TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::CreatePooledResource
          (TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this,
          FVertexBufferAndSRV *__return_storage_ptr__,FRHICommandListBase *param_1,uint param_2)

{
  FMutex *this_00;
  int *piVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FScriptContainerElement *_Src;
  atomic<unsigned_char> aVar3;
  ERHIAccess EVar4;
  FScriptContainerElement *pFVar5;
  FRHIResource *this_01;
  FRHIBuffer *this_02;
  FRHIShaderResourceView *this_03;
  code *pcVar6;
  atomic<unsigned_char> *this_04;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FVertexBufferAndSRV *pFVar10;
  TRefCountPtr<FRHIBuffer> TVar11;
  TRefCountPtr<FRHIShaderResourceView> TVar12;
  FVertexBufferAndSRV local_e8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  ERHIAccess local_c0;
  ERHIBufferInitAction EStack_bc;
  FNameEntryId FStack_b8;
  uint uStack_b4;
  FName local_b0;
  undefined8 uStack_a8;
  ERHIAccess local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  wchar_t *local_78;
  FResourceArrayUploadInterface *pFStack_70;
  undefined8 local_68;
  FName FStack_60;
  FName local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar8 = FSharedPoolPolicyData::GetPoolBucketIndex((FSharedPoolPolicyData *)&this->Policy,param_2);
  this_00 = &this->CS;
  this_04 = (atomic<unsigned_char> *)0x0;
  if (this->bLocked == false) {
    if ((this_00 == (FMutex *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x3e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FVertexBufferAndSRV *)(*pcVar6)();
      return pFVar10;
    }
    LOCK();
    bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar7) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    this_04 = &this_00->State;
    if (!bVar7) {
      UE::FMutex::LockSlow(this_00);
    }
  }
  iVar9 = this->ResourceBuckets[uVar8].ArrayNum;
  if (iVar9 < 1) {
    if (this_04 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      aVar3 = *this_04;
      *this_04 = (atomic<unsigned_char>)((char)*this_04 + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_04);
      }
    }
    uVar8 = FSharedPoolPolicyData::GetPoolBucketIndex
                      ((FSharedPoolPolicyData *)&this->Policy,param_2);
    if ((0x11 < uVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bucket < NumPoolBucketSizes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                           ,0xb1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FVertexBufferAndSRV *)(*pcVar6)();
      return pFVar10;
    }
    FStack_b8.Value = 0x4102;
    EStack_bc = Default;
    local_b0 = (FName)0x1518de048;
    EVar4 = FSharedPoolPolicyData::BucketSizes[uVar8];
    (__return_storage_ptr__->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    pTVar2 = &__return_storage_ptr__->VertexBufferSRV;
    (__return_storage_ptr__->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    __return_storage_ptr__->Size = 0;
    uStack_b4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    uStack_a8 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_c0 = EVar4;
    local_a0 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
    local_68._4_4_ = EStack_bc;
    local_68._0_4_ = local_c0;
    FStack_60.Number = uStack_b4;
    FStack_60.ComparisonIndex.Value = FStack_b8.Value;
    local_48 = CONCAT44(uStack_9c,local_a0);
    uStack_40 = CONCAT44(uStack_94,uStack_98);
    local_58 = local_b0;
    uStack_50 = uStack_a8;
    local_38 = CONCAT44(uStack_8c,uStack_90);
    TVar11 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_88);
    if ((FRHIBuffer *)__return_storage_ptr__ != TVar11.Reference) {
      this_02 = (__return_storage_ptr__->VertexBufferRHI).Reference;
      (__return_storage_ptr__->VertexBufferRHI).Reference =
           (FRHIBuffer *)(TVar11.Reference)->_padding_;
      (TVar11.Reference)->_padding_ = 0;
      if (this_02 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_02);
      }
    }
    if ((FRHIResource *)local_88._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_88._0_8_);
    }
    pFStack_70 = (FResourceArrayUploadInterface *)0x0;
    local_78 = (wchar_t *)0x10100;
    TVar12 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)(local_88 + 8),
                        (FInitializer *)(__return_storage_ptr__->VertexBufferRHI).Reference);
    if ((FRHIShaderResourceView *)pTVar2 != TVar12.Reference) {
      this_03 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar12.Reference;
      *(undefined8 *)TVar12.Reference = 0;
      if (this_03 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_03);
      }
    }
    if ((FRHIResource *)local_88._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_88._8_8_);
    }
    __return_storage_ptr__->Size = EVar4;
  }
  else {
    local_e8.VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
    local_e8.VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
    pFVar10 = (FVertexBufferAndSRV *)
              (this->ResourceBuckets[uVar8].AllocatorInstance.Data + ((longlong)iVar9 * 5 + -5) * 8)
    ;
    if (&local_e8 != pFVar10) {
      local_e8.VertexBufferRHI.Reference = (pFVar10->VertexBufferRHI).Reference;
      (pFVar10->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    }
    pTVar2 = &pFVar10->VertexBufferSRV;
    if (&local_e8.VertexBufferSRV != pTVar2) {
      local_e8.VertexBufferSRV.Reference = pTVar2->Reference;
      pTVar2->Reference = (FRHIShaderResourceView *)0x0;
    }
    local_e8.Size = pFVar10->Size;
    iVar9 = this->ResourceBuckets[uVar8].ArrayNum;
    local_d0 = *(undefined4 *)&pFVar10[1].VertexBufferRHI.Reference;
    local_cc = *(undefined4 *)((longlong)&pFVar10[1].VertexBufferRHI.Reference + 4);
    local_c8 = *(undefined4 *)&pFVar10[1].VertexBufferSRV.Reference;
    pFVar5 = this->ResourceBuckets[uVar8].AllocatorInstance.Data;
    _Src = pFVar5 + (longlong)iVar9 * 0x28;
    this_01 = *(FRHIResource **)(pFVar5 + (longlong)iVar9 * 0x28 + -0x20);
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
    if (*(FRHIResource **)(_Src + -0x28) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)(_Src + -0x28));
    }
    iVar9 = this->ResourceBuckets[uVar8].ArrayNum - iVar9;
    if (iVar9 != 0) {
      memmove(_Src + -0x28,_Src,(longlong)iVar9 * 0x28);
    }
    piVar1 = &this->ResourceBuckets[uVar8].ArrayNum;
    *piVar1 = *piVar1 + -1;
    FVertexBufferAndSRV::FVertexBufferAndSRV(__return_storage_ptr__,&local_e8);
    if (local_e8.VertexBufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_e8.VertexBufferSRV.Reference);
    }
    if (local_e8.VertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_e8.VertexBufferRHI.Reference);
    }
    if (this_04 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      aVar3 = *this_04;
      *this_04 = (atomic<unsigned_char>)((char)*this_04 + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_04);
      }
    }
  }
  return __return_storage_ptr__;
}

// CreatePooledResource @ 147ce9960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVertexBufferAndSRV * __thiscall
TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::CreatePooledResource
          (TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this,
          FVertexBufferAndSRV *__return_storage_ptr__,FRHICommandListBase *param_1,uint param_2)

{
  FMutex *this_00;
  int *piVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FScriptContainerElement *_Src;
  atomic<unsigned_char> aVar3;
  ERHIAccess EVar4;
  FScriptContainerElement *pFVar5;
  FRHIResource *this_01;
  FRHIBuffer *this_02;
  FRHIShaderResourceView *this_03;
  code *pcVar6;
  atomic<unsigned_char> *this_04;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FVertexBufferAndSRV *pFVar10;
  TRefCountPtr<FRHIBuffer> TVar11;
  TRefCountPtr<FRHIShaderResourceView> TVar12;
  FVertexBufferAndSRV local_e8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  ERHIAccess local_c0;
  ERHIBufferInitAction EStack_bc;
  FNameEntryId FStack_b8;
  uint uStack_b4;
  FName local_b0;
  undefined8 uStack_a8;
  ERHIAccess local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  wchar_t *local_78;
  FResourceArrayUploadInterface *pFStack_70;
  undefined8 local_68;
  FName FStack_60;
  FName local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar8 = FSharedPoolPolicyData::GetPoolBucketIndex((FSharedPoolPolicyData *)&this->Policy,param_2);
  this_00 = &this->CS;
  this_04 = (atomic<unsigned_char> *)0x0;
  if (this->bLocked == false) {
    if ((this_00 == (FMutex *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x3e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FVertexBufferAndSRV *)(*pcVar6)();
      return pFVar10;
    }
    LOCK();
    bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar7) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    this_04 = &this_00->State;
    if (!bVar7) {
      UE::FMutex::LockSlow(this_00);
    }
  }
  iVar9 = this->ResourceBuckets[uVar8].ArrayNum;
  if (iVar9 < 1) {
    if (this_04 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      aVar3 = *this_04;
      *this_04 = (atomic<unsigned_char>)((char)*this_04 + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_04);
      }
    }
    uVar8 = FSharedPoolPolicyData::GetPoolBucketIndex
                      ((FSharedPoolPolicyData *)&this->Policy,param_2);
    if ((0x11 < uVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bucket < NumPoolBucketSizes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                           ,0xb1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FVertexBufferAndSRV *)(*pcVar6)();
      return pFVar10;
    }
    FStack_b8.Value = 0x4102;
    EStack_bc = Default;
    local_b0 = (FName)0x1518de078;
    EVar4 = FSharedPoolPolicyData::BucketSizes[uVar8];
    (__return_storage_ptr__->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    pTVar2 = &__return_storage_ptr__->VertexBufferSRV;
    (__return_storage_ptr__->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    __return_storage_ptr__->Size = 0;
    uStack_b4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    uStack_a8 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_c0 = EVar4;
    local_a0 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
    local_68._4_4_ = EStack_bc;
    local_68._0_4_ = local_c0;
    FStack_60.Number = uStack_b4;
    FStack_60.ComparisonIndex.Value = FStack_b8.Value;
    local_48 = CONCAT44(uStack_9c,local_a0);
    uStack_40 = CONCAT44(uStack_94,uStack_98);
    local_58 = local_b0;
    uStack_50 = uStack_a8;
    local_38 = CONCAT44(uStack_8c,uStack_90);
    TVar11 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_88);
    if ((FRHIBuffer *)__return_storage_ptr__ != TVar11.Reference) {
      this_02 = (__return_storage_ptr__->VertexBufferRHI).Reference;
      (__return_storage_ptr__->VertexBufferRHI).Reference =
           (FRHIBuffer *)(TVar11.Reference)->_padding_;
      (TVar11.Reference)->_padding_ = 0;
      if (this_02 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_02);
      }
    }
    if ((FRHIResource *)local_88._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_88._0_8_);
    }
    pFStack_70 = (FResourceArrayUploadInterface *)0x0;
    local_78 = (wchar_t *)0x11100;
    TVar12 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)(local_88 + 8),
                        (FInitializer *)(__return_storage_ptr__->VertexBufferRHI).Reference);
    if ((FRHIShaderResourceView *)pTVar2 != TVar12.Reference) {
      this_03 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar12.Reference;
      *(undefined8 *)TVar12.Reference = 0;
      if (this_03 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_03);
      }
    }
    if ((FRHIResource *)local_88._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_88._8_8_);
    }
    __return_storage_ptr__->Size = EVar4;
  }
  else {
    local_e8.VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
    local_e8.VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
    pFVar10 = (FVertexBufferAndSRV *)
              (this->ResourceBuckets[uVar8].AllocatorInstance.Data + ((longlong)iVar9 * 5 + -5) * 8)
    ;
    if (&local_e8 != pFVar10) {
      local_e8.VertexBufferRHI.Reference = (pFVar10->VertexBufferRHI).Reference;
      (pFVar10->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    }
    pTVar2 = &pFVar10->VertexBufferSRV;
    if (&local_e8.VertexBufferSRV != pTVar2) {
      local_e8.VertexBufferSRV.Reference = pTVar2->Reference;
      pTVar2->Reference = (FRHIShaderResourceView *)0x0;
    }
    local_e8.Size = pFVar10->Size;
    iVar9 = this->ResourceBuckets[uVar8].ArrayNum;
    local_d0 = *(undefined4 *)&pFVar10[1].VertexBufferRHI.Reference;
    local_cc = *(undefined4 *)((longlong)&pFVar10[1].VertexBufferRHI.Reference + 4);
    local_c8 = *(undefined4 *)&pFVar10[1].VertexBufferSRV.Reference;
    pFVar5 = this->ResourceBuckets[uVar8].AllocatorInstance.Data;
    _Src = pFVar5 + (longlong)iVar9 * 0x28;
    this_01 = *(FRHIResource **)(pFVar5 + (longlong)iVar9 * 0x28 + -0x20);
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
    if (*(FRHIResource **)(_Src + -0x28) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)(_Src + -0x28));
    }
    iVar9 = this->ResourceBuckets[uVar8].ArrayNum - iVar9;
    if (iVar9 != 0) {
      memmove(_Src + -0x28,_Src,(longlong)iVar9 * 0x28);
    }
    piVar1 = &this->ResourceBuckets[uVar8].ArrayNum;
    *piVar1 = *piVar1 + -1;
    FVertexBufferAndSRV::FVertexBufferAndSRV(__return_storage_ptr__,&local_e8);
    if (local_e8.VertexBufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_e8.VertexBufferSRV.Reference);
    }
    if (local_e8.VertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_e8.VertexBufferRHI.Reference);
    }
    if (this_04 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      aVar3 = *this_04;
      *this_04 = (atomic<unsigned_char>)((char)*this_04 + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_04);
      }
    }
  }
  return __return_storage_ptr__;
}

// DrainPool @ 147cee150

void __thiscall
TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::DrainPool
          (TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this,bool param_1)

{
  atomic<unsigned_char> aVar1;
  uint uVar2;
  FPooledResource *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FMutex *pFVar11;
  longlong lVar12;
  FPooledResource *pFVar13;
  uint uVar14;
  TArray<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar15;
  int *piVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  char local_res10;
  undefined1 local_res18 [16];
  int local_58;
  
  local_58 = 10;
  local_res10 = param_1;
  if ((this->bLocked != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                         ,0x5f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar11 = &this->CS;
  if ((pFVar11 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar6 = pFVar11->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    pFVar11->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(pFVar11);
  }
  if (param_1) {
    pTVar15 = this->SafeResourceBuckets;
    iVar9 = this->SafeResourceBuckets[0].ArrayNum;
    pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    pFVar3 = pFVar13 + iVar9;
    while( true ) {
      if (this->SafeResourceBuckets[0].ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar3) break;
      uVar14 = pFVar13->BucketIndex;
      iVar8 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar16 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar8 == *piVar16) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar16);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar8 + 1;
      FPooledResource::FPooledResource
                ((FPooledResource *)
                 (this->ResourceBuckets[uVar14].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                 pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    piVar16 = &this->SafeResourceBuckets[0].ArrayMax;
    pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    iVar9 = this->SafeResourceBuckets[0].ArrayNum;
    if (this->SafeResourceBuckets[0].ArrayMax < 0) {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[0].ArrayNum = 0;
      if (*piVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
      }
    }
    else {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[0].ArrayNum = 0;
    }
    pTVar15 = this->SafeResourceBuckets + 1;
    iVar9 = this->SafeResourceBuckets[1].ArrayNum;
    pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    pFVar3 = pFVar13 + iVar9;
    while( true ) {
      if (this->SafeResourceBuckets[1].ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar3) break;
      uVar14 = pFVar13->BucketIndex;
      iVar8 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar16 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar8 == *piVar16) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar16);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar8 + 1;
      FPooledResource::FPooledResource
                ((FPooledResource *)
                 (this->ResourceBuckets[uVar14].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                 pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    piVar16 = &this->SafeResourceBuckets[1].ArrayMax;
    pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    iVar9 = this->SafeResourceBuckets[1].ArrayNum;
    if (this->SafeResourceBuckets[1].ArrayMax < 0) {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[1].ArrayNum = 0;
      if (*piVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
      }
    }
    else {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[1].ArrayNum = 0;
    }
    pTVar15 = this->SafeResourceBuckets + 2;
    iVar9 = this->SafeResourceBuckets[2].ArrayNum;
    pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    pFVar3 = pFVar13 + iVar9;
    while( true ) {
      if (this->SafeResourceBuckets[2].ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar3) break;
      uVar14 = pFVar13->BucketIndex;
      iVar8 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar16 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar8 == *piVar16) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar16);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar8 + 1;
      FPooledResource::FPooledResource
                ((FPooledResource *)
                 (this->ResourceBuckets[uVar14].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                 pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    piVar16 = &this->SafeResourceBuckets[2].ArrayMax;
    pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    iVar9 = this->SafeResourceBuckets[2].ArrayNum;
    if (this->SafeResourceBuckets[2].ArrayMax < 0) {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[2].ArrayNum = 0;
      if (*piVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
      }
    }
    else {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[2].ArrayNum = 0;
    }
    pTVar15 = this->SafeResourceBuckets + 3;
    iVar9 = this->SafeResourceBuckets[3].ArrayNum;
    pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    pFVar3 = pFVar13 + iVar9;
    while( true ) {
      if (this->SafeResourceBuckets[3].ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar3) break;
      uVar14 = pFVar13->BucketIndex;
      iVar8 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar16 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar8 == *piVar16) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar16);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar8 + 1;
      FPooledResource::FPooledResource
                ((FPooledResource *)
                 (this->ResourceBuckets[uVar14].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                 pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    piVar16 = &this->SafeResourceBuckets[3].ArrayMax;
    pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    iVar9 = this->SafeResourceBuckets[3].ArrayNum;
    if (this->SafeResourceBuckets[3].ArrayMax < 0) {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[3].ArrayNum = 0;
      if (*piVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
      }
    }
    else {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[3].ArrayNum = 0;
    }
  }
  else {
    uVar7 = GFrameNumberRenderThread + 1;
    uVar14 = this->LastSafeFrameNumber;
    if (this->LastSafeFrameNumber == 0xffffffff) {
      this->LastSafeFrameNumber = uVar7;
      uVar14 = uVar7;
    }
    uVar10 = 4;
    if (uVar7 - uVar14 < 4) {
      uVar10 = uVar7 - uVar14;
    }
    uVar14 = 1;
    if (1 < uVar10) {
      uVar14 = uVar10;
    }
    uVar10 = 0;
    if (uVar14 != 0) {
      do {
        pTVar15 = this->SafeResourceBuckets + (this->LastSafeFrameNumber + uVar10 & 3);
        iVar9 = pTVar15->ArrayNum;
        pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
        pFVar3 = pFVar13 + iVar9;
        while( true ) {
          if (pTVar15->ArrayNum != iVar9) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (pFVar13 == pFVar3) break;
          uVar2 = pFVar13->BucketIndex;
          iVar8 = this->ResourceBuckets[uVar2].ArrayNum;
          piVar16 = &this->ResourceBuckets[uVar2].ArrayMax;
          if (iVar8 == *piVar16) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&this->ResourceBuckets[uVar2].AllocatorInstance,piVar16);
          }
          this->ResourceBuckets[uVar2].ArrayNum = iVar8 + 1;
          FPooledResource::FPooledResource
                    ((FPooledResource *)
                     (this->ResourceBuckets[uVar2].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                     pFVar13);
          pFVar13 = pFVar13 + 1;
        }
        piVar16 = &pTVar15->ArrayMax;
        pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
        if (*piVar16 < 0) {
          DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                    (pFVar3,pTVar15->ArrayNum);
          pTVar15->ArrayNum = 0;
          if (*piVar16 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
          }
        }
        else {
          DestructItems<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                    (pFVar3,pTVar15->ArrayNum);
          pTVar15->ArrayNum = 0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar14);
    }
    this->LastSafeFrameNumber = uVar7;
  }
  cVar5 = local_res10;
  pFVar11 = &this->CS;
  lVar17 = 0;
  piVar16 = &this->ResourceBuckets[0].ArrayNum;
  iVar9 = 10;
  do {
    uVar14 = *piVar16 - 1;
    if (-1 < (int)uVar14) {
      lVar12 = (longlong)(int)uVar14 * 0x28;
      do {
        uVar10 = ~uVar14 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar14 < *piVar16) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((0x1e < GFrameNumberRenderThread -
                    *(int *)((((TArray<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
                                *)(piVar16 + -2))->AllocatorInstance).Data + lVar12 + 0x1c)) ||
           (cVar5 != '\0')) {
          uVar7 = 0;
          if ((int)uVar14 < *piVar16) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar7 = 0;
          if ((int)uVar14 < *piVar16) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl((TArray<TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
                              *)(piVar16 + -2),uVar14);
          local_58 = local_58 + -1;
          if ((cVar5 == '\0') && (local_58 == 0)) goto LAB_147cee7e8;
        }
        lVar12 = lVar12 + -0x28;
        uVar14 = uVar14 - 1;
        iVar9 = local_58;
      } while (-1 < (int)uVar14);
    }
    if ((cVar5 == '\0') && (iVar9 == 0)) break;
    lVar17 = lVar17 + 1;
    piVar16 = piVar16 + 4;
  } while (lVar17 < 0x12);
LAB_147cee7e8:
  if (pFVar11 != (FMutex *)0x0) {
    LOCK();
    aVar1 = pFVar11->State;
    pFVar11->State = (atomic<unsigned_char>)((char)pFVar11->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(pFVar11);
    }
  }
  return;
}

// DrainPool @ 147cee820

void __thiscall
TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::DrainPool
          (TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this,bool param_1
          )

{
  atomic<unsigned_char> aVar1;
  uint uVar2;
  FPooledResource *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FMutex *pFVar11;
  longlong lVar12;
  FPooledResource *pFVar13;
  uint uVar14;
  TArray<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
  *pTVar15;
  int *piVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  char local_res10;
  undefined1 local_res18 [16];
  int local_58;
  
  local_58 = 10;
  local_res10 = param_1;
  if ((this->bLocked != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                         ,0x5f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar11 = &this->CS;
  if ((pFVar11 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar6 = pFVar11->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    pFVar11->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(pFVar11);
  }
  if (param_1) {
    pTVar15 = this->SafeResourceBuckets;
    iVar9 = this->SafeResourceBuckets[0].ArrayNum;
    pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    pFVar3 = pFVar13 + iVar9;
    while( true ) {
      if (this->SafeResourceBuckets[0].ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar3) break;
      uVar14 = pFVar13->BucketIndex;
      iVar8 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar16 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar8 == *piVar16) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar16);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar8 + 1;
      FPooledResource::FPooledResource
                ((FPooledResource *)
                 (this->ResourceBuckets[uVar14].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                 pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    piVar16 = &this->SafeResourceBuckets[0].ArrayMax;
    pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    iVar9 = this->SafeResourceBuckets[0].ArrayNum;
    if (this->SafeResourceBuckets[0].ArrayMax < 0) {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[0].ArrayNum = 0;
      if (*piVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
      }
    }
    else {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[0].ArrayNum = 0;
    }
    pTVar15 = this->SafeResourceBuckets + 1;
    iVar9 = this->SafeResourceBuckets[1].ArrayNum;
    pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    pFVar3 = pFVar13 + iVar9;
    while( true ) {
      if (this->SafeResourceBuckets[1].ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar3) break;
      uVar14 = pFVar13->BucketIndex;
      iVar8 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar16 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar8 == *piVar16) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar16);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar8 + 1;
      FPooledResource::FPooledResource
                ((FPooledResource *)
                 (this->ResourceBuckets[uVar14].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                 pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    piVar16 = &this->SafeResourceBuckets[1].ArrayMax;
    pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    iVar9 = this->SafeResourceBuckets[1].ArrayNum;
    if (this->SafeResourceBuckets[1].ArrayMax < 0) {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[1].ArrayNum = 0;
      if (*piVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
      }
    }
    else {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[1].ArrayNum = 0;
    }
    pTVar15 = this->SafeResourceBuckets + 2;
    iVar9 = this->SafeResourceBuckets[2].ArrayNum;
    pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    pFVar3 = pFVar13 + iVar9;
    while( true ) {
      if (this->SafeResourceBuckets[2].ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar3) break;
      uVar14 = pFVar13->BucketIndex;
      iVar8 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar16 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar8 == *piVar16) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar16);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar8 + 1;
      FPooledResource::FPooledResource
                ((FPooledResource *)
                 (this->ResourceBuckets[uVar14].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                 pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    piVar16 = &this->SafeResourceBuckets[2].ArrayMax;
    pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    iVar9 = this->SafeResourceBuckets[2].ArrayNum;
    if (this->SafeResourceBuckets[2].ArrayMax < 0) {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[2].ArrayNum = 0;
      if (*piVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
      }
    }
    else {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[2].ArrayNum = 0;
    }
    pTVar15 = this->SafeResourceBuckets + 3;
    iVar9 = this->SafeResourceBuckets[3].ArrayNum;
    pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    pFVar3 = pFVar13 + iVar9;
    while( true ) {
      if (this->SafeResourceBuckets[3].ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar3) break;
      uVar14 = pFVar13->BucketIndex;
      iVar8 = this->ResourceBuckets[uVar14].ArrayNum;
      piVar16 = &this->ResourceBuckets[uVar14].ArrayMax;
      if (iVar8 == *piVar16) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&this->ResourceBuckets[uVar14].AllocatorInstance,piVar16);
      }
      this->ResourceBuckets[uVar14].ArrayNum = iVar8 + 1;
      FPooledResource::FPooledResource
                ((FPooledResource *)
                 (this->ResourceBuckets[uVar14].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                 pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    piVar16 = &this->SafeResourceBuckets[3].ArrayMax;
    pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
    iVar9 = this->SafeResourceBuckets[3].ArrayNum;
    if (this->SafeResourceBuckets[3].ArrayMax < 0) {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[3].ArrayNum = 0;
      if (*piVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
      }
    }
    else {
      DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                (pFVar3,iVar9);
      this->SafeResourceBuckets[3].ArrayNum = 0;
    }
  }
  else {
    uVar7 = GFrameNumberRenderThread + 1;
    uVar14 = this->LastSafeFrameNumber;
    if (this->LastSafeFrameNumber == 0xffffffff) {
      this->LastSafeFrameNumber = uVar7;
      uVar14 = uVar7;
    }
    uVar10 = 4;
    if (uVar7 - uVar14 < 4) {
      uVar10 = uVar7 - uVar14;
    }
    uVar14 = 1;
    if (1 < uVar10) {
      uVar14 = uVar10;
    }
    uVar10 = 0;
    if (uVar14 != 0) {
      do {
        pTVar15 = this->SafeResourceBuckets + (this->LastSafeFrameNumber + uVar10 & 3);
        iVar9 = pTVar15->ArrayNum;
        pFVar13 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
        pFVar3 = pFVar13 + iVar9;
        while( true ) {
          if (pTVar15->ArrayNum != iVar9) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (pFVar13 == pFVar3) break;
          uVar2 = pFVar13->BucketIndex;
          iVar8 = this->ResourceBuckets[uVar2].ArrayNum;
          piVar16 = &this->ResourceBuckets[uVar2].ArrayMax;
          if (iVar8 == *piVar16) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&this->ResourceBuckets[uVar2].AllocatorInstance,piVar16);
          }
          this->ResourceBuckets[uVar2].ArrayNum = iVar8 + 1;
          FPooledResource::FPooledResource
                    ((FPooledResource *)
                     (this->ResourceBuckets[uVar2].AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                     pFVar13);
          pFVar13 = pFVar13 + 1;
        }
        piVar16 = &pTVar15->ArrayMax;
        pFVar3 = (FPooledResource *)(pTVar15->AllocatorInstance).Data;
        if (*piVar16 < 0) {
          DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                    (pFVar3,pTVar15->ArrayNum);
          pTVar15->ArrayNum = 0;
          if (*piVar16 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,&pTVar15->AllocatorInstance,0,piVar16);
          }
        }
        else {
          DestructItems<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,int>
                    (pFVar3,pTVar15->ArrayNum);
          pTVar15->ArrayNum = 0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar14);
    }
    this->LastSafeFrameNumber = uVar7;
  }
  cVar5 = local_res10;
  pFVar11 = &this->CS;
  lVar17 = 0;
  piVar16 = &this->ResourceBuckets[0].ArrayNum;
  iVar9 = 10;
  do {
    uVar14 = *piVar16 - 1;
    if (-1 < (int)uVar14) {
      lVar12 = (longlong)(int)uVar14 * 0x28;
      do {
        uVar10 = ~uVar14 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar14 < *piVar16) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((0x1e < GFrameNumberRenderThread -
                    *(int *)((((TArray<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
                                *)(piVar16 + -2))->AllocatorInstance).Data + lVar12 + 0x1c)) ||
           (cVar5 != '\0')) {
          uVar7 = 0;
          if ((int)uVar14 < *piVar16) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar7 = 0;
          if ((int)uVar14 < *piVar16) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl((TArray<TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource,TSizedDefaultAllocator<32>_>
                              *)(piVar16 + -2),uVar14);
          local_58 = local_58 + -1;
          if ((cVar5 == '\0') && (local_58 == 0)) goto LAB_147ceeeb8;
        }
        lVar12 = lVar12 + -0x28;
        uVar14 = uVar14 - 1;
        iVar9 = local_58;
      } while (-1 < (int)uVar14);
    }
    if ((cVar5 == '\0') && (iVar9 == 0)) break;
    lVar17 = lVar17 + 1;
    piVar16 = piVar16 + 4;
  } while (lVar17 < 0x12);
LAB_147ceeeb8:
  if (pFVar11 != (FMutex *)0x0) {
    LOCK();
    aVar1 = pFVar11->State;
    pFVar11->State = (atomic<unsigned_char>)((char)pFVar11->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(pFVar11);
    }
  }
  return;
}

// ReleasePooledResource @ 147d20d40

void __thiscall
TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::ReleasePooledResource
          (TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this,
          FVertexBufferAndSRV *param_1)

{
  FMutex *this_00;
  int *piVar1;
  FVertexBufferAndSRV *pFVar2;
  atomic<unsigned_char> aVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FRHIShaderResourceView *this_01;
  code *pcVar6;
  atomic<unsigned_char> *this_02;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TRefCountPtr<FRHIShaderResourceView> *pTVar11;
  FRHIBuffer *pFVar12;
  FRHIBuffer *this_03;
  FRHIBuffer *this_04;
  uint uVar13;
  FVertexBufferAndSRV local_58 [2];
  
  uVar4 = param_1->Size;
  local_58[0].VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  local_58[0].VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  if (local_58 == param_1) {
    this_04 = (FRHIBuffer *)0x0;
  }
  else {
    this_04 = (param_1->VertexBufferRHI).Reference;
    (param_1->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  }
  pTVar11 = &param_1->VertexBufferSRV;
  if (&local_58[0].VertexBufferSRV == pTVar11) {
    this_03 = (FRHIBuffer *)0x0;
  }
  else {
    this_03 = (FRHIBuffer *)pTVar11->Reference;
    pTVar11->Reference = (FRHIShaderResourceView *)0x0;
  }
  uVar7 = GFrameNumberRenderThread;
  uVar9 = FSharedPoolPolicyData::GetPoolBucketIndex((FSharedPoolPolicyData *)&this->Policy,uVar4);
  this_00 = &this->CS;
  uVar13 = GFrameNumberRenderThread & 3;
  this_02 = (atomic<unsigned_char> *)0x0;
  if (this->bLocked == false) {
    if ((this_00 == (FMutex *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x3e,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    bVar8 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    this_02 = &this_00->State;
    if (!bVar8) {
      UE::FMutex::LockSlow(this_00);
    }
  }
  iVar10 = this->SafeResourceBuckets[uVar13].ArrayNum;
  piVar1 = &this->SafeResourceBuckets[uVar13].ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&this->SafeResourceBuckets[uVar13].AllocatorInstance,piVar1);
  }
  pFVar12 = (FRHIBuffer *)0x0;
  this->SafeResourceBuckets[uVar13].ArrayNum = iVar10 + 1;
  pFVar5 = this->SafeResourceBuckets[uVar13].AllocatorInstance.Data;
  *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x28) = 0;
  pFVar2 = (FVertexBufferAndSRV *)(pFVar5 + (longlong)iVar10 * 0x28);
  pTVar11 = &pFVar2->VertexBufferSRV;
  pTVar11->Reference = (FRHIShaderResourceView *)0x0;
  pFVar2->Size = 0;
  if (pFVar2 != local_58) {
    (pFVar2->VertexBufferRHI).Reference = this_04;
    this_04 = pFVar12;
  }
  if (pTVar11 != &local_58[0].VertexBufferSRV) {
    this_01 = pTVar11->Reference;
    pTVar11->Reference = (FRHIShaderResourceView *)this_03;
    this_03 = pFVar12;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  pFVar2->Size = uVar4;
  *(uint *)&pFVar2[1].VertexBufferRHI.Reference = uVar4;
  *(uint *)((longlong)&pFVar2[1].VertexBufferRHI.Reference + 4) = uVar7;
  *(uint *)&pFVar2[1].VertexBufferSRV.Reference = uVar9;
  if (this_02 != (atomic<unsigned_char> *)0x0) {
    LOCK();
    aVar3 = *this_02;
    *this_02 = (atomic<unsigned_char>)((char)*this_02 + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)this_02);
    }
  }
  if (this_03 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  if (this_04 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_04);
  }
  return;
}

// ReleasePooledResource @ 147d20f00

void __thiscall
TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::ReleasePooledResource
          (TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this,
          FVertexBufferAndSRV *param_1)

{
  FMutex *this_00;
  int *piVar1;
  FVertexBufferAndSRV *pFVar2;
  atomic<unsigned_char> aVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FRHIShaderResourceView *this_01;
  code *pcVar6;
  atomic<unsigned_char> *this_02;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TRefCountPtr<FRHIShaderResourceView> *pTVar11;
  FRHIBuffer *pFVar12;
  FRHIBuffer *this_03;
  FRHIBuffer *this_04;
  uint uVar13;
  FVertexBufferAndSRV local_58 [2];
  
  uVar4 = param_1->Size;
  local_58[0].VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  local_58[0].VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  if (local_58 == param_1) {
    this_04 = (FRHIBuffer *)0x0;
  }
  else {
    this_04 = (param_1->VertexBufferRHI).Reference;
    (param_1->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  }
  pTVar11 = &param_1->VertexBufferSRV;
  if (&local_58[0].VertexBufferSRV == pTVar11) {
    this_03 = (FRHIBuffer *)0x0;
  }
  else {
    this_03 = (FRHIBuffer *)pTVar11->Reference;
    pTVar11->Reference = (FRHIShaderResourceView *)0x0;
  }
  uVar7 = GFrameNumberRenderThread;
  uVar9 = FSharedPoolPolicyData::GetPoolBucketIndex((FSharedPoolPolicyData *)&this->Policy,uVar4);
  this_00 = &this->CS;
  uVar13 = GFrameNumberRenderThread & 3;
  this_02 = (atomic<unsigned_char> *)0x0;
  if (this->bLocked == false) {
    if ((this_00 == (FMutex *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x3e,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    bVar8 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    this_02 = &this_00->State;
    if (!bVar8) {
      UE::FMutex::LockSlow(this_00);
    }
  }
  iVar10 = this->SafeResourceBuckets[uVar13].ArrayNum;
  piVar1 = &this->SafeResourceBuckets[uVar13].ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&this->SafeResourceBuckets[uVar13].AllocatorInstance,piVar1);
  }
  pFVar12 = (FRHIBuffer *)0x0;
  this->SafeResourceBuckets[uVar13].ArrayNum = iVar10 + 1;
  pFVar5 = this->SafeResourceBuckets[uVar13].AllocatorInstance.Data;
  *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x28) = 0;
  pFVar2 = (FVertexBufferAndSRV *)(pFVar5 + (longlong)iVar10 * 0x28);
  pTVar11 = &pFVar2->VertexBufferSRV;
  pTVar11->Reference = (FRHIShaderResourceView *)0x0;
  pFVar2->Size = 0;
  if (pFVar2 != local_58) {
    (pFVar2->VertexBufferRHI).Reference = this_04;
    this_04 = pFVar12;
  }
  if (pTVar11 != &local_58[0].VertexBufferSRV) {
    this_01 = pTVar11->Reference;
    pTVar11->Reference = (FRHIShaderResourceView *)this_03;
    this_03 = pFVar12;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  pFVar2->Size = uVar4;
  *(uint *)&pFVar2[1].VertexBufferRHI.Reference = uVar4;
  *(uint *)((longlong)&pFVar2[1].VertexBufferRHI.Reference + 4) = uVar7;
  *(uint *)&pFVar2[1].VertexBufferSRV.Reference = uVar9;
  if (this_02 != (atomic<unsigned_char> *)0x0) {
    LOCK();
    aVar3 = *this_02;
    *this_02 = (atomic<unsigned_char>)((char)*this_02 + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)this_02);
    }
  }
  if (this_03 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  if (this_04 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_04);
  }
  return;
}

