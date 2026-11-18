// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 8

// FD3D12ExplicitDescriptorHeap @ 1459ee280

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ExplicitDescriptorHeap * __thiscall
FD3D12ExplicitDescriptorHeap::FD3D12ExplicitDescriptorHeap
          (FD3D12ExplicitDescriptorHeap *this,FD3D12Device *param_1)

{
  code *pcVar1;
  bool bVar2;
  FD3D12ExplicitDescriptorHeap *pFVar3;
  
  this->_padding_ = (longlong)param_1;
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12ExplicitDescriptorHeap *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->D3DDevice = *(ID3D12Device **)(*(longlong *)&param_1->field_0x10 + 8);
  this->Type = D3D12_DESCRIPTOR_HEAP_TYPE_NUM_TYPES;
  this->D3D12Heap = (ID3D12DescriptorHeap *)0x0;
  this->MaxNumDescriptors = 0;
  this->NumAllocatedDescriptors = 0;
  this->NumWrittenSamplerDescriptors = 0;
  this->DescriptorSize = 0;
  (this->CPUBase).ptr = 0;
  (this->GPUBase).ptr = 0;
  this->bExhaustiveSamplerDeduplication = false;
  (this->HeapCacheEntry).Heap = (ID3D12DescriptorHeap *)0x0;
  (this->HeapCacheEntry).NumDescriptors = 0;
  (this->HeapCacheEntry).Type = D3D12_DESCRIPTOR_HEAP_TYPE_NUM_TYPES;
  (this->HeapCacheEntry).LastUsedFrame = 0;
  (this->HeapCacheEntry).LastUsedTime = 0.0;
  (this->Descriptors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptors).ArrayNum = 0;
  (this->Descriptors).ArrayMax = 0;
  return this;
}

