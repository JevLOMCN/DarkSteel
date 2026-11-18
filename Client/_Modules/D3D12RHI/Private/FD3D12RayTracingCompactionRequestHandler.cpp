// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// FD3D12RayTracingCompactionRequestHandler @ 1459efe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FD3D12RayTracingCompactionRequestHandler * __thiscall
FD3D12RayTracingCompactionRequestHandler::FD3D12RayTracingCompactionRequestHandler
          (FD3D12RayTracingCompactionRequestHandler *this,FD3D12Device *param_1)

{
  TRefCountPtr<FRHIStagingBuffer> *pTVar1;
  longlong lVar2;
  FD3D12Buffer *pFVar3;
  FRHIStagingBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  FD3D12RayTracingCompactionRequestHandler *pFVar6;
  FD3D12Buffer *pFVar7;
  undefined1 auStackY_158 [32];
  TRefCountPtr<FRHIStagingBuffer> local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  wchar_t *local_100;
  FResourceArrayUploadInterface *pFStack_f8;
  ERHIAccess local_f0;
  ERHIBufferInitAction EStack_ec;
  FNameEntryId FStack_e8;
  uint uStack_e4;
  FNameEntryId FStack_e0;
  uint uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  ulong64 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  FRHIBufferCreateDesc local_98;
  D3D12_RESOURCE_DESC local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this->_padding_ = (longlong)param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  uStack_bc = 0x10001;
  uStack_b8 = 0;
  (this->PendingRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRequests).ArrayNum = 0;
  (this->PendingRequests).ArrayMax = 0;
  pTVar1 = &this->PostBuildInfoStagingBuffer;
  (this->ActiveRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveRequests).ArrayNum = 0;
  (this->ActiveRequests).ArrayMax = 0;
  (this->ActiveBLASGPUAddresses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBLASGPUAddresses).ArrayNum = 0;
  (this->ActiveBLASGPUAddresses).ArrayMax = 0;
  (this->PostBuildInfoBuffer).Reference = (FD3D12Buffer *)0x0;
  pTVar1->Reference = (FRHIStagingBuffer *)0x0;
  (this->PostBuildInfoBufferReadbackSyncPoint).Reference = (FD3D12SyncPoint *)0x0;
  local_c8 = (longlong)GD3D12RayTracingMaxBatchedCompaction << 3;
  local_d8 = 1;
  uStack_d0 = 0;
  local_60._4_4_ = uStack_d4;
  local_60.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
  uStack_c0 = 1;
  local_60.Height = 1;
  local_60.DepthOrArraySize = 1;
  local_60.MipLevels = 1;
  uStack_b4 = 1;
  uStack_b0 = 0;
  uStack_ac = 1;
  local_60.Alignment = 0;
  local_a8 = 4;
  local_60.Format = DXGI_FORMAT_UNKNOWN;
  local_60.SampleDesc.Count = 1;
  local_60.SampleDesc.Quality = 0;
  local_60.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
  local_110 = (undefined4)local_c8;
  uStack_10c = 0;
  local_60._52_4_ = uStack_a4;
  local_60.Flags = D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;
  uStack_108 = 0x28;
  local_100 = L"PostBuildInfoBuffer";
  pFStack_f8 = (FResourceArrayUploadInterface *)0x0;
  EStack_ec = Default;
  FStack_e8.Value = 0;
  uStack_e4 = 0;
  FStack_e0.Value = 0;
  uStack_dc = 0;
  local_f0 = UAVCompute;
  local_60.Width = local_c8;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FD3D12RayTracingCompactionRequestHandler *)(*pcVar4)();
    return pFVar6;
  }
  iStack_104 = 1 << ((byte)*(undefined4 *)(this->_padding_ + 8) & 0x1f);
  local_98._padding_ = CONCAT44(uStack_10c,local_110);
  local_98._padding_ = CONCAT44(iStack_104,uStack_108);
  local_98.DebugName = local_100;
  local_98.InitialData = pFStack_f8;
  local_98.OwnerName.Number = uStack_dc;
  local_98.OwnerName.ComparisonIndex.Value = FStack_e0.Value;
  local_98.InitAction = EStack_ec;
  local_98.InitialState = local_f0;
  local_98.ClassName.Number = uStack_e4;
  local_98.ClassName.ComparisonIndex.Value = FStack_e8.Value;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FD3D12RayTracingCompactionRequestHandler *)(*pcVar4)();
    return pFVar6;
  }
  lVar2 = this->_padding_;
  if ((*(longlong *)(lVar2 + 0x10) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FD3D12RayTracingCompactionRequestHandler *)(*pcVar4)();
    return pFVar6;
  }
  pFVar7 = FD3D12Adapter::CreateRHIBuffer
                     (*(FD3D12Adapter **)(lVar2 + 0x10),&local_60,8,&local_98,MultiState,UAVCompute,
                      false,(ID3D12ResourceAllocator *)0x0);
  pFVar3 = (this->PostBuildInfoBuffer).Reference;
  if (pFVar3 != pFVar7) {
    (this->PostBuildInfoBuffer).Reference = pFVar7;
    if (pFVar7 != (FD3D12Buffer *)0x0) {
      (**(code **)(pFVar7->_padding_ + 8))(&pFVar7->_padding_,local_a0);
    }
    if (pFVar3 != (FD3D12Buffer *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x10))();
    }
  }
  SetD3D12ResourceName
            ((FD3D12Resource *)((this->PostBuildInfoBuffer).Reference)->_padding_,
             L"PostBuildInfoBuffer");
  (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_118);
  if (pTVar1 != &local_118) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = local_118.Reference;
    local_118.Reference = (FRHIStagingBuffer *)0x0;
    if (this_00 == (FRHIStagingBuffer *)0x0) {
      return this;
    }
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_118.Reference != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_118.Reference);
  }
  return this;
}

