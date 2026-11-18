// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// Tick @ 147b28120

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::Tick
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
           *this,FRHICommandListImmediate *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1125630775601921763>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                       ,0x11d,"IsInRenderingThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::DrainPool
            ((TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *)
             &this[-1].field_0x30,false);
  return;
}

// IsTickable @ 147b28180

bool __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::IsTickable
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
           *this)

{
  return true;
}

// NeedsRenderingResumedForRenderingThreadTick @ 147b28190

bool __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
NeedsRenderingResumedForRenderingThreadTick
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
           *this)

{
  return true;
}

// InitRHI @ 147b281a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::InitRHI
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
           *this,FRHICommandListBase *param_1)

{
  FTickableObjectRenderThread::Register((FTickableObjectRenderThread *)&this[-1].field_0x168);
  return;
}

// ReleaseRHI @ 147b281b0

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::ReleaseRHI
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
           *this)

{
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)&this[-1].field_0x168);
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::DrainPool
            ((TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *)
             &this[-1].field_0x20,true);
  return;
}

// Tick @ 147b28680

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::Tick
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
           *this,FRHICommandListImmediate *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1125630775601921763>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                       ,0x11d,"IsInRenderingThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::DrainPool
            ((TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> *)
             &this[-1].field_0x30,false);
  return;
}

// IsTickable @ 147b286e0

bool __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
IsTickable(TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
           *this)

{
  return true;
}

// NeedsRenderingResumedForRenderingThreadTick @ 147b286f0

bool __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
NeedsRenderingResumedForRenderingThreadTick
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
           *this)

{
  return true;
}

// InitRHI @ 147b28700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::InitRHI
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
           *this,FRHICommandListBase *param_1)

{
  FTickableObjectRenderThread::Register((FTickableObjectRenderThread *)&this[-1].field_0x168);
  return;
}

// ReleaseRHI @ 147b28710

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
ReleaseRHI(TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
           *this)

{
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)&this[-1].field_0x168);
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::DrainPool
            ((TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> *)
             &this[-1].field_0x20,true);
  return;
}

// ~TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> @ 147b3bf00

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
~TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
           *this)

{
  *(undefined ***)this =
       &
       _vftable__for__TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>__
  ;
  *(undefined ***)&this->field_0x148 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x158 = &_vftable__for__FRenderResource__;
  FRenderResource::~FRenderResource((FRenderResource *)&this->field_0x158);
  *(undefined ***)&this->field_0x148 = &___7FTickableObjectRenderThread__6B_;
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)&this->field_0x148);
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
  ~TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
            ((TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *)
             this);
  return;
}

// ~TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> @ 147b3bf70

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
~TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
           *this)

{
  *(undefined ***)this =
       &
       _vftable__for__TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>__
  ;
  *(undefined ***)&this->field_0x148 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x158 = &_vftable__for__FRenderResource__;
  FRenderResource::~FRenderResource((FRenderResource *)&this->field_0x158);
  *(undefined ***)&this->field_0x148 = &___7FTickableObjectRenderThread__6B_;
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)&this->field_0x148);
  TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
  ~TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
            ((TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int> *)
             this);
  return;
}

// ReleasePooledResource @ 147b832c0

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
ReleasePooledResource
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
           *this,TRefCountPtr<FRHIBuffer> *param_1)