// ~FD3D12ExplicitDescriptorHeap @ 1459f7820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(FD3D12ExplicitDescriptorHeap *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FD3D12DynamicRHI *pFVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  D3D12_DESCRIPTOR_HEAP_TYPE DStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  code *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->D3D12Heap != (ID3D12DescriptorHeap *)0x0) {
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar3)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = FD3D12DynamicRHI::SingleD3DRHI;
    local_88 = (undefined4)(this->HeapCacheEntry).LastUsedFrame;
    uStack_84 = *(undefined4 *)((longlong)&(this->HeapCacheEntry).LastUsedFrame + 4);
    uStack_80 = *(undefined4 *)&(this->HeapCacheEntry).LastUsedTime;
    uStack_7c = *(undefined4 *)((longlong)&(this->HeapCacheEntry).LastUsedTime + 4);
    uStack_70 = *(undefined4 *)&(this->HeapCacheEntry).Heap;
    uStack_6c = *(undefined4 *)((longlong)&(this->HeapCacheEntry).Heap + 4);
    uStack_68 = (this->HeapCacheEntry).NumDescriptors;
    DStack_64 = (this->HeapCacheEntry).Type;
    lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
    local_78 = *(longlong *)(this->_padding_ + 0x1610);
    uStack_60 = local_88;
    uStack_5c = uStack_84;
    uStack_58 = uStack_80;
    uStack_54 = uStack_7c;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar4 = (pFVar2->ObjectsToDelete).ArrayNum;
    piVar1 = &(pFVar2->ObjectsToDelete).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(pFVar2->ObjectsToDelete).AllocatorInstance,piVar1);
    }
    (pFVar2->ObjectsToDelete).ArrayNum = iVar4 + 1;
    pFVar8 = (pFVar2->ObjectsToDelete).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
    local_48 = (code *)0x0;
    local_20 = FMemory::Malloc(0x30,8);
    *local_20 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
    local_20[1] = local_78;
    local_20[2] = CONCAT44(uStack_6c,uStack_70);
    local_20[3] = CONCAT44(DStack_64,uStack_68);
    local_20[4] = CONCAT44(uStack_5c,uStack_60);
    local_20[5] = CONCAT44(uStack_7c,uStack_80);
    if (local_20 + 1 != (longlong *)0x0) {
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::__l2::<lambda_1>,void>
                 ::Call;
    }
    *(undefined4 *)pFVar8 = 9;
    pcVar5 = ::operator_new(0x30);
    pcVar6 = (code *)0x0;
    if (pcVar5 != (code *)0x0) {
      *(code **)pcVar5 = local_48;
      *(longlong **)(pcVar5 + 0x28) = local_20;
      local_20 = (longlong *)0x0;
      *(undefined4 *)(pcVar5 + 0x10) = local_38;
      *(undefined4 *)(pcVar5 + 0x14) = uStack_34;
      *(undefined4 *)(pcVar5 + 0x18) = uStack_30;
      *(undefined4 *)(pcVar5 + 0x1c) = uStack_2c;
      *(longlong *)(pcVar5 + 0x20) = local_28;
      pcVar6 = pcVar5;
      if (*(longlong *)pcVar5 != 0) {
        local_48 = (code *)0x0;
      }
    }
    *(code **)(pFVar8 + 8) = pcVar6;
    if (local_48 != (code *)0x0) {
      plVar7 = (longlong *)&local_38;
      if (local_20 != (longlong *)0x0) {
        plVar7 = local_20;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  pFVar8 = (this->Descriptors).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// Allocate @ 145a01230

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FD3D12ExplicitDescriptorHeap::Allocate(FD3D12ExplicitDescriptorHeap *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  LOCK();
  piVar1 = &this->NumAllocatedDescriptors;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + param_1;
  UNLOCK();
  if (iVar2 + param_1 <= this->MaxNumDescriptors) {
    return iVar2;
  }
  if (this->Type != D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER) {
    uVar4 = GD3D12ExplicitViewDescriptorHeapOverflowReported;
    if ((uint)GD3D12ExplicitViewDescriptorHeapSize <= this->MaxNumDescriptors) {
      do {
        LOCK();
        bVar5 = uVar4 != GD3D12ExplicitViewDescriptorHeapOverflowReported;
        uVar3 = uVar4 | 1;
        if (bVar5) {
          uVar4 = GD3D12ExplicitViewDescriptorHeapOverflowReported;
          uVar3 = GD3D12ExplicitViewDescriptorHeapOverflowReported;
        }
        GD3D12ExplicitViewDescriptorHeapOverflowReported = uVar3;
        UNLOCK();
      } while (bVar5);
      if ((uVar4 == 0) && (1 < (byte)LogD3D12RHI._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    return -1;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  return -1;
}

// CompareDescriptors @ 145a09390

bool __thiscall
FD3D12ExplicitDescriptorHeap::CompareDescriptors
          (FD3D12ExplicitDescriptorHeap *this,int param_1,D3D12_CPU_DESCRIPTOR_HANDLE *param_2,
          uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1;
  if (param_3 != 0) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Descriptors).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(ulong64 *)((this->Descriptors).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) !=
          param_2->ptr) {
        return false;
      }
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 1;
    } while (uVar5 - param_1 < param_3);
  }
  return true;
}

// CopyDescriptors @ 145a09df0

void __thiscall
FD3D12ExplicitDescriptorHeap::CopyDescriptors
          (FD3D12ExplicitDescriptorHeap *this,int param_1,D3D12_CPU_DESCRIPTOR_HANDLE *param_2,
          uint param_3)

{
  FD3D12Device::CopyDescriptors
            (this->D3DDevice,
             (D3D12_CPU_DESCRIPTOR_HANDLE)
             ((ulonglong)(param_1 * this->DescriptorSize) + (this->CPUBase).ptr),param_2,param_3,
             this->Type);
  return;
}

// GetDescriptorCPU @ 145a18630

D3D12_CPU_DESCRIPTOR_HANDLE __thiscall
FD3D12ExplicitDescriptorHeap::GetDescriptorCPU(FD3D12ExplicitDescriptorHeap *this,uint param_1)

{
  undefined4 in_register_00000014;
  int in_R8D;
  
  *(ulonglong *)CONCAT44(in_register_00000014,param_1) =
       (ulonglong)(in_R8D * this->DescriptorSize) + (this->CPUBase).ptr;
  return (D3D12_CPU_DESCRIPTOR_HANDLE)CONCAT44(in_register_00000014,param_1);
}

// GetDescriptorGPU @ 145a18650

D3D12_GPU_DESCRIPTOR_HANDLE __thiscall
FD3D12ExplicitDescriptorHeap::GetDescriptorGPU(FD3D12ExplicitDescriptorHeap *this,uint param_1)

{
  undefined4 in_register_00000014;
  int in_R8D;
  
  *(ulonglong *)CONCAT44(in_register_00000014,param_1) =
       (ulonglong)(in_R8D * this->DescriptorSize) + (this->GPUBase).ptr;
  return (D3D12_GPU_DESCRIPTOR_HANDLE)CONCAT44(in_register_00000014,param_1);
}

// Init @ 145a1d2f0

void __thiscall
FD3D12ExplicitDescriptorHeap::Init
          (FD3D12ExplicitDescriptorHeap *this,uint param_1,D3D12_DESCRIPTOR_HEAP_TYPE param_2)

{
  TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  ID3D12DescriptorHeap *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FEntry *pFVar15;
  ulong64 *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  FEntry local_38;
  
  if ((this->D3D12Heap != (ID3D12DescriptorHeap *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("D3D12Heap == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12ExplicitDescriptorCache.cpp"
                          ,0xd2,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->Type = param_2;
  if ((this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar15 = FD3D12ExplicitDescriptorHeapCache::AllocateHeap
                      (*(FD3D12ExplicitDescriptorHeapCache **)(this->_padding_ + 0x1610),&local_38,
                       this->Type,param_1);
  uVar7 = *(undefined4 *)((longlong)&pFVar15->Heap + 4);
  uVar12 = pFVar15->NumDescriptors;
  DVar8 = pFVar15->Type;
  *(undefined4 *)&(this->HeapCacheEntry).Heap = *(undefined4 *)&pFVar15->Heap;
  *(undefined4 *)((longlong)&(this->HeapCacheEntry).Heap + 4) = uVar7;
  (this->HeapCacheEntry).NumDescriptors = uVar12;
  (this->HeapCacheEntry).Type = DVar8;
  uVar7 = *(undefined4 *)((longlong)&pFVar15->LastUsedFrame + 4);
  uVar9 = *(undefined4 *)&pFVar15->LastUsedTime;
  uVar10 = *(undefined4 *)((longlong)&pFVar15->LastUsedTime + 4);
  *(int *)&(this->HeapCacheEntry).LastUsedFrame = (int)pFVar15->LastUsedFrame;
  *(undefined4 *)((longlong)&(this->HeapCacheEntry).LastUsedFrame + 4) = uVar7;
  *(undefined4 *)&(this->HeapCacheEntry).LastUsedTime = uVar9;
  *(undefined4 *)((longlong)&(this->HeapCacheEntry).LastUsedTime + 4) = uVar10;
  pIVar3 = (this->HeapCacheEntry).Heap;
  this->MaxNumDescriptors = (this->HeapCacheEntry).NumDescriptors;
  this->D3D12Heap = pIVar3;
  puVar16 = (ulong64 *)(**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,local_res8);
  pIVar3 = this->D3D12Heap;
  (this->CPUBase).ptr = *puVar16;
  puVar16 = (ulong64 *)(**(code **)((longlong)*pIVar3 + 0x50))(pIVar3,local_res20);
  (this->GPUBase).ptr = *puVar16;
  if (((this->CPUBase).ptr == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CPUBase.ptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12ExplicitDescriptorCache.cpp"
                          ,0xdd,
                          L"Explicit descriptor heap of type %d returned from descriptor heap cache is invalid."
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar4 = this->_padding_;
  if ((*(longlong *)(lVar4 + 0x10) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8);
  uVar12 = (**(code **)(*plVar5 + 0x78))(plVar5,this->Type);
  this->DescriptorSize = uVar12;
  bVar11 = GD3D12ExplicitDeduplicateSamplers == 1;
  this->bExhaustiveSamplerDeduplication = bVar11;
  if ((bVar11) && (param_2 == D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER)) {
    pTVar1 = &this->Descriptors;
    iVar14 = (this->Descriptors).ArrayNum;
    piVar2 = &(this->Descriptors).ArrayNum;
    uVar12 = this->MaxNumDescriptors;
    if (iVar14 < (int)uVar12) {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar12 - iVar14,&pTVar1->AllocatorInstance,piVar2,
                          &(this->Descriptors).ArrayMax);
      memset((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 8,0,
             (longlong)(int)(uVar12 - iVar14) << 3);
      return;
    }
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar14) {
      uVar17 = iVar14 - uVar12;
      if (((int)(uVar17 | uVar12) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar17 != 0) {
        _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 8;
        iVar14 = (*piVar2 - uVar17) - uVar12;
        if (iVar14 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar17 * 8,(longlong)iVar14 << 3);
        }
        *piVar2 = *piVar2 - uVar17;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,*piVar2,&(this->Descriptors).ArrayMax);
      }
    }
  }
  return;
}