// ReleaseRequest @ 145a2afe0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall
FD3D12RayTracingCompactionRequestHandler::ReleaseRequest
          (FD3D12RayTracingCompactionRequestHandler *this,FD3D12RayTracingGeometry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FD3D12RayTracingGeometry *local_res10 [2];
  
  lpCriticalSection = &this->CS;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->PendingRequests).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar2 + (longlong)(this->PendingRequests).ArrayMax * 8)) &&
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
  iVar1 = (this->PendingRequests).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (this->PendingRequests).AllocatorInstance.Data;
    iVar11 = 0;
    bVar4 = *(FD3D12RayTracingGeometry **)pFVar2 != local_res10[0];
    lVar7 = 0;
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(FD3D12RayTracingGeometry **)(pFVar2 + lVar7 * 8) != local_res10[0]));
      if (bVar4 != false) {
        if (iVar11 != iVar8) {
          memmove(pFVar2 + (longlong)iVar11 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
        }
        iVar11 = iVar11 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    (this->PendingRequests).ArrayNum = iVar11;
    if (0 < iVar1 - iVar11) {
LAB_145a2b259:
      bVar4 = true;
      goto LAB_145a2b1dd;
    }
  }
  uVar10 = 0;
  if (0 < (this->ActiveBLASGPUAddresses).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ActiveRequests).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FD3D12RayTracingGeometry **)((this->ActiveRequests).AllocatorInstance.Data + lVar7) ==
          local_res10[0]) {
        uVar6 = 0;
        if ((int)uVar10 < (this->ActiveRequests).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        *(undefined8 *)((this->ActiveRequests).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) =
             0;
        goto LAB_145a2b259;
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar10 < (this->ActiveBLASGPUAddresses).ArrayNum);
  }
  bVar4 = false;