{
  undefined1 *this_00;
  char cVar1;
  atomic<unsigned_char> aVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  FRHIBuffer *this_01;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FRHIBuffer *pFVar12;
  TRefCountPtr<FRHIBuffer> local_48 [4];
  
  if (*(int *)&this->field_0x170 != -1) {
    pFVar12 = param_1->Reference;
    if (pFVar12 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar12);
    }
    uVar3 = (pFVar12->Desc).Size;
    FRHIResource::Release((FRHIResource *)pFVar12);
    pFVar12 = (FRHIBuffer *)0x0;
    if (local_48 != param_1) {
      pFVar12 = param_1->Reference;
      param_1->Reference = (FRHIBuffer *)0x0;
    }
    uVar6 = GFrameNumberRenderThread;
    uVar8 = FGlobalDynamicMeshPoolPolicy::GetPoolBucketIndex
                      ((FGlobalDynamicMeshPoolPolicy *)&this->field_0x8,uVar3);
    uVar11 = GFrameNumberRenderThread % 3;
    this_00 = &this->field_0x10;
    this_01 = (FRHIBuffer *)0x0;
    if (this->field_0x11 == '\0') {
      if ((this_00 == (undefined1 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x3e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      cVar1 = *this_00;
      if (cVar1 == '\0') {
        *this_00 = 1;
      }
      UNLOCK();
      this_01 = (FRHIBuffer *)this_00;
      if (cVar1 != '\0') {
        UE::FMutex::LockSlow((FMutex *)this_00);
      }
    }
    iVar9 = *(int *)(&this->field_0x120 + (longlong)(int)uVar11 * 0x10);
    if (iVar9 == *(int *)(&this->field_0x124 + (longlong)(int)uVar11 * 0x10)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)
                               (&this->field_0x118 + (longlong)(int)uVar11 * 0x10),
                         (int *)(&this->field_0x124 + (longlong)(int)uVar11 * 0x10));
    }
    lVar10 = (longlong)iVar9;
    *(int *)(&this->field_0x120 + (longlong)(int)uVar11 * 0x10) = iVar9 + 1;
    lVar4 = *(longlong *)(&this->field_0x118 + (longlong)(int)uVar11 * 0x10);
    *(FRHIBuffer **)(lVar4 + lVar10 * 0x18) = pFVar12;
    *(uint *)(lVar4 + 8 + lVar10 * 0x18) = uVar3;
    *(uint *)(lVar4 + 0xc + lVar10 * 0x18) = uVar6;
    *(uint *)(lVar4 + 0x10 + lVar10 * 0x18) = uVar8;
    if (this_01 != (FRHIBuffer *)0x0) {
      LOCK();
      aVar2 = *(atomic<unsigned_char> *)&this_01->_padding_;
      *(char *)&this_01->_padding_ = (char)*(atomic<unsigned_char> *)&this_01->_padding_ + -1;
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_01);
      }
    }
  }
  return;
}

// ReleasePooledResource @ 147b83440

void __thiscall
TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
ReleasePooledResource
          (TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
           *this,TRefCountPtr<FRHIBuffer> *param_1)

{
  undefined1 *this_00;
  char cVar1;
  atomic<unsigned_char> aVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  FRHIBuffer *this_01;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FRHIBuffer *pFVar12;
  TRefCountPtr<FRHIBuffer> local_48 [4];
  
  if (*(int *)&this->field_0x170 != -1) {
    pFVar12 = param_1->Reference;
    if (pFVar12 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar12);
    }
    uVar3 = (pFVar12->Desc).Size;
    FRHIResource::Release((FRHIResource *)pFVar12);
    pFVar12 = (FRHIBuffer *)0x0;
    if (local_48 != param_1) {
      pFVar12 = param_1->Reference;
      param_1->Reference = (FRHIBuffer *)0x0;
    }
    uVar6 = GFrameNumberRenderThread;
    uVar8 = FGlobalDynamicMeshPoolPolicy::GetPoolBucketIndex
                      ((FGlobalDynamicMeshPoolPolicy *)&this->field_0x8,uVar3);
    uVar11 = GFrameNumberRenderThread % 3;
    this_00 = &this->field_0x10;
    this_01 = (FRHIBuffer *)0x0;
    if (this->field_0x11 == '\0') {
      if ((this_00 == (undefined1 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x3e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      cVar1 = *this_00;
      if (cVar1 == '\0') {
        *this_00 = 1;
      }
      UNLOCK();
      this_01 = (FRHIBuffer *)this_00;
      if (cVar1 != '\0') {
        UE::FMutex::LockSlow((FMutex *)this_00);
      }
    }
    iVar9 = *(int *)(&this->field_0x120 + (longlong)(int)uVar11 * 0x10);
    if (iVar9 == *(int *)(&this->field_0x124 + (longlong)(int)uVar11 * 0x10)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)
                               (&this->field_0x118 + (longlong)(int)uVar11 * 0x10),
                         (int *)(&this->field_0x124 + (longlong)(int)uVar11 * 0x10));
    }
    lVar10 = (longlong)iVar9;
    *(int *)(&this->field_0x120 + (longlong)(int)uVar11 * 0x10) = iVar9 + 1;
    lVar4 = *(longlong *)(&this->field_0x118 + (longlong)(int)uVar11 * 0x10);
    *(FRHIBuffer **)(lVar4 + lVar10 * 0x18) = pFVar12;
    *(uint *)(lVar4 + 8 + lVar10 * 0x18) = uVar3;
    *(uint *)(lVar4 + 0xc + lVar10 * 0x18) = uVar6;
    *(uint *)(lVar4 + 0x10 + lVar10 * 0x18) = uVar8;
    if (this_01 != (FRHIBuffer *)0x0) {
      LOCK();
      aVar2 = *(atomic<unsigned_char> *)&this_01->_padding_;
      *(char *)&this_01->_padding_ = (char)*(atomic<unsigned_char> *)&this_01->_padding_ + -1;
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_01);
      }
    }
  }
  return;
}

// Tick @ 147caccb0

void __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::Tick
          (TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this,
          FRHICommandListImmediate *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1125630775601921763>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                       ,0x11d,"IsInRenderingThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::DrainPool
            ((TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)
             &this[-1].field_0x30,false);
  return;
}

// IsTickable @ 147cacd10

bool __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::IsTickable
          (TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this)

{
  return true;
}

// NeedsRenderingResumedForRenderingThreadTick @ 147cacd20

bool __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
NeedsRenderingResumedForRenderingThreadTick
          (TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this)

{
  return true;
}

// InitRHI @ 147cacd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::InitRHI
          (TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this,
          FRHICommandListBase *param_1)

{
  FTickableObjectRenderThread::Register((FTickableObjectRenderThread *)&this[-1].field_0x198);
  return;
}

// ReleaseRHI @ 147cacd40

void __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::ReleaseRHI
          (TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this)

{
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)&this[-1].field_0x198);
  TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::DrainPool
            ((TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)
             &this[-1].field_0x20,true);
  return;
}

// Tick @ 147cad3b0

void __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::Tick
          (TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this,
          FRHICommandListImmediate *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1125630775601921763>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                       ,0x11d,"IsInRenderingThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::DrainPool
            ((TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)
             &this[-1].field_0x30,false);
  return;
}

// IsTickable @ 147cad410

bool __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::IsTickable
          (TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this)

{
  return true;
}

// NeedsRenderingResumedForRenderingThreadTick @ 147cad420

bool __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::
NeedsRenderingResumedForRenderingThreadTick
          (TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this)

{
  return true;
}

// InitRHI @ 147cad430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::InitRHI
          (TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this,
          FRHICommandListBase *param_1)

{
  FTickableObjectRenderThread::Register((FTickableObjectRenderThread *)&this[-1].field_0x198);
  return;
}

// ReleaseRHI @ 147cad440

void __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::ReleaseRHI
          (TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this)

{
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)&this[-1].field_0x198);
  TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::DrainPool
            ((TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)
             &this[-1].field_0x20,true);
  return;
}

// ~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> @ 147cc7d40

void __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>
          (TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *this)

{
  *(undefined ***)this =
       &_vftable__for__TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>__;
  *(undefined ***)&this->field_0x178 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__FRenderResource__;
  FRenderResource::~FRenderResource((FRenderResource *)&this->field_0x188);
  *(undefined ***)&this->field_0x178 = &___7FTickableObjectRenderThread__6B_;
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)&this->field_0x178);
  TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
  ~TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>
            ((TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)this);
  return;
}

// ~TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> @ 147cc7db0

void __thiscall
TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::
~TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>
          (TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *this)

{
  *(undefined ***)this =
       &_vftable__for__TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>__;
  *(undefined ***)&this->field_0x178 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__FRenderResource__;
  FRenderResource::~FRenderResource((FRenderResource *)&this->field_0x188);
  *(undefined ***)&this->field_0x178 = &___7FTickableObjectRenderThread__6B_;
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)&this->field_0x178);
  TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::
  ~TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>
            ((TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)this);
  return;
}