LAB_145a2b1dd:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// RequestCompact @ 145a2e560

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingCompactionRequestHandler::RequestCompact
          (FD3D12RayTracingCompactionRequestHandler *this,FD3D12RayTracingGeometry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ERayTracingAccelerationStructureFlags EVar5;
  int iVar6;
  FD3D12RayTracingGeometry *local_res10 [3];
  
  local_res10[0] = param_1;
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_res10[0]->AccelerationStructureBuffers[*(uint *)(this->_padding_ + 8)].Reference ==
      (FD3D12Buffer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRTGeometry->AccelerationStructureBuffers[GPUIndex]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x2f8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar5 = GetRayTracingAccelerationStructureBuildFlags
                    ((FRayTracingGeometryInitializer *)&local_res10[0]->_padding_);
  if ((((EVar5 & AllowCompaction) == None) || ((EVar5 & FastTrace) == None)) ||
     ((EVar5 & AllowUpdate) != None)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAllFlags(GeometryBuildFlags, ERayTracingAccelerationStructureFlags::AllowCompaction) && EnumHasAllFlags(GeometryBuildFlags, ERayTracingAccelerationStructureFlags::FastTrace) && !EnumHasAnyFlags(GeometryBuildFlags, ERayTracingAccelerationStructureFlags::AllowUpdate)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x2fc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->PendingRequests).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2 + (longlong)(this->PendingRequests).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (this->PendingRequests).ArrayNum;
    piVar1 = &(this->PendingRequests).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->PendingRequests).AllocatorInstance,piVar1);
    }
    (this->PendingRequests).ArrayNum = iVar6 + 1;
    *(FD3D12RayTracingGeometry **)
     ((this->PendingRequests).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Update @ 145a36600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingCompactionRequestHandler::Update
          (FD3D12RayTracingCompactionRequestHandler *this,FD3D12CommandContext *param_1)

{
  int *piVar1;
  uint uVar2;
  FD3D12SyncPoint *pFVar3;
  FRHIStagingBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  FD3D12Resource *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FD3D12SyncPoint *pFVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_c8 [32];
  undefined1 local_78 [4];
  uint local_74;
  longlong local_70;
  FLLMScope local_68 [2];
  undefined8 local_60;
  FMemScope local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name797,L"FD3D12RT/Compaction");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_68,LLMScope_Name797,false,None,Default,true);
  FMemScope::FMemScope(&local_58,&LLMScope_Name797,true);
  if (&this->CS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar16 = 0;
  local_74 = *(uint *)(this->_padding_ + 8);
  if (0 < (this->ActiveBLASGPUAddresses).ArrayNum) {
    pFVar3 = (this->PostBuildInfoBufferReadbackSyncPoint).Reference;
    if (pFVar3 != (FD3D12SyncPoint *)0x0) {
      if (((pFVar3->GraphEvent).Reference == (FBaseGraphTask *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("GraphEvent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.h"
                             ,0x6d,
                             L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((pFVar3->GraphEvent).Reference)->field_0xd0 == '\0') goto LAB_145a36c81;
    }
    pFVar4 = (this->PostBuildInfoStagingBuffer).Reference;
    lVar13 = (**(code **)(pFVar4->_padding_ + 0x10))
                       (pFVar4,0,(this->ActiveBLASGPUAddresses).ArrayNum << 3);
    uVar2 = local_74;
    uVar18 = uVar16;
    if (0 < (this->ActiveBLASGPUAddresses).ArrayNum) {
      do {
        uVar17 = (uint)uVar16;
        uVar10 = 0;
        if ((int)uVar17 < (this->ActiveRequests).ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)((this->ActiveRequests).AllocatorInstance.Data + uVar18) != 0) {
          uVar10 = 0;
          if ((int)uVar17 < (this->ActiveRequests).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FD3D12RayTracingGeometry::CompactAccelerationStructure
                    (*(FD3D12RayTracingGeometry **)
                      ((this->ActiveRequests).AllocatorInstance.Data + uVar18),param_1,uVar2,
                     *(ulong64 *)(lVar13 + uVar18));
        }
        uVar16 = (ulonglong)(uVar17 + 1);
        uVar18 = uVar18 + 8;
      } while ((int)(uVar17 + 1) < (this->ActiveBLASGPUAddresses).ArrayNum);
    }
    (**(code **)(((this->PostBuildInfoStagingBuffer).Reference)->_padding_ + 0x18))();
    pFVar3 = (this->PostBuildInfoBufferReadbackSyncPoint).Reference;
    if (pFVar3 != (FD3D12SyncPoint *)0x0) {
      (this->PostBuildInfoBufferReadbackSyncPoint).Reference = (FD3D12SyncPoint *)0x0;
      plVar15 = &pFVar3->_padding_;
      LOCK();
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((((int)lVar13 == 1) && (plVar15 != (longlong *)0x0)) && (pFVar3 != (FD3D12SyncPoint *)0x0)
         ) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    uVar2 = (this->ActiveRequests).ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &(this->ActiveRequests).ArrayMax;
    (this->ActiveRequests).ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&(this->ActiveRequests).AllocatorInstance,0,piVar1);
    }
    uVar2 = (this->ActiveBLASGPUAddresses).ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &(this->ActiveBLASGPUAddresses).ArrayMax;
    (this->ActiveBLASGPUAddresses).ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&(this->ActiveBLASGPUAddresses).AllocatorInstance,0,piVar1);
    }
  }
  pFVar19 = (this->PendingRequests).AllocatorInstance.Data;
  iVar12 = (this->PendingRequests).ArrayNum;
  uVar16 = (ulonglong)local_74;
  pFVar7 = pFVar19 + (longlong)iVar12 * 8;
  while( true ) {
    if ((this->PendingRequests).ArrayNum != iVar12) {
      local_78[0] = 0;
      `TCheckedPointerIterator<FD3D12RayTracingGeometry_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (pFVar19 == pFVar7) break;
    local_70 = *(longlong *)pFVar19;
    pFVar5 = (this->ActiveRequests).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 <
         pFVar5 + (longlong)(this->ActiveRequests).ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (this->ActiveRequests).ArrayNum;
    piVar1 = &(this->ActiveRequests).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->ActiveRequests).AllocatorInstance,piVar1);
    }
    (this->ActiveRequests).ArrayNum = iVar11 + 1;
    *(longlong *)((this->ActiveRequests).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_70;
    pFVar5 = (this->ActiveBLASGPUAddresses).AllocatorInstance.Data;
    lVar13 = *(longlong *)(local_70 + 0x168 + uVar16 * 8);
    local_60 = *(undefined8 *)(lVar13 + 0x188);
    if (((pFVar5 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 <
         pFVar5 + (longlong)(this->ActiveBLASGPUAddresses).ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (this->ActiveBLASGPUAddresses).ArrayNum;
    piVar1 = &(this->ActiveBLASGPUAddresses).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->ActiveBLASGPUAddresses).AllocatorInstance,piVar1);
    }
    (this->ActiveBLASGPUAddresses).ArrayNum = iVar11 + 1;
    *(undefined8 *)((this->ActiveBLASGPUAddresses).AllocatorInstance.Data + (longlong)iVar11 * 8) =
         local_60;
    pFVar6 = *(FD3D12Resource **)(lVar13 + 0x140);
    if ((pFVar6 == (FD3D12Resource *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                           ,0x1a5,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar6);
    if (GD3D12RayTracingMaxBatchedCompaction <= (this->ActiveRequests).ArrayNum) break;
    pFVar19 = pFVar19 + 8;
  }
  uVar2 = (this->ActiveRequests).ArrayNum;
  if (0 < (int)uVar2) {
    uVar10 = 0;
    if ((int)uVar2 <= (this->PendingRequests).ArrayNum) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (this->PendingRequests).AllocatorInstance.Data;
    iVar12 = (this->PendingRequests).ArrayNum - uVar2;
    if (iVar12 != 0) {
      memmove(pFVar7,pFVar7 + (longlong)(int)uVar2 * 8,(longlong)iVar12 << 3);
    }
    piVar1 = &(this->PendingRequests).ArrayNum;
    *piVar1 = *piVar1 - uVar2;
    local_44 = 0;
    local_50 = ((this->PostBuildInfoBuffer).Reference)->_padding_;
    local_48 = 0;
    FD3D12ContextCommon::AddGlobalBarrier((FD3D12ContextCommon *)param_1,BVHWrite,BVHRead);
    FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)param_1);
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    plVar15 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x48);
    piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar15 + 0x248))
              (plVar15,&local_50,(this->ActiveBLASGPUAddresses).ArrayNum,
               (this->ActiveBLASGPUAddresses).AllocatorInstance.Data);
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)param_1,
               (FD3D12Resource *)((this->PostBuildInfoBuffer).Reference)->_padding_,UAVCompute,
               CopySrc,0);
    FD3D12CommandContext::RHICopyToStagingBuffer
              ((FD3D12CommandContext *)&param_1->field_0x1c0,
               (FRHIBuffer *)(this->PostBuildInfoBuffer).Reference,
               (this->PostBuildInfoStagingBuffer).Reference,0,
               (this->ActiveBLASGPUAddresses).ArrayNum << 3);
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)param_1,
               (FD3D12Resource *)((this->PostBuildInfoBuffer).Reference)->_padding_,CopySrc,
               UAVCompute,0);
    pFVar14 = FD3D12ContextCommon::GetContextSyncPoint((FD3D12ContextCommon *)param_1);
    pFVar3 = (this->PostBuildInfoBufferReadbackSyncPoint).Reference;
    if (pFVar3 != pFVar14) {
      (this->PostBuildInfoBufferReadbackSyncPoint).Reference = pFVar14;
      if (pFVar14 != (FD3D12SyncPoint *)0x0) {
        LOCK();
        *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar3 != (FD3D12SyncPoint *)0x0) {
        plVar15 = &pFVar3->_padding_;
        LOCK();
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((((int)lVar13 == 1) && (plVar15 != (longlong *)0x0)) &&
           (pFVar3 != (FD3D12SyncPoint *)0x0)) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
LAB_145a36c81:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CS);
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_68);
  return;
}

